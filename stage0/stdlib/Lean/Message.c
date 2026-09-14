// Lean compiler output
// Module: Lean.Message
// Imports: public import Init.Data.Slice.Array public import Lean.Util.PPExt public import Lean.Util.Sorry import Init.Data.String.Search import Init.Data.Format.Macro import Init.Data.Iterators.Consumers.Collect import Init.Data.String.Length
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
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_formatRawGoal(lean_object*);
lean_object* l_Lean_ppGoal(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
double lean_float_sub(double, double);
lean_object* lean_float_to_string(double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_beq(double, double);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ppTerm(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_ppExprWithInfos(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_instToJsonPosition_toJson(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_simpMacroScopes(lean_object*);
lean_object* l_Lean_ppConstNameWithInfos(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_ofKernelEnv(lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Level_format(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_ppLevel(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedMVarId_default;
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_List_getLast_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Option_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
extern lean_object* l_Lean_instInhabitedPosition_default;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__0 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__0_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__1 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__1_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__2 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__2_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__3 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__3_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__4 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__4_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__5 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedMessageSeverity_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedMessageSeverity;
LEAN_EXPORT uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqMessageSeverity_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqMessageSeverity_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instBEqMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqMessageSeverity = (const lean_object*)&l_Lean_instBEqMessageSeverity___closed__0_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "information"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__0_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__0_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__1 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__1_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__2 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__3 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__3_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__4 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__5 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonMessageSeverity_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instToJsonMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonMessageSeverity = (const lean_object*)&l_Lean_instToJsonMessageSeverity___closed__0_value;
static const lean_string_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value)}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__1_value;
static const lean_string_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__2 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value)}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__3 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__5 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__6 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonMessageSeverity_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonMessageSeverity = (const lean_object*)&l_Lean_instFromJsonMessageSeverity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString___boxed(lean_object*);
static const lean_closure_object l_Lean_instToStringMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageSeverity_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instToStringMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringMessageSeverity = (const lean_object*)&l_Lean_instToStringMessageSeverity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedTraceResult_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedTraceResult;
LEAN_EXPORT uint8_t l_Lean_instBEqTraceResult_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqTraceResult_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqTraceResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqTraceResult_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqTraceResult___closed__0 = (const lean_object*)&l_Lean_instBEqTraceResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqTraceResult = (const lean_object*)&l_Lean_instBEqTraceResult___closed__0_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TraceResult.success"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__0 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__1 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__1_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TraceResult.failure"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__2 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__3 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__3_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.TraceResult.error"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__4 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__5 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprTraceResult_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTraceResult_repr___closed__6;
static lean_once_cell_t l_Lean_instReprTraceResult_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTraceResult_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprTraceResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprTraceResult_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprTraceResult___closed__0 = (const lean_object*)&l_Lean_instReprTraceResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprTraceResult = (const lean_object*)&l_Lean_instReprTraceResult___closed__0_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "✅️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__0 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__0_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "❌️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__1 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__1_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 2, .m_data = "💥️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__2 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedMessageData_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageData_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageData_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageData;
static const lean_string_object l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
static const lean_string_object l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
static const lean_ctor_object l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value_aux_0),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
static lean_once_cell_t l_Lean_instImpl___closed__3_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instImpl___closed__3_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
LEAN_EXPORT lean_object* l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
LEAN_EXPORT lean_object* l_Lean_instTypeNameMessageData;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hasTag___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MessageData_kind___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_kind___closed__0;
LEAN_EXPORT lean_object* l_Lean_MessageData_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_kind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_originatingSyntax_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_isTrace(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isTrace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_composePreservingKind(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MessageData_nil___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_nil___closed__0;
LEAN_EXPORT lean_object* l_Lean_MessageData_nil;
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofSyntax___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofSyntax___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofSyntax___closed__0 = (const lean_object*)&l_Lean_MessageData_ofSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofExpr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofLevel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofLevel___closed__0 = (const lean_object*)&l_Lean_MessageData_ofLevel___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofName(lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofConstName___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__0 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__0_value;
static const lean_string_object l_Lean_MessageData_ofConstName___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fullNames"};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__1 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_ofConstName___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_MessageData_ofConstName___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 29, 178, 193, 83, 135, 18, 31)}};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__2 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_withExprHover___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Delab"};
static const lean_object* l_Lean_MessageData_withExprHover___closed__0 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__0_value;
static const lean_string_object l_Lean_MessageData_withExprHover___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withExprHover"};
static const lean_object* l_Lean_MessageData_withExprHover___closed__1 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_withExprHover___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 78, 224, 2, 255, 4, 162, 217)}};
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value_aux_0),((lean_object*)&l_Lean_MessageData_withExprHover___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 205, 246, 77, 218, 147, 213, 253)}};
static const lean_object* l_Lean_MessageData_withExprHover___closed__2 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value;
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MessageData_withExprHover___closed__3 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0;
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1;
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2;
LEAN_EXPORT uint8_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hasSyntheticSorry___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "maxTraceChildren"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(148, 113, 99, 32, 64, 25, 169, 239)}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Maximum number of trace node children to display"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(175, 61, 140, 215, 80, 247, 40, 222)}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_maxTraceChildren;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_MessageData_formatAux_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MessageData_formatAux___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_MessageData_formatAux___boxed__const__1 = (const lean_object*)&l_Lean_MessageData_formatAux___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_mkErrorStringWithPos___closed__1_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__0 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__0_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_MessageData_formatAux___closed__1 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__1_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__2 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__2_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_MessageData_formatAux___closed__3 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__3_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__4 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__4_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_MessageData_formatAux___closed__5 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__5_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__5_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__6 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__6_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l_Lean_MessageData_formatAux___closed__7 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__7_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__7_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__8 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__8_value;
static lean_once_cell_t l_Lean_MessageData_formatAux___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_MessageData_formatAux___closed__9;
static const lean_string_object l_Lean_MessageData_formatAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.Message"};
static const lean_object* l_Lean_MessageData_formatAux___closed__10 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__10_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.MessageData.formatAux"};
static const lean_object* l_Lean_MessageData_formatAux___closed__11 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__11_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "MessageData.ofLazy: expected MessageData in Dynamic, got "};
static const lean_object* l_Lean_MessageData_formatAux___closed__12 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MessageData_format___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_format___closed__0;
LEAN_EXPORT lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_instAppend___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instAppend___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instAppend___closed__0 = (const lean_object*)&l_Lean_MessageData_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instAppend = (const lean_object*)&l_Lean_MessageData_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeString___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormat, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value),((lean_object*)&l_Lean_MessageData_instCoeString___closed__0_value)} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__2 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeString = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeFormat = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
static const lean_closure_object l_Lean_MessageData_instCoeLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofLevel, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeLevel___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeLevel = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeExpr = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeName___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeName = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofSyntax, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeSyntax___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeSyntax = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeMVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeMVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeMVarId___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeMVarId = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
static const lean_string_object l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeOptionExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeOptionExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeOptionExpr = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_arrayExpr_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__0;
static const lean_string_object l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__1 = (const lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_arrayExpr_toMessageData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value)}};
static const lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__2 = (const lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeArrayExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeArrayExpr = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_bracket(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_paren(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_sbracket(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_Lean_MessageData_ofList___closed__0 = (const lean_object*)&l_Lean_MessageData_ofList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_ofList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_ofList___closed__1 = (const lean_object*)&l_Lean_MessageData_ofList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__2;
static const lean_string_object l_Lean_MessageData_ofList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_MessageData_ofList___closed__3 = (const lean_object*)&l_Lean_MessageData_ofList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_ofList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_ofList___closed__4 = (const lean_object*)&l_Lean_MessageData_ofList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__5;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__6;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__7;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofArray(lean_object*);
static const lean_string_object l_Lean_MessageData_orList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "– none –"};
static const lean_object* l_Lean_MessageData_orList___closed__0 = (const lean_object*)&l_Lean_MessageData_orList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__1 = (const lean_object*)&l_Lean_MessageData_orList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__2;
static const lean_string_object l_Lean_MessageData_orList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l_Lean_MessageData_orList___closed__3 = (const lean_object*)&l_Lean_MessageData_orList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__4 = (const lean_object*)&l_Lean_MessageData_orList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__5;
static const lean_string_object l_Lean_MessageData_orList___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", or "};
static const lean_object* l_Lean_MessageData_orList___closed__6 = (const lean_object*)&l_Lean_MessageData_orList___closed__6_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__6_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__7 = (const lean_object*)&l_Lean_MessageData_orList___closed__7_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__8;
LEAN_EXPORT lean_object* l_Lean_MessageData_orList(lean_object*);
static const lean_string_object l_Lean_MessageData_andList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* l_Lean_MessageData_andList___closed__0 = (const lean_object*)&l_Lean_MessageData_andList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_andList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_andList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_andList___closed__1 = (const lean_object*)&l_Lean_MessageData_andList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_andList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_andList___closed__2;
static const lean_string_object l_Lean_MessageData_andList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", and "};
static const lean_object* l_Lean_MessageData_andList___closed__3 = (const lean_object*)&l_Lean_MessageData_andList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_andList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_andList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_andList___closed__4 = (const lean_object*)&l_Lean_MessageData_andList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_andList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_andList___closed__5;
LEAN_EXPORT lean_object* l_Lean_MessageData_andList(lean_object*);
static lean_once_cell_t l_Lean_MessageData_note___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__0;
static const lean_string_object l_Lean_MessageData_note___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Note: "};
static const lean_object* l_Lean_MessageData_note___closed__1 = (const lean_object*)&l_Lean_MessageData_note___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_note___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_note___closed__1_value)}};
static const lean_object* l_Lean_MessageData_note___closed__2 = (const lean_object*)&l_Lean_MessageData_note___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_note___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__3;
static lean_once_cell_t l_Lean_MessageData_note___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__4;
LEAN_EXPORT lean_object* l_Lean_MessageData_note(lean_object*);
static const lean_string_object l_Lean_MessageData_hint_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Hint: "};
static const lean_object* l_Lean_MessageData_hint_x27___closed__0 = (const lean_object*)&l_Lean_MessageData_hint_x27___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_hint_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_hint_x27___closed__0_value)}};
static const lean_object* l_Lean_MessageData_hint_x27___closed__1 = (const lean_object*)&l_Lean_MessageData_hint_x27___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_hint_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint_x27___closed__2;
static lean_once_cell_t l_Lean_MessageData_hint_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint_x27___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_hint_x27(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofList, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeList___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeList___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeList = (const lean_object*)&l_Lean_MessageData_instCoeList___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeListExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeListExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeListExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeListExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeListExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeListExpr = (const lean_object*)&l_Lean_MessageData_instCoeListExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPosition_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fileName"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "endPos"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "keepFullRange"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "severity"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isSilent"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caption"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value;
static const lean_closure_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9_value;
static const lean_array_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getStr_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0_value;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "BaseMessage"};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 105, 232, 242, 0, 63, 252, 70)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 201, 140, 230, 1, 55, 95, 217)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonPosition_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Option_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value)} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 71, 4, 163, 123, 133, 137, 84)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getBool_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 109, 20, 206, 1, 23, 246, 165)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(220, 87, 21, 107, 78, 188, 130, 35)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(6, 63, 220, 237, 219, 125, 166, 5)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(42, 121, 35, 234, 39, 185, 10, 205)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(157, 185, 242, 82, 251, 25, 14, 198)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41;
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToJsonSerialMessage_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_instToJsonSerialMessage_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonSerialMessage_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonSerialMessage_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonSerialMessage_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonSerialMessage___closed__0 = (const lean_object*)&l_Lean_instToJsonSerialMessage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonSerialMessage = (const lean_object*)&l_Lean_instToJsonSerialMessage___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SerialMessage"};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 10, 29, 109, 171, 11, 228, 164)}};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__2;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__3;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__4;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__5;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__6;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__7;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__8;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__9;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__10;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__11;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__12;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__13;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__14;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__15;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__16;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__17;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__18;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__19;
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonSerialMessage_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 186, 66, 236, 16, 221, 215, 158)}};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__20 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__20_value;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__21;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__22;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__23;
LEAN_EXPORT lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonSerialMessage_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonSerialMessage___closed__0 = (const lean_object*)&l_Lean_instFromJsonSerialMessage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonSerialMessage = (const lean_object*)&l_Lean_instFromJsonSerialMessage___closed__0_value;
static const lean_string_object l_Lean_errorNameSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_errorNameSuffix___closed__0 = (const lean_object*)&l_Lean_errorNameSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_errorNameSuffix = (const lean_object*)&l_Lean_errorNameSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_kindOfErrorName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagWithErrorName(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nested"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0 = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_stripNestedTags(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toMessage(lean_object*);
static const lean_ctor_object l_Lean_SerialMessage_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value)}};
static const lean_object* l_Lean_SerialMessage_toString___closed__0 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__0_value;
static const lean_ctor_object l_Lean_SerialMessage_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value)}};
static const lean_object* l_Lean_SerialMessage_toString___closed__1 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__1_value;
static const lean_string_object l_Lean_SerialMessage_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l_Lean_SerialMessage_toString___closed__2 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lean_SerialMessage_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SerialMessage_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SerialMessage_instToString___closed__0 = (const lean_object*)&l_Lean_SerialMessage_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SerialMessage_instToString = (const lean_object*)&l_Lean_SerialMessage_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Message_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_kind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Message_isTrace(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_isTrace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_serialize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_serialize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Message_toString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toJson___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageLog_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageLog;
LEAN_EXPORT lean_object* l_Lean_MessageLog_empty;
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasUnreported(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasUnreported___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageLog_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageLog_append, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageLog_instAppend___closed__0 = (const lean_object*)&l_Lean_MessageLog_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageLog_instAppend = (const lean_object*)&l_Lean_MessageLog_instAppend___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasErrors___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_markAllReported(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToWarnings(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_getInfoMessages(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_getWarningMessages(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nestD(lean_object*);
LEAN_EXPORT lean_object* l_Lean_indentD(lean_object*);
LEAN_EXPORT lean_object* l_Lean_indentExpr(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_inlineExpr_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__0;
static const lean_string_object l_Lean_inlineExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_inlineExpr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExpr___lam__0___closed__1_value)}};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__2 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__3;
static const lean_string_object l_Lean_inlineExpr___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__4 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_inlineExpr___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExpr___lam__0___closed__4_value)}};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__5 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_inlineExprTrailing___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_inlineExprTrailing___lam__0___closed__0 = (const lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_inlineExprTrailing___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__0_value)}};
static const lean_object* l_Lean_inlineExprTrailing___lam__0___closed__1 = (const lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_inlineExprTrailing___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExprTrailing___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing(lean_object*, lean_object*);
static const lean_string_object l_Lean_aquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "「"};
static const lean_object* l_Lean_aquote___closed__0 = (const lean_object*)&l_Lean_aquote___closed__0_value;
static const lean_ctor_object l_Lean_aquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_aquote___closed__0_value)}};
static const lean_object* l_Lean_aquote___closed__1 = (const lean_object*)&l_Lean_aquote___closed__1_value;
static lean_once_cell_t l_Lean_aquote___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_aquote___closed__2;
static const lean_string_object l_Lean_aquote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "」"};
static const lean_object* l_Lean_aquote___closed__3 = (const lean_object*)&l_Lean_aquote___closed__3_value;
static const lean_ctor_object l_Lean_aquote___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_aquote___closed__3_value)}};
static const lean_object* l_Lean_aquote___closed__4 = (const lean_object*)&l_Lean_aquote___closed__4_value;
static lean_once_cell_t l_Lean_aquote___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_aquote___closed__5;
LEAN_EXPORT lean_object* l_Lean_aquote(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_stringToMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_stringToMessageData___closed__0 = (const lean_object*)&l_Lean_stringToMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataExpr = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataLevel = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataName = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
static const lean_closure_object l_Lean_instToMessageDataString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_stringToMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataString___closed__0 = (const lean_object*)&l_Lean_instToMessageDataString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataString = (const lean_object*)&l_Lean_instToMessageDataString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataSyntax = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataFormat = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataMVarId = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
static const lean_closure_object l_Lean_instToMessageDataMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToMessageDataMessageData___closed__0 = (const lean_object*)&l_Lean_instToMessageDataMessageData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataMessageData = (const lean_object*)&l_Lean_instToMessageDataMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToMessageDataSubarray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToMessageDataSubarray___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataSubarray___redArg___closed__0 = (const lean_object*)&l_Lean_instToMessageDataSubarray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "some ("};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instToMessageDataOption___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__2;
static const lean_ctor_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_mkErrorStringWithPos___closed__4_value)}};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_instToMessageDataOption___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instToMessageDataOptionExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instToMessageDataOptionExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOptionExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToMessageDataOptionExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToMessageDataOptionExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataOptionExpr___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataOptionExpr = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___closed__0_value;
static const lean_string_object l_Lean_termM_x21___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l_Lean_termM_x21___00__closed__0 = (const lean_object*)&l_Lean_termM_x21___00__closed__0_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_termM_x21___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__1_value_aux_0),((lean_object*)&l_Lean_termM_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l_Lean_termM_x21___00__closed__1 = (const lean_object*)&l_Lean_termM_x21___00__closed__1_value;
static const lean_string_object l_Lean_termM_x21___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_termM_x21___00__closed__2 = (const lean_object*)&l_Lean_termM_x21___00__closed__2_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_termM_x21___00__closed__3 = (const lean_object*)&l_Lean_termM_x21___00__closed__3_value;
static const lean_string_object l_Lean_termM_x21___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l_Lean_termM_x21___00__closed__4 = (const lean_object*)&l_Lean_termM_x21___00__closed__4_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__4_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__5 = (const lean_object*)&l_Lean_termM_x21___00__closed__5_value;
static const lean_string_object l_Lean_termM_x21___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_termM_x21___00__closed__6 = (const lean_object*)&l_Lean_termM_x21___00__closed__6_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_termM_x21___00__closed__7 = (const lean_object*)&l_Lean_termM_x21___00__closed__7_value;
static const lean_string_object l_Lean_termM_x21___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_termM_x21___00__closed__8 = (const lean_object*)&l_Lean_termM_x21___00__closed__8_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_termM_x21___00__closed__9 = (const lean_object*)&l_Lean_termM_x21___00__closed__9_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_termM_x21___00__closed__10 = (const lean_object*)&l_Lean_termM_x21___00__closed__10_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__7_value),((lean_object*)&l_Lean_termM_x21___00__closed__10_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__11 = (const lean_object*)&l_Lean_termM_x21___00__closed__11_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__3_value),((lean_object*)&l_Lean_termM_x21___00__closed__5_value),((lean_object*)&l_Lean_termM_x21___00__closed__11_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__12 = (const lean_object*)&l_Lean_termM_x21___00__closed__12_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__12_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__13 = (const lean_object*)&l_Lean_termM_x21___00__closed__13_value;
LEAN_EXPORT const lean_object* l_Lean_termM_x21__ = (const lean_object*)&l_Lean_termM_x21___00__closed__13_value;
static lean_once_cell_t l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5_value;
static const lean_string_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "toMessageData"};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value;
static lean_once_cell_t l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(214, 4, 57, 33, 167, 136, 170, 64)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8_value;
static const lean_string_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ToMessageData"};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(14, 83, 41, 225, 154, 14, 42, 20)}};
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(167, 56, 87, 160, 191, 253, 244, 156)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_toMessageList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_toMessageList___closed__0 = (const lean_object*)&l_Lean_toMessageList___closed__0_value;
static lean_once_cell_t l_Lean_toMessageList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toMessageList___closed__1;
LEAN_EXPORT lean_object* l_Lean_toMessageList(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "(kernel) declaration type mismatch, '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "' has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nbut it is expected to have type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__0;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__1;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "(kernel) unknown constant '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__2 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__2_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__3;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__4 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__4_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__5;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "(kernel) constant has already been declared '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__6 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__6_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__7;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "(kernel) declaration type mismatch"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__8 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__8_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__8_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__9 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__9_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__10;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(kernel) declaration has metavariables '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__11 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__11_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__12;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "(kernel) declaration has free variables '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__13 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__13_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__14;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "', expression: "};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__15 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__15_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__16;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(kernel) function expected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__17 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__17_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__18;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "(kernel) type expected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__19 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__19_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__20;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(kernel) let-declaration type mismatch '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__21 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__21_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__22;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "(kernel) type mismatch at"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__23 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__23_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__24;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "(kernel) application type mismatch"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__25 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__25_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__26;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "\nargument has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__27 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__27_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__28;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nbut function has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__29 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__29_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__30;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "(kernel) invalid projection"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__31 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__31_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__32;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(kernel) type of theorem '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__33 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__33_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__34;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "' is not a proposition"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__35 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__35_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__36;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(kernel) "};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__37 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__37_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__38;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "(kernel) deterministic timeout"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__39 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__39_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__39_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__40 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__40_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__41;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "(kernel) excessive memory consumption detected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__42 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__42_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__42_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__43 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__43_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__44;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "(kernel) deep recursion detected, use `set_option maxRecDepth <num>` to increase the limit"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__45 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__45_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__45_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__46 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__46_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__47;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "(kernel) interrupted"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__48 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__48_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__48_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__49 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__49_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__50;
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toTraceElem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toTraceElem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos(lean_object* v_fileName_7_, lean_object* v_pos_8_, lean_object* v_msg_9_, lean_object* v_endPos_10_, lean_object* v_kind_11_, lean_object* v_name_12_){
_start:
{
lean_object* v___y_14_; lean_object* v___y_15_; lean_object* v___y_32_; lean_object* v___y_33_; lean_object* v___y_34_; lean_object* v___y_39_; lean_object* v___y_40_; lean_object* v___y_41_; lean_object* v___y_42_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___y_53_; uint8_t v___y_54_; lean_object* v___y_70_; 
if (lean_obj_tag(v_endPos_10_) == 0)
{
lean_object* v___x_74_; 
v___x_74_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_70_ = v___x_74_;
goto v___jp_69_;
}
else
{
lean_object* v_val_75_; lean_object* v_line_76_; lean_object* v_column_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_val_75_ = lean_ctor_get(v_endPos_10_, 0);
lean_inc(v_val_75_);
lean_dec_ref_known(v_endPos_10_, 1);
v_line_76_ = lean_ctor_get(v_val_75_, 0);
lean_inc(v_line_76_);
v_column_77_ = lean_ctor_get(v_val_75_, 1);
lean_inc(v_column_77_);
lean_dec(v_val_75_);
v___x_78_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__5));
v___x_79_ = l_Nat_reprFast(v_line_76_);
v___x_80_ = lean_string_append(v___x_78_, v___x_79_);
lean_dec_ref(v___x_79_);
v___x_81_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
v___x_83_ = l_Nat_reprFast(v_column_77_);
v___x_84_ = lean_string_append(v___x_82_, v___x_83_);
lean_dec_ref(v___x_83_);
v___y_70_ = v___x_84_;
goto v___jp_69_;
}
v___jp_13_:
{
lean_object* v_line_16_; lean_object* v_column_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_line_16_ = lean_ctor_get(v_pos_8_, 0);
lean_inc(v_line_16_);
v_column_17_ = lean_ctor_get(v_pos_8_, 1);
lean_inc(v_column_17_);
lean_dec_ref(v_pos_8_);
v___x_18_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_19_ = lean_string_append(v_fileName_7_, v___x_18_);
v___x_20_ = l_Nat_reprFast(v_line_16_);
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
lean_dec_ref(v___x_20_);
v___x_22_ = lean_string_append(v___x_21_, v___x_18_);
v___x_23_ = l_Nat_reprFast(v_column_17_);
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
lean_dec_ref(v___x_23_);
v___x_25_ = lean_string_append(v___x_24_, v___y_14_);
lean_dec_ref(v___y_14_);
v___x_26_ = lean_string_append(v___x_25_, v___x_18_);
v___x_27_ = lean_string_append(v___x_26_, v___y_15_);
lean_dec_ref(v___y_15_);
v___x_28_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__1));
v___x_29_ = lean_string_append(v___x_27_, v___x_28_);
v___x_30_ = lean_string_append(v___x_29_, v_msg_9_);
return v___x_30_;
}
v___jp_31_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_string_append(v___y_32_, v___y_34_);
lean_dec_ref(v___y_34_);
v___x_36_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
v___y_14_ = v___y_33_;
v___y_15_ = v___x_37_;
goto v___jp_13_;
}
v___jp_38_:
{
lean_object* v___x_43_; 
lean_inc_ref(v___y_39_);
v___x_43_ = lean_string_append(v___y_39_, v___y_42_);
if (lean_obj_tag(v___y_41_) == 0)
{
lean_object* v___x_44_; 
v___x_44_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_32_ = v___x_43_;
v___y_33_ = v___y_40_;
v___y_34_ = v___x_44_;
goto v___jp_31_;
}
else
{
lean_object* v_val_45_; 
v_val_45_ = lean_ctor_get(v___y_41_, 0);
lean_inc(v_val_45_);
lean_dec_ref_known(v___y_41_, 1);
v___y_32_ = v___x_43_;
v___y_33_ = v___y_40_;
v___y_34_ = v_val_45_;
goto v___jp_31_;
}
}
v___jp_46_:
{
lean_object* v___x_49_; 
v___x_49_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__1));
if (lean_obj_tag(v_kind_11_) == 0)
{
lean_object* v___x_50_; 
v___x_50_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_39_ = v___x_49_;
v___y_40_ = v___y_47_;
v___y_41_ = v___y_48_;
v___y_42_ = v___x_50_;
goto v___jp_38_;
}
else
{
lean_object* v_val_51_; 
v_val_51_ = lean_ctor_get(v_kind_11_, 0);
v___y_39_ = v___x_49_;
v___y_40_ = v___y_47_;
v___y_41_ = v___y_48_;
v___y_42_ = v_val_51_;
goto v___jp_38_;
}
}
v___jp_52_:
{
if (lean_obj_tag(v_name_12_) == 0)
{
lean_object* v___x_55_; 
v___x_55_ = lean_box(0);
v___y_47_ = v___y_53_;
v___y_48_ = v___x_55_;
goto v___jp_46_;
}
else
{
lean_object* v_val_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_68_; 
v_val_56_ = lean_ctor_get(v_name_12_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_name_12_);
if (v_isSharedCheck_68_ == 0)
{
v___x_58_ = v_name_12_;
v_isShared_59_ = v_isSharedCheck_68_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_val_56_);
lean_dec(v_name_12_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_68_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_60_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__3));
v___x_61_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_56_, v___y_54_);
v___x_62_ = lean_string_append(v___x_60_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__4));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_64_);
v___x_66_ = v___x_58_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
v___y_47_ = v___y_53_;
v___y_48_ = v___x_66_;
goto v___jp_46_;
}
}
}
}
v___jp_69_:
{
if (lean_obj_tag(v_name_12_) == 0)
{
if (lean_obj_tag(v_kind_11_) == 0)
{
lean_object* v___x_71_; 
v___x_71_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_14_ = v___y_70_;
v___y_15_ = v___x_71_;
goto v___jp_13_;
}
else
{
uint8_t v___x_72_; 
v___x_72_ = 1;
v___y_53_ = v___y_70_;
v___y_54_ = v___x_72_;
goto v___jp_52_;
}
}
else
{
uint8_t v___x_73_; 
v___x_73_ = 1;
v___y_53_ = v___y_70_;
v___y_54_ = v___x_73_;
goto v___jp_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos___boxed(lean_object* v_fileName_85_, lean_object* v_pos_86_, lean_object* v_msg_87_, lean_object* v_endPos_88_, lean_object* v_kind_89_, lean_object* v_name_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_mkErrorStringWithPos(v_fileName_85_, v_pos_86_, v_msg_87_, v_endPos_88_, v_kind_89_, v_name_90_);
lean_dec(v_kind_89_);
lean_dec_ref(v_msg_87_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx(uint8_t v_x_92_){
_start:
{
switch(v_x_92_)
{
case 0:
{
lean_object* v___x_93_; 
v___x_93_ = lean_unsigned_to_nat(0u);
return v___x_93_;
}
case 1:
{
lean_object* v___x_94_; 
v___x_94_ = lean_unsigned_to_nat(1u);
return v___x_94_;
}
default: 
{
lean_object* v___x_95_; 
v___x_95_ = lean_unsigned_to_nat(2u);
return v___x_95_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx___boxed(lean_object* v_x_96_){
_start:
{
uint8_t v_x_boxed_97_; lean_object* v_res_98_; 
v_x_boxed_97_ = lean_unbox(v_x_96_);
v_res_98_ = l_Lean_MessageSeverity_ctorIdx(v_x_boxed_97_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg(lean_object* v_k_99_){
_start:
{
lean_inc(v_k_99_);
return v_k_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg___boxed(lean_object* v_k_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_MessageSeverity_ctorElim___redArg(v_k_100_);
lean_dec(v_k_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim(lean_object* v_motive_102_, lean_object* v_ctorIdx_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_k_106_){
_start:
{
lean_inc(v_k_106_);
return v_k_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___boxed(lean_object* v_motive_107_, lean_object* v_ctorIdx_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_k_111_){
_start:
{
uint8_t v_t_boxed_112_; lean_object* v_res_113_; 
v_t_boxed_112_ = lean_unbox(v_t_109_);
v_res_113_ = l_Lean_MessageSeverity_ctorElim(v_motive_107_, v_ctorIdx_108_, v_t_boxed_112_, v_h_110_, v_k_111_);
lean_dec(v_k_111_);
lean_dec(v_ctorIdx_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg(lean_object* v_information_114_){
_start:
{
lean_inc(v_information_114_);
return v_information_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg___boxed(lean_object* v_information_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_MessageSeverity_information_elim___redArg(v_information_115_);
lean_dec(v_information_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim(lean_object* v_motive_117_, uint8_t v_t_118_, lean_object* v_h_119_, lean_object* v_information_120_){
_start:
{
lean_inc(v_information_120_);
return v_information_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___boxed(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_information_124_){
_start:
{
uint8_t v_t_boxed_125_; lean_object* v_res_126_; 
v_t_boxed_125_ = lean_unbox(v_t_122_);
v_res_126_ = l_Lean_MessageSeverity_information_elim(v_motive_121_, v_t_boxed_125_, v_h_123_, v_information_124_);
lean_dec(v_information_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg(lean_object* v_warning_127_){
_start:
{
lean_inc(v_warning_127_);
return v_warning_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg___boxed(lean_object* v_warning_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_MessageSeverity_warning_elim___redArg(v_warning_128_);
lean_dec(v_warning_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim(lean_object* v_motive_130_, uint8_t v_t_131_, lean_object* v_h_132_, lean_object* v_warning_133_){
_start:
{
lean_inc(v_warning_133_);
return v_warning_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___boxed(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_warning_137_){
_start:
{
uint8_t v_t_boxed_138_; lean_object* v_res_139_; 
v_t_boxed_138_ = lean_unbox(v_t_135_);
v_res_139_ = l_Lean_MessageSeverity_warning_elim(v_motive_134_, v_t_boxed_138_, v_h_136_, v_warning_137_);
lean_dec(v_warning_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg(lean_object* v_error_140_){
_start:
{
lean_inc(v_error_140_);
return v_error_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg___boxed(lean_object* v_error_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_MessageSeverity_error_elim___redArg(v_error_141_);
lean_dec(v_error_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim(lean_object* v_motive_143_, uint8_t v_t_144_, lean_object* v_h_145_, lean_object* v_error_146_){
_start:
{
lean_inc(v_error_146_);
return v_error_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___boxed(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_error_150_){
_start:
{
uint8_t v_t_boxed_151_; lean_object* v_res_152_; 
v_t_boxed_151_ = lean_unbox(v_t_148_);
v_res_152_ = l_Lean_MessageSeverity_error_elim(v_motive_147_, v_t_boxed_151_, v_h_149_, v_error_150_);
lean_dec(v_error_150_);
return v_res_152_;
}
}
static uint8_t _init_l_Lean_instInhabitedMessageSeverity_default(void){
_start:
{
uint8_t v___x_153_; 
v___x_153_ = 0;
return v___x_153_;
}
}
static uint8_t _init_l_Lean_instInhabitedMessageSeverity(void){
_start:
{
uint8_t v___x_154_; 
v___x_154_ = 0;
return v___x_154_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t v_x_155_, uint8_t v_y_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = l_Lean_MessageSeverity_ctorIdx(v_x_155_);
v___x_158_ = l_Lean_MessageSeverity_ctorIdx(v_y_156_);
v___x_159_ = lean_nat_dec_eq(v___x_157_, v___x_158_);
lean_dec(v___x_158_);
lean_dec(v___x_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqMessageSeverity_beq___boxed(lean_object* v_x_160_, lean_object* v_y_161_){
_start:
{
uint8_t v_x_21__boxed_162_; uint8_t v_y_22__boxed_163_; uint8_t v_res_164_; lean_object* v_r_165_; 
v_x_21__boxed_162_ = lean_unbox(v_x_160_);
v_y_22__boxed_163_ = lean_unbox(v_y_161_);
v_res_164_ = l_Lean_instBEqMessageSeverity_beq(v_x_21__boxed_162_, v_y_22__boxed_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t v_x_177_){
_start:
{
switch(v_x_177_)
{
case 0:
{
lean_object* v___x_178_; 
v___x_178_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__1));
return v___x_178_;
}
case 1:
{
lean_object* v___x_179_; 
v___x_179_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__3));
return v___x_179_;
}
default: 
{
lean_object* v___x_180_; 
v___x_180_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__5));
return v___x_180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson___boxed(lean_object* v_x_181_){
_start:
{
uint8_t v_x_67__boxed_182_; lean_object* v_res_183_; 
v_x_67__boxed_182_ = lean_unbox(v_x_181_);
v_res_183_ = l_Lean_instToJsonMessageSeverity_toJson(v_x_67__boxed_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object* v_json_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lean_Json_getTag_x3f(v_json_201_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__1));
return v___x_203_;
}
else
{
lean_object* v_val_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v_val_204_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_202_, 1);
v___x_205_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__4));
v___x_206_ = lean_string_dec_eq(v_val_204_, v___x_205_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__0));
v___x_208_ = lean_string_dec_eq(v_val_204_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__2));
v___x_210_ = lean_string_dec_eq(v_val_204_, v___x_209_);
lean_dec(v_val_204_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
v___x_211_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__3));
return v___x_211_;
}
else
{
lean_object* v___x_212_; 
v___x_212_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__4));
return v___x_212_;
}
}
else
{
lean_object* v___x_213_; 
lean_dec(v_val_204_);
v___x_213_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__5));
return v___x_213_;
}
}
else
{
lean_object* v___x_214_; 
lean_dec(v_val_204_);
v___x_214_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__6));
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString(uint8_t v_x_217_){
_start:
{
switch(v_x_217_)
{
case 0:
{
lean_object* v___x_218_; 
v___x_218_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__0));
return v___x_218_;
}
case 1:
{
lean_object* v___x_219_; 
v___x_219_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__2));
return v___x_219_;
}
default: 
{
lean_object* v___x_220_; 
v___x_220_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__4));
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString___boxed(lean_object* v_x_221_){
_start:
{
uint8_t v_x_28__boxed_222_; lean_object* v_res_223_; 
v_x_28__boxed_222_ = lean_unbox(v_x_221_);
v_res_223_ = l_Lean_MessageSeverity_toString(v_x_28__boxed_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx(uint8_t v_x_226_){
_start:
{
switch(v_x_226_)
{
case 0:
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(0u);
return v___x_227_;
}
case 1:
{
lean_object* v___x_228_; 
v___x_228_ = lean_unsigned_to_nat(1u);
return v___x_228_;
}
default: 
{
lean_object* v___x_229_; 
v___x_229_ = lean_unsigned_to_nat(2u);
return v___x_229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx___boxed(lean_object* v_x_230_){
_start:
{
uint8_t v_x_boxed_231_; lean_object* v_res_232_; 
v_x_boxed_231_ = lean_unbox(v_x_230_);
v_res_232_ = l_Lean_TraceResult_ctorIdx(v_x_boxed_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg(lean_object* v_k_233_){
_start:
{
lean_inc(v_k_233_);
return v_k_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg___boxed(lean_object* v_k_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_TraceResult_ctorElim___redArg(v_k_234_);
lean_dec(v_k_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim(lean_object* v_motive_236_, lean_object* v_ctorIdx_237_, uint8_t v_t_238_, lean_object* v_h_239_, lean_object* v_k_240_){
_start:
{
lean_inc(v_k_240_);
return v_k_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___boxed(lean_object* v_motive_241_, lean_object* v_ctorIdx_242_, lean_object* v_t_243_, lean_object* v_h_244_, lean_object* v_k_245_){
_start:
{
uint8_t v_t_boxed_246_; lean_object* v_res_247_; 
v_t_boxed_246_ = lean_unbox(v_t_243_);
v_res_247_ = l_Lean_TraceResult_ctorElim(v_motive_241_, v_ctorIdx_242_, v_t_boxed_246_, v_h_244_, v_k_245_);
lean_dec(v_k_245_);
lean_dec(v_ctorIdx_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg(lean_object* v_success_248_){
_start:
{
lean_inc(v_success_248_);
return v_success_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg___boxed(lean_object* v_success_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_TraceResult_success_elim___redArg(v_success_249_);
lean_dec(v_success_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim(lean_object* v_motive_251_, uint8_t v_t_252_, lean_object* v_h_253_, lean_object* v_success_254_){
_start:
{
lean_inc(v_success_254_);
return v_success_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___boxed(lean_object* v_motive_255_, lean_object* v_t_256_, lean_object* v_h_257_, lean_object* v_success_258_){
_start:
{
uint8_t v_t_boxed_259_; lean_object* v_res_260_; 
v_t_boxed_259_ = lean_unbox(v_t_256_);
v_res_260_ = l_Lean_TraceResult_success_elim(v_motive_255_, v_t_boxed_259_, v_h_257_, v_success_258_);
lean_dec(v_success_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg(lean_object* v_failure_261_){
_start:
{
lean_inc(v_failure_261_);
return v_failure_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg___boxed(lean_object* v_failure_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_TraceResult_failure_elim___redArg(v_failure_262_);
lean_dec(v_failure_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim(lean_object* v_motive_264_, uint8_t v_t_265_, lean_object* v_h_266_, lean_object* v_failure_267_){
_start:
{
lean_inc(v_failure_267_);
return v_failure_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___boxed(lean_object* v_motive_268_, lean_object* v_t_269_, lean_object* v_h_270_, lean_object* v_failure_271_){
_start:
{
uint8_t v_t_boxed_272_; lean_object* v_res_273_; 
v_t_boxed_272_ = lean_unbox(v_t_269_);
v_res_273_ = l_Lean_TraceResult_failure_elim(v_motive_268_, v_t_boxed_272_, v_h_270_, v_failure_271_);
lean_dec(v_failure_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg(lean_object* v_error_274_){
_start:
{
lean_inc(v_error_274_);
return v_error_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg___boxed(lean_object* v_error_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_TraceResult_error_elim___redArg(v_error_275_);
lean_dec(v_error_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim(lean_object* v_motive_277_, uint8_t v_t_278_, lean_object* v_h_279_, lean_object* v_error_280_){
_start:
{
lean_inc(v_error_280_);
return v_error_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___boxed(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_error_284_){
_start:
{
uint8_t v_t_boxed_285_; lean_object* v_res_286_; 
v_t_boxed_285_ = lean_unbox(v_t_282_);
v_res_286_ = l_Lean_TraceResult_error_elim(v_motive_281_, v_t_boxed_285_, v_h_283_, v_error_284_);
lean_dec(v_error_284_);
return v_res_286_;
}
}
static uint8_t _init_l_Lean_instInhabitedTraceResult_default(void){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = 0;
return v___x_287_;
}
}
static uint8_t _init_l_Lean_instInhabitedTraceResult(void){
_start:
{
uint8_t v___x_288_; 
v___x_288_ = 0;
return v___x_288_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqTraceResult_beq(uint8_t v_x_289_, uint8_t v_y_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = l_Lean_TraceResult_ctorIdx(v_x_289_);
v___x_292_ = l_Lean_TraceResult_ctorIdx(v_y_290_);
v___x_293_ = lean_nat_dec_eq(v___x_291_, v___x_292_);
lean_dec(v___x_292_);
lean_dec(v___x_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqTraceResult_beq___boxed(lean_object* v_x_294_, lean_object* v_y_295_){
_start:
{
uint8_t v_x_21__boxed_296_; uint8_t v_y_22__boxed_297_; uint8_t v_res_298_; lean_object* v_r_299_; 
v_x_21__boxed_296_ = lean_unbox(v_x_294_);
v_y_22__boxed_297_ = lean_unbox(v_y_295_);
v_res_298_ = l_Lean_instBEqTraceResult_beq(v_x_21__boxed_296_, v_y_22__boxed_297_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
static lean_object* _init_l_Lean_instReprTraceResult_repr___closed__6(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(2u);
v___x_312_ = lean_nat_to_int(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_instReprTraceResult_repr___closed__7(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_to_int(v___x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr(uint8_t v_x_315_, lean_object* v_prec_316_){
_start:
{
lean_object* v___y_318_; lean_object* v___y_325_; lean_object* v___y_332_; 
switch(v_x_315_)
{
case 0:
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(1024u);
v___x_339_ = lean_nat_dec_le(v___x_338_, v_prec_316_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_318_ = v___x_340_;
goto v___jp_317_;
}
else
{
lean_object* v___x_341_; 
v___x_341_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_318_ = v___x_341_;
goto v___jp_317_;
}
}
case 1:
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(1024u);
v___x_343_ = lean_nat_dec_le(v___x_342_, v_prec_316_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_325_ = v___x_344_;
goto v___jp_324_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_325_ = v___x_345_;
goto v___jp_324_;
}
}
default: 
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1024u);
v___x_347_ = lean_nat_dec_le(v___x_346_, v_prec_316_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_332_ = v___x_348_;
goto v___jp_331_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_332_ = v___x_349_;
goto v___jp_331_;
}
}
}
v___jp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__1));
lean_inc(v___y_318_);
v___x_320_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_320_, 0, v___y_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = 0;
v___x_322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*1, v___x_321_);
v___x_323_ = l_Repr_addAppParen(v___x_322_, v_prec_316_);
return v___x_323_;
}
v___jp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_326_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__3));
lean_inc(v___y_325_);
v___x_327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_327_, 0, v___y_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = 0;
v___x_329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_329_, 0, v___x_327_);
lean_ctor_set_uint8(v___x_329_, sizeof(void*)*1, v___x_328_);
v___x_330_ = l_Repr_addAppParen(v___x_329_, v_prec_316_);
return v___x_330_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_333_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__5));
lean_inc(v___y_332_);
v___x_334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_334_, 0, v___y_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = 0;
v___x_336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*1, v___x_335_);
v___x_337_ = l_Repr_addAppParen(v___x_336_, v_prec_316_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr___boxed(lean_object* v_x_350_, lean_object* v_prec_351_){
_start:
{
uint8_t v_x_171__boxed_352_; lean_object* v_res_353_; 
v_x_171__boxed_352_ = lean_unbox(v_x_350_);
v_res_353_ = l_Lean_instReprTraceResult_repr(v_x_171__boxed_352_, v_prec_351_);
lean_dec(v_prec_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji(uint8_t v_x_359_){
_start:
{
switch(v_x_359_)
{
case 0:
{
lean_object* v___x_360_; 
v___x_360_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__0));
return v___x_360_;
}
case 1:
{
lean_object* v___x_361_; 
v___x_361_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__1));
return v___x_361_;
}
default: 
{
lean_object* v___x_362_; 
v___x_362_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__2));
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji___boxed(lean_object* v_x_363_){
_start:
{
uint8_t v_x_31__boxed_364_; lean_object* v_res_365_; 
v_x_31__boxed_364_ = lean_unbox(v_x_363_);
v_res_365_ = l_Lean_TraceResult_toEmoji(v_x_31__boxed_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx(lean_object* v_x_366_){
_start:
{
switch(lean_obj_tag(v_x_366_))
{
case 0:
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(0u);
return v___x_367_;
}
case 1:
{
lean_object* v___x_368_; 
v___x_368_ = lean_unsigned_to_nat(1u);
return v___x_368_;
}
case 2:
{
lean_object* v___x_369_; 
v___x_369_ = lean_unsigned_to_nat(2u);
return v___x_369_;
}
case 3:
{
lean_object* v___x_370_; 
v___x_370_ = lean_unsigned_to_nat(3u);
return v___x_370_;
}
case 4:
{
lean_object* v___x_371_; 
v___x_371_ = lean_unsigned_to_nat(4u);
return v___x_371_;
}
case 5:
{
lean_object* v___x_372_; 
v___x_372_ = lean_unsigned_to_nat(5u);
return v___x_372_;
}
case 6:
{
lean_object* v___x_373_; 
v___x_373_ = lean_unsigned_to_nat(6u);
return v___x_373_;
}
case 7:
{
lean_object* v___x_374_; 
v___x_374_ = lean_unsigned_to_nat(7u);
return v___x_374_;
}
case 8:
{
lean_object* v___x_375_; 
v___x_375_ = lean_unsigned_to_nat(8u);
return v___x_375_;
}
case 9:
{
lean_object* v___x_376_; 
v___x_376_ = lean_unsigned_to_nat(9u);
return v___x_376_;
}
case 10:
{
lean_object* v___x_377_; 
v___x_377_ = lean_unsigned_to_nat(10u);
return v___x_377_;
}
default: 
{
lean_object* v___x_378_; 
v___x_378_ = lean_unsigned_to_nat(11u);
return v___x_378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx___boxed(lean_object* v_x_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_MessageData_ctorIdx(v_x_379_);
lean_dec_ref(v_x_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___redArg(lean_object* v_t_381_, lean_object* v_k_382_){
_start:
{
switch(lean_obj_tag(v_t_381_))
{
case 0:
{
lean_object* v_a_383_; lean_object* v___x_384_; 
v_a_383_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_a_383_);
lean_dec_ref_known(v_t_381_, 1);
v___x_384_ = lean_apply_1(v_k_382_, v_a_383_);
return v___x_384_;
}
case 1:
{
lean_object* v_a_385_; lean_object* v___x_386_; 
v_a_385_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v_t_381_, 1);
v___x_386_ = lean_apply_1(v_k_382_, v_a_385_);
return v___x_386_;
}
case 5:
{
lean_object* v_a_387_; lean_object* v_a_388_; lean_object* v___x_389_; 
v_a_387_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_387_);
v_a_388_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_388_);
lean_dec_ref_known(v_t_381_, 2);
v___x_389_ = lean_apply_2(v_k_382_, v_a_387_, v_a_388_);
return v___x_389_;
}
case 6:
{
lean_object* v_a_390_; lean_object* v___x_391_; 
v_a_390_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_a_390_);
lean_dec_ref_known(v_t_381_, 1);
v___x_391_ = lean_apply_1(v_k_382_, v_a_390_);
return v___x_391_;
}
case 8:
{
lean_object* v_a_392_; lean_object* v_a_393_; lean_object* v___x_394_; 
v_a_392_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_392_);
v_a_393_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_393_);
lean_dec_ref_known(v_t_381_, 2);
v___x_394_ = lean_apply_2(v_k_382_, v_a_392_, v_a_393_);
return v___x_394_;
}
case 9:
{
lean_object* v_data_395_; lean_object* v_msg_396_; lean_object* v_children_397_; lean_object* v___x_398_; 
v_data_395_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_data_395_);
v_msg_396_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_msg_396_);
v_children_397_ = lean_ctor_get(v_t_381_, 2);
lean_inc_ref(v_children_397_);
lean_dec_ref_known(v_t_381_, 3);
v___x_398_ = lean_apply_3(v_k_382_, v_data_395_, v_msg_396_, v_children_397_);
return v___x_398_;
}
case 11:
{
lean_object* v_a_399_; lean_object* v_a_400_; lean_object* v___x_401_; 
v_a_399_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_399_);
v_a_400_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_400_);
lean_dec_ref_known(v_t_381_, 2);
v___x_401_ = lean_apply_2(v_k_382_, v_a_399_, v_a_400_);
return v___x_401_;
}
default: 
{
lean_object* v_a_402_; lean_object* v_a_403_; lean_object* v___x_404_; 
v_a_402_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_a_402_);
v_a_403_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_403_);
lean_dec_ref(v_t_381_);
v___x_404_ = lean_apply_2(v_k_382_, v_a_402_, v_a_403_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim(lean_object* v_motive__1_405_, lean_object* v_ctorIdx_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_k_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_MessageData_ctorElim___redArg(v_t_407_, v_k_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___boxed(lean_object* v_motive__1_411_, lean_object* v_ctorIdx_412_, lean_object* v_t_413_, lean_object* v_h_414_, lean_object* v_k_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_MessageData_ctorElim(v_motive__1_411_, v_ctorIdx_412_, v_t_413_, v_h_414_, v_k_415_);
lean_dec(v_ctorIdx_412_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim___redArg(lean_object* v_t_417_, lean_object* v_ofFormatWithInfos_418_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = l_Lean_MessageData_ctorElim___redArg(v_t_417_, v_ofFormatWithInfos_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim(lean_object* v_motive__1_420_, lean_object* v_t_421_, lean_object* v_h_422_, lean_object* v_ofFormatWithInfos_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_MessageData_ctorElim___redArg(v_t_421_, v_ofFormatWithInfos_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim___redArg(lean_object* v_t_425_, lean_object* v_ofGoal_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_MessageData_ctorElim___redArg(v_t_425_, v_ofGoal_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim(lean_object* v_motive__1_428_, lean_object* v_t_429_, lean_object* v_h_430_, lean_object* v_ofGoal_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_MessageData_ctorElim___redArg(v_t_429_, v_ofGoal_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim___redArg(lean_object* v_t_433_, lean_object* v_ofWidget_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_MessageData_ctorElim___redArg(v_t_433_, v_ofWidget_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim(lean_object* v_motive__1_436_, lean_object* v_t_437_, lean_object* v_h_438_, lean_object* v_ofWidget_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_MessageData_ctorElim___redArg(v_t_437_, v_ofWidget_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim___redArg(lean_object* v_t_441_, lean_object* v_withContext_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_MessageData_ctorElim___redArg(v_t_441_, v_withContext_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim(lean_object* v_motive__1_444_, lean_object* v_t_445_, lean_object* v_h_446_, lean_object* v_withContext_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_MessageData_ctorElim___redArg(v_t_445_, v_withContext_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim___redArg(lean_object* v_t_449_, lean_object* v_withNamingContext_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_MessageData_ctorElim___redArg(v_t_449_, v_withNamingContext_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim(lean_object* v_motive__1_452_, lean_object* v_t_453_, lean_object* v_h_454_, lean_object* v_withNamingContext_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lean_MessageData_ctorElim___redArg(v_t_453_, v_withNamingContext_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim___redArg(lean_object* v_t_457_, lean_object* v_nest_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_MessageData_ctorElim___redArg(v_t_457_, v_nest_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim(lean_object* v_motive__1_460_, lean_object* v_t_461_, lean_object* v_h_462_, lean_object* v_nest_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_MessageData_ctorElim___redArg(v_t_461_, v_nest_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim___redArg(lean_object* v_t_465_, lean_object* v_group_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_MessageData_ctorElim___redArg(v_t_465_, v_group_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim(lean_object* v_motive__1_468_, lean_object* v_t_469_, lean_object* v_h_470_, lean_object* v_group_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Lean_MessageData_ctorElim___redArg(v_t_469_, v_group_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim___redArg(lean_object* v_t_473_, lean_object* v_compose_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_MessageData_ctorElim___redArg(v_t_473_, v_compose_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim(lean_object* v_motive__1_476_, lean_object* v_t_477_, lean_object* v_h_478_, lean_object* v_compose_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_MessageData_ctorElim___redArg(v_t_477_, v_compose_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim___redArg(lean_object* v_t_481_, lean_object* v_tagged_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_MessageData_ctorElim___redArg(v_t_481_, v_tagged_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim(lean_object* v_motive__1_484_, lean_object* v_t_485_, lean_object* v_h_486_, lean_object* v_tagged_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_MessageData_ctorElim___redArg(v_t_485_, v_tagged_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim___redArg(lean_object* v_t_489_, lean_object* v_trace_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_MessageData_ctorElim___redArg(v_t_489_, v_trace_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim(lean_object* v_motive__1_492_, lean_object* v_t_493_, lean_object* v_h_494_, lean_object* v_trace_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_MessageData_ctorElim___redArg(v_t_493_, v_trace_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim___redArg(lean_object* v_t_497_, lean_object* v_ofLazy_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lean_MessageData_ctorElim___redArg(v_t_497_, v_ofLazy_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim(lean_object* v_motive__1_500_, lean_object* v_t_501_, lean_object* v_h_502_, lean_object* v_ofLazy_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_MessageData_ctorElim___redArg(v_t_501_, v_ofLazy_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim___redArg(lean_object* v_t_505_, lean_object* v_ofOriginatingSyntax_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_MessageData_ctorElim___redArg(v_t_505_, v_ofOriginatingSyntax_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim(lean_object* v_motive__1_508_, lean_object* v_t_509_, lean_object* v_h_510_, lean_object* v_ofOriginatingSyntax_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_MessageData_ctorElim___redArg(v_t_509_, v_ofOriginatingSyntax_511_);
return v___x_512_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageData_default___closed__0(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = l_Lean_instInhabitedMVarId_default;
v___x_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageData_default(void){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = lean_obj_once(&l_Lean_instInhabitedMessageData_default___closed__0, &l_Lean_instInhabitedMessageData_default___closed__0_once, _init_l_Lean_instInhabitedMessageData_default___closed__0);
return v___x_515_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageData(void){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_instInhabitedMessageData_default;
return v___x_516_;
}
}
static lean_object* _init_l_Lean_instImpl___closed__3_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = ((lean_object*)(l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___x_523_ = l_unsafeCast___redArg(v___x_522_);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_(void){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = lean_obj_once(&l_Lean_instImpl___closed__3_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_, &l_Lean_instImpl___closed__3_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__once, _init_l_Lean_instImpl___closed__3_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_instTypeNameMessageData(void){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormat(lean_object* v_fmt_526_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_527_ = lean_box(1);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v_fmt_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0(lean_object* v___x_530_, lean_object* v_onMissingContext_531_, lean_object* v_f_532_, lean_object* v_ctx_x3f_533_){
_start:
{
lean_object* v_msg_536_; 
if (lean_obj_tag(v_ctx_x3f_533_) == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; 
lean_dec_ref(v_f_532_);
v___x_538_ = lean_box(0);
v___x_539_ = lean_apply_2(v_onMissingContext_531_, v___x_538_, lean_box(0));
v_msg_536_ = v___x_539_;
goto v___jp_535_;
}
else
{
lean_object* v_val_540_; lean_object* v___x_541_; 
lean_dec_ref(v_onMissingContext_531_);
v_val_540_ = lean_ctor_get(v_ctx_x3f_533_, 0);
lean_inc(v_val_540_);
lean_dec_ref_known(v_ctx_x3f_533_, 1);
v___x_541_ = lean_apply_2(v_f_532_, v_val_540_, lean_box(0));
v_msg_536_ = v___x_541_;
goto v___jp_535_;
}
v___jp_535_:
{
lean_object* v___x_537_; 
v___x_537_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_530_, v_msg_536_);
lean_dec_ref(v_msg_536_);
return v___x_537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0___boxed(lean_object* v___x_542_, lean_object* v_onMissingContext_543_, lean_object* v_f_544_, lean_object* v_ctx_x3f_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_MessageData_lazy___lam__0(v___x_542_, v_onMissingContext_543_, v_f_544_, v_ctx_x3f_545_);
lean_dec(v___x_542_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy(lean_object* v_f_548_, lean_object* v_hasSyntheticSorry_549_, lean_object* v_onMissingContext_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___f_552_; lean_object* v___x_553_; 
v___x_551_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
v___f_552_ = lean_alloc_closure((void*)(l_Lean_MessageData_lazy___lam__0___boxed), 5, 3);
lean_closure_set(v___f_552_, 0, v___x_551_);
lean_closure_set(v___f_552_, 1, v_onMissingContext_550_);
lean_closure_set(v___f_552_, 2, v_f_548_);
v___x_553_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_553_, 0, v___f_552_);
lean_ctor_set(v___x_553_, 1, v_hasSyntheticSorry_549_);
return v___x_553_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_hasTag(lean_object* v_p_554_, lean_object* v_x_555_){
_start:
{
switch(lean_obj_tag(v_x_555_))
{
case 3:
{
lean_object* v_a_556_; 
v_a_556_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_a_556_);
lean_dec_ref_known(v_x_555_, 2);
v_x_555_ = v_a_556_;
goto _start;
}
case 4:
{
lean_object* v_a_558_; 
v_a_558_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_a_558_);
lean_dec_ref_known(v_x_555_, 2);
v_x_555_ = v_a_558_;
goto _start;
}
case 5:
{
lean_object* v_a_560_; 
v_a_560_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_a_560_);
lean_dec_ref_known(v_x_555_, 2);
v_x_555_ = v_a_560_;
goto _start;
}
case 6:
{
lean_object* v_a_562_; 
v_a_562_ = lean_ctor_get(v_x_555_, 0);
lean_inc_ref(v_a_562_);
lean_dec_ref_known(v_x_555_, 1);
v_x_555_ = v_a_562_;
goto _start;
}
case 7:
{
lean_object* v_a_564_; lean_object* v_a_565_; uint8_t v___x_566_; 
v_a_564_ = lean_ctor_get(v_x_555_, 0);
lean_inc_ref(v_a_564_);
v_a_565_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_a_565_);
lean_dec_ref_known(v_x_555_, 2);
lean_inc_ref(v_p_554_);
v___x_566_ = l_Lean_MessageData_hasTag(v_p_554_, v_a_564_);
if (v___x_566_ == 0)
{
v_x_555_ = v_a_565_;
goto _start;
}
else
{
lean_dec_ref(v_a_565_);
lean_dec_ref(v_p_554_);
return v___x_566_;
}
}
case 8:
{
lean_object* v_a_568_; lean_object* v_a_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v_a_568_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_a_568_);
v_a_569_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_a_569_);
lean_dec_ref_known(v_x_555_, 2);
lean_inc_ref(v_p_554_);
v___x_570_ = lean_apply_1(v_p_554_, v_a_568_);
v___x_571_ = lean_unbox(v___x_570_);
if (v___x_571_ == 0)
{
v_x_555_ = v_a_569_;
goto _start;
}
else
{
uint8_t v___x_573_; 
lean_dec_ref(v_a_569_);
lean_dec_ref(v_p_554_);
v___x_573_ = lean_unbox(v___x_570_);
return v___x_573_;
}
}
case 9:
{
lean_object* v_data_574_; lean_object* v_msg_575_; lean_object* v_children_576_; lean_object* v_cls_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v_data_574_ = lean_ctor_get(v_x_555_, 0);
lean_inc_ref(v_data_574_);
v_msg_575_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_msg_575_);
v_children_576_ = lean_ctor_get(v_x_555_, 2);
lean_inc_ref(v_children_576_);
lean_dec_ref_known(v_x_555_, 3);
v_cls_577_ = lean_ctor_get(v_data_574_, 0);
lean_inc(v_cls_577_);
lean_dec_ref(v_data_574_);
lean_inc_ref(v_p_554_);
v___x_578_ = lean_apply_1(v_p_554_, v_cls_577_);
v___x_579_ = lean_unbox(v___x_578_);
if (v___x_579_ == 0)
{
uint8_t v___x_580_; 
lean_inc_ref(v_p_554_);
v___x_580_ = l_Lean_MessageData_hasTag(v_p_554_, v_msg_575_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_581_ = lean_unsigned_to_nat(0u);
v___x_582_ = lean_array_get_size(v_children_576_);
v___x_583_ = lean_nat_dec_lt(v___x_581_, v___x_582_);
if (v___x_583_ == 0)
{
lean_dec_ref(v_children_576_);
lean_dec_ref(v_p_554_);
return v___x_583_;
}
else
{
if (v___x_583_ == 0)
{
lean_dec_ref(v_children_576_);
lean_dec_ref(v_p_554_);
return v___x_583_;
}
else
{
size_t v___x_584_; size_t v___x_585_; uint8_t v___x_586_; 
v___x_584_ = ((size_t)0ULL);
v___x_585_ = lean_usize_of_nat(v___x_582_);
v___x_586_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(v_p_554_, v_children_576_, v___x_584_, v___x_585_);
lean_dec_ref(v_children_576_);
return v___x_586_;
}
}
}
else
{
lean_dec_ref(v_children_576_);
lean_dec_ref(v_p_554_);
return v___x_580_;
}
}
else
{
uint8_t v___x_587_; 
lean_dec_ref(v_children_576_);
lean_dec_ref(v_msg_575_);
lean_dec_ref(v_p_554_);
v___x_587_ = lean_unbox(v___x_578_);
return v___x_587_;
}
}
case 11:
{
lean_object* v_a_588_; 
v_a_588_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_a_588_);
lean_dec_ref_known(v_x_555_, 2);
v_x_555_ = v_a_588_;
goto _start;
}
default: 
{
uint8_t v___x_590_; 
lean_dec_ref(v_x_555_);
lean_dec_ref(v_p_554_);
v___x_590_ = 0;
return v___x_590_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(lean_object* v_p_591_, lean_object* v_as_592_, size_t v_i_593_, size_t v_stop_594_){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = lean_usize_dec_eq(v_i_593_, v_stop_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = lean_array_uget_borrowed(v_as_592_, v_i_593_);
lean_inc(v___x_596_);
lean_inc_ref(v_p_591_);
v___x_597_ = l_Lean_MessageData_hasTag(v_p_591_, v___x_596_);
if (v___x_597_ == 0)
{
size_t v___x_598_; size_t v___x_599_; 
v___x_598_ = ((size_t)1ULL);
v___x_599_ = lean_usize_add(v_i_593_, v___x_598_);
v_i_593_ = v___x_599_;
goto _start;
}
else
{
lean_dec_ref(v_p_591_);
return v___x_597_;
}
}
else
{
uint8_t v___x_601_; 
lean_dec_ref(v_p_591_);
v___x_601_ = 0;
return v___x_601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0___boxed(lean_object* v_p_602_, lean_object* v_as_603_, lean_object* v_i_604_, lean_object* v_stop_605_){
_start:
{
size_t v_i_boxed_606_; size_t v_stop_boxed_607_; uint8_t v_res_608_; lean_object* v_r_609_; 
v_i_boxed_606_ = lean_unbox_usize(v_i_604_);
lean_dec(v_i_604_);
v_stop_boxed_607_ = lean_unbox_usize(v_stop_605_);
lean_dec(v_stop_605_);
v_res_608_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(v_p_602_, v_as_603_, v_i_boxed_606_, v_stop_boxed_607_);
lean_dec_ref(v_as_603_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hasTag___boxed(lean_object* v_p_610_, lean_object* v_x_611_){
_start:
{
uint8_t v_res_612_; lean_object* v_r_613_; 
v_res_612_ = l_Lean_MessageData_hasTag(v_p_610_, v_x_611_);
v_r_613_ = lean_box(v_res_612_);
return v_r_613_;
}
}
static lean_object* _init_l_Lean_MessageData_kind___closed__0(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_box(0);
v___x_615_ = l_unsafeCast___redArg(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_kind(lean_object* v_x_616_){
_start:
{
switch(lean_obj_tag(v_x_616_))
{
case 3:
{
lean_object* v_a_617_; 
v_a_617_ = lean_ctor_get(v_x_616_, 1);
v_x_616_ = v_a_617_;
goto _start;
}
case 4:
{
lean_object* v_a_619_; 
v_a_619_ = lean_ctor_get(v_x_616_, 1);
v_x_616_ = v_a_619_;
goto _start;
}
case 8:
{
lean_object* v_a_621_; 
v_a_621_ = lean_ctor_get(v_x_616_, 0);
lean_inc(v_a_621_);
return v_a_621_;
}
case 9:
{
lean_object* v_data_622_; lean_object* v_cls_623_; 
v_data_622_ = lean_ctor_get(v_x_616_, 0);
v_cls_623_ = lean_ctor_get(v_data_622_, 0);
lean_inc(v_cls_623_);
return v_cls_623_;
}
case 11:
{
lean_object* v_a_624_; 
v_a_624_ = lean_ctor_get(v_x_616_, 1);
v_x_616_ = v_a_624_;
goto _start;
}
default: 
{
lean_object* v___x_626_; 
v___x_626_ = lean_obj_once(&l_Lean_MessageData_kind___closed__0, &l_Lean_MessageData_kind___closed__0_once, _init_l_Lean_MessageData_kind___closed__0);
return v___x_626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_kind___boxed(lean_object* v_x_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_MessageData_kind(v_x_627_);
lean_dec_ref(v_x_627_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_originatingSyntax_x3f(lean_object* v_x_629_){
_start:
{
if (lean_obj_tag(v_x_629_) == 11)
{
lean_object* v_a_630_; lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_639_; 
v_a_630_ = lean_ctor_get(v_x_629_, 0);
v_a_631_ = lean_ctor_get(v_x_629_, 1);
v_isSharedCheck_639_ = !lean_is_exclusive(v_x_629_);
if (v_isSharedCheck_639_ == 0)
{
v___x_633_ = v_x_629_;
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_inc(v_a_630_);
lean_dec(v_x_629_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_635_, 0, v_a_630_);
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 0);
lean_ctor_set(v___x_633_, 0, v___x_635_);
v___x_637_ = v___x_633_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_a_631_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_box(0);
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v_x_629_);
return v___x_641_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isTrace(lean_object* v_x_642_){
_start:
{
switch(lean_obj_tag(v_x_642_))
{
case 3:
{
lean_object* v_a_643_; 
v_a_643_ = lean_ctor_get(v_x_642_, 1);
v_x_642_ = v_a_643_;
goto _start;
}
case 4:
{
lean_object* v_a_645_; 
v_a_645_ = lean_ctor_get(v_x_642_, 1);
v_x_642_ = v_a_645_;
goto _start;
}
case 8:
{
lean_object* v_a_647_; 
v_a_647_ = lean_ctor_get(v_x_642_, 1);
v_x_642_ = v_a_647_;
goto _start;
}
case 9:
{
uint8_t v___x_649_; 
v___x_649_ = 1;
return v___x_649_;
}
case 11:
{
lean_object* v_a_650_; 
v_a_650_ = lean_ctor_get(v_x_642_, 1);
v_x_642_ = v_a_650_;
goto _start;
}
default: 
{
uint8_t v___x_652_; 
v___x_652_ = 0;
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isTrace___boxed(lean_object* v_x_653_){
_start:
{
uint8_t v_res_654_; lean_object* v_r_655_; 
v_res_654_ = l_Lean_MessageData_isTrace(v_x_653_);
lean_dec_ref(v_x_653_);
v_r_655_ = lean_box(v_res_654_);
return v_r_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_composePreservingKind(lean_object* v_x_656_, lean_object* v_x_657_){
_start:
{
switch(lean_obj_tag(v_x_656_))
{
case 3:
{
lean_object* v_a_658_; lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_667_; 
v_a_658_ = lean_ctor_get(v_x_656_, 0);
v_a_659_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_667_ == 0)
{
v___x_661_ = v_x_656_;
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_inc(v_a_658_);
lean_dec(v_x_656_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = l_Lean_MessageData_composePreservingKind(v_a_659_, v_x_657_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_663_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_658_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
case 4:
{
lean_object* v_a_668_; lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_677_; 
v_a_668_ = lean_ctor_get(v_x_656_, 0);
v_a_669_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_677_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_677_ == 0)
{
v___x_671_ = v_x_656_;
v_isShared_672_ = v_isSharedCheck_677_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_inc(v_a_668_);
lean_dec(v_x_656_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_677_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = l_Lean_MessageData_composePreservingKind(v_a_669_, v_x_657_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v___x_673_);
v___x_675_ = v___x_671_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_668_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
case 8:
{
lean_object* v_a_678_; lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_687_; 
v_a_678_ = lean_ctor_get(v_x_656_, 0);
v_a_679_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_687_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_687_ == 0)
{
v___x_681_ = v_x_656_;
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_inc(v_a_678_);
lean_dec(v_x_656_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
lean_ctor_set_tag(v___x_681_, 7);
lean_ctor_set(v___x_681_, 1, v_x_657_);
lean_ctor_set(v___x_681_, 0, v_a_679_);
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_679_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_x_657_);
v___x_684_ = v_reuseFailAlloc_686_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; 
v___x_685_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_685_, 0, v_a_678_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
return v___x_685_;
}
}
}
case 11:
{
lean_object* v_a_688_; lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_697_; 
v_a_688_ = lean_ctor_get(v_x_656_, 0);
v_a_689_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_697_ == 0)
{
v___x_691_ = v_x_656_;
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_inc(v_a_688_);
lean_dec(v_x_656_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_693_ = l_Lean_MessageData_composePreservingKind(v_a_689_, v_x_657_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 1, v___x_693_);
v___x_695_ = v___x_691_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_688_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
default: 
{
lean_object* v___x_698_; 
v___x_698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_698_, 0, v_x_656_);
lean_ctor_set(v___x_698_, 1, v_x_657_);
return v___x_698_;
}
}
}
}
static lean_object* _init_l_Lean_MessageData_nil___closed__0(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_box(0);
v___x_700_ = l_Lean_MessageData_ofFormat(v___x_699_);
return v___x_700_;
}
}
static lean_object* _init_l_Lean_MessageData_nil(void){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lean_obj_once(&l_Lean_MessageData_nil___closed__0, &l_Lean_MessageData_nil___closed__0_once, _init_l_Lean_MessageData_nil___closed__0);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext(lean_object* v_nCtx_702_, lean_object* v_ctx_703_){
_start:
{
lean_object* v_env_704_; lean_object* v_mctx_705_; lean_object* v_lctx_706_; lean_object* v_opts_707_; lean_object* v_currNamespace_708_; lean_object* v_openDecls_709_; lean_object* v___x_710_; 
v_env_704_ = lean_ctor_get(v_ctx_703_, 0);
v_mctx_705_ = lean_ctor_get(v_ctx_703_, 1);
v_lctx_706_ = lean_ctor_get(v_ctx_703_, 2);
v_opts_707_ = lean_ctor_get(v_ctx_703_, 3);
v_currNamespace_708_ = lean_ctor_get(v_nCtx_702_, 0);
v_openDecls_709_ = lean_ctor_get(v_nCtx_702_, 1);
lean_inc(v_openDecls_709_);
lean_inc(v_currNamespace_708_);
lean_inc_ref(v_opts_707_);
lean_inc_ref(v_lctx_706_);
lean_inc_ref(v_mctx_705_);
lean_inc_ref(v_env_704_);
v___x_710_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_710_, 0, v_env_704_);
lean_ctor_set(v___x_710_, 1, v_mctx_705_);
lean_ctor_set(v___x_710_, 2, v_lctx_706_);
lean_ctor_set(v___x_710_, 3, v_opts_707_);
lean_ctor_set(v___x_710_, 4, v_currNamespace_708_);
lean_ctor_set(v___x_710_, 5, v_openDecls_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext___boxed(lean_object* v_nCtx_711_, lean_object* v_ctx_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_MessageData_mkPPContext(v_nCtx_711_, v_ctx_712_);
lean_dec_ref(v_ctx_712_);
lean_dec_ref(v_nCtx_711_);
return v_res_713_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofSyntax___lam__0(lean_object* v_x_714_){
_start:
{
uint8_t v___x_715_; 
v___x_715_ = 0;
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__0___boxed(lean_object* v_x_716_){
_start:
{
uint8_t v_res_717_; lean_object* v_r_718_; 
v_res_717_ = l_Lean_MessageData_ofSyntax___lam__0(v_x_716_);
lean_dec_ref(v_x_716_);
v_r_718_ = lean_box(v_res_717_);
return v_r_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1(lean_object* v___x_719_, lean_object* v_stx_720_, lean_object* v_ctx_x3f_721_){
_start:
{
lean_object* v_val_724_; 
if (lean_obj_tag(v_ctx_x3f_721_) == 0)
{
lean_object* v___x_727_; uint8_t v___x_728_; lean_object* v___x_729_; 
v___x_727_ = lean_box(0);
v___x_728_ = 0;
v___x_729_ = l_Lean_Syntax_formatStx(v_stx_720_, v___x_727_, v___x_728_);
v_val_724_ = v___x_729_;
goto v___jp_723_;
}
else
{
lean_object* v_val_730_; lean_object* v___x_731_; 
v_val_730_ = lean_ctor_get(v_ctx_x3f_721_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_ctx_x3f_721_, 1);
v___x_731_ = l_Lean_ppTerm(v_val_730_, v_stx_720_);
v_val_724_ = v___x_731_;
goto v___jp_723_;
}
v___jp_723_:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = l_Lean_MessageData_ofFormat(v_val_724_);
v___x_726_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_719_, v___x_725_);
lean_dec_ref(v___x_725_);
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1___boxed(lean_object* v___x_732_, lean_object* v_stx_733_, lean_object* v_ctx_x3f_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_MessageData_ofSyntax___lam__1(v___x_732_, v_stx_733_, v_ctx_x3f_734_);
lean_dec(v___x_732_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax(lean_object* v_stx_738_){
_start:
{
lean_object* v___f_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_stx_742_; lean_object* v___f_743_; lean_object* v___x_744_; 
v___f_739_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_740_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
v___x_741_ = lean_box(0);
v_stx_742_ = l_Lean_Syntax_copyHeadTailInfoFrom(v_stx_738_, v___x_741_);
v___f_743_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofSyntax___lam__1___boxed), 4, 2);
lean_closure_set(v___f_743_, 0, v___x_740_);
lean_closure_set(v___f_743_, 1, v_stx_742_);
v___x_744_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_744_, 0, v___f_743_);
lean_ctor_set(v___x_744_, 1, v___f_739_);
return v___x_744_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofExpr___lam__0(lean_object* v_e_745_, lean_object* v_mctx_746_){
_start:
{
lean_object* v___x_747_; lean_object* v_fst_748_; uint8_t v___x_749_; 
v___x_747_ = l_Lean_instantiateMVarsCore(v_mctx_746_, v_e_745_);
v_fst_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_fst_748_);
lean_dec_ref(v___x_747_);
v___x_749_ = l_Lean_Expr_hasSyntheticSorry(v_fst_748_);
lean_dec(v_fst_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__0___boxed(lean_object* v_e_750_, lean_object* v_mctx_751_){
_start:
{
uint8_t v_res_752_; lean_object* v_r_753_; 
v_res_752_ = l_Lean_MessageData_ofExpr___lam__0(v_e_750_, v_mctx_751_);
v_r_753_ = lean_box(v_res_752_);
return v_r_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1(lean_object* v___x_754_, lean_object* v_e_755_, lean_object* v_ctx_x3f_756_){
_start:
{
lean_object* v_val_759_; 
if (lean_obj_tag(v_ctx_x3f_756_) == 0)
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_762_ = lean_expr_dbg_to_string(v_e_755_);
lean_dec_ref(v_e_755_);
v___x_763_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
v___x_764_ = lean_box(1);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_763_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
v_val_759_ = v___x_765_;
goto v___jp_758_;
}
else
{
lean_object* v_val_766_; lean_object* v___x_767_; 
v_val_766_ = lean_ctor_get(v_ctx_x3f_756_, 0);
lean_inc(v_val_766_);
lean_dec_ref_known(v_ctx_x3f_756_, 1);
v___x_767_ = l_Lean_ppExprWithInfos(v_val_766_, v_e_755_);
v_val_759_ = v___x_767_;
goto v___jp_758_;
}
v___jp_758_:
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v_val_759_);
v___x_761_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_754_, v___x_760_);
lean_dec_ref_known(v___x_760_, 1);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1___boxed(lean_object* v___x_768_, lean_object* v_e_769_, lean_object* v_ctx_x3f_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_MessageData_ofExpr___lam__1(v___x_768_, v_e_769_, v_ctx_x3f_770_);
lean_dec(v___x_768_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr(lean_object* v_e_773_){
_start:
{
lean_object* v___f_774_; lean_object* v___x_775_; lean_object* v___f_776_; lean_object* v___x_777_; 
lean_inc_ref(v_e_773_);
v___f_774_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_774_, 0, v_e_773_);
v___x_775_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
v___f_776_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__1___boxed), 4, 2);
lean_closure_set(v___f_776_, 0, v___x_775_);
lean_closure_set(v___f_776_, 1, v_e_773_);
v___x_777_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_777_, 0, v___f_776_);
lean_ctor_set(v___x_777_, 1, v___f_774_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0(lean_object* v_x_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = lean_box(0);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0___boxed(lean_object* v_x_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_MessageData_ofLevel___lam__0(v_x_780_);
lean_dec(v_x_780_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2(lean_object* v___x_782_, lean_object* v_l_783_, lean_object* v___f_784_, lean_object* v_ctx_x3f_785_){
_start:
{
lean_object* v_val_788_; 
if (lean_obj_tag(v_ctx_x3f_785_) == 0)
{
uint8_t v___x_791_; lean_object* v___x_792_; 
v___x_791_ = 1;
v___x_792_ = l_Lean_Level_format(v_l_783_, v___x_791_, v___f_784_);
v_val_788_ = v___x_792_;
goto v___jp_787_;
}
else
{
lean_object* v_val_793_; lean_object* v___x_794_; 
lean_dec_ref(v___f_784_);
v_val_793_ = lean_ctor_get(v_ctx_x3f_785_, 0);
lean_inc(v_val_793_);
lean_dec_ref_known(v_ctx_x3f_785_, 1);
v___x_794_ = l_Lean_ppLevel(v_val_793_, v_l_783_);
v_val_788_ = v___x_794_;
goto v___jp_787_;
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = l_Lean_MessageData_ofFormat(v_val_788_);
v___x_790_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_782_, v___x_789_);
lean_dec_ref(v___x_789_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2___boxed(lean_object* v___x_795_, lean_object* v_l_796_, lean_object* v___f_797_, lean_object* v_ctx_x3f_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_MessageData_ofLevel___lam__2(v___x_795_, v_l_796_, v___f_797_, v_ctx_x3f_798_);
lean_dec(v___x_795_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel(lean_object* v_l_802_){
_start:
{
lean_object* v___f_803_; lean_object* v___f_804_; lean_object* v___x_805_; lean_object* v___f_806_; lean_object* v___x_807_; 
v___f_803_ = ((lean_object*)(l_Lean_MessageData_ofLevel___closed__0));
v___f_804_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_805_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
v___f_806_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofLevel___lam__2___boxed), 5, 3);
lean_closure_set(v___f_806_, 0, v___x_805_);
lean_closure_set(v___f_806_, 1, v_l_802_);
lean_closure_set(v___f_806_, 2, v___f_803_);
v___x_807_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_807_, 0, v___f_806_);
lean_ctor_set(v___x_807_, 1, v___f_804_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofName(lean_object* v_n_808_){
_start:
{
uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_809_ = 1;
v___x_810_ = l_Lean_Name_toString(v_n_808_, v___x_809_);
v___x_811_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
v___x_812_ = l_Lean_MessageData_ofFormat(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(lean_object* v_o_816_, lean_object* v_k_817_, uint8_t v_v_818_){
_start:
{
lean_object* v_map_819_; uint8_t v_hasTrace_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_834_; 
v_map_819_ = lean_ctor_get(v_o_816_, 0);
v_hasTrace_820_ = lean_ctor_get_uint8(v_o_816_, sizeof(void*)*1);
v_isSharedCheck_834_ = !lean_is_exclusive(v_o_816_);
if (v_isSharedCheck_834_ == 0)
{
v___x_822_ = v_o_816_;
v_isShared_823_ = v_isSharedCheck_834_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_map_819_);
lean_dec(v_o_816_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_834_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_824_, 0, v_v_818_);
lean_inc(v_k_817_);
v___x_825_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_817_, v___x_824_, v_map_819_);
if (v_hasTrace_820_ == 0)
{
lean_object* v___x_826_; uint8_t v___x_827_; lean_object* v___x_829_; 
v___x_826_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1));
v___x_827_ = l_Lean_Name_isPrefixOf(v___x_826_, v_k_817_);
lean_dec(v_k_817_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_825_);
v___x_829_ = v___x_822_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_825_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_ctor_set_uint8(v___x_829_, sizeof(void*)*1, v___x_827_);
return v___x_829_;
}
}
else
{
lean_object* v___x_832_; 
lean_dec(v_k_817_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_825_);
v___x_832_ = v___x_822_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_825_);
lean_ctor_set_uint8(v_reuseFailAlloc_833_, sizeof(void*)*1, v_hasTrace_820_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___boxed(lean_object* v_o_835_, lean_object* v_k_836_, lean_object* v_v_837_){
_start:
{
uint8_t v_v_boxed_838_; lean_object* v_res_839_; 
v_v_boxed_838_ = lean_unbox(v_v_837_);
v_res_839_ = l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(v_o_835_, v_k_836_, v_v_boxed_838_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1(lean_object* v___x_845_, lean_object* v_constName_846_, uint8_t v_fullNames_847_, lean_object* v_ctx_x3f_848_){
_start:
{
lean_object* v_val_851_; lean_object* v___y_855_; 
if (lean_obj_tag(v_ctx_x3f_848_) == 0)
{
uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_856_ = 1;
v___x_857_ = l_Lean_Name_toString(v_constName_846_, v___x_856_);
v___x_858_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
v___x_859_ = lean_box(1);
v___x_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
v_val_851_ = v___x_860_;
goto v___jp_850_;
}
else
{
if (v_fullNames_847_ == 0)
{
lean_object* v_val_861_; lean_object* v___x_862_; 
v_val_861_ = lean_ctor_get(v_ctx_x3f_848_, 0);
lean_inc(v_val_861_);
lean_dec_ref_known(v_ctx_x3f_848_, 1);
v___x_862_ = l_Lean_ppConstNameWithInfos(v_val_861_, v_constName_846_);
v___y_855_ = v___x_862_;
goto v___jp_854_;
}
else
{
lean_object* v_val_863_; lean_object* v_env_864_; lean_object* v_mctx_865_; lean_object* v_lctx_866_; lean_object* v_opts_867_; lean_object* v_currNamespace_868_; lean_object* v_openDecls_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_879_; 
v_val_863_ = lean_ctor_get(v_ctx_x3f_848_, 0);
lean_inc(v_val_863_);
lean_dec_ref_known(v_ctx_x3f_848_, 1);
v_env_864_ = lean_ctor_get(v_val_863_, 0);
v_mctx_865_ = lean_ctor_get(v_val_863_, 1);
v_lctx_866_ = lean_ctor_get(v_val_863_, 2);
v_opts_867_ = lean_ctor_get(v_val_863_, 3);
v_currNamespace_868_ = lean_ctor_get(v_val_863_, 4);
v_openDecls_869_ = lean_ctor_get(v_val_863_, 5);
v_isSharedCheck_879_ = !lean_is_exclusive(v_val_863_);
if (v_isSharedCheck_879_ == 0)
{
v___x_871_ = v_val_863_;
v_isShared_872_ = v_isSharedCheck_879_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_openDecls_869_);
lean_inc(v_currNamespace_868_);
lean_inc(v_opts_867_);
lean_inc(v_lctx_866_);
lean_inc(v_mctx_865_);
lean_inc(v_env_864_);
lean_dec(v_val_863_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_879_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_876_; 
v___x_873_ = ((lean_object*)(l_Lean_MessageData_ofConstName___lam__1___closed__2));
v___x_874_ = l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(v_opts_867_, v___x_873_, v_fullNames_847_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 3, v___x_874_);
v___x_876_ = v___x_871_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_env_864_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_mctx_865_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v_lctx_866_);
lean_ctor_set(v_reuseFailAlloc_878_, 3, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_878_, 4, v_currNamespace_868_);
lean_ctor_set(v_reuseFailAlloc_878_, 5, v_openDecls_869_);
v___x_876_ = v_reuseFailAlloc_878_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_ppConstNameWithInfos(v___x_876_, v_constName_846_);
v___y_855_ = v___x_877_;
goto v___jp_854_;
}
}
}
}
v___jp_850_:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v_val_851_);
v___x_853_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_845_, v___x_852_);
lean_dec_ref_known(v___x_852_, 1);
return v___x_853_;
}
v___jp_854_:
{
v_val_851_ = v___y_855_;
goto v___jp_850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1___boxed(lean_object* v___x_880_, lean_object* v_constName_881_, lean_object* v_fullNames_882_, lean_object* v_ctx_x3f_883_, lean_object* v___y_884_){
_start:
{
uint8_t v_fullNames_boxed_885_; lean_object* v_res_886_; 
v_fullNames_boxed_885_ = lean_unbox(v_fullNames_882_);
v_res_886_ = l_Lean_MessageData_ofConstName___lam__1(v___x_880_, v_constName_881_, v_fullNames_boxed_885_, v_ctx_x3f_883_);
lean_dec(v___x_880_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName(lean_object* v_constName_887_, uint8_t v_fullNames_888_){
_start:
{
lean_object* v___f_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___f_892_; lean_object* v___x_893_; 
v___f_889_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_890_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
v___x_891_ = lean_box(v_fullNames_888_);
v___f_892_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofConstName___lam__1___boxed), 5, 3);
lean_closure_set(v___f_892_, 0, v___x_890_);
lean_closure_set(v___f_892_, 1, v_constName_887_);
lean_closure_set(v___f_892_, 2, v___x_891_);
v___x_893_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_893_, 0, v___f_892_);
lean_ctor_set(v___x_893_, 1, v___f_889_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___boxed(lean_object* v_constName_894_, lean_object* v_fullNames_895_){
_start:
{
uint8_t v_fullNames_boxed_896_; lean_object* v_res_897_; 
v_fullNames_boxed_896_ = lean_unbox(v_fullNames_895_);
v_res_897_ = l_Lean_MessageData_ofConstName(v_constName_894_, v_fullNames_boxed_896_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0(lean_object* v_val_898_, lean_object* v___y_899_){
_start:
{
lean_object* v___x_901_; 
v___x_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_901_, 0, v_val_898_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0___boxed(lean_object* v_val_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lean_MessageData_withExprHover___lam__0(v_val_902_, v___y_903_);
lean_dec_ref(v___y_903_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(lean_object* v_k_906_, lean_object* v_v_907_, lean_object* v_t_908_){
_start:
{
if (lean_obj_tag(v_t_908_) == 0)
{
lean_object* v_size_909_; lean_object* v_k_910_; lean_object* v_v_911_; lean_object* v_l_912_; lean_object* v_r_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_1194_; 
v_size_909_ = lean_ctor_get(v_t_908_, 0);
v_k_910_ = lean_ctor_get(v_t_908_, 1);
v_v_911_ = lean_ctor_get(v_t_908_, 2);
v_l_912_ = lean_ctor_get(v_t_908_, 3);
v_r_913_ = lean_ctor_get(v_t_908_, 4);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_t_908_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_915_ = v_t_908_;
v_isShared_916_ = v_isSharedCheck_1194_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_r_913_);
lean_inc(v_l_912_);
lean_inc(v_v_911_);
lean_inc(v_k_910_);
lean_inc(v_size_909_);
lean_dec(v_t_908_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_1194_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
uint8_t v___x_917_; 
v___x_917_ = lean_nat_dec_lt(v_k_906_, v_k_910_);
if (v___x_917_ == 0)
{
uint8_t v___x_918_; 
v___x_918_ = lean_nat_dec_eq(v_k_906_, v_k_910_);
if (v___x_918_ == 0)
{
lean_object* v_impl_919_; lean_object* v___x_920_; 
lean_dec(v_size_909_);
v_impl_919_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_906_, v_v_907_, v_r_913_);
v___x_920_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_912_) == 0)
{
lean_object* v_size_921_; lean_object* v_size_922_; lean_object* v_k_923_; lean_object* v_v_924_; lean_object* v_l_925_; lean_object* v_r_926_; lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v_size_921_ = lean_ctor_get(v_l_912_, 0);
v_size_922_ = lean_ctor_get(v_impl_919_, 0);
lean_inc(v_size_922_);
v_k_923_ = lean_ctor_get(v_impl_919_, 1);
lean_inc(v_k_923_);
v_v_924_ = lean_ctor_get(v_impl_919_, 2);
lean_inc(v_v_924_);
v_l_925_ = lean_ctor_get(v_impl_919_, 3);
lean_inc(v_l_925_);
v_r_926_ = lean_ctor_get(v_impl_919_, 4);
lean_inc(v_r_926_);
v___x_927_ = lean_unsigned_to_nat(3u);
v___x_928_ = lean_nat_mul(v___x_927_, v_size_921_);
v___x_929_ = lean_nat_dec_lt(v___x_928_, v_size_922_);
lean_dec(v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
lean_dec(v_r_926_);
lean_dec(v_l_925_);
lean_dec(v_v_924_);
lean_dec(v_k_923_);
v___x_930_ = lean_nat_add(v___x_920_, v_size_921_);
v___x_931_ = lean_nat_add(v___x_930_, v_size_922_);
lean_dec(v_size_922_);
lean_dec(v___x_930_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_impl_919_);
lean_ctor_set(v___x_915_, 0, v___x_931_);
v___x_933_ = v___x_915_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_934_, 3, v_l_912_);
lean_ctor_set(v_reuseFailAlloc_934_, 4, v_impl_919_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
else
{
lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_998_; 
v_isSharedCheck_998_ = !lean_is_exclusive(v_impl_919_);
if (v_isSharedCheck_998_ == 0)
{
lean_object* v_unused_999_; lean_object* v_unused_1000_; lean_object* v_unused_1001_; lean_object* v_unused_1002_; lean_object* v_unused_1003_; 
v_unused_999_ = lean_ctor_get(v_impl_919_, 4);
lean_dec(v_unused_999_);
v_unused_1000_ = lean_ctor_get(v_impl_919_, 3);
lean_dec(v_unused_1000_);
v_unused_1001_ = lean_ctor_get(v_impl_919_, 2);
lean_dec(v_unused_1001_);
v_unused_1002_ = lean_ctor_get(v_impl_919_, 1);
lean_dec(v_unused_1002_);
v_unused_1003_ = lean_ctor_get(v_impl_919_, 0);
lean_dec(v_unused_1003_);
v___x_936_ = v_impl_919_;
v_isShared_937_ = v_isSharedCheck_998_;
goto v_resetjp_935_;
}
else
{
lean_dec(v_impl_919_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_998_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v_size_938_; lean_object* v_k_939_; lean_object* v_v_940_; lean_object* v_l_941_; lean_object* v_r_942_; lean_object* v_size_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_size_938_ = lean_ctor_get(v_l_925_, 0);
v_k_939_ = lean_ctor_get(v_l_925_, 1);
v_v_940_ = lean_ctor_get(v_l_925_, 2);
v_l_941_ = lean_ctor_get(v_l_925_, 3);
v_r_942_ = lean_ctor_get(v_l_925_, 4);
v_size_943_ = lean_ctor_get(v_r_926_, 0);
v___x_944_ = lean_unsigned_to_nat(2u);
v___x_945_ = lean_nat_mul(v___x_944_, v_size_943_);
v___x_946_ = lean_nat_dec_lt(v_size_938_, v___x_945_);
lean_dec(v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_974_; 
lean_inc(v_r_942_);
lean_inc(v_l_941_);
lean_inc(v_v_940_);
lean_inc(v_k_939_);
v_isSharedCheck_974_ = !lean_is_exclusive(v_l_925_);
if (v_isSharedCheck_974_ == 0)
{
lean_object* v_unused_975_; lean_object* v_unused_976_; lean_object* v_unused_977_; lean_object* v_unused_978_; lean_object* v_unused_979_; 
v_unused_975_ = lean_ctor_get(v_l_925_, 4);
lean_dec(v_unused_975_);
v_unused_976_ = lean_ctor_get(v_l_925_, 3);
lean_dec(v_unused_976_);
v_unused_977_ = lean_ctor_get(v_l_925_, 2);
lean_dec(v_unused_977_);
v_unused_978_ = lean_ctor_get(v_l_925_, 1);
lean_dec(v_unused_978_);
v_unused_979_ = lean_ctor_get(v_l_925_, 0);
lean_dec(v_unused_979_);
v___x_948_ = v_l_925_;
v_isShared_949_ = v_isSharedCheck_974_;
goto v_resetjp_947_;
}
else
{
lean_dec(v_l_925_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_974_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_955_; lean_object* v___y_964_; 
v___x_950_ = lean_nat_add(v___x_920_, v_size_921_);
v___x_951_ = lean_nat_add(v___x_950_, v_size_922_);
lean_dec(v_size_922_);
if (lean_obj_tag(v_l_941_) == 0)
{
lean_object* v_size_972_; 
v_size_972_ = lean_ctor_get(v_l_941_, 0);
lean_inc(v_size_972_);
v___y_964_ = v_size_972_;
goto v___jp_963_;
}
else
{
lean_object* v___x_973_; 
v___x_973_ = lean_unsigned_to_nat(0u);
v___y_964_ = v___x_973_;
goto v___jp_963_;
}
v___jp_952_:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = lean_nat_add(v___y_954_, v___y_955_);
lean_dec(v___y_955_);
lean_dec(v___y_954_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 4, v_r_926_);
lean_ctor_set(v___x_948_, 3, v_r_942_);
lean_ctor_set(v___x_948_, 2, v_v_924_);
lean_ctor_set(v___x_948_, 1, v_k_923_);
lean_ctor_set(v___x_948_, 0, v___x_956_);
v___x_958_ = v___x_948_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_k_923_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v_v_924_);
lean_ctor_set(v_reuseFailAlloc_962_, 3, v_r_942_);
lean_ctor_set(v_reuseFailAlloc_962_, 4, v_r_926_);
v___x_958_ = v_reuseFailAlloc_962_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 4, v___x_958_);
lean_ctor_set(v___x_936_, 3, v___y_953_);
lean_ctor_set(v___x_936_, 2, v_v_940_);
lean_ctor_set(v___x_936_, 1, v_k_939_);
lean_ctor_set(v___x_936_, 0, v___x_951_);
v___x_960_ = v___x_936_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_951_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_k_939_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v_v_940_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v___y_953_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
v___jp_963_:
{
lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_965_ = lean_nat_add(v___x_950_, v___y_964_);
lean_dec(v___y_964_);
lean_dec(v___x_950_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_l_941_);
lean_ctor_set(v___x_915_, 0, v___x_965_);
v___x_967_ = v___x_915_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_965_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_971_, 3, v_l_912_);
lean_ctor_set(v_reuseFailAlloc_971_, 4, v_l_941_);
v___x_967_ = v_reuseFailAlloc_971_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; 
v___x_968_ = lean_nat_add(v___x_920_, v_size_943_);
if (lean_obj_tag(v_r_942_) == 0)
{
lean_object* v_size_969_; 
v_size_969_ = lean_ctor_get(v_r_942_, 0);
lean_inc(v_size_969_);
v___y_953_ = v___x_967_;
v___y_954_ = v___x_968_;
v___y_955_ = v_size_969_;
goto v___jp_952_;
}
else
{
lean_object* v___x_970_; 
v___x_970_ = lean_unsigned_to_nat(0u);
v___y_953_ = v___x_967_;
v___y_954_ = v___x_968_;
v___y_955_ = v___x_970_;
goto v___jp_952_;
}
}
}
}
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
lean_del_object(v___x_915_);
v___x_980_ = lean_nat_add(v___x_920_, v_size_921_);
v___x_981_ = lean_nat_add(v___x_980_, v_size_922_);
lean_dec(v_size_922_);
v___x_982_ = lean_nat_add(v___x_980_, v_size_938_);
lean_dec(v___x_980_);
lean_inc_ref(v_l_912_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 4, v_l_925_);
lean_ctor_set(v___x_936_, 3, v_l_912_);
lean_ctor_set(v___x_936_, 2, v_v_911_);
lean_ctor_set(v___x_936_, 1, v_k_910_);
lean_ctor_set(v___x_936_, 0, v___x_982_);
v___x_984_ = v___x_936_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_982_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_997_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_997_, 3, v_l_912_);
lean_ctor_set(v_reuseFailAlloc_997_, 4, v_l_925_);
v___x_984_ = v_reuseFailAlloc_997_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_isSharedCheck_991_ = !lean_is_exclusive(v_l_912_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; lean_object* v_unused_995_; lean_object* v_unused_996_; 
v_unused_992_ = lean_ctor_get(v_l_912_, 4);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_l_912_, 3);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_l_912_, 2);
lean_dec(v_unused_994_);
v_unused_995_ = lean_ctor_get(v_l_912_, 1);
lean_dec(v_unused_995_);
v_unused_996_ = lean_ctor_get(v_l_912_, 0);
lean_dec(v_unused_996_);
v___x_986_ = v_l_912_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_dec(v_l_912_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
lean_ctor_set(v___x_986_, 4, v_r_926_);
lean_ctor_set(v___x_986_, 3, v___x_984_);
lean_ctor_set(v___x_986_, 2, v_v_924_);
lean_ctor_set(v___x_986_, 1, v_k_923_);
lean_ctor_set(v___x_986_, 0, v___x_981_);
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_981_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_k_923_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_v_924_);
lean_ctor_set(v_reuseFailAlloc_990_, 3, v___x_984_);
lean_ctor_set(v_reuseFailAlloc_990_, 4, v_r_926_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1004_; 
v_l_1004_ = lean_ctor_get(v_impl_919_, 3);
lean_inc(v_l_1004_);
if (lean_obj_tag(v_l_1004_) == 0)
{
lean_object* v_r_1005_; lean_object* v_k_1006_; lean_object* v_v_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1030_; 
v_r_1005_ = lean_ctor_get(v_impl_919_, 4);
v_k_1006_ = lean_ctor_get(v_impl_919_, 1);
v_v_1007_ = lean_ctor_get(v_impl_919_, 2);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_impl_919_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; lean_object* v_unused_1032_; 
v_unused_1031_ = lean_ctor_get(v_impl_919_, 3);
lean_dec(v_unused_1031_);
v_unused_1032_ = lean_ctor_get(v_impl_919_, 0);
lean_dec(v_unused_1032_);
v___x_1009_ = v_impl_919_;
v_isShared_1010_ = v_isSharedCheck_1030_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_r_1005_);
lean_inc(v_v_1007_);
lean_inc(v_k_1006_);
lean_dec(v_impl_919_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1030_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_k_1011_; lean_object* v_v_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1026_; 
v_k_1011_ = lean_ctor_get(v_l_1004_, 1);
v_v_1012_ = lean_ctor_get(v_l_1004_, 2);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_l_1004_);
if (v_isSharedCheck_1026_ == 0)
{
lean_object* v_unused_1027_; lean_object* v_unused_1028_; lean_object* v_unused_1029_; 
v_unused_1027_ = lean_ctor_get(v_l_1004_, 4);
lean_dec(v_unused_1027_);
v_unused_1028_ = lean_ctor_get(v_l_1004_, 3);
lean_dec(v_unused_1028_);
v_unused_1029_ = lean_ctor_get(v_l_1004_, 0);
lean_dec(v_unused_1029_);
v___x_1014_ = v_l_1004_;
v_isShared_1015_ = v_isSharedCheck_1026_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_v_1012_);
lean_inc(v_k_1011_);
lean_dec(v_l_1004_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1026_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1016_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1005_, 2);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 4, v_r_1005_);
lean_ctor_set(v___x_1014_, 3, v_r_1005_);
lean_ctor_set(v___x_1014_, 2, v_v_911_);
lean_ctor_set(v___x_1014_, 1, v_k_910_);
lean_ctor_set(v___x_1014_, 0, v___x_920_);
v___x_1018_ = v___x_1014_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1025_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1025_, 3, v_r_1005_);
lean_ctor_set(v_reuseFailAlloc_1025_, 4, v_r_1005_);
v___x_1018_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1020_; 
lean_inc(v_r_1005_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 3, v_r_1005_);
lean_ctor_set(v___x_1009_, 0, v___x_920_);
v___x_1020_ = v___x_1009_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_k_1006_);
lean_ctor_set(v_reuseFailAlloc_1024_, 2, v_v_1007_);
lean_ctor_set(v_reuseFailAlloc_1024_, 3, v_r_1005_);
lean_ctor_set(v_reuseFailAlloc_1024_, 4, v_r_1005_);
v___x_1020_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1022_; 
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v___x_1020_);
lean_ctor_set(v___x_915_, 3, v___x_1018_);
lean_ctor_set(v___x_915_, 2, v_v_1012_);
lean_ctor_set(v___x_915_, 1, v_k_1011_);
lean_ctor_set(v___x_915_, 0, v___x_1016_);
v___x_1022_ = v___x_915_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_k_1011_);
lean_ctor_set(v_reuseFailAlloc_1023_, 2, v_v_1012_);
lean_ctor_set(v_reuseFailAlloc_1023_, 3, v___x_1018_);
lean_ctor_set(v_reuseFailAlloc_1023_, 4, v___x_1020_);
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
else
{
lean_object* v_r_1033_; 
v_r_1033_ = lean_ctor_get(v_impl_919_, 4);
lean_inc(v_r_1033_);
if (lean_obj_tag(v_r_1033_) == 0)
{
lean_object* v_k_1034_; lean_object* v_v_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1046_; 
v_k_1034_ = lean_ctor_get(v_impl_919_, 1);
v_v_1035_ = lean_ctor_get(v_impl_919_, 2);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_impl_919_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; lean_object* v_unused_1048_; lean_object* v_unused_1049_; 
v_unused_1047_ = lean_ctor_get(v_impl_919_, 4);
lean_dec(v_unused_1047_);
v_unused_1048_ = lean_ctor_get(v_impl_919_, 3);
lean_dec(v_unused_1048_);
v_unused_1049_ = lean_ctor_get(v_impl_919_, 0);
lean_dec(v_unused_1049_);
v___x_1037_ = v_impl_919_;
v_isShared_1038_ = v_isSharedCheck_1046_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_v_1035_);
lean_inc(v_k_1034_);
lean_dec(v_impl_919_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1046_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1041_; 
v___x_1039_ = lean_unsigned_to_nat(3u);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 4, v_l_1004_);
lean_ctor_set(v___x_1037_, 2, v_v_911_);
lean_ctor_set(v___x_1037_, 1, v_k_910_);
lean_ctor_set(v___x_1037_, 0, v___x_920_);
v___x_1041_ = v___x_1037_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1045_, 3, v_l_1004_);
lean_ctor_set(v_reuseFailAlloc_1045_, 4, v_l_1004_);
v___x_1041_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1043_; 
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_r_1033_);
lean_ctor_set(v___x_915_, 3, v___x_1041_);
lean_ctor_set(v___x_915_, 2, v_v_1035_);
lean_ctor_set(v___x_915_, 1, v_k_1034_);
lean_ctor_set(v___x_915_, 0, v___x_1039_);
v___x_1043_ = v___x_915_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1044_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1044_, 3, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1044_, 4, v_r_1033_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1050_ = lean_unsigned_to_nat(2u);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_impl_919_);
lean_ctor_set(v___x_915_, 3, v_r_1033_);
lean_ctor_set(v___x_915_, 0, v___x_1050_);
v___x_1052_ = v___x_915_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1053_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1053_, 3, v_r_1033_);
lean_ctor_set(v_reuseFailAlloc_1053_, 4, v_impl_919_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
else
{
lean_object* v___x_1055_; 
lean_dec(v_v_911_);
lean_dec(v_k_910_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 2, v_v_907_);
lean_ctor_set(v___x_915_, 1, v_k_906_);
v___x_1055_ = v___x_915_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_size_909_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1056_, 3, v_l_912_);
lean_ctor_set(v_reuseFailAlloc_1056_, 4, v_r_913_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_impl_1057_; lean_object* v___x_1058_; 
lean_dec(v_size_909_);
v_impl_1057_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_906_, v_v_907_, v_l_912_);
v___x_1058_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_913_) == 0)
{
lean_object* v_size_1059_; lean_object* v_size_1060_; lean_object* v_k_1061_; lean_object* v_v_1062_; lean_object* v_l_1063_; lean_object* v_r_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; 
v_size_1059_ = lean_ctor_get(v_r_913_, 0);
v_size_1060_ = lean_ctor_get(v_impl_1057_, 0);
lean_inc(v_size_1060_);
v_k_1061_ = lean_ctor_get(v_impl_1057_, 1);
lean_inc(v_k_1061_);
v_v_1062_ = lean_ctor_get(v_impl_1057_, 2);
lean_inc(v_v_1062_);
v_l_1063_ = lean_ctor_get(v_impl_1057_, 3);
lean_inc(v_l_1063_);
v_r_1064_ = lean_ctor_get(v_impl_1057_, 4);
lean_inc(v_r_1064_);
v___x_1065_ = lean_unsigned_to_nat(3u);
v___x_1066_ = lean_nat_mul(v___x_1065_, v_size_1059_);
v___x_1067_ = lean_nat_dec_lt(v___x_1066_, v_size_1060_);
lean_dec(v___x_1066_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
lean_dec(v_r_1064_);
lean_dec(v_l_1063_);
lean_dec(v_v_1062_);
lean_dec(v_k_1061_);
v___x_1068_ = lean_nat_add(v___x_1058_, v_size_1060_);
lean_dec(v_size_1060_);
v___x_1069_ = lean_nat_add(v___x_1068_, v_size_1059_);
lean_dec(v___x_1068_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 3, v_impl_1057_);
lean_ctor_set(v___x_915_, 0, v___x_1069_);
v___x_1071_ = v___x_915_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1072_, 3, v_impl_1057_);
lean_ctor_set(v_reuseFailAlloc_1072_, 4, v_r_913_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
else
{
lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1138_; 
v_isSharedCheck_1138_ = !lean_is_exclusive(v_impl_1057_);
if (v_isSharedCheck_1138_ == 0)
{
lean_object* v_unused_1139_; lean_object* v_unused_1140_; lean_object* v_unused_1141_; lean_object* v_unused_1142_; lean_object* v_unused_1143_; 
v_unused_1139_ = lean_ctor_get(v_impl_1057_, 4);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v_impl_1057_, 3);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v_impl_1057_, 2);
lean_dec(v_unused_1141_);
v_unused_1142_ = lean_ctor_get(v_impl_1057_, 1);
lean_dec(v_unused_1142_);
v_unused_1143_ = lean_ctor_get(v_impl_1057_, 0);
lean_dec(v_unused_1143_);
v___x_1074_ = v_impl_1057_;
v_isShared_1075_ = v_isSharedCheck_1138_;
goto v_resetjp_1073_;
}
else
{
lean_dec(v_impl_1057_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1138_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v_size_1076_; lean_object* v_size_1077_; lean_object* v_k_1078_; lean_object* v_v_1079_; lean_object* v_l_1080_; lean_object* v_r_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; uint8_t v___x_1084_; 
v_size_1076_ = lean_ctor_get(v_l_1063_, 0);
v_size_1077_ = lean_ctor_get(v_r_1064_, 0);
v_k_1078_ = lean_ctor_get(v_r_1064_, 1);
v_v_1079_ = lean_ctor_get(v_r_1064_, 2);
v_l_1080_ = lean_ctor_get(v_r_1064_, 3);
v_r_1081_ = lean_ctor_get(v_r_1064_, 4);
v___x_1082_ = lean_unsigned_to_nat(2u);
v___x_1083_ = lean_nat_mul(v___x_1082_, v_size_1076_);
v___x_1084_ = lean_nat_dec_lt(v_size_1077_, v___x_1083_);
lean_dec(v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1113_; 
lean_inc(v_r_1081_);
lean_inc(v_l_1080_);
lean_inc(v_v_1079_);
lean_inc(v_k_1078_);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_r_1064_);
if (v_isSharedCheck_1113_ == 0)
{
lean_object* v_unused_1114_; lean_object* v_unused_1115_; lean_object* v_unused_1116_; lean_object* v_unused_1117_; lean_object* v_unused_1118_; 
v_unused_1114_ = lean_ctor_get(v_r_1064_, 4);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v_r_1064_, 3);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v_r_1064_, 2);
lean_dec(v_unused_1116_);
v_unused_1117_ = lean_ctor_get(v_r_1064_, 1);
lean_dec(v_unused_1117_);
v_unused_1118_ = lean_ctor_get(v_r_1064_, 0);
lean_dec(v_unused_1118_);
v___x_1086_ = v_r_1064_;
v_isShared_1087_ = v_isSharedCheck_1113_;
goto v_resetjp_1085_;
}
else
{
lean_dec(v_r_1064_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1113_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___x_1101_; lean_object* v___y_1103_; 
v___x_1088_ = lean_nat_add(v___x_1058_, v_size_1060_);
lean_dec(v_size_1060_);
v___x_1089_ = lean_nat_add(v___x_1088_, v_size_1059_);
lean_dec(v___x_1088_);
v___x_1101_ = lean_nat_add(v___x_1058_, v_size_1076_);
if (lean_obj_tag(v_l_1080_) == 0)
{
lean_object* v_size_1111_; 
v_size_1111_ = lean_ctor_get(v_l_1080_, 0);
lean_inc(v_size_1111_);
v___y_1103_ = v_size_1111_;
goto v___jp_1102_;
}
else
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_unsigned_to_nat(0u);
v___y_1103_ = v___x_1112_;
goto v___jp_1102_;
}
v___jp_1090_:
{
lean_object* v___x_1094_; lean_object* v___x_1096_; 
v___x_1094_ = lean_nat_add(v___y_1092_, v___y_1093_);
lean_dec(v___y_1093_);
lean_dec(v___y_1092_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 4, v_r_913_);
lean_ctor_set(v___x_1086_, 3, v_r_1081_);
lean_ctor_set(v___x_1086_, 2, v_v_911_);
lean_ctor_set(v___x_1086_, 1, v_k_910_);
lean_ctor_set(v___x_1086_, 0, v___x_1094_);
v___x_1096_ = v___x_1086_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1094_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1100_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1100_, 3, v_r_1081_);
lean_ctor_set(v_reuseFailAlloc_1100_, 4, v_r_913_);
v___x_1096_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1098_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 4, v___x_1096_);
lean_ctor_set(v___x_1074_, 3, v___y_1091_);
lean_ctor_set(v___x_1074_, 2, v_v_1079_);
lean_ctor_set(v___x_1074_, 1, v_k_1078_);
lean_ctor_set(v___x_1074_, 0, v___x_1089_);
v___x_1098_ = v___x_1074_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_k_1078_);
lean_ctor_set(v_reuseFailAlloc_1099_, 2, v_v_1079_);
lean_ctor_set(v_reuseFailAlloc_1099_, 3, v___y_1091_);
lean_ctor_set(v_reuseFailAlloc_1099_, 4, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1104_ = lean_nat_add(v___x_1101_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec(v___x_1101_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_l_1080_);
lean_ctor_set(v___x_915_, 3, v_l_1063_);
lean_ctor_set(v___x_915_, 2, v_v_1062_);
lean_ctor_set(v___x_915_, 1, v_k_1061_);
lean_ctor_set(v___x_915_, 0, v___x_1104_);
v___x_1106_ = v___x_915_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_k_1061_);
lean_ctor_set(v_reuseFailAlloc_1110_, 2, v_v_1062_);
lean_ctor_set(v_reuseFailAlloc_1110_, 3, v_l_1063_);
lean_ctor_set(v_reuseFailAlloc_1110_, 4, v_l_1080_);
v___x_1106_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_nat_add(v___x_1058_, v_size_1059_);
if (lean_obj_tag(v_r_1081_) == 0)
{
lean_object* v_size_1108_; 
v_size_1108_ = lean_ctor_get(v_r_1081_, 0);
lean_inc(v_size_1108_);
v___y_1091_ = v___x_1106_;
v___y_1092_ = v___x_1107_;
v___y_1093_ = v_size_1108_;
goto v___jp_1090_;
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_unsigned_to_nat(0u);
v___y_1091_ = v___x_1106_;
v___y_1092_ = v___x_1107_;
v___y_1093_ = v___x_1109_;
goto v___jp_1090_;
}
}
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
lean_del_object(v___x_915_);
v___x_1119_ = lean_nat_add(v___x_1058_, v_size_1060_);
lean_dec(v_size_1060_);
v___x_1120_ = lean_nat_add(v___x_1119_, v_size_1059_);
lean_dec(v___x_1119_);
v___x_1121_ = lean_nat_add(v___x_1058_, v_size_1059_);
v___x_1122_ = lean_nat_add(v___x_1121_, v_size_1077_);
lean_dec(v___x_1121_);
lean_inc_ref(v_r_913_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 4, v_r_913_);
lean_ctor_set(v___x_1074_, 3, v_r_1064_);
lean_ctor_set(v___x_1074_, 2, v_v_911_);
lean_ctor_set(v___x_1074_, 1, v_k_910_);
lean_ctor_set(v___x_1074_, 0, v___x_1122_);
v___x_1124_ = v___x_1074_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1122_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1137_, 3, v_r_1064_);
lean_ctor_set(v_reuseFailAlloc_1137_, 4, v_r_913_);
v___x_1124_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
v_isSharedCheck_1131_ = !lean_is_exclusive(v_r_913_);
if (v_isSharedCheck_1131_ == 0)
{
lean_object* v_unused_1132_; lean_object* v_unused_1133_; lean_object* v_unused_1134_; lean_object* v_unused_1135_; lean_object* v_unused_1136_; 
v_unused_1132_ = lean_ctor_get(v_r_913_, 4);
lean_dec(v_unused_1132_);
v_unused_1133_ = lean_ctor_get(v_r_913_, 3);
lean_dec(v_unused_1133_);
v_unused_1134_ = lean_ctor_get(v_r_913_, 2);
lean_dec(v_unused_1134_);
v_unused_1135_ = lean_ctor_get(v_r_913_, 1);
lean_dec(v_unused_1135_);
v_unused_1136_ = lean_ctor_get(v_r_913_, 0);
lean_dec(v_unused_1136_);
v___x_1126_ = v_r_913_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_dec(v_r_913_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 4, v___x_1124_);
lean_ctor_set(v___x_1126_, 3, v_l_1063_);
lean_ctor_set(v___x_1126_, 2, v_v_1062_);
lean_ctor_set(v___x_1126_, 1, v_k_1061_);
lean_ctor_set(v___x_1126_, 0, v___x_1120_);
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_k_1061_);
lean_ctor_set(v_reuseFailAlloc_1130_, 2, v_v_1062_);
lean_ctor_set(v_reuseFailAlloc_1130_, 3, v_l_1063_);
lean_ctor_set(v_reuseFailAlloc_1130_, 4, v___x_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1144_; 
v_l_1144_ = lean_ctor_get(v_impl_1057_, 3);
lean_inc(v_l_1144_);
if (lean_obj_tag(v_l_1144_) == 0)
{
lean_object* v_r_1145_; lean_object* v_k_1146_; lean_object* v_v_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1158_; 
v_r_1145_ = lean_ctor_get(v_impl_1057_, 4);
v_k_1146_ = lean_ctor_get(v_impl_1057_, 1);
v_v_1147_ = lean_ctor_get(v_impl_1057_, 2);
v_isSharedCheck_1158_ = !lean_is_exclusive(v_impl_1057_);
if (v_isSharedCheck_1158_ == 0)
{
lean_object* v_unused_1159_; lean_object* v_unused_1160_; 
v_unused_1159_ = lean_ctor_get(v_impl_1057_, 3);
lean_dec(v_unused_1159_);
v_unused_1160_ = lean_ctor_get(v_impl_1057_, 0);
lean_dec(v_unused_1160_);
v___x_1149_ = v_impl_1057_;
v_isShared_1150_ = v_isSharedCheck_1158_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_r_1145_);
lean_inc(v_v_1147_);
lean_inc(v_k_1146_);
lean_dec(v_impl_1057_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1158_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1145_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 3, v_r_1145_);
lean_ctor_set(v___x_1149_, 2, v_v_911_);
lean_ctor_set(v___x_1149_, 1, v_k_910_);
lean_ctor_set(v___x_1149_, 0, v___x_1058_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1157_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1157_, 3, v_r_1145_);
lean_ctor_set(v_reuseFailAlloc_1157_, 4, v_r_1145_);
v___x_1153_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1155_; 
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v___x_1153_);
lean_ctor_set(v___x_915_, 3, v_l_1144_);
lean_ctor_set(v___x_915_, 2, v_v_1147_);
lean_ctor_set(v___x_915_, 1, v_k_1146_);
lean_ctor_set(v___x_915_, 0, v___x_1151_);
v___x_1155_ = v___x_915_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_k_1146_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_v_1147_);
lean_ctor_set(v_reuseFailAlloc_1156_, 3, v_l_1144_);
lean_ctor_set(v_reuseFailAlloc_1156_, 4, v___x_1153_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
else
{
lean_object* v_r_1161_; 
v_r_1161_ = lean_ctor_get(v_impl_1057_, 4);
lean_inc(v_r_1161_);
if (lean_obj_tag(v_r_1161_) == 0)
{
lean_object* v_k_1162_; lean_object* v_v_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1186_; 
v_k_1162_ = lean_ctor_get(v_impl_1057_, 1);
v_v_1163_ = lean_ctor_get(v_impl_1057_, 2);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_impl_1057_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; lean_object* v_unused_1188_; lean_object* v_unused_1189_; 
v_unused_1187_ = lean_ctor_get(v_impl_1057_, 4);
lean_dec(v_unused_1187_);
v_unused_1188_ = lean_ctor_get(v_impl_1057_, 3);
lean_dec(v_unused_1188_);
v_unused_1189_ = lean_ctor_get(v_impl_1057_, 0);
lean_dec(v_unused_1189_);
v___x_1165_ = v_impl_1057_;
v_isShared_1166_ = v_isSharedCheck_1186_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_v_1163_);
lean_inc(v_k_1162_);
lean_dec(v_impl_1057_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1186_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v_k_1167_; lean_object* v_v_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1182_; 
v_k_1167_ = lean_ctor_get(v_r_1161_, 1);
v_v_1168_ = lean_ctor_get(v_r_1161_, 2);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_r_1161_);
if (v_isSharedCheck_1182_ == 0)
{
lean_object* v_unused_1183_; lean_object* v_unused_1184_; lean_object* v_unused_1185_; 
v_unused_1183_ = lean_ctor_get(v_r_1161_, 4);
lean_dec(v_unused_1183_);
v_unused_1184_ = lean_ctor_get(v_r_1161_, 3);
lean_dec(v_unused_1184_);
v_unused_1185_ = lean_ctor_get(v_r_1161_, 0);
lean_dec(v_unused_1185_);
v___x_1170_ = v_r_1161_;
v_isShared_1171_ = v_isSharedCheck_1182_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_v_1168_);
lean_inc(v_k_1167_);
lean_dec(v_r_1161_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1182_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = lean_unsigned_to_nat(3u);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 4, v_l_1144_);
lean_ctor_set(v___x_1170_, 3, v_l_1144_);
lean_ctor_set(v___x_1170_, 2, v_v_1163_);
lean_ctor_set(v___x_1170_, 1, v_k_1162_);
lean_ctor_set(v___x_1170_, 0, v___x_1058_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_k_1162_);
lean_ctor_set(v_reuseFailAlloc_1181_, 2, v_v_1163_);
lean_ctor_set(v_reuseFailAlloc_1181_, 3, v_l_1144_);
lean_ctor_set(v_reuseFailAlloc_1181_, 4, v_l_1144_);
v___x_1174_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
lean_object* v___x_1176_; 
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 4, v_l_1144_);
lean_ctor_set(v___x_1165_, 2, v_v_911_);
lean_ctor_set(v___x_1165_, 1, v_k_910_);
lean_ctor_set(v___x_1165_, 0, v___x_1058_);
v___x_1176_ = v___x_1165_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1180_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1180_, 3, v_l_1144_);
lean_ctor_set(v_reuseFailAlloc_1180_, 4, v_l_1144_);
v___x_1176_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
lean_object* v___x_1178_; 
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v___x_1176_);
lean_ctor_set(v___x_915_, 3, v___x_1174_);
lean_ctor_set(v___x_915_, 2, v_v_1168_);
lean_ctor_set(v___x_915_, 1, v_k_1167_);
lean_ctor_set(v___x_915_, 0, v___x_1172_);
v___x_1178_ = v___x_915_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1172_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_k_1167_);
lean_ctor_set(v_reuseFailAlloc_1179_, 2, v_v_1168_);
lean_ctor_set(v_reuseFailAlloc_1179_, 3, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1179_, 4, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
}
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1192_; 
v___x_1190_ = lean_unsigned_to_nat(2u);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_r_1161_);
lean_ctor_set(v___x_915_, 3, v_impl_1057_);
lean_ctor_set(v___x_915_, 0, v___x_1190_);
v___x_1192_ = v___x_915_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1190_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_impl_1057_);
lean_ctor_set(v_reuseFailAlloc_1193_, 4, v_r_1161_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_unsigned_to_nat(1u);
v___x_1196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
lean_ctor_set(v___x_1196_, 1, v_k_906_);
lean_ctor_set(v___x_1196_, 2, v_v_907_);
lean_ctor_set(v___x_1196_, 3, v_t_908_);
lean_ctor_set(v___x_1196_, 4, v_t_908_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(lean_object* v_as_x27_1197_, lean_object* v_b_1198_){
_start:
{
if (lean_obj_tag(v_as_x27_1197_) == 0)
{
return v_b_1198_;
}
else
{
lean_object* v_head_1199_; lean_object* v_tail_1200_; lean_object* v_fst_1201_; lean_object* v_snd_1202_; lean_object* v_r_1203_; 
v_head_1199_ = lean_ctor_get(v_as_x27_1197_, 0);
v_tail_1200_ = lean_ctor_get(v_as_x27_1197_, 1);
v_fst_1201_ = lean_ctor_get(v_head_1199_, 0);
v_snd_1202_ = lean_ctor_get(v_head_1199_, 1);
lean_inc(v_snd_1202_);
lean_inc(v_fst_1201_);
v_r_1203_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_fst_1201_, v_snd_1202_, v_b_1198_);
v_as_x27_1197_ = v_tail_1200_;
v_b_1198_ = v_r_1203_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg___boxed(lean_object* v_as_x27_1205_, lean_object* v_b_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v_as_x27_1205_, v_b_1206_);
lean_dec(v_as_x27_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover(lean_object* v_fmt_1216_, lean_object* v_expr_1217_, lean_object* v_lctx_1218_, lean_object* v_location_x3f_1219_, lean_object* v_docString_x3f_1220_, lean_object* v_mkDocString_x3f_1221_, uint8_t v_explicit_1222_){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v___x_1228_; lean_object* v___y_1230_; 
v___x_1223_ = lean_unsigned_to_nat(0u);
v___x_1224_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
lean_ctor_set(v___x_1224_, 1, v_fmt_1216_);
v___x_1225_ = ((lean_object*)(l_Lean_MessageData_withExprHover___closed__3));
v___x_1226_ = lean_box(0);
v___x_1227_ = 0;
v___x_1228_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1228_, 0, v___x_1225_);
lean_ctor_set(v___x_1228_, 1, v_lctx_1218_);
lean_ctor_set(v___x_1228_, 2, v___x_1226_);
lean_ctor_set(v___x_1228_, 3, v_expr_1217_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*4, v___x_1227_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*4 + 1, v___x_1227_);
if (lean_obj_tag(v_mkDocString_x3f_1221_) == 0)
{
if (lean_obj_tag(v_docString_x3f_1220_) == 0)
{
v___y_1230_ = v_mkDocString_x3f_1221_;
goto v___jp_1229_;
}
else
{
lean_object* v_val_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1248_; 
v_val_1240_ = lean_ctor_get(v_docString_x3f_1220_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_docString_x3f_1220_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1242_ = v_docString_x3f_1220_;
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_val_1240_);
lean_dec(v_docString_x3f_1220_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___f_1244_; lean_object* v___x_1246_; 
v___f_1244_ = lean_alloc_closure((void*)(l_Lean_MessageData_withExprHover___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1244_, 0, v_val_1240_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___f_1244_);
v___x_1246_ = v___x_1242_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___f_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
v___y_1230_ = v___x_1246_;
goto v___jp_1229_;
}
}
}
}
else
{
lean_dec(v_docString_x3f_1220_);
v___y_1230_ = v_mkDocString_x3f_1221_;
goto v___jp_1229_;
}
v___jp_1229_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v_r_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1231_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1231_, 0, v___x_1228_);
lean_ctor_set(v___x_1231_, 1, v_location_x3f_1219_);
lean_ctor_set(v___x_1231_, 2, v___y_1230_);
lean_ctor_set_uint8(v___x_1231_, sizeof(void*)*3, v_explicit_1222_);
v___x_1232_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1223_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = lean_box(0);
v___x_1235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v_r_1236_ = lean_box(1);
v___x_1237_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v___x_1235_, v_r_1236_);
lean_dec_ref_known(v___x_1235_, 2);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1224_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
return v___x_1239_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___boxed(lean_object* v_fmt_1249_, lean_object* v_expr_1250_, lean_object* v_lctx_1251_, lean_object* v_location_x3f_1252_, lean_object* v_docString_x3f_1253_, lean_object* v_mkDocString_x3f_1254_, lean_object* v_explicit_1255_){
_start:
{
uint8_t v_explicit_boxed_1256_; lean_object* v_res_1257_; 
v_explicit_boxed_1256_ = lean_unbox(v_explicit_1255_);
v_res_1257_ = l_Lean_MessageData_withExprHover(v_fmt_1249_, v_expr_1250_, v_lctx_1251_, v_location_x3f_1252_, v_docString_x3f_1253_, v_mkDocString_x3f_1254_, v_explicit_boxed_1256_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0(lean_object* v_00_u03b2_1258_, lean_object* v_k_1259_, lean_object* v_v_1260_, lean_object* v_t_1261_, lean_object* v_hl_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_1259_, v_v_1260_, v_t_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(lean_object* v_as_1264_, lean_object* v_as_x27_1265_, lean_object* v_b_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v_as_x27_1265_, v_b_1266_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___boxed(lean_object* v_as_1269_, lean_object* v_as_x27_1270_, lean_object* v_b_1271_, lean_object* v_a_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(v_as_1269_, v_as_x27_1270_, v_b_1271_, v_a_1272_);
lean_dec(v_as_x27_1270_);
lean_dec(v_as_1269_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0(lean_object* v_fmt_1274_, lean_object* v_expr_1275_, lean_object* v_location_x3f_1276_, lean_object* v_docString_x3f_1277_, lean_object* v_mkDocString_x3f_1278_, uint8_t v_explicit_1279_, lean_object* v_toPure_1280_, lean_object* v_lctx_1281_){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = l_Lean_MessageData_withExprHover(v_fmt_1274_, v_expr_1275_, v_lctx_1281_, v_location_x3f_1276_, v_docString_x3f_1277_, v_mkDocString_x3f_1278_, v_explicit_1279_);
v___x_1283_ = lean_apply_2(v_toPure_1280_, lean_box(0), v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed(lean_object* v_fmt_1284_, lean_object* v_expr_1285_, lean_object* v_location_x3f_1286_, lean_object* v_docString_x3f_1287_, lean_object* v_mkDocString_x3f_1288_, lean_object* v_explicit_1289_, lean_object* v_toPure_1290_, lean_object* v_lctx_1291_){
_start:
{
uint8_t v_explicit_boxed_1292_; lean_object* v_res_1293_; 
v_explicit_boxed_1292_ = lean_unbox(v_explicit_1289_);
v_res_1293_ = l_Lean_MessageData_withExprHoverM___redArg___lam__0(v_fmt_1284_, v_expr_1285_, v_location_x3f_1286_, v_docString_x3f_1287_, v_mkDocString_x3f_1288_, v_explicit_boxed_1292_, v_toPure_1290_, v_lctx_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg(lean_object* v_inst_1294_, lean_object* v_inst_1295_, lean_object* v_fmt_1296_, lean_object* v_expr_1297_, lean_object* v_lctx_x3f_1298_, lean_object* v_location_x3f_1299_, lean_object* v_docString_x3f_1300_, lean_object* v_mkDocString_x3f_1301_, uint8_t v_explicit_1302_){
_start:
{
lean_object* v_toApplicative_1303_; lean_object* v_toBind_1304_; lean_object* v_toPure_1305_; lean_object* v___x_1306_; lean_object* v___f_1307_; 
v_toApplicative_1303_ = lean_ctor_get(v_inst_1294_, 0);
lean_inc_ref(v_toApplicative_1303_);
v_toBind_1304_ = lean_ctor_get(v_inst_1294_, 1);
lean_inc(v_toBind_1304_);
lean_dec_ref(v_inst_1294_);
v_toPure_1305_ = lean_ctor_get(v_toApplicative_1303_, 1);
lean_inc_n(v_toPure_1305_, 2);
lean_dec_ref(v_toApplicative_1303_);
v___x_1306_ = lean_box(v_explicit_1302_);
v___f_1307_ = lean_alloc_closure((void*)(l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1307_, 0, v_fmt_1296_);
lean_closure_set(v___f_1307_, 1, v_expr_1297_);
lean_closure_set(v___f_1307_, 2, v_location_x3f_1299_);
lean_closure_set(v___f_1307_, 3, v_docString_x3f_1300_);
lean_closure_set(v___f_1307_, 4, v_mkDocString_x3f_1301_);
lean_closure_set(v___f_1307_, 5, v___x_1306_);
lean_closure_set(v___f_1307_, 6, v_toPure_1305_);
if (lean_obj_tag(v_lctx_x3f_1298_) == 0)
{
lean_object* v___x_1308_; 
lean_dec(v_toPure_1305_);
v___x_1308_ = lean_apply_4(v_toBind_1304_, lean_box(0), lean_box(0), v_inst_1295_, v___f_1307_);
return v___x_1308_;
}
else
{
lean_object* v_val_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec(v_inst_1295_);
v_val_1309_ = lean_ctor_get(v_lctx_x3f_1298_, 0);
lean_inc(v_val_1309_);
lean_dec_ref_known(v_lctx_x3f_1298_, 1);
v___x_1310_ = lean_apply_2(v_toPure_1305_, lean_box(0), v_val_1309_);
v___x_1311_ = lean_apply_4(v_toBind_1304_, lean_box(0), lean_box(0), v___x_1310_, v___f_1307_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___boxed(lean_object* v_inst_1312_, lean_object* v_inst_1313_, lean_object* v_fmt_1314_, lean_object* v_expr_1315_, lean_object* v_lctx_x3f_1316_, lean_object* v_location_x3f_1317_, lean_object* v_docString_x3f_1318_, lean_object* v_mkDocString_x3f_1319_, lean_object* v_explicit_1320_){
_start:
{
uint8_t v_explicit_boxed_1321_; lean_object* v_res_1322_; 
v_explicit_boxed_1321_ = lean_unbox(v_explicit_1320_);
v_res_1322_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1312_, v_inst_1313_, v_fmt_1314_, v_expr_1315_, v_lctx_x3f_1316_, v_location_x3f_1317_, v_docString_x3f_1318_, v_mkDocString_x3f_1319_, v_explicit_boxed_1321_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM(lean_object* v_m_1323_, lean_object* v_inst_1324_, lean_object* v_inst_1325_, lean_object* v_fmt_1326_, lean_object* v_expr_1327_, lean_object* v_lctx_x3f_1328_, lean_object* v_location_x3f_1329_, lean_object* v_docString_x3f_1330_, lean_object* v_mkDocString_x3f_1331_, uint8_t v_explicit_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1324_, v_inst_1325_, v_fmt_1326_, v_expr_1327_, v_lctx_x3f_1328_, v_location_x3f_1329_, v_docString_x3f_1330_, v_mkDocString_x3f_1331_, v_explicit_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___boxed(lean_object* v_m_1334_, lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_fmt_1337_, lean_object* v_expr_1338_, lean_object* v_lctx_x3f_1339_, lean_object* v_location_x3f_1340_, lean_object* v_docString_x3f_1341_, lean_object* v_mkDocString_x3f_1342_, lean_object* v_explicit_1343_){
_start:
{
uint8_t v_explicit_boxed_1344_; lean_object* v_res_1345_; 
v_explicit_boxed_1344_ = lean_unbox(v_explicit_1343_);
v_res_1345_ = l_Lean_MessageData_withExprHoverM(v_m_1334_, v_inst_1335_, v_inst_1336_, v_fmt_1337_, v_expr_1338_, v_lctx_x3f_1339_, v_location_x3f_1340_, v_docString_x3f_1341_, v_mkDocString_x3f_1342_, v_explicit_boxed_1344_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0(lean_object* v_userName_1346_, lean_object* v_display_1347_, lean_object* v_toPure_1348_, lean_object* v_inst_1349_, lean_object* v_inst_1350_, lean_object* v_____do__lift_1351_){
_start:
{
lean_object* v___x_1352_; 
v___x_1352_ = l_Lean_LocalContext_findFromUserName_x3f(v_____do__lift_1351_, v_userName_1346_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
lean_dec(v_inst_1350_);
lean_dec_ref(v_inst_1349_);
v___x_1353_ = l_Lean_MessageData_ofName(v_display_1347_);
v___x_1354_ = lean_apply_2(v_toPure_1348_, lean_box(0), v___x_1353_);
return v___x_1354_;
}
else
{
lean_object* v_val_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1369_; 
lean_dec(v_toPure_1348_);
v_val_1355_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1357_ = v___x_1352_;
v_isShared_1358_ = v_isSharedCheck_1369_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_val_1355_);
lean_dec(v___x_1352_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1369_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
uint8_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1359_ = 1;
v___x_1360_ = l_Lean_Name_toString(v_display_1347_, v___x_1359_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set_tag(v___x_1357_, 3);
lean_ctor_set(v___x_1357_, 0, v___x_1360_);
v___x_1362_ = v___x_1357_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; lean_object* v___x_1367_; 
v___x_1363_ = l_Lean_LocalDecl_fvarId(v_val_1355_);
lean_dec(v_val_1355_);
v___x_1364_ = l_Lean_Expr_fvar___override(v___x_1363_);
v___x_1365_ = lean_box(0);
v___x_1366_ = 0;
v___x_1367_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1349_, v_inst_1350_, v___x_1362_, v___x_1364_, v___x_1365_, v___x_1365_, v___x_1365_, v___x_1365_, v___x_1366_);
return v___x_1367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0___boxed(lean_object* v_userName_1370_, lean_object* v_display_1371_, lean_object* v_toPure_1372_, lean_object* v_inst_1373_, lean_object* v_inst_1374_, lean_object* v_____do__lift_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Lean_MessageData_ofUserName___redArg___lam__0(v_userName_1370_, v_display_1371_, v_toPure_1372_, v_inst_1373_, v_inst_1374_, v_____do__lift_1375_);
lean_dec_ref(v_____do__lift_1375_);
lean_dec(v_userName_1370_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg(lean_object* v_inst_1377_, lean_object* v_inst_1378_, lean_object* v_userName_1379_){
_start:
{
lean_object* v_toApplicative_1380_; lean_object* v_toBind_1381_; lean_object* v_toPure_1382_; lean_object* v_display_1383_; lean_object* v___f_1384_; lean_object* v___x_1385_; 
v_toApplicative_1380_ = lean_ctor_get(v_inst_1377_, 0);
v_toBind_1381_ = lean_ctor_get(v_inst_1377_, 1);
lean_inc(v_toBind_1381_);
v_toPure_1382_ = lean_ctor_get(v_toApplicative_1380_, 1);
lean_inc(v_toPure_1382_);
lean_inc(v_userName_1379_);
v_display_1383_ = l_Lean_Name_simpMacroScopes(v_userName_1379_);
lean_inc(v_inst_1378_);
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofUserName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1384_, 0, v_userName_1379_);
lean_closure_set(v___f_1384_, 1, v_display_1383_);
lean_closure_set(v___f_1384_, 2, v_toPure_1382_);
lean_closure_set(v___f_1384_, 3, v_inst_1377_);
lean_closure_set(v___f_1384_, 4, v_inst_1378_);
v___x_1385_ = lean_apply_4(v_toBind_1381_, lean_box(0), lean_box(0), v_inst_1378_, v___f_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName(lean_object* v_m_1386_, lean_object* v_inst_1387_, lean_object* v_inst_1388_, lean_object* v_userName_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_MessageData_ofUserName___redArg(v_inst_1387_, v_inst_1388_, v_userName_1389_);
return v___x_1390_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0(void){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1391_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0);
v___x_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
return v___x_1393_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1394_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1);
v___x_1395_ = lean_unsigned_to_nat(0u);
v___x_1396_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
lean_ctor_set(v___x_1396_, 2, v___x_1395_);
lean_ctor_set(v___x_1396_, 3, v___x_1395_);
lean_ctor_set(v___x_1396_, 4, v___x_1394_);
lean_ctor_set(v___x_1396_, 5, v___x_1394_);
lean_ctor_set(v___x_1396_, 6, v___x_1394_);
lean_ctor_set(v___x_1396_, 7, v___x_1394_);
lean_ctor_set(v___x_1396_, 8, v___x_1394_);
lean_ctor_set(v___x_1396_, 9, v___x_1394_);
lean_ctor_set(v___x_1396_, 10, v___x_1394_);
return v___x_1396_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(lean_object* v_mctx_x3f_1397_, lean_object* v_a_1398_){
_start:
{
switch(lean_obj_tag(v_a_1398_))
{
case 10:
{
if (lean_obj_tag(v_mctx_x3f_1397_) == 0)
{
lean_object* v_hasSyntheticSorry_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v_hasSyntheticSorry_1399_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_hasSyntheticSorry_1399_);
lean_dec_ref_known(v_a_1398_, 2);
v___x_1400_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_1401_ = lean_apply_1(v_hasSyntheticSorry_1399_, v___x_1400_);
v___x_1402_ = lean_unbox(v___x_1401_);
return v___x_1402_;
}
else
{
lean_object* v_hasSyntheticSorry_1403_; lean_object* v_val_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v_hasSyntheticSorry_1403_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_hasSyntheticSorry_1403_);
lean_dec_ref_known(v_a_1398_, 2);
v_val_1404_ = lean_ctor_get(v_mctx_x3f_1397_, 0);
lean_inc(v_val_1404_);
lean_dec_ref_known(v_mctx_x3f_1397_, 1);
v___x_1405_ = lean_apply_1(v_hasSyntheticSorry_1403_, v_val_1404_);
v___x_1406_ = lean_unbox(v___x_1405_);
return v___x_1406_;
}
}
case 3:
{
lean_object* v_a_1407_; lean_object* v_a_1408_; lean_object* v_mctx_1409_; lean_object* v___x_1410_; 
lean_dec(v_mctx_x3f_1397_);
v_a_1407_ = lean_ctor_get(v_a_1398_, 0);
lean_inc_ref(v_a_1407_);
v_a_1408_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_a_1408_);
lean_dec_ref_known(v_a_1398_, 2);
v_mctx_1409_ = lean_ctor_get(v_a_1407_, 1);
lean_inc_ref(v_mctx_1409_);
lean_dec_ref(v_a_1407_);
v___x_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1410_, 0, v_mctx_1409_);
v_mctx_x3f_1397_ = v___x_1410_;
v_a_1398_ = v_a_1408_;
goto _start;
}
case 4:
{
lean_object* v_a_1412_; 
v_a_1412_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_a_1412_);
lean_dec_ref_known(v_a_1398_, 2);
v_a_1398_ = v_a_1412_;
goto _start;
}
case 5:
{
lean_object* v_a_1414_; 
v_a_1414_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_a_1414_);
lean_dec_ref_known(v_a_1398_, 2);
v_a_1398_ = v_a_1414_;
goto _start;
}
case 6:
{
lean_object* v_a_1416_; 
v_a_1416_ = lean_ctor_get(v_a_1398_, 0);
lean_inc_ref(v_a_1416_);
lean_dec_ref_known(v_a_1398_, 1);
v_a_1398_ = v_a_1416_;
goto _start;
}
case 7:
{
lean_object* v_a_1418_; lean_object* v_a_1419_; uint8_t v___x_1420_; 
v_a_1418_ = lean_ctor_get(v_a_1398_, 0);
lean_inc_ref(v_a_1418_);
v_a_1419_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_a_1419_);
lean_dec_ref_known(v_a_1398_, 2);
lean_inc(v_mctx_x3f_1397_);
v___x_1420_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1397_, v_a_1418_);
if (v___x_1420_ == 0)
{
v_a_1398_ = v_a_1419_;
goto _start;
}
else
{
lean_dec_ref(v_a_1419_);
lean_dec(v_mctx_x3f_1397_);
return v___x_1420_;
}
}
case 8:
{
lean_object* v_a_1422_; 
v_a_1422_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_a_1422_);
lean_dec_ref_known(v_a_1398_, 2);
v_a_1398_ = v_a_1422_;
goto _start;
}
case 11:
{
lean_object* v_a_1424_; 
v_a_1424_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_a_1424_);
lean_dec_ref_known(v_a_1398_, 2);
v_a_1398_ = v_a_1424_;
goto _start;
}
case 9:
{
lean_object* v_msg_1426_; lean_object* v_children_1427_; uint8_t v___x_1428_; 
v_msg_1426_ = lean_ctor_get(v_a_1398_, 1);
lean_inc_ref(v_msg_1426_);
v_children_1427_ = lean_ctor_get(v_a_1398_, 2);
lean_inc_ref(v_children_1427_);
lean_dec_ref_known(v_a_1398_, 3);
lean_inc(v_mctx_x3f_1397_);
v___x_1428_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1397_, v_msg_1426_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = lean_unsigned_to_nat(0u);
v___x_1430_ = lean_array_get_size(v_children_1427_);
v___x_1431_ = lean_nat_dec_lt(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_dec_ref(v_children_1427_);
lean_dec(v_mctx_x3f_1397_);
return v___x_1431_;
}
else
{
if (v___x_1431_ == 0)
{
lean_dec_ref(v_children_1427_);
lean_dec(v_mctx_x3f_1397_);
return v___x_1431_;
}
else
{
size_t v___x_1432_; size_t v___x_1433_; uint8_t v___x_1434_; 
v___x_1432_ = ((size_t)0ULL);
v___x_1433_ = lean_usize_of_nat(v___x_1430_);
v___x_1434_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(v_mctx_x3f_1397_, v_children_1427_, v___x_1432_, v___x_1433_);
lean_dec_ref(v_children_1427_);
return v___x_1434_;
}
}
}
else
{
lean_dec_ref(v_children_1427_);
lean_dec(v_mctx_x3f_1397_);
return v___x_1428_;
}
}
default: 
{
uint8_t v___x_1435_; 
lean_dec_ref(v_a_1398_);
lean_dec(v_mctx_x3f_1397_);
v___x_1435_ = 0;
return v___x_1435_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(lean_object* v_mctx_x3f_1436_, lean_object* v_as_1437_, size_t v_i_1438_, size_t v_stop_1439_){
_start:
{
uint8_t v___x_1440_; 
v___x_1440_ = lean_usize_dec_eq(v_i_1438_, v_stop_1439_);
if (v___x_1440_ == 0)
{
lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1441_ = lean_array_uget_borrowed(v_as_1437_, v_i_1438_);
lean_inc(v___x_1441_);
lean_inc(v_mctx_x3f_1436_);
v___x_1442_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1436_, v___x_1441_);
if (v___x_1442_ == 0)
{
size_t v___x_1443_; size_t v___x_1444_; 
v___x_1443_ = ((size_t)1ULL);
v___x_1444_ = lean_usize_add(v_i_1438_, v___x_1443_);
v_i_1438_ = v___x_1444_;
goto _start;
}
else
{
lean_dec(v_mctx_x3f_1436_);
return v___x_1442_;
}
}
else
{
uint8_t v___x_1446_; 
lean_dec(v_mctx_x3f_1436_);
v___x_1446_ = 0;
return v___x_1446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0___boxed(lean_object* v_mctx_x3f_1447_, lean_object* v_as_1448_, lean_object* v_i_1449_, lean_object* v_stop_1450_){
_start:
{
size_t v_i_boxed_1451_; size_t v_stop_boxed_1452_; uint8_t v_res_1453_; lean_object* v_r_1454_; 
v_i_boxed_1451_ = lean_unbox_usize(v_i_1449_);
lean_dec(v_i_1449_);
v_stop_boxed_1452_ = lean_unbox_usize(v_stop_1450_);
lean_dec(v_stop_1450_);
v_res_1453_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(v_mctx_x3f_1447_, v_as_1448_, v_i_boxed_1451_, v_stop_boxed_1452_);
lean_dec_ref(v_as_1448_);
v_r_1454_ = lean_box(v_res_1453_);
return v_r_1454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___boxed(lean_object* v_mctx_x3f_1455_, lean_object* v_a_1456_){
_start:
{
uint8_t v_res_1457_; lean_object* v_r_1458_; 
v_res_1457_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1455_, v_a_1456_);
v_r_1458_ = lean_box(v_res_1457_);
return v_r_1458_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object* v_msg_1459_){
_start:
{
lean_object* v___x_1460_; uint8_t v___x_1461_; 
v___x_1460_ = lean_box(0);
v___x_1461_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v___x_1460_, v_msg_1459_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hasSyntheticSorry___boxed(lean_object* v_msg_1462_){
_start:
{
uint8_t v_res_1463_; lean_object* v_r_1464_; 
v_res_1463_ = l_Lean_MessageData_hasSyntheticSorry(v_msg_1462_);
v_r_1464_ = lean_box(v_res_1463_);
return v_r_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(lean_object* v_name_1465_, lean_object* v_decl_1466_, lean_object* v_ref_1467_){
_start:
{
lean_object* v_defValue_1469_; lean_object* v_descr_1470_; lean_object* v_deprecation_x3f_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v_defValue_1469_ = lean_ctor_get(v_decl_1466_, 0);
v_descr_1470_ = lean_ctor_get(v_decl_1466_, 1);
v_deprecation_x3f_1471_ = lean_ctor_get(v_decl_1466_, 2);
lean_inc(v_defValue_1469_);
v___x_1472_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_defValue_1469_);
lean_inc(v_deprecation_x3f_1471_);
lean_inc_ref(v_descr_1470_);
lean_inc_n(v_name_1465_, 2);
v___x_1473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1473_, 0, v_name_1465_);
lean_ctor_set(v___x_1473_, 1, v_ref_1467_);
lean_ctor_set(v___x_1473_, 2, v___x_1472_);
lean_ctor_set(v___x_1473_, 3, v_descr_1470_);
lean_ctor_set(v___x_1473_, 4, v_deprecation_x3f_1471_);
v___x_1474_ = lean_register_option(v_name_1465_, v___x_1473_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1482_; 
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1482_ == 0)
{
lean_object* v_unused_1483_; 
v_unused_1483_ = lean_ctor_get(v___x_1474_, 0);
lean_dec(v_unused_1483_);
v___x_1476_ = v___x_1474_;
v_isShared_1477_ = v_isSharedCheck_1482_;
goto v_resetjp_1475_;
}
else
{
lean_dec(v___x_1474_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1482_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1480_; 
lean_inc(v_defValue_1469_);
v___x_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1478_, 0, v_name_1465_);
lean_ctor_set(v___x_1478_, 1, v_defValue_1469_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1478_);
v___x_1480_ = v___x_1476_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1478_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
else
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
lean_dec(v_name_1465_);
v_a_1484_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v___x_1474_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1474_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1492_, lean_object* v_decl_1493_, lean_object* v_ref_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(v_name_1492_, v_decl_1493_, v_ref_1494_);
lean_dec_ref(v_decl_1493_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1510_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_));
v___x_1511_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_));
v___x_1512_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_));
v___x_1513_ = l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(v___x_1510_, v___x_1511_, v___x_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4____boxed(lean_object* v_a_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_();
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_MessageData_formatAux_spec__0(lean_object* v_a_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_nat_to_int(v_a_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = l_instMonadBaseIO;
v___x_1520_ = l_instInhabitedOfMonad___redArg(v___x_1519_, v___x_1518_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3(lean_object* v_msg_1521_){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1816__overap_1524_; lean_object* v___x_1525_; 
v___x_1523_ = lean_obj_once(&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0, &l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0_once, _init_l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0);
v___x_1816__overap_1524_ = lean_panic_fn_borrowed(v___x_1523_, v_msg_1521_);
v___x_1525_ = lean_apply_1(v___x_1816__overap_1524_, lean_box(0));
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___boxed(lean_object* v_msg_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_panic___at___00Lean_MessageData_formatAux_spec__3(v_msg_1526_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(lean_object* v_x_1529_, lean_object* v_x_1530_, lean_object* v_x_1531_){
_start:
{
if (lean_obj_tag(v_x_1531_) == 0)
{
lean_dec(v_x_1529_);
return v_x_1530_;
}
else
{
lean_object* v_head_1532_; lean_object* v_tail_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1542_; 
v_head_1532_ = lean_ctor_get(v_x_1531_, 0);
v_tail_1533_ = lean_ctor_get(v_x_1531_, 1);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_x_1531_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1535_ = v_x_1531_;
v_isShared_1536_ = v_isSharedCheck_1542_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_tail_1533_);
lean_inc(v_head_1532_);
lean_dec(v_x_1531_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1542_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
lean_inc(v_x_1529_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set_tag(v___x_1535_, 5);
lean_ctor_set(v___x_1535_, 1, v_x_1529_);
lean_ctor_set(v___x_1535_, 0, v_x_1530_);
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_x_1530_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v_x_1529_);
v___x_1538_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v_head_1532_);
v_x_1530_ = v___x_1539_;
v_x_1531_ = v_tail_1533_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(lean_object* v_x_1543_, lean_object* v_x_1544_){
_start:
{
if (lean_obj_tag(v_x_1543_) == 0)
{
lean_object* v___x_1545_; 
lean_dec(v_x_1544_);
v___x_1545_ = lean_box(0);
return v___x_1545_;
}
else
{
lean_object* v_tail_1546_; 
v_tail_1546_ = lean_ctor_get(v_x_1543_, 1);
if (lean_obj_tag(v_tail_1546_) == 0)
{
lean_object* v_head_1547_; 
lean_dec(v_x_1544_);
v_head_1547_ = lean_ctor_get(v_x_1543_, 0);
lean_inc(v_head_1547_);
lean_dec_ref_known(v_x_1543_, 2);
return v_head_1547_;
}
else
{
lean_object* v_head_1548_; lean_object* v___x_1549_; 
lean_inc(v_tail_1546_);
v_head_1548_ = lean_ctor_get(v_x_1543_, 0);
lean_inc(v_head_1548_);
lean_dec_ref_known(v_x_1543_, 2);
v___x_1549_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(v_x_1544_, v_head_1548_, v_tail_1546_);
return v___x_1549_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed(lean_object* v_x_1552_, lean_object* v_x_1553_, lean_object* v_sz_1554_, lean_object* v_i_1555_, lean_object* v_bs_1556_, lean_object* v___y_1557_){
_start:
{
size_t v_sz_boxed_1558_; size_t v_i_boxed_1559_; lean_object* v_res_1560_; 
v_sz_boxed_1558_ = lean_unbox_usize(v_sz_1554_);
lean_dec(v_sz_1554_);
v_i_boxed_1559_ = lean_unbox_usize(v_i_1555_);
lean_dec(v_i_1555_);
v_res_1560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(v_x_1552_, v_x_1553_, v_sz_boxed_1558_, v_i_boxed_1559_, v_bs_1556_);
return v_res_1560_;
}
}
static double _init_l_Lean_MessageData_formatAux___closed__9(void){
_start:
{
lean_object* v___x_1575_; double v___x_1576_; 
v___x_1575_ = lean_unsigned_to_nat(0u);
v___x_1576_ = lean_float_of_nat(v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux(lean_object* v_x_1580_, lean_object* v_x_1581_, lean_object* v_x_1582_){
_start:
{
switch(lean_obj_tag(v_x_1582_))
{
case 0:
{
lean_object* v_a_1584_; lean_object* v_fmt_1585_; 
lean_dec(v_x_1581_);
lean_dec_ref(v_x_1580_);
v_a_1584_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1584_);
lean_dec_ref_known(v_x_1582_, 1);
v_fmt_1585_ = lean_ctor_get(v_a_1584_, 0);
lean_inc(v_fmt_1585_);
lean_dec_ref(v_a_1584_);
return v_fmt_1585_;
}
case 1:
{
if (lean_obj_tag(v_x_1581_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; 
lean_dec_ref(v_x_1580_);
v_a_1586_ = lean_ctor_get(v_x_1582_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v_x_1582_, 1);
v___x_1587_ = l_Lean_formatRawGoal(v_a_1586_);
return v___x_1587_;
}
else
{
lean_object* v_a_1588_; lean_object* v_val_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v_a_1588_ = lean_ctor_get(v_x_1582_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v_x_1582_, 1);
v_val_1589_ = lean_ctor_get(v_x_1581_, 0);
lean_inc(v_val_1589_);
lean_dec_ref_known(v_x_1581_, 1);
v___x_1590_ = l_Lean_MessageData_mkPPContext(v_x_1580_, v_val_1589_);
lean_dec(v_val_1589_);
lean_dec_ref(v_x_1580_);
v___x_1591_ = l_Lean_ppGoal(v___x_1590_, v_a_1588_);
return v___x_1591_;
}
}
case 3:
{
lean_object* v_a_1592_; lean_object* v_a_1593_; lean_object* v___x_1594_; 
lean_dec(v_x_1581_);
v_a_1592_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1592_);
v_a_1593_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_a_1593_);
lean_dec_ref_known(v_x_1582_, 2);
v___x_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1594_, 0, v_a_1592_);
v_x_1581_ = v___x_1594_;
v_x_1582_ = v_a_1593_;
goto _start;
}
case 4:
{
lean_object* v_a_1596_; lean_object* v_a_1597_; 
lean_dec_ref(v_x_1580_);
v_a_1596_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1596_);
v_a_1597_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_a_1597_);
lean_dec_ref_known(v_x_1582_, 2);
v_x_1580_ = v_a_1596_;
v_x_1582_ = v_a_1597_;
goto _start;
}
case 5:
{
lean_object* v_a_1599_; lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1609_; 
v_a_1599_ = lean_ctor_get(v_x_1582_, 0);
v_a_1600_ = lean_ctor_get(v_x_1582_, 1);
v_isSharedCheck_1609_ = !lean_is_exclusive(v_x_1582_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1602_ = v_x_1582_;
v_isShared_1603_ = v_isSharedCheck_1609_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_inc(v_a_1599_);
lean_dec(v_x_1582_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1609_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1604_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1600_);
v___x_1605_ = lean_nat_to_int(v_a_1599_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set_tag(v___x_1602_, 4);
lean_ctor_set(v___x_1602_, 1, v___x_1604_);
lean_ctor_set(v___x_1602_, 0, v___x_1605_);
v___x_1607_ = v___x_1602_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v___x_1604_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
case 6:
{
lean_object* v_a_1610_; lean_object* v___x_1611_; uint8_t v___x_1612_; lean_object* v___x_1613_; 
v_a_1610_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1610_);
lean_dec_ref_known(v_x_1582_, 1);
v___x_1611_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1610_);
v___x_1612_ = 0;
v___x_1613_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1613_, 0, v___x_1611_);
lean_ctor_set_uint8(v___x_1613_, sizeof(void*)*1, v___x_1612_);
return v___x_1613_;
}
case 7:
{
lean_object* v_a_1614_; lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1624_; 
v_a_1614_ = lean_ctor_get(v_x_1582_, 0);
v_a_1615_ = lean_ctor_get(v_x_1582_, 1);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_x_1582_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1617_ = v_x_1582_;
v_isShared_1618_ = v_isSharedCheck_1624_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_inc(v_a_1614_);
lean_dec(v_x_1582_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1624_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
lean_inc(v_x_1581_);
lean_inc_ref(v_x_1580_);
v___x_1619_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1614_);
v___x_1620_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1615_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set_tag(v___x_1617_, 5);
lean_ctor_set(v___x_1617_, 1, v___x_1620_);
lean_ctor_set(v___x_1617_, 0, v___x_1619_);
v___x_1622_ = v___x_1617_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1619_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
case 9:
{
lean_object* v_data_1625_; lean_object* v_msg_1626_; lean_object* v_children_1627_; size_t v_sz_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1843__overap_1633_; lean_object* v___x_1634_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v_cls_1648_; lean_object* v_result_x3f_1649_; double v_startTime_1650_; double v_stopTime_1651_; lean_object* v_msg_1653_; uint8_t v___x_1668_; 
v_data_1625_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_data_1625_);
v_msg_1626_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_msg_1626_);
v_children_1627_ = lean_ctor_get(v_x_1582_, 2);
lean_inc_ref(v_children_1627_);
lean_dec_ref_known(v_x_1582_, 3);
v_sz_1628_ = lean_array_size(v_children_1627_);
v___x_1629_ = l_unsafeCast___redArg(v_children_1627_);
lean_dec_ref(v_children_1627_);
v___x_1630_ = lean_box_usize(v_sz_1628_);
v___x_1631_ = ((lean_object*)(l_Lean_MessageData_formatAux___boxed__const__1));
lean_inc(v_x_1581_);
lean_inc_ref(v_x_1580_);
v___x_1632_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed), 6, 5);
lean_closure_set(v___x_1632_, 0, v_x_1580_);
lean_closure_set(v___x_1632_, 1, v_x_1581_);
lean_closure_set(v___x_1632_, 2, v___x_1630_);
lean_closure_set(v___x_1632_, 3, v___x_1631_);
lean_closure_set(v___x_1632_, 4, v___x_1629_);
v___x_1843__overap_1633_ = l_unsafeCast___redArg(v___x_1632_);
lean_dec_ref(v___x_1632_);
v___x_1634_ = lean_apply_1(v___x_1843__overap_1633_, lean_box(0));
v_cls_1648_ = lean_ctor_get(v_data_1625_, 0);
lean_inc(v_cls_1648_);
v_result_x3f_1649_ = lean_ctor_get(v_data_1625_, 1);
lean_inc(v_result_x3f_1649_);
v_startTime_1650_ = lean_ctor_get_float(v_data_1625_, sizeof(void*)*3);
v_stopTime_1651_ = lean_ctor_get_float(v_data_1625_, sizeof(void*)*3 + 8);
lean_dec_ref(v_data_1625_);
v___x_1668_ = l_Lean_Name_isAnonymous(v_cls_1648_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; uint8_t v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; double v___x_1684_; uint8_t v___x_1685_; 
v___x_1669_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__4));
v___x_1670_ = 1;
v___x_1671_ = l_Lean_Name_toString(v_cls_1648_, v___x_1670_);
v___x_1672_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1669_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__6));
v___x_1675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1673_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v___x_1684_ = lean_float_once(&l_Lean_MessageData_formatAux___closed__9, &l_Lean_MessageData_formatAux___closed__9_once, _init_l_Lean_MessageData_formatAux___closed__9);
v___x_1685_ = lean_float_beq(v_startTime_1650_, v___x_1684_);
if (v___x_1685_ == 0)
{
goto v___jp_1676_;
}
else
{
if (v___x_1668_ == 0)
{
v_msg_1653_ = v___x_1675_;
goto v___jp_1652_;
}
else
{
goto v___jp_1676_;
}
}
v___jp_1676_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; double v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1677_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__8));
v___x_1678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1675_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = lean_float_sub(v_stopTime_1651_, v_startTime_1650_);
v___x_1680_ = lean_float_to_string(v___x_1679_);
v___x_1681_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
v___x_1682_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1678_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
lean_ctor_set(v___x_1683_, 1, v___x_1674_);
v_msg_1653_ = v___x_1683_;
goto v___jp_1652_;
}
}
else
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_dec(v_result_x3f_1649_);
lean_dec(v_cls_1648_);
lean_dec_ref(v_msg_1626_);
lean_dec(v_x_1581_);
lean_dec_ref(v_x_1580_);
v___x_1686_ = lean_array_to_list(v___x_1634_);
v___x_1687_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_1688_ = l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(v___x_1686_, v___x_1687_);
return v___x_1688_;
}
v___jp_1635_:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1638_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__0));
v___x_1639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___y_1636_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___x_1641_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
lean_ctor_set(v___x_1641_, 1, v___y_1637_);
v___x_1642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1639_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = lean_array_to_list(v___x_1634_);
v___x_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_1646_ = l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(v___x_1644_, v___x_1645_);
v___x_1647_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1640_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
return v___x_1647_;
}
v___jp_1652_:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_msg_1626_);
if (lean_obj_tag(v_result_x3f_1649_) == 0)
{
v___y_1636_ = v_msg_1653_;
v___y_1637_ = v___x_1654_;
goto v___jp_1635_;
}
else
{
lean_object* v_val_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1667_; 
v_val_1655_ = lean_ctor_get(v_result_x3f_1649_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_result_x3f_1649_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1657_ = v_result_x3f_1649_;
v_isShared_1658_ = v_isSharedCheck_1667_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_val_1655_);
lean_dec(v_result_x3f_1649_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1667_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
uint8_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1659_ = lean_unbox(v_val_1655_);
lean_dec(v_val_1655_);
v___x_1660_ = l_Lean_TraceResult_toEmoji(v___x_1659_);
if (v_isShared_1658_ == 0)
{
lean_ctor_set_tag(v___x_1657_, 3);
lean_ctor_set(v___x_1657_, 0, v___x_1660_);
v___x_1662_ = v___x_1657_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1663_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__0));
v___x_1664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1662_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
v___x_1665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
lean_ctor_set(v___x_1665_, 1, v___x_1654_);
v___y_1636_ = v_msg_1653_;
v___y_1637_ = v___x_1665_;
goto v___jp_1635_;
}
}
}
}
}
case 10:
{
lean_object* v_f_1689_; lean_object* v___x_1690_; lean_object* v___y_1692_; 
v_f_1689_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_f_1689_);
lean_dec_ref_known(v_x_1582_, 2);
v___x_1690_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
if (lean_obj_tag(v_x_1581_) == 0)
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_box(0);
v___y_1692_ = v___x_1708_;
goto v___jp_1691_;
}
else
{
lean_object* v_val_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_val_1709_ = lean_ctor_get(v_x_1581_, 0);
v___x_1710_ = l_Lean_MessageData_mkPPContext(v_x_1580_, v_val_1709_);
v___x_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
v___y_1692_ = v___x_1711_;
goto v___jp_1691_;
}
v___jp_1691_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = lean_apply_2(v_f_1689_, v___y_1692_, lean_box(0));
v___x_1694_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v___x_1693_, v___x_1690_);
if (lean_obj_tag(v___x_1694_) == 1)
{
lean_object* v_val_1695_; 
lean_dec(v___x_1693_);
v_val_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v___x_1694_, 1);
v_x_1582_ = v_val_1695_;
goto _start;
}
else
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_dec(v___x_1694_);
lean_dec(v_x_1581_);
lean_dec_ref(v_x_1580_);
v___x_1697_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__10));
v___x_1698_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__11));
v___x_1699_ = lean_unsigned_to_nat(409u);
v___x_1700_ = lean_unsigned_to_nat(8u);
v___x_1701_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__12));
v___x_1702_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v___x_1693_);
lean_dec(v___x_1693_);
v___x_1703_ = 1;
v___x_1704_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1702_, v___x_1703_);
v___x_1705_ = lean_string_append(v___x_1701_, v___x_1704_);
lean_dec_ref(v___x_1704_);
v___x_1706_ = l_mkPanicMessageWithDecl(v___x_1697_, v___x_1698_, v___x_1699_, v___x_1700_, v___x_1705_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = l_panic___at___00Lean_MessageData_formatAux_spec__3(v___x_1706_);
return v___x_1707_;
}
}
}
default: 
{
lean_object* v_a_1712_; 
v_a_1712_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_a_1712_);
lean_dec_ref(v_x_1582_);
v_x_1582_ = v_a_1712_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(lean_object* v_x_1714_, lean_object* v_x_1715_, size_t v_sz_1716_, size_t v_i_1717_, lean_object* v_bs_1718_){
_start:
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_usize_dec_lt(v_i_1717_, v_sz_1716_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_x_1715_);
lean_dec_ref(v_x_1714_);
v___x_1721_ = l_unsafeCast___redArg(v_bs_1718_);
lean_dec_ref(v_bs_1718_);
return v___x_1721_;
}
else
{
lean_object* v_v_1722_; lean_object* v___x_1723_; lean_object* v_bs_x27_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; size_t v___x_1727_; size_t v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v_v_1722_ = lean_array_uget(v_bs_1718_, v_i_1717_);
v___x_1723_ = lean_unsigned_to_nat(0u);
v_bs_x27_1724_ = lean_array_uset(v_bs_1718_, v_i_1717_, v___x_1723_);
v___x_1725_ = l_unsafeCast___redArg(v_v_1722_);
lean_dec(v_v_1722_);
lean_inc(v_x_1715_);
lean_inc_ref(v_x_1714_);
v___x_1726_ = l_Lean_MessageData_formatAux(v_x_1714_, v_x_1715_, v___x_1725_);
v___x_1727_ = ((size_t)1ULL);
v___x_1728_ = lean_usize_add(v_i_1717_, v___x_1727_);
v___x_1729_ = l_unsafeCast___redArg(v___x_1726_);
lean_dec(v___x_1726_);
v___x_1730_ = lean_array_uset(v_bs_x27_1724_, v_i_1717_, v___x_1729_);
v_i_1717_ = v___x_1728_;
v_bs_1718_ = v___x_1730_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux___boxed(lean_object* v_x_1732_, lean_object* v_x_1733_, lean_object* v_x_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Lean_MessageData_formatAux(v_x_1732_, v_x_1733_, v_x_1734_);
return v_res_1736_;
}
}
static lean_object* _init_l_Lean_MessageData_format___closed__0(void){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_box(0);
v___x_1738_ = lean_obj_once(&l_Lean_MessageData_kind___closed__0, &l_Lean_MessageData_kind___closed__0_once, _init_l_Lean_MessageData_kind___closed__0);
v___x_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
lean_ctor_set(v___x_1739_, 1, v___x_1737_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_format(lean_object* v_msgData_1740_, lean_object* v_ctx_x3f_1741_){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_obj_once(&l_Lean_MessageData_format___closed__0, &l_Lean_MessageData_format___closed__0_once, _init_l_Lean_MessageData_format___closed__0);
v___x_1744_ = l_Lean_MessageData_formatAux(v___x_1743_, v_ctx_x3f_1741_, v_msgData_1740_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_format___boxed(lean_object* v_msgData_1745_, lean_object* v_ctx_x3f_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l_Lean_MessageData_format(v_msgData_1745_, v_ctx_x3f_1746_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_toString(lean_object* v_msgData_1749_){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1751_ = lean_box(0);
v___x_1752_ = l_Lean_MessageData_format(v_msgData_1749_, v___x_1751_);
v___x_1753_ = l_Std_Format_defWidth;
v___x_1754_ = lean_unsigned_to_nat(0u);
v___x_1755_ = l_Std_Format_pretty(v___x_1752_, v___x_1753_, v___x_1754_, v___x_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_toString___boxed(lean_object* v_msgData_1756_, lean_object* v_a_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lean_MessageData_toString(v_msgData_1756_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instAppend___lam__0(lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1761_, 0, v_a_1759_);
lean_ctor_set(v___x_1761_, 1, v_a_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeString___lam__0(lean_object* v_s_1764_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1765_, 0, v_s_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeMVarId___lam__0(lean_object* v_a_1781_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1782_, 0, v_a_1781_);
return v___x_1782_;
}
}
static lean_object* _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = ((lean_object*)(l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1));
v___x_1789_ = l_Lean_MessageData_ofFormat(v___x_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0(lean_object* v_o_1790_){
_start:
{
if (lean_obj_tag(v_o_1790_) == 0)
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_obj_once(&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2);
return v___x_1791_;
}
else
{
lean_object* v_val_1792_; lean_object* v___x_1793_; 
v_val_1792_ = lean_ctor_get(v_o_1790_, 0);
lean_inc(v_val_1792_);
lean_dec_ref_known(v_o_1790_, 1);
v___x_1793_ = l_Lean_MessageData_ofExpr(v_val_1792_);
return v___x_1793_;
}
}
}
static lean_object* _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__6));
v___x_1797_ = l_Lean_MessageData_ofFormat(v___x_1796_);
return v___x_1797_;
}
}
static lean_object* _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = ((lean_object*)(l_Lean_MessageData_arrayExpr_toMessageData___closed__2));
v___x_1802_ = l_Lean_MessageData_ofFormat(v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object* v_es_1803_, lean_object* v_i_1804_, lean_object* v_acc_1805_){
_start:
{
lean_object* v___y_1807_; lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = lean_array_get_size(v_es_1803_);
v___x_1812_ = lean_nat_dec_lt(v_i_1804_, v___x_1811_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_dec(v_i_1804_);
v___x_1813_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__0, &l_Lean_MessageData_arrayExpr_toMessageData___closed__0_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__0);
v___x_1814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1814_, 0, v_acc_1805_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
return v___x_1814_;
}
else
{
lean_object* v_e_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; 
v_e_1815_ = lean_array_fget_borrowed(v_es_1803_, v_i_1804_);
v___x_1816_ = lean_unsigned_to_nat(0u);
v___x_1817_ = lean_nat_dec_eq(v_i_1804_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1818_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_1819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1819_, 0, v_acc_1805_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
lean_inc(v_e_1815_);
v___x_1820_ = l_Lean_MessageData_ofExpr(v_e_1815_);
v___x_1821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1819_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
v___y_1807_ = v___x_1821_;
goto v___jp_1806_;
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
lean_inc(v_e_1815_);
v___x_1822_ = l_Lean_MessageData_ofExpr(v_e_1815_);
v___x_1823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1823_, 0, v_acc_1805_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v___y_1807_ = v___x_1823_;
goto v___jp_1806_;
}
}
v___jp_1806_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_unsigned_to_nat(1u);
v___x_1809_ = lean_nat_add(v_i_1804_, v___x_1808_);
lean_dec(v_i_1804_);
v_i_1804_ = v___x_1809_;
v_acc_1805_ = v___y_1807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData___boxed(lean_object* v_es_1824_, lean_object* v_i_1825_, lean_object* v_acc_1826_){
_start:
{
lean_object* v_res_1827_; 
v_res_1827_ = l_Lean_MessageData_arrayExpr_toMessageData(v_es_1824_, v_i_1825_, v_acc_1826_);
lean_dec_ref(v_es_1824_);
return v_res_1827_;
}
}
static lean_object* _init_l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = ((lean_object*)(l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1));
v___x_1832_ = l_Lean_MessageData_ofFormat(v___x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0(lean_object* v_es_1833_){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1834_ = lean_unsigned_to_nat(0u);
v___x_1835_ = lean_obj_once(&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2);
v___x_1836_ = l_Lean_MessageData_arrayExpr_toMessageData(v_es_1833_, v___x_1834_, v___x_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed(lean_object* v_es_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lean_MessageData_instCoeArrayExpr___lam__0(v_es_1837_);
lean_dec_ref(v_es_1837_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_bracket(lean_object* v_l_1841_, lean_object* v_f_1842_, lean_object* v_r_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1844_ = lean_string_length(v_l_1841_);
v___x_1845_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1845_, 0, v_l_1841_);
v___x_1846_ = l_Lean_MessageData_ofFormat(v___x_1845_);
v___x_1847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
lean_ctor_set(v___x_1847_, 1, v_f_1842_);
v___x_1848_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1848_, 0, v_r_1843_);
v___x_1849_ = l_Lean_MessageData_ofFormat(v___x_1848_);
v___x_1850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1847_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1844_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_paren(lean_object* v_f_1853_){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1854_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__3));
v___x_1855_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__4));
v___x_1856_ = l_Lean_MessageData_bracket(v___x_1854_, v_f_1853_, v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_sbracket(lean_object* v_f_1857_){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1858_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__3));
v___x_1859_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__5));
v___x_1860_ = l_Lean_MessageData_bracket(v___x_1858_, v_f_1857_, v___x_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_joinSep(lean_object* v_x_1861_, lean_object* v_x_1862_){
_start:
{
if (lean_obj_tag(v_x_1861_) == 0)
{
lean_object* v___x_1863_; 
lean_dec_ref(v_x_1862_);
v___x_1863_ = lean_obj_once(&l_Lean_MessageData_nil___closed__0, &l_Lean_MessageData_nil___closed__0_once, _init_l_Lean_MessageData_nil___closed__0);
return v___x_1863_;
}
else
{
lean_object* v_tail_1864_; 
v_tail_1864_ = lean_ctor_get(v_x_1861_, 1);
if (lean_obj_tag(v_tail_1864_) == 0)
{
lean_object* v_head_1865_; 
lean_dec_ref(v_x_1862_);
v_head_1865_ = lean_ctor_get(v_x_1861_, 0);
lean_inc(v_head_1865_);
lean_dec_ref_known(v_x_1861_, 2);
return v_head_1865_;
}
else
{
lean_object* v_head_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1875_; 
lean_inc(v_tail_1864_);
v_head_1866_ = lean_ctor_get(v_x_1861_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_x_1861_);
if (v_isSharedCheck_1875_ == 0)
{
lean_object* v_unused_1876_; 
v_unused_1876_ = lean_ctor_get(v_x_1861_, 1);
lean_dec(v_unused_1876_);
v___x_1868_ = v_x_1861_;
v_isShared_1869_ = v_isSharedCheck_1875_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_head_1866_);
lean_dec(v_x_1861_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1875_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
lean_inc_ref(v_x_1862_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set_tag(v___x_1868_, 7);
lean_ctor_set(v___x_1868_, 1, v_x_1862_);
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_head_1866_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_x_1862_);
v___x_1871_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = l_Lean_MessageData_joinSep(v_tail_1864_, v_x_1862_);
v___x_1873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1871_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
return v___x_1873_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__2(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = ((lean_object*)(l_Lean_MessageData_ofList___closed__1));
v___x_1881_ = l_Lean_MessageData_ofFormat(v___x_1880_);
return v___x_1881_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__5(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = ((lean_object*)(l_Lean_MessageData_ofList___closed__4));
v___x_1886_ = l_Lean_MessageData_ofFormat(v___x_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__6(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = lean_box(1);
v___x_1888_ = l_Lean_MessageData_ofFormat(v___x_1887_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__7(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1889_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_1890_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__5, &l_Lean_MessageData_ofList___closed__5_once, _init_l_Lean_MessageData_ofList___closed__5);
v___x_1891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
lean_ctor_set(v___x_1891_, 1, v___x_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofList(lean_object* v_x_1892_){
_start:
{
if (lean_obj_tag(v_x_1892_) == 0)
{
lean_object* v___x_1893_; 
v___x_1893_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__2, &l_Lean_MessageData_ofList___closed__2_once, _init_l_Lean_MessageData_ofList___closed__2);
return v___x_1893_;
}
else
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__7, &l_Lean_MessageData_ofList___closed__7_once, _init_l_Lean_MessageData_ofList___closed__7);
v___x_1895_ = l_Lean_MessageData_joinSep(v_x_1892_, v___x_1894_);
v___x_1896_ = l_Lean_MessageData_sbracket(v___x_1895_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofArray(lean_object* v_msgs_1897_){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = lean_array_to_list(v_msgs_1897_);
v___x_1899_ = l_Lean_MessageData_ofList(v___x_1898_);
return v___x_1899_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__2(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = ((lean_object*)(l_Lean_MessageData_orList___closed__1));
v___x_1904_ = l_Lean_MessageData_ofFormat(v___x_1903_);
return v___x_1904_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__5(void){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = ((lean_object*)(l_Lean_MessageData_orList___closed__4));
v___x_1909_ = l_Lean_MessageData_ofFormat(v___x_1908_);
return v___x_1909_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__8(void){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = ((lean_object*)(l_Lean_MessageData_orList___closed__7));
v___x_1914_ = l_Lean_MessageData_ofFormat(v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_orList(lean_object* v_xs_1915_){
_start:
{
if (lean_obj_tag(v_xs_1915_) == 0)
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_obj_once(&l_Lean_MessageData_orList___closed__2, &l_Lean_MessageData_orList___closed__2_once, _init_l_Lean_MessageData_orList___closed__2);
return v___x_1916_;
}
else
{
lean_object* v_tail_1917_; 
v_tail_1917_ = lean_ctor_get(v_xs_1915_, 1);
lean_inc(v_tail_1917_);
if (lean_obj_tag(v_tail_1917_) == 0)
{
lean_object* v_head_1918_; 
v_head_1918_ = lean_ctor_get(v_xs_1915_, 0);
lean_inc(v_head_1918_);
lean_dec_ref_known(v_xs_1915_, 2);
return v_head_1918_;
}
else
{
lean_object* v_tail_1919_; 
v_tail_1919_ = lean_ctor_get(v_tail_1917_, 1);
if (lean_obj_tag(v_tail_1919_) == 0)
{
lean_object* v_head_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1937_; 
v_head_1920_ = lean_ctor_get(v_xs_1915_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v_xs_1915_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v_xs_1915_, 1);
lean_dec(v_unused_1938_);
v___x_1922_ = v_xs_1915_;
v_isShared_1923_ = v_isSharedCheck_1937_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_head_1920_);
lean_dec(v_xs_1915_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1937_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v_head_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1935_; 
v_head_1924_ = lean_ctor_get(v_tail_1917_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_tail_1917_);
if (v_isSharedCheck_1935_ == 0)
{
lean_object* v_unused_1936_; 
v_unused_1936_ = lean_ctor_get(v_tail_1917_, 1);
lean_dec(v_unused_1936_);
v___x_1926_ = v_tail_1917_;
v_isShared_1927_ = v_isSharedCheck_1935_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_head_1924_);
lean_dec(v_tail_1917_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1935_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1928_; lean_object* v___x_1930_; 
v___x_1928_ = lean_obj_once(&l_Lean_MessageData_orList___closed__5, &l_Lean_MessageData_orList___closed__5_once, _init_l_Lean_MessageData_orList___closed__5);
if (v_isShared_1927_ == 0)
{
lean_ctor_set_tag(v___x_1926_, 7);
lean_ctor_set(v___x_1926_, 1, v___x_1928_);
lean_ctor_set(v___x_1926_, 0, v_head_1920_);
v___x_1930_ = v___x_1926_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_head_1920_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
lean_object* v___x_1932_; 
if (v_isShared_1923_ == 0)
{
lean_ctor_set_tag(v___x_1922_, 7);
lean_ctor_set(v___x_1922_, 1, v_head_1924_);
lean_ctor_set(v___x_1922_, 0, v___x_1930_);
v___x_1932_ = v___x_1922_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_head_1924_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
}
else
{
lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1962_; 
v_isSharedCheck_1962_ = !lean_is_exclusive(v_tail_1917_);
if (v_isSharedCheck_1962_ == 0)
{
lean_object* v_unused_1963_; lean_object* v_unused_1964_; 
v_unused_1963_ = lean_ctor_get(v_tail_1917_, 1);
lean_dec(v_unused_1963_);
v_unused_1964_ = lean_ctor_get(v_tail_1917_, 0);
lean_dec(v_unused_1964_);
v___x_1940_ = v_tail_1917_;
v_isShared_1941_ = v_isSharedCheck_1962_;
goto v_resetjp_1939_;
}
else
{
lean_dec(v_tail_1917_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1962_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1950_; 
v___x_1942_ = l_Lean_instInhabitedMessageData_default;
lean_inc_ref(v_xs_1915_);
v___x_1943_ = lean_array_mk(v_xs_1915_);
v___x_1944_ = lean_array_pop(v___x_1943_);
v___x_1945_ = lean_array_to_list(v___x_1944_);
v___x_1946_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_1947_ = l_Lean_MessageData_joinSep(v___x_1945_, v___x_1946_);
v___x_1948_ = lean_obj_once(&l_Lean_MessageData_orList___closed__8, &l_Lean_MessageData_orList___closed__8_once, _init_l_Lean_MessageData_orList___closed__8);
if (v_isShared_1941_ == 0)
{
lean_ctor_set_tag(v___x_1940_, 7);
lean_ctor_set(v___x_1940_, 1, v___x_1948_);
lean_ctor_set(v___x_1940_, 0, v___x_1947_);
v___x_1950_ = v___x_1940_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1947_);
lean_ctor_set(v_reuseFailAlloc_1961_, 1, v___x_1948_);
v___x_1950_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
lean_object* v___x_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
v___x_1951_ = l_List_getLast_x21___redArg(v___x_1942_, v_xs_1915_);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_xs_1915_);
if (v_isSharedCheck_1958_ == 0)
{
lean_object* v_unused_1959_; lean_object* v_unused_1960_; 
v_unused_1959_ = lean_ctor_get(v_xs_1915_, 1);
lean_dec(v_unused_1959_);
v_unused_1960_ = lean_ctor_get(v_xs_1915_, 0);
lean_dec(v_unused_1960_);
v___x_1953_ = v_xs_1915_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_dec(v_xs_1915_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
lean_ctor_set_tag(v___x_1953_, 7);
lean_ctor_set(v___x_1953_, 1, v___x_1951_);
lean_ctor_set(v___x_1953_, 0, v___x_1950_);
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1950_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v___x_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_andList___closed__2(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lean_MessageData_andList___closed__1));
v___x_1969_ = l_Lean_MessageData_ofFormat(v___x_1968_);
return v___x_1969_;
}
}
static lean_object* _init_l_Lean_MessageData_andList___closed__5(void){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = ((lean_object*)(l_Lean_MessageData_andList___closed__4));
v___x_1974_ = l_Lean_MessageData_ofFormat(v___x_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_andList(lean_object* v_xs_1975_){
_start:
{
if (lean_obj_tag(v_xs_1975_) == 0)
{
lean_object* v___x_1976_; 
v___x_1976_ = lean_obj_once(&l_Lean_MessageData_orList___closed__2, &l_Lean_MessageData_orList___closed__2_once, _init_l_Lean_MessageData_orList___closed__2);
return v___x_1976_;
}
else
{
lean_object* v_tail_1977_; 
v_tail_1977_ = lean_ctor_get(v_xs_1975_, 1);
lean_inc(v_tail_1977_);
if (lean_obj_tag(v_tail_1977_) == 0)
{
lean_object* v_head_1978_; 
v_head_1978_ = lean_ctor_get(v_xs_1975_, 0);
lean_inc(v_head_1978_);
lean_dec_ref_known(v_xs_1975_, 2);
return v_head_1978_;
}
else
{
lean_object* v_tail_1979_; 
v_tail_1979_ = lean_ctor_get(v_tail_1977_, 1);
if (lean_obj_tag(v_tail_1979_) == 0)
{
lean_object* v_head_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1997_; 
v_head_1980_ = lean_ctor_get(v_xs_1975_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_xs_1975_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; 
v_unused_1998_ = lean_ctor_get(v_xs_1975_, 1);
lean_dec(v_unused_1998_);
v___x_1982_ = v_xs_1975_;
v_isShared_1983_ = v_isSharedCheck_1997_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_head_1980_);
lean_dec(v_xs_1975_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1997_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v_head_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1995_; 
v_head_1984_ = lean_ctor_get(v_tail_1977_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_tail_1977_);
if (v_isSharedCheck_1995_ == 0)
{
lean_object* v_unused_1996_; 
v_unused_1996_ = lean_ctor_get(v_tail_1977_, 1);
lean_dec(v_unused_1996_);
v___x_1986_ = v_tail_1977_;
v_isShared_1987_ = v_isSharedCheck_1995_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_head_1984_);
lean_dec(v_tail_1977_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1995_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1988_; lean_object* v___x_1990_; 
v___x_1988_ = lean_obj_once(&l_Lean_MessageData_andList___closed__2, &l_Lean_MessageData_andList___closed__2_once, _init_l_Lean_MessageData_andList___closed__2);
if (v_isShared_1987_ == 0)
{
lean_ctor_set_tag(v___x_1986_, 7);
lean_ctor_set(v___x_1986_, 1, v___x_1988_);
lean_ctor_set(v___x_1986_, 0, v_head_1980_);
v___x_1990_ = v___x_1986_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_head_1980_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v___x_1988_);
v___x_1990_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
lean_object* v___x_1992_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set_tag(v___x_1982_, 7);
lean_ctor_set(v___x_1982_, 1, v_head_1984_);
lean_ctor_set(v___x_1982_, 0, v___x_1990_);
v___x_1992_ = v___x_1982_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1990_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v_head_1984_);
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
lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2022_; 
v_isSharedCheck_2022_ = !lean_is_exclusive(v_tail_1977_);
if (v_isSharedCheck_2022_ == 0)
{
lean_object* v_unused_2023_; lean_object* v_unused_2024_; 
v_unused_2023_ = lean_ctor_get(v_tail_1977_, 1);
lean_dec(v_unused_2023_);
v_unused_2024_ = lean_ctor_get(v_tail_1977_, 0);
lean_dec(v_unused_2024_);
v___x_2000_ = v_tail_1977_;
v_isShared_2001_ = v_isSharedCheck_2022_;
goto v_resetjp_1999_;
}
else
{
lean_dec(v_tail_1977_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2022_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2010_; 
v___x_2002_ = l_Lean_instInhabitedMessageData_default;
lean_inc_ref(v_xs_1975_);
v___x_2003_ = lean_array_mk(v_xs_1975_);
v___x_2004_ = lean_array_pop(v___x_2003_);
v___x_2005_ = lean_array_to_list(v___x_2004_);
v___x_2006_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_2007_ = l_Lean_MessageData_joinSep(v___x_2005_, v___x_2006_);
v___x_2008_ = lean_obj_once(&l_Lean_MessageData_andList___closed__5, &l_Lean_MessageData_andList___closed__5_once, _init_l_Lean_MessageData_andList___closed__5);
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 7);
lean_ctor_set(v___x_2000_, 1, v___x_2008_);
lean_ctor_set(v___x_2000_, 0, v___x_2007_);
v___x_2010_ = v___x_2000_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v___x_2007_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v___x_2011_ = l_List_getLast_x21___redArg(v___x_2002_, v_xs_1975_);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_xs_1975_);
if (v_isSharedCheck_2018_ == 0)
{
lean_object* v_unused_2019_; lean_object* v_unused_2020_; 
v_unused_2019_ = lean_ctor_get(v_xs_1975_, 1);
lean_dec(v_unused_2019_);
v_unused_2020_ = lean_ctor_get(v_xs_1975_, 0);
lean_dec(v_unused_2020_);
v___x_2013_ = v_xs_1975_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_dec(v_xs_1975_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
lean_ctor_set_tag(v___x_2013_, 7);
lean_ctor_set(v___x_2013_, 1, v___x_2011_);
lean_ctor_set(v___x_2013_, 0, v___x_2010_);
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2010_);
lean_ctor_set(v_reuseFailAlloc_2017_, 1, v___x_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__0(void){
_start:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_2026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
lean_ctor_set(v___x_2026_, 1, v___x_2025_);
return v___x_2026_;
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__3(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_Lean_MessageData_note___closed__2));
v___x_2031_ = l_Lean_MessageData_ofFormat(v___x_2030_);
return v___x_2031_;
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__4(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2032_ = lean_obj_once(&l_Lean_MessageData_note___closed__3, &l_Lean_MessageData_note___closed__3_once, _init_l_Lean_MessageData_note___closed__3);
v___x_2033_ = lean_obj_once(&l_Lean_MessageData_note___closed__0, &l_Lean_MessageData_note___closed__0_once, _init_l_Lean_MessageData_note___closed__0);
v___x_2034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
lean_ctor_set(v___x_2034_, 1, v___x_2032_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_note(lean_object* v_note_2035_){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2036_ = lean_obj_once(&l_Lean_MessageData_note___closed__4, &l_Lean_MessageData_note___closed__4_once, _init_l_Lean_MessageData_note___closed__4);
v___x_2037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2036_);
lean_ctor_set(v___x_2037_, 1, v_note_2035_);
return v___x_2037_;
}
}
static lean_object* _init_l_Lean_MessageData_hint_x27___closed__2(void){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = ((lean_object*)(l_Lean_MessageData_hint_x27___closed__1));
v___x_2042_ = l_Lean_MessageData_ofFormat(v___x_2041_);
return v___x_2042_;
}
}
static lean_object* _init_l_Lean_MessageData_hint_x27___closed__3(void){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = lean_obj_once(&l_Lean_MessageData_hint_x27___closed__2, &l_Lean_MessageData_hint_x27___closed__2_once, _init_l_Lean_MessageData_hint_x27___closed__2);
v___x_2044_ = lean_obj_once(&l_Lean_MessageData_note___closed__0, &l_Lean_MessageData_note___closed__0_once, _init_l_Lean_MessageData_note___closed__0);
v___x_2045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
lean_ctor_set(v___x_2045_, 1, v___x_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint_x27(lean_object* v_hint_2046_){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2047_ = lean_obj_once(&l_Lean_MessageData_hint_x27___closed__3, &l_Lean_MessageData_hint_x27___closed__3_once, _init_l_Lean_MessageData_hint_x27___closed__3);
v___x_2048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
lean_ctor_set(v___x_2048_, 1, v_hint_2046_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeListExpr___lam__0(lean_object* v_es_2051_){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2052_ = ((lean_object*)(l_Lean_MessageData_instCoeExpr___closed__0));
v___x_2053_ = lean_box(0);
v___x_2054_ = l_List_mapTR_loop___redArg(v___x_2052_, v_es_2051_, v___x_2053_);
v___x_2055_ = l_Lean_MessageData_ofList(v___x_2054_);
return v___x_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default___redArg(lean_object* v_inst_2058_){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; uint8_t v___x_2062_; uint8_t v___x_2063_; lean_object* v___x_2064_; 
v___x_2059_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_2060_ = l_Lean_instInhabitedPosition_default;
v___x_2061_ = lean_box(0);
v___x_2062_ = 0;
v___x_2063_ = 2;
v___x_2064_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2064_, 0, v___x_2059_);
lean_ctor_set(v___x_2064_, 1, v___x_2060_);
lean_ctor_set(v___x_2064_, 2, v___x_2061_);
lean_ctor_set(v___x_2064_, 3, v___x_2059_);
lean_ctor_set(v___x_2064_, 4, v_inst_2058_);
lean_ctor_set_uint8(v___x_2064_, sizeof(void*)*5, v___x_2062_);
lean_ctor_set_uint8(v___x_2064_, sizeof(void*)*5 + 1, v___x_2063_);
lean_ctor_set_uint8(v___x_2064_, sizeof(void*)*5 + 2, v___x_2062_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default(lean_object* v_00_u03b1_2065_, lean_object* v_inst_2066_){
_start:
{
lean_object* v___x_2067_; 
v___x_2067_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2066_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage___redArg(lean_object* v_inst_2068_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage(lean_object* v_a_2070_, lean_object* v_inst_2071_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg(lean_object* v_inst_2085_, lean_object* v_x_2086_){
_start:
{
lean_object* v_fileName_2087_; lean_object* v_pos_2088_; lean_object* v_endPos_2089_; uint8_t v_keepFullRange_2090_; uint8_t v_severity_2091_; uint8_t v_isSilent_2092_; lean_object* v_caption_2093_; lean_object* v_data_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v_fileName_2087_ = lean_ctor_get(v_x_2086_, 0);
lean_inc_ref(v_fileName_2087_);
v_pos_2088_ = lean_ctor_get(v_x_2086_, 1);
lean_inc_ref(v_pos_2088_);
v_endPos_2089_ = lean_ctor_get(v_x_2086_, 2);
lean_inc(v_endPos_2089_);
v_keepFullRange_2090_ = lean_ctor_get_uint8(v_x_2086_, sizeof(void*)*5);
v_severity_2091_ = lean_ctor_get_uint8(v_x_2086_, sizeof(void*)*5 + 1);
v_isSilent_2092_ = lean_ctor_get_uint8(v_x_2086_, sizeof(void*)*5 + 2);
v_caption_2093_ = lean_ctor_get(v_x_2086_, 3);
lean_inc_ref(v_caption_2093_);
v_data_2094_ = lean_ctor_get(v_x_2086_, 4);
lean_inc(v_data_2094_);
lean_dec_ref(v_x_2086_);
v___x_2095_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0));
v___x_2096_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_2097_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_fileName_2087_);
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2096_);
lean_ctor_set(v___x_2098_, 1, v___x_2097_);
v___x_2099_ = lean_box(0);
v___x_2100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_2102_ = l_Lean_instToJsonPosition_toJson(v_pos_2088_);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2101_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
v___x_2104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
lean_ctor_set(v___x_2104_, 1, v___x_2099_);
v___x_2105_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_2106_ = l_Lean_Option_toJson___redArg(v___x_2095_, v_endPos_2089_);
v___x_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
lean_ctor_set(v___x_2108_, 1, v___x_2099_);
v___x_2109_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_2110_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2110_, 0, v_keepFullRange_2090_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
lean_ctor_set(v___x_2112_, 1, v___x_2099_);
v___x_2113_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_2114_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_2091_);
v___x_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
lean_ctor_set(v___x_2116_, 1, v___x_2099_);
v___x_2117_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_2118_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2118_, 0, v_isSilent_2092_);
v___x_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2117_);
lean_ctor_set(v___x_2119_, 1, v___x_2118_);
v___x_2120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v___x_2099_);
v___x_2121_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_2122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2122_, 0, v_caption_2093_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
lean_ctor_set(v___x_2124_, 1, v___x_2099_);
v___x_2125_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2126_ = lean_apply_1(v_inst_2085_, v_data_2094_);
v___x_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2125_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
lean_ctor_set(v___x_2128_, 1, v___x_2099_);
v___x_2129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2128_);
lean_ctor_set(v___x_2129_, 1, v___x_2099_);
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2124_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2120_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2116_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2112_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2108_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2104_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
v___x_2136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2100_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9));
v___x_2138_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_2139_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_box(0), lean_box(0), v___x_2137_, v___x_2136_, v___x_2138_);
v___x_2140_ = l_Lean_Json_mkObj(v___x_2139_);
lean_dec(v___x_2139_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson(lean_object* v_00_u03b1_2141_, lean_object* v_inst_2142_, lean_object* v_x_2143_){
_start:
{
lean_object* v___x_2144_; 
v___x_2144_ = l_Lean_instToJsonBaseMessage_toJson___redArg(v_inst_2142_, v_x_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage___redArg(lean_object* v_inst_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = lean_alloc_closure((void*)(l_Lean_instToJsonBaseMessage_toJson), 3, 2);
lean_closure_set(v___x_2146_, 0, lean_box(0));
lean_closure_set(v___x_2146_, 1, v_inst_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage(lean_object* v_00_u03b1_2147_, lean_object* v_inst_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = lean_alloc_closure((void*)(l_Lean_instToJsonBaseMessage_toJson), 3, 2);
lean_closure_set(v___x_2149_, 0, lean_box(0));
lean_closure_set(v___x_2149_, 1, v_inst_2148_);
return v___x_2149_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3(void){
_start:
{
uint8_t v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = 1;
v___x_2156_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2));
v___x_2157_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2156_, v___x_2155_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2159_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4));
v___x_2160_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3);
v___x_2161_ = lean_string_append(v___x_2160_, v___x_2159_);
return v___x_2161_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7(void){
_start:
{
uint8_t v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2164_ = 1;
v___x_2165_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6));
v___x_2166_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2165_, v___x_2164_);
return v___x_2166_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2167_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7);
v___x_2168_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2169_ = lean_string_append(v___x_2168_, v___x_2167_);
return v___x_2169_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2172_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8);
v___x_2173_ = lean_string_append(v___x_2172_, v___x_2171_);
return v___x_2173_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14(void){
_start:
{
uint8_t v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2179_ = 1;
v___x_2180_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13));
v___x_2181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2180_, v___x_2179_);
return v___x_2181_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15(void){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2182_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14);
v___x_2183_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2184_ = lean_string_append(v___x_2183_, v___x_2182_);
return v___x_2184_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16(void){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2185_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2186_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15);
v___x_2187_ = lean_string_append(v___x_2186_, v___x_2185_);
return v___x_2187_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18(void){
_start:
{
uint8_t v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = 1;
v___x_2191_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17));
v___x_2192_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2191_, v___x_2190_);
return v___x_2192_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18);
v___x_2194_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2195_ = lean_string_append(v___x_2194_, v___x_2193_);
return v___x_2195_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2196_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2197_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19);
v___x_2198_ = lean_string_append(v___x_2197_, v___x_2196_);
return v___x_2198_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23(void){
_start:
{
uint8_t v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = 1;
v___x_2203_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22));
v___x_2204_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2203_, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24(void){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23);
v___x_2206_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2207_ = lean_string_append(v___x_2206_, v___x_2205_);
return v___x_2207_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2209_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24);
v___x_2210_ = lean_string_append(v___x_2209_, v___x_2208_);
return v___x_2210_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27(void){
_start:
{
uint8_t v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2213_ = 1;
v___x_2214_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26));
v___x_2215_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2214_, v___x_2213_);
return v___x_2215_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28(void){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2216_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27);
v___x_2217_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2218_ = lean_string_append(v___x_2217_, v___x_2216_);
return v___x_2218_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29(void){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2219_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2220_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28);
v___x_2221_ = lean_string_append(v___x_2220_, v___x_2219_);
return v___x_2221_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31(void){
_start:
{
uint8_t v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = 1;
v___x_2225_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30));
v___x_2226_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2225_, v___x_2224_);
return v___x_2226_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2227_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31);
v___x_2228_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2229_ = lean_string_append(v___x_2228_, v___x_2227_);
return v___x_2229_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33(void){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2230_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2231_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32);
v___x_2232_ = lean_string_append(v___x_2231_, v___x_2230_);
return v___x_2232_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35(void){
_start:
{
uint8_t v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = 1;
v___x_2236_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34));
v___x_2237_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2236_, v___x_2235_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2238_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35);
v___x_2239_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2240_ = lean_string_append(v___x_2239_, v___x_2238_);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2241_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2242_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36);
v___x_2243_ = lean_string_append(v___x_2242_, v___x_2241_);
return v___x_2243_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39(void){
_start:
{
uint8_t v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2246_ = 1;
v___x_2247_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38));
v___x_2248_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2247_, v___x_2246_);
return v___x_2248_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2249_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39);
v___x_2250_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2251_ = lean_string_append(v___x_2250_, v___x_2249_);
return v___x_2251_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2253_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40);
v___x_2254_ = lean_string_append(v___x_2253_, v___x_2252_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg(lean_object* v_inst_2255_, lean_object* v_json_2256_){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2257_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0));
v___x_2258_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
lean_inc(v_json_2256_);
v___x_2259_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2257_, v___x_2258_);
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2269_; 
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2269_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2269_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2267_; 
v___x_2264_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10);
v___x_2265_ = lean_string_append(v___x_2264_, v_a_2260_);
lean_dec(v_a_2260_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v___x_2265_);
v___x_2267_ = v___x_2262_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2265_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
else
{
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2277_; 
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2270_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2272_ = v___x_2259_;
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2259_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2275_; 
if (v_isShared_2273_ == 0)
{
lean_ctor_set_tag(v___x_2272_, 0);
v___x_2275_ = v___x_2272_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_a_2270_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v_a_2278_ = lean_ctor_get(v___x_2259_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2259_, 1);
v___x_2279_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11));
v___x_2280_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12));
v___x_2281_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
lean_inc(v_json_2256_);
v___x_2282_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2279_, v___x_2281_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2292_; 
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2285_ = v___x_2282_;
v_isShared_2286_ = v_isSharedCheck_2292_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2282_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2292_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2290_; 
v___x_2287_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16);
v___x_2288_ = lean_string_append(v___x_2287_, v_a_2283_);
lean_dec(v_a_2283_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 0, v___x_2288_);
v___x_2290_ = v___x_2285_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
else
{
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2293_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2282_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2282_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set_tag(v___x_2295_, 0);
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_a_2301_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2302_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
lean_inc(v_json_2256_);
v___x_2303_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2280_, v___x_2302_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2313_; 
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2313_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2313_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2311_; 
v___x_2308_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20);
v___x_2309_ = lean_string_append(v___x_2308_, v_a_2304_);
lean_dec(v_a_2304_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v___x_2309_);
v___x_2311_ = v___x_2306_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
else
{
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2314_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2303_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2303_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
lean_ctor_set_tag(v___x_2316_, 0);
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v_a_2322_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2303_, 1);
v___x_2323_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21));
v___x_2324_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
lean_inc(v_json_2256_);
v___x_2325_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2323_, v___x_2324_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2335_; 
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2328_ = v___x_2325_;
v_isShared_2329_ = v_isSharedCheck_2335_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2325_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2335_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2330_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25);
v___x_2331_ = lean_string_append(v___x_2330_, v_a_2326_);
lean_dec(v_a_2326_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___x_2331_);
v___x_2333_ = v___x_2328_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2331_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
else
{
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2336_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2325_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2325_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 0);
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_a_2344_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2325_, 1);
v___x_2345_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity___closed__0));
v___x_2346_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
lean_inc(v_json_2256_);
v___x_2347_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2345_, v___x_2346_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2350_ = v___x_2347_;
v_isShared_2351_ = v_isSharedCheck_2357_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2347_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2357_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2355_; 
v___x_2352_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29);
v___x_2353_ = lean_string_append(v___x_2352_, v_a_2348_);
lean_dec(v_a_2348_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2353_);
v___x_2355_ = v___x_2350_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2353_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
else
{
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2358_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2347_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2347_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
lean_ctor_set_tag(v___x_2360_, 0);
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v_a_2366_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2366_);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2367_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
lean_inc(v_json_2256_);
v___x_2368_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2323_, v___x_2367_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2378_; 
lean_dec(v_a_2366_);
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2371_ = v___x_2368_;
v_isShared_2372_ = v_isSharedCheck_2378_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2368_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2378_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2373_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33);
v___x_2374_ = lean_string_append(v___x_2373_, v_a_2369_);
lean_dec(v_a_2369_);
if (v_isShared_2372_ == 0)
{
lean_ctor_set(v___x_2371_, 0, v___x_2374_);
v___x_2376_ = v___x_2371_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2374_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
else
{
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
lean_dec(v_a_2366_);
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2379_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2381_ = v___x_2368_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v___x_2368_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set_tag(v___x_2381_, 0);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2379_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v_a_2387_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2387_);
lean_dec_ref_known(v___x_2368_, 1);
v___x_2388_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
lean_inc(v_json_2256_);
v___x_2389_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v___x_2257_, v___x_2388_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2399_; 
lean_dec(v_a_2387_);
lean_dec(v_a_2366_);
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2392_ = v___x_2389_;
v_isShared_2393_ = v_isSharedCheck_2399_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2399_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2397_; 
v___x_2394_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37);
v___x_2395_ = lean_string_append(v___x_2394_, v_a_2390_);
lean_dec(v_a_2390_);
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 0, v___x_2395_);
v___x_2397_ = v___x_2392_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v___x_2395_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
else
{
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec(v_a_2387_);
lean_dec(v_a_2366_);
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
lean_dec(v_json_2256_);
lean_dec_ref(v_inst_2255_);
v_a_2400_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2389_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2389_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 0);
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_a_2408_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2389_, 1);
v___x_2409_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2410_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2256_, v_inst_2255_, v___x_2409_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2420_; 
lean_dec(v_a_2408_);
lean_dec(v_a_2387_);
lean_dec(v_a_2366_);
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2413_ = v___x_2410_;
v_isShared_2414_ = v_isSharedCheck_2420_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2420_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2418_; 
v___x_2415_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41);
v___x_2416_ = lean_string_append(v___x_2415_, v_a_2411_);
lean_dec(v_a_2411_);
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 0, v___x_2416_);
v___x_2418_ = v___x_2413_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2416_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
else
{
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2428_; 
lean_dec(v_a_2408_);
lean_dec(v_a_2387_);
lean_dec(v_a_2366_);
lean_dec(v_a_2344_);
lean_dec(v_a_2322_);
lean_dec(v_a_2301_);
lean_dec(v_a_2278_);
v_a_2421_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2423_ = v___x_2410_;
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_a_2421_);
lean_dec(v___x_2410_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2426_; 
if (v_isShared_2424_ == 0)
{
lean_ctor_set_tag(v___x_2423_, 0);
v___x_2426_ = v___x_2423_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_a_2421_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2440_; 
v_a_2429_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2431_ = v___x_2410_;
v_isShared_2432_ = v_isSharedCheck_2440_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2410_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2440_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; uint8_t v___x_2434_; uint8_t v___x_2435_; uint8_t v___x_2436_; lean_object* v___x_2438_; 
v___x_2433_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2433_, 0, v_a_2278_);
lean_ctor_set(v___x_2433_, 1, v_a_2301_);
lean_ctor_set(v___x_2433_, 2, v_a_2322_);
lean_ctor_set(v___x_2433_, 3, v_a_2408_);
lean_ctor_set(v___x_2433_, 4, v_a_2429_);
v___x_2434_ = lean_unbox(v_a_2344_);
lean_dec(v_a_2344_);
lean_ctor_set_uint8(v___x_2433_, sizeof(void*)*5, v___x_2434_);
v___x_2435_ = lean_unbox(v_a_2366_);
lean_dec(v_a_2366_);
lean_ctor_set_uint8(v___x_2433_, sizeof(void*)*5 + 1, v___x_2435_);
v___x_2436_ = lean_unbox(v_a_2387_);
lean_dec(v_a_2387_);
lean_ctor_set_uint8(v___x_2433_, sizeof(void*)*5 + 2, v___x_2436_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2433_);
v___x_2438_ = v___x_2431_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
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
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson(lean_object* v_00_u03b1_2441_, lean_object* v_inst_2442_, lean_object* v_json_2443_){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = l_Lean_instFromJsonBaseMessage_fromJson___redArg(v_inst_2442_, v_json_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage___redArg(lean_object* v_inst_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_alloc_closure((void*)(l_Lean_instFromJsonBaseMessage_fromJson), 3, 2);
lean_closure_set(v___x_2446_, 0, lean_box(0));
lean_closure_set(v___x_2446_, 1, v_inst_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage(lean_object* v_00_u03b1_2447_, lean_object* v_inst_2448_){
_start:
{
lean_object* v___x_2449_; 
v___x_2449_ = lean_alloc_closure((void*)(l_Lean_instFromJsonBaseMessage_fromJson), 3, 2);
lean_closure_set(v___x_2449_, 0, lean_box(0));
lean_closure_set(v___x_2449_, 1, v_inst_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(lean_object* v_x_2450_){
_start:
{
if (lean_obj_tag(v_x_2450_) == 0)
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_box(0);
return v___x_2451_;
}
else
{
lean_object* v_val_2452_; lean_object* v___x_2453_; 
v_val_2452_ = lean_ctor_get(v_x_2450_, 0);
lean_inc(v_val_2452_);
lean_dec_ref_known(v_x_2450_, 1);
v___x_2453_ = l_Lean_instToJsonPosition_toJson(v_val_2452_);
return v___x_2453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(lean_object* v_a_2454_, lean_object* v_a_2455_){
_start:
{
if (lean_obj_tag(v_a_2454_) == 0)
{
lean_object* v___x_2456_; 
v___x_2456_ = lean_array_to_list(v_a_2455_);
return v___x_2456_;
}
else
{
lean_object* v_head_2457_; lean_object* v_tail_2458_; lean_object* v___x_2459_; 
v_head_2457_ = lean_ctor_get(v_a_2454_, 0);
lean_inc(v_head_2457_);
v_tail_2458_ = lean_ctor_get(v_a_2454_, 1);
lean_inc(v_tail_2458_);
lean_dec_ref_known(v_a_2454_, 2);
v___x_2459_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2455_, v_head_2457_);
v_a_2454_ = v_tail_2458_;
v_a_2455_ = v___x_2459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonSerialMessage_toJson(lean_object* v_x_2462_){
_start:
{
lean_object* v_toBaseMessage_2463_; lean_object* v_kind_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2529_; 
v_toBaseMessage_2463_ = lean_ctor_get(v_x_2462_, 0);
v_kind_2464_ = lean_ctor_get(v_x_2462_, 1);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_x_2462_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2466_ = v_x_2462_;
v_isShared_2467_ = v_isSharedCheck_2529_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_kind_2464_);
lean_inc(v_toBaseMessage_2463_);
lean_dec(v_x_2462_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2529_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v_fileName_2468_; lean_object* v_pos_2469_; lean_object* v_endPos_2470_; uint8_t v_keepFullRange_2471_; uint8_t v_severity_2472_; uint8_t v_isSilent_2473_; lean_object* v_caption_2474_; lean_object* v_data_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2479_; 
v_fileName_2468_ = lean_ctor_get(v_toBaseMessage_2463_, 0);
lean_inc_ref(v_fileName_2468_);
v_pos_2469_ = lean_ctor_get(v_toBaseMessage_2463_, 1);
lean_inc_ref(v_pos_2469_);
v_endPos_2470_ = lean_ctor_get(v_toBaseMessage_2463_, 2);
lean_inc(v_endPos_2470_);
v_keepFullRange_2471_ = lean_ctor_get_uint8(v_toBaseMessage_2463_, sizeof(void*)*5);
v_severity_2472_ = lean_ctor_get_uint8(v_toBaseMessage_2463_, sizeof(void*)*5 + 1);
v_isSilent_2473_ = lean_ctor_get_uint8(v_toBaseMessage_2463_, sizeof(void*)*5 + 2);
v_caption_2474_ = lean_ctor_get(v_toBaseMessage_2463_, 3);
lean_inc_ref(v_caption_2474_);
v_data_2475_ = lean_ctor_get(v_toBaseMessage_2463_, 4);
lean_inc(v_data_2475_);
lean_dec_ref(v_toBaseMessage_2463_);
v___x_2476_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_2477_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_fileName_2468_);
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 1, v___x_2477_);
lean_ctor_set(v___x_2466_, 0, v___x_2476_);
v___x_2479_ = v___x_2466_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v___x_2477_);
v___x_2479_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; uint8_t v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2480_ = lean_box(0);
v___x_2481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2479_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_2483_ = l_Lean_instToJsonPosition_toJson(v_pos_2469_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2482_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
lean_ctor_set(v___x_2485_, 1, v___x_2480_);
v___x_2486_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_2487_ = l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(v_endPos_2470_);
v___x_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2486_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
v___x_2489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
lean_ctor_set(v___x_2489_, 1, v___x_2480_);
v___x_2490_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_2491_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2491_, 0, v_keepFullRange_2471_);
v___x_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2490_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v___x_2493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
lean_ctor_set(v___x_2493_, 1, v___x_2480_);
v___x_2494_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_2495_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_2472_);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2494_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
lean_ctor_set(v___x_2497_, 1, v___x_2480_);
v___x_2498_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_2499_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2499_, 0, v_isSilent_2473_);
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2498_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2500_);
lean_ctor_set(v___x_2501_, 1, v___x_2480_);
v___x_2502_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_2503_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_caption_2474_);
v___x_2504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2502_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
lean_ctor_set(v___x_2505_, 1, v___x_2480_);
v___x_2506_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2507_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2507_, 0, v_data_2475_);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2506_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
v___x_2509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
lean_ctor_set(v___x_2509_, 1, v___x_2480_);
v___x_2510_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_2511_ = 1;
v___x_2512_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2464_, v___x_2511_);
v___x_2513_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
v___x_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2510_);
lean_ctor_set(v___x_2514_, 1, v___x_2513_);
v___x_2515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2514_);
lean_ctor_set(v___x_2515_, 1, v___x_2480_);
v___x_2516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
lean_ctor_set(v___x_2516_, 1, v___x_2480_);
v___x_2517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2509_);
lean_ctor_set(v___x_2517_, 1, v___x_2516_);
v___x_2518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2505_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
v___x_2519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2501_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2497_);
lean_ctor_set(v___x_2520_, 1, v___x_2519_);
v___x_2521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2493_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2489_);
lean_ctor_set(v___x_2522_, 1, v___x_2521_);
v___x_2523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2485_);
lean_ctor_set(v___x_2523_, 1, v___x_2522_);
v___x_2524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2481_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_2526_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(v___x_2524_, v___x_2525_);
v___x_2527_ = l_Lean_Json_mkObj(v___x_2526_);
lean_dec(v___x_2526_);
return v___x_2527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(lean_object* v_j_2532_, lean_object* v_k_2533_){
_start:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = l_Lean_Json_getObjValD(v_j_2532_, v_k_2533_);
v___x_2535_ = l_Lean_Json_getStr_x3f(v___x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0___boxed(lean_object* v_j_2536_, lean_object* v_k_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_j_2536_, v_k_2537_);
lean_dec_ref(v_k_2537_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(lean_object* v_j_2539_, lean_object* v_k_2540_){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = l_Lean_Json_getObjValD(v_j_2539_, v_k_2540_);
v___x_2542_ = l_Lean_instFromJsonPosition_fromJson(v___x_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1___boxed(lean_object* v_j_2543_, lean_object* v_k_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(v_j_2543_, v_k_2544_);
lean_dec_ref(v_k_2544_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(lean_object* v_j_2546_, lean_object* v_k_2547_){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = l_Lean_Json_getObjValD(v_j_2546_, v_k_2547_);
v___x_2549_ = l_Lean_Json_getBool_x3f(v___x_2548_);
lean_dec(v___x_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3___boxed(lean_object* v_j_2550_, lean_object* v_k_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_j_2550_, v_k_2551_);
lean_dec_ref(v_k_2551_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(lean_object* v_j_2553_, lean_object* v_k_2554_){
_start:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = l_Lean_Json_getObjValD(v_j_2553_, v_k_2554_);
v___x_2556_ = l_Lean_instFromJsonMessageSeverity_fromJson(v___x_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4___boxed(lean_object* v_j_2557_, lean_object* v_k_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(v_j_2557_, v_k_2558_);
lean_dec_ref(v_k_2558_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(lean_object* v_j_2560_, lean_object* v_k_2561_){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = l_Lean_Json_getObjValD(v_j_2560_, v_k_2561_);
v___x_2563_ = l_Lean_Name_fromJson_x3f(v___x_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5___boxed(lean_object* v_j_2564_, lean_object* v_k_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(v_j_2564_, v_k_2565_);
lean_dec_ref(v_k_2565_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(lean_object* v_x_2569_){
_start:
{
if (lean_obj_tag(v_x_2569_) == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0));
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; 
v___x_2571_ = l_Lean_instFromJsonPosition_fromJson(v_x_2569_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
v_a_2572_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2571_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2571_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
else
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2588_; 
v_a_2580_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2582_ = v___x_2571_;
v_isShared_2583_ = v_isSharedCheck_2588_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2571_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2588_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_a_2580_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v___x_2584_);
v___x_2586_ = v___x_2582_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(lean_object* v_j_2589_, lean_object* v_k_2590_){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = l_Lean_Json_getObjValD(v_j_2589_, v_k_2590_);
v___x_2592_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(v___x_2591_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2___boxed(lean_object* v_j_2593_, lean_object* v_k_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(v_j_2593_, v_k_2594_);
lean_dec_ref(v_k_2594_);
return v_res_2595_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__2(void){
_start:
{
uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2600_ = 1;
v___x_2601_ = ((lean_object*)(l_Lean_instFromJsonSerialMessage_fromJson___closed__1));
v___x_2602_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2601_, v___x_2600_);
return v___x_2602_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2603_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4));
v___x_2604_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__2, &l_Lean_instFromJsonSerialMessage_fromJson___closed__2_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__2);
v___x_2605_ = lean_string_append(v___x_2604_, v___x_2603_);
return v___x_2605_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__4(void){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2606_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7);
v___x_2607_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2608_ = lean_string_append(v___x_2607_, v___x_2606_);
return v___x_2608_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__5(void){
_start:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2609_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2610_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__4, &l_Lean_instFromJsonSerialMessage_fromJson___closed__4_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__4);
v___x_2611_ = lean_string_append(v___x_2610_, v___x_2609_);
return v___x_2611_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2612_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14);
v___x_2613_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2614_ = lean_string_append(v___x_2613_, v___x_2612_);
return v___x_2614_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2615_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2616_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__6, &l_Lean_instFromJsonSerialMessage_fromJson___closed__6_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__6);
v___x_2617_ = lean_string_append(v___x_2616_, v___x_2615_);
return v___x_2617_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__8(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18);
v___x_2619_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2620_ = lean_string_append(v___x_2619_, v___x_2618_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__9(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2621_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2622_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__8, &l_Lean_instFromJsonSerialMessage_fromJson___closed__8_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__8);
v___x_2623_ = lean_string_append(v___x_2622_, v___x_2621_);
return v___x_2623_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2624_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23);
v___x_2625_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2626_ = lean_string_append(v___x_2625_, v___x_2624_);
return v___x_2626_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__11(void){
_start:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2627_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2628_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__10, &l_Lean_instFromJsonSerialMessage_fromJson___closed__10_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__10);
v___x_2629_ = lean_string_append(v___x_2628_, v___x_2627_);
return v___x_2629_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27);
v___x_2631_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2632_ = lean_string_append(v___x_2631_, v___x_2630_);
return v___x_2632_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__13(void){
_start:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2633_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2634_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__12, &l_Lean_instFromJsonSerialMessage_fromJson___closed__12_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__12);
v___x_2635_ = lean_string_append(v___x_2634_, v___x_2633_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__14(void){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2636_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31);
v___x_2637_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2638_ = lean_string_append(v___x_2637_, v___x_2636_);
return v___x_2638_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__15(void){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2639_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2640_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__14, &l_Lean_instFromJsonSerialMessage_fromJson___closed__14_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__14);
v___x_2641_ = lean_string_append(v___x_2640_, v___x_2639_);
return v___x_2641_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__16(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2642_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35);
v___x_2643_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2644_ = lean_string_append(v___x_2643_, v___x_2642_);
return v___x_2644_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__17(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2645_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2646_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__16, &l_Lean_instFromJsonSerialMessage_fromJson___closed__16_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__16);
v___x_2647_ = lean_string_append(v___x_2646_, v___x_2645_);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__18(void){
_start:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2648_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39);
v___x_2649_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2650_ = lean_string_append(v___x_2649_, v___x_2648_);
return v___x_2650_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__19(void){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2651_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2652_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__18, &l_Lean_instFromJsonSerialMessage_fromJson___closed__18_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__18);
v___x_2653_ = lean_string_append(v___x_2652_, v___x_2651_);
return v___x_2653_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__21(void){
_start:
{
uint8_t v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2656_ = 1;
v___x_2657_ = ((lean_object*)(l_Lean_instFromJsonSerialMessage_fromJson___closed__20));
v___x_2658_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2657_, v___x_2656_);
return v___x_2658_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__22(void){
_start:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2659_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__21, &l_Lean_instFromJsonSerialMessage_fromJson___closed__21_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__21);
v___x_2660_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2661_ = lean_string_append(v___x_2660_, v___x_2659_);
return v___x_2661_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__23(void){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2662_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2663_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__22, &l_Lean_instFromJsonSerialMessage_fromJson___closed__22_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__22);
v___x_2664_ = lean_string_append(v___x_2663_, v___x_2662_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object* v_json_2665_){
_start:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2666_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
lean_inc(v_json_2665_);
v___x_2667_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2665_, v___x_2666_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2677_; 
lean_dec(v_json_2665_);
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2670_ = v___x_2667_;
v_isShared_2671_ = v_isSharedCheck_2677_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2667_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2677_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2675_; 
v___x_2672_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__5, &l_Lean_instFromJsonSerialMessage_fromJson___closed__5_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__5);
v___x_2673_ = lean_string_append(v___x_2672_, v_a_2668_);
lean_dec(v_a_2668_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2673_);
v___x_2675_ = v___x_2670_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
else
{
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
lean_dec(v_json_2665_);
v_a_2678_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2680_ = v___x_2667_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2667_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
lean_ctor_set_tag(v___x_2680_, 0);
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_a_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v_a_2686_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2667_, 1);
v___x_2687_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
lean_inc(v_json_2665_);
v___x_2688_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(v_json_2665_, v___x_2687_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2698_; 
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2691_ = v___x_2688_;
v_isShared_2692_ = v_isSharedCheck_2698_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2688_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2698_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2696_; 
v___x_2693_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__7, &l_Lean_instFromJsonSerialMessage_fromJson___closed__7_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__7);
v___x_2694_ = lean_string_append(v___x_2693_, v_a_2689_);
lean_dec(v_a_2689_);
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 0, v___x_2694_);
v___x_2696_ = v___x_2691_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v___x_2694_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
else
{
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2699_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2688_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2688_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set_tag(v___x_2701_, 0);
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
else
{
lean_object* v_a_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v_a_2707_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2707_);
lean_dec_ref_known(v___x_2688_, 1);
v___x_2708_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
lean_inc(v_json_2665_);
v___x_2709_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(v_json_2665_, v___x_2708_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2719_; 
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2719_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2719_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2717_; 
v___x_2714_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__9, &l_Lean_instFromJsonSerialMessage_fromJson___closed__9_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__9);
v___x_2715_ = lean_string_append(v___x_2714_, v_a_2710_);
lean_dec(v_a_2710_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2715_);
v___x_2717_ = v___x_2712_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
else
{
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2720_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2709_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2709_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
lean_ctor_set_tag(v___x_2722_, 0);
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v_a_2728_ = lean_ctor_get(v___x_2709_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2709_, 1);
v___x_2729_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
lean_inc(v_json_2665_);
v___x_2730_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_json_2665_, v___x_2729_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2740_; 
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2733_ = v___x_2730_;
v_isShared_2734_ = v_isSharedCheck_2740_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2730_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2740_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2738_; 
v___x_2735_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__11, &l_Lean_instFromJsonSerialMessage_fromJson___closed__11_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__11);
v___x_2736_ = lean_string_append(v___x_2735_, v_a_2731_);
lean_dec(v_a_2731_);
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 0, v___x_2736_);
v___x_2738_ = v___x_2733_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2736_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
else
{
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2748_; 
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2741_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2743_ = v___x_2730_;
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2730_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
lean_ctor_set_tag(v___x_2743_, 0);
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v_a_2749_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2749_);
lean_dec_ref_known(v___x_2730_, 1);
v___x_2750_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
lean_inc(v_json_2665_);
v___x_2751_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(v_json_2665_, v___x_2750_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2761_; 
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2754_ = v___x_2751_;
v_isShared_2755_ = v_isSharedCheck_2761_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2751_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2761_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2759_; 
v___x_2756_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__13, &l_Lean_instFromJsonSerialMessage_fromJson___closed__13_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__13);
v___x_2757_ = lean_string_append(v___x_2756_, v_a_2752_);
lean_dec(v_a_2752_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 0, v___x_2757_);
v___x_2759_ = v___x_2754_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2757_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
else
{
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2762_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2751_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2751_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
lean_ctor_set_tag(v___x_2764_, 0);
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v_a_2770_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2751_, 1);
v___x_2771_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
lean_inc(v_json_2665_);
v___x_2772_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_json_2665_, v___x_2771_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2782_; 
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2775_ = v___x_2772_;
v_isShared_2776_ = v_isSharedCheck_2782_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2772_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2782_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2780_; 
v___x_2777_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__15, &l_Lean_instFromJsonSerialMessage_fromJson___closed__15_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__15);
v___x_2778_ = lean_string_append(v___x_2777_, v_a_2773_);
lean_dec(v_a_2773_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2778_);
v___x_2780_ = v___x_2775_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2778_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
else
{
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2783_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2785_ = v___x_2772_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2772_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
lean_ctor_set_tag(v___x_2785_, 0);
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v_a_2791_ = lean_ctor_get(v___x_2772_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2772_, 1);
v___x_2792_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
lean_inc(v_json_2665_);
v___x_2793_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2665_, v___x_2792_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2803_; 
lean_dec(v_a_2791_);
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2796_ = v___x_2793_;
v_isShared_2797_ = v_isSharedCheck_2803_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2803_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2801_; 
v___x_2798_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__17, &l_Lean_instFromJsonSerialMessage_fromJson___closed__17_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__17);
v___x_2799_ = lean_string_append(v___x_2798_, v_a_2794_);
lean_dec(v_a_2794_);
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v___x_2799_);
v___x_2801_ = v___x_2796_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
else
{
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
lean_dec(v_a_2791_);
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2804_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2793_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2793_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
lean_ctor_set_tag(v___x_2806_, 0);
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v_a_2812_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2793_, 1);
v___x_2813_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
lean_inc(v_json_2665_);
v___x_2814_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2665_, v___x_2813_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2824_; 
lean_dec(v_a_2812_);
lean_dec(v_a_2791_);
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2817_ = v___x_2814_;
v_isShared_2818_ = v_isSharedCheck_2824_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2814_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2824_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2822_; 
v___x_2819_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__19, &l_Lean_instFromJsonSerialMessage_fromJson___closed__19_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__19);
v___x_2820_ = lean_string_append(v___x_2819_, v_a_2815_);
lean_dec(v_a_2815_);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v___x_2820_);
v___x_2822_ = v___x_2817_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
else
{
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_a_2812_);
lean_dec(v_a_2791_);
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
lean_dec(v_json_2665_);
v_a_2825_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2814_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2814_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
lean_ctor_set_tag(v___x_2827_, 0);
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v_a_2833_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2833_);
lean_dec_ref_known(v___x_2814_, 1);
v___x_2834_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_2835_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(v_json_2665_, v___x_2834_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2845_; 
lean_dec(v_a_2833_);
lean_dec(v_a_2812_);
lean_dec(v_a_2791_);
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2838_ = v___x_2835_;
v_isShared_2839_ = v_isSharedCheck_2845_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2845_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2843_; 
v___x_2840_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__23, &l_Lean_instFromJsonSerialMessage_fromJson___closed__23_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__23);
v___x_2841_ = lean_string_append(v___x_2840_, v_a_2836_);
lean_dec(v_a_2836_);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2841_);
v___x_2843_ = v___x_2838_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v___x_2841_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
else
{
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2853_; 
lean_dec(v_a_2833_);
lean_dec(v_a_2812_);
lean_dec(v_a_2791_);
lean_dec(v_a_2770_);
lean_dec(v_a_2749_);
lean_dec(v_a_2728_);
lean_dec(v_a_2707_);
lean_dec(v_a_2686_);
v_a_2846_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2848_ = v___x_2835_;
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2835_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
lean_ctor_set_tag(v___x_2848_, 0);
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2866_; 
v_a_2854_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2856_ = v___x_2835_;
v_isShared_2857_ = v_isSharedCheck_2866_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2835_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2866_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2858_; uint8_t v___x_2859_; uint8_t v___x_2860_; uint8_t v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2864_; 
v___x_2858_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2858_, 0, v_a_2686_);
lean_ctor_set(v___x_2858_, 1, v_a_2707_);
lean_ctor_set(v___x_2858_, 2, v_a_2728_);
lean_ctor_set(v___x_2858_, 3, v_a_2812_);
lean_ctor_set(v___x_2858_, 4, v_a_2833_);
v___x_2859_ = lean_unbox(v_a_2749_);
lean_dec(v_a_2749_);
lean_ctor_set_uint8(v___x_2858_, sizeof(void*)*5, v___x_2859_);
v___x_2860_ = lean_unbox(v_a_2770_);
lean_dec(v_a_2770_);
lean_ctor_set_uint8(v___x_2858_, sizeof(void*)*5 + 1, v___x_2860_);
v___x_2861_ = lean_unbox(v_a_2791_);
lean_dec(v_a_2791_);
lean_ctor_set_uint8(v___x_2858_, sizeof(void*)*5 + 2, v___x_2861_);
v___x_2862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2858_);
lean_ctor_set(v___x_2862_, 1, v_a_2854_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v___x_2862_);
v___x_2864_ = v___x_2856_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
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
LEAN_EXPORT lean_object* l_Lean_kindOfErrorName(lean_object* v_errorName_2871_){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = ((lean_object*)(l_Lean_errorNameSuffix___closed__0));
v___x_2873_ = l_Lean_Name_str___override(v_errorName_2871_, v___x_2872_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagWithErrorName(lean_object* v_msg_2874_, lean_object* v_name_2875_){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2876_ = l_Lean_kindOfErrorName(v_name_2875_);
v___x_2877_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2876_);
lean_ctor_set(v___x_2877_, 1, v_msg_2874_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(lean_object* v_a_2879_){
_start:
{
switch(lean_obj_tag(v_a_2879_))
{
case 0:
{
return v_a_2879_;
}
case 1:
{
lean_object* v_pre_2880_; lean_object* v_str_2881_; lean_object* v_p_x27_2882_; uint8_t v___y_2884_; uint8_t v___x_2887_; 
v_pre_2880_ = lean_ctor_get(v_a_2879_, 0);
lean_inc(v_pre_2880_);
v_str_2881_ = lean_ctor_get(v_a_2879_, 1);
lean_inc_ref(v_str_2881_);
lean_dec_ref_known(v_a_2879_, 2);
v_p_x27_2882_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_pre_2880_);
v___x_2887_ = l_Lean_Name_isAnonymous(v_p_x27_2882_);
if (v___x_2887_ == 0)
{
v___y_2884_ = v___x_2887_;
goto v___jp_2883_;
}
else
{
lean_object* v___x_2888_; uint8_t v___x_2889_; 
v___x_2888_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0));
v___x_2889_ = lean_string_dec_eq(v_str_2881_, v___x_2888_);
v___y_2884_ = v___x_2889_;
goto v___jp_2883_;
}
v___jp_2883_:
{
if (v___y_2884_ == 0)
{
lean_object* v___x_2885_; 
v___x_2885_ = l_Lean_Name_str___override(v_p_x27_2882_, v_str_2881_);
return v___x_2885_;
}
else
{
lean_object* v___x_2886_; 
lean_dec(v_p_x27_2882_);
lean_dec_ref(v_str_2881_);
v___x_2886_ = lean_obj_once(&l_Lean_MessageData_kind___closed__0, &l_Lean_MessageData_kind___closed__0_once, _init_l_Lean_MessageData_kind___closed__0);
return v___x_2886_;
}
}
}
default: 
{
lean_object* v_pre_2890_; lean_object* v_i_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v_pre_2890_ = lean_ctor_get(v_a_2879_, 0);
lean_inc(v_pre_2890_);
v_i_2891_ = lean_ctor_get(v_a_2879_, 1);
lean_inc(v_i_2891_);
lean_dec_ref_known(v_a_2879_, 2);
v___x_2892_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_pre_2890_);
v___x_2893_ = l_Lean_Name_num___override(v___x_2892_, v_i_2891_);
return v___x_2893_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_stripNestedTags(lean_object* v_x_2894_){
_start:
{
switch(lean_obj_tag(v_x_2894_))
{
case 3:
{
lean_object* v_a_2895_; lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2904_; 
v_a_2895_ = lean_ctor_get(v_x_2894_, 0);
v_a_2896_ = lean_ctor_get(v_x_2894_, 1);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2898_ = v_x_2894_;
v_isShared_2899_ = v_isSharedCheck_2904_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_inc(v_a_2895_);
lean_dec(v_x_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2904_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2900_; lean_object* v___x_2902_; 
v___x_2900_ = l_Lean_MessageData_stripNestedTags(v_a_2896_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 1, v___x_2900_);
v___x_2902_ = v___x_2898_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2895_);
lean_ctor_set(v_reuseFailAlloc_2903_, 1, v___x_2900_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
case 4:
{
lean_object* v_a_2905_; lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2914_; 
v_a_2905_ = lean_ctor_get(v_x_2894_, 0);
v_a_2906_ = lean_ctor_get(v_x_2894_, 1);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2908_ = v_x_2894_;
v_isShared_2909_ = v_isSharedCheck_2914_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_inc(v_a_2905_);
lean_dec(v_x_2894_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2914_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2910_; lean_object* v___x_2912_; 
v___x_2910_ = l_Lean_MessageData_stripNestedTags(v_a_2906_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v___x_2910_);
v___x_2912_ = v___x_2908_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2905_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v___x_2910_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
case 8:
{
lean_object* v_a_2915_; lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2924_; 
v_a_2915_ = lean_ctor_get(v_x_2894_, 0);
v_a_2916_ = lean_ctor_get(v_x_2894_, 1);
v_isSharedCheck_2924_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2918_ = v_x_2894_;
v_isShared_2919_ = v_isSharedCheck_2924_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_inc(v_a_2915_);
lean_dec(v_x_2894_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2924_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2920_; lean_object* v___x_2922_; 
v___x_2920_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_a_2915_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___x_2920_);
v___x_2922_ = v___x_2918_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v___x_2920_);
lean_ctor_set(v_reuseFailAlloc_2923_, 1, v_a_2916_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
case 11:
{
lean_object* v_a_2925_; lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2934_; 
v_a_2925_ = lean_ctor_get(v_x_2894_, 0);
v_a_2926_ = lean_ctor_get(v_x_2894_, 1);
v_isSharedCheck_2934_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2928_ = v_x_2894_;
v_isShared_2929_ = v_isSharedCheck_2934_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_inc(v_a_2925_);
lean_dec(v_x_2894_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2934_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2930_; lean_object* v___x_2932_; 
v___x_2930_ = l_Lean_MessageData_stripNestedTags(v_a_2926_);
if (v_isShared_2929_ == 0)
{
lean_ctor_set(v___x_2928_, 1, v___x_2930_);
v___x_2932_ = v___x_2928_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2925_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v___x_2930_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
default: 
{
return v_x_2894_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f(lean_object* v_x_2935_){
_start:
{
if (lean_obj_tag(v_x_2935_) == 1)
{
lean_object* v_pre_2936_; lean_object* v_str_2937_; lean_object* v___x_2938_; uint8_t v___x_2939_; 
v_pre_2936_ = lean_ctor_get(v_x_2935_, 0);
v_str_2937_ = lean_ctor_get(v_x_2935_, 1);
v___x_2938_ = ((lean_object*)(l_Lean_errorNameSuffix___closed__0));
v___x_2939_ = lean_string_dec_eq(v_str_2937_, v___x_2938_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; 
v___x_2940_ = lean_box(0);
return v___x_2940_;
}
else
{
lean_object* v___x_2941_; 
lean_inc(v_pre_2936_);
v___x_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_pre_2936_);
return v___x_2941_;
}
}
else
{
lean_object* v___x_2942_; 
v___x_2942_ = lean_box(0);
return v___x_2942_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f___boxed(lean_object* v_x_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_Lean_errorNameOfKind_x3f(v_x_2943_);
lean_dec(v_x_2943_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f(lean_object* v_msg_2945_){
_start:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = l_Lean_MessageData_kind(v_msg_2945_);
v___x_2947_ = l_Lean_errorNameOfKind_x3f(v___x_2946_);
lean_dec(v___x_2946_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f___boxed(lean_object* v_msg_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_Lean_MessageData_errorName_x3f(v_msg_2948_);
lean_dec_ref(v_msg_2948_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f(lean_object* v_msg_2950_){
_start:
{
lean_object* v_data_2951_; lean_object* v___x_2952_; 
v_data_2951_ = lean_ctor_get(v_msg_2950_, 4);
v___x_2952_ = l_Lean_MessageData_errorName_x3f(v_data_2951_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f___boxed(lean_object* v_msg_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lean_Message_errorName_x3f(v_msg_2953_);
lean_dec_ref(v_msg_2953_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toMessage(lean_object* v_msg_2955_){
_start:
{
lean_object* v_toBaseMessage_2956_; lean_object* v_fileName_2957_; lean_object* v_pos_2958_; lean_object* v_endPos_2959_; uint8_t v_keepFullRange_2960_; uint8_t v_severity_2961_; uint8_t v_isSilent_2962_; lean_object* v_caption_2963_; lean_object* v_data_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2973_; 
v_toBaseMessage_2956_ = lean_ctor_get(v_msg_2955_, 0);
lean_inc_ref(v_toBaseMessage_2956_);
lean_dec_ref(v_msg_2955_);
v_fileName_2957_ = lean_ctor_get(v_toBaseMessage_2956_, 0);
v_pos_2958_ = lean_ctor_get(v_toBaseMessage_2956_, 1);
v_endPos_2959_ = lean_ctor_get(v_toBaseMessage_2956_, 2);
v_keepFullRange_2960_ = lean_ctor_get_uint8(v_toBaseMessage_2956_, sizeof(void*)*5);
v_severity_2961_ = lean_ctor_get_uint8(v_toBaseMessage_2956_, sizeof(void*)*5 + 1);
v_isSilent_2962_ = lean_ctor_get_uint8(v_toBaseMessage_2956_, sizeof(void*)*5 + 2);
v_caption_2963_ = lean_ctor_get(v_toBaseMessage_2956_, 3);
v_data_2964_ = lean_ctor_get(v_toBaseMessage_2956_, 4);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_toBaseMessage_2956_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2966_ = v_toBaseMessage_2956_;
v_isShared_2967_ = v_isSharedCheck_2973_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_data_2964_);
lean_inc(v_caption_2963_);
lean_inc(v_endPos_2959_);
lean_inc(v_pos_2958_);
lean_inc(v_fileName_2957_);
lean_dec(v_toBaseMessage_2956_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2973_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2971_; 
v___x_2968_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2968_, 0, v_data_2964_);
v___x_2969_ = l_Lean_MessageData_ofFormat(v___x_2968_);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 4, v___x_2969_);
v___x_2971_ = v___x_2966_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_fileName_2957_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v_pos_2958_);
lean_ctor_set(v_reuseFailAlloc_2972_, 2, v_endPos_2959_);
lean_ctor_set(v_reuseFailAlloc_2972_, 3, v_caption_2963_);
lean_ctor_set(v_reuseFailAlloc_2972_, 4, v___x_2969_);
lean_ctor_set_uint8(v_reuseFailAlloc_2972_, sizeof(void*)*5, v_keepFullRange_2960_);
lean_ctor_set_uint8(v_reuseFailAlloc_2972_, sizeof(void*)*5 + 1, v_severity_2961_);
lean_ctor_set_uint8(v_reuseFailAlloc_2972_, sizeof(void*)*5 + 2, v_isSilent_2962_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString(lean_object* v_msg_2979_, uint8_t v_includeEndPos_2980_){
_start:
{
lean_object* v___y_2982_; lean_object* v___y_2986_; uint32_t v___y_2987_; lean_object* v_str_2991_; lean_object* v_toBaseMessage_3003_; lean_object* v_kind_3004_; lean_object* v_fileName_3005_; lean_object* v_pos_3006_; lean_object* v_endPos_3007_; uint8_t v_severity_3008_; lean_object* v_caption_3009_; lean_object* v_data_3010_; lean_object* v___y_3012_; lean_object* v_str_3013_; lean_object* v___y_3021_; 
v_toBaseMessage_3003_ = lean_ctor_get(v_msg_2979_, 0);
lean_inc_ref(v_toBaseMessage_3003_);
v_kind_3004_ = lean_ctor_get(v_msg_2979_, 1);
lean_inc(v_kind_3004_);
lean_dec_ref(v_msg_2979_);
v_fileName_3005_ = lean_ctor_get(v_toBaseMessage_3003_, 0);
lean_inc_ref(v_fileName_3005_);
v_pos_3006_ = lean_ctor_get(v_toBaseMessage_3003_, 1);
lean_inc_ref(v_pos_3006_);
v_endPos_3007_ = lean_ctor_get(v_toBaseMessage_3003_, 2);
lean_inc(v_endPos_3007_);
v_severity_3008_ = lean_ctor_get_uint8(v_toBaseMessage_3003_, sizeof(void*)*5 + 1);
v_caption_3009_ = lean_ctor_get(v_toBaseMessage_3003_, 3);
lean_inc_ref(v_caption_3009_);
v_data_3010_ = lean_ctor_get(v_toBaseMessage_3003_, 4);
lean_inc(v_data_3010_);
lean_dec_ref(v_toBaseMessage_3003_);
if (v_includeEndPos_2980_ == 0)
{
lean_object* v___x_3027_; 
lean_dec(v_endPos_3007_);
v___x_3027_ = lean_box(0);
v___y_3021_ = v___x_3027_;
goto v___jp_3020_;
}
else
{
v___y_3021_ = v_endPos_3007_;
goto v___jp_3020_;
}
v___jp_2981_:
{
lean_object* v___x_2983_; lean_object* v_str_2984_; 
v___x_2983_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__1));
v_str_2984_ = lean_string_append(v___y_2982_, v___x_2983_);
return v_str_2984_;
}
v___jp_2985_:
{
uint32_t v___x_2988_; uint8_t v___x_2989_; 
v___x_2988_ = 10;
v___x_2989_ = lean_uint32_dec_eq(v___y_2987_, v___x_2988_);
if (v___x_2989_ == 0)
{
v___y_2982_ = v___y_2986_;
goto v___jp_2981_;
}
else
{
return v___y_2986_;
}
}
v___jp_2990_:
{
lean_object* v___x_2992_; lean_object* v___x_2993_; uint8_t v___x_2994_; 
v___x_2992_ = lean_string_utf8_byte_size(v_str_2991_);
v___x_2993_ = lean_unsigned_to_nat(0u);
v___x_2994_ = lean_nat_dec_eq(v___x_2992_, v___x_2993_);
if (v___x_2994_ == 0)
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
lean_inc_ref(v_str_2991_);
v___x_2995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2995_, 0, v_str_2991_);
lean_ctor_set(v___x_2995_, 1, v___x_2993_);
lean_ctor_set(v___x_2995_, 2, v___x_2992_);
v___x_2996_ = l_String_Slice_Pos_prev_x3f(v___x_2995_, v___x_2992_);
if (lean_obj_tag(v___x_2996_) == 0)
{
uint32_t v___x_2997_; 
lean_dec_ref_known(v___x_2995_, 3);
v___x_2997_ = 65;
v___y_2986_ = v_str_2991_;
v___y_2987_ = v___x_2997_;
goto v___jp_2985_;
}
else
{
lean_object* v_val_2998_; lean_object* v___x_2999_; 
v_val_2998_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_val_2998_);
lean_dec_ref_known(v___x_2996_, 1);
v___x_2999_ = l_String_Slice_Pos_get_x3f(v___x_2995_, v_val_2998_);
lean_dec(v_val_2998_);
lean_dec_ref_known(v___x_2995_, 3);
if (lean_obj_tag(v___x_2999_) == 0)
{
uint32_t v___x_3000_; 
v___x_3000_ = 65;
v___y_2986_ = v_str_2991_;
v___y_2987_ = v___x_3000_;
goto v___jp_2985_;
}
else
{
lean_object* v_val_3001_; uint32_t v___x_3002_; 
v_val_3001_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_val_3001_);
lean_dec_ref_known(v___x_2999_, 1);
v___x_3002_ = lean_unbox_uint32(v_val_3001_);
lean_dec(v_val_3001_);
v___y_2986_ = v_str_2991_;
v___y_2987_ = v___x_3002_;
goto v___jp_2985_;
}
}
}
else
{
v___y_2982_ = v_str_2991_;
goto v___jp_2981_;
}
}
v___jp_3011_:
{
switch(v_severity_3008_)
{
case 0:
{
lean_dec(v___y_3012_);
lean_dec_ref(v_pos_3006_);
lean_dec_ref(v_fileName_3005_);
lean_dec(v_kind_3004_);
v_str_2991_ = v_str_3013_;
goto v___jp_2990_;
}
case 1:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v_str_3016_; 
v___x_3014_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__0));
v___x_3015_ = l_Lean_errorNameOfKind_x3f(v_kind_3004_);
lean_dec(v_kind_3004_);
v_str_3016_ = l_Lean_mkErrorStringWithPos(v_fileName_3005_, v_pos_3006_, v_str_3013_, v___y_3012_, v___x_3014_, v___x_3015_);
lean_dec_ref(v_str_3013_);
v_str_2991_ = v_str_3016_;
goto v___jp_2990_;
}
default: 
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v_str_3019_; 
v___x_3017_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__1));
v___x_3018_ = l_Lean_errorNameOfKind_x3f(v_kind_3004_);
lean_dec(v_kind_3004_);
v_str_3019_ = l_Lean_mkErrorStringWithPos(v_fileName_3005_, v_pos_3006_, v_str_3013_, v___y_3012_, v___x_3017_, v___x_3018_);
lean_dec_ref(v_str_3013_);
v_str_2991_ = v_str_3019_;
goto v___jp_2990_;
}
}
}
v___jp_3020_:
{
lean_object* v___x_3022_; uint8_t v___x_3023_; 
v___x_3022_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_3023_ = lean_string_dec_eq(v_caption_3009_, v___x_3022_);
if (v___x_3023_ == 0)
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v_str_3026_; 
v___x_3024_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__2));
v___x_3025_ = lean_string_append(v_caption_3009_, v___x_3024_);
v_str_3026_ = lean_string_append(v___x_3025_, v_data_3010_);
lean_dec(v_data_3010_);
v___y_3012_ = v___y_3021_;
v_str_3013_ = v_str_3026_;
goto v___jp_3011_;
}
else
{
lean_dec_ref(v_caption_3009_);
v___y_3012_ = v___y_3021_;
v_str_3013_ = v_data_3010_;
goto v___jp_3011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString___boxed(lean_object* v_msg_3028_, lean_object* v_includeEndPos_3029_){
_start:
{
uint8_t v_includeEndPos_boxed_3030_; lean_object* v_res_3031_; 
v_includeEndPos_boxed_3030_ = lean_unbox(v_includeEndPos_3029_);
v_res_3031_ = l_Lean_SerialMessage_toString(v_msg_3028_, v_includeEndPos_boxed_3030_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_instToString___lam__0(lean_object* v_msg_3032_){
_start:
{
uint8_t v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = 0;
v___x_3034_ = l_Lean_SerialMessage_toString(v_msg_3032_, v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_kind(lean_object* v_msg_3037_){
_start:
{
lean_object* v_data_3038_; lean_object* v___x_3039_; 
v_data_3038_ = lean_ctor_get(v_msg_3037_, 4);
v___x_3039_ = l_Lean_MessageData_kind(v_data_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_kind___boxed(lean_object* v_msg_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l_Lean_Message_kind(v_msg_3040_);
lean_dec_ref(v_msg_3040_);
return v_res_3041_;
}
}
LEAN_EXPORT uint8_t l_Lean_Message_isTrace(lean_object* v_msg_3042_){
_start:
{
lean_object* v_data_3043_; uint8_t v___x_3044_; 
v_data_3043_ = lean_ctor_get(v_msg_3042_, 4);
v___x_3044_ = l_Lean_MessageData_isTrace(v_data_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_isTrace___boxed(lean_object* v_msg_3045_){
_start:
{
uint8_t v_res_3046_; lean_object* v_r_3047_; 
v_res_3046_ = l_Lean_Message_isTrace(v_msg_3045_);
lean_dec_ref(v_msg_3045_);
v_r_3047_ = lean_box(v_res_3046_);
return v_r_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_serialize(lean_object* v_msg_3048_){
_start:
{
lean_object* v_fileName_3050_; lean_object* v_pos_3051_; lean_object* v_endPos_3052_; uint8_t v_keepFullRange_3053_; uint8_t v_severity_3054_; uint8_t v_isSilent_3055_; lean_object* v_caption_3056_; lean_object* v_data_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3067_; 
v_fileName_3050_ = lean_ctor_get(v_msg_3048_, 0);
v_pos_3051_ = lean_ctor_get(v_msg_3048_, 1);
v_endPos_3052_ = lean_ctor_get(v_msg_3048_, 2);
v_keepFullRange_3053_ = lean_ctor_get_uint8(v_msg_3048_, sizeof(void*)*5);
v_severity_3054_ = lean_ctor_get_uint8(v_msg_3048_, sizeof(void*)*5 + 1);
v_isSilent_3055_ = lean_ctor_get_uint8(v_msg_3048_, sizeof(void*)*5 + 2);
v_caption_3056_ = lean_ctor_get(v_msg_3048_, 3);
v_data_3057_ = lean_ctor_get(v_msg_3048_, 4);
v_isSharedCheck_3067_ = !lean_is_exclusive(v_msg_3048_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3059_ = v_msg_3048_;
v_isShared_3060_ = v_isSharedCheck_3067_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_data_3057_);
lean_inc(v_caption_3056_);
lean_inc(v_endPos_3052_);
lean_inc(v_pos_3051_);
lean_inc(v_fileName_3050_);
lean_dec(v_msg_3048_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3067_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3061_; lean_object* v___x_3063_; 
lean_inc(v_data_3057_);
v___x_3061_ = l_Lean_MessageData_toString(v_data_3057_);
if (v_isShared_3060_ == 0)
{
lean_ctor_set(v___x_3059_, 4, v___x_3061_);
v___x_3063_ = v___x_3059_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_fileName_3050_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v_pos_3051_);
lean_ctor_set(v_reuseFailAlloc_3066_, 2, v_endPos_3052_);
lean_ctor_set(v_reuseFailAlloc_3066_, 3, v_caption_3056_);
lean_ctor_set(v_reuseFailAlloc_3066_, 4, v___x_3061_);
lean_ctor_set_uint8(v_reuseFailAlloc_3066_, sizeof(void*)*5, v_keepFullRange_3053_);
lean_ctor_set_uint8(v_reuseFailAlloc_3066_, sizeof(void*)*5 + 1, v_severity_3054_);
lean_ctor_set_uint8(v_reuseFailAlloc_3066_, sizeof(void*)*5 + 2, v_isSilent_3055_);
v___x_3063_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = l_Lean_MessageData_kind(v_data_3057_);
lean_dec(v_data_3057_);
v___x_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3063_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
return v___x_3065_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Message_serialize___boxed(lean_object* v_msg_3068_, lean_object* v_a_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lean_Message_serialize(v_msg_3068_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toString(lean_object* v_msg_3071_, uint8_t v_includeEndPos_3072_){
_start:
{
lean_object* v_fileName_3074_; lean_object* v_pos_3075_; lean_object* v_endPos_3076_; uint8_t v_severity_3077_; lean_object* v_caption_3078_; lean_object* v_data_3079_; lean_object* v___x_3080_; lean_object* v___y_3082_; lean_object* v___y_3086_; uint32_t v___y_3087_; lean_object* v_str_3091_; lean_object* v___x_3103_; lean_object* v___y_3105_; lean_object* v_str_3106_; lean_object* v___y_3114_; 
v_fileName_3074_ = lean_ctor_get(v_msg_3071_, 0);
lean_inc_ref(v_fileName_3074_);
v_pos_3075_ = lean_ctor_get(v_msg_3071_, 1);
lean_inc_ref(v_pos_3075_);
v_endPos_3076_ = lean_ctor_get(v_msg_3071_, 2);
lean_inc(v_endPos_3076_);
v_severity_3077_ = lean_ctor_get_uint8(v_msg_3071_, sizeof(void*)*5 + 1);
v_caption_3078_ = lean_ctor_get(v_msg_3071_, 3);
lean_inc_ref(v_caption_3078_);
v_data_3079_ = lean_ctor_get(v_msg_3071_, 4);
lean_inc_n(v_data_3079_, 2);
lean_dec_ref(v_msg_3071_);
v___x_3080_ = l_Lean_MessageData_toString(v_data_3079_);
v___x_3103_ = l_Lean_MessageData_kind(v_data_3079_);
lean_dec(v_data_3079_);
if (v_includeEndPos_3072_ == 0)
{
lean_object* v___x_3120_; 
lean_dec(v_endPos_3076_);
v___x_3120_ = lean_box(0);
v___y_3114_ = v___x_3120_;
goto v___jp_3113_;
}
else
{
v___y_3114_ = v_endPos_3076_;
goto v___jp_3113_;
}
v___jp_3081_:
{
lean_object* v___x_3083_; lean_object* v_str_3084_; 
v___x_3083_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__1));
v_str_3084_ = lean_string_append(v___y_3082_, v___x_3083_);
return v_str_3084_;
}
v___jp_3085_:
{
uint32_t v___x_3088_; uint8_t v___x_3089_; 
v___x_3088_ = 10;
v___x_3089_ = lean_uint32_dec_eq(v___y_3087_, v___x_3088_);
if (v___x_3089_ == 0)
{
v___y_3082_ = v___y_3086_;
goto v___jp_3081_;
}
else
{
return v___y_3086_;
}
}
v___jp_3090_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3092_ = lean_string_utf8_byte_size(v_str_3091_);
v___x_3093_ = lean_unsigned_to_nat(0u);
v___x_3094_ = lean_nat_dec_eq(v___x_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_inc_ref(v_str_3091_);
v___x_3095_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3095_, 0, v_str_3091_);
lean_ctor_set(v___x_3095_, 1, v___x_3093_);
lean_ctor_set(v___x_3095_, 2, v___x_3092_);
v___x_3096_ = l_String_Slice_Pos_prev_x3f(v___x_3095_, v___x_3092_);
if (lean_obj_tag(v___x_3096_) == 0)
{
uint32_t v___x_3097_; 
lean_dec_ref_known(v___x_3095_, 3);
v___x_3097_ = 65;
v___y_3086_ = v_str_3091_;
v___y_3087_ = v___x_3097_;
goto v___jp_3085_;
}
else
{
lean_object* v_val_3098_; lean_object* v___x_3099_; 
v_val_3098_ = lean_ctor_get(v___x_3096_, 0);
lean_inc(v_val_3098_);
lean_dec_ref_known(v___x_3096_, 1);
v___x_3099_ = l_String_Slice_Pos_get_x3f(v___x_3095_, v_val_3098_);
lean_dec(v_val_3098_);
lean_dec_ref_known(v___x_3095_, 3);
if (lean_obj_tag(v___x_3099_) == 0)
{
uint32_t v___x_3100_; 
v___x_3100_ = 65;
v___y_3086_ = v_str_3091_;
v___y_3087_ = v___x_3100_;
goto v___jp_3085_;
}
else
{
lean_object* v_val_3101_; uint32_t v___x_3102_; 
v_val_3101_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_val_3101_);
lean_dec_ref_known(v___x_3099_, 1);
v___x_3102_ = lean_unbox_uint32(v_val_3101_);
lean_dec(v_val_3101_);
v___y_3086_ = v_str_3091_;
v___y_3087_ = v___x_3102_;
goto v___jp_3085_;
}
}
}
else
{
v___y_3082_ = v_str_3091_;
goto v___jp_3081_;
}
}
v___jp_3104_:
{
switch(v_severity_3077_)
{
case 0:
{
lean_dec(v___y_3105_);
lean_dec(v___x_3103_);
lean_dec_ref(v_pos_3075_);
lean_dec_ref(v_fileName_3074_);
v_str_3091_ = v_str_3106_;
goto v___jp_3090_;
}
case 1:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v_str_3109_; 
v___x_3107_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__0));
v___x_3108_ = l_Lean_errorNameOfKind_x3f(v___x_3103_);
lean_dec(v___x_3103_);
v_str_3109_ = l_Lean_mkErrorStringWithPos(v_fileName_3074_, v_pos_3075_, v_str_3106_, v___y_3105_, v___x_3107_, v___x_3108_);
lean_dec_ref(v_str_3106_);
v_str_3091_ = v_str_3109_;
goto v___jp_3090_;
}
default: 
{
lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v_str_3112_; 
v___x_3110_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__1));
v___x_3111_ = l_Lean_errorNameOfKind_x3f(v___x_3103_);
lean_dec(v___x_3103_);
v_str_3112_ = l_Lean_mkErrorStringWithPos(v_fileName_3074_, v_pos_3075_, v_str_3106_, v___y_3105_, v___x_3110_, v___x_3111_);
lean_dec_ref(v_str_3106_);
v_str_3091_ = v_str_3112_;
goto v___jp_3090_;
}
}
}
v___jp_3113_:
{
lean_object* v___x_3115_; uint8_t v___x_3116_; 
v___x_3115_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_3116_ = lean_string_dec_eq(v_caption_3078_, v___x_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v_str_3119_; 
v___x_3117_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__2));
v___x_3118_ = lean_string_append(v_caption_3078_, v___x_3117_);
v_str_3119_ = lean_string_append(v___x_3118_, v___x_3080_);
lean_dec_ref(v___x_3080_);
v___y_3105_ = v___y_3114_;
v_str_3106_ = v_str_3119_;
goto v___jp_3104_;
}
else
{
lean_dec_ref(v_caption_3078_);
v___y_3105_ = v___y_3114_;
v_str_3106_ = v___x_3080_;
goto v___jp_3104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toString___boxed(lean_object* v_msg_3121_, lean_object* v_includeEndPos_3122_, lean_object* v_a_3123_){
_start:
{
uint8_t v_includeEndPos_boxed_3124_; lean_object* v_res_3125_; 
v_includeEndPos_boxed_3124_ = lean_unbox(v_includeEndPos_3122_);
v_res_3125_ = l_Lean_Message_toString(v_msg_3121_, v_includeEndPos_boxed_3124_);
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toJson(lean_object* v_msg_3126_){
_start:
{
lean_object* v_fileName_3128_; lean_object* v_pos_3129_; lean_object* v_endPos_3130_; uint8_t v_keepFullRange_3131_; uint8_t v_severity_3132_; uint8_t v_isSilent_3133_; lean_object* v_caption_3134_; lean_object* v_data_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; uint8_t v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v_fileName_3128_ = lean_ctor_get(v_msg_3126_, 0);
lean_inc_ref(v_fileName_3128_);
v_pos_3129_ = lean_ctor_get(v_msg_3126_, 1);
lean_inc_ref(v_pos_3129_);
v_endPos_3130_ = lean_ctor_get(v_msg_3126_, 2);
lean_inc(v_endPos_3130_);
v_keepFullRange_3131_ = lean_ctor_get_uint8(v_msg_3126_, sizeof(void*)*5);
v_severity_3132_ = lean_ctor_get_uint8(v_msg_3126_, sizeof(void*)*5 + 1);
v_isSilent_3133_ = lean_ctor_get_uint8(v_msg_3126_, sizeof(void*)*5 + 2);
v_caption_3134_ = lean_ctor_get(v_msg_3126_, 3);
lean_inc_ref(v_caption_3134_);
v_data_3135_ = lean_ctor_get(v_msg_3126_, 4);
lean_inc_n(v_data_3135_, 2);
lean_dec_ref(v_msg_3126_);
v___x_3136_ = l_Lean_MessageData_toString(v_data_3135_);
v___x_3137_ = l_Lean_MessageData_kind(v_data_3135_);
lean_dec(v_data_3135_);
v___x_3138_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_3139_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3139_, 0, v_fileName_3128_);
v___x_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3138_);
lean_ctor_set(v___x_3140_, 1, v___x_3139_);
v___x_3141_ = lean_box(0);
v___x_3142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3140_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_3144_ = l_Lean_instToJsonPosition_toJson(v_pos_3129_);
v___x_3145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3143_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
lean_ctor_set(v___x_3146_, 1, v___x_3141_);
v___x_3147_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_3148_ = l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(v_endPos_3130_);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
v___x_3150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
lean_ctor_set(v___x_3150_, 1, v___x_3141_);
v___x_3151_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_3152_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3152_, 0, v_keepFullRange_3131_);
v___x_3153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3151_);
lean_ctor_set(v___x_3153_, 1, v___x_3152_);
v___x_3154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3153_);
lean_ctor_set(v___x_3154_, 1, v___x_3141_);
v___x_3155_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_3156_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_3132_);
v___x_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3155_);
lean_ctor_set(v___x_3157_, 1, v___x_3156_);
v___x_3158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
lean_ctor_set(v___x_3158_, 1, v___x_3141_);
v___x_3159_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_3160_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3160_, 0, v_isSilent_3133_);
v___x_3161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3159_);
lean_ctor_set(v___x_3161_, 1, v___x_3160_);
v___x_3162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
lean_ctor_set(v___x_3162_, 1, v___x_3141_);
v___x_3163_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_3164_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3164_, 0, v_caption_3134_);
v___x_3165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3163_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
lean_ctor_set(v___x_3166_, 1, v___x_3141_);
v___x_3167_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_3168_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3136_);
v___x_3169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3167_);
lean_ctor_set(v___x_3169_, 1, v___x_3168_);
v___x_3170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3169_);
lean_ctor_set(v___x_3170_, 1, v___x_3141_);
v___x_3171_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_3172_ = 1;
v___x_3173_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3137_, v___x_3172_);
v___x_3174_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3171_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
v___x_3176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
lean_ctor_set(v___x_3176_, 1, v___x_3141_);
v___x_3177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
lean_ctor_set(v___x_3177_, 1, v___x_3141_);
v___x_3178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3170_);
lean_ctor_set(v___x_3178_, 1, v___x_3177_);
v___x_3179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3166_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v___x_3180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3162_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3158_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3154_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3150_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
v___x_3184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3146_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3142_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
v___x_3186_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_3187_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(v___x_3185_, v___x_3186_);
v___x_3188_ = l_Lean_Json_mkObj(v___x_3187_);
lean_dec(v___x_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toJson___boxed(lean_object* v_msg_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lean_Message_toJson(v_msg_3189_);
return v_res_3191_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__0(void){
_start:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3192_ = lean_unsigned_to_nat(32u);
v___x_3193_ = lean_mk_empty_array_with_capacity(v___x_3192_);
v___x_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__1(void){
_start:
{
size_t v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3195_ = ((size_t)5ULL);
v___x_3196_ = lean_unsigned_to_nat(0u);
v___x_3197_ = lean_unsigned_to_nat(32u);
v___x_3198_ = lean_mk_empty_array_with_capacity(v___x_3197_);
v___x_3199_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__0, &l_Lean_instInhabitedMessageLog_default___closed__0_once, _init_l_Lean_instInhabitedMessageLog_default___closed__0);
v___x_3200_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3200_, 0, v___x_3199_);
lean_ctor_set(v___x_3200_, 1, v___x_3198_);
lean_ctor_set(v___x_3200_, 2, v___x_3196_);
lean_ctor_set(v___x_3200_, 3, v___x_3196_);
lean_ctor_set_usize(v___x_3200_, 4, v___x_3195_);
return v___x_3200_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__2(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = l_Lean_NameSet_empty;
v___x_3202_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v___x_3203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
lean_ctor_set(v___x_3203_, 2, v___x_3201_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default(void){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__2, &l_Lean_instInhabitedMessageLog_default___closed__2_once, _init_l_Lean_instInhabitedMessageLog_default___closed__2);
return v___x_3204_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog(void){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = l_Lean_instInhabitedMessageLog_default;
return v___x_3205_;
}
}
static lean_object* _init_l_Lean_MessageLog_empty(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3206_ = lean_unsigned_to_nat(32u);
v___x_3207_ = lean_mk_empty_array_with_capacity(v___x_3206_);
lean_dec_ref(v___x_3207_);
v___x_3208_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__2, &l_Lean_instInhabitedMessageLog_default___closed__2_once, _init_l_Lean_instInhabitedMessageLog_default___closed__2);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs(lean_object* v_self_3209_){
_start:
{
lean_object* v_unreported_3210_; 
v_unreported_3210_ = lean_ctor_get(v_self_3209_, 1);
lean_inc_ref(v_unreported_3210_);
return v_unreported_3210_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs___boxed(lean_object* v_self_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l_Lean_MessageLog_msgs(v_self_3211_);
lean_dec_ref(v_self_3211_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object* v_x_3213_){
_start:
{
lean_object* v_reported_3214_; lean_object* v_unreported_3215_; lean_object* v___x_3216_; 
v_reported_3214_ = lean_ctor_get(v_x_3213_, 0);
lean_inc_ref(v_reported_3214_);
v_unreported_3215_ = lean_ctor_get(v_x_3213_, 1);
lean_inc_ref(v_unreported_3215_);
lean_dec_ref(v_x_3213_);
v___x_3216_ = l_Lean_PersistentArray_append___redArg(v_reported_3214_, v_unreported_3215_);
lean_dec_ref(v_unreported_3215_);
return v___x_3216_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasUnreported(lean_object* v_log_3217_){
_start:
{
lean_object* v_unreported_3218_; uint8_t v___x_3219_; 
v_unreported_3218_ = lean_ctor_get(v_log_3217_, 1);
v___x_3219_ = l_Lean_PersistentArray_isEmpty___redArg(v_unreported_3218_);
if (v___x_3219_ == 0)
{
uint8_t v___x_3220_; 
v___x_3220_ = 1;
return v___x_3220_;
}
else
{
uint8_t v___x_3221_; 
v___x_3221_ = 0;
return v___x_3221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasUnreported___boxed(lean_object* v_log_3222_){
_start:
{
uint8_t v_res_3223_; lean_object* v_r_3224_; 
v_res_3223_ = l_Lean_MessageLog_hasUnreported(v_log_3222_);
lean_dec_ref(v_log_3222_);
v_r_3224_ = lean_box(v_res_3223_);
return v_r_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_add(lean_object* v_msg_3225_, lean_object* v_log_3226_){
_start:
{
lean_object* v_reported_3227_; lean_object* v_unreported_3228_; lean_object* v_loggedKinds_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3237_; 
v_reported_3227_ = lean_ctor_get(v_log_3226_, 0);
v_unreported_3228_ = lean_ctor_get(v_log_3226_, 1);
v_loggedKinds_3229_ = lean_ctor_get(v_log_3226_, 2);
v_isSharedCheck_3237_ = !lean_is_exclusive(v_log_3226_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3231_ = v_log_3226_;
v_isShared_3232_ = v_isSharedCheck_3237_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_loggedKinds_3229_);
lean_inc(v_unreported_3228_);
lean_inc(v_reported_3227_);
lean_dec(v_log_3226_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3237_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3233_; lean_object* v___x_3235_; 
v___x_3233_ = l_Lean_PersistentArray_push___redArg(v_unreported_3228_, v_msg_3225_);
if (v_isShared_3232_ == 0)
{
lean_ctor_set(v___x_3231_, 1, v___x_3233_);
v___x_3235_ = v___x_3231_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_reported_3227_);
lean_ctor_set(v_reuseFailAlloc_3236_, 1, v___x_3233_);
lean_ctor_set(v_reuseFailAlloc_3236_, 2, v_loggedKinds_3229_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(lean_object* v_b_u2082_3240_, lean_object* v_x_3241_){
_start:
{
if (lean_obj_tag(v_x_3241_) == 0)
{
lean_object* v___x_3242_; 
v___x_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3242_, 0, v_b_u2082_3240_);
return v___x_3242_;
}
else
{
lean_object* v___x_3243_; 
v___x_3243_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0));
return v___x_3243_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___boxed(lean_object* v_b_u2082_3244_, lean_object* v_x_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(v_b_u2082_3244_, v_x_3245_);
lean_dec(v_x_3245_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(lean_object* v_b_u2082_3247_, lean_object* v_k_3248_, lean_object* v_t_3249_){
_start:
{
if (lean_obj_tag(v_t_3249_) == 0)
{
lean_object* v_size_3250_; lean_object* v_k_3251_; lean_object* v_v_3252_; lean_object* v_l_3253_; lean_object* v_r_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3269_; 
v_size_3250_ = lean_ctor_get(v_t_3249_, 0);
v_k_3251_ = lean_ctor_get(v_t_3249_, 1);
v_v_3252_ = lean_ctor_get(v_t_3249_, 2);
v_l_3253_ = lean_ctor_get(v_t_3249_, 3);
v_r_3254_ = lean_ctor_get(v_t_3249_, 4);
v_isSharedCheck_3269_ = !lean_is_exclusive(v_t_3249_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3256_ = v_t_3249_;
v_isShared_3257_ = v_isSharedCheck_3269_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_r_3254_);
lean_inc(v_l_3253_);
lean_inc(v_v_3252_);
lean_inc(v_k_3251_);
lean_inc(v_size_3250_);
lean_dec(v_t_3249_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3269_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
uint8_t v___x_3258_; 
v___x_3258_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3248_, v_k_3251_);
switch(v___x_3258_)
{
case 0:
{
lean_object* v_impl_3259_; lean_object* v___x_3260_; 
lean_del_object(v___x_3256_);
lean_dec(v_size_3250_);
v_impl_3259_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_b_u2082_3247_, v_k_3248_, v_l_3253_);
v___x_3260_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_3251_, v_v_3252_, v_impl_3259_, v_r_3254_);
return v___x_3260_;
}
case 1:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v_val_3263_; lean_object* v___x_3265_; 
lean_dec(v_k_3251_);
v___x_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3261_, 0, v_v_3252_);
v___x_3262_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(v_b_u2082_3247_, v___x_3261_);
lean_dec_ref_known(v___x_3261_, 1);
v_val_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_val_3263_);
lean_dec(v___x_3262_);
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 2, v_val_3263_);
lean_ctor_set(v___x_3256_, 1, v_k_3248_);
v___x_3265_ = v___x_3256_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_size_3250_);
lean_ctor_set(v_reuseFailAlloc_3266_, 1, v_k_3248_);
lean_ctor_set(v_reuseFailAlloc_3266_, 2, v_val_3263_);
lean_ctor_set(v_reuseFailAlloc_3266_, 3, v_l_3253_);
lean_ctor_set(v_reuseFailAlloc_3266_, 4, v_r_3254_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
default: 
{
lean_object* v_impl_3267_; lean_object* v___x_3268_; 
lean_del_object(v___x_3256_);
lean_dec(v_size_3250_);
v_impl_3267_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_b_u2082_3247_, v_k_3248_, v_r_3254_);
v___x_3268_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_3251_, v_v_3252_, v_l_3253_, v_impl_3267_);
return v___x_3268_;
}
}
}
}
else
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v_val_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3270_ = lean_box(0);
v___x_3271_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(v_b_u2082_3247_, v___x_3270_);
v_val_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc(v_val_3272_);
lean_dec(v___x_3271_);
v___x_3273_ = lean_unsigned_to_nat(1u);
v___x_3274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3273_);
lean_ctor_set(v___x_3274_, 1, v_k_3248_);
lean_ctor_set(v___x_3274_, 2, v_val_3272_);
lean_ctor_set(v___x_3274_, 3, v_t_3249_);
lean_ctor_set(v___x_3274_, 4, v_t_3249_);
return v___x_3274_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(lean_object* v_init_3275_, lean_object* v_x_3276_){
_start:
{
if (lean_obj_tag(v_x_3276_) == 0)
{
lean_object* v_k_3277_; lean_object* v_v_3278_; lean_object* v_l_3279_; lean_object* v_r_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_k_3277_ = lean_ctor_get(v_x_3276_, 1);
lean_inc(v_k_3277_);
v_v_3278_ = lean_ctor_get(v_x_3276_, 2);
lean_inc(v_v_3278_);
v_l_3279_ = lean_ctor_get(v_x_3276_, 3);
lean_inc(v_l_3279_);
v_r_3280_ = lean_ctor_get(v_x_3276_, 4);
lean_inc(v_r_3280_);
lean_dec_ref_known(v_x_3276_, 5);
v___x_3281_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(v_init_3275_, v_l_3279_);
v___x_3282_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_v_3278_, v_k_3277_, v___x_3281_);
v_init_3275_ = v___x_3282_;
v_x_3276_ = v_r_3280_;
goto _start;
}
else
{
return v_init_3275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_append(lean_object* v_l_u2081_3284_, lean_object* v_l_u2082_3285_){
_start:
{
lean_object* v_reported_3286_; lean_object* v_unreported_3287_; lean_object* v_loggedKinds_3288_; lean_object* v_reported_3289_; lean_object* v_unreported_3290_; lean_object* v_loggedKinds_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3301_; 
v_reported_3286_ = lean_ctor_get(v_l_u2081_3284_, 0);
lean_inc_ref(v_reported_3286_);
v_unreported_3287_ = lean_ctor_get(v_l_u2081_3284_, 1);
lean_inc_ref(v_unreported_3287_);
v_loggedKinds_3288_ = lean_ctor_get(v_l_u2081_3284_, 2);
lean_inc(v_loggedKinds_3288_);
lean_dec_ref(v_l_u2081_3284_);
v_reported_3289_ = lean_ctor_get(v_l_u2082_3285_, 0);
v_unreported_3290_ = lean_ctor_get(v_l_u2082_3285_, 1);
v_loggedKinds_3291_ = lean_ctor_get(v_l_u2082_3285_, 2);
v_isSharedCheck_3301_ = !lean_is_exclusive(v_l_u2082_3285_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3293_ = v_l_u2082_3285_;
v_isShared_3294_ = v_isSharedCheck_3301_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_loggedKinds_3291_);
lean_inc(v_unreported_3290_);
lean_inc(v_reported_3289_);
lean_dec(v_l_u2082_3285_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3301_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3299_; 
v___x_3295_ = l_Lean_PersistentArray_append___redArg(v_reported_3286_, v_reported_3289_);
lean_dec_ref(v_reported_3289_);
v___x_3296_ = l_Lean_PersistentArray_append___redArg(v_unreported_3287_, v_unreported_3290_);
lean_dec_ref(v_unreported_3290_);
v___x_3297_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(v_loggedKinds_3288_, v_loggedKinds_3291_);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 2, v___x_3297_);
lean_ctor_set(v___x_3293_, 1, v___x_3296_);
lean_ctor_set(v___x_3293_, 0, v___x_3295_);
v___x_3299_ = v___x_3293_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v___x_3295_);
lean_ctor_set(v_reuseFailAlloc_3300_, 1, v___x_3296_);
lean_ctor_set(v_reuseFailAlloc_3300_, 2, v___x_3297_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0(lean_object* v_b_u2082_3302_, lean_object* v_k_3303_, lean_object* v_t_3304_, lean_object* v_hl_3305_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_b_u2082_3302_, v_k_3303_, v_t_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1(lean_object* v_init_3307_, lean_object* v_t_3308_){
_start:
{
lean_object* v___x_3309_; 
v___x_3309_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(v_init_3307_, v_t_3308_);
return v___x_3309_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(lean_object* v_as_3312_, size_t v_i_3313_, size_t v_stop_3314_){
_start:
{
uint8_t v___x_3315_; 
v___x_3315_ = lean_usize_dec_eq(v_i_3313_, v_stop_3314_);
if (v___x_3315_ == 0)
{
lean_object* v___x_3316_; uint8_t v_severity_3317_; 
v___x_3316_ = lean_array_uget_borrowed(v_as_3312_, v_i_3313_);
v_severity_3317_ = lean_ctor_get_uint8(v___x_3316_, sizeof(void*)*5 + 1);
if (v_severity_3317_ == 2)
{
uint8_t v___x_3318_; 
v___x_3318_ = 1;
return v___x_3318_;
}
else
{
size_t v___x_3319_; size_t v___x_3320_; 
v___x_3319_ = ((size_t)1ULL);
v___x_3320_ = lean_usize_add(v_i_3313_, v___x_3319_);
v_i_3313_ = v___x_3320_;
goto _start;
}
}
else
{
uint8_t v___x_3322_; 
v___x_3322_ = 0;
return v___x_3322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1___boxed(lean_object* v_as_3323_, lean_object* v_i_3324_, lean_object* v_stop_3325_){
_start:
{
size_t v_i_boxed_3326_; size_t v_stop_boxed_3327_; uint8_t v_res_3328_; lean_object* v_r_3329_; 
v_i_boxed_3326_ = lean_unbox_usize(v_i_3324_);
lean_dec(v_i_3324_);
v_stop_boxed_3327_ = lean_unbox_usize(v_stop_3325_);
lean_dec(v_stop_3325_);
v_res_3328_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_as_3323_, v_i_boxed_3326_, v_stop_boxed_3327_);
lean_dec_ref(v_as_3323_);
v_r_3329_ = lean_box(v_res_3328_);
return v_r_3329_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(lean_object* v_x_3330_){
_start:
{
if (lean_obj_tag(v_x_3330_) == 0)
{
lean_object* v_cs_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; uint8_t v___x_3334_; 
v_cs_3331_ = lean_ctor_get(v_x_3330_, 0);
v___x_3332_ = lean_unsigned_to_nat(0u);
v___x_3333_ = lean_array_get_size(v_cs_3331_);
v___x_3334_ = lean_nat_dec_lt(v___x_3332_, v___x_3333_);
if (v___x_3334_ == 0)
{
return v___x_3334_;
}
else
{
if (v___x_3334_ == 0)
{
return v___x_3334_;
}
else
{
size_t v___x_3335_; size_t v___x_3336_; uint8_t v___x_3337_; 
v___x_3335_ = ((size_t)0ULL);
v___x_3336_ = lean_usize_of_nat(v___x_3333_);
v___x_3337_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(v_cs_3331_, v___x_3335_, v___x_3336_);
return v___x_3337_;
}
}
}
else
{
lean_object* v_vs_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; uint8_t v___x_3341_; 
v_vs_3338_ = lean_ctor_get(v_x_3330_, 0);
v___x_3339_ = lean_unsigned_to_nat(0u);
v___x_3340_ = lean_array_get_size(v_vs_3338_);
v___x_3341_ = lean_nat_dec_lt(v___x_3339_, v___x_3340_);
if (v___x_3341_ == 0)
{
return v___x_3341_;
}
else
{
if (v___x_3341_ == 0)
{
return v___x_3341_;
}
else
{
size_t v___x_3342_; size_t v___x_3343_; uint8_t v___x_3344_; 
v___x_3342_ = ((size_t)0ULL);
v___x_3343_ = lean_usize_of_nat(v___x_3340_);
v___x_3344_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_vs_3338_, v___x_3342_, v___x_3343_);
return v___x_3344_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(lean_object* v_as_3345_, size_t v_i_3346_, size_t v_stop_3347_){
_start:
{
uint8_t v___x_3348_; 
v___x_3348_ = lean_usize_dec_eq(v_i_3346_, v_stop_3347_);
if (v___x_3348_ == 0)
{
lean_object* v___x_3349_; uint8_t v___x_3350_; 
v___x_3349_ = lean_array_uget_borrowed(v_as_3345_, v_i_3346_);
v___x_3350_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v___x_3349_);
if (v___x_3350_ == 0)
{
size_t v___x_3351_; size_t v___x_3352_; 
v___x_3351_ = ((size_t)1ULL);
v___x_3352_ = lean_usize_add(v_i_3346_, v___x_3351_);
v_i_3346_ = v___x_3352_;
goto _start;
}
else
{
return v___x_3350_;
}
}
else
{
uint8_t v___x_3354_; 
v___x_3354_ = 0;
return v___x_3354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3355_, lean_object* v_i_3356_, lean_object* v_stop_3357_){
_start:
{
size_t v_i_boxed_3358_; size_t v_stop_boxed_3359_; uint8_t v_res_3360_; lean_object* v_r_3361_; 
v_i_boxed_3358_ = lean_unbox_usize(v_i_3356_);
lean_dec(v_i_3356_);
v_stop_boxed_3359_ = lean_unbox_usize(v_stop_3357_);
lean_dec(v_stop_3357_);
v_res_3360_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(v_as_3355_, v_i_boxed_3358_, v_stop_boxed_3359_);
lean_dec_ref(v_as_3355_);
v_r_3361_ = lean_box(v_res_3360_);
return v_r_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0___boxed(lean_object* v_x_3362_){
_start:
{
uint8_t v_res_3363_; lean_object* v_r_3364_; 
v_res_3363_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v_x_3362_);
lean_dec_ref(v_x_3362_);
v_r_3364_ = lean_box(v_res_3363_);
return v_r_3364_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(lean_object* v_t_3365_){
_start:
{
lean_object* v_root_3366_; lean_object* v_tail_3367_; uint8_t v___x_3368_; 
v_root_3366_ = lean_ctor_get(v_t_3365_, 0);
v_tail_3367_ = lean_ctor_get(v_t_3365_, 1);
v___x_3368_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v_root_3366_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3369_ = lean_unsigned_to_nat(0u);
v___x_3370_ = lean_array_get_size(v_tail_3367_);
v___x_3371_ = lean_nat_dec_lt(v___x_3369_, v___x_3370_);
if (v___x_3371_ == 0)
{
return v___x_3371_;
}
else
{
if (v___x_3371_ == 0)
{
return v___x_3371_;
}
else
{
size_t v___x_3372_; size_t v___x_3373_; uint8_t v___x_3374_; 
v___x_3372_ = ((size_t)0ULL);
v___x_3373_ = lean_usize_of_nat(v___x_3370_);
v___x_3374_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_tail_3367_, v___x_3372_, v___x_3373_);
return v___x_3374_;
}
}
}
else
{
return v___x_3368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0___boxed(lean_object* v_t_3375_){
_start:
{
uint8_t v_res_3376_; lean_object* v_r_3377_; 
v_res_3376_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(v_t_3375_);
lean_dec_ref(v_t_3375_);
v_r_3377_ = lean_box(v_res_3376_);
return v_r_3377_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(uint8_t v___x_3378_, lean_object* v_as_3379_, size_t v_i_3380_, size_t v_stop_3381_){
_start:
{
uint8_t v___x_3382_; 
v___x_3382_ = lean_usize_dec_eq(v_i_3380_, v_stop_3381_);
if (v___x_3382_ == 0)
{
lean_object* v___x_3383_; uint8_t v_severity_3384_; uint8_t v___x_3385_; 
v___x_3383_ = lean_array_uget_borrowed(v_as_3379_, v_i_3380_);
v_severity_3384_ = lean_ctor_get_uint8(v___x_3383_, sizeof(void*)*5 + 1);
v___x_3385_ = 1;
if (v_severity_3384_ == 2)
{
return v___x_3385_;
}
else
{
if (v___x_3378_ == 0)
{
size_t v___x_3386_; size_t v___x_3387_; 
v___x_3386_ = ((size_t)1ULL);
v___x_3387_ = lean_usize_add(v_i_3380_, v___x_3386_);
v_i_3380_ = v___x_3387_;
goto _start;
}
else
{
return v___x_3385_;
}
}
}
else
{
uint8_t v___x_3389_; 
v___x_3389_ = 0;
return v___x_3389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4___boxed(lean_object* v___x_3390_, lean_object* v_as_3391_, lean_object* v_i_3392_, lean_object* v_stop_3393_){
_start:
{
uint8_t v___x_1809__boxed_3394_; size_t v_i_boxed_3395_; size_t v_stop_boxed_3396_; uint8_t v_res_3397_; lean_object* v_r_3398_; 
v___x_1809__boxed_3394_ = lean_unbox(v___x_3390_);
v_i_boxed_3395_ = lean_unbox_usize(v_i_3392_);
lean_dec(v_i_3392_);
v_stop_boxed_3396_ = lean_unbox_usize(v_stop_3393_);
lean_dec(v_stop_3393_);
v_res_3397_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_1809__boxed_3394_, v_as_3391_, v_i_boxed_3395_, v_stop_boxed_3396_);
lean_dec_ref(v_as_3391_);
v_r_3398_ = lean_box(v_res_3397_);
return v_r_3398_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(uint8_t v___x_3399_, lean_object* v_x_3400_){
_start:
{
if (lean_obj_tag(v_x_3400_) == 0)
{
lean_object* v_cs_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; uint8_t v___x_3404_; 
v_cs_3401_ = lean_ctor_get(v_x_3400_, 0);
v___x_3402_ = lean_unsigned_to_nat(0u);
v___x_3403_ = lean_array_get_size(v_cs_3401_);
v___x_3404_ = lean_nat_dec_lt(v___x_3402_, v___x_3403_);
if (v___x_3404_ == 0)
{
return v___x_3404_;
}
else
{
if (v___x_3404_ == 0)
{
return v___x_3404_;
}
else
{
size_t v___x_3405_; size_t v___x_3406_; uint8_t v___x_3407_; 
v___x_3405_ = ((size_t)0ULL);
v___x_3406_ = lean_usize_of_nat(v___x_3403_);
v___x_3407_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(v___x_3399_, v_cs_3401_, v___x_3405_, v___x_3406_);
return v___x_3407_;
}
}
}
else
{
lean_object* v_vs_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; uint8_t v___x_3411_; 
v_vs_3408_ = lean_ctor_get(v_x_3400_, 0);
v___x_3409_ = lean_unsigned_to_nat(0u);
v___x_3410_ = lean_array_get_size(v_vs_3408_);
v___x_3411_ = lean_nat_dec_lt(v___x_3409_, v___x_3410_);
if (v___x_3411_ == 0)
{
return v___x_3411_;
}
else
{
if (v___x_3411_ == 0)
{
return v___x_3411_;
}
else
{
size_t v___x_3412_; size_t v___x_3413_; uint8_t v___x_3414_; 
v___x_3412_ = ((size_t)0ULL);
v___x_3413_ = lean_usize_of_nat(v___x_3410_);
v___x_3414_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_3399_, v_vs_3408_, v___x_3412_, v___x_3413_);
return v___x_3414_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(uint8_t v___x_3415_, lean_object* v_as_3416_, size_t v_i_3417_, size_t v_stop_3418_){
_start:
{
uint8_t v___x_3419_; 
v___x_3419_ = lean_usize_dec_eq(v_i_3417_, v_stop_3418_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3420_ = lean_array_uget_borrowed(v_as_3416_, v_i_3417_);
v___x_3421_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_3415_, v___x_3420_);
if (v___x_3421_ == 0)
{
size_t v___x_3422_; size_t v___x_3423_; 
v___x_3422_ = ((size_t)1ULL);
v___x_3423_ = lean_usize_add(v_i_3417_, v___x_3422_);
v_i_3417_ = v___x_3423_;
goto _start;
}
else
{
return v___x_3421_;
}
}
else
{
uint8_t v___x_3425_; 
v___x_3425_ = 0;
return v___x_3425_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5___boxed(lean_object* v___x_3426_, lean_object* v_as_3427_, lean_object* v_i_3428_, lean_object* v_stop_3429_){
_start:
{
uint8_t v___x_1826__boxed_3430_; size_t v_i_boxed_3431_; size_t v_stop_boxed_3432_; uint8_t v_res_3433_; lean_object* v_r_3434_; 
v___x_1826__boxed_3430_ = lean_unbox(v___x_3426_);
v_i_boxed_3431_ = lean_unbox_usize(v_i_3428_);
lean_dec(v_i_3428_);
v_stop_boxed_3432_ = lean_unbox_usize(v_stop_3429_);
lean_dec(v_stop_3429_);
v_res_3433_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(v___x_1826__boxed_3430_, v_as_3427_, v_i_boxed_3431_, v_stop_boxed_3432_);
lean_dec_ref(v_as_3427_);
v_r_3434_ = lean_box(v_res_3433_);
return v_r_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3___boxed(lean_object* v___x_3435_, lean_object* v_x_3436_){
_start:
{
uint8_t v___x_1834__boxed_3437_; uint8_t v_res_3438_; lean_object* v_r_3439_; 
v___x_1834__boxed_3437_ = lean_unbox(v___x_3435_);
v_res_3438_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_1834__boxed_3437_, v_x_3436_);
lean_dec_ref(v_x_3436_);
v_r_3439_ = lean_box(v_res_3438_);
return v_r_3439_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(uint8_t v___x_3440_, lean_object* v_t_3441_){
_start:
{
lean_object* v_root_3442_; lean_object* v_tail_3443_; uint8_t v___x_3444_; 
v_root_3442_ = lean_ctor_get(v_t_3441_, 0);
v_tail_3443_ = lean_ctor_get(v_t_3441_, 1);
v___x_3444_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_3440_, v_root_3442_);
if (v___x_3444_ == 0)
{
lean_object* v___x_3445_; lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3445_ = lean_unsigned_to_nat(0u);
v___x_3446_ = lean_array_get_size(v_tail_3443_);
v___x_3447_ = lean_nat_dec_lt(v___x_3445_, v___x_3446_);
if (v___x_3447_ == 0)
{
return v___x_3447_;
}
else
{
if (v___x_3447_ == 0)
{
return v___x_3447_;
}
else
{
size_t v___x_3448_; size_t v___x_3449_; uint8_t v___x_3450_; 
v___x_3448_ = ((size_t)0ULL);
v___x_3449_ = lean_usize_of_nat(v___x_3446_);
v___x_3450_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_3440_, v_tail_3443_, v___x_3448_, v___x_3449_);
return v___x_3450_;
}
}
}
else
{
return v___x_3444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1___boxed(lean_object* v___x_3451_, lean_object* v_t_3452_){
_start:
{
uint8_t v___x_1877__boxed_3453_; uint8_t v_res_3454_; lean_object* v_r_3455_; 
v___x_1877__boxed_3453_ = lean_unbox(v___x_3451_);
v_res_3454_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(v___x_1877__boxed_3453_, v_t_3452_);
lean_dec_ref(v_t_3452_);
v_r_3455_ = lean_box(v_res_3454_);
return v_r_3455_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasErrors(lean_object* v_log_3456_){
_start:
{
lean_object* v_reported_3457_; lean_object* v_unreported_3458_; uint8_t v___x_3459_; 
v_reported_3457_ = lean_ctor_get(v_log_3456_, 0);
v_unreported_3458_ = lean_ctor_get(v_log_3456_, 1);
v___x_3459_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(v_reported_3457_);
if (v___x_3459_ == 0)
{
uint8_t v___x_3460_; 
v___x_3460_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(v___x_3459_, v_unreported_3458_);
return v___x_3460_;
}
else
{
return v___x_3459_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasErrors___boxed(lean_object* v_log_3461_){
_start:
{
uint8_t v_res_3462_; lean_object* v_r_3463_; 
v_res_3462_ = l_Lean_MessageLog_hasErrors(v_log_3461_);
lean_dec_ref(v_log_3461_);
v_r_3463_ = lean_box(v_res_3462_);
return v_r_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_markAllReported(lean_object* v_log_3464_){
_start:
{
lean_object* v_reported_3465_; lean_object* v_unreported_3466_; lean_object* v_loggedKinds_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3478_; 
v_reported_3465_ = lean_ctor_get(v_log_3464_, 0);
v_unreported_3466_ = lean_ctor_get(v_log_3464_, 1);
v_loggedKinds_3467_ = lean_ctor_get(v_log_3464_, 2);
v_isSharedCheck_3478_ = !lean_is_exclusive(v_log_3464_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3469_ = v_log_3464_;
v_isShared_3470_ = v_isSharedCheck_3478_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_loggedKinds_3467_);
lean_inc(v_unreported_3466_);
lean_inc(v_reported_3465_);
lean_dec(v_log_3464_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3478_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3476_; 
v___x_3471_ = l_Lean_PersistentArray_append___redArg(v_reported_3465_, v_unreported_3466_);
lean_dec_ref(v_unreported_3466_);
v___x_3472_ = lean_unsigned_to_nat(32u);
v___x_3473_ = lean_mk_empty_array_with_capacity(v___x_3472_);
lean_dec_ref(v___x_3473_);
v___x_3474_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v___x_3474_);
lean_ctor_set(v___x_3469_, 0, v___x_3471_);
v___x_3476_ = v___x_3469_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v___x_3471_);
lean_ctor_set(v_reuseFailAlloc_3477_, 1, v___x_3474_);
lean_ctor_set(v_reuseFailAlloc_3477_, 2, v_loggedKinds_3467_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(size_t v_sz_3479_, size_t v_i_3480_, lean_object* v_bs_3481_){
_start:
{
uint8_t v___x_3482_; 
v___x_3482_ = lean_usize_dec_lt(v_i_3480_, v_sz_3479_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; 
v___x_3483_ = l_unsafeCast___redArg(v_bs_3481_);
lean_dec_ref(v_bs_3481_);
return v___x_3483_;
}
else
{
lean_object* v_v_3484_; lean_object* v___x_3485_; lean_object* v_fileName_3486_; lean_object* v_pos_3487_; lean_object* v_endPos_3488_; uint8_t v_keepFullRange_3489_; uint8_t v_severity_3490_; uint8_t v_isSilent_3491_; lean_object* v_caption_3492_; lean_object* v_data_3493_; lean_object* v___x_3494_; lean_object* v_bs_x27_3495_; lean_object* v___y_3497_; 
v_v_3484_ = lean_array_uget_borrowed(v_bs_3481_, v_i_3480_);
v___x_3485_ = l_unsafeCast___redArg(v_v_3484_);
v_fileName_3486_ = lean_ctor_get(v___x_3485_, 0);
lean_inc_ref(v_fileName_3486_);
v_pos_3487_ = lean_ctor_get(v___x_3485_, 1);
lean_inc_ref(v_pos_3487_);
v_endPos_3488_ = lean_ctor_get(v___x_3485_, 2);
lean_inc(v_endPos_3488_);
v_keepFullRange_3489_ = lean_ctor_get_uint8(v___x_3485_, sizeof(void*)*5);
v_severity_3490_ = lean_ctor_get_uint8(v___x_3485_, sizeof(void*)*5 + 1);
v_isSilent_3491_ = lean_ctor_get_uint8(v___x_3485_, sizeof(void*)*5 + 2);
v_caption_3492_ = lean_ctor_get(v___x_3485_, 3);
lean_inc_ref(v_caption_3492_);
v_data_3493_ = lean_ctor_get(v___x_3485_, 4);
lean_inc(v_data_3493_);
v___x_3494_ = lean_unsigned_to_nat(0u);
v_bs_x27_3495_ = lean_array_uset(v_bs_3481_, v_i_3480_, v___x_3494_);
if (v_severity_3490_ == 2)
{
lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3510_; 
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3510_ == 0)
{
lean_object* v_unused_3511_; lean_object* v_unused_3512_; lean_object* v_unused_3513_; lean_object* v_unused_3514_; lean_object* v_unused_3515_; 
v_unused_3511_ = lean_ctor_get(v___x_3485_, 4);
lean_dec(v_unused_3511_);
v_unused_3512_ = lean_ctor_get(v___x_3485_, 3);
lean_dec(v_unused_3512_);
v_unused_3513_ = lean_ctor_get(v___x_3485_, 2);
lean_dec(v_unused_3513_);
v_unused_3514_ = lean_ctor_get(v___x_3485_, 1);
lean_dec(v_unused_3514_);
v_unused_3515_ = lean_ctor_get(v___x_3485_, 0);
lean_dec(v_unused_3515_);
v___x_3504_ = v___x_3485_;
v_isShared_3505_ = v_isSharedCheck_3510_;
goto v_resetjp_3503_;
}
else
{
lean_dec(v___x_3485_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3510_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
uint8_t v___x_3506_; lean_object* v___x_3508_; 
v___x_3506_ = 1;
if (v_isShared_3505_ == 0)
{
v___x_3508_ = v___x_3504_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_fileName_3486_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v_pos_3487_);
lean_ctor_set(v_reuseFailAlloc_3509_, 2, v_endPos_3488_);
lean_ctor_set(v_reuseFailAlloc_3509_, 3, v_caption_3492_);
lean_ctor_set(v_reuseFailAlloc_3509_, 4, v_data_3493_);
lean_ctor_set_uint8(v_reuseFailAlloc_3509_, sizeof(void*)*5, v_keepFullRange_3489_);
lean_ctor_set_uint8(v_reuseFailAlloc_3509_, sizeof(void*)*5 + 2, v_isSilent_3491_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_ctor_set_uint8(v___x_3508_, sizeof(void*)*5 + 1, v___x_3506_);
v___y_3497_ = v___x_3508_;
goto v___jp_3496_;
}
}
}
else
{
lean_dec(v_data_3493_);
lean_dec_ref(v_caption_3492_);
lean_dec(v_endPos_3488_);
lean_dec_ref(v_pos_3487_);
lean_dec_ref(v_fileName_3486_);
v___y_3497_ = v___x_3485_;
goto v___jp_3496_;
}
v___jp_3496_:
{
size_t v___x_3498_; size_t v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3498_ = ((size_t)1ULL);
v___x_3499_ = lean_usize_add(v_i_3480_, v___x_3498_);
v___x_3500_ = l_unsafeCast___redArg(v___y_3497_);
lean_dec_ref(v___y_3497_);
v___x_3501_ = lean_array_uset(v_bs_x27_3495_, v_i_3480_, v___x_3500_);
v_i_3480_ = v___x_3499_;
v_bs_3481_ = v___x_3501_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1___boxed(lean_object* v_sz_3516_, lean_object* v_i_3517_, lean_object* v_bs_3518_){
_start:
{
size_t v_sz_boxed_3519_; size_t v_i_boxed_3520_; lean_object* v_res_3521_; 
v_sz_boxed_3519_ = lean_unbox_usize(v_sz_3516_);
lean_dec(v_sz_3516_);
v_i_boxed_3520_ = lean_unbox_usize(v_i_3517_);
lean_dec(v_i_3517_);
v_res_3521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_boxed_3519_, v_i_boxed_3520_, v_bs_3518_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(size_t v_sz_3522_, size_t v_i_3523_, lean_object* v_bs_3524_){
_start:
{
uint8_t v___x_3525_; 
v___x_3525_ = lean_usize_dec_lt(v_i_3523_, v_sz_3522_);
if (v___x_3525_ == 0)
{
lean_object* v___x_3526_; 
v___x_3526_ = l_unsafeCast___redArg(v_bs_3524_);
lean_dec_ref(v_bs_3524_);
return v___x_3526_;
}
else
{
lean_object* v_v_3527_; lean_object* v___x_3528_; lean_object* v_bs_x27_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; size_t v___x_3532_; size_t v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v_v_3527_ = lean_array_uget(v_bs_3524_, v_i_3523_);
v___x_3528_ = lean_unsigned_to_nat(0u);
v_bs_x27_3529_ = lean_array_uset(v_bs_3524_, v_i_3523_, v___x_3528_);
v___x_3530_ = l_unsafeCast___redArg(v_v_3527_);
lean_dec(v_v_3527_);
v___x_3531_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(v___x_3530_);
v___x_3532_ = ((size_t)1ULL);
v___x_3533_ = lean_usize_add(v_i_3523_, v___x_3532_);
v___x_3534_ = l_unsafeCast___redArg(v___x_3531_);
lean_dec_ref(v___x_3531_);
v___x_3535_ = lean_array_uset(v_bs_x27_3529_, v_i_3523_, v___x_3534_);
v_i_3523_ = v___x_3533_;
v_bs_3524_ = v___x_3535_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(lean_object* v_x_3537_){
_start:
{
if (lean_obj_tag(v_x_3537_) == 0)
{
lean_object* v_cs_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3550_; 
v_cs_3538_ = lean_ctor_get(v_x_3537_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_x_3537_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3540_ = v_x_3537_;
v_isShared_3541_ = v_isSharedCheck_3550_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_cs_3538_);
lean_dec(v_x_3537_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3550_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
size_t v_sz_3542_; size_t v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3548_; 
v_sz_3542_ = lean_array_size(v_cs_3538_);
v___x_3543_ = ((size_t)0ULL);
v___x_3544_ = l_unsafeCast___redArg(v_cs_3538_);
lean_dec_ref(v_cs_3538_);
v___x_3545_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(v_sz_3542_, v___x_3543_, v___x_3544_);
v___x_3546_ = l_unsafeCast___redArg(v___x_3545_);
lean_dec_ref(v___x_3545_);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 0, v___x_3546_);
v___x_3548_ = v___x_3540_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3546_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
else
{
lean_object* v_vs_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3563_; 
v_vs_3551_ = lean_ctor_get(v_x_3537_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v_x_3537_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3553_ = v_x_3537_;
v_isShared_3554_ = v_isSharedCheck_3563_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_vs_3551_);
lean_dec(v_x_3537_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3563_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
size_t v_sz_3555_; size_t v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3561_; 
v_sz_3555_ = lean_array_size(v_vs_3551_);
v___x_3556_ = ((size_t)0ULL);
v___x_3557_ = l_unsafeCast___redArg(v_vs_3551_);
lean_dec_ref(v_vs_3551_);
v___x_3558_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_3555_, v___x_3556_, v___x_3557_);
v___x_3559_ = l_unsafeCast___redArg(v___x_3558_);
lean_dec_ref(v___x_3558_);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v___x_3559_);
v___x_3561_ = v___x_3553_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3559_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3564_, lean_object* v_i_3565_, lean_object* v_bs_3566_){
_start:
{
size_t v_sz_boxed_3567_; size_t v_i_boxed_3568_; lean_object* v_res_3569_; 
v_sz_boxed_3567_ = lean_unbox_usize(v_sz_3564_);
lean_dec(v_sz_3564_);
v_i_boxed_3568_ = lean_unbox_usize(v_i_3565_);
lean_dec(v_i_3565_);
v_res_3569_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(v_sz_boxed_3567_, v_i_boxed_3568_, v_bs_3566_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(lean_object* v_t_3570_){
_start:
{
lean_object* v_root_3571_; lean_object* v_tail_3572_; lean_object* v_size_3573_; size_t v_shift_3574_; lean_object* v_tailOff_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3588_; 
v_root_3571_ = lean_ctor_get(v_t_3570_, 0);
v_tail_3572_ = lean_ctor_get(v_t_3570_, 1);
v_size_3573_ = lean_ctor_get(v_t_3570_, 2);
v_shift_3574_ = lean_ctor_get_usize(v_t_3570_, 4);
v_tailOff_3575_ = lean_ctor_get(v_t_3570_, 3);
v_isSharedCheck_3588_ = !lean_is_exclusive(v_t_3570_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3577_ = v_t_3570_;
v_isShared_3578_ = v_isSharedCheck_3588_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_tailOff_3575_);
lean_inc(v_size_3573_);
lean_inc(v_tail_3572_);
lean_inc(v_root_3571_);
lean_dec(v_t_3570_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3588_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; size_t v_sz_3580_; size_t v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3586_; 
v___x_3579_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(v_root_3571_);
v_sz_3580_ = lean_array_size(v_tail_3572_);
v___x_3581_ = ((size_t)0ULL);
v___x_3582_ = l_unsafeCast___redArg(v_tail_3572_);
lean_dec_ref(v_tail_3572_);
v___x_3583_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_3580_, v___x_3581_, v___x_3582_);
v___x_3584_ = l_unsafeCast___redArg(v___x_3583_);
lean_dec_ref(v___x_3583_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 1, v___x_3584_);
lean_ctor_set(v___x_3577_, 0, v___x_3579_);
v___x_3586_ = v___x_3577_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v___x_3584_);
lean_ctor_set(v_reuseFailAlloc_3587_, 2, v_size_3573_);
lean_ctor_set(v_reuseFailAlloc_3587_, 3, v_tailOff_3575_);
lean_ctor_set_usize(v_reuseFailAlloc_3587_, 4, v_shift_3574_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToWarnings(lean_object* v_log_3589_){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v_unreported_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3602_; 
v___x_3590_ = lean_unsigned_to_nat(32u);
v___x_3591_ = lean_mk_empty_array_with_capacity(v___x_3590_);
lean_dec_ref(v___x_3591_);
v___x_3592_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3593_ = lean_ctor_get(v_log_3589_, 1);
v_isSharedCheck_3602_ = !lean_is_exclusive(v_log_3589_);
if (v_isSharedCheck_3602_ == 0)
{
lean_object* v_unused_3603_; lean_object* v_unused_3604_; 
v_unused_3603_ = lean_ctor_get(v_log_3589_, 2);
lean_dec(v_unused_3603_);
v_unused_3604_ = lean_ctor_get(v_log_3589_, 0);
lean_dec(v_unused_3604_);
v___x_3595_ = v_log_3589_;
v_isShared_3596_ = v_isSharedCheck_3602_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_unreported_3593_);
lean_dec(v_log_3589_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3602_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3600_; 
v___x_3597_ = l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(v_unreported_3593_);
v___x_3598_ = l_Lean_NameSet_empty;
if (v_isShared_3596_ == 0)
{
lean_ctor_set(v___x_3595_, 2, v___x_3598_);
lean_ctor_set(v___x_3595_, 1, v___x_3597_);
lean_ctor_set(v___x_3595_, 0, v___x_3592_);
v___x_3600_ = v___x_3595_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v___x_3592_);
lean_ctor_set(v_reuseFailAlloc_3601_, 1, v___x_3597_);
lean_ctor_set(v_reuseFailAlloc_3601_, 2, v___x_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(size_t v_sz_3605_, size_t v_i_3606_, lean_object* v_bs_3607_){
_start:
{
uint8_t v___x_3608_; 
v___x_3608_ = lean_usize_dec_lt(v_i_3606_, v_sz_3605_);
if (v___x_3608_ == 0)
{
lean_object* v___x_3609_; 
v___x_3609_ = l_unsafeCast___redArg(v_bs_3607_);
lean_dec_ref(v_bs_3607_);
return v___x_3609_;
}
else
{
lean_object* v_v_3610_; lean_object* v___x_3611_; lean_object* v_fileName_3612_; lean_object* v_pos_3613_; lean_object* v_endPos_3614_; uint8_t v_keepFullRange_3615_; uint8_t v_severity_3616_; uint8_t v_isSilent_3617_; lean_object* v_caption_3618_; lean_object* v_data_3619_; lean_object* v___x_3620_; lean_object* v_bs_x27_3621_; lean_object* v___y_3623_; 
v_v_3610_ = lean_array_uget_borrowed(v_bs_3607_, v_i_3606_);
v___x_3611_ = l_unsafeCast___redArg(v_v_3610_);
v_fileName_3612_ = lean_ctor_get(v___x_3611_, 0);
lean_inc_ref(v_fileName_3612_);
v_pos_3613_ = lean_ctor_get(v___x_3611_, 1);
lean_inc_ref(v_pos_3613_);
v_endPos_3614_ = lean_ctor_get(v___x_3611_, 2);
lean_inc(v_endPos_3614_);
v_keepFullRange_3615_ = lean_ctor_get_uint8(v___x_3611_, sizeof(void*)*5);
v_severity_3616_ = lean_ctor_get_uint8(v___x_3611_, sizeof(void*)*5 + 1);
v_isSilent_3617_ = lean_ctor_get_uint8(v___x_3611_, sizeof(void*)*5 + 2);
v_caption_3618_ = lean_ctor_get(v___x_3611_, 3);
lean_inc_ref(v_caption_3618_);
v_data_3619_ = lean_ctor_get(v___x_3611_, 4);
lean_inc(v_data_3619_);
v___x_3620_ = lean_unsigned_to_nat(0u);
v_bs_x27_3621_ = lean_array_uset(v_bs_3607_, v_i_3606_, v___x_3620_);
if (v_severity_3616_ == 2)
{
lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3636_; 
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3636_ == 0)
{
lean_object* v_unused_3637_; lean_object* v_unused_3638_; lean_object* v_unused_3639_; lean_object* v_unused_3640_; lean_object* v_unused_3641_; 
v_unused_3637_ = lean_ctor_get(v___x_3611_, 4);
lean_dec(v_unused_3637_);
v_unused_3638_ = lean_ctor_get(v___x_3611_, 3);
lean_dec(v_unused_3638_);
v_unused_3639_ = lean_ctor_get(v___x_3611_, 2);
lean_dec(v_unused_3639_);
v_unused_3640_ = lean_ctor_get(v___x_3611_, 1);
lean_dec(v_unused_3640_);
v_unused_3641_ = lean_ctor_get(v___x_3611_, 0);
lean_dec(v_unused_3641_);
v___x_3630_ = v___x_3611_;
v_isShared_3631_ = v_isSharedCheck_3636_;
goto v_resetjp_3629_;
}
else
{
lean_dec(v___x_3611_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3636_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
uint8_t v___x_3632_; lean_object* v___x_3634_; 
v___x_3632_ = 0;
if (v_isShared_3631_ == 0)
{
v___x_3634_ = v___x_3630_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_fileName_3612_);
lean_ctor_set(v_reuseFailAlloc_3635_, 1, v_pos_3613_);
lean_ctor_set(v_reuseFailAlloc_3635_, 2, v_endPos_3614_);
lean_ctor_set(v_reuseFailAlloc_3635_, 3, v_caption_3618_);
lean_ctor_set(v_reuseFailAlloc_3635_, 4, v_data_3619_);
lean_ctor_set_uint8(v_reuseFailAlloc_3635_, sizeof(void*)*5, v_keepFullRange_3615_);
lean_ctor_set_uint8(v_reuseFailAlloc_3635_, sizeof(void*)*5 + 2, v_isSilent_3617_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
lean_ctor_set_uint8(v___x_3634_, sizeof(void*)*5 + 1, v___x_3632_);
v___y_3623_ = v___x_3634_;
goto v___jp_3622_;
}
}
}
else
{
lean_dec(v_data_3619_);
lean_dec_ref(v_caption_3618_);
lean_dec(v_endPos_3614_);
lean_dec_ref(v_pos_3613_);
lean_dec_ref(v_fileName_3612_);
v___y_3623_ = v___x_3611_;
goto v___jp_3622_;
}
v___jp_3622_:
{
size_t v___x_3624_; size_t v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___x_3624_ = ((size_t)1ULL);
v___x_3625_ = lean_usize_add(v_i_3606_, v___x_3624_);
v___x_3626_ = l_unsafeCast___redArg(v___y_3623_);
lean_dec_ref(v___y_3623_);
v___x_3627_ = lean_array_uset(v_bs_x27_3621_, v_i_3606_, v___x_3626_);
v_i_3606_ = v___x_3625_;
v_bs_3607_ = v___x_3627_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1___boxed(lean_object* v_sz_3642_, lean_object* v_i_3643_, lean_object* v_bs_3644_){
_start:
{
size_t v_sz_boxed_3645_; size_t v_i_boxed_3646_; lean_object* v_res_3647_; 
v_sz_boxed_3645_ = lean_unbox_usize(v_sz_3642_);
lean_dec(v_sz_3642_);
v_i_boxed_3646_ = lean_unbox_usize(v_i_3643_);
lean_dec(v_i_3643_);
v_res_3647_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_boxed_3645_, v_i_boxed_3646_, v_bs_3644_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(size_t v_sz_3648_, size_t v_i_3649_, lean_object* v_bs_3650_){
_start:
{
uint8_t v___x_3651_; 
v___x_3651_ = lean_usize_dec_lt(v_i_3649_, v_sz_3648_);
if (v___x_3651_ == 0)
{
lean_object* v___x_3652_; 
v___x_3652_ = l_unsafeCast___redArg(v_bs_3650_);
lean_dec_ref(v_bs_3650_);
return v___x_3652_;
}
else
{
lean_object* v_v_3653_; lean_object* v___x_3654_; lean_object* v_bs_x27_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; size_t v___x_3658_; size_t v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v_v_3653_ = lean_array_uget(v_bs_3650_, v_i_3649_);
v___x_3654_ = lean_unsigned_to_nat(0u);
v_bs_x27_3655_ = lean_array_uset(v_bs_3650_, v_i_3649_, v___x_3654_);
v___x_3656_ = l_unsafeCast___redArg(v_v_3653_);
lean_dec(v_v_3653_);
v___x_3657_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(v___x_3656_);
v___x_3658_ = ((size_t)1ULL);
v___x_3659_ = lean_usize_add(v_i_3649_, v___x_3658_);
v___x_3660_ = l_unsafeCast___redArg(v___x_3657_);
lean_dec_ref(v___x_3657_);
v___x_3661_ = lean_array_uset(v_bs_x27_3655_, v_i_3649_, v___x_3660_);
v_i_3649_ = v___x_3659_;
v_bs_3650_ = v___x_3661_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(lean_object* v_x_3663_){
_start:
{
if (lean_obj_tag(v_x_3663_) == 0)
{
lean_object* v_cs_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3676_; 
v_cs_3664_ = lean_ctor_get(v_x_3663_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v_x_3663_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3666_ = v_x_3663_;
v_isShared_3667_ = v_isSharedCheck_3676_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_cs_3664_);
lean_dec(v_x_3663_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3676_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
size_t v_sz_3668_; size_t v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3674_; 
v_sz_3668_ = lean_array_size(v_cs_3664_);
v___x_3669_ = ((size_t)0ULL);
v___x_3670_ = l_unsafeCast___redArg(v_cs_3664_);
lean_dec_ref(v_cs_3664_);
v___x_3671_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(v_sz_3668_, v___x_3669_, v___x_3670_);
v___x_3672_ = l_unsafeCast___redArg(v___x_3671_);
lean_dec_ref(v___x_3671_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v___x_3672_);
v___x_3674_ = v___x_3666_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3672_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
else
{
lean_object* v_vs_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3689_; 
v_vs_3677_ = lean_ctor_get(v_x_3663_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v_x_3663_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3679_ = v_x_3663_;
v_isShared_3680_ = v_isSharedCheck_3689_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_vs_3677_);
lean_dec(v_x_3663_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3689_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
size_t v_sz_3681_; size_t v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3687_; 
v_sz_3681_ = lean_array_size(v_vs_3677_);
v___x_3682_ = ((size_t)0ULL);
v___x_3683_ = l_unsafeCast___redArg(v_vs_3677_);
lean_dec_ref(v_vs_3677_);
v___x_3684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_3681_, v___x_3682_, v___x_3683_);
v___x_3685_ = l_unsafeCast___redArg(v___x_3684_);
lean_dec_ref(v___x_3684_);
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 0, v___x_3685_);
v___x_3687_ = v___x_3679_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3685_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3690_, lean_object* v_i_3691_, lean_object* v_bs_3692_){
_start:
{
size_t v_sz_boxed_3693_; size_t v_i_boxed_3694_; lean_object* v_res_3695_; 
v_sz_boxed_3693_ = lean_unbox_usize(v_sz_3690_);
lean_dec(v_sz_3690_);
v_i_boxed_3694_ = lean_unbox_usize(v_i_3691_);
lean_dec(v_i_3691_);
v_res_3695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(v_sz_boxed_3693_, v_i_boxed_3694_, v_bs_3692_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(lean_object* v_t_3696_){
_start:
{
lean_object* v_root_3697_; lean_object* v_tail_3698_; lean_object* v_size_3699_; size_t v_shift_3700_; lean_object* v_tailOff_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3714_; 
v_root_3697_ = lean_ctor_get(v_t_3696_, 0);
v_tail_3698_ = lean_ctor_get(v_t_3696_, 1);
v_size_3699_ = lean_ctor_get(v_t_3696_, 2);
v_shift_3700_ = lean_ctor_get_usize(v_t_3696_, 4);
v_tailOff_3701_ = lean_ctor_get(v_t_3696_, 3);
v_isSharedCheck_3714_ = !lean_is_exclusive(v_t_3696_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3703_ = v_t_3696_;
v_isShared_3704_ = v_isSharedCheck_3714_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_tailOff_3701_);
lean_inc(v_size_3699_);
lean_inc(v_tail_3698_);
lean_inc(v_root_3697_);
lean_dec(v_t_3696_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3714_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; size_t v_sz_3706_; size_t v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3712_; 
v___x_3705_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(v_root_3697_);
v_sz_3706_ = lean_array_size(v_tail_3698_);
v___x_3707_ = ((size_t)0ULL);
v___x_3708_ = l_unsafeCast___redArg(v_tail_3698_);
lean_dec_ref(v_tail_3698_);
v___x_3709_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_3706_, v___x_3707_, v___x_3708_);
v___x_3710_ = l_unsafeCast___redArg(v___x_3709_);
lean_dec_ref(v___x_3709_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 1, v___x_3710_);
lean_ctor_set(v___x_3703_, 0, v___x_3705_);
v___x_3712_ = v___x_3703_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v___x_3705_);
lean_ctor_set(v_reuseFailAlloc_3713_, 1, v___x_3710_);
lean_ctor_set(v_reuseFailAlloc_3713_, 2, v_size_3699_);
lean_ctor_set(v_reuseFailAlloc_3713_, 3, v_tailOff_3701_);
lean_ctor_set_usize(v_reuseFailAlloc_3713_, 4, v_shift_3700_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
return v___x_3712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToInfos(lean_object* v_log_3715_){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v_unreported_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3728_; 
v___x_3716_ = lean_unsigned_to_nat(32u);
v___x_3717_ = lean_mk_empty_array_with_capacity(v___x_3716_);
lean_dec_ref(v___x_3717_);
v___x_3718_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3719_ = lean_ctor_get(v_log_3715_, 1);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_log_3715_);
if (v_isSharedCheck_3728_ == 0)
{
lean_object* v_unused_3729_; lean_object* v_unused_3730_; 
v_unused_3729_ = lean_ctor_get(v_log_3715_, 2);
lean_dec(v_unused_3729_);
v_unused_3730_ = lean_ctor_get(v_log_3715_, 0);
lean_dec(v_unused_3730_);
v___x_3721_ = v_log_3715_;
v_isShared_3722_ = v_isSharedCheck_3728_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_unreported_3719_);
lean_dec(v_log_3715_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3728_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3726_; 
v___x_3723_ = l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(v_unreported_3719_);
v___x_3724_ = l_Lean_NameSet_empty;
if (v_isShared_3722_ == 0)
{
lean_ctor_set(v___x_3721_, 2, v___x_3724_);
lean_ctor_set(v___x_3721_, 1, v___x_3723_);
lean_ctor_set(v___x_3721_, 0, v___x_3718_);
v___x_3726_ = v___x_3721_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3718_);
lean_ctor_set(v_reuseFailAlloc_3727_, 1, v___x_3723_);
lean_ctor_set(v_reuseFailAlloc_3727_, 2, v___x_3724_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(lean_object* v_as_3731_, size_t v_i_3732_, size_t v_stop_3733_, lean_object* v_b_3734_){
_start:
{
lean_object* v___y_3736_; uint8_t v___x_3740_; 
v___x_3740_ = lean_usize_dec_eq(v_i_3732_, v_stop_3733_);
if (v___x_3740_ == 0)
{
lean_object* v___x_3741_; uint8_t v_severity_3742_; 
v___x_3741_ = lean_array_uget_borrowed(v_as_3731_, v_i_3732_);
v_severity_3742_ = lean_ctor_get_uint8(v___x_3741_, sizeof(void*)*5 + 1);
if (v_severity_3742_ == 0)
{
lean_object* v___x_3743_; 
lean_inc(v___x_3741_);
v___x_3743_ = l_Lean_PersistentArray_push___redArg(v_b_3734_, v___x_3741_);
v___y_3736_ = v___x_3743_;
goto v___jp_3735_;
}
else
{
v___y_3736_ = v_b_3734_;
goto v___jp_3735_;
}
}
else
{
return v_b_3734_;
}
v___jp_3735_:
{
size_t v___x_3737_; size_t v___x_3738_; 
v___x_3737_ = ((size_t)1ULL);
v___x_3738_ = lean_usize_add(v_i_3732_, v___x_3737_);
v_i_3732_ = v___x_3738_;
v_b_3734_ = v___y_3736_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1___boxed(lean_object* v_as_3744_, lean_object* v_i_3745_, lean_object* v_stop_3746_, lean_object* v_b_3747_){
_start:
{
size_t v_i_boxed_3748_; size_t v_stop_boxed_3749_; lean_object* v_res_3750_; 
v_i_boxed_3748_ = lean_unbox_usize(v_i_3745_);
lean_dec(v_i_3745_);
v_stop_boxed_3749_ = lean_unbox_usize(v_stop_3746_);
lean_dec(v_stop_3746_);
v_res_3750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_as_3744_, v_i_boxed_3748_, v_stop_boxed_3749_, v_b_3747_);
lean_dec_ref(v_as_3744_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(lean_object* v_x_3751_, lean_object* v_x_3752_){
_start:
{
if (lean_obj_tag(v_x_3751_) == 0)
{
lean_object* v_cs_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; 
v_cs_3753_ = lean_ctor_get(v_x_3751_, 0);
v___x_3754_ = lean_unsigned_to_nat(0u);
v___x_3755_ = lean_array_get_size(v_cs_3753_);
v___x_3756_ = lean_nat_dec_lt(v___x_3754_, v___x_3755_);
if (v___x_3756_ == 0)
{
return v_x_3752_;
}
else
{
size_t v___x_3757_; size_t v___x_3758_; lean_object* v___x_3759_; 
v___x_3757_ = ((size_t)0ULL);
v___x_3758_ = lean_usize_of_nat(v___x_3755_);
v___x_3759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3753_, v___x_3757_, v___x_3758_, v_x_3752_);
return v___x_3759_;
}
}
else
{
lean_object* v_vs_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; uint8_t v___x_3763_; 
v_vs_3760_ = lean_ctor_get(v_x_3751_, 0);
v___x_3761_ = lean_unsigned_to_nat(0u);
v___x_3762_ = lean_array_get_size(v_vs_3760_);
v___x_3763_ = lean_nat_dec_lt(v___x_3761_, v___x_3762_);
if (v___x_3763_ == 0)
{
return v_x_3752_;
}
else
{
size_t v___x_3764_; size_t v___x_3765_; lean_object* v___x_3766_; 
v___x_3764_ = ((size_t)0ULL);
v___x_3765_ = lean_usize_of_nat(v___x_3762_);
v___x_3766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3760_, v___x_3764_, v___x_3765_, v_x_3752_);
return v___x_3766_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(lean_object* v_as_3767_, size_t v_i_3768_, size_t v_stop_3769_, lean_object* v_b_3770_){
_start:
{
uint8_t v___x_3771_; 
v___x_3771_ = lean_usize_dec_eq(v_i_3768_, v_stop_3769_);
if (v___x_3771_ == 0)
{
lean_object* v___x_3772_; lean_object* v___x_3773_; size_t v___x_3774_; size_t v___x_3775_; 
v___x_3772_ = lean_array_uget_borrowed(v_as_3767_, v_i_3768_);
v___x_3773_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v___x_3772_, v_b_3770_);
v___x_3774_ = ((size_t)1ULL);
v___x_3775_ = lean_usize_add(v_i_3768_, v___x_3774_);
v_i_3768_ = v___x_3775_;
v_b_3770_ = v___x_3773_;
goto _start;
}
else
{
return v_b_3770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3777_, lean_object* v_i_3778_, lean_object* v_stop_3779_, lean_object* v_b_3780_){
_start:
{
size_t v_i_boxed_3781_; size_t v_stop_boxed_3782_; lean_object* v_res_3783_; 
v_i_boxed_3781_ = lean_unbox_usize(v_i_3778_);
lean_dec(v_i_3778_);
v_stop_boxed_3782_ = lean_unbox_usize(v_stop_3779_);
lean_dec(v_stop_3779_);
v_res_3783_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_as_3777_, v_i_boxed_3781_, v_stop_boxed_3782_, v_b_3780_);
lean_dec_ref(v_as_3777_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2___boxed(lean_object* v_x_3784_, lean_object* v_x_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v_x_3784_, v_x_3785_);
lean_dec_ref(v_x_3784_);
return v_res_3786_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3787_; 
v___x_3787_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_3787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(lean_object* v_x_3788_, size_t v_x_3789_, size_t v_x_3790_, lean_object* v_x_3791_){
_start:
{
if (lean_obj_tag(v_x_3788_) == 0)
{
lean_object* v_cs_3792_; lean_object* v___x_3793_; size_t v___x_3794_; lean_object* v_j_3795_; lean_object* v___x_3796_; size_t v___x_3797_; size_t v___x_3798_; size_t v___x_3799_; size_t v___x_3800_; size_t v___x_3801_; size_t v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; uint8_t v___x_3807_; 
v_cs_3792_ = lean_ctor_get(v_x_3788_, 0);
v___x_3793_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0);
v___x_3794_ = lean_usize_shift_right(v_x_3789_, v_x_3790_);
v_j_3795_ = lean_usize_to_nat(v___x_3794_);
v___x_3796_ = lean_array_get_borrowed(v___x_3793_, v_cs_3792_, v_j_3795_);
v___x_3797_ = ((size_t)1ULL);
v___x_3798_ = lean_usize_shift_left(v___x_3797_, v_x_3790_);
v___x_3799_ = lean_usize_sub(v___x_3798_, v___x_3797_);
v___x_3800_ = lean_usize_land(v_x_3789_, v___x_3799_);
v___x_3801_ = ((size_t)5ULL);
v___x_3802_ = lean_usize_sub(v_x_3790_, v___x_3801_);
v___x_3803_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v___x_3796_, v___x_3800_, v___x_3802_, v_x_3791_);
v___x_3804_ = lean_unsigned_to_nat(1u);
v___x_3805_ = lean_nat_add(v_j_3795_, v___x_3804_);
lean_dec(v_j_3795_);
v___x_3806_ = lean_array_get_size(v_cs_3792_);
v___x_3807_ = lean_nat_dec_lt(v___x_3805_, v___x_3806_);
if (v___x_3807_ == 0)
{
lean_dec(v___x_3805_);
return v___x_3803_;
}
else
{
size_t v___x_3808_; size_t v___x_3809_; lean_object* v___x_3810_; 
v___x_3808_ = lean_usize_of_nat(v___x_3805_);
lean_dec(v___x_3805_);
v___x_3809_ = lean_usize_of_nat(v___x_3806_);
v___x_3810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3792_, v___x_3808_, v___x_3809_, v___x_3803_);
return v___x_3810_;
}
}
else
{
lean_object* v_vs_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; uint8_t v___x_3814_; 
v_vs_3811_ = lean_ctor_get(v_x_3788_, 0);
v___x_3812_ = lean_usize_to_nat(v_x_3789_);
v___x_3813_ = lean_array_get_size(v_vs_3811_);
v___x_3814_ = lean_nat_dec_lt(v___x_3812_, v___x_3813_);
if (v___x_3814_ == 0)
{
lean_dec(v___x_3812_);
return v_x_3791_;
}
else
{
size_t v___x_3815_; size_t v___x_3816_; lean_object* v___x_3817_; 
v___x_3815_ = lean_usize_of_nat(v___x_3812_);
lean_dec(v___x_3812_);
v___x_3816_ = lean_usize_of_nat(v___x_3813_);
v___x_3817_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3811_, v___x_3815_, v___x_3816_, v_x_3791_);
return v___x_3817_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___boxed(lean_object* v_x_3818_, lean_object* v_x_3819_, lean_object* v_x_3820_, lean_object* v_x_3821_){
_start:
{
size_t v_x_1153__boxed_3822_; size_t v_x_1154__boxed_3823_; lean_object* v_res_3824_; 
v_x_1153__boxed_3822_ = lean_unbox_usize(v_x_3819_);
lean_dec(v_x_3819_);
v_x_1154__boxed_3823_ = lean_unbox_usize(v_x_3820_);
lean_dec(v_x_3820_);
v_res_3824_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v_x_3818_, v_x_1153__boxed_3822_, v_x_1154__boxed_3823_, v_x_3821_);
lean_dec_ref(v_x_3818_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(lean_object* v_t_3825_, lean_object* v_init_3826_, lean_object* v_start_3827_){
_start:
{
lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___x_3828_ = lean_unsigned_to_nat(0u);
v___x_3829_ = lean_nat_dec_eq(v_start_3827_, v___x_3828_);
if (v___x_3829_ == 0)
{
lean_object* v_root_3830_; lean_object* v_tail_3831_; size_t v_shift_3832_; lean_object* v_tailOff_3833_; uint8_t v___x_3834_; 
v_root_3830_ = lean_ctor_get(v_t_3825_, 0);
v_tail_3831_ = lean_ctor_get(v_t_3825_, 1);
v_shift_3832_ = lean_ctor_get_usize(v_t_3825_, 4);
v_tailOff_3833_ = lean_ctor_get(v_t_3825_, 3);
v___x_3834_ = lean_nat_dec_le(v_tailOff_3833_, v_start_3827_);
if (v___x_3834_ == 0)
{
size_t v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; 
v___x_3835_ = lean_usize_of_nat(v_start_3827_);
v___x_3836_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v_root_3830_, v___x_3835_, v_shift_3832_, v_init_3826_);
v___x_3837_ = lean_array_get_size(v_tail_3831_);
v___x_3838_ = lean_nat_dec_lt(v___x_3828_, v___x_3837_);
if (v___x_3838_ == 0)
{
return v___x_3836_;
}
else
{
size_t v___x_3839_; size_t v___x_3840_; lean_object* v___x_3841_; 
v___x_3839_ = ((size_t)0ULL);
v___x_3840_ = lean_usize_of_nat(v___x_3837_);
v___x_3841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3831_, v___x_3839_, v___x_3840_, v___x_3836_);
return v___x_3841_;
}
}
else
{
lean_object* v___x_3842_; lean_object* v___x_3843_; uint8_t v___x_3844_; 
v___x_3842_ = lean_nat_sub(v_start_3827_, v_tailOff_3833_);
v___x_3843_ = lean_array_get_size(v_tail_3831_);
v___x_3844_ = lean_nat_dec_lt(v___x_3842_, v___x_3843_);
if (v___x_3844_ == 0)
{
lean_dec(v___x_3842_);
return v_init_3826_;
}
else
{
size_t v___x_3845_; size_t v___x_3846_; lean_object* v___x_3847_; 
v___x_3845_ = lean_usize_of_nat(v___x_3842_);
lean_dec(v___x_3842_);
v___x_3846_ = lean_usize_of_nat(v___x_3843_);
v___x_3847_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3831_, v___x_3845_, v___x_3846_, v_init_3826_);
return v___x_3847_;
}
}
}
else
{
lean_object* v_root_3848_; lean_object* v_tail_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; uint8_t v___x_3852_; 
v_root_3848_ = lean_ctor_get(v_t_3825_, 0);
v_tail_3849_ = lean_ctor_get(v_t_3825_, 1);
v___x_3850_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v_root_3848_, v_init_3826_);
v___x_3851_ = lean_array_get_size(v_tail_3849_);
v___x_3852_ = lean_nat_dec_lt(v___x_3828_, v___x_3851_);
if (v___x_3852_ == 0)
{
return v___x_3850_;
}
else
{
size_t v___x_3853_; size_t v___x_3854_; lean_object* v___x_3855_; 
v___x_3853_ = ((size_t)0ULL);
v___x_3854_ = lean_usize_of_nat(v___x_3851_);
v___x_3855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3849_, v___x_3853_, v___x_3854_, v___x_3850_);
return v___x_3855_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0___boxed(lean_object* v_t_3856_, lean_object* v_init_3857_, lean_object* v_start_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(v_t_3856_, v_init_3857_, v_start_3858_);
lean_dec(v_start_3858_);
lean_dec_ref(v_t_3856_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_getInfoMessages(lean_object* v_log_3860_){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v_unreported_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3874_; 
v___x_3861_ = lean_unsigned_to_nat(32u);
v___x_3862_ = lean_mk_empty_array_with_capacity(v___x_3861_);
lean_dec_ref(v___x_3862_);
v___x_3863_ = lean_unsigned_to_nat(0u);
v___x_3864_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3865_ = lean_ctor_get(v_log_3860_, 1);
v_isSharedCheck_3874_ = !lean_is_exclusive(v_log_3860_);
if (v_isSharedCheck_3874_ == 0)
{
lean_object* v_unused_3875_; lean_object* v_unused_3876_; 
v_unused_3875_ = lean_ctor_get(v_log_3860_, 2);
lean_dec(v_unused_3875_);
v_unused_3876_ = lean_ctor_get(v_log_3860_, 0);
lean_dec(v_unused_3876_);
v___x_3867_ = v_log_3860_;
v_isShared_3868_ = v_isSharedCheck_3874_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_unreported_3865_);
lean_dec(v_log_3860_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3874_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3872_; 
v___x_3869_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(v_unreported_3865_, v___x_3864_, v___x_3863_);
lean_dec_ref(v_unreported_3865_);
v___x_3870_ = l_Lean_NameSet_empty;
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 2, v___x_3870_);
lean_ctor_set(v___x_3867_, 1, v___x_3869_);
lean_ctor_set(v___x_3867_, 0, v___x_3864_);
v___x_3872_ = v___x_3867_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3864_);
lean_ctor_set(v_reuseFailAlloc_3873_, 1, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3873_, 2, v___x_3870_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(lean_object* v_as_3877_, size_t v_i_3878_, size_t v_stop_3879_, lean_object* v_b_3880_){
_start:
{
lean_object* v___y_3882_; uint8_t v___x_3886_; 
v___x_3886_ = lean_usize_dec_eq(v_i_3878_, v_stop_3879_);
if (v___x_3886_ == 0)
{
lean_object* v___x_3887_; uint8_t v_severity_3888_; 
v___x_3887_ = lean_array_uget_borrowed(v_as_3877_, v_i_3878_);
v_severity_3888_ = lean_ctor_get_uint8(v___x_3887_, sizeof(void*)*5 + 1);
if (v_severity_3888_ == 1)
{
lean_object* v___x_3889_; 
lean_inc(v___x_3887_);
v___x_3889_ = l_Lean_PersistentArray_push___redArg(v_b_3880_, v___x_3887_);
v___y_3882_ = v___x_3889_;
goto v___jp_3881_;
}
else
{
v___y_3882_ = v_b_3880_;
goto v___jp_3881_;
}
}
else
{
return v_b_3880_;
}
v___jp_3881_:
{
size_t v___x_3883_; size_t v___x_3884_; 
v___x_3883_ = ((size_t)1ULL);
v___x_3884_ = lean_usize_add(v_i_3878_, v___x_3883_);
v_i_3878_ = v___x_3884_;
v_b_3880_ = v___y_3882_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1___boxed(lean_object* v_as_3890_, lean_object* v_i_3891_, lean_object* v_stop_3892_, lean_object* v_b_3893_){
_start:
{
size_t v_i_boxed_3894_; size_t v_stop_boxed_3895_; lean_object* v_res_3896_; 
v_i_boxed_3894_ = lean_unbox_usize(v_i_3891_);
lean_dec(v_i_3891_);
v_stop_boxed_3895_ = lean_unbox_usize(v_stop_3892_);
lean_dec(v_stop_3892_);
v_res_3896_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_as_3890_, v_i_boxed_3894_, v_stop_boxed_3895_, v_b_3893_);
lean_dec_ref(v_as_3890_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(lean_object* v_x_3897_, lean_object* v_x_3898_){
_start:
{
if (lean_obj_tag(v_x_3897_) == 0)
{
lean_object* v_cs_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; uint8_t v___x_3902_; 
v_cs_3899_ = lean_ctor_get(v_x_3897_, 0);
v___x_3900_ = lean_unsigned_to_nat(0u);
v___x_3901_ = lean_array_get_size(v_cs_3899_);
v___x_3902_ = lean_nat_dec_lt(v___x_3900_, v___x_3901_);
if (v___x_3902_ == 0)
{
return v_x_3898_;
}
else
{
size_t v___x_3903_; size_t v___x_3904_; lean_object* v___x_3905_; 
v___x_3903_ = ((size_t)0ULL);
v___x_3904_ = lean_usize_of_nat(v___x_3901_);
v___x_3905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3899_, v___x_3903_, v___x_3904_, v_x_3898_);
return v___x_3905_;
}
}
else
{
lean_object* v_vs_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; uint8_t v___x_3909_; 
v_vs_3906_ = lean_ctor_get(v_x_3897_, 0);
v___x_3907_ = lean_unsigned_to_nat(0u);
v___x_3908_ = lean_array_get_size(v_vs_3906_);
v___x_3909_ = lean_nat_dec_lt(v___x_3907_, v___x_3908_);
if (v___x_3909_ == 0)
{
return v_x_3898_;
}
else
{
size_t v___x_3910_; size_t v___x_3911_; lean_object* v___x_3912_; 
v___x_3910_ = ((size_t)0ULL);
v___x_3911_ = lean_usize_of_nat(v___x_3908_);
v___x_3912_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3906_, v___x_3910_, v___x_3911_, v_x_3898_);
return v___x_3912_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(lean_object* v_as_3913_, size_t v_i_3914_, size_t v_stop_3915_, lean_object* v_b_3916_){
_start:
{
uint8_t v___x_3917_; 
v___x_3917_ = lean_usize_dec_eq(v_i_3914_, v_stop_3915_);
if (v___x_3917_ == 0)
{
lean_object* v___x_3918_; lean_object* v___x_3919_; size_t v___x_3920_; size_t v___x_3921_; 
v___x_3918_ = lean_array_uget_borrowed(v_as_3913_, v_i_3914_);
v___x_3919_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v___x_3918_, v_b_3916_);
v___x_3920_ = ((size_t)1ULL);
v___x_3921_ = lean_usize_add(v_i_3914_, v___x_3920_);
v_i_3914_ = v___x_3921_;
v_b_3916_ = v___x_3919_;
goto _start;
}
else
{
return v_b_3916_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3923_, lean_object* v_i_3924_, lean_object* v_stop_3925_, lean_object* v_b_3926_){
_start:
{
size_t v_i_boxed_3927_; size_t v_stop_boxed_3928_; lean_object* v_res_3929_; 
v_i_boxed_3927_ = lean_unbox_usize(v_i_3924_);
lean_dec(v_i_3924_);
v_stop_boxed_3928_ = lean_unbox_usize(v_stop_3925_);
lean_dec(v_stop_3925_);
v_res_3929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_as_3923_, v_i_boxed_3927_, v_stop_boxed_3928_, v_b_3926_);
lean_dec_ref(v_as_3923_);
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2___boxed(lean_object* v_x_3930_, lean_object* v_x_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v_x_3930_, v_x_3931_);
lean_dec_ref(v_x_3930_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(lean_object* v_x_3933_, size_t v_x_3934_, size_t v_x_3935_, lean_object* v_x_3936_){
_start:
{
if (lean_obj_tag(v_x_3933_) == 0)
{
lean_object* v_cs_3937_; lean_object* v___x_3938_; size_t v___x_3939_; lean_object* v_j_3940_; lean_object* v___x_3941_; size_t v___x_3942_; size_t v___x_3943_; size_t v___x_3944_; size_t v___x_3945_; size_t v___x_3946_; size_t v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; uint8_t v___x_3952_; 
v_cs_3937_ = lean_ctor_get(v_x_3933_, 0);
v___x_3938_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0);
v___x_3939_ = lean_usize_shift_right(v_x_3934_, v_x_3935_);
v_j_3940_ = lean_usize_to_nat(v___x_3939_);
v___x_3941_ = lean_array_get_borrowed(v___x_3938_, v_cs_3937_, v_j_3940_);
v___x_3942_ = ((size_t)1ULL);
v___x_3943_ = lean_usize_shift_left(v___x_3942_, v_x_3935_);
v___x_3944_ = lean_usize_sub(v___x_3943_, v___x_3942_);
v___x_3945_ = lean_usize_land(v_x_3934_, v___x_3944_);
v___x_3946_ = ((size_t)5ULL);
v___x_3947_ = lean_usize_sub(v_x_3935_, v___x_3946_);
v___x_3948_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v___x_3941_, v___x_3945_, v___x_3947_, v_x_3936_);
v___x_3949_ = lean_unsigned_to_nat(1u);
v___x_3950_ = lean_nat_add(v_j_3940_, v___x_3949_);
lean_dec(v_j_3940_);
v___x_3951_ = lean_array_get_size(v_cs_3937_);
v___x_3952_ = lean_nat_dec_lt(v___x_3950_, v___x_3951_);
if (v___x_3952_ == 0)
{
lean_dec(v___x_3950_);
return v___x_3948_;
}
else
{
size_t v___x_3953_; size_t v___x_3954_; lean_object* v___x_3955_; 
v___x_3953_ = lean_usize_of_nat(v___x_3950_);
lean_dec(v___x_3950_);
v___x_3954_ = lean_usize_of_nat(v___x_3951_);
v___x_3955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3937_, v___x_3953_, v___x_3954_, v___x_3948_);
return v___x_3955_;
}
}
else
{
lean_object* v_vs_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; uint8_t v___x_3959_; 
v_vs_3956_ = lean_ctor_get(v_x_3933_, 0);
v___x_3957_ = lean_usize_to_nat(v_x_3934_);
v___x_3958_ = lean_array_get_size(v_vs_3956_);
v___x_3959_ = lean_nat_dec_lt(v___x_3957_, v___x_3958_);
if (v___x_3959_ == 0)
{
lean_dec(v___x_3957_);
return v_x_3936_;
}
else
{
size_t v___x_3960_; size_t v___x_3961_; lean_object* v___x_3962_; 
v___x_3960_ = lean_usize_of_nat(v___x_3957_);
lean_dec(v___x_3957_);
v___x_3961_ = lean_usize_of_nat(v___x_3958_);
v___x_3962_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3956_, v___x_3960_, v___x_3961_, v_x_3936_);
return v___x_3962_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0___boxed(lean_object* v_x_3963_, lean_object* v_x_3964_, lean_object* v_x_3965_, lean_object* v_x_3966_){
_start:
{
size_t v_x_1152__boxed_3967_; size_t v_x_1153__boxed_3968_; lean_object* v_res_3969_; 
v_x_1152__boxed_3967_ = lean_unbox_usize(v_x_3964_);
lean_dec(v_x_3964_);
v_x_1153__boxed_3968_ = lean_unbox_usize(v_x_3965_);
lean_dec(v_x_3965_);
v_res_3969_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v_x_3963_, v_x_1152__boxed_3967_, v_x_1153__boxed_3968_, v_x_3966_);
lean_dec_ref(v_x_3963_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(lean_object* v_t_3970_, lean_object* v_init_3971_, lean_object* v_start_3972_){
_start:
{
lean_object* v___x_3973_; uint8_t v___x_3974_; 
v___x_3973_ = lean_unsigned_to_nat(0u);
v___x_3974_ = lean_nat_dec_eq(v_start_3972_, v___x_3973_);
if (v___x_3974_ == 0)
{
lean_object* v_root_3975_; lean_object* v_tail_3976_; size_t v_shift_3977_; lean_object* v_tailOff_3978_; uint8_t v___x_3979_; 
v_root_3975_ = lean_ctor_get(v_t_3970_, 0);
v_tail_3976_ = lean_ctor_get(v_t_3970_, 1);
v_shift_3977_ = lean_ctor_get_usize(v_t_3970_, 4);
v_tailOff_3978_ = lean_ctor_get(v_t_3970_, 3);
v___x_3979_ = lean_nat_dec_le(v_tailOff_3978_, v_start_3972_);
if (v___x_3979_ == 0)
{
size_t v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; uint8_t v___x_3983_; 
v___x_3980_ = lean_usize_of_nat(v_start_3972_);
v___x_3981_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v_root_3975_, v___x_3980_, v_shift_3977_, v_init_3971_);
v___x_3982_ = lean_array_get_size(v_tail_3976_);
v___x_3983_ = lean_nat_dec_lt(v___x_3973_, v___x_3982_);
if (v___x_3983_ == 0)
{
return v___x_3981_;
}
else
{
size_t v___x_3984_; size_t v___x_3985_; lean_object* v___x_3986_; 
v___x_3984_ = ((size_t)0ULL);
v___x_3985_ = lean_usize_of_nat(v___x_3982_);
v___x_3986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_3976_, v___x_3984_, v___x_3985_, v___x_3981_);
return v___x_3986_;
}
}
else
{
lean_object* v___x_3987_; lean_object* v___x_3988_; uint8_t v___x_3989_; 
v___x_3987_ = lean_nat_sub(v_start_3972_, v_tailOff_3978_);
v___x_3988_ = lean_array_get_size(v_tail_3976_);
v___x_3989_ = lean_nat_dec_lt(v___x_3987_, v___x_3988_);
if (v___x_3989_ == 0)
{
lean_dec(v___x_3987_);
return v_init_3971_;
}
else
{
size_t v___x_3990_; size_t v___x_3991_; lean_object* v___x_3992_; 
v___x_3990_ = lean_usize_of_nat(v___x_3987_);
lean_dec(v___x_3987_);
v___x_3991_ = lean_usize_of_nat(v___x_3988_);
v___x_3992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_3976_, v___x_3990_, v___x_3991_, v_init_3971_);
return v___x_3992_;
}
}
}
else
{
lean_object* v_root_3993_; lean_object* v_tail_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; uint8_t v___x_3997_; 
v_root_3993_ = lean_ctor_get(v_t_3970_, 0);
v_tail_3994_ = lean_ctor_get(v_t_3970_, 1);
v___x_3995_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v_root_3993_, v_init_3971_);
v___x_3996_ = lean_array_get_size(v_tail_3994_);
v___x_3997_ = lean_nat_dec_lt(v___x_3973_, v___x_3996_);
if (v___x_3997_ == 0)
{
return v___x_3995_;
}
else
{
size_t v___x_3998_; size_t v___x_3999_; lean_object* v___x_4000_; 
v___x_3998_ = ((size_t)0ULL);
v___x_3999_ = lean_usize_of_nat(v___x_3996_);
v___x_4000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_3994_, v___x_3998_, v___x_3999_, v___x_3995_);
return v___x_4000_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0___boxed(lean_object* v_t_4001_, lean_object* v_init_4002_, lean_object* v_start_4003_){
_start:
{
lean_object* v_res_4004_; 
v_res_4004_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(v_t_4001_, v_init_4002_, v_start_4003_);
lean_dec(v_start_4003_);
lean_dec_ref(v_t_4001_);
return v_res_4004_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_getWarningMessages(lean_object* v_log_4005_){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v_unreported_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4019_; 
v___x_4006_ = lean_unsigned_to_nat(32u);
v___x_4007_ = lean_mk_empty_array_with_capacity(v___x_4006_);
lean_dec_ref(v___x_4007_);
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_4010_ = lean_ctor_get(v_log_4005_, 1);
v_isSharedCheck_4019_ = !lean_is_exclusive(v_log_4005_);
if (v_isSharedCheck_4019_ == 0)
{
lean_object* v_unused_4020_; lean_object* v_unused_4021_; 
v_unused_4020_ = lean_ctor_get(v_log_4005_, 2);
lean_dec(v_unused_4020_);
v_unused_4021_ = lean_ctor_get(v_log_4005_, 0);
lean_dec(v_unused_4021_);
v___x_4012_ = v_log_4005_;
v_isShared_4013_ = v_isSharedCheck_4019_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_unreported_4010_);
lean_dec(v_log_4005_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4019_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4017_; 
v___x_4014_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(v_unreported_4010_, v___x_4009_, v___x_4008_);
lean_dec_ref(v_unreported_4010_);
v___x_4015_ = l_Lean_NameSet_empty;
if (v_isShared_4013_ == 0)
{
lean_ctor_set(v___x_4012_, 2, v___x_4015_);
lean_ctor_set(v___x_4012_, 1, v___x_4014_);
lean_ctor_set(v___x_4012_, 0, v___x_4009_);
v___x_4017_ = v___x_4012_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v___x_4009_);
lean_ctor_set(v_reuseFailAlloc_4018_, 1, v___x_4014_);
lean_ctor_set(v_reuseFailAlloc_4018_, 2, v___x_4015_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___redArg(lean_object* v_inst_4022_, lean_object* v_log_4023_, lean_object* v_f_4024_){
_start:
{
lean_object* v_unreported_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; 
v_unreported_4025_ = lean_ctor_get(v_log_4023_, 1);
lean_inc_ref(v_unreported_4025_);
lean_dec_ref(v_log_4023_);
v___x_4026_ = lean_unsigned_to_nat(0u);
v___x_4027_ = l_Lean_PersistentArray_forM___redArg(v_inst_4022_, v_unreported_4025_, v_f_4024_, v___x_4026_);
return v___x_4027_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM(lean_object* v_m_4028_, lean_object* v_inst_4029_, lean_object* v_log_4030_, lean_object* v_f_4031_){
_start:
{
lean_object* v___x_4032_; 
v___x_4032_ = l_Lean_MessageLog_forM___redArg(v_inst_4029_, v_log_4030_, v_f_4031_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList(lean_object* v_log_4033_){
_start:
{
lean_object* v_unreported_4034_; lean_object* v___x_4035_; 
v_unreported_4034_ = lean_ctor_get(v_log_4033_, 1);
v___x_4035_ = l_Lean_PersistentArray_toList___redArg(v_unreported_4034_);
return v___x_4035_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList___boxed(lean_object* v_log_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_Lean_MessageLog_toList(v_log_4036_);
lean_dec_ref(v_log_4036_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray(lean_object* v_log_4038_){
_start:
{
lean_object* v_unreported_4039_; lean_object* v___x_4040_; 
v_unreported_4039_ = lean_ctor_get(v_log_4038_, 1);
v___x_4040_ = l_Lean_PersistentArray_toArray___redArg(v_unreported_4039_);
return v___x_4040_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray___boxed(lean_object* v_log_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l_Lean_MessageLog_toArray(v_log_4041_);
lean_dec_ref(v_log_4041_);
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nestD(lean_object* v_msg_4043_){
_start:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4044_ = lean_unsigned_to_nat(2u);
v___x_4045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
lean_ctor_set(v___x_4045_, 1, v_msg_4043_);
return v___x_4045_;
}
}
LEAN_EXPORT lean_object* l_Lean_indentD(lean_object* v_msg_4046_){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4047_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
lean_ctor_set(v___x_4048_, 1, v_msg_4046_);
v___x_4049_ = l_Lean_MessageData_nestD(v___x_4048_);
return v___x_4049_;
}
}
LEAN_EXPORT lean_object* l_Lean_indentExpr(lean_object* v_e_4050_){
_start:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4051_ = l_Lean_MessageData_ofExpr(v_e_4050_);
v___x_4052_ = l_Lean_indentD(v___x_4051_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively(lean_object* v_ctx_4053_, lean_object* v_msg_4054_){
_start:
{
lean_object* v_env_4056_; lean_object* v_mctx_4057_; lean_object* v_lctx_4058_; lean_object* v_opts_4059_; lean_object* v_currNamespace_4060_; lean_object* v_openDecls_4061_; lean_object* v___x_4062_; lean_object* v_msg_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v_env_4056_ = lean_ctor_get(v_ctx_4053_, 0);
v_mctx_4057_ = lean_ctor_get(v_ctx_4053_, 1);
v_lctx_4058_ = lean_ctor_get(v_ctx_4053_, 2);
v_opts_4059_ = lean_ctor_get(v_ctx_4053_, 3);
v_currNamespace_4060_ = lean_ctor_get(v_ctx_4053_, 4);
v_openDecls_4061_ = lean_ctor_get(v_ctx_4053_, 5);
lean_inc(v_openDecls_4061_);
lean_inc(v_currNamespace_4060_);
v___x_4062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4062_, 0, v_currNamespace_4060_);
lean_ctor_set(v___x_4062_, 1, v_openDecls_4061_);
v_msg_4063_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_msg_4063_, 0, v___x_4062_);
lean_ctor_set(v_msg_4063_, 1, v_msg_4054_);
lean_inc_ref(v_opts_4059_);
lean_inc_ref(v_lctx_4058_);
lean_inc_ref(v_mctx_4057_);
lean_inc_ref(v_env_4056_);
v___x_4064_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4064_, 0, v_env_4056_);
lean_ctor_set(v___x_4064_, 1, v_mctx_4057_);
lean_ctor_set(v___x_4064_, 2, v_lctx_4058_);
lean_ctor_set(v___x_4064_, 3, v_opts_4059_);
v___x_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
v___x_4066_ = l_Lean_MessageData_format(v_msg_4063_, v___x_4065_);
v___x_4067_ = l_Std_Format_defWidth;
v___x_4068_ = lean_unsigned_to_nat(0u);
v___x_4069_ = l_Std_Format_pretty(v___x_4066_, v___x_4067_, v___x_4068_, v___x_4068_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively___boxed(lean_object* v_ctx_4070_, lean_object* v_msg_4071_, lean_object* v_a_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4070_, v_msg_4071_);
lean_dec_ref(v_ctx_4070_);
return v_res_4073_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(lean_object* v_s_4074_, lean_object* v_a_4075_, uint8_t v_b_4076_){
_start:
{
lean_object* v_str_4077_; lean_object* v_startInclusive_4078_; lean_object* v_endExclusive_4079_; lean_object* v___x_4080_; uint8_t v_decide_4081_; 
v_str_4077_ = lean_ctor_get(v_s_4074_, 0);
v_startInclusive_4078_ = lean_ctor_get(v_s_4074_, 1);
v_endExclusive_4079_ = lean_ctor_get(v_s_4074_, 2);
v___x_4080_ = lean_nat_sub(v_endExclusive_4079_, v_startInclusive_4078_);
v_decide_4081_ = lean_nat_dec_eq(v_a_4075_, v___x_4080_);
lean_dec(v___x_4080_);
if (v_decide_4081_ == 0)
{
lean_object* v___x_4082_; uint32_t v___x_4083_; uint32_t v___x_4084_; uint8_t v___x_4085_; 
v___x_4082_ = lean_nat_add(v_startInclusive_4078_, v_a_4075_);
lean_dec(v_a_4075_);
v___x_4083_ = lean_string_utf8_get_fast(v_str_4077_, v___x_4082_);
v___x_4084_ = 10;
v___x_4085_ = lean_uint32_dec_eq(v___x_4083_, v___x_4084_);
if (v___x_4085_ == 0)
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = lean_string_utf8_next_fast(v_str_4077_, v___x_4082_);
lean_dec(v___x_4082_);
v___x_4087_ = lean_nat_sub(v___x_4086_, v_startInclusive_4078_);
v_a_4075_ = v___x_4087_;
v_b_4076_ = v___x_4085_;
goto _start;
}
else
{
lean_dec(v___x_4082_);
return v___x_4085_;
}
}
else
{
lean_dec(v_a_4075_);
return v_b_4076_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg___boxed(lean_object* v_s_4089_, lean_object* v_a_4090_, lean_object* v_b_4091_){
_start:
{
uint8_t v_b_boxed_4092_; uint8_t v_res_4093_; lean_object* v_r_4094_; 
v_b_boxed_4092_ = lean_unbox(v_b_4091_);
v_res_4093_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4089_, v_a_4090_, v_b_boxed_4092_);
lean_dec_ref(v_s_4089_);
v_r_4094_ = lean_box(v_res_4093_);
return v_r_4094_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(lean_object* v_s_4095_){
_start:
{
lean_object* v_searcher_4096_; uint8_t v___x_4097_; uint8_t v___x_4098_; 
v_searcher_4096_ = lean_unsigned_to_nat(0u);
v___x_4097_ = 0;
v___x_4098_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4095_, v_searcher_4096_, v___x_4097_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_inlineExpr_spec__1___boxed(lean_object* v_s_4099_){
_start:
{
uint8_t v_res_4100_; lean_object* v_r_4101_; 
v_res_4100_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v_s_4099_);
lean_dec_ref(v_s_4099_);
v_r_4101_ = lean_box(v_res_4100_);
return v_r_4101_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(lean_object* v___x_4102_, lean_object* v_val_4103_, lean_object* v_a_4104_, lean_object* v_b_4105_){
_start:
{
uint8_t v_decide_4106_; 
v_decide_4106_ = lean_nat_dec_eq(v_a_4104_, v___x_4102_);
if (v_decide_4106_ == 0)
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4107_ = lean_string_utf8_next_fast(v_val_4103_, v_a_4104_);
lean_dec(v_a_4104_);
v___x_4108_ = lean_unsigned_to_nat(1u);
v___x_4109_ = lean_nat_add(v_b_4105_, v___x_4108_);
lean_dec(v_b_4105_);
v_a_4104_ = v___x_4107_;
v_b_4105_ = v___x_4109_;
goto _start;
}
else
{
lean_dec(v_a_4104_);
return v_b_4105_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg___boxed(lean_object* v___x_4111_, lean_object* v_val_4112_, lean_object* v_a_4113_, lean_object* v_b_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4111_, v_val_4112_, v_a_4113_, v_b_4114_);
lean_dec_ref(v_val_4112_);
lean_dec(v___x_4111_);
return v_res_4115_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4116_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_4117_ = l_Lean_MessageData_ofFormat(v___x_4116_);
return v___x_4117_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4121_ = ((lean_object*)(l_Lean_inlineExpr___lam__0___closed__2));
v___x_4122_ = l_Lean_MessageData_ofFormat(v___x_4121_);
return v___x_4122_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4126_ = ((lean_object*)(l_Lean_inlineExpr___lam__0___closed__5));
v___x_4127_ = l_Lean_MessageData_ofFormat(v___x_4126_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0(lean_object* v_e_4128_, lean_object* v_maxInlineLength_4129_, lean_object* v_ctx_4130_){
_start:
{
lean_object* v_msg_4132_; lean_object* v___x_4133_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; uint8_t v___x_4142_; 
v_msg_4132_ = l_Lean_MessageData_ofExpr(v_e_4128_);
lean_inc_ref(v_msg_4132_);
v___x_4133_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4130_, v_msg_4132_);
v___x_4138_ = lean_unsigned_to_nat(0u);
v___x_4139_ = lean_string_utf8_byte_size(v___x_4133_);
lean_inc_ref(v___x_4133_);
v___x_4140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4133_);
lean_ctor_set(v___x_4140_, 1, v___x_4138_);
lean_ctor_set(v___x_4140_, 2, v___x_4139_);
v___x_4141_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4139_, v___x_4133_, v___x_4138_, v___x_4138_);
lean_dec_ref(v___x_4133_);
v___x_4142_ = lean_nat_dec_lt(v_maxInlineLength_4129_, v___x_4141_);
lean_dec(v___x_4141_);
if (v___x_4142_ == 0)
{
uint8_t v___x_4143_; 
v___x_4143_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v___x_4140_);
lean_dec_ref_known(v___x_4140_, 3);
if (v___x_4143_ == 0)
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4144_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4145_, 0, v___x_4144_);
lean_ctor_set(v___x_4145_, 1, v_msg_4132_);
v___x_4146_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__6, &l_Lean_inlineExpr___lam__0___closed__6_once, _init_l_Lean_inlineExpr___lam__0___closed__6);
v___x_4147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4145_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
return v___x_4147_;
}
else
{
goto v___jp_4134_;
}
}
else
{
lean_dec_ref_known(v___x_4140_, 3);
goto v___jp_4134_;
}
v___jp_4134_:
{
lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; 
v___x_4135_ = l_Lean_indentD(v_msg_4132_);
v___x_4136_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__0, &l_Lean_inlineExpr___lam__0___closed__0_once, _init_l_Lean_inlineExpr___lam__0___closed__0);
v___x_4137_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4135_);
lean_ctor_set(v___x_4137_, 1, v___x_4136_);
return v___x_4137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0___boxed(lean_object* v_e_4148_, lean_object* v_maxInlineLength_4149_, lean_object* v_ctx_4150_, lean_object* v___y_4151_){
_start:
{
lean_object* v_res_4152_; 
v_res_4152_ = l_Lean_inlineExpr___lam__0(v_e_4148_, v_maxInlineLength_4149_, v_ctx_4150_);
lean_dec_ref(v_ctx_4150_);
lean_dec(v_maxInlineLength_4149_);
return v_res_4152_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2(lean_object* v_e_4153_, lean_object* v_x_4154_){
_start:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4156_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4157_ = l_Lean_MessageData_ofExpr(v_e_4153_);
v___x_4158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4156_);
lean_ctor_set(v___x_4158_, 1, v___x_4157_);
v___x_4159_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__6, &l_Lean_inlineExpr___lam__0___closed__6_once, _init_l_Lean_inlineExpr___lam__0___closed__6);
v___x_4160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4158_);
lean_ctor_set(v___x_4160_, 1, v___x_4159_);
return v___x_4160_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2___boxed(lean_object* v_e_4161_, lean_object* v_x_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Lean_inlineExpr___lam__2(v_e_4161_, v_x_4162_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr(lean_object* v_e_4165_, lean_object* v_maxInlineLength_4166_){
_start:
{
lean_object* v___f_4167_; lean_object* v___f_4168_; lean_object* v___f_4169_; lean_object* v___x_4170_; 
lean_inc_ref_n(v_e_4165_, 2);
v___f_4167_ = lean_alloc_closure((void*)(l_Lean_inlineExpr___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4167_, 0, v_e_4165_);
lean_closure_set(v___f_4167_, 1, v_maxInlineLength_4166_);
v___f_4168_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4168_, 0, v_e_4165_);
v___f_4169_ = lean_alloc_closure((void*)(l_Lean_inlineExpr___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4169_, 0, v_e_4165_);
v___x_4170_ = l_Lean_MessageData_lazy(v___f_4167_, v___f_4168_, v___f_4169_);
return v___x_4170_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(lean_object* v___x_4171_, lean_object* v___x_4172_, lean_object* v_val_4173_, lean_object* v_inst_4174_, lean_object* v_R_4175_, lean_object* v_a_4176_, lean_object* v_b_4177_, lean_object* v_c_4178_){
_start:
{
lean_object* v___x_4179_; 
v___x_4179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4171_, v_val_4173_, v_a_4176_, v_b_4177_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___boxed(lean_object* v___x_4180_, lean_object* v___x_4181_, lean_object* v_val_4182_, lean_object* v_inst_4183_, lean_object* v_R_4184_, lean_object* v_a_4185_, lean_object* v_b_4186_, lean_object* v_c_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(v___x_4180_, v___x_4181_, v_val_4182_, v_inst_4183_, v_R_4184_, v_a_4185_, v_b_4186_, v_c_4187_);
lean_dec_ref(v_val_4182_);
lean_dec_ref(v___x_4181_);
lean_dec(v___x_4180_);
return v_res_4188_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(lean_object* v_s_4189_, lean_object* v_inst_4190_, lean_object* v_R_4191_, lean_object* v_a_4192_, uint8_t v_b_4193_, lean_object* v_c_4194_){
_start:
{
uint8_t v___x_4195_; 
v___x_4195_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4189_, v_a_4192_, v_b_4193_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___boxed(lean_object* v_s_4196_, lean_object* v_inst_4197_, lean_object* v_R_4198_, lean_object* v_a_4199_, lean_object* v_b_4200_, lean_object* v_c_4201_){
_start:
{
uint8_t v_b_boxed_4202_; uint8_t v_res_4203_; lean_object* v_r_4204_; 
v_b_boxed_4202_ = lean_unbox(v_b_4200_);
v_res_4203_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(v_s_4196_, v_inst_4197_, v_R_4198_, v_a_4199_, v_b_boxed_4202_, v_c_4201_);
lean_dec_ref(v_s_4196_);
v_r_4204_ = lean_box(v_res_4203_);
return v_r_4204_;
}
}
static lean_object* _init_l_Lean_inlineExprTrailing___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4208_ = ((lean_object*)(l_Lean_inlineExprTrailing___lam__0___closed__1));
v___x_4209_ = l_Lean_MessageData_ofFormat(v___x_4208_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0(lean_object* v_e_4210_, lean_object* v_maxInlineLength_4211_, lean_object* v_ctx_4212_){
_start:
{
lean_object* v_msg_4214_; lean_object* v___x_4215_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; uint8_t v___x_4222_; 
v_msg_4214_ = l_Lean_MessageData_ofExpr(v_e_4210_);
lean_inc_ref(v_msg_4214_);
v___x_4215_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4212_, v_msg_4214_);
v___x_4218_ = lean_unsigned_to_nat(0u);
v___x_4219_ = lean_string_utf8_byte_size(v___x_4215_);
lean_inc_ref(v___x_4215_);
v___x_4220_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4215_);
lean_ctor_set(v___x_4220_, 1, v___x_4218_);
lean_ctor_set(v___x_4220_, 2, v___x_4219_);
v___x_4221_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4219_, v___x_4215_, v___x_4218_, v___x_4218_);
lean_dec_ref(v___x_4215_);
v___x_4222_ = lean_nat_dec_lt(v_maxInlineLength_4211_, v___x_4221_);
lean_dec(v___x_4221_);
if (v___x_4222_ == 0)
{
uint8_t v___x_4223_; 
v___x_4223_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v___x_4220_);
lean_dec_ref_known(v___x_4220_, 3);
if (v___x_4223_ == 0)
{
lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4224_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4225_, 0, v___x_4224_);
lean_ctor_set(v___x_4225_, 1, v_msg_4214_);
v___x_4226_ = lean_obj_once(&l_Lean_inlineExprTrailing___lam__0___closed__2, &l_Lean_inlineExprTrailing___lam__0___closed__2_once, _init_l_Lean_inlineExprTrailing___lam__0___closed__2);
v___x_4227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4225_);
lean_ctor_set(v___x_4227_, 1, v___x_4226_);
return v___x_4227_;
}
else
{
goto v___jp_4216_;
}
}
else
{
lean_dec_ref_known(v___x_4220_, 3);
goto v___jp_4216_;
}
v___jp_4216_:
{
lean_object* v___x_4217_; 
v___x_4217_ = l_Lean_indentD(v_msg_4214_);
return v___x_4217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0___boxed(lean_object* v_e_4228_, lean_object* v_maxInlineLength_4229_, lean_object* v_ctx_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v_res_4232_; 
v_res_4232_ = l_Lean_inlineExprTrailing___lam__0(v_e_4228_, v_maxInlineLength_4229_, v_ctx_4230_);
lean_dec_ref(v_ctx_4230_);
lean_dec(v_maxInlineLength_4229_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2(lean_object* v_e_4233_, lean_object* v_x_4234_){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4236_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4237_ = l_Lean_MessageData_ofExpr(v_e_4233_);
v___x_4238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4236_);
lean_ctor_set(v___x_4238_, 1, v___x_4237_);
v___x_4239_ = lean_obj_once(&l_Lean_inlineExprTrailing___lam__0___closed__2, &l_Lean_inlineExprTrailing___lam__0___closed__2_once, _init_l_Lean_inlineExprTrailing___lam__0___closed__2);
v___x_4240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4238_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2___boxed(lean_object* v_e_4241_, lean_object* v_x_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Lean_inlineExprTrailing___lam__2(v_e_4241_, v_x_4242_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing(lean_object* v_e_4245_, lean_object* v_maxInlineLength_4246_){
_start:
{
lean_object* v___f_4247_; lean_object* v___f_4248_; lean_object* v___f_4249_; lean_object* v___x_4250_; 
lean_inc_ref_n(v_e_4245_, 2);
v___f_4247_ = lean_alloc_closure((void*)(l_Lean_inlineExprTrailing___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4247_, 0, v_e_4245_);
lean_closure_set(v___f_4247_, 1, v_maxInlineLength_4246_);
v___f_4248_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4248_, 0, v_e_4245_);
v___f_4249_ = lean_alloc_closure((void*)(l_Lean_inlineExprTrailing___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4249_, 0, v_e_4245_);
v___x_4250_ = l_Lean_MessageData_lazy(v___f_4247_, v___f_4248_, v___f_4249_);
return v___x_4250_;
}
}
static lean_object* _init_l_Lean_aquote___closed__2(void){
_start:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; 
v___x_4254_ = ((lean_object*)(l_Lean_aquote___closed__1));
v___x_4255_ = l_Lean_MessageData_ofFormat(v___x_4254_);
return v___x_4255_;
}
}
static lean_object* _init_l_Lean_aquote___closed__5(void){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4259_ = ((lean_object*)(l_Lean_aquote___closed__4));
v___x_4260_ = l_Lean_MessageData_ofFormat(v___x_4259_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_aquote(lean_object* v_msg_4261_){
_start:
{
lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; 
v___x_4262_ = lean_obj_once(&l_Lean_aquote___closed__2, &l_Lean_aquote___closed__2_once, _init_l_Lean_aquote___closed__2);
v___x_4263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4262_);
lean_ctor_set(v___x_4263_, 1, v_msg_4261_);
v___x_4264_ = lean_obj_once(&l_Lean_aquote___closed__5, &l_Lean_aquote___closed__5_once, _init_l_Lean_aquote___closed__5);
v___x_4265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4263_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object* v_inst_4266_, lean_object* v_inst_4267_, lean_object* v_msg_4268_){
_start:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4269_ = lean_apply_1(v_inst_4266_, v_msg_4268_);
v___x_4270_ = lean_apply_2(v_inst_4267_, lean_box(0), v___x_4269_);
return v___x_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg(lean_object* v_inst_4271_, lean_object* v_inst_4272_){
_start:
{
lean_object* v___f_4273_; 
v___f_4273_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4273_, 0, v_inst_4272_);
lean_closure_set(v___f_4273_, 1, v_inst_4271_);
return v___f_4273_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift(lean_object* v_m_4274_, lean_object* v_n_4275_, lean_object* v_inst_4276_, lean_object* v_inst_4277_){
_start:
{
lean_object* v___f_4278_; 
v___f_4278_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4278_, 0, v_inst_4277_);
lean_closure_set(v___f_4278_, 1, v_inst_4276_);
return v___f_4278_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4279_ = lean_unsigned_to_nat(32u);
v___x_4280_ = lean_mk_empty_array_with_capacity(v___x_4279_);
v___x_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4281_, 0, v___x_4280_);
return v___x_4281_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1(void){
_start:
{
size_t v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4282_ = ((size_t)5ULL);
v___x_4283_ = lean_unsigned_to_nat(0u);
v___x_4284_ = lean_unsigned_to_nat(32u);
v___x_4285_ = lean_mk_empty_array_with_capacity(v___x_4284_);
v___x_4286_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__0, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__0_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__0);
v___x_4287_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
lean_ctor_set(v___x_4287_, 1, v___x_4285_);
lean_ctor_set(v___x_4287_, 2, v___x_4283_);
lean_ctor_set(v___x_4287_, 3, v___x_4283_);
lean_ctor_set_usize(v___x_4287_, 4, v___x_4282_);
return v___x_4287_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; 
v___x_4288_ = lean_box(1);
v___x_4289_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__1, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1);
v___x_4290_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1);
v___x_4291_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4290_);
lean_ctor_set(v___x_4291_, 1, v___x_4289_);
lean_ctor_set(v___x_4291_, 2, v___x_4288_);
return v___x_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__0(lean_object* v_env_4292_, lean_object* v_msgData_4293_, lean_object* v_toPure_4294_, lean_object* v_opts_4295_){
_start:
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4296_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_4297_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__2, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__2_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__2);
v___x_4298_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4298_, 0, v_env_4292_);
lean_ctor_set(v___x_4298_, 1, v___x_4296_);
lean_ctor_set(v___x_4298_, 2, v___x_4297_);
lean_ctor_set(v___x_4298_, 3, v_opts_4295_);
v___x_4299_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4298_);
lean_ctor_set(v___x_4299_, 1, v_msgData_4293_);
v___x_4300_ = lean_apply_2(v_toPure_4294_, lean_box(0), v___x_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__1(lean_object* v_msgData_4301_, lean_object* v_toPure_4302_, lean_object* v_toBind_4303_, lean_object* v_inst_4304_, lean_object* v_env_4305_){
_start:
{
lean_object* v___f_4306_; lean_object* v___x_4307_; 
v___f_4306_ = lean_alloc_closure((void*)(l_Lean_addMessageContextPartial___redArg___lam__0), 4, 3);
lean_closure_set(v___f_4306_, 0, v_env_4305_);
lean_closure_set(v___f_4306_, 1, v_msgData_4301_);
lean_closure_set(v___f_4306_, 2, v_toPure_4302_);
v___x_4307_ = lean_apply_4(v_toBind_4303_, lean_box(0), lean_box(0), v_inst_4304_, v___f_4306_);
return v___x_4307_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg(lean_object* v_inst_4308_, lean_object* v_inst_4309_, lean_object* v_inst_4310_, lean_object* v_msgData_4311_){
_start:
{
lean_object* v_toApplicative_4312_; lean_object* v_toBind_4313_; lean_object* v_getEnv_4314_; lean_object* v_toPure_4315_; lean_object* v___f_4316_; lean_object* v___x_4317_; 
v_toApplicative_4312_ = lean_ctor_get(v_inst_4308_, 0);
lean_inc_ref(v_toApplicative_4312_);
v_toBind_4313_ = lean_ctor_get(v_inst_4308_, 1);
lean_inc_n(v_toBind_4313_, 2);
lean_dec_ref(v_inst_4308_);
v_getEnv_4314_ = lean_ctor_get(v_inst_4309_, 0);
lean_inc(v_getEnv_4314_);
lean_dec_ref(v_inst_4309_);
v_toPure_4315_ = lean_ctor_get(v_toApplicative_4312_, 1);
lean_inc(v_toPure_4315_);
lean_dec_ref(v_toApplicative_4312_);
v___f_4316_ = lean_alloc_closure((void*)(l_Lean_addMessageContextPartial___redArg___lam__1), 5, 4);
lean_closure_set(v___f_4316_, 0, v_msgData_4311_);
lean_closure_set(v___f_4316_, 1, v_toPure_4315_);
lean_closure_set(v___f_4316_, 2, v_toBind_4313_);
lean_closure_set(v___f_4316_, 3, v_inst_4310_);
v___x_4317_ = lean_apply_4(v_toBind_4313_, lean_box(0), lean_box(0), v_getEnv_4314_, v___f_4316_);
return v___x_4317_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial(lean_object* v_m_4318_, lean_object* v_inst_4319_, lean_object* v_inst_4320_, lean_object* v_inst_4321_, lean_object* v_msgData_4322_){
_start:
{
lean_object* v___x_4323_; 
v___x_4323_ = l_Lean_addMessageContextPartial___redArg(v_inst_4319_, v_inst_4320_, v_inst_4321_, v_msgData_4322_);
return v___x_4323_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__0(lean_object* v_env_4324_, lean_object* v_mctx_4325_, lean_object* v_lctx_4326_, lean_object* v_msgData_4327_, lean_object* v_toPure_4328_, lean_object* v_opts_4329_){
_start:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4330_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4330_, 0, v_env_4324_);
lean_ctor_set(v___x_4330_, 1, v_mctx_4325_);
lean_ctor_set(v___x_4330_, 2, v_lctx_4326_);
lean_ctor_set(v___x_4330_, 3, v_opts_4329_);
v___x_4331_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4330_);
lean_ctor_set(v___x_4331_, 1, v_msgData_4327_);
v___x_4332_ = lean_apply_2(v_toPure_4328_, lean_box(0), v___x_4331_);
return v___x_4332_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__1(lean_object* v_env_4333_, lean_object* v_mctx_4334_, lean_object* v_msgData_4335_, lean_object* v_toPure_4336_, lean_object* v_toBind_4337_, lean_object* v_inst_4338_, lean_object* v_lctx_4339_){
_start:
{
lean_object* v___f_4340_; lean_object* v___x_4341_; 
v___f_4340_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__0), 6, 5);
lean_closure_set(v___f_4340_, 0, v_env_4333_);
lean_closure_set(v___f_4340_, 1, v_mctx_4334_);
lean_closure_set(v___f_4340_, 2, v_lctx_4339_);
lean_closure_set(v___f_4340_, 3, v_msgData_4335_);
lean_closure_set(v___f_4340_, 4, v_toPure_4336_);
v___x_4341_ = lean_apply_4(v_toBind_4337_, lean_box(0), lean_box(0), v_inst_4338_, v___f_4340_);
return v___x_4341_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__2(lean_object* v_env_4342_, lean_object* v_msgData_4343_, lean_object* v_toPure_4344_, lean_object* v_toBind_4345_, lean_object* v_inst_4346_, lean_object* v_inst_4347_, lean_object* v_mctx_4348_){
_start:
{
lean_object* v___f_4349_; lean_object* v___x_4350_; 
lean_inc(v_toBind_4345_);
v___f_4349_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__1), 7, 6);
lean_closure_set(v___f_4349_, 0, v_env_4342_);
lean_closure_set(v___f_4349_, 1, v_mctx_4348_);
lean_closure_set(v___f_4349_, 2, v_msgData_4343_);
lean_closure_set(v___f_4349_, 3, v_toPure_4344_);
lean_closure_set(v___f_4349_, 4, v_toBind_4345_);
lean_closure_set(v___f_4349_, 5, v_inst_4346_);
v___x_4350_ = lean_apply_4(v_toBind_4345_, lean_box(0), lean_box(0), v_inst_4347_, v___f_4349_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__3(lean_object* v_inst_4351_, lean_object* v_msgData_4352_, lean_object* v_toPure_4353_, lean_object* v_toBind_4354_, lean_object* v_inst_4355_, lean_object* v_inst_4356_, lean_object* v_env_4357_){
_start:
{
lean_object* v_getMCtx_4358_; lean_object* v___f_4359_; lean_object* v___x_4360_; 
v_getMCtx_4358_ = lean_ctor_get(v_inst_4351_, 0);
lean_inc(v_getMCtx_4358_);
lean_dec_ref(v_inst_4351_);
lean_inc(v_toBind_4354_);
v___f_4359_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__2), 7, 6);
lean_closure_set(v___f_4359_, 0, v_env_4357_);
lean_closure_set(v___f_4359_, 1, v_msgData_4352_);
lean_closure_set(v___f_4359_, 2, v_toPure_4353_);
lean_closure_set(v___f_4359_, 3, v_toBind_4354_);
lean_closure_set(v___f_4359_, 4, v_inst_4355_);
lean_closure_set(v___f_4359_, 5, v_inst_4356_);
v___x_4360_ = lean_apply_4(v_toBind_4354_, lean_box(0), lean_box(0), v_getMCtx_4358_, v___f_4359_);
return v___x_4360_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg(lean_object* v_inst_4361_, lean_object* v_inst_4362_, lean_object* v_inst_4363_, lean_object* v_inst_4364_, lean_object* v_inst_4365_, lean_object* v_msgData_4366_){
_start:
{
lean_object* v_toApplicative_4367_; lean_object* v_toBind_4368_; lean_object* v_getEnv_4369_; lean_object* v_toPure_4370_; lean_object* v___f_4371_; lean_object* v___x_4372_; 
v_toApplicative_4367_ = lean_ctor_get(v_inst_4361_, 0);
lean_inc_ref(v_toApplicative_4367_);
v_toBind_4368_ = lean_ctor_get(v_inst_4361_, 1);
lean_inc_n(v_toBind_4368_, 2);
lean_dec_ref(v_inst_4361_);
v_getEnv_4369_ = lean_ctor_get(v_inst_4362_, 0);
lean_inc(v_getEnv_4369_);
lean_dec_ref(v_inst_4362_);
v_toPure_4370_ = lean_ctor_get(v_toApplicative_4367_, 1);
lean_inc(v_toPure_4370_);
lean_dec_ref(v_toApplicative_4367_);
v___f_4371_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__3), 7, 6);
lean_closure_set(v___f_4371_, 0, v_inst_4363_);
lean_closure_set(v___f_4371_, 1, v_msgData_4366_);
lean_closure_set(v___f_4371_, 2, v_toPure_4370_);
lean_closure_set(v___f_4371_, 3, v_toBind_4368_);
lean_closure_set(v___f_4371_, 4, v_inst_4365_);
lean_closure_set(v___f_4371_, 5, v_inst_4364_);
v___x_4372_ = lean_apply_4(v_toBind_4368_, lean_box(0), lean_box(0), v_getEnv_4369_, v___f_4371_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull(lean_object* v_m_4373_, lean_object* v_inst_4374_, lean_object* v_inst_4375_, lean_object* v_inst_4376_, lean_object* v_inst_4377_, lean_object* v_inst_4378_, lean_object* v_msgData_4379_){
_start:
{
lean_object* v___x_4380_; 
v___x_4380_ = l_Lean_addMessageContextFull___redArg(v_inst_4374_, v_inst_4375_, v_inst_4376_, v_inst_4377_, v_inst_4378_, v_msgData_4379_);
return v___x_4380_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg(){
_start:
{
lean_object* v___x_4384_; 
v___x_4384_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0));
return v___x_4384_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___boxed(lean_object* v___dummy_4385_){
_start:
{
lean_object* v_res_4386_; 
v_res_4386_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg();
return v_res_4386_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4387_; 
v___x_4387_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg();
return v___x_4387_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(lean_object* v_s_4388_){
_start:
{
lean_object* v___x_4389_; 
v___x_4389_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0);
return v___x_4389_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___boxed(lean_object* v_s_4390_){
_start:
{
lean_object* v_res_4391_; 
v_res_4391_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(v_s_4390_);
lean_dec_ref(v_s_4390_);
return v_res_4391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(lean_object* v_str_4392_, lean_object* v___x_4393_, lean_object* v___x_4394_, lean_object* v_a_4395_, lean_object* v_b_4396_){
_start:
{
lean_object* v_it_4398_; lean_object* v_startInclusive_4399_; lean_object* v_endExclusive_4400_; 
if (lean_obj_tag(v_a_4395_) == 0)
{
lean_object* v_currPos_4406_; lean_object* v_searcher_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4430_; 
v_currPos_4406_ = lean_ctor_get(v_a_4395_, 0);
v_searcher_4407_ = lean_ctor_get(v_a_4395_, 1);
v_isSharedCheck_4430_ = !lean_is_exclusive(v_a_4395_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4409_ = v_a_4395_;
v_isShared_4410_ = v_isSharedCheck_4430_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_searcher_4407_);
lean_inc(v_currPos_4406_);
lean_dec(v_a_4395_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4430_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
uint8_t v_decide_4411_; 
v_decide_4411_ = lean_nat_dec_eq(v_searcher_4407_, v___x_4394_);
if (v_decide_4411_ == 0)
{
uint32_t v___x_4412_; uint32_t v___x_4413_; uint8_t v___x_4414_; 
v___x_4412_ = 10;
v___x_4413_ = lean_string_utf8_get_fast(v_str_4392_, v_searcher_4407_);
v___x_4414_ = lean_uint32_dec_eq(v___x_4413_, v___x_4412_);
if (v___x_4414_ == 0)
{
lean_object* v___x_4415_; lean_object* v___x_4417_; 
v___x_4415_ = lean_string_utf8_next_fast(v_str_4392_, v_searcher_4407_);
lean_dec(v_searcher_4407_);
if (v_isShared_4410_ == 0)
{
lean_ctor_set(v___x_4409_, 1, v___x_4415_);
v___x_4417_ = v___x_4409_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v_currPos_4406_);
lean_ctor_set(v_reuseFailAlloc_4419_, 1, v___x_4415_);
v___x_4417_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
v_a_4395_ = v___x_4417_;
goto _start;
}
}
else
{
lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v_slice_4423_; lean_object* v_nextIt_4425_; 
v___x_4420_ = lean_string_utf8_next_fast(v_str_4392_, v_searcher_4407_);
v___x_4421_ = lean_nat_sub(v___x_4420_, v_searcher_4407_);
v___x_4422_ = lean_nat_add(v_searcher_4407_, v___x_4421_);
lean_dec(v___x_4421_);
v_slice_4423_ = l_String_Slice_subslice_x21(v___x_4393_, v_currPos_4406_, v_searcher_4407_);
lean_inc(v___x_4422_);
if (v_isShared_4410_ == 0)
{
lean_ctor_set(v___x_4409_, 1, v___x_4422_);
lean_ctor_set(v___x_4409_, 0, v___x_4422_);
v_nextIt_4425_ = v___x_4409_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v___x_4422_);
lean_ctor_set(v_reuseFailAlloc_4428_, 1, v___x_4422_);
v_nextIt_4425_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
lean_object* v_startInclusive_4426_; lean_object* v_endExclusive_4427_; 
v_startInclusive_4426_ = lean_ctor_get(v_slice_4423_, 0);
lean_inc(v_startInclusive_4426_);
v_endExclusive_4427_ = lean_ctor_get(v_slice_4423_, 1);
lean_inc(v_endExclusive_4427_);
lean_dec_ref(v_slice_4423_);
v_it_4398_ = v_nextIt_4425_;
v_startInclusive_4399_ = v_startInclusive_4426_;
v_endExclusive_4400_ = v_endExclusive_4427_;
goto v___jp_4397_;
}
}
}
else
{
lean_object* v___x_4429_; 
lean_del_object(v___x_4409_);
lean_dec(v_searcher_4407_);
v___x_4429_ = lean_box(1);
lean_inc(v___x_4394_);
v_it_4398_ = v___x_4429_;
v_startInclusive_4399_ = v_currPos_4406_;
v_endExclusive_4400_ = v___x_4394_;
goto v___jp_4397_;
}
}
}
else
{
lean_dec(v___x_4394_);
return v_b_4396_;
}
v___jp_4397_:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4401_ = lean_string_utf8_extract_fast(v_str_4392_, v_startInclusive_4399_, v_endExclusive_4400_);
lean_dec(v_endExclusive_4400_);
lean_dec(v_startInclusive_4399_);
v___x_4402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4401_);
v___x_4403_ = l_Lean_MessageData_ofFormat(v___x_4402_);
v___x_4404_ = lean_array_push(v_b_4396_, v___x_4403_);
v_a_4395_ = v_it_4398_;
v_b_4396_ = v___x_4404_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg___boxed(lean_object* v_str_4431_, lean_object* v___x_4432_, lean_object* v___x_4433_, lean_object* v_a_4434_, lean_object* v_b_4435_){
_start:
{
lean_object* v_res_4436_; 
v_res_4436_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4431_, v___x_4432_, v___x_4433_, v_a_4434_, v_b_4435_);
lean_dec_ref(v___x_4432_);
lean_dec_ref(v_str_4431_);
return v_res_4436_;
}
}
LEAN_EXPORT lean_object* l_Lean_stringToMessageData(lean_object* v_str_4439_){
_start:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v_lines_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; 
v___x_4440_ = lean_unsigned_to_nat(0u);
v___x_4441_ = lean_string_utf8_byte_size(v_str_4439_);
lean_inc_ref(v_str_4439_);
v___x_4442_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4442_, 0, v_str_4439_);
lean_ctor_set(v___x_4442_, 1, v___x_4440_);
lean_ctor_set(v___x_4442_, 2, v___x_4441_);
v_lines_4443_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0);
v___x_4444_ = ((lean_object*)(l_Lean_stringToMessageData___closed__0));
v___x_4445_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4439_, v___x_4442_, v___x_4441_, v_lines_4443_, v___x_4444_);
lean_dec_ref_known(v___x_4442_, 3);
lean_dec_ref(v_str_4439_);
v___x_4446_ = lean_array_to_list(v___x_4445_);
v___x_4447_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4448_ = l_Lean_MessageData_joinSep(v___x_4446_, v___x_4447_);
return v___x_4448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(lean_object* v_str_4449_, lean_object* v___x_4450_, lean_object* v___x_4451_, lean_object* v_inst_4452_, lean_object* v_R_4453_, lean_object* v_a_4454_, lean_object* v_b_4455_){
_start:
{
lean_object* v___x_4456_; 
v___x_4456_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4449_, v___x_4450_, v___x_4451_, v_a_4454_, v_b_4455_);
return v___x_4456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___boxed(lean_object* v_str_4457_, lean_object* v___x_4458_, lean_object* v___x_4459_, lean_object* v_inst_4460_, lean_object* v_R_4461_, lean_object* v_a_4462_, lean_object* v_b_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(v_str_4457_, v___x_4458_, v___x_4459_, v_inst_4460_, v_R_4461_, v_a_4462_, v_b_4463_);
lean_dec_ref(v___x_4458_);
lean_dec_ref(v_str_4457_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat___redArg(lean_object* v_inst_4465_){
_start:
{
lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4466_ = ((lean_object*)(l_Lean_MessageData_instCoeString___closed__1));
v___x_4467_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4467_, 0, lean_box(0));
lean_closure_set(v___x_4467_, 1, lean_box(0));
lean_closure_set(v___x_4467_, 2, lean_box(0));
lean_closure_set(v___x_4467_, 3, v___x_4466_);
lean_closure_set(v___x_4467_, 4, v_inst_4465_);
return v___x_4467_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat(lean_object* v_00_u03b1_4468_, lean_object* v_inst_4469_){
_start:
{
lean_object* v___x_4470_; 
v___x_4470_ = l_Lean_instToMessageDataOfToFormat___redArg(v_inst_4469_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg(){
_start:
{
lean_object* v___f_4478_; 
v___f_4478_ = ((lean_object*)(l_Lean_MessageData_instCoeSyntax___closed__0));
return v___f_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg___boxed(lean_object* v___dummy_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_Lean_instToMessageDataTSyntax___redArg();
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax(lean_object* v_k_4481_){
_start:
{
lean_object* v___f_4482_; 
v___f_4482_ = ((lean_object*)(l_Lean_MessageData_instCoeSyntax___closed__0));
return v___f_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___boxed(lean_object* v_k_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l_Lean_instToMessageDataTSyntax(v_k_4483_);
lean_dec(v_k_4483_);
return v_res_4484_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg___lam__0(lean_object* v_inst_4489_, lean_object* v_as_4490_){
_start:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4491_ = lean_box(0);
v___x_4492_ = l_List_mapTR_loop___redArg(v_inst_4489_, v_as_4490_, v___x_4491_);
v___x_4493_ = l_Lean_MessageData_ofList(v___x_4492_);
return v___x_4493_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg(lean_object* v_inst_4494_){
_start:
{
lean_object* v___f_4495_; 
v___f_4495_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4495_, 0, v_inst_4494_);
return v___f_4495_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList(lean_object* v_00_u03b1_4496_, lean_object* v_inst_4497_){
_start:
{
lean_object* v___f_4498_; 
v___f_4498_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4498_, 0, v_inst_4497_);
return v___f_4498_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg___lam__0(lean_object* v_inst_4499_, lean_object* v_as_4500_){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v___x_4501_ = lean_array_to_list(v_as_4500_);
v___x_4502_ = lean_box(0);
v___x_4503_ = l_List_mapTR_loop___redArg(v_inst_4499_, v___x_4501_, v___x_4502_);
v___x_4504_ = l_Lean_MessageData_ofList(v___x_4503_);
return v___x_4504_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg(lean_object* v_inst_4505_){
_start:
{
lean_object* v___f_4506_; 
v___f_4506_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4506_, 0, v_inst_4505_);
return v___f_4506_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray(lean_object* v_00_u03b1_4507_, lean_object* v_inst_4508_){
_start:
{
lean_object* v___f_4509_; 
v___f_4509_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4509_, 0, v_inst_4508_);
return v___f_4509_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__0(lean_object* v_it_4510_, lean_object* v_acc_4511_, lean_object* v_recur_4512_){
_start:
{
lean_object* v_array_4513_; lean_object* v_start_4514_; lean_object* v_stop_4515_; lean_object* v___x_4517_; uint8_t v_isShared_4518_; uint8_t v_isSharedCheck_4528_; 
v_array_4513_ = lean_ctor_get(v_it_4510_, 0);
v_start_4514_ = lean_ctor_get(v_it_4510_, 1);
v_stop_4515_ = lean_ctor_get(v_it_4510_, 2);
v_isSharedCheck_4528_ = !lean_is_exclusive(v_it_4510_);
if (v_isSharedCheck_4528_ == 0)
{
v___x_4517_ = v_it_4510_;
v_isShared_4518_ = v_isSharedCheck_4528_;
goto v_resetjp_4516_;
}
else
{
lean_inc(v_stop_4515_);
lean_inc(v_start_4514_);
lean_inc(v_array_4513_);
lean_dec(v_it_4510_);
v___x_4517_ = lean_box(0);
v_isShared_4518_ = v_isSharedCheck_4528_;
goto v_resetjp_4516_;
}
v_resetjp_4516_:
{
uint8_t v___x_4519_; 
v___x_4519_ = lean_nat_dec_lt(v_start_4514_, v_stop_4515_);
if (v___x_4519_ == 0)
{
lean_del_object(v___x_4517_);
lean_dec(v_stop_4515_);
lean_dec(v_start_4514_);
lean_dec_ref(v_array_4513_);
lean_dec_ref(v_recur_4512_);
return v_acc_4511_;
}
else
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4523_; 
v___x_4520_ = lean_unsigned_to_nat(1u);
v___x_4521_ = lean_nat_add(v_start_4514_, v___x_4520_);
lean_inc_ref(v_array_4513_);
if (v_isShared_4518_ == 0)
{
lean_ctor_set(v___x_4517_, 1, v___x_4521_);
v___x_4523_ = v___x_4517_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_array_4513_);
lean_ctor_set(v_reuseFailAlloc_4527_, 1, v___x_4521_);
lean_ctor_set(v_reuseFailAlloc_4527_, 2, v_stop_4515_);
v___x_4523_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = lean_array_fget(v_array_4513_, v_start_4514_);
lean_dec(v_start_4514_);
lean_dec_ref(v_array_4513_);
v___x_4525_ = lean_array_push(v_acc_4511_, v___x_4524_);
v___x_4526_ = lean_apply_3(v_recur_4512_, v___x_4523_, v___x_4525_, lean_box(0));
return v___x_4526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1(lean_object* v___f_4531_, lean_object* v_inst_4532_, lean_object* v_as_4533_){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4534_ = ((lean_object*)(l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0));
v___x_4535_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_4531_, v_as_4533_, v___x_4534_);
v___x_4536_ = lean_array_to_list(v___x_4535_);
v___x_4537_ = lean_box(0);
v___x_4538_ = l_List_mapTR_loop___redArg(v_inst_4532_, v___x_4536_, v___x_4537_);
v___x_4539_ = l_Lean_MessageData_ofList(v___x_4538_);
return v___x_4539_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg(lean_object* v_inst_4541_){
_start:
{
lean_object* v___f_4542_; lean_object* v___f_4543_; 
v___f_4542_ = ((lean_object*)(l_Lean_instToMessageDataSubarray___redArg___closed__0));
v___f_4543_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataSubarray___redArg___lam__1), 3, 2);
lean_closure_set(v___f_4543_, 0, v___f_4542_);
lean_closure_set(v___f_4543_, 1, v_inst_4541_);
return v___f_4543_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray(lean_object* v_00_u03b1_4544_, lean_object* v_inst_4545_){
_start:
{
lean_object* v___x_4546_; 
v___x_4546_ = l_Lean_instToMessageDataSubarray___redArg(v_inst_4545_);
return v___x_4546_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; 
v___x_4550_ = ((lean_object*)(l_Lean_instToMessageDataOption___redArg___lam__0___closed__1));
v___x_4551_ = l_Lean_MessageData_ofFormat(v___x_4550_);
return v___x_4551_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4554_ = ((lean_object*)(l_Lean_instToMessageDataOption___redArg___lam__0___closed__3));
v___x_4555_ = l_Lean_MessageData_ofFormat(v___x_4554_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg___lam__0(lean_object* v_inst_4556_, lean_object* v_x_4557_){
_start:
{
if (lean_obj_tag(v_x_4557_) == 0)
{
lean_object* v___x_4558_; 
lean_dec_ref(v_inst_4556_);
v___x_4558_ = lean_obj_once(&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2);
return v___x_4558_;
}
else
{
lean_object* v_val_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v_val_4559_ = lean_ctor_get(v_x_4557_, 0);
lean_inc(v_val_4559_);
lean_dec_ref_known(v_x_4557_, 1);
v___x_4560_ = lean_obj_once(&l_Lean_instToMessageDataOption___redArg___lam__0___closed__2, &l_Lean_instToMessageDataOption___redArg___lam__0___closed__2_once, _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__2);
v___x_4561_ = lean_apply_1(v_inst_4556_, v_val_4559_);
v___x_4562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4560_);
lean_ctor_set(v___x_4562_, 1, v___x_4561_);
v___x_4563_ = lean_obj_once(&l_Lean_instToMessageDataOption___redArg___lam__0___closed__4, &l_Lean_instToMessageDataOption___redArg___lam__0___closed__4_once, _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__4);
v___x_4564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4564_, 0, v___x_4562_);
lean_ctor_set(v___x_4564_, 1, v___x_4563_);
return v___x_4564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg(lean_object* v_inst_4565_){
_start:
{
lean_object* v___f_4566_; 
v___f_4566_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4566_, 0, v_inst_4565_);
return v___f_4566_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption(lean_object* v_00_u03b1_4567_, lean_object* v_inst_4568_){
_start:
{
lean_object* v___f_4569_; 
v___f_4569_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4569_, 0, v_inst_4568_);
return v___f_4569_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg___lam__0(lean_object* v_inst_4570_, lean_object* v_inst_4571_, lean_object* v_x_4572_){
_start:
{
lean_object* v_fst_4573_; lean_object* v_snd_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4588_; 
v_fst_4573_ = lean_ctor_get(v_x_4572_, 0);
v_snd_4574_ = lean_ctor_get(v_x_4572_, 1);
v_isSharedCheck_4588_ = !lean_is_exclusive(v_x_4572_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4576_ = v_x_4572_;
v_isShared_4577_ = v_isSharedCheck_4588_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_snd_4574_);
lean_inc(v_fst_4573_);
lean_dec(v_x_4572_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4588_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4581_; 
v___x_4578_ = lean_apply_1(v_inst_4570_, v_fst_4573_);
v___x_4579_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__5, &l_Lean_MessageData_ofList___closed__5_once, _init_l_Lean_MessageData_ofList___closed__5);
if (v_isShared_4577_ == 0)
{
lean_ctor_set_tag(v___x_4576_, 7);
lean_ctor_set(v___x_4576_, 1, v___x_4579_);
lean_ctor_set(v___x_4576_, 0, v___x_4578_);
v___x_4581_ = v___x_4576_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v___x_4578_);
lean_ctor_set(v_reuseFailAlloc_4587_, 1, v___x_4579_);
v___x_4581_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; 
v___x_4582_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4583_, 0, v___x_4581_);
lean_ctor_set(v___x_4583_, 1, v___x_4582_);
v___x_4584_ = lean_apply_1(v_inst_4571_, v_snd_4574_);
v___x_4585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4583_);
lean_ctor_set(v___x_4585_, 1, v___x_4584_);
v___x_4586_ = l_Lean_MessageData_paren(v___x_4585_);
return v___x_4586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg(lean_object* v_inst_4589_, lean_object* v_inst_4590_){
_start:
{
lean_object* v___f_4591_; 
v___f_4591_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4591_, 0, v_inst_4589_);
lean_closure_set(v___f_4591_, 1, v_inst_4590_);
return v___f_4591_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd(lean_object* v_00_u03b1_4592_, lean_object* v_00_u03b2_4593_, lean_object* v_inst_4594_, lean_object* v_inst_4595_){
_start:
{
lean_object* v___f_4596_; 
v___f_4596_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4596_, 0, v_inst_4594_);
lean_closure_set(v___f_4596_, 1, v_inst_4595_);
return v___f_4596_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOptionExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4600_; lean_object* v___x_4601_; 
v___x_4600_ = ((lean_object*)(l_Lean_instToMessageDataOptionExpr___lam__0___closed__1));
v___x_4601_ = l_Lean_MessageData_ofFormat(v___x_4600_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOptionExpr___lam__0(lean_object* v_x_4602_){
_start:
{
if (lean_obj_tag(v_x_4602_) == 0)
{
lean_object* v___x_4603_; 
v___x_4603_ = lean_obj_once(&l_Lean_instToMessageDataOptionExpr___lam__0___closed__2, &l_Lean_instToMessageDataOptionExpr___lam__0___closed__2_once, _init_l_Lean_instToMessageDataOptionExpr___lam__0___closed__2);
return v___x_4603_;
}
else
{
lean_object* v_val_4604_; lean_object* v___x_4605_; 
v_val_4604_ = lean_ctor_get(v_x_4602_, 0);
lean_inc(v_val_4604_);
lean_dec_ref_known(v_x_4602_, 1);
v___x_4605_ = l_Lean_MessageData_ofExpr(v_val_4604_);
return v___x_4605_;
}
}
}
static lean_object* _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0(void){
_start:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4639_ = ((lean_object*)(l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___x_4640_ = l_String_toRawSubstring_x27(v___x_4639_);
return v___x_4640_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7(void){
_start:
{
lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4655_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6));
v___x_4656_ = l_String_toRawSubstring_x27(v___x_4655_);
return v___x_4656_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(lean_object* v_x_4670_, lean_object* v_a_4671_, lean_object* v_a_4672_){
_start:
{
lean_object* v___x_4673_; uint8_t v___x_4674_; 
v___x_4673_ = ((lean_object*)(l_Lean_termM_x21___00__closed__1));
lean_inc(v_x_4670_);
v___x_4674_ = l_Lean_Syntax_isOfKind(v_x_4670_, v___x_4673_);
if (v___x_4674_ == 0)
{
lean_object* v___x_4675_; lean_object* v___x_4676_; 
lean_dec(v_x_4670_);
v___x_4675_ = lean_box(1);
v___x_4676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4676_, 0, v___x_4675_);
lean_ctor_set(v___x_4676_, 1, v_a_4672_);
return v___x_4676_;
}
else
{
lean_object* v_quotContext_4677_; lean_object* v_currMacroScope_4678_; lean_object* v_ref_4679_; lean_object* v___x_4680_; lean_object* v_interpStr_4681_; uint8_t v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v_quotContext_4677_ = lean_ctor_get(v_a_4671_, 1);
v_currMacroScope_4678_ = lean_ctor_get(v_a_4671_, 2);
v_ref_4679_ = lean_ctor_get(v_a_4671_, 5);
v___x_4680_ = lean_unsigned_to_nat(1u);
v_interpStr_4681_ = l_Lean_Syntax_getArg(v_x_4670_, v___x_4680_);
lean_dec(v_x_4670_);
v___x_4682_ = 0;
v___x_4683_ = l_Lean_SourceInfo_fromRef(v_ref_4679_, v___x_4682_);
v___x_4684_ = lean_obj_once(&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0, &l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0_once, _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0);
v___x_4685_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1));
lean_inc_n(v_currMacroScope_4678_, 2);
lean_inc_n(v_quotContext_4677_, 2);
v___x_4686_ = l_Lean_addMacroScope(v_quotContext_4677_, v___x_4685_, v_currMacroScope_4678_);
v___x_4687_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5));
lean_inc(v___x_4683_);
v___x_4688_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4683_);
lean_ctor_set(v___x_4688_, 1, v___x_4684_);
lean_ctor_set(v___x_4688_, 2, v___x_4686_);
lean_ctor_set(v___x_4688_, 3, v___x_4687_);
v___x_4689_ = lean_obj_once(&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7, &l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7_once, _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7);
v___x_4690_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8));
v___x_4691_ = l_Lean_addMacroScope(v_quotContext_4677_, v___x_4690_, v_currMacroScope_4678_);
v___x_4692_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12));
v___x_4693_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4683_);
lean_ctor_set(v___x_4693_, 1, v___x_4689_);
lean_ctor_set(v___x_4693_, 2, v___x_4691_);
lean_ctor_set(v___x_4693_, 3, v___x_4692_);
lean_inc_ref(v___x_4693_);
v___x_4694_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_4681_, v___x_4688_, v___x_4693_, v___x_4693_, v_a_4671_, v_a_4672_);
lean_dec(v_interpStr_4681_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v_a_4695_; lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
v_a_4695_ = lean_ctor_get(v___x_4694_, 0);
v_a_4696_ = lean_ctor_get(v___x_4694_, 1);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4694_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_inc(v_a_4695_);
lean_dec(v___x_4694_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4695_);
lean_ctor_set(v_reuseFailAlloc_4702_, 1, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
else
{
lean_object* v_a_4704_; lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4712_; 
v_a_4704_ = lean_ctor_get(v___x_4694_, 0);
v_a_4705_ = lean_ctor_get(v___x_4694_, 1);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4707_ = v___x_4694_;
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_inc(v_a_4704_);
lean_dec(v___x_4694_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
lean_object* v___x_4710_; 
if (v_isShared_4708_ == 0)
{
v___x_4710_ = v___x_4707_;
goto v_reusejp_4709_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v_a_4704_);
lean_ctor_set(v_reuseFailAlloc_4711_, 1, v_a_4705_);
v___x_4710_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4709_;
}
v_reusejp_4709_:
{
return v___x_4710_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___boxed(lean_object* v_x_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_){
_start:
{
lean_object* v_res_4716_; 
v_res_4716_ = l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(v_x_4713_, v_a_4714_, v_a_4715_);
lean_dec_ref(v_a_4714_);
return v_res_4716_;
}
}
static lean_object* _init_l_Lean_toMessageList___closed__1(void){
_start:
{
lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4718_ = ((lean_object*)(l_Lean_toMessageList___closed__0));
v___x_4719_ = l_Lean_stringToMessageData(v___x_4718_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l_Lean_toMessageList(lean_object* v_msgs_4720_){
_start:
{
lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; 
v___x_4721_ = lean_array_to_list(v_msgs_4720_);
v___x_4722_ = lean_obj_once(&l_Lean_toMessageList___closed__1, &l_Lean_toMessageList___closed__1_once, _init_l_Lean_toMessageList___closed__1);
v___x_4723_ = l_Lean_MessageData_joinSep(v___x_4721_, v___x_4722_);
v___x_4724_ = l_Lean_indentD(v___x_4723_);
return v___x_4724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(lean_object* v_env_4725_, lean_object* v_lctx_4726_, lean_object* v_opts_4727_, lean_object* v_msg_4728_){
_start:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4729_ = l_Lean_Environment_ofKernelEnv(v_env_4725_);
v___x_4730_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_4731_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4729_);
lean_ctor_set(v___x_4731_, 1, v___x_4730_);
lean_ctor_set(v___x_4731_, 2, v_lctx_4726_);
lean_ctor_set(v___x_4731_, 3, v_opts_4727_);
v___x_4732_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4732_, 0, v___x_4731_);
lean_ctor_set(v___x_4732_, 1, v_msg_4728_);
return v___x_4732_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
v___x_4734_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0));
v___x_4735_ = l_Lean_stringToMessageData(v___x_4734_);
return v___x_4735_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4737_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2));
v___x_4738_ = l_Lean_stringToMessageData(v___x_4737_);
return v___x_4738_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4740_; lean_object* v___x_4741_; 
v___x_4740_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4));
v___x_4741_ = l_Lean_stringToMessageData(v___x_4740_);
return v___x_4741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0(lean_object* v_givenType_4742_, lean_object* v_n_4743_, lean_object* v_expectedType_4744_){
_start:
{
lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4745_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1);
v___x_4746_ = l_Lean_MessageData_ofName(v_n_4743_);
v___x_4747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4745_);
lean_ctor_set(v___x_4747_, 1, v___x_4746_);
v___x_4748_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3);
v___x_4749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4747_);
lean_ctor_set(v___x_4749_, 1, v___x_4748_);
v___x_4750_ = l_Lean_indentExpr(v_givenType_4742_);
v___x_4751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4749_);
lean_ctor_set(v___x_4751_, 1, v___x_4750_);
v___x_4752_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5);
v___x_4753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4753_, 0, v___x_4751_);
lean_ctor_set(v___x_4753_, 1, v___x_4752_);
v___x_4754_ = l_Lean_indentExpr(v_expectedType_4744_);
v___x_4755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4753_);
lean_ctor_set(v___x_4755_, 1, v___x_4754_);
return v___x_4755_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0);
v___x_4757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4757_, 0, v___x_4756_);
return v___x_4757_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; 
v___x_4758_ = lean_box(1);
v___x_4759_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__1, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1);
v___x_4760_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__0, &l_Lean_Kernel_Exception_toMessageData___closed__0_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__0);
v___x_4761_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4761_, 0, v___x_4760_);
lean_ctor_set(v___x_4761_, 1, v___x_4759_);
lean_ctor_set(v___x_4761_, 2, v___x_4758_);
return v___x_4761_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_4763_; lean_object* v___x_4764_; 
v___x_4763_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__2));
v___x_4764_ = l_Lean_stringToMessageData(v___x_4763_);
return v___x_4764_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__5(void){
_start:
{
lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4766_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__4));
v___x_4767_ = l_Lean_stringToMessageData(v___x_4766_);
return v___x_4767_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__7(void){
_start:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4769_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__6));
v___x_4770_ = l_Lean_stringToMessageData(v___x_4769_);
return v___x_4770_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__10(void){
_start:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4774_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__9));
v___x_4775_ = l_Lean_MessageData_ofFormat(v___x_4774_);
return v___x_4775_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__12(void){
_start:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; 
v___x_4777_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__11));
v___x_4778_ = l_Lean_stringToMessageData(v___x_4777_);
return v___x_4778_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__14(void){
_start:
{
lean_object* v___x_4780_; lean_object* v___x_4781_; 
v___x_4780_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__13));
v___x_4781_ = l_Lean_stringToMessageData(v___x_4780_);
return v___x_4781_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__16(void){
_start:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; 
v___x_4783_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__15));
v___x_4784_ = l_Lean_stringToMessageData(v___x_4783_);
return v___x_4784_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__18(void){
_start:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; 
v___x_4786_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__17));
v___x_4787_ = l_Lean_stringToMessageData(v___x_4786_);
return v___x_4787_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__20(void){
_start:
{
lean_object* v___x_4789_; lean_object* v___x_4790_; 
v___x_4789_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__19));
v___x_4790_ = l_Lean_stringToMessageData(v___x_4789_);
return v___x_4790_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__22(void){
_start:
{
lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4792_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__21));
v___x_4793_ = l_Lean_stringToMessageData(v___x_4792_);
return v___x_4793_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__24(void){
_start:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4795_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__23));
v___x_4796_ = l_Lean_stringToMessageData(v___x_4795_);
return v___x_4796_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__26(void){
_start:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4798_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__25));
v___x_4799_ = l_Lean_stringToMessageData(v___x_4798_);
return v___x_4799_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__28(void){
_start:
{
lean_object* v___x_4801_; lean_object* v___x_4802_; 
v___x_4801_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__27));
v___x_4802_ = l_Lean_stringToMessageData(v___x_4801_);
return v___x_4802_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__30(void){
_start:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4804_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__29));
v___x_4805_ = l_Lean_stringToMessageData(v___x_4804_);
return v___x_4805_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__32(void){
_start:
{
lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4807_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__31));
v___x_4808_ = l_Lean_stringToMessageData(v___x_4807_);
return v___x_4808_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__34(void){
_start:
{
lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4810_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__33));
v___x_4811_ = l_Lean_stringToMessageData(v___x_4810_);
return v___x_4811_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__36(void){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4813_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__35));
v___x_4814_ = l_Lean_stringToMessageData(v___x_4813_);
return v___x_4814_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__38(void){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4816_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__37));
v___x_4817_ = l_Lean_stringToMessageData(v___x_4816_);
return v___x_4817_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__41(void){
_start:
{
lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4821_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__40));
v___x_4822_ = l_Lean_MessageData_ofFormat(v___x_4821_);
return v___x_4822_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__44(void){
_start:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4826_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__43));
v___x_4827_ = l_Lean_MessageData_ofFormat(v___x_4826_);
return v___x_4827_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__47(void){
_start:
{
lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4831_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__46));
v___x_4832_ = l_Lean_MessageData_ofFormat(v___x_4831_);
return v___x_4832_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__50(void){
_start:
{
lean_object* v___x_4836_; lean_object* v___x_4837_; 
v___x_4836_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__49));
v___x_4837_ = l_Lean_MessageData_ofFormat(v___x_4836_);
return v___x_4837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object* v_e_4838_, lean_object* v_opts_4839_){
_start:
{
switch(lean_obj_tag(v_e_4838_))
{
case 0:
{
lean_object* v_env_4840_; lean_object* v_name_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4854_; 
v_env_4840_ = lean_ctor_get(v_e_4838_, 0);
v_name_4841_ = lean_ctor_get(v_e_4838_, 1);
v_isSharedCheck_4854_ = !lean_is_exclusive(v_e_4838_);
if (v_isSharedCheck_4854_ == 0)
{
v___x_4843_ = v_e_4838_;
v_isShared_4844_ = v_isSharedCheck_4854_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_name_4841_);
lean_inc(v_env_4840_);
lean_dec(v_e_4838_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4854_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4849_; 
v___x_4845_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4846_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__3, &l_Lean_Kernel_Exception_toMessageData___closed__3_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__3);
v___x_4847_ = l_Lean_MessageData_ofName(v_name_4841_);
if (v_isShared_4844_ == 0)
{
lean_ctor_set_tag(v___x_4843_, 7);
lean_ctor_set(v___x_4843_, 1, v___x_4847_);
lean_ctor_set(v___x_4843_, 0, v___x_4846_);
v___x_4849_ = v___x_4843_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v___x_4846_);
lean_ctor_set(v_reuseFailAlloc_4853_, 1, v___x_4847_);
v___x_4849_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4850_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4851_, 0, v___x_4849_);
lean_ctor_set(v___x_4851_, 1, v___x_4850_);
v___x_4852_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4840_, v___x_4845_, v_opts_4839_, v___x_4851_);
return v___x_4852_;
}
}
}
case 1:
{
lean_object* v_env_4855_; lean_object* v_name_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4870_; 
v_env_4855_ = lean_ctor_get(v_e_4838_, 0);
v_name_4856_ = lean_ctor_get(v_e_4838_, 1);
v_isSharedCheck_4870_ = !lean_is_exclusive(v_e_4838_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4858_ = v_e_4838_;
v_isShared_4859_ = v_isSharedCheck_4870_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_name_4856_);
lean_inc(v_env_4855_);
lean_dec(v_e_4838_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4870_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; uint8_t v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4865_; 
v___x_4860_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4861_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__7, &l_Lean_Kernel_Exception_toMessageData___closed__7_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__7);
v___x_4862_ = 1;
v___x_4863_ = l_Lean_MessageData_ofConstName(v_name_4856_, v___x_4862_);
if (v_isShared_4859_ == 0)
{
lean_ctor_set_tag(v___x_4858_, 7);
lean_ctor_set(v___x_4858_, 1, v___x_4863_);
lean_ctor_set(v___x_4858_, 0, v___x_4861_);
v___x_4865_ = v___x_4858_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v___x_4861_);
lean_ctor_set(v_reuseFailAlloc_4869_, 1, v___x_4863_);
v___x_4865_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v___x_4866_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4865_);
lean_ctor_set(v___x_4867_, 1, v___x_4866_);
v___x_4868_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4855_, v___x_4860_, v_opts_4839_, v___x_4867_);
return v___x_4868_;
}
}
}
case 2:
{
lean_object* v_env_4871_; lean_object* v_decl_4872_; lean_object* v_givenType_4873_; lean_object* v___x_4874_; 
v_env_4871_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4871_);
v_decl_4872_ = lean_ctor_get(v_e_4838_, 1);
lean_inc(v_decl_4872_);
v_givenType_4873_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_givenType_4873_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4874_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
switch(lean_obj_tag(v_decl_4872_))
{
case 1:
{
lean_object* v_val_4875_; lean_object* v_toConstantVal_4876_; lean_object* v_name_4877_; lean_object* v_type_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; 
v_val_4875_ = lean_ctor_get(v_decl_4872_, 0);
lean_inc_ref(v_val_4875_);
lean_dec_ref_known(v_decl_4872_, 1);
v_toConstantVal_4876_ = lean_ctor_get(v_val_4875_, 0);
lean_inc_ref(v_toConstantVal_4876_);
lean_dec_ref(v_val_4875_);
v_name_4877_ = lean_ctor_get(v_toConstantVal_4876_, 0);
lean_inc(v_name_4877_);
v_type_4878_ = lean_ctor_get(v_toConstantVal_4876_, 2);
lean_inc_ref(v_type_4878_);
lean_dec_ref(v_toConstantVal_4876_);
v___x_4879_ = l_Lean_Kernel_Exception_toMessageData___lam__0(v_givenType_4873_, v_name_4877_, v_type_4878_);
v___x_4880_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4871_, v___x_4874_, v_opts_4839_, v___x_4879_);
return v___x_4880_;
}
case 2:
{
lean_object* v_val_4881_; lean_object* v_toConstantVal_4882_; lean_object* v_name_4883_; lean_object* v_type_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v_val_4881_ = lean_ctor_get(v_decl_4872_, 0);
lean_inc_ref(v_val_4881_);
lean_dec_ref_known(v_decl_4872_, 1);
v_toConstantVal_4882_ = lean_ctor_get(v_val_4881_, 0);
lean_inc_ref(v_toConstantVal_4882_);
lean_dec_ref(v_val_4881_);
v_name_4883_ = lean_ctor_get(v_toConstantVal_4882_, 0);
lean_inc(v_name_4883_);
v_type_4884_ = lean_ctor_get(v_toConstantVal_4882_, 2);
lean_inc_ref(v_type_4884_);
lean_dec_ref(v_toConstantVal_4882_);
v___x_4885_ = l_Lean_Kernel_Exception_toMessageData___lam__0(v_givenType_4873_, v_name_4883_, v_type_4884_);
v___x_4886_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4871_, v___x_4874_, v_opts_4839_, v___x_4885_);
return v___x_4886_;
}
default: 
{
lean_object* v___x_4887_; lean_object* v___x_4888_; 
lean_dec_ref(v_givenType_4873_);
lean_dec(v_decl_4872_);
v___x_4887_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__10, &l_Lean_Kernel_Exception_toMessageData___closed__10_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__10);
v___x_4888_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4871_, v___x_4874_, v_opts_4839_, v___x_4887_);
return v___x_4888_;
}
}
}
case 3:
{
lean_object* v_env_4889_; lean_object* v_name_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; uint8_t v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; 
v_env_4889_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4889_);
v_name_4890_ = lean_ctor_get(v_e_4838_, 1);
lean_inc(v_name_4890_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4891_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4892_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__12, &l_Lean_Kernel_Exception_toMessageData___closed__12_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__12);
v___x_4893_ = 1;
v___x_4894_ = l_Lean_MessageData_ofConstName(v_name_4890_, v___x_4893_);
v___x_4895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4895_, 0, v___x_4892_);
lean_ctor_set(v___x_4895_, 1, v___x_4894_);
v___x_4896_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4895_);
lean_ctor_set(v___x_4897_, 1, v___x_4896_);
v___x_4898_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4889_, v___x_4891_, v_opts_4839_, v___x_4897_);
return v___x_4898_;
}
case 4:
{
lean_object* v_env_4899_; lean_object* v_name_4900_; lean_object* v_expr_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; uint8_t v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v_env_4899_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4899_);
v_name_4900_ = lean_ctor_get(v_e_4838_, 1);
lean_inc(v_name_4900_);
v_expr_4901_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_expr_4901_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4902_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4903_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__14, &l_Lean_Kernel_Exception_toMessageData___closed__14_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__14);
v___x_4904_ = 1;
v___x_4905_ = l_Lean_MessageData_ofConstName(v_name_4900_, v___x_4904_);
v___x_4906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4906_, 0, v___x_4903_);
lean_ctor_set(v___x_4906_, 1, v___x_4905_);
v___x_4907_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__16, &l_Lean_Kernel_Exception_toMessageData___closed__16_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__16);
v___x_4908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4908_, 0, v___x_4906_);
lean_ctor_set(v___x_4908_, 1, v___x_4907_);
v___x_4909_ = l_Lean_indentExpr(v_expr_4901_);
v___x_4910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4910_, 0, v___x_4908_);
lean_ctor_set(v___x_4910_, 1, v___x_4909_);
v___x_4911_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4899_, v___x_4902_, v_opts_4839_, v___x_4910_);
return v___x_4911_;
}
case 5:
{
lean_object* v_env_4912_; lean_object* v_lctx_4913_; lean_object* v_expr_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; 
v_env_4912_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4912_);
v_lctx_4913_ = lean_ctor_get(v_e_4838_, 1);
lean_inc_ref(v_lctx_4913_);
v_expr_4914_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_expr_4914_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4915_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__18, &l_Lean_Kernel_Exception_toMessageData___closed__18_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__18);
v___x_4916_ = l_Lean_indentExpr(v_expr_4914_);
v___x_4917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4917_, 0, v___x_4915_);
lean_ctor_set(v___x_4917_, 1, v___x_4916_);
v___x_4918_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4912_, v_lctx_4913_, v_opts_4839_, v___x_4917_);
return v___x_4918_;
}
case 6:
{
lean_object* v_env_4919_; lean_object* v_lctx_4920_; lean_object* v_expr_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; 
v_env_4919_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4919_);
v_lctx_4920_ = lean_ctor_get(v_e_4838_, 1);
lean_inc_ref(v_lctx_4920_);
v_expr_4921_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_expr_4921_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4922_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__20, &l_Lean_Kernel_Exception_toMessageData___closed__20_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__20);
v___x_4923_ = l_Lean_indentExpr(v_expr_4921_);
v___x_4924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4924_, 0, v___x_4922_);
lean_ctor_set(v___x_4924_, 1, v___x_4923_);
v___x_4925_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4919_, v_lctx_4920_, v_opts_4839_, v___x_4924_);
return v___x_4925_;
}
case 7:
{
lean_object* v_env_4926_; lean_object* v_lctx_4927_; lean_object* v_name_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; 
v_env_4926_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4926_);
v_lctx_4927_ = lean_ctor_get(v_e_4838_, 1);
lean_inc_ref(v_lctx_4927_);
v_name_4928_ = lean_ctor_get(v_e_4838_, 2);
lean_inc(v_name_4928_);
lean_dec_ref_known(v_e_4838_, 5);
v___x_4929_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__22, &l_Lean_Kernel_Exception_toMessageData___closed__22_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__22);
v___x_4930_ = l_Lean_MessageData_ofName(v_name_4928_);
v___x_4931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4931_, 0, v___x_4929_);
lean_ctor_set(v___x_4931_, 1, v___x_4930_);
v___x_4932_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4933_, 0, v___x_4931_);
lean_ctor_set(v___x_4933_, 1, v___x_4932_);
v___x_4934_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4926_, v_lctx_4927_, v_opts_4839_, v___x_4933_);
return v___x_4934_;
}
case 8:
{
lean_object* v_env_4935_; lean_object* v_lctx_4936_; lean_object* v_expr_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; 
v_env_4935_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4935_);
v_lctx_4936_ = lean_ctor_get(v_e_4838_, 1);
lean_inc_ref(v_lctx_4936_);
v_expr_4937_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_expr_4937_);
lean_dec_ref_known(v_e_4838_, 4);
v___x_4938_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__24, &l_Lean_Kernel_Exception_toMessageData___closed__24_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__24);
v___x_4939_ = l_Lean_indentExpr(v_expr_4937_);
v___x_4940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4938_);
lean_ctor_set(v___x_4940_, 1, v___x_4939_);
v___x_4941_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4935_, v_lctx_4936_, v_opts_4839_, v___x_4940_);
return v___x_4941_;
}
case 9:
{
lean_object* v_env_4942_; lean_object* v_lctx_4943_; lean_object* v_app_4944_; lean_object* v_funType_4945_; lean_object* v_argType_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v_env_4942_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4942_);
v_lctx_4943_ = lean_ctor_get(v_e_4838_, 1);
lean_inc_ref(v_lctx_4943_);
v_app_4944_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_app_4944_);
v_funType_4945_ = lean_ctor_get(v_e_4838_, 3);
lean_inc_ref(v_funType_4945_);
v_argType_4946_ = lean_ctor_get(v_e_4838_, 4);
lean_inc_ref(v_argType_4946_);
lean_dec_ref_known(v_e_4838_, 5);
v___x_4947_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__26, &l_Lean_Kernel_Exception_toMessageData___closed__26_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__26);
v___x_4948_ = l_Lean_indentExpr(v_app_4944_);
v___x_4949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4947_);
lean_ctor_set(v___x_4949_, 1, v___x_4948_);
v___x_4950_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__28, &l_Lean_Kernel_Exception_toMessageData___closed__28_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__28);
v___x_4951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4949_);
lean_ctor_set(v___x_4951_, 1, v___x_4950_);
v___x_4952_ = l_Lean_indentExpr(v_argType_4946_);
v___x_4953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4953_, 0, v___x_4951_);
lean_ctor_set(v___x_4953_, 1, v___x_4952_);
v___x_4954_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__30, &l_Lean_Kernel_Exception_toMessageData___closed__30_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__30);
v___x_4955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4955_, 0, v___x_4953_);
lean_ctor_set(v___x_4955_, 1, v___x_4954_);
v___x_4956_ = l_Lean_indentExpr(v_funType_4945_);
v___x_4957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4955_);
lean_ctor_set(v___x_4957_, 1, v___x_4956_);
v___x_4958_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4942_, v_lctx_4943_, v_opts_4839_, v___x_4957_);
return v___x_4958_;
}
case 10:
{
lean_object* v_env_4959_; lean_object* v_lctx_4960_; lean_object* v_proj_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; 
v_env_4959_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4959_);
v_lctx_4960_ = lean_ctor_get(v_e_4838_, 1);
lean_inc_ref(v_lctx_4960_);
v_proj_4961_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_proj_4961_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4962_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__32, &l_Lean_Kernel_Exception_toMessageData___closed__32_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__32);
v___x_4963_ = l_Lean_indentExpr(v_proj_4961_);
v___x_4964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4962_);
lean_ctor_set(v___x_4964_, 1, v___x_4963_);
v___x_4965_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4959_, v_lctx_4960_, v_opts_4839_, v___x_4964_);
return v___x_4965_;
}
case 11:
{
lean_object* v_env_4966_; lean_object* v_name_4967_; lean_object* v_type_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; uint8_t v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v_env_4966_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_env_4966_);
v_name_4967_ = lean_ctor_get(v_e_4838_, 1);
lean_inc(v_name_4967_);
v_type_4968_ = lean_ctor_get(v_e_4838_, 2);
lean_inc_ref(v_type_4968_);
lean_dec_ref_known(v_e_4838_, 3);
v___x_4969_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4970_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__34, &l_Lean_Kernel_Exception_toMessageData___closed__34_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__34);
v___x_4971_ = 1;
v___x_4972_ = l_Lean_MessageData_ofConstName(v_name_4967_, v___x_4971_);
v___x_4973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4973_, 0, v___x_4970_);
lean_ctor_set(v___x_4973_, 1, v___x_4972_);
v___x_4974_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__36, &l_Lean_Kernel_Exception_toMessageData___closed__36_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__36);
v___x_4975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4975_, 0, v___x_4973_);
lean_ctor_set(v___x_4975_, 1, v___x_4974_);
v___x_4976_ = l_Lean_indentExpr(v_type_4968_);
v___x_4977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4975_);
lean_ctor_set(v___x_4977_, 1, v___x_4976_);
v___x_4978_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4966_, v___x_4969_, v_opts_4839_, v___x_4977_);
return v___x_4978_;
}
case 12:
{
lean_object* v_msg_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
lean_dec_ref(v_opts_4839_);
v_msg_4979_ = lean_ctor_get(v_e_4838_, 0);
lean_inc_ref(v_msg_4979_);
lean_dec_ref_known(v_e_4838_, 1);
v___x_4980_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__38, &l_Lean_Kernel_Exception_toMessageData___closed__38_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__38);
v___x_4981_ = l_Lean_stringToMessageData(v_msg_4979_);
v___x_4982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4982_, 0, v___x_4980_);
lean_ctor_set(v___x_4982_, 1, v___x_4981_);
return v___x_4982_;
}
case 13:
{
lean_object* v___x_4983_; 
lean_dec_ref(v_opts_4839_);
v___x_4983_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__41, &l_Lean_Kernel_Exception_toMessageData___closed__41_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__41);
return v___x_4983_;
}
case 14:
{
lean_object* v___x_4984_; 
lean_dec_ref(v_opts_4839_);
v___x_4984_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__44, &l_Lean_Kernel_Exception_toMessageData___closed__44_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__44);
return v___x_4984_;
}
case 15:
{
lean_object* v___x_4985_; 
lean_dec_ref(v_opts_4839_);
v___x_4985_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__47, &l_Lean_Kernel_Exception_toMessageData___closed__47_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__47);
return v___x_4985_;
}
default: 
{
lean_object* v___x_4986_; 
lean_dec_ref(v_opts_4839_);
v___x_4986_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__50, &l_Lean_Kernel_Exception_toMessageData___closed__50_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__50);
return v___x_4986_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_toTraceElem___redArg(lean_object* v_inst_4987_, lean_object* v_e_4988_, lean_object* v_cls_4989_){
_start:
{
lean_object* v___x_4990_; double v___x_4991_; uint8_t v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4990_ = lean_box(0);
v___x_4991_ = lean_float_once(&l_Lean_MessageData_formatAux___closed__9, &l_Lean_MessageData_formatAux___closed__9_once, _init_l_Lean_MessageData_formatAux___closed__9);
v___x_4992_ = 1;
v___x_4993_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_4994_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4994_, 0, v_cls_4989_);
lean_ctor_set(v___x_4994_, 1, v___x_4990_);
lean_ctor_set(v___x_4994_, 2, v___x_4993_);
lean_ctor_set_float(v___x_4994_, sizeof(void*)*3, v___x_4991_);
lean_ctor_set_float(v___x_4994_, sizeof(void*)*3 + 8, v___x_4991_);
lean_ctor_set_uint8(v___x_4994_, sizeof(void*)*3 + 16, v___x_4992_);
v___x_4995_ = lean_apply_1(v_inst_4987_, v_e_4988_);
v___x_4996_ = ((lean_object*)(l_Lean_stringToMessageData___closed__0));
v___x_4997_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4994_);
lean_ctor_set(v___x_4997_, 1, v___x_4995_);
lean_ctor_set(v___x_4997_, 2, v___x_4996_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_toTraceElem(lean_object* v_00_u03b1_4998_, lean_object* v_inst_4999_, lean_object* v_e_5000_, lean_object* v_cls_5001_){
_start:
{
lean_object* v___x_5002_; 
v___x_5002_ = l_Lean_toTraceElem___redArg(v_inst_4999_, v_e_5000_, v_cls_5001_);
return v___x_5002_;
}
}
lean_object* runtime_initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_PPExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_PPExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedMessageSeverity_default = _init_l_Lean_instInhabitedMessageSeverity_default();
l_Lean_instInhabitedMessageSeverity = _init_l_Lean_instInhabitedMessageSeverity();
l_Lean_instInhabitedTraceResult_default = _init_l_Lean_instInhabitedTraceResult_default();
l_Lean_instInhabitedTraceResult = _init_l_Lean_instInhabitedTraceResult();
l_Lean_instInhabitedMessageData_default = _init_l_Lean_instInhabitedMessageData_default();
lean_mark_persistent(l_Lean_instInhabitedMessageData_default);
l_Lean_instInhabitedMessageData = _init_l_Lean_instInhabitedMessageData();
lean_mark_persistent(l_Lean_instInhabitedMessageData);
l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = _init_l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_();
lean_mark_persistent(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_);
l_Lean_instTypeNameMessageData = _init_l_Lean_instTypeNameMessageData();
lean_mark_persistent(l_Lean_instTypeNameMessageData);
l_Lean_MessageData_nil = _init_l_Lean_MessageData_nil();
lean_mark_persistent(l_Lean_MessageData_nil);
res = l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_MessageData_maxTraceChildren = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_MessageData_maxTraceChildren);
lean_dec_ref(res);
l_Lean_instInhabitedMessageLog_default = _init_l_Lean_instInhabitedMessageLog_default();
lean_mark_persistent(l_Lean_instInhabitedMessageLog_default);
l_Lean_instInhabitedMessageLog = _init_l_Lean_instInhabitedMessageLog();
lean_mark_persistent(l_Lean_instInhabitedMessageLog);
l_Lean_MessageLog_empty = _init_l_Lean_MessageLog_empty();
lean_mark_persistent(l_Lean_MessageLog_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* initialize_Lean_Util_PPExt(uint8_t builtin);
lean_object* initialize_Lean_Util_Sorry(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PPExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Message(builtin);
}
#ifdef __cplusplus
}
#endif

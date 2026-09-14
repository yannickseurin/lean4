// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.SimpCongrTheorems
// Imports: public import Lean.Util.Recognizers public import Lean.Util.CollectMVars public import Lean.Meta.Basic
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_MVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_collectMVars(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0;
static const lean_array_object l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorem_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorem;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "theoremName"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__7;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "funName"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__10;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "hypothesesPos"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__13;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__16;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__18;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__17_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprSimpCongrTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprSimpCongrTheorem_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorem___closed__0 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprSimpCongrTheorem = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem___closed__0_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpCongrTheorems;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__3;
static lean_once_cell_t l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4;
static const lean_ctor_object l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1___redArg(lean_object*);
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lemmas"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__4;
static const lean_string_object l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ".toSMap"};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprSimpCongrTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprSimpCongrTheorems_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprSimpCongrTheorems___closed__0 = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprSimpCongrTheorems = (const lean_object*)&l_Lean_Meta_instReprSimpCongrTheorems___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SimpCongrTheorems_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SimpCongrTheorems_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_addSimpCongrTheoremEntry_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addSimpCongrTheoremEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SMap_switch___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__spec__0___redArg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "congrExtension"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 78, 117, 200, 251, 75, 97, 195)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addSimpCongrTheoremEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_congrExtension;
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Invalid `congr` theorem: Parameter #"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = " is not a valid hypothesis because its right-hand side argument is not a local variable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Invalid `congr` theorem: Argument #"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " of parameter #"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = " contains unresolved parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = " is not a valid hypothesis because its right-hand side head was already resolved"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = " is not a valid hypothesis because its right-hand side head is not a metavariable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = " is not a valid hypothesis because its left-hand side contains unresolved parameters"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__1;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__0_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 114, .m_capacity = 114, .m_length = 113, .m_data = "Invalid `congr` theorem: The left- and right-hand sides of the equality are not applications of the same function"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__1_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Invalid `congr` theorem: Theorem is not an equality or iff"};
static const lean_object* l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addSimpCongrTheorem(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addSimpCongrTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SimpCongrTheorems"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 82, 209, 127, 228, 246, 91, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "congruence theorem"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__33_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__33_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__34_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__34_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1291, .m_capacity = 1291, .m_length = 1266, .m_data = "Registers `simp` congruence lemmas.\n\nA `simp` congruence lemma should prove the equality of two applications of the same function from\nthe equality of the individual arguments. They are used by `simp` to visit subexpressions of an\napplication where the default congruence algorithm fails. This is particularly important for\nfunctions where some parameters depend on previous parameters.\n\nCongruence lemmas should have an equality for every parameter, possibly bounded by foralls, with\nthe right hand side being an application of a parameter on the right-hand side. When applying\ncongruence theorems, `simp` will first infer parameters from the right-hand side, then try to\nsimplify each left-hand side of the parameter equalities and finally infer the right-hand side\nparameters from the result.\n\nExample:\n```\ndef Option.pbind (o : Option α) (f : (a : α) → o = some a → Option β) : Option β := ...\n\n@[congr]\ntheorem Option.pbind_congr\n    {o o' : Option α} (ho : o = o') -- equality for first parameter\n    {f : (a : α) → o = some a → Option β} {f' : (a : α) → o' = some a → Option β}\n    (hf : ∀ (a : α) (h : _), f a (ho.trans h) = f' a h) : -- equality for second parameter\n    o.pbind f = o'.pbind f' := -- conclusion: equality of the whole application\n  ...\n```\n"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = ((lean_object*)(l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__1));
v___x_7_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0, &l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0);
v___x_8_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
lean_ctor_set(v___x_8_, 2, v___x_6_);
lean_ctor_set(v___x_8_, 3, v___x_5_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__2, &l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__2);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorem(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Meta_instInhabitedSimpCongrTheorem_default;
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__1(lean_object* v_a_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_nat_to_int(v_a_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0___lam__0(lean_object* v___y_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = l_Nat_reprFast(v___y_13_);
v___x_15_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_18_) == 0)
{
lean_dec(v_x_16_);
return v_x_17_;
}
else
{
lean_object* v_head_19_; lean_object* v_tail_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_31_; 
v_head_19_ = lean_ctor_get(v_x_18_, 0);
v_tail_20_ = lean_ctor_get(v_x_18_, 1);
v_isSharedCheck_31_ = !lean_is_exclusive(v_x_18_);
if (v_isSharedCheck_31_ == 0)
{
v___x_22_ = v_x_18_;
v_isShared_23_ = v_isSharedCheck_31_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_tail_20_);
lean_inc(v_head_19_);
lean_dec(v_x_18_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_31_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
lean_inc(v_x_16_);
if (v_isShared_23_ == 0)
{
lean_ctor_set_tag(v___x_22_, 5);
lean_ctor_set(v___x_22_, 1, v_x_16_);
lean_ctor_set(v___x_22_, 0, v_x_17_);
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_x_17_);
lean_ctor_set(v_reuseFailAlloc_30_, 1, v_x_16_);
v___x_25_ = v_reuseFailAlloc_30_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = l_Nat_reprFast(v_head_19_);
v___x_27_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
v___x_28_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_28_, 0, v___x_25_);
lean_ctor_set(v___x_28_, 1, v___x_27_);
v_x_17_ = v___x_28_;
v_x_18_ = v_tail_20_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0_spec__2(lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v_x_34_){
_start:
{
if (lean_obj_tag(v_x_34_) == 0)
{
lean_dec(v_x_32_);
return v_x_33_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_47_; 
v_head_35_ = lean_ctor_get(v_x_34_, 0);
v_tail_36_ = lean_ctor_get(v_x_34_, 1);
v_isSharedCheck_47_ = !lean_is_exclusive(v_x_34_);
if (v_isSharedCheck_47_ == 0)
{
v___x_38_ = v_x_34_;
v_isShared_39_ = v_isSharedCheck_47_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_tail_36_);
lean_inc(v_head_35_);
lean_dec(v_x_34_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_47_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
lean_inc(v_x_32_);
if (v_isShared_39_ == 0)
{
lean_ctor_set_tag(v___x_38_, 5);
lean_ctor_set(v___x_38_, 1, v_x_32_);
lean_ctor_set(v___x_38_, 0, v_x_33_);
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_x_33_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v_x_32_);
v___x_41_ = v_reuseFailAlloc_46_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_42_ = l_Nat_reprFast(v_head_35_);
v___x_43_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
v___x_44_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_41_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0_spec__2_spec__3(v_x_32_, v___x_44_, v_tail_36_);
return v___x_45_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0(lean_object* v_x_48_, lean_object* v_x_49_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v___x_50_; 
lean_dec(v_x_49_);
v___x_50_ = lean_box(0);
return v___x_50_;
}
else
{
lean_object* v_tail_51_; 
v_tail_51_ = lean_ctor_get(v_x_48_, 1);
if (lean_obj_tag(v_tail_51_) == 0)
{
lean_object* v_head_52_; lean_object* v___x_53_; 
lean_dec(v_x_49_);
v_head_52_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_head_52_);
lean_dec_ref_known(v_x_48_, 2);
v___x_53_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0___lam__0(v_head_52_);
return v___x_53_;
}
else
{
lean_object* v_head_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
lean_inc(v_tail_51_);
v_head_54_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_head_54_);
lean_dec_ref_known(v_x_48_, 2);
v___x_55_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0___lam__0(v_head_54_);
v___x_56_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0_spec__2(v_x_49_, v___x_55_, v_tail_51_);
return v___x_56_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__0));
v___x_66_ = lean_string_length(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_obj_once(&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__5, &l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__5);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0(lean_object* v_xs_76_){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_77_ = lean_array_get_size(v_xs_76_);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_nat_dec_eq(v___x_77_, v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_80_ = lean_array_to_list(v_xs_76_);
v___x_81_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3));
v___x_82_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0_spec__0(v___x_80_, v___x_81_);
v___x_83_ = lean_obj_once(&l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__6);
v___x_84_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__7));
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_82_);
v___x_86_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__8));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_83_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = l_Std_Format_fill(v___x_88_);
return v___x_89_;
}
else
{
lean_object* v___x_90_; 
lean_dec_ref(v_xs_76_);
v___x_90_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__10));
return v___x_90_;
}
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(15u);
v___x_105_ = lean_nat_to_int(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_unsigned_to_nat(11u);
v___x_110_ = lean_nat_to_int(v___x_109_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(17u);
v___x_115_ = lean_nat_to_int(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(12u);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__0));
v___x_123_ = lean_string_length(v___x_122_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__18, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__18);
v___x_125_ = lean_nat_to_int(v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(lean_object* v_x_130_){
_start:
{
lean_object* v_theoremName_131_; lean_object* v_funName_132_; lean_object* v_hypothesesPos_133_; lean_object* v_priority_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_theoremName_131_ = lean_ctor_get(v_x_130_, 0);
lean_inc(v_theoremName_131_);
v_funName_132_ = lean_ctor_get(v_x_130_, 1);
lean_inc(v_funName_132_);
v_hypothesesPos_133_ = lean_ctor_get(v_x_130_, 2);
lean_inc_ref(v_hypothesesPos_133_);
v_priority_134_ = lean_ctor_get(v_x_130_, 3);
lean_inc(v_priority_134_);
lean_dec_ref(v_x_130_);
v___x_135_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__5));
v___x_136_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__6));
v___x_137_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__7, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__7_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__7);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = l_Lean_Name_reprPrec(v_theoremName_131_, v___x_138_);
v___x_140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_137_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = 0;
v___x_142_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set_uint8(v___x_142_, sizeof(void*)*1, v___x_141_);
v___x_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_136_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__2));
v___x_145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_143_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = lean_box(1);
v___x_147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__9));
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_135_);
v___x_151_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__10, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__10_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__10);
v___x_152_ = l_Lean_Name_reprPrec(v_funName_132_, v___x_138_);
v___x_153_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_151_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*1, v___x_141_);
v___x_155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_150_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___x_144_);
v___x_157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_146_);
v___x_158_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__12));
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___x_135_);
v___x_161_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__13, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__13_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__13);
v___x_162_ = l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0(v_hypothesesPos_133_);
v___x_163_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_141_);
v___x_165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_160_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_144_);
v___x_167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_146_);
v___x_168_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__15));
v___x_169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_135_);
v___x_171_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__16, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__16_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__16);
v___x_172_ = l_Nat_reprFast(v_priority_134_);
v___x_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
v___x_174_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_171_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set_uint8(v___x_175_, sizeof(void*)*1, v___x_141_);
v___x_176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_170_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19);
v___x_178_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__20));
v___x_179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v___x_176_);
v___x_180_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__21));
v___x_181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_177_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
v___x_183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*1, v___x_141_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr(lean_object* v_x_184_, lean_object* v_prec_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(v_x_184_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorem_repr___boxed(lean_object* v_x_187_, lean_object* v_prec_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Meta_instReprSimpCongrTheorem_repr(v_x_187_, v_prec_188_);
lean_dec(v_prec_188_);
return v_res_189_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__0(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_box(0);
v___x_193_ = lean_unsigned_to_nat(16u);
v___x_194_ = lean_mk_array(v___x_193_, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__1(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_195_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__0, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__0_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__0);
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
lean_ctor_set(v___x_197_, 1, v___x_195_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__3(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; 
v___x_201_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__3, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__3_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__3);
v___x_202_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__1, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__1_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__1);
v___x_203_ = 1;
v___x_204_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_204_, 0, v___x_202_);
lean_ctor_set(v___x_204_, 1, v___x_201_);
lean_ctor_set_uint8(v___x_204_, sizeof(void*)*2, v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpCongrTheorems(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Meta_instInhabitedSimpCongrTheorems_default;
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__1___redArg(lean_object* v_f_207_, lean_object* v_x_208_, lean_object* v_x_209_){
_start:
{
if (lean_obj_tag(v_x_209_) == 0)
{
lean_dec(v_f_207_);
return v_x_208_;
}
else
{
lean_object* v_key_210_; lean_object* v_value_211_; lean_object* v_tail_212_; lean_object* v___x_213_; 
v_key_210_ = lean_ctor_get(v_x_209_, 0);
lean_inc(v_key_210_);
v_value_211_ = lean_ctor_get(v_x_209_, 1);
lean_inc(v_value_211_);
v_tail_212_ = lean_ctor_get(v_x_209_, 2);
lean_inc(v_tail_212_);
lean_dec_ref_known(v_x_209_, 3);
lean_inc(v_f_207_);
v___x_213_ = lean_apply_3(v_f_207_, v_x_208_, v_key_210_, v_value_211_);
v_x_208_ = v___x_213_;
v_x_209_ = v_tail_212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg(lean_object* v_f_215_, lean_object* v_as_216_, size_t v_i_217_, size_t v_stop_218_, lean_object* v_b_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_usize_dec_eq(v_i_217_, v_stop_218_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_222_; size_t v___x_223_; size_t v___x_224_; 
v___x_221_ = lean_array_uget_borrowed(v_as_216_, v_i_217_);
lean_inc(v___x_221_);
lean_inc(v_f_215_);
v___x_222_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__1___redArg(v_f_215_, v_b_219_, v___x_221_);
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_add(v_i_217_, v___x_223_);
v_i_217_ = v___x_224_;
v_b_219_ = v___x_222_;
goto _start;
}
else
{
lean_dec(v_f_215_);
return v_b_219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_f_226_, lean_object* v_as_227_, lean_object* v_i_228_, lean_object* v_stop_229_, lean_object* v_b_230_){
_start:
{
size_t v_i_boxed_231_; size_t v_stop_boxed_232_; lean_object* v_res_233_; 
v_i_boxed_231_ = lean_unbox_usize(v_i_228_);
lean_dec(v_i_228_);
v_stop_boxed_232_ = lean_unbox_usize(v_stop_229_);
lean_dec(v_stop_229_);
v_res_233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg(v_f_226_, v_as_227_, v_i_boxed_231_, v_stop_boxed_232_, v_b_230_);
lean_dec_ref(v_as_227_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg___lam__0(lean_object* v_f_234_, lean_object* v_x1_235_, lean_object* v_x2_236_, lean_object* v_x3_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_apply_3(v_f_234_, v_x1_235_, v_x2_236_, v_x3_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg(lean_object* v_f_239_, lean_object* v_keys_240_, lean_object* v_vals_241_, lean_object* v_i_242_, lean_object* v_acc_243_){
_start:
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = lean_array_get_size(v_keys_240_);
v___x_245_ = lean_nat_dec_lt(v_i_242_, v___x_244_);
if (v___x_245_ == 0)
{
lean_dec(v_i_242_);
lean_dec(v_f_239_);
return v_acc_243_;
}
else
{
lean_object* v_k_246_; lean_object* v_v_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_k_246_ = lean_array_fget_borrowed(v_keys_240_, v_i_242_);
v_v_247_ = lean_array_fget_borrowed(v_vals_241_, v_i_242_);
lean_inc(v_f_239_);
lean_inc(v_v_247_);
lean_inc(v_k_246_);
v___x_248_ = lean_apply_3(v_f_239_, v_acc_243_, v_k_246_, v_v_247_);
v___x_249_ = lean_unsigned_to_nat(1u);
v___x_250_ = lean_nat_add(v_i_242_, v___x_249_);
lean_dec(v_i_242_);
v_i_242_ = v___x_250_;
v_acc_243_ = v___x_248_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg___boxed(lean_object* v_f_252_, lean_object* v_keys_253_, lean_object* v_vals_254_, lean_object* v_i_255_, lean_object* v_acc_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg(v_f_252_, v_keys_253_, v_vals_254_, v_i_255_, v_acc_256_);
lean_dec_ref(v_vals_254_);
lean_dec_ref(v_keys_253_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg(lean_object* v_f_258_, lean_object* v_as_259_, size_t v_i_260_, size_t v_stop_261_, lean_object* v_b_262_){
_start:
{
lean_object* v___y_264_; uint8_t v___x_268_; 
v___x_268_ = lean_usize_dec_eq(v_i_260_, v_stop_261_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_array_uget_borrowed(v_as_259_, v_i_260_);
switch(lean_obj_tag(v___x_269_))
{
case 0:
{
lean_object* v_key_270_; lean_object* v_val_271_; lean_object* v___x_272_; 
v_key_270_ = lean_ctor_get(v___x_269_, 0);
v_val_271_ = lean_ctor_get(v___x_269_, 1);
lean_inc(v_f_258_);
lean_inc(v_val_271_);
lean_inc(v_key_270_);
v___x_272_ = lean_apply_3(v_f_258_, v_b_262_, v_key_270_, v_val_271_);
v___y_264_ = v___x_272_;
goto v___jp_263_;
}
case 1:
{
lean_object* v_node_273_; lean_object* v___x_274_; 
v_node_273_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_f_258_);
v___x_274_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_f_258_, v_node_273_, v_b_262_);
v___y_264_ = v___x_274_;
goto v___jp_263_;
}
default: 
{
v___y_264_ = v_b_262_;
goto v___jp_263_;
}
}
}
else
{
lean_dec(v_f_258_);
return v_b_262_;
}
v___jp_263_:
{
size_t v___x_265_; size_t v___x_266_; 
v___x_265_ = ((size_t)1ULL);
v___x_266_ = lean_usize_add(v_i_260_, v___x_265_);
v_i_260_ = v___x_266_;
v_b_262_ = v___y_264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(lean_object* v_f_275_, lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v_es_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_es_278_ = lean_ctor_get(v_x_276_, 0);
v___x_279_ = lean_unsigned_to_nat(0u);
v___x_280_ = lean_array_get_size(v_es_278_);
v___x_281_ = lean_nat_dec_lt(v___x_279_, v___x_280_);
if (v___x_281_ == 0)
{
lean_dec(v_f_275_);
return v_x_277_;
}
else
{
size_t v___x_282_; size_t v___x_283_; lean_object* v___x_284_; 
v___x_282_ = ((size_t)0ULL);
v___x_283_ = lean_usize_of_nat(v___x_280_);
v___x_284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg(v_f_275_, v_es_278_, v___x_282_, v___x_283_, v_x_277_);
return v___x_284_;
}
}
else
{
lean_object* v_ks_285_; lean_object* v_vs_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_ks_285_ = lean_ctor_get(v_x_276_, 0);
v_vs_286_ = lean_ctor_get(v_x_276_, 1);
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg(v_f_275_, v_ks_285_, v_vs_286_, v___x_287_, v_x_277_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_f_289_, lean_object* v_x_290_, lean_object* v_x_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_f_289_, v_x_290_, v_x_291_);
lean_dec_ref(v_x_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg___boxed(lean_object* v_f_293_, lean_object* v_as_294_, lean_object* v_i_295_, lean_object* v_stop_296_, lean_object* v_b_297_){
_start:
{
size_t v_i_boxed_298_; size_t v_stop_boxed_299_; lean_object* v_res_300_; 
v_i_boxed_298_ = lean_unbox_usize(v_i_295_);
lean_dec(v_i_295_);
v_stop_boxed_299_ = lean_unbox_usize(v_stop_296_);
lean_dec(v_stop_296_);
v_res_300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg(v_f_293_, v_as_294_, v_i_boxed_298_, v_stop_boxed_299_, v_b_297_);
lean_dec_ref(v_as_294_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg(lean_object* v_map_301_, lean_object* v_f_302_, lean_object* v_init_303_){
_start:
{
lean_object* v___f_304_; lean_object* v___x_305_; 
v___f_304_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_304_, 0, v_f_302_);
v___x_305_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v___f_304_, v_map_301_, v_init_303_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_map_306_, lean_object* v_f_307_, lean_object* v_init_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg(v_map_306_, v_f_307_, v_init_308_);
lean_dec_ref(v_map_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg(lean_object* v_f_310_, lean_object* v_init_311_, lean_object* v_m_312_){
_start:
{
lean_object* v_map_u2081_313_; lean_object* v_map_u2082_314_; lean_object* v_buckets_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v_map_u2081_313_ = lean_ctor_get(v_m_312_, 0);
v_map_u2082_314_ = lean_ctor_get(v_m_312_, 1);
v_buckets_315_ = lean_ctor_get(v_map_u2081_313_, 1);
v___x_316_ = lean_unsigned_to_nat(0u);
v___x_317_ = lean_array_get_size(v_buckets_315_);
v___x_318_ = lean_nat_dec_lt(v___x_316_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg(v_map_u2082_314_, v_f_310_, v_init_311_);
return v___x_319_;
}
else
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_320_ = ((size_t)0ULL);
v___x_321_ = lean_usize_of_nat(v___x_317_);
lean_inc(v_f_310_);
v___x_322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg(v_f_310_, v_buckets_315_, v___x_320_, v___x_321_, v_init_311_);
v___x_323_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg(v_map_u2082_314_, v_f_310_, v___x_322_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg___boxed(lean_object* v_f_324_, lean_object* v_init_325_, lean_object* v_m_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg(v_f_324_, v_init_325_, v_m_326_);
lean_dec_ref(v_m_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___lam__0(lean_object* v_es_328_, lean_object* v_a_329_, lean_object* v_b_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_a_329_);
lean_ctor_set(v___x_331_, 1, v_b_330_);
v___x_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v_es_328_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg(lean_object* v_m_334_){
_start:
{
lean_object* v___f_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___f_335_ = ((lean_object*)(l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___closed__0));
v___x_336_ = lean_box(0);
v___x_337_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg(v___f_335_, v___x_336_, v_m_334_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg___boxed(lean_object* v_m_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg(v_m_338_);
lean_dec_ref(v_m_338_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8_spec__11_spec__16(lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
if (lean_obj_tag(v_x_342_) == 0)
{
lean_dec(v_x_340_);
return v_x_341_;
}
else
{
lean_object* v_head_343_; lean_object* v_tail_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_354_; 
v_head_343_ = lean_ctor_get(v_x_342_, 0);
v_tail_344_ = lean_ctor_get(v_x_342_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v_x_342_);
if (v_isSharedCheck_354_ == 0)
{
v___x_346_ = v_x_342_;
v_isShared_347_ = v_isSharedCheck_354_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_tail_344_);
lean_inc(v_head_343_);
lean_dec(v_x_342_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_354_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
lean_inc(v_x_340_);
if (v_isShared_347_ == 0)
{
lean_ctor_set_tag(v___x_346_, 5);
lean_ctor_set(v___x_346_, 1, v_x_340_);
lean_ctor_set(v___x_346_, 0, v_x_341_);
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_x_341_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_x_340_);
v___x_349_ = v_reuseFailAlloc_353_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(v_head_343_);
v___x_351_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v_x_341_ = v___x_351_;
v_x_342_ = v_tail_344_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8_spec__11(lean_object* v_x_355_, lean_object* v_x_356_, lean_object* v_x_357_){
_start:
{
if (lean_obj_tag(v_x_357_) == 0)
{
lean_dec(v_x_355_);
return v_x_356_;
}
else
{
lean_object* v_head_358_; lean_object* v_tail_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_369_; 
v_head_358_ = lean_ctor_get(v_x_357_, 0);
v_tail_359_ = lean_ctor_get(v_x_357_, 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_x_357_);
if (v_isSharedCheck_369_ == 0)
{
v___x_361_ = v_x_357_;
v_isShared_362_ = v_isSharedCheck_369_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_tail_359_);
lean_inc(v_head_358_);
lean_dec(v_x_357_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_369_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
lean_inc(v_x_355_);
if (v_isShared_362_ == 0)
{
lean_ctor_set_tag(v___x_361_, 5);
lean_ctor_set(v___x_361_, 1, v_x_355_);
lean_ctor_set(v___x_361_, 0, v_x_356_);
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_x_356_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_x_355_);
v___x_364_ = v_reuseFailAlloc_368_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_365_ = l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(v_head_358_);
v___x_366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_364_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8_spec__11_spec__16(v_x_355_, v___x_366_, v_tail_359_);
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8(lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
if (lean_obj_tag(v_x_370_) == 0)
{
lean_object* v___x_372_; 
lean_dec(v_x_371_);
v___x_372_ = lean_box(0);
return v___x_372_;
}
else
{
lean_object* v_tail_373_; 
v_tail_373_ = lean_ctor_get(v_x_370_, 1);
if (lean_obj_tag(v_tail_373_) == 0)
{
lean_object* v_head_374_; lean_object* v___x_375_; 
lean_dec(v_x_371_);
v_head_374_ = lean_ctor_get(v_x_370_, 0);
lean_inc(v_head_374_);
lean_dec_ref_known(v_x_370_, 2);
v___x_375_ = l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(v_head_374_);
return v___x_375_;
}
else
{
lean_object* v_head_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
lean_inc(v_tail_373_);
v_head_376_ = lean_ctor_get(v_x_370_, 0);
lean_inc(v_head_376_);
lean_dec_ref_known(v_x_370_, 2);
v___x_377_ = l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg(v_head_376_);
v___x_378_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8_spec__11(v_x_371_, v___x_377_, v_tail_373_);
return v___x_378_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__2));
v___x_384_ = lean_string_length(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__3, &l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__3_once, _init_l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__3);
v___x_386_ = lean_nat_to_int(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg(lean_object* v_a_389_){
_start:
{
if (lean_obj_tag(v_a_389_) == 0)
{
lean_object* v___x_390_; 
v___x_390_ = ((lean_object*)(l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__1));
return v___x_390_;
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; lean_object* v___x_400_; 
v___x_391_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3));
v___x_392_ = l_Std_Format_joinSep___at___00List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6_spec__8(v_a_389_, v___x_391_);
v___x_393_ = lean_obj_once(&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4, &l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4_once, _init_l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4);
v___x_394_ = ((lean_object*)(l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__5));
v___x_395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_392_);
v___x_396_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__8));
v___x_397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_393_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = 0;
v___x_400_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set_uint8(v___x_400_, sizeof(void*)*1, v___x_399_);
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7_spec__10(lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_){
_start:
{
if (lean_obj_tag(v_x_403_) == 0)
{
lean_dec(v_x_401_);
return v_x_402_;
}
else
{
lean_object* v_head_404_; lean_object* v_tail_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_414_; 
v_head_404_ = lean_ctor_get(v_x_403_, 0);
v_tail_405_ = lean_ctor_get(v_x_403_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v_x_403_);
if (v_isSharedCheck_414_ == 0)
{
v___x_407_ = v_x_403_;
v_isShared_408_ = v_isSharedCheck_414_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_tail_405_);
lean_inc(v_head_404_);
lean_dec(v_x_403_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_414_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
lean_inc(v_x_401_);
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 5);
lean_ctor_set(v___x_407_, 1, v_x_401_);
lean_ctor_set(v___x_407_, 0, v_x_402_);
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_x_402_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_x_401_);
v___x_410_ = v_reuseFailAlloc_413_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; 
v___x_411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v_head_404_);
v_x_402_ = v___x_411_;
v_x_403_ = v_tail_405_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(lean_object* v_x_415_, lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_415_) == 0)
{
lean_object* v___x_417_; 
lean_dec(v_x_416_);
v___x_417_ = lean_box(0);
return v___x_417_;
}
else
{
lean_object* v_tail_418_; 
v_tail_418_ = lean_ctor_get(v_x_415_, 1);
if (lean_obj_tag(v_tail_418_) == 0)
{
lean_object* v_head_419_; 
lean_dec(v_x_416_);
v_head_419_ = lean_ctor_get(v_x_415_, 0);
lean_inc(v_head_419_);
lean_dec_ref_known(v_x_415_, 2);
return v_head_419_;
}
else
{
lean_object* v_head_420_; lean_object* v___x_421_; 
lean_inc(v_tail_418_);
v_head_420_ = lean_ctor_get(v_x_415_, 0);
lean_inc(v_head_420_);
lean_dec_ref_known(v_x_415_, 2);
v___x_421_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7_spec__10(v_x_416_, v_head_420_, v_tail_418_);
return v___x_421_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__0));
v___x_425_ = lean_string_length(v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__2, &l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__2_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__2);
v___x_427_ = lean_nat_to_int(v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(lean_object* v_x_432_){
_start:
{
lean_object* v_fst_433_; lean_object* v_snd_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_457_; 
v_fst_433_ = lean_ctor_get(v_x_432_, 0);
v_snd_434_ = lean_ctor_get(v_x_432_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_x_432_);
if (v_isSharedCheck_457_ == 0)
{
v___x_436_ = v_x_432_;
v_isShared_437_ = v_isSharedCheck_457_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_snd_434_);
lean_inc(v_fst_433_);
lean_dec(v_x_432_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_457_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = l_Lean_Name_reprPrec(v_fst_433_, v___x_438_);
v___x_440_ = lean_box(0);
if (v_isShared_437_ == 0)
{
lean_ctor_set_tag(v___x_436_, 1);
lean_ctor_set(v___x_436_, 1, v___x_440_);
lean_ctor_set(v___x_436_, 0, v___x_439_);
v___x_442_ = v___x_436_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_440_);
v___x_442_ = v_reuseFailAlloc_456_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; lean_object* v___x_455_; 
v___x_443_ = l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg(v_snd_434_);
v___x_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_442_);
v___x_445_ = l_List_reverse___redArg(v___x_444_);
v___x_446_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3));
v___x_447_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(v___x_445_, v___x_446_);
v___x_448_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__3);
v___x_449_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__4));
v___x_450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v___x_447_);
v___x_451_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg___closed__5));
v___x_452_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_448_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = 0;
v___x_455_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_455_, 0, v___x_453_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*1, v___x_454_);
return v___x_455_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3_spec__9_spec__13(lean_object* v_x_458_, lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
if (lean_obj_tag(v_x_460_) == 0)
{
lean_dec(v_x_458_);
return v_x_459_;
}
else
{
lean_object* v_head_461_; lean_object* v_tail_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_472_; 
v_head_461_ = lean_ctor_get(v_x_460_, 0);
v_tail_462_ = lean_ctor_get(v_x_460_, 1);
v_isSharedCheck_472_ = !lean_is_exclusive(v_x_460_);
if (v_isSharedCheck_472_ == 0)
{
v___x_464_ = v_x_460_;
v_isShared_465_ = v_isSharedCheck_472_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_tail_462_);
lean_inc(v_head_461_);
lean_dec(v_x_460_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_472_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
lean_inc(v_x_458_);
if (v_isShared_465_ == 0)
{
lean_ctor_set_tag(v___x_464_, 5);
lean_ctor_set(v___x_464_, 1, v_x_458_);
lean_ctor_set(v___x_464_, 0, v_x_459_);
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_x_459_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_x_458_);
v___x_467_ = v_reuseFailAlloc_471_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(v_head_461_);
v___x_469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_467_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v_x_459_ = v___x_469_;
v_x_460_ = v_tail_462_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3_spec__9(lean_object* v_x_473_, lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
if (lean_obj_tag(v_x_475_) == 0)
{
lean_dec(v_x_473_);
return v_x_474_;
}
else
{
lean_object* v_head_476_; lean_object* v_tail_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_487_; 
v_head_476_ = lean_ctor_get(v_x_475_, 0);
v_tail_477_ = lean_ctor_get(v_x_475_, 1);
v_isSharedCheck_487_ = !lean_is_exclusive(v_x_475_);
if (v_isSharedCheck_487_ == 0)
{
v___x_479_ = v_x_475_;
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_tail_477_);
lean_inc(v_head_476_);
lean_dec(v_x_475_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
lean_inc(v_x_473_);
if (v_isShared_480_ == 0)
{
lean_ctor_set_tag(v___x_479_, 5);
lean_ctor_set(v___x_479_, 1, v_x_473_);
lean_ctor_set(v___x_479_, 0, v_x_474_);
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_x_474_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_x_473_);
v___x_482_ = v_reuseFailAlloc_486_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(v_head_476_);
v___x_484_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3_spec__9_spec__13(v_x_473_, v___x_484_, v_tail_477_);
return v___x_485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3(lean_object* v_x_488_, lean_object* v_x_489_){
_start:
{
if (lean_obj_tag(v_x_488_) == 0)
{
lean_object* v___x_490_; 
lean_dec(v_x_489_);
v___x_490_ = lean_box(0);
return v___x_490_;
}
else
{
lean_object* v_tail_491_; 
v_tail_491_ = lean_ctor_get(v_x_488_, 1);
if (lean_obj_tag(v_tail_491_) == 0)
{
lean_object* v_head_492_; lean_object* v___x_493_; 
lean_dec(v_x_489_);
v_head_492_ = lean_ctor_get(v_x_488_, 0);
lean_inc(v_head_492_);
lean_dec_ref_known(v_x_488_, 2);
v___x_493_ = l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(v_head_492_);
return v___x_493_;
}
else
{
lean_object* v_head_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
lean_inc(v_tail_491_);
v_head_494_ = lean_ctor_get(v_x_488_, 0);
lean_inc(v_head_494_);
lean_dec_ref_known(v_x_488_, 2);
v___x_495_ = l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(v_head_494_);
v___x_496_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3_spec__9(v_x_489_, v___x_495_, v_tail_491_);
return v___x_496_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1___redArg(lean_object* v_a_497_){
_start:
{
if (lean_obj_tag(v_a_497_) == 0)
{
lean_object* v___x_498_; 
v___x_498_ = ((lean_object*)(l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__1));
return v___x_498_;
}
else
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; lean_object* v___x_508_; 
v___x_499_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__3));
v___x_500_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__3(v_a_497_, v___x_499_);
v___x_501_ = lean_obj_once(&l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4, &l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4_once, _init_l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__4);
v___x_502_ = ((lean_object*)(l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg___closed__5));
v___x_503_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___x_500_);
v___x_504_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_instReprSimpCongrTheorem_repr_spec__0___closed__8));
v___x_505_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_501_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = 0;
v___x_508_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_508_, 0, v___x_506_);
lean_ctor_set_uint8(v___x_508_, sizeof(void*)*1, v___x_507_);
return v___x_508_;
}
}
}
static lean_object* _init_l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_unsigned_to_nat(10u);
v___x_519_ = lean_nat_to_int(v___x_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg(lean_object* v_x_523_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_524_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__3));
v___x_525_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__4, &l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__4);
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg(v_x_523_);
v___x_528_ = l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1___redArg(v___x_527_);
v___x_529_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___closed__6));
v___x_530_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = l_Repr_addAppParen(v___x_530_, v___x_526_);
v___x_532_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_525_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = 0;
v___x_534_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set_uint8(v___x_534_, sizeof(void*)*1, v___x_533_);
v___x_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_524_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = lean_obj_once(&l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19, &l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19_once, _init_l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__19);
v___x_537_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__20));
v___x_538_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v___x_535_);
v___x_539_ = ((lean_object*)(l_Lean_Meta_instReprSimpCongrTheorem_repr___redArg___closed__21));
v___x_540_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_538_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_536_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_542_, 0, v___x_541_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*1, v___x_533_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg___boxed(lean_object* v_x_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg(v_x_543_);
lean_dec_ref(v_x_543_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr(lean_object* v_x_545_, lean_object* v_prec_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lean_Meta_instReprSimpCongrTheorems_repr___redArg(v_x_545_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprSimpCongrTheorems_repr___boxed(lean_object* v_x_548_, lean_object* v_prec_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Meta_instReprSimpCongrTheorems_repr(v_x_548_, v_prec_549_);
lean_dec(v_prec_549_);
lean_dec_ref(v_x_548_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0(lean_object* v_00_u03b2_551_, lean_object* v_m_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___redArg(v_m_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0___boxed(lean_object* v_00_u03b2_554_, lean_object* v_m_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0(v_00_u03b2_554_, v_m_555_);
lean_dec_ref(v_m_555_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1(lean_object* v_a_557_, lean_object* v_n_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1___redArg(v_a_557_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1___boxed(lean_object* v_a_560_, lean_object* v_n_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1(v_a_560_, v_n_561_);
lean_dec(v_n_561_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0(lean_object* v_00_u03b2_563_, lean_object* v_00_u03c3_564_, lean_object* v_f_565_, lean_object* v_init_566_, lean_object* v_m_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___redArg(v_f_565_, v_init_566_, v_m_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_569_, lean_object* v_00_u03c3_570_, lean_object* v_f_571_, lean_object* v_init_572_, lean_object* v_m_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0(v_00_u03b2_569_, v_00_u03c3_570_, v_f_571_, v_init_572_, v_m_573_);
lean_dec_ref(v_m_573_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2(lean_object* v_x_575_, lean_object* v_x_576_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___redArg(v_x_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2___boxed(lean_object* v_x_578_, lean_object* v_x_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2(v_x_578_, v_x_579_);
lean_dec(v_x_579_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_581_, lean_object* v_00_u03c3_582_, lean_object* v_f_583_, lean_object* v_x_584_, lean_object* v_x_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__1___redArg(v_f_583_, v_x_584_, v_x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2(lean_object* v_00_u03c3_587_, lean_object* v_00_u03b2_588_, lean_object* v_map_589_, lean_object* v_f_590_, lean_object* v_init_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___redArg(v_map_589_, v_f_590_, v_init_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03c3_593_, lean_object* v_00_u03b2_594_, lean_object* v_map_595_, lean_object* v_f_596_, lean_object* v_init_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2(v_00_u03c3_593_, v_00_u03b2_594_, v_map_595_, v_f_596_, v_init_597_);
lean_dec_ref(v_map_595_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_599_, lean_object* v_00_u03c3_600_, lean_object* v_f_601_, lean_object* v_as_602_, size_t v_i_603_, size_t v_stop_604_, lean_object* v_b_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___redArg(v_f_601_, v_as_602_, v_i_603_, v_stop_604_, v_b_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_607_, lean_object* v_00_u03c3_608_, lean_object* v_f_609_, lean_object* v_as_610_, lean_object* v_i_611_, lean_object* v_stop_612_, lean_object* v_b_613_){
_start:
{
size_t v_i_boxed_614_; size_t v_stop_boxed_615_; lean_object* v_res_616_; 
v_i_boxed_614_ = lean_unbox_usize(v_i_611_);
lean_dec(v_i_611_);
v_stop_boxed_615_ = lean_unbox_usize(v_stop_612_);
lean_dec(v_stop_612_);
v_res_616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__3(v_00_u03b2_607_, v_00_u03c3_608_, v_f_609_, v_as_610_, v_i_boxed_614_, v_stop_boxed_615_, v_b_613_);
lean_dec_ref(v_as_610_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6(lean_object* v_a_617_, lean_object* v_n_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___redArg(v_a_617_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6___boxed(lean_object* v_a_620_, lean_object* v_n_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_List_repr___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__6(v_a_620_, v_n_621_);
lean_dec(v_n_621_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_map_623_, lean_object* v_f_624_, lean_object* v_init_625_){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_f_624_, v_map_623_, v_init_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_map_627_, lean_object* v_f_628_, lean_object* v_init_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___redArg(v_map_627_, v_f_628_, v_init_629_);
lean_dec_ref(v_map_627_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03c3_631_, lean_object* v_00_u03b2_632_, lean_object* v_map_633_, lean_object* v_f_634_, lean_object* v_init_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_f_634_, v_map_633_, v_init_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03c3_637_, lean_object* v_00_u03b2_638_, lean_object* v_map_639_, lean_object* v_f_640_, lean_object* v_init_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4(v_00_u03c3_637_, v_00_u03b2_638_, v_map_639_, v_f_640_, v_init_641_);
lean_dec_ref(v_map_639_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object* v_00_u03c3_643_, lean_object* v_00_u03b1_644_, lean_object* v_00_u03b2_645_, lean_object* v_f_646_, lean_object* v_x_647_, lean_object* v_x_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_f_646_, v_x_647_, v_x_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03c3_650_, lean_object* v_00_u03b1_651_, lean_object* v_00_u03b2_652_, lean_object* v_f_653_, lean_object* v_x_654_, lean_object* v_x_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7(v_00_u03c3_650_, v_00_u03b1_651_, v_00_u03b2_652_, v_f_653_, v_x_654_, v_x_655_);
lean_dec_ref(v_x_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12(lean_object* v_00_u03b1_657_, lean_object* v_00_u03b2_658_, lean_object* v_00_u03c3_659_, lean_object* v_f_660_, lean_object* v_as_661_, size_t v_i_662_, size_t v_stop_663_, lean_object* v_b_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___redArg(v_f_660_, v_as_661_, v_i_662_, v_stop_663_, v_b_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12___boxed(lean_object* v_00_u03b1_666_, lean_object* v_00_u03b2_667_, lean_object* v_00_u03c3_668_, lean_object* v_f_669_, lean_object* v_as_670_, lean_object* v_i_671_, lean_object* v_stop_672_, lean_object* v_b_673_){
_start:
{
size_t v_i_boxed_674_; size_t v_stop_boxed_675_; lean_object* v_res_676_; 
v_i_boxed_674_ = lean_unbox_usize(v_i_671_);
lean_dec(v_i_671_);
v_stop_boxed_675_ = lean_unbox_usize(v_stop_672_);
lean_dec(v_stop_672_);
v_res_676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__12(v_00_u03b1_666_, v_00_u03b2_667_, v_00_u03c3_668_, v_f_669_, v_as_670_, v_i_boxed_674_, v_stop_boxed_675_, v_b_673_);
lean_dec_ref(v_as_670_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13(lean_object* v_00_u03c3_677_, lean_object* v_00_u03b1_678_, lean_object* v_00_u03b2_679_, lean_object* v_f_680_, lean_object* v_keys_681_, lean_object* v_vals_682_, lean_object* v_heq_683_, lean_object* v_i_684_, lean_object* v_acc_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___redArg(v_f_680_, v_keys_681_, v_vals_682_, v_i_684_, v_acc_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13___boxed(lean_object* v_00_u03c3_687_, lean_object* v_00_u03b1_688_, lean_object* v_00_u03b2_689_, lean_object* v_f_690_, lean_object* v_keys_691_, lean_object* v_vals_692_, lean_object* v_heq_693_, lean_object* v_i_694_, lean_object* v_acc_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__0_spec__0_spec__2_spec__4_spec__7_spec__13(v_00_u03c3_687_, v_00_u03b1_688_, v_00_u03b2_689_, v_f_690_, v_keys_691_, v_vals_692_, v_heq_693_, v_i_694_, v_acc_695_);
lean_dec_ref(v_vals_692_);
lean_dec_ref(v_keys_691_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg(lean_object* v_a_699_, lean_object* v_x_700_){
_start:
{
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v___x_701_; 
v___x_701_ = lean_box(0);
return v___x_701_;
}
else
{
lean_object* v_key_702_; lean_object* v_value_703_; lean_object* v_tail_704_; uint8_t v___x_705_; 
v_key_702_ = lean_ctor_get(v_x_700_, 0);
v_value_703_ = lean_ctor_get(v_x_700_, 1);
v_tail_704_ = lean_ctor_get(v_x_700_, 2);
v___x_705_ = lean_name_eq(v_key_702_, v_a_699_);
if (v___x_705_ == 0)
{
v_x_700_ = v_tail_704_;
goto _start;
}
else
{
lean_object* v___x_707_; 
lean_inc(v_value_703_);
v___x_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_707_, 0, v_value_703_);
return v___x_707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_708_, lean_object* v_x_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg(v_a_708_, v_x_709_);
lean_dec(v_x_709_);
lean_dec(v_a_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg(lean_object* v_m_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_buckets_713_; lean_object* v___x_714_; uint64_t v___y_716_; lean_object* v___x_730_; 
v_buckets_713_ = lean_ctor_get(v_m_711_, 1);
v___x_714_ = lean_array_get_size(v_buckets_713_);
v___x_730_ = l_unsafeCast___redArg(v_a_712_);
if (lean_obj_tag(v___x_730_) == 0)
{
uint64_t v___x_731_; 
v___x_731_ = 1723ULL;
v___y_716_ = v___x_731_;
goto v___jp_715_;
}
else
{
uint64_t v_hash_732_; 
v_hash_732_ = lean_ctor_get_uint64(v___x_730_, sizeof(void*)*2);
lean_dec(v___x_730_);
v___y_716_ = v_hash_732_;
goto v___jp_715_;
}
v___jp_715_:
{
uint64_t v___x_717_; uint64_t v___x_718_; uint64_t v_fold_719_; uint64_t v___x_720_; uint64_t v___x_721_; uint64_t v___x_722_; size_t v___x_723_; size_t v___x_724_; size_t v___x_725_; size_t v___x_726_; size_t v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_717_ = 32ULL;
v___x_718_ = lean_uint64_shift_right(v___y_716_, v___x_717_);
v_fold_719_ = lean_uint64_xor(v___y_716_, v___x_718_);
v___x_720_ = 16ULL;
v___x_721_ = lean_uint64_shift_right(v_fold_719_, v___x_720_);
v___x_722_ = lean_uint64_xor(v_fold_719_, v___x_721_);
v___x_723_ = lean_uint64_to_usize(v___x_722_);
v___x_724_ = lean_usize_of_nat(v___x_714_);
v___x_725_ = ((size_t)1ULL);
v___x_726_ = lean_usize_sub(v___x_724_, v___x_725_);
v___x_727_ = lean_usize_land(v___x_723_, v___x_726_);
v___x_728_ = lean_array_uget_borrowed(v_buckets_713_, v___x_727_);
v___x_729_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg(v_a_712_, v___x_728_);
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg___boxed(lean_object* v_m_733_, lean_object* v_a_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg(v_m_733_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v_m_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_736_, lean_object* v_vals_737_, lean_object* v_i_738_, lean_object* v_k_739_){
_start:
{
lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_740_ = lean_array_get_size(v_keys_736_);
v___x_741_ = lean_nat_dec_lt(v_i_738_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_i_738_);
v___x_742_ = lean_box(0);
return v___x_742_;
}
else
{
lean_object* v_k_x27_743_; uint8_t v___x_744_; 
v_k_x27_743_ = lean_array_fget_borrowed(v_keys_736_, v_i_738_);
v___x_744_ = lean_name_eq(v_k_739_, v_k_x27_743_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_unsigned_to_nat(1u);
v___x_746_ = lean_nat_add(v_i_738_, v___x_745_);
lean_dec(v_i_738_);
v_i_738_ = v___x_746_;
goto _start;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_array_fget_borrowed(v_vals_737_, v_i_738_);
lean_dec(v_i_738_);
lean_inc(v___x_748_);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
return v___x_749_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_750_, lean_object* v_vals_751_, lean_object* v_i_752_, lean_object* v_k_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_750_, v_vals_751_, v_i_752_, v_k_753_);
lean_dec(v_k_753_);
lean_dec_ref(v_vals_751_);
lean_dec_ref(v_keys_750_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg(lean_object* v_x_755_, size_t v_x_756_, lean_object* v_x_757_){
_start:
{
if (lean_obj_tag(v_x_755_) == 0)
{
lean_object* v_es_758_; lean_object* v___x_759_; size_t v___x_760_; size_t v___x_761_; lean_object* v_j_762_; lean_object* v___x_763_; 
v_es_758_ = lean_ctor_get(v_x_755_, 0);
v___x_759_ = lean_box(2);
v___x_760_ = ((size_t)31ULL);
v___x_761_ = lean_usize_land(v_x_756_, v___x_760_);
v_j_762_ = lean_usize_to_nat(v___x_761_);
v___x_763_ = lean_array_get_borrowed(v___x_759_, v_es_758_, v_j_762_);
lean_dec(v_j_762_);
switch(lean_obj_tag(v___x_763_))
{
case 0:
{
lean_object* v_key_764_; lean_object* v_val_765_; uint8_t v___x_766_; 
v_key_764_ = lean_ctor_get(v___x_763_, 0);
v_val_765_ = lean_ctor_get(v___x_763_, 1);
v___x_766_ = lean_name_eq(v_x_757_, v_key_764_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; 
v___x_767_ = lean_box(0);
return v___x_767_;
}
else
{
lean_object* v___x_768_; 
lean_inc(v_val_765_);
v___x_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_768_, 0, v_val_765_);
return v___x_768_;
}
}
case 1:
{
lean_object* v_node_769_; size_t v___x_770_; size_t v___x_771_; 
v_node_769_ = lean_ctor_get(v___x_763_, 0);
v___x_770_ = ((size_t)5ULL);
v___x_771_ = lean_usize_shift_right(v_x_756_, v___x_770_);
v_x_755_ = v_node_769_;
v_x_756_ = v___x_771_;
goto _start;
}
default: 
{
lean_object* v___x_773_; 
v___x_773_ = lean_box(0);
return v___x_773_;
}
}
}
else
{
lean_object* v_ks_774_; lean_object* v_vs_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_ks_774_ = lean_ctor_get(v_x_755_, 0);
v_vs_775_ = lean_ctor_get(v_x_755_, 1);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_774_, v_vs_775_, v___x_776_, v_x_757_);
return v___x_777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_778_, lean_object* v_x_779_, lean_object* v_x_780_){
_start:
{
size_t v_x_319__boxed_781_; lean_object* v_res_782_; 
v_x_319__boxed_781_ = lean_unbox_usize(v_x_779_);
lean_dec(v_x_779_);
v_res_782_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg(v_x_778_, v_x_319__boxed_781_, v_x_780_);
lean_dec(v_x_780_);
lean_dec_ref(v_x_778_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg(lean_object* v_x_783_, lean_object* v_x_784_){
_start:
{
uint64_t v___y_786_; lean_object* v___x_789_; 
v___x_789_ = l_unsafeCast___redArg(v_x_784_);
if (lean_obj_tag(v___x_789_) == 0)
{
uint64_t v___x_790_; 
v___x_790_ = 1723ULL;
v___y_786_ = v___x_790_;
goto v___jp_785_;
}
else
{
uint64_t v_hash_791_; 
v_hash_791_ = lean_ctor_get_uint64(v___x_789_, sizeof(void*)*2);
lean_dec(v___x_789_);
v___y_786_ = v_hash_791_;
goto v___jp_785_;
}
v___jp_785_:
{
size_t v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_uint64_to_usize(v___y_786_);
v___x_788_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg(v_x_783_, v___x_787_, v_x_784_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg___boxed(lean_object* v_x_792_, lean_object* v_x_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg(v_x_792_, v_x_793_);
lean_dec(v_x_793_);
lean_dec_ref(v_x_792_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg(lean_object* v_x_795_, lean_object* v_x_796_){
_start:
{
uint8_t v_stage_u2081_797_; 
v_stage_u2081_797_ = lean_ctor_get_uint8(v_x_795_, sizeof(void*)*2);
if (v_stage_u2081_797_ == 0)
{
lean_object* v_map_u2081_798_; lean_object* v_map_u2082_799_; lean_object* v___x_800_; 
v_map_u2081_798_ = lean_ctor_get(v_x_795_, 0);
v_map_u2082_799_ = lean_ctor_get(v_x_795_, 1);
v___x_800_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg(v_map_u2082_799_, v_x_796_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v___x_801_; 
v___x_801_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg(v_map_u2081_798_, v_x_796_);
return v___x_801_;
}
else
{
return v___x_800_;
}
}
else
{
lean_object* v_map_u2081_802_; lean_object* v___x_803_; 
v_map_u2081_802_ = lean_ctor_get(v_x_795_, 0);
v___x_803_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg(v_map_u2081_802_, v_x_796_);
return v___x_803_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg___boxed(lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg(v_x_804_, v_x_805_);
lean_dec(v_x_805_);
lean_dec_ref(v_x_804_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SimpCongrTheorems_get(lean_object* v_d_807_, lean_object* v_declName_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg(v_d_807_, v_declName_808_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v___x_810_; 
v___x_810_ = lean_box(0);
return v___x_810_;
}
else
{
lean_object* v_val_811_; 
v_val_811_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_val_811_);
lean_dec_ref_known(v___x_809_, 1);
return v_val_811_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SimpCongrTheorems_get___boxed(lean_object* v_d_812_, lean_object* v_declName_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lean_Meta_SimpCongrTheorems_get(v_d_812_, v_declName_813_);
lean_dec(v_declName_813_);
lean_dec_ref(v_d_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0(lean_object* v_00_u03b2_815_, lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg(v_x_816_, v_x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___boxed(lean_object* v_00_u03b2_819_, lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0(v_00_u03b2_819_, v_x_820_, v_x_821_);
lean_dec(v_x_821_);
lean_dec_ref(v_x_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0(lean_object* v_00_u03b2_823_, lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___redArg(v_x_824_, v_x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0___boxed(lean_object* v_00_u03b2_827_, lean_object* v_x_828_, lean_object* v_x_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0(v_00_u03b2_827_, v_x_828_, v_x_829_);
lean_dec(v_x_829_);
lean_dec_ref(v_x_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1(lean_object* v_00_u03b2_831_, lean_object* v_m_832_, lean_object* v_a_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___redArg(v_m_832_, v_a_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1___boxed(lean_object* v_00_u03b2_835_, lean_object* v_m_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1(v_00_u03b2_835_, v_m_836_, v_a_837_);
lean_dec(v_a_837_);
lean_dec_ref(v_m_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_839_, lean_object* v_x_840_, size_t v_x_841_, lean_object* v_x_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___redArg(v_x_840_, v_x_841_, v_x_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_844_, lean_object* v_x_845_, lean_object* v_x_846_, lean_object* v_x_847_){
_start:
{
size_t v_x_429__boxed_848_; lean_object* v_res_849_; 
v_x_429__boxed_848_ = lean_unbox_usize(v_x_846_);
lean_dec(v_x_846_);
v_res_849_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1(v_00_u03b2_844_, v_x_845_, v_x_429__boxed_848_, v_x_847_);
lean_dec(v_x_847_);
lean_dec_ref(v_x_845_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_850_, lean_object* v_a_851_, lean_object* v_x_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___redArg(v_a_851_, v_x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_854_, lean_object* v_a_855_, lean_object* v_x_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__1_spec__3(v_00_u03b2_854_, v_a_855_, v_x_856_);
lean_dec(v_x_856_);
lean_dec(v_a_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_858_, lean_object* v_keys_859_, lean_object* v_vals_860_, lean_object* v_heq_861_, lean_object* v_i_862_, lean_object* v_k_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_859_, v_vals_860_, v_i_862_, v_k_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_865_, lean_object* v_keys_866_, lean_object* v_vals_867_, lean_object* v_heq_868_, lean_object* v_i_869_, lean_object* v_k_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_865_, v_keys_866_, v_vals_867_, v_heq_868_, v_i_869_, v_k_870_);
lean_dec(v_k_870_);
lean_dec_ref(v_vals_867_);
lean_dec_ref(v_keys_866_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_addSimpCongrTheoremEntry_insert(lean_object* v_e_872_, lean_object* v_a_873_){
_start:
{
if (lean_obj_tag(v_a_873_) == 0)
{
lean_object* v___x_874_; 
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v_e_872_);
lean_ctor_set(v___x_874_, 1, v_a_873_);
return v___x_874_;
}
else
{
lean_object* v_head_875_; lean_object* v_tail_876_; lean_object* v_priority_877_; lean_object* v_priority_878_; uint8_t v___x_879_; 
v_head_875_ = lean_ctor_get(v_a_873_, 0);
v_tail_876_ = lean_ctor_get(v_a_873_, 1);
v_priority_877_ = lean_ctor_get(v_head_875_, 3);
v_priority_878_ = lean_ctor_get(v_e_872_, 3);
v___x_879_ = lean_nat_dec_le(v_priority_877_, v_priority_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_887_; 
lean_inc(v_tail_876_);
lean_inc(v_head_875_);
v_isSharedCheck_887_ = !lean_is_exclusive(v_a_873_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; lean_object* v_unused_889_; 
v_unused_888_ = lean_ctor_get(v_a_873_, 1);
lean_dec(v_unused_888_);
v_unused_889_ = lean_ctor_get(v_a_873_, 0);
lean_dec(v_unused_889_);
v___x_881_ = v_a_873_;
v_isShared_882_ = v_isSharedCheck_887_;
goto v_resetjp_880_;
}
else
{
lean_dec(v_a_873_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_887_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_883_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_addSimpCongrTheoremEntry_insert(v_e_872_, v_tail_876_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 1, v___x_883_);
v___x_885_ = v___x_881_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_head_875_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
else
{
lean_object* v___x_890_; 
v___x_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_890_, 0, v_e_872_);
lean_ctor_set(v___x_890_, 1, v_a_873_);
return v___x_890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5___redArg(lean_object* v_a_891_, lean_object* v_b_892_, lean_object* v_x_893_){
_start:
{
if (lean_obj_tag(v_x_893_) == 0)
{
lean_dec(v_b_892_);
lean_dec(v_a_891_);
return v_x_893_;
}
else
{
lean_object* v_key_894_; lean_object* v_value_895_; lean_object* v_tail_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_908_; 
v_key_894_ = lean_ctor_get(v_x_893_, 0);
v_value_895_ = lean_ctor_get(v_x_893_, 1);
v_tail_896_ = lean_ctor_get(v_x_893_, 2);
v_isSharedCheck_908_ = !lean_is_exclusive(v_x_893_);
if (v_isSharedCheck_908_ == 0)
{
v___x_898_ = v_x_893_;
v_isShared_899_ = v_isSharedCheck_908_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_tail_896_);
lean_inc(v_value_895_);
lean_inc(v_key_894_);
lean_dec(v_x_893_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_908_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
uint8_t v___x_900_; 
v___x_900_ = lean_name_eq(v_key_894_, v_a_891_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_901_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5___redArg(v_a_891_, v_b_892_, v_tail_896_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 2, v___x_901_);
v___x_903_ = v___x_898_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_key_894_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_value_895_);
lean_ctor_set(v_reuseFailAlloc_904_, 2, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
else
{
lean_object* v___x_906_; 
lean_dec(v_value_895_);
lean_dec(v_key_894_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 1, v_b_892_);
lean_ctor_set(v___x_898_, 0, v_a_891_);
v___x_906_ = v___x_898_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_891_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_b_892_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v_tail_896_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7_spec__9___redArg(lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
if (lean_obj_tag(v_x_910_) == 0)
{
return v_x_909_;
}
else
{
lean_object* v_key_911_; lean_object* v_value_912_; lean_object* v_tail_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_940_; 
v_key_911_ = lean_ctor_get(v_x_910_, 0);
v_value_912_ = lean_ctor_get(v_x_910_, 1);
v_tail_913_ = lean_ctor_get(v_x_910_, 2);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_910_);
if (v_isSharedCheck_940_ == 0)
{
v___x_915_ = v_x_910_;
v_isShared_916_ = v_isSharedCheck_940_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_tail_913_);
lean_inc(v_value_912_);
lean_inc(v_key_911_);
lean_dec(v_x_910_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_940_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_917_; uint64_t v___y_919_; lean_object* v___x_937_; 
v___x_917_ = lean_array_get_size(v_x_909_);
v___x_937_ = l_unsafeCast___redArg(v_key_911_);
if (lean_obj_tag(v___x_937_) == 0)
{
uint64_t v___x_938_; 
v___x_938_ = 1723ULL;
v___y_919_ = v___x_938_;
goto v___jp_918_;
}
else
{
uint64_t v_hash_939_; 
v_hash_939_ = lean_ctor_get_uint64(v___x_937_, sizeof(void*)*2);
lean_dec(v___x_937_);
v___y_919_ = v_hash_939_;
goto v___jp_918_;
}
v___jp_918_:
{
uint64_t v___x_920_; uint64_t v___x_921_; uint64_t v_fold_922_; uint64_t v___x_923_; uint64_t v___x_924_; uint64_t v___x_925_; size_t v___x_926_; size_t v___x_927_; size_t v___x_928_; size_t v___x_929_; size_t v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_920_ = 32ULL;
v___x_921_ = lean_uint64_shift_right(v___y_919_, v___x_920_);
v_fold_922_ = lean_uint64_xor(v___y_919_, v___x_921_);
v___x_923_ = 16ULL;
v___x_924_ = lean_uint64_shift_right(v_fold_922_, v___x_923_);
v___x_925_ = lean_uint64_xor(v_fold_922_, v___x_924_);
v___x_926_ = lean_uint64_to_usize(v___x_925_);
v___x_927_ = lean_usize_of_nat(v___x_917_);
v___x_928_ = ((size_t)1ULL);
v___x_929_ = lean_usize_sub(v___x_927_, v___x_928_);
v___x_930_ = lean_usize_land(v___x_926_, v___x_929_);
v___x_931_ = lean_array_uget_borrowed(v_x_909_, v___x_930_);
lean_inc(v___x_931_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 2, v___x_931_);
v___x_933_ = v___x_915_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_key_911_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_value_912_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v___x_931_);
v___x_933_ = v_reuseFailAlloc_936_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_934_; 
v___x_934_ = lean_array_uset(v_x_909_, v___x_930_, v___x_933_);
v_x_909_ = v___x_934_;
v_x_910_ = v_tail_913_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7___redArg(lean_object* v_i_941_, lean_object* v_source_942_, lean_object* v_target_943_){
_start:
{
lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_944_ = lean_array_get_size(v_source_942_);
v___x_945_ = lean_nat_dec_lt(v_i_941_, v___x_944_);
if (v___x_945_ == 0)
{
lean_dec_ref(v_source_942_);
lean_dec(v_i_941_);
return v_target_943_;
}
else
{
lean_object* v_es_946_; lean_object* v___x_947_; lean_object* v_source_948_; lean_object* v_target_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_es_946_ = lean_array_fget(v_source_942_, v_i_941_);
v___x_947_ = lean_box(0);
v_source_948_ = lean_array_fset(v_source_942_, v_i_941_, v___x_947_);
v_target_949_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7_spec__9___redArg(v_target_943_, v_es_946_);
v___x_950_ = lean_unsigned_to_nat(1u);
v___x_951_ = lean_nat_add(v_i_941_, v___x_950_);
lean_dec(v_i_941_);
v_i_941_ = v___x_951_;
v_source_942_ = v_source_948_;
v_target_943_ = v_target_949_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4___redArg(lean_object* v_data_953_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v_nbuckets_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_954_ = lean_array_get_size(v_data_953_);
v___x_955_ = lean_unsigned_to_nat(2u);
v_nbuckets_956_ = lean_nat_mul(v___x_954_, v___x_955_);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_box(0);
v___x_959_ = lean_mk_array(v_nbuckets_956_, v___x_958_);
v___x_960_ = lean_array_propagate_mark(v_data_953_, v___x_959_);
v___x_961_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7___redArg(v___x_957_, v_data_953_, v___x_960_);
return v___x_961_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg(lean_object* v_a_962_, lean_object* v_x_963_){
_start:
{
if (lean_obj_tag(v_x_963_) == 0)
{
uint8_t v___x_964_; 
v___x_964_ = 0;
return v___x_964_;
}
else
{
lean_object* v_key_965_; lean_object* v_tail_966_; uint8_t v___x_967_; 
v_key_965_ = lean_ctor_get(v_x_963_, 0);
v_tail_966_ = lean_ctor_get(v_x_963_, 2);
v___x_967_ = lean_name_eq(v_key_965_, v_a_962_);
if (v___x_967_ == 0)
{
v_x_963_ = v_tail_966_;
goto _start;
}
else
{
return v___x_967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_969_, lean_object* v_x_970_){
_start:
{
uint8_t v_res_971_; lean_object* v_r_972_; 
v_res_971_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg(v_a_969_, v_x_970_);
lean_dec(v_x_970_);
lean_dec(v_a_969_);
v_r_972_ = lean_box(v_res_971_);
return v_r_972_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1___redArg(lean_object* v_m_973_, lean_object* v_a_974_, lean_object* v_b_975_){
_start:
{
lean_object* v_size_976_; lean_object* v_buckets_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_1024_; 
v_size_976_ = lean_ctor_get(v_m_973_, 0);
v_buckets_977_ = lean_ctor_get(v_m_973_, 1);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_m_973_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_979_ = v_m_973_;
v_isShared_980_ = v_isSharedCheck_1024_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_buckets_977_);
lean_inc(v_size_976_);
lean_dec(v_m_973_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_1024_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_981_; uint64_t v___y_983_; lean_object* v___x_1021_; 
v___x_981_ = lean_array_get_size(v_buckets_977_);
v___x_1021_ = l_unsafeCast___redArg(v_a_974_);
if (lean_obj_tag(v___x_1021_) == 0)
{
uint64_t v___x_1022_; 
v___x_1022_ = 1723ULL;
v___y_983_ = v___x_1022_;
goto v___jp_982_;
}
else
{
uint64_t v_hash_1023_; 
v_hash_1023_ = lean_ctor_get_uint64(v___x_1021_, sizeof(void*)*2);
lean_dec(v___x_1021_);
v___y_983_ = v_hash_1023_;
goto v___jp_982_;
}
v___jp_982_:
{
uint64_t v___x_984_; uint64_t v___x_985_; uint64_t v_fold_986_; uint64_t v___x_987_; uint64_t v___x_988_; uint64_t v___x_989_; size_t v___x_990_; size_t v___x_991_; size_t v___x_992_; size_t v___x_993_; size_t v___x_994_; lean_object* v_bkt_995_; uint8_t v___x_996_; 
v___x_984_ = 32ULL;
v___x_985_ = lean_uint64_shift_right(v___y_983_, v___x_984_);
v_fold_986_ = lean_uint64_xor(v___y_983_, v___x_985_);
v___x_987_ = 16ULL;
v___x_988_ = lean_uint64_shift_right(v_fold_986_, v___x_987_);
v___x_989_ = lean_uint64_xor(v_fold_986_, v___x_988_);
v___x_990_ = lean_uint64_to_usize(v___x_989_);
v___x_991_ = lean_usize_of_nat(v___x_981_);
v___x_992_ = ((size_t)1ULL);
v___x_993_ = lean_usize_sub(v___x_991_, v___x_992_);
v___x_994_ = lean_usize_land(v___x_990_, v___x_993_);
v_bkt_995_ = lean_array_uget_borrowed(v_buckets_977_, v___x_994_);
v___x_996_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg(v_a_974_, v_bkt_995_);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; lean_object* v_size_x27_998_; lean_object* v___x_999_; lean_object* v_buckets_x27_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_997_ = lean_unsigned_to_nat(1u);
v_size_x27_998_ = lean_nat_add(v_size_976_, v___x_997_);
lean_dec(v_size_976_);
lean_inc(v_bkt_995_);
v___x_999_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_999_, 0, v_a_974_);
lean_ctor_set(v___x_999_, 1, v_b_975_);
lean_ctor_set(v___x_999_, 2, v_bkt_995_);
v_buckets_x27_1000_ = lean_array_uset(v_buckets_977_, v___x_994_, v___x_999_);
v___x_1001_ = lean_unsigned_to_nat(4u);
v___x_1002_ = lean_nat_mul(v_size_x27_998_, v___x_1001_);
v___x_1003_ = lean_unsigned_to_nat(3u);
v___x_1004_ = lean_nat_div(v___x_1002_, v___x_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_array_get_size(v_buckets_x27_1000_);
v___x_1006_ = lean_nat_dec_le(v___x_1004_, v___x_1005_);
lean_dec(v___x_1004_);
if (v___x_1006_ == 0)
{
lean_object* v_val_1007_; lean_object* v___x_1009_; 
v_val_1007_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4___redArg(v_buckets_x27_1000_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 1, v_val_1007_);
lean_ctor_set(v___x_979_, 0, v_size_x27_998_);
v___x_1009_ = v___x_979_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_size_x27_998_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_val_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
else
{
lean_object* v___x_1012_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 1, v_buckets_x27_1000_);
lean_ctor_set(v___x_979_, 0, v_size_x27_998_);
v___x_1012_ = v___x_979_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_size_x27_998_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_buckets_x27_1000_);
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
lean_object* v___x_1014_; lean_object* v_buckets_x27_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
lean_inc(v_bkt_995_);
v___x_1014_ = lean_box(0);
v_buckets_x27_1015_ = lean_array_uset(v_buckets_977_, v___x_994_, v___x_1014_);
v___x_1016_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5___redArg(v_a_974_, v_b_975_, v_bkt_995_);
v___x_1017_ = lean_array_uset(v_buckets_x27_1015_, v___x_994_, v___x_1016_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 1, v___x_1017_);
v___x_1019_ = v___x_979_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_size_976_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_1025_, lean_object* v_x_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_){
_start:
{
lean_object* v_ks_1029_; lean_object* v_vs_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1054_; 
v_ks_1029_ = lean_ctor_get(v_x_1025_, 0);
v_vs_1030_ = lean_ctor_get(v_x_1025_, 1);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_x_1025_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1032_ = v_x_1025_;
v_isShared_1033_ = v_isSharedCheck_1054_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_vs_1030_);
lean_inc(v_ks_1029_);
lean_dec(v_x_1025_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1054_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_array_get_size(v_ks_1029_);
v___x_1035_ = lean_nat_dec_lt(v_x_1026_, v___x_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
lean_dec(v_x_1026_);
v___x_1036_ = lean_array_push(v_ks_1029_, v_x_1027_);
v___x_1037_ = lean_array_push(v_vs_1030_, v_x_1028_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 1, v___x_1037_);
lean_ctor_set(v___x_1032_, 0, v___x_1036_);
v___x_1039_ = v___x_1032_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1036_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
else
{
lean_object* v_k_x27_1041_; uint8_t v___x_1042_; 
v_k_x27_1041_ = lean_array_fget_borrowed(v_ks_1029_, v_x_1026_);
v___x_1042_ = lean_name_eq(v_x_1027_, v_k_x27_1041_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1044_; 
if (v_isShared_1033_ == 0)
{
v___x_1044_ = v___x_1032_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_ks_1029_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_vs_1030_);
v___x_1044_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_unsigned_to_nat(1u);
v___x_1046_ = lean_nat_add(v_x_1026_, v___x_1045_);
lean_dec(v_x_1026_);
v_x_1025_ = v___x_1044_;
v_x_1026_ = v___x_1046_;
goto _start;
}
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1049_ = lean_array_fset(v_ks_1029_, v_x_1026_, v_x_1027_);
v___x_1050_ = lean_array_fset(v_vs_1030_, v_x_1026_, v_x_1028_);
lean_dec(v_x_1026_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 1, v___x_1050_);
lean_ctor_set(v___x_1032_, 0, v___x_1049_);
v___x_1052_ = v___x_1032_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v___x_1050_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1055_, lean_object* v_k_1056_, lean_object* v_v_1057_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_n_1055_, v___x_1058_, v_k_1056_, v_v_1057_);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_box(0);
v___x_1061_ = l_unsafeCast___redArg(v___x_1060_);
return v___x_1061_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1063_, size_t v_x_1064_, size_t v_x_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_){
_start:
{
if (lean_obj_tag(v_x_1063_) == 0)
{
lean_object* v_es_1068_; size_t v___x_1069_; size_t v___x_1070_; lean_object* v_j_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_es_1068_ = lean_ctor_get(v_x_1063_, 0);
v___x_1069_ = ((size_t)31ULL);
v___x_1070_ = lean_usize_land(v_x_1064_, v___x_1069_);
v_j_1071_ = lean_usize_to_nat(v___x_1070_);
v___x_1072_ = lean_array_get_size(v_es_1068_);
v___x_1073_ = lean_nat_dec_lt(v_j_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_dec(v_j_1071_);
lean_dec(v_x_1067_);
lean_dec(v_x_1066_);
return v_x_1063_;
}
else
{
lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1112_; 
lean_inc_ref(v_es_1068_);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_x_1063_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; 
v_unused_1113_ = lean_ctor_get(v_x_1063_, 0);
lean_dec(v_unused_1113_);
v___x_1075_ = v_x_1063_;
v_isShared_1076_ = v_isSharedCheck_1112_;
goto v_resetjp_1074_;
}
else
{
lean_dec(v_x_1063_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1112_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v_v_1077_; lean_object* v___x_1078_; lean_object* v_xs_x27_1079_; lean_object* v___y_1081_; 
v_v_1077_ = lean_array_fget(v_es_1068_, v_j_1071_);
v___x_1078_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_1079_ = lean_array_fset(v_es_1068_, v_j_1071_, v___x_1078_);
switch(lean_obj_tag(v_v_1077_))
{
case 0:
{
lean_object* v_key_1086_; lean_object* v_val_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1097_; 
v_key_1086_ = lean_ctor_get(v_v_1077_, 0);
v_val_1087_ = lean_ctor_get(v_v_1077_, 1);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_v_1077_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1089_ = v_v_1077_;
v_isShared_1090_ = v_isSharedCheck_1097_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_val_1087_);
lean_inc(v_key_1086_);
lean_dec(v_v_1077_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1097_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
uint8_t v___x_1091_; 
v___x_1091_ = lean_name_eq(v_x_1066_, v_key_1086_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_del_object(v___x_1089_);
v___x_1092_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1086_, v_val_1087_, v_x_1066_, v_x_1067_);
v___x_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
v___y_1081_ = v___x_1093_;
goto v___jp_1080_;
}
else
{
lean_object* v___x_1095_; 
lean_dec(v_val_1087_);
lean_dec(v_key_1086_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 1, v_x_1067_);
lean_ctor_set(v___x_1089_, 0, v_x_1066_);
v___x_1095_ = v___x_1089_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_x_1066_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v_x_1067_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
v___y_1081_ = v___x_1095_;
goto v___jp_1080_;
}
}
}
}
case 1:
{
lean_object* v_node_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1110_; 
v_node_1098_ = lean_ctor_get(v_v_1077_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_v_1077_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1100_ = v_v_1077_;
v_isShared_1101_ = v_isSharedCheck_1110_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_node_1098_);
lean_dec(v_v_1077_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1110_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
size_t v___x_1102_; size_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1102_ = ((size_t)5ULL);
v___x_1103_ = lean_usize_shift_right(v_x_1064_, v___x_1102_);
v___x_1104_ = ((size_t)1ULL);
v___x_1105_ = lean_usize_add(v_x_1065_, v___x_1104_);
v___x_1106_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(v_node_1098_, v___x_1103_, v___x_1105_, v_x_1066_, v_x_1067_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v___x_1106_);
v___x_1108_ = v___x_1100_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
v___y_1081_ = v___x_1108_;
goto v___jp_1080_;
}
}
}
default: 
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1111_, 0, v_x_1066_);
lean_ctor_set(v___x_1111_, 1, v_x_1067_);
v___y_1081_ = v___x_1111_;
goto v___jp_1080_;
}
}
v___jp_1080_:
{
lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1082_ = lean_array_fset(v_xs_x27_1079_, v_j_1071_, v___y_1081_);
lean_dec(v_j_1071_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1082_);
v___x_1084_ = v___x_1075_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
else
{
lean_object* v_ks_1114_; lean_object* v_vs_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1133_; 
v_ks_1114_ = lean_ctor_get(v_x_1063_, 0);
v_vs_1115_ = lean_ctor_get(v_x_1063_, 1);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_x_1063_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1117_ = v_x_1063_;
v_isShared_1118_ = v_isSharedCheck_1133_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_vs_1115_);
lean_inc(v_ks_1114_);
lean_dec(v_x_1063_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1133_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_ks_1114_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_vs_1115_);
v___x_1120_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
lean_object* v_newNode_1121_; size_t v___x_1122_; uint8_t v___x_1123_; 
v_newNode_1121_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1120_, v_x_1066_, v_x_1067_);
v___x_1122_ = ((size_t)7ULL);
v___x_1123_ = lean_usize_dec_le(v___x_1122_, v_x_1065_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; 
v___x_1124_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1121_);
v___x_1125_ = lean_unsigned_to_nat(4u);
v___x_1126_ = lean_nat_dec_lt(v___x_1124_, v___x_1125_);
lean_dec(v___x_1124_);
if (v___x_1126_ == 0)
{
lean_object* v_ks_1127_; lean_object* v_vs_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v_ks_1127_ = lean_ctor_get(v_newNode_1121_, 0);
lean_inc_ref(v_ks_1127_);
v_vs_1128_ = lean_ctor_get(v_newNode_1121_, 1);
lean_inc_ref(v_vs_1128_);
lean_dec_ref(v_newNode_1121_);
v___x_1129_ = lean_unsigned_to_nat(0u);
v___x_1130_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1131_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1065_, v_ks_1127_, v_vs_1128_, v___x_1129_, v___x_1130_);
lean_dec_ref(v_vs_1128_);
lean_dec_ref(v_ks_1127_);
return v___x_1131_;
}
else
{
return v_newNode_1121_;
}
}
else
{
return v_newNode_1121_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1134_, lean_object* v_keys_1135_, lean_object* v_vals_1136_, lean_object* v_i_1137_, lean_object* v_entries_1138_){
_start:
{
lean_object* v___x_1139_; uint8_t v___x_1140_; 
v___x_1139_ = lean_array_get_size(v_keys_1135_);
v___x_1140_ = lean_nat_dec_lt(v_i_1137_, v___x_1139_);
if (v___x_1140_ == 0)
{
lean_dec(v_i_1137_);
return v_entries_1138_;
}
else
{
lean_object* v_k_1141_; lean_object* v_v_1142_; uint64_t v___y_1144_; lean_object* v___x_1155_; 
v_k_1141_ = lean_array_fget_borrowed(v_keys_1135_, v_i_1137_);
v_v_1142_ = lean_array_fget_borrowed(v_vals_1136_, v_i_1137_);
v___x_1155_ = l_unsafeCast___redArg(v_k_1141_);
if (lean_obj_tag(v___x_1155_) == 0)
{
uint64_t v___x_1156_; 
v___x_1156_ = 1723ULL;
v___y_1144_ = v___x_1156_;
goto v___jp_1143_;
}
else
{
uint64_t v_hash_1157_; 
v_hash_1157_ = lean_ctor_get_uint64(v___x_1155_, sizeof(void*)*2);
lean_dec(v___x_1155_);
v___y_1144_ = v_hash_1157_;
goto v___jp_1143_;
}
v___jp_1143_:
{
size_t v_h_1145_; size_t v___x_1146_; lean_object* v___x_1147_; size_t v___x_1148_; size_t v___x_1149_; size_t v___x_1150_; size_t v_h_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_h_1145_ = lean_uint64_to_usize(v___y_1144_);
v___x_1146_ = ((size_t)5ULL);
v___x_1147_ = lean_unsigned_to_nat(1u);
v___x_1148_ = ((size_t)1ULL);
v___x_1149_ = lean_usize_sub(v_depth_1134_, v___x_1148_);
v___x_1150_ = lean_usize_mul(v___x_1146_, v___x_1149_);
v_h_1151_ = lean_usize_shift_right(v_h_1145_, v___x_1150_);
v___x_1152_ = lean_nat_add(v_i_1137_, v___x_1147_);
lean_dec(v_i_1137_);
lean_inc(v_v_1142_);
lean_inc(v_k_1141_);
v___x_1153_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(v_entries_1138_, v_h_1151_, v_depth_1134_, v_k_1141_, v_v_1142_);
v_i_1137_ = v___x_1152_;
v_entries_1138_ = v___x_1153_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1158_, lean_object* v_keys_1159_, lean_object* v_vals_1160_, lean_object* v_i_1161_, lean_object* v_entries_1162_){
_start:
{
size_t v_depth_boxed_1163_; lean_object* v_res_1164_; 
v_depth_boxed_1163_ = lean_unbox_usize(v_depth_1158_);
lean_dec(v_depth_1158_);
v_res_1164_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1163_, v_keys_1159_, v_vals_1160_, v_i_1161_, v_entries_1162_);
lean_dec_ref(v_vals_1160_);
lean_dec_ref(v_keys_1159_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1165_, lean_object* v_x_1166_, lean_object* v_x_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
size_t v_x_1063__boxed_1170_; size_t v_x_1064__boxed_1171_; lean_object* v_res_1172_; 
v_x_1063__boxed_1170_ = lean_unbox_usize(v_x_1166_);
lean_dec(v_x_1166_);
v_x_1064__boxed_1171_ = lean_unbox_usize(v_x_1167_);
lean_dec(v_x_1167_);
v_res_1172_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(v_x_1165_, v_x_1063__boxed_1170_, v_x_1064__boxed_1171_, v_x_1168_, v_x_1169_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0___redArg(lean_object* v_x_1173_, lean_object* v_x_1174_, lean_object* v_x_1175_){
_start:
{
uint64_t v___y_1177_; lean_object* v___x_1181_; 
v___x_1181_ = l_unsafeCast___redArg(v_x_1174_);
if (lean_obj_tag(v___x_1181_) == 0)
{
uint64_t v___x_1182_; 
v___x_1182_ = 1723ULL;
v___y_1177_ = v___x_1182_;
goto v___jp_1176_;
}
else
{
uint64_t v_hash_1183_; 
v_hash_1183_ = lean_ctor_get_uint64(v___x_1181_, sizeof(void*)*2);
lean_dec(v___x_1181_);
v___y_1177_ = v_hash_1183_;
goto v___jp_1176_;
}
v___jp_1176_:
{
size_t v___x_1178_; size_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_uint64_to_usize(v___y_1177_);
v___x_1179_ = ((size_t)1ULL);
v___x_1180_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(v_x_1173_, v___x_1178_, v___x_1179_, v_x_1174_, v_x_1175_);
return v___x_1180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0___redArg(lean_object* v_x_1184_, lean_object* v_x_1185_, lean_object* v_x_1186_){
_start:
{
uint8_t v_stage_u2081_1187_; 
v_stage_u2081_1187_ = lean_ctor_get_uint8(v_x_1184_, sizeof(void*)*2);
if (v_stage_u2081_1187_ == 0)
{
lean_object* v_map_u2081_1188_; lean_object* v_map_u2082_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1197_; 
v_map_u2081_1188_ = lean_ctor_get(v_x_1184_, 0);
v_map_u2082_1189_ = lean_ctor_get(v_x_1184_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_x_1184_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1191_ = v_x_1184_;
v_isShared_1192_ = v_isSharedCheck_1197_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_map_u2082_1189_);
lean_inc(v_map_u2081_1188_);
lean_dec(v_x_1184_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1197_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; lean_object* v___x_1195_; 
v___x_1193_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0___redArg(v_map_u2082_1189_, v_x_1185_, v_x_1186_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1193_);
v___x_1195_ = v___x_1191_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_map_u2081_1188_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1193_);
lean_ctor_set_uint8(v_reuseFailAlloc_1196_, sizeof(void*)*2, v_stage_u2081_1187_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
else
{
lean_object* v_map_u2081_1198_; lean_object* v_map_u2082_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1207_; 
v_map_u2081_1198_ = lean_ctor_get(v_x_1184_, 0);
v_map_u2082_1199_ = lean_ctor_get(v_x_1184_, 1);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_x_1184_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1201_ = v_x_1184_;
v_isShared_1202_ = v_isSharedCheck_1207_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_map_u2082_1199_);
lean_inc(v_map_u2081_1198_);
lean_dec(v_x_1184_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1207_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1203_; lean_object* v___x_1205_; 
v___x_1203_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1___redArg(v_map_u2081_1198_, v_x_1185_, v_x_1186_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1203_);
v___x_1205_ = v___x_1201_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v___x_1203_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v_map_u2082_1199_);
lean_ctor_set_uint8(v_reuseFailAlloc_1206_, sizeof(void*)*2, v_stage_u2081_1187_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addSimpCongrTheoremEntry(lean_object* v_d_1208_, lean_object* v_e_1209_){
_start:
{
lean_object* v_funName_1210_; lean_object* v___x_1211_; 
v_funName_1210_ = lean_ctor_get(v_e_1209_, 1);
lean_inc(v_funName_1210_);
v___x_1211_ = l_Lean_SMap_find_x3f___at___00Lean_Meta_SimpCongrTheorems_get_spec__0___redArg(v_d_1208_, v_funName_1210_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_box(0);
v___x_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1213_, 0, v_e_1209_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0___redArg(v_d_1208_, v_funName_1210_, v___x_1213_);
return v___x_1214_;
}
else
{
lean_object* v_val_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_val_1215_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_val_1215_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1216_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_addSimpCongrTheoremEntry_insert(v_e_1209_, v_val_1215_);
v___x_1217_ = l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0___redArg(v_d_1208_, v_funName_1210_, v___x_1216_);
return v___x_1217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0(lean_object* v_00_u03b2_1218_, lean_object* v_x_1219_, lean_object* v_x_1220_, lean_object* v_x_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0___redArg(v_x_1219_, v_x_1220_, v_x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0(lean_object* v_00_u03b2_1223_, lean_object* v_x_1224_, lean_object* v_x_1225_, lean_object* v_x_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0___redArg(v_x_1224_, v_x_1225_, v_x_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1(lean_object* v_00_u03b2_1228_, lean_object* v_m_1229_, lean_object* v_a_1230_, lean_object* v_b_1231_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1___redArg(v_m_1229_, v_a_1230_, v_b_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1233_, lean_object* v_x_1234_, size_t v_x_1235_, size_t v_x_1236_, lean_object* v_x_1237_, lean_object* v_x_1238_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___redArg(v_x_1234_, v_x_1235_, v_x_1236_, v_x_1237_, v_x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1240_, lean_object* v_x_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_, lean_object* v_x_1244_, lean_object* v_x_1245_){
_start:
{
size_t v_x_1320__boxed_1246_; size_t v_x_1321__boxed_1247_; lean_object* v_res_1248_; 
v_x_1320__boxed_1246_ = lean_unbox_usize(v_x_1242_);
lean_dec(v_x_1242_);
v_x_1321__boxed_1247_ = lean_unbox_usize(v_x_1243_);
lean_dec(v_x_1243_);
v_res_1248_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1(v_00_u03b2_1240_, v_x_1241_, v_x_1320__boxed_1246_, v_x_1321__boxed_1247_, v_x_1244_, v_x_1245_);
return v_res_1248_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1249_, lean_object* v_a_1250_, lean_object* v_x_1251_){
_start:
{
uint8_t v___x_1252_; 
v___x_1252_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___redArg(v_a_1250_, v_x_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1253_, lean_object* v_a_1254_, lean_object* v_x_1255_){
_start:
{
uint8_t v_res_1256_; lean_object* v_r_1257_; 
v_res_1256_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__3(v_00_u03b2_1253_, v_a_1254_, v_x_1255_);
lean_dec(v_x_1255_);
lean_dec(v_a_1254_);
v_r_1257_ = lean_box(v_res_1256_);
return v_r_1257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_1258_, lean_object* v_data_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4___redArg(v_data_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1261_, lean_object* v_a_1262_, lean_object* v_b_1263_, lean_object* v_x_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__5___redArg(v_a_1262_, v_b_1263_, v_x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1266_, lean_object* v_n_1267_, lean_object* v_k_1268_, lean_object* v_v_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1267_, v_k_1268_, v_v_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1271_, size_t v_depth_1272_, lean_object* v_keys_1273_, lean_object* v_vals_1274_, lean_object* v_heq_1275_, lean_object* v_i_1276_, lean_object* v_entries_1277_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_1272_, v_keys_1273_, v_vals_1274_, v_i_1276_, v_entries_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1279_, lean_object* v_depth_1280_, lean_object* v_keys_1281_, lean_object* v_vals_1282_, lean_object* v_heq_1283_, lean_object* v_i_1284_, lean_object* v_entries_1285_){
_start:
{
size_t v_depth_boxed_1286_; lean_object* v_res_1287_; 
v_depth_boxed_1286_ = lean_unbox_usize(v_depth_1280_);
lean_dec(v_depth_1280_);
v_res_1287_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1279_, v_depth_boxed_1286_, v_keys_1281_, v_vals_1282_, v_heq_1283_, v_i_1284_, v_entries_1285_);
lean_dec_ref(v_vals_1282_);
lean_dec_ref(v_keys_1281_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_1288_, lean_object* v_i_1289_, lean_object* v_source_1290_, lean_object* v_target_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7___redArg(v_i_1289_, v_source_1290_, v_target_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1293_, lean_object* v_x_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1294_, v_x_1295_, v_x_1296_, v_x_1297_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_1299_, lean_object* v_x_1300_, lean_object* v_x_1301_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_Meta_addSimpCongrTheoremEntry_spec__0_spec__1_spec__4_spec__7_spec__9___redArg(v_x_1300_, v_x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_1303_){
_start:
{
uint8_t v_stage_u2081_1304_; 
v_stage_u2081_1304_ = lean_ctor_get_uint8(v_m_1303_, sizeof(void*)*2);
if (v_stage_u2081_1304_ == 0)
{
return v_m_1303_;
}
else
{
lean_object* v_map_u2081_1305_; lean_object* v_map_u2082_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1314_; 
v_map_u2081_1305_ = lean_ctor_get(v_m_1303_, 0);
v_map_u2082_1306_ = lean_ctor_get(v_m_1303_, 1);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_m_1303_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1308_ = v_m_1303_;
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_map_u2082_1306_);
lean_inc(v_map_u2081_1305_);
lean_dec(v_m_1303_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
uint8_t v___x_1310_; lean_object* v___x_1312_; 
v___x_1310_ = 0;
if (v_isShared_1309_ == 0)
{
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_map_u2081_1305_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v_map_u2082_1306_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_ctor_set_uint8(v___x_1312_, sizeof(void*)*2, v___x_1310_);
return v___x_1312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_1315_, lean_object* v_m_1316_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = l_Lean_SMap_switch___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__spec__0___redArg(v_m_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_(lean_object* v_x_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_a_1319_);
lean_inc_ref_n(v___x_1320_, 2);
v___x_1321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
lean_ctor_set(v___x_1321_, 2, v___x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2____boxed(lean_object* v_x_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_(v_x_1322_, v_a_1323_);
lean_dec_ref(v_x_1322_);
return v_res_1324_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1335_; lean_object* v___f_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___f_1335_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___f_1336_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_1337_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__4);
v___x_1338_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_1339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_1340_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___x_1338_);
lean_ctor_set(v___x_1340_, 2, v___x_1337_);
lean_ctor_set(v___x_1340_, 3, v___f_1336_);
lean_ctor_set(v___x_1340_, 4, v___f_1335_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_);
v___x_1343_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2____boxed(lean_object* v_a_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_();
return v_res_1345_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(lean_object* v_k_1346_, lean_object* v_t_1347_){
_start:
{
if (lean_obj_tag(v_t_1347_) == 0)
{
lean_object* v_k_1348_; lean_object* v_l_1349_; lean_object* v_r_1350_; uint8_t v___x_1351_; 
v_k_1348_ = lean_ctor_get(v_t_1347_, 1);
v_l_1349_ = lean_ctor_get(v_t_1347_, 3);
v_r_1350_ = lean_ctor_get(v_t_1347_, 4);
v___x_1351_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1346_, v_k_1348_);
switch(v___x_1351_)
{
case 0:
{
v_t_1347_ = v_l_1349_;
goto _start;
}
case 1:
{
uint8_t v___x_1353_; 
v___x_1353_ = 1;
return v___x_1353_;
}
default: 
{
v_t_1347_ = v_r_1350_;
goto _start;
}
}
}
else
{
uint8_t v___x_1355_; 
v___x_1355_ = 0;
return v___x_1355_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg___boxed(lean_object* v_k_1356_, lean_object* v_t_1357_){
_start:
{
uint8_t v_res_1358_; lean_object* v_r_1359_; 
v_res_1358_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(v_k_1356_, v_t_1357_);
lean_dec(v_t_1357_);
lean_dec(v_k_1356_);
v_r_1359_ = lean_box(v_res_1358_);
return v_r_1359_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___lam__0(lean_object* v_mvarSet_1360_, lean_object* v_e_1361_){
_start:
{
uint8_t v___x_1362_; 
v___x_1362_ = l_Lean_Expr_isMVar(v_e_1361_);
if (v___x_1362_ == 0)
{
return v___x_1362_;
}
else
{
lean_object* v___x_1363_; uint8_t v___x_1364_; 
v___x_1363_ = l_Lean_Expr_mvarId_x21(v_e_1361_);
v___x_1364_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(v___x_1363_, v_mvarSet_1360_);
lean_dec(v___x_1363_);
if (v___x_1364_ == 0)
{
return v___x_1362_;
}
else
{
uint8_t v___x_1365_; 
v___x_1365_ = 0;
return v___x_1365_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___lam__0___boxed(lean_object* v_mvarSet_1366_, lean_object* v_e_1367_){
_start:
{
uint8_t v_res_1368_; lean_object* v_r_1369_; 
v_res_1368_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___lam__0(v_mvarSet_1366_, v_e_1367_);
lean_dec_ref(v_e_1367_);
lean_dec(v_mvarSet_1366_);
v_r_1369_ = lean_box(v_res_1368_);
return v_r_1369_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt(lean_object* v_t_1370_, lean_object* v_mvarSet_1371_){
_start:
{
lean_object* v___f_1372_; lean_object* v___x_1373_; 
v___f_1372_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1372_, 0, v_mvarSet_1371_);
v___x_1373_ = lean_find_expr(v___f_1372_, v_t_1370_);
lean_dec_ref(v___f_1372_);
if (lean_obj_tag(v___x_1373_) == 0)
{
uint8_t v___x_1374_; 
v___x_1374_ = 1;
return v___x_1374_;
}
else
{
uint8_t v___x_1375_; 
lean_dec_ref_known(v___x_1373_, 1);
v___x_1375_ = 0;
return v___x_1375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt___boxed(lean_object* v_t_1376_, lean_object* v_mvarSet_1377_){
_start:
{
uint8_t v_res_1378_; lean_object* v_r_1379_; 
v_res_1378_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt(v_t_1376_, v_mvarSet_1377_);
lean_dec_ref(v_t_1376_);
v_r_1379_ = lean_box(v_res_1378_);
return v_r_1379_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0(lean_object* v_00_u03b2_1380_, lean_object* v_k_1381_, lean_object* v_t_1382_){
_start:
{
uint8_t v___x_1383_; 
v___x_1383_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(v_k_1381_, v_t_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___boxed(lean_object* v_00_u03b2_1384_, lean_object* v_k_1385_, lean_object* v_t_1386_){
_start:
{
uint8_t v_res_1387_; lean_object* v_r_1388_; 
v_res_1387_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0(v_00_u03b2_1384_, v_k_1385_, v_t_1386_);
lean_dec(v_t_1386_);
lean_dec(v_k_1385_);
v_r_1388_ = lean_box(v_res_1387_);
return v_r_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___lam__0(lean_object* v_k_1389_, lean_object* v_b_1390_, lean_object* v_c_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v___x_1397_; 
lean_inc(v___y_1395_);
lean_inc_ref(v___y_1394_);
lean_inc(v___y_1393_);
lean_inc_ref(v___y_1392_);
v___x_1397_ = lean_apply_7(v_k_1389_, v_b_1390_, v_c_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, lean_box(0));
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___lam__0___boxed(lean_object* v_k_1398_, lean_object* v_b_1399_, lean_object* v_c_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___lam__0(v_k_1398_, v_b_1399_, v_c_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg(lean_object* v_type_1407_, lean_object* v_k_1408_, uint8_t v_cleanupAnnotations_1409_, uint8_t v_whnfType_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___f_1416_; lean_object* v___x_1417_; 
v___f_1416_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1416_, 0, v_k_1408_);
v___x_1417_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1407_, v___f_1416_, v_cleanupAnnotations_1409_, v_whnfType_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1425_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1420_ = v___x_1417_;
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1417_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1421_ == 0)
{
v___x_1423_ = v___x_1420_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_a_1418_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
v_a_1426_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1417_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1417_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg___boxed(lean_object* v_type_1434_, lean_object* v_k_1435_, lean_object* v_cleanupAnnotations_1436_, lean_object* v_whnfType_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1443_; uint8_t v_whnfType_boxed_1444_; lean_object* v_res_1445_; 
v_cleanupAnnotations_boxed_1443_ = lean_unbox(v_cleanupAnnotations_1436_);
v_whnfType_boxed_1444_ = lean_unbox(v_whnfType_1437_);
v_res_1445_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg(v_type_1434_, v_k_1435_, v_cleanupAnnotations_boxed_1443_, v_whnfType_boxed_1444_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6(lean_object* v_00_u03b1_1446_, lean_object* v_type_1447_, lean_object* v_k_1448_, uint8_t v_cleanupAnnotations_1449_, uint8_t v_whnfType_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg(v_type_1447_, v_k_1448_, v_cleanupAnnotations_1449_, v_whnfType_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___boxed(lean_object* v_00_u03b1_1457_, lean_object* v_type_1458_, lean_object* v_k_1459_, lean_object* v_cleanupAnnotations_1460_, lean_object* v_whnfType_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1467_; uint8_t v_whnfType_boxed_1468_; lean_object* v_res_1469_; 
v_cleanupAnnotations_boxed_1467_ = lean_unbox(v_cleanupAnnotations_1460_);
v_whnfType_boxed_1468_ = lean_unbox(v_whnfType_1461_);
v_res_1469_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6(v_00_u03b1_1457_, v_type_1458_, v_k_1459_, v_cleanupAnnotations_boxed_1467_, v_whnfType_boxed_1468_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3_spec__5(lean_object* v_msgData_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; lean_object* v_env_1477_; lean_object* v___x_1478_; lean_object* v_toCold_1479_; lean_object* v_mctx_1480_; lean_object* v_lctx_1481_; lean_object* v_options_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1476_ = lean_st_ref_get(v___y_1474_);
v_env_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc_ref(v_env_1477_);
lean_dec(v___x_1476_);
v___x_1478_ = lean_st_ref_get(v___y_1472_);
v_toCold_1479_ = lean_ctor_get(v___y_1473_, 0);
v_mctx_1480_ = lean_ctor_get(v___x_1478_, 0);
lean_inc_ref(v_mctx_1480_);
lean_dec(v___x_1478_);
v_lctx_1481_ = lean_ctor_get(v___y_1471_, 2);
v_options_1482_ = lean_ctor_get(v_toCold_1479_, 2);
lean_inc_ref(v_options_1482_);
lean_inc_ref(v_lctx_1481_);
v___x_1483_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1483_, 0, v_env_1477_);
lean_ctor_set(v___x_1483_, 1, v_mctx_1480_);
lean_ctor_set(v___x_1483_, 2, v_lctx_1481_);
lean_ctor_set(v___x_1483_, 3, v_options_1482_);
v___x_1484_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
lean_ctor_set(v___x_1484_, 1, v_msgData_1470_);
v___x_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3_spec__5___boxed(lean_object* v_msgData_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3_spec__5(v_msgData_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(lean_object* v_msg_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v_ref_1499_; lean_object* v___x_1500_; lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1509_; 
v_ref_1499_ = lean_ctor_get(v___y_1496_, 2);
v___x_1500_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3_spec__5(v_msg_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1503_ = v___x_1500_;
v_isShared_1504_ = v_isSharedCheck_1509_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1500_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1509_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1505_; lean_object* v___x_1507_; 
lean_inc(v_ref_1499_);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v_ref_1499_);
lean_ctor_set(v___x_1505_, 1, v_a_1501_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set_tag(v___x_1503_, 1);
lean_ctor_set(v___x_1503_, 0, v___x_1505_);
v___x_1507_ = v___x_1503_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg___boxed(lean_object* v_msg_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v_msg_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
return v_res_1516_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__0));
v___x_1519_ = l_Lean_stringToMessageData(v___x_1518_);
return v___x_1519_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__2));
v___x_1522_ = l_Lean_stringToMessageData(v___x_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4(lean_object* v___x_1523_, lean_object* v_snd_1524_, lean_object* v_as_1525_, size_t v_sz_1526_, size_t v_i_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_a_1535_; uint8_t v___x_1539_; 
v___x_1539_ = lean_usize_dec_lt(v_i_1527_, v_sz_1526_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; 
lean_dec_ref(v_snd_1524_);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_b_1528_);
return v___x_1540_;
}
else
{
lean_object* v___x_1541_; lean_object* v_a_1542_; uint8_t v___x_1543_; 
v___x_1541_ = lean_box(0);
v_a_1542_ = lean_array_uget_borrowed(v_as_1525_, v_i_1527_);
v___x_1543_ = l_Lean_Expr_isFVar(v_a_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1544_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1);
v___x_1545_ = lean_unsigned_to_nat(1u);
v___x_1546_ = lean_nat_add(v___x_1523_, v___x_1545_);
v___x_1547_ = l_Nat_reprFast(v___x_1546_);
v___x_1548_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
v___x_1549_ = l_Lean_MessageData_ofFormat(v___x_1548_);
v___x_1550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1544_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__3);
v___x_1552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
lean_inc_ref(v_snd_1524_);
v___x_1553_ = l_Lean_indentExpr(v_snd_1524_);
v___x_1554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1552_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_1554_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_dec_ref_known(v___x_1555_, 1);
v_a_1535_ = v___x_1541_;
goto v___jp_1534_;
}
else
{
lean_dec_ref(v_snd_1524_);
return v___x_1555_;
}
}
else
{
v_a_1535_ = v___x_1541_;
goto v___jp_1534_;
}
}
v___jp_1534_:
{
size_t v___x_1536_; size_t v___x_1537_; 
v___x_1536_ = ((size_t)1ULL);
v___x_1537_ = lean_usize_add(v_i_1527_, v___x_1536_);
v_i_1527_ = v___x_1537_;
v_b_1528_ = v_a_1535_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___boxed(lean_object* v___x_1556_, lean_object* v_snd_1557_, lean_object* v_as_1558_, lean_object* v_sz_1559_, lean_object* v_i_1560_, lean_object* v_b_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
size_t v_sz_boxed_1567_; size_t v_i_boxed_1568_; lean_object* v_res_1569_; 
v_sz_boxed_1567_ = lean_unbox_usize(v_sz_1559_);
lean_dec(v_sz_1559_);
v_i_boxed_1568_ = lean_unbox_usize(v_i_1560_);
lean_dec(v_i_1560_);
v_res_1569_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4(v___x_1556_, v_snd_1557_, v_as_1558_, v_sz_boxed_1567_, v_i_boxed_1568_, v_b_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v_as_1558_);
lean_dec(v___x_1556_);
return v_res_1569_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__1(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__0));
v___x_1572_ = l_Lean_stringToMessageData(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__2));
v___x_1575_ = l_Lean_stringToMessageData(v___x_1574_);
return v___x_1575_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__5(void){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__4));
v___x_1578_ = l_Lean_stringToMessageData(v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5(lean_object* v___x_1579_, lean_object* v___x_1580_, lean_object* v_as_1581_, size_t v_sz_1582_, size_t v_i_1583_, lean_object* v_b_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
uint8_t v___x_1596_; 
v___x_1596_ = lean_usize_dec_lt(v_i_1583_, v_sz_1582_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; 
lean_dec(v___x_1579_);
v___x_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1597_, 0, v_b_1584_);
return v___x_1597_;
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1599_; 
v_a_1598_ = lean_array_uget_borrowed(v_as_1581_, v_i_1583_);
lean_inc(v___y_1588_);
lean_inc_ref(v___y_1587_);
lean_inc(v___y_1586_);
lean_inc_ref(v___y_1585_);
lean_inc(v_a_1598_);
v___x_1599_ = lean_infer_type(v_a_1598_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; uint8_t v___x_1601_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
lean_inc(v___x_1579_);
v___x_1601_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt(v_a_1600_, v___x_1579_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1602_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__1);
v___x_1603_ = lean_unsigned_to_nat(1u);
v___x_1604_ = lean_nat_add(v_b_1584_, v___x_1603_);
v___x_1605_ = l_Nat_reprFast(v___x_1604_);
v___x_1606_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
v___x_1607_ = l_Lean_MessageData_ofFormat(v___x_1606_);
v___x_1608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1602_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__3);
v___x_1610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1608_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
v___x_1611_ = lean_nat_add(v___x_1580_, v___x_1603_);
v___x_1612_ = l_Nat_reprFast(v___x_1611_);
v___x_1613_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
v___x_1614_ = l_Lean_MessageData_ofFormat(v___x_1613_);
v___x_1615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1610_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
v___x_1616_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___closed__5);
v___x_1617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = l_Lean_indentExpr(v_a_1600_);
v___x_1619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_1619_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_dec_ref_known(v___x_1620_, 1);
goto v___jp_1590_;
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
lean_dec(v_b_1584_);
lean_dec(v___x_1579_);
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1623_ = v___x_1620_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1620_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1621_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
}
else
{
lean_dec(v_a_1600_);
goto v___jp_1590_;
}
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec(v_b_1584_);
lean_dec(v___x_1579_);
v_a_1629_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1599_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1599_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
v___jp_1590_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; size_t v___x_1593_; size_t v___x_1594_; 
v___x_1591_ = lean_unsigned_to_nat(1u);
v___x_1592_ = lean_nat_add(v_b_1584_, v___x_1591_);
lean_dec(v_b_1584_);
v___x_1593_ = ((size_t)1ULL);
v___x_1594_ = lean_usize_add(v_i_1583_, v___x_1593_);
v_i_1583_ = v___x_1594_;
v_b_1584_ = v___x_1592_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5___boxed(lean_object* v___x_1637_, lean_object* v___x_1638_, lean_object* v_as_1639_, lean_object* v_sz_1640_, lean_object* v_i_1641_, lean_object* v_b_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
size_t v_sz_boxed_1648_; size_t v_i_boxed_1649_; lean_object* v_res_1650_; 
v_sz_boxed_1648_ = lean_unbox_usize(v_sz_1640_);
lean_dec(v_sz_1640_);
v_i_boxed_1649_ = lean_unbox_usize(v_i_1641_);
lean_dec(v_i_1641_);
v_res_1650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5(v___x_1637_, v___x_1638_, v_as_1639_, v_sz_boxed_1648_, v_i_boxed_1649_, v_b_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec_ref(v_as_1639_);
lean_dec(v___x_1638_);
return v_res_1650_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_box(0);
v___x_1652_ = l_unsafeCast___redArg(v___x_1651_);
return v___x_1652_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1653_; lean_object* v_dummy_1654_; 
v___x_1653_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__0);
v_dummy_1654_ = l_Lean_Expr_sort___override(v___x_1653_);
return v_dummy_1654_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__2));
v___x_1657_ = l_Lean_stringToMessageData(v___x_1656_);
return v___x_1657_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__4));
v___x_1660_ = l_Lean_stringToMessageData(v___x_1659_);
return v___x_1660_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__6));
v___x_1663_ = l_Lean_stringToMessageData(v___x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0(lean_object* v_fst_1670_, lean_object* v_fst_1671_, lean_object* v___x_1672_, lean_object* v_ys_1673_, lean_object* v_xType_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1744_; lean_object* v_fst_1768_; lean_object* v_snd_1769_; lean_object* v___x_1802_; lean_object* v___x_1803_; uint8_t v___x_1804_; 
v___x_1802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__9));
v___x_1803_ = lean_unsigned_to_nat(3u);
v___x_1804_ = l_Lean_Expr_isAppOfArity(v_xType_1674_, v___x_1802_, v___x_1803_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1805_; lean_object* v___x_1806_; uint8_t v___x_1807_; 
v___x_1805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__11));
v___x_1806_ = lean_unsigned_to_nat(2u);
v___x_1807_ = l_Lean_Expr_isAppOfArity(v_xType_1674_, v___x_1805_, v___x_1806_);
if (v___x_1807_ == 0)
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_dec(v___x_1672_);
lean_dec(v_fst_1671_);
v___x_1808_ = lean_box(0);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
return v___x_1809_;
}
else
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1810_ = l_Lean_Expr_appFn_x21(v_xType_1674_);
v___x_1811_ = l_Lean_Expr_appArg_x21(v___x_1810_);
lean_dec_ref(v___x_1810_);
v___x_1812_ = l_Lean_Expr_appArg_x21(v_xType_1674_);
v_fst_1768_ = v___x_1811_;
v_snd_1769_ = v___x_1812_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = l_Lean_Expr_appFn_x21(v_xType_1674_);
v___x_1814_ = l_Lean_Expr_appArg_x21(v___x_1813_);
lean_dec_ref(v___x_1813_);
v___x_1815_ = l_Lean_Expr_appArg_x21(v_xType_1674_);
v_fst_1768_ = v___x_1814_;
v_snd_1769_ = v___x_1815_;
goto v___jp_1767_;
}
v___jp_1680_:
{
lean_object* v_dummy_1687_; lean_object* v_nargs_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; size_t v_sz_1694_; size_t v___x_1695_; lean_object* v___x_1696_; 
v_dummy_1687_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1);
v_nargs_1688_ = l_Lean_Expr_getAppNumArgs(v___y_1681_);
lean_inc(v_nargs_1688_);
v___x_1689_ = lean_mk_array(v_nargs_1688_, v_dummy_1687_);
v___x_1690_ = lean_unsigned_to_nat(1u);
v___x_1691_ = lean_nat_sub(v_nargs_1688_, v___x_1690_);
lean_dec(v_nargs_1688_);
lean_inc_ref(v___y_1681_);
v___x_1692_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_1681_, v___x_1689_, v___x_1691_);
v___x_1693_ = lean_box(0);
v_sz_1694_ = lean_array_size(v___x_1692_);
v___x_1695_ = ((size_t)0ULL);
v___x_1696_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4(v_fst_1670_, v___y_1681_, v___x_1692_, v_sz_1694_, v___x_1695_, v___x_1693_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
lean_dec_ref(v___x_1692_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1704_; 
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
lean_object* v_unused_1705_; 
v_unused_1705_ = lean_ctor_get(v___x_1696_, 0);
lean_dec(v_unused_1705_);
v___x_1698_ = v___x_1696_;
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
else
{
lean_dec(v___x_1696_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___y_1682_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 0, v___x_1700_);
v___x_1702_ = v___x_1698_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec_ref(v___y_1682_);
v_a_1706_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1696_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1696_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
v___jp_1714_:
{
lean_object* v___x_1721_; uint8_t v___x_1722_; 
v___x_1721_ = l_Lean_Expr_mvarId_x21(v___y_1716_);
v___x_1722_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(v___x_1721_, v_fst_1671_);
lean_dec(v_fst_1671_);
lean_dec(v___x_1721_);
if (v___x_1722_ == 0)
{
v___y_1681_ = v___y_1715_;
v___y_1682_ = v___y_1716_;
v___y_1683_ = v___y_1717_;
v___y_1684_ = v___y_1718_;
v___y_1685_ = v___y_1719_;
v___y_1686_ = v___y_1720_;
goto v___jp_1680_;
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1723_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1);
v___x_1724_ = lean_unsigned_to_nat(1u);
v___x_1725_ = lean_nat_add(v_fst_1670_, v___x_1724_);
v___x_1726_ = l_Nat_reprFast(v___x_1725_);
v___x_1727_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
v___x_1728_ = l_Lean_MessageData_ofFormat(v___x_1727_);
v___x_1729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1723_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__3);
v___x_1731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1729_);
lean_ctor_set(v___x_1731_, 1, v___x_1730_);
lean_inc_ref(v___y_1715_);
v___x_1732_ = l_Lean_indentExpr(v___y_1715_);
v___x_1733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1731_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_1733_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_dec_ref_known(v___x_1734_, 1);
v___y_1681_ = v___y_1715_;
v___y_1682_ = v___y_1716_;
v___y_1683_ = v___y_1717_;
v___y_1684_ = v___y_1718_;
v___y_1685_ = v___y_1719_;
v___y_1686_ = v___y_1720_;
goto v___jp_1680_;
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
lean_dec_ref(v___y_1716_);
lean_dec_ref(v___y_1715_);
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1737_ = v___x_1734_;
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1734_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
}
v___jp_1743_:
{
lean_object* v___x_1745_; uint8_t v___x_1746_; 
v___x_1745_ = l_Lean_Expr_getAppFn(v___y_1744_);
v___x_1746_ = l_Lean_Expr_isMVar(v___x_1745_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1747_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1);
v___x_1748_ = lean_unsigned_to_nat(1u);
v___x_1749_ = lean_nat_add(v_fst_1670_, v___x_1748_);
v___x_1750_ = l_Nat_reprFast(v___x_1749_);
v___x_1751_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
v___x_1752_ = l_Lean_MessageData_ofFormat(v___x_1751_);
v___x_1753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1747_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__5);
v___x_1755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1753_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
lean_inc_ref(v___y_1744_);
v___x_1756_ = l_Lean_indentExpr(v___y_1744_);
v___x_1757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1755_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_1757_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_dec_ref_known(v___x_1758_, 1);
v___y_1715_ = v___y_1744_;
v___y_1716_ = v___x_1745_;
v___y_1717_ = v___y_1675_;
v___y_1718_ = v___y_1676_;
v___y_1719_ = v___y_1677_;
v___y_1720_ = v___y_1678_;
goto v___jp_1714_;
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec_ref(v___x_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v_fst_1671_);
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1758_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1758_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
else
{
v___y_1715_ = v___y_1744_;
v___y_1716_ = v___x_1745_;
v___y_1717_ = v___y_1675_;
v___y_1718_ = v___y_1676_;
v___y_1719_ = v___y_1677_;
v___y_1720_ = v___y_1678_;
goto v___jp_1714_;
}
}
v___jp_1767_:
{
size_t v_sz_1770_; size_t v___x_1771_; lean_object* v___x_1772_; 
v_sz_1770_ = lean_array_size(v_ys_1673_);
v___x_1771_ = ((size_t)0ULL);
lean_inc(v_fst_1671_);
v___x_1772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__5(v_fst_1671_, v_fst_1670_, v_ys_1673_, v_sz_1770_, v___x_1771_, v___x_1672_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1772_) == 0)
{
uint8_t v___x_1773_; 
lean_dec_ref_known(v___x_1772_, 1);
lean_inc(v_fst_1671_);
v___x_1773_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt(v_fst_1768_, v_fst_1671_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1774_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__4___closed__1);
v___x_1775_ = lean_unsigned_to_nat(1u);
v___x_1776_ = lean_nat_add(v_fst_1670_, v___x_1775_);
v___x_1777_ = l_Nat_reprFast(v___x_1776_);
v___x_1778_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
v___x_1779_ = l_Lean_MessageData_ofFormat(v___x_1778_);
v___x_1780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1774_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__7);
v___x_1782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1780_);
lean_ctor_set(v___x_1782_, 1, v___x_1781_);
v___x_1783_ = l_Lean_indentExpr(v_fst_1768_);
v___x_1784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1782_);
lean_ctor_set(v___x_1784_, 1, v___x_1783_);
v___x_1785_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_1784_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_dec_ref_known(v___x_1785_, 1);
v___y_1744_ = v_snd_1769_;
goto v___jp_1743_;
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
lean_dec_ref(v_snd_1769_);
lean_dec(v_fst_1671_);
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1785_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1785_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
lean_dec_ref(v_fst_1768_);
v___y_1744_ = v_snd_1769_;
goto v___jp_1743_;
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v_snd_1769_);
lean_dec_ref(v_fst_1768_);
lean_dec(v_fst_1671_);
v_a_1794_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1772_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1772_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___boxed(lean_object* v_fst_1816_, lean_object* v_fst_1817_, lean_object* v___x_1818_, lean_object* v_ys_1819_, lean_object* v_xType_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0(v_fst_1816_, v_fst_1817_, v___x_1818_, v_ys_1819_, v_xType_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec_ref(v_xType_1820_);
lean_dec_ref(v_ys_1819_);
lean_dec(v_fst_1816_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7(lean_object* v_as_1827_, size_t v_sz_1828_, size_t v_i_1829_, lean_object* v_b_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
uint8_t v___x_1836_; 
v___x_1836_ = lean_usize_dec_lt(v_i_1829_, v_sz_1828_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v_b_1830_);
return v___x_1837_;
}
else
{
lean_object* v_snd_1838_; lean_object* v_snd_1839_; lean_object* v_snd_1840_; lean_object* v_fst_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1936_; 
v_snd_1838_ = lean_ctor_get(v_b_1830_, 1);
lean_inc(v_snd_1838_);
v_snd_1839_ = lean_ctor_get(v_snd_1838_, 1);
lean_inc(v_snd_1839_);
v_snd_1840_ = lean_ctor_get(v_snd_1839_, 1);
lean_inc(v_snd_1840_);
v_fst_1841_ = lean_ctor_get(v_b_1830_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_b_1830_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; 
v_unused_1937_ = lean_ctor_get(v_b_1830_, 1);
lean_dec(v_unused_1937_);
v___x_1843_ = v_b_1830_;
v_isShared_1844_ = v_isSharedCheck_1936_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_fst_1841_);
lean_dec(v_b_1830_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1936_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v_fst_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1934_; 
v_fst_1845_ = lean_ctor_get(v_snd_1838_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_snd_1838_);
if (v_isSharedCheck_1934_ == 0)
{
lean_object* v_unused_1935_; 
v_unused_1935_ = lean_ctor_get(v_snd_1838_, 1);
lean_dec(v_unused_1935_);
v___x_1847_ = v_snd_1838_;
v_isShared_1848_ = v_isSharedCheck_1934_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_fst_1845_);
lean_dec(v_snd_1838_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1934_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v_fst_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1932_; 
v_fst_1849_ = lean_ctor_get(v_snd_1839_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_snd_1839_);
if (v_isSharedCheck_1932_ == 0)
{
lean_object* v_unused_1933_; 
v_unused_1933_ = lean_ctor_get(v_snd_1839_, 1);
lean_dec(v_unused_1933_);
v___x_1851_ = v_snd_1839_;
v_isShared_1852_ = v_isSharedCheck_1932_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_fst_1849_);
lean_dec(v_snd_1839_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1932_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v_array_1853_; lean_object* v_start_1854_; lean_object* v_stop_1855_; uint8_t v___x_1856_; 
v_array_1853_ = lean_ctor_get(v_snd_1840_, 0);
v_start_1854_ = lean_ctor_get(v_snd_1840_, 1);
v_stop_1855_ = lean_ctor_get(v_snd_1840_, 2);
v___x_1856_ = lean_nat_dec_lt(v_start_1854_, v_stop_1855_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1858_; 
if (v_isShared_1852_ == 0)
{
v___x_1858_ = v___x_1851_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_fst_1849_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_snd_1840_);
v___x_1858_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1860_; 
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 1, v___x_1858_);
v___x_1860_ = v___x_1847_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_fst_1845_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1862_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 1, v___x_1860_);
v___x_1862_ = v___x_1843_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_fst_1841_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1862_);
return v___x_1863_;
}
}
}
}
else
{
lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1928_; 
lean_inc(v_stop_1855_);
lean_inc(v_start_1854_);
lean_inc_ref(v_array_1853_);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_snd_1840_);
if (v_isSharedCheck_1928_ == 0)
{
lean_object* v_unused_1929_; lean_object* v_unused_1930_; lean_object* v_unused_1931_; 
v_unused_1929_ = lean_ctor_get(v_snd_1840_, 2);
lean_dec(v_unused_1929_);
v_unused_1930_ = lean_ctor_get(v_snd_1840_, 1);
lean_dec(v_unused_1930_);
v_unused_1931_ = lean_ctor_get(v_snd_1840_, 0);
lean_dec(v_unused_1931_);
v___x_1868_ = v_snd_1840_;
v_isShared_1869_ = v_isSharedCheck_1928_;
goto v_resetjp_1867_;
}
else
{
lean_dec(v_snd_1840_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1928_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1870_; lean_object* v_a_1871_; lean_object* v___f_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1877_; 
v___x_1870_ = lean_unsigned_to_nat(0u);
v_a_1871_ = lean_array_uget_borrowed(v_as_1827_, v_i_1829_);
lean_inc(v_fst_1841_);
lean_inc(v_fst_1845_);
v___f_1872_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1872_, 0, v_fst_1845_);
lean_closure_set(v___f_1872_, 1, v_fst_1841_);
lean_closure_set(v___f_1872_, 2, v___x_1870_);
v___x_1873_ = lean_array_fget(v_array_1853_, v_start_1854_);
v___x_1874_ = lean_unsigned_to_nat(1u);
v___x_1875_ = lean_nat_add(v_start_1854_, v___x_1874_);
lean_dec(v_start_1854_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 1, v___x_1875_);
v___x_1877_ = v___x_1868_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_array_1853_);
lean_ctor_set(v_reuseFailAlloc_1927_, 1, v___x_1875_);
lean_ctor_set(v_reuseFailAlloc_1927_, 2, v_stop_1855_);
v___x_1877_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v_foundMVars_1879_; lean_object* v_hypothesesPos_1880_; uint8_t v___y_1895_; uint8_t v___x_1923_; uint8_t v___x_1924_; 
v___x_1923_ = lean_unbox(v___x_1873_);
lean_dec(v___x_1873_);
v___x_1924_ = l_Lean_BinderInfo_isExplicit(v___x_1923_);
if (v___x_1924_ == 0)
{
v___y_1895_ = v___x_1924_;
goto v___jp_1894_;
}
else
{
lean_object* v___x_1925_; uint8_t v___x_1926_; 
v___x_1925_ = l_Lean_Expr_mvarId_x21(v_a_1871_);
v___x_1926_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_mkSimpCongrTheorem_onlyMVarsAt_spec__0___redArg(v___x_1925_, v_fst_1841_);
lean_dec(v___x_1925_);
if (v___x_1926_ == 0)
{
v___y_1895_ = v___x_1924_;
goto v___jp_1894_;
}
else
{
lean_dec_ref(v___f_1872_);
v_foundMVars_1879_ = v_fst_1841_;
v_hypothesesPos_1880_ = v_fst_1849_;
goto v___jp_1878_;
}
}
v___jp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1881_ = lean_nat_add(v_fst_1845_, v___x_1874_);
lean_dec(v_fst_1845_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 1, v___x_1877_);
lean_ctor_set(v___x_1851_, 0, v_hypothesesPos_1880_);
v___x_1883_ = v___x_1851_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_hypothesesPos_1880_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v___x_1877_);
v___x_1883_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
lean_object* v___x_1885_; 
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 1, v___x_1883_);
lean_ctor_set(v___x_1847_, 0, v___x_1881_);
v___x_1885_ = v___x_1847_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1892_, 1, v___x_1883_);
v___x_1885_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
lean_object* v___x_1887_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 1, v___x_1885_);
lean_ctor_set(v___x_1843_, 0, v_foundMVars_1879_);
v___x_1887_ = v___x_1843_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_foundMVars_1879_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
size_t v___x_1888_; size_t v___x_1889_; 
v___x_1888_ = ((size_t)1ULL);
v___x_1889_ = lean_usize_add(v_i_1829_, v___x_1888_);
v_i_1829_ = v___x_1889_;
v_b_1830_ = v___x_1887_;
goto _start;
}
}
}
}
v___jp_1894_:
{
if (v___y_1895_ == 0)
{
lean_dec_ref(v___f_1872_);
v_foundMVars_1879_ = v_fst_1841_;
v_hypothesesPos_1880_ = v_fst_1849_;
goto v___jp_1878_;
}
else
{
lean_object* v___x_1896_; 
lean_inc(v___y_1834_);
lean_inc_ref(v___y_1833_);
lean_inc(v___y_1832_);
lean_inc_ref(v___y_1831_);
lean_inc(v_a_1871_);
v___x_1896_ = lean_infer_type(v_a_1871_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; uint8_t v___x_1898_; lean_object* v___x_1899_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = 0;
v___x_1899_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkSimpCongrTheorem_spec__6___redArg(v_a_1897_, v___f_1872_, v___x_1898_, v___x_1898_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_a_1900_);
lean_dec_ref_known(v___x_1899_, 1);
if (lean_obj_tag(v_a_1900_) == 0)
{
v_foundMVars_1879_ = v_fst_1841_;
v_hypothesesPos_1880_ = v_fst_1849_;
goto v___jp_1878_;
}
else
{
lean_object* v_val_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v_val_1901_ = lean_ctor_get(v_a_1900_, 0);
lean_inc(v_val_1901_);
lean_dec_ref_known(v_a_1900_, 1);
v___x_1902_ = l_Lean_Expr_mvarId_x21(v_a_1871_);
v___x_1903_ = l_Lean_MVarIdSet_insert(v_fst_1841_, v___x_1902_);
v___x_1904_ = l_Lean_Expr_mvarId_x21(v_val_1901_);
lean_dec(v_val_1901_);
v___x_1905_ = l_Lean_MVarIdSet_insert(v___x_1903_, v___x_1904_);
lean_inc(v_fst_1845_);
v___x_1906_ = lean_array_push(v_fst_1849_, v_fst_1845_);
v_foundMVars_1879_ = v___x_1905_;
v_hypothesesPos_1880_ = v___x_1906_;
goto v___jp_1878_;
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec_ref(v___x_1877_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_del_object(v___x_1847_);
lean_dec(v_fst_1845_);
lean_del_object(v___x_1843_);
lean_dec(v_fst_1841_);
v_a_1907_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1899_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1899_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_dec_ref(v___x_1877_);
lean_dec_ref(v___f_1872_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_del_object(v___x_1847_);
lean_dec(v_fst_1845_);
lean_del_object(v___x_1843_);
lean_dec(v_fst_1841_);
v_a_1915_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1896_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1896_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___boxed(lean_object* v_as_1938_, lean_object* v_sz_1939_, lean_object* v_i_1940_, lean_object* v_b_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
size_t v_sz_boxed_1947_; size_t v_i_boxed_1948_; lean_object* v_res_1949_; 
v_sz_boxed_1947_ = lean_unbox_usize(v_sz_1939_);
lean_dec(v_sz_1939_);
v_i_boxed_1948_ = lean_unbox_usize(v_i_1940_);
lean_dec(v_i_1940_);
v_res_1949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7(v_as_1938_, v_sz_boxed_1947_, v_i_boxed_1948_, v_b_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec_ref(v_as_1938_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg(lean_object* v_as_1950_, size_t v_sz_1951_, size_t v_i_1952_, lean_object* v_b_1953_){
_start:
{
uint8_t v___x_1955_; 
v___x_1955_ = lean_usize_dec_lt(v_i_1952_, v_sz_1951_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v_b_1953_);
return v___x_1956_;
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1958_; size_t v___x_1959_; size_t v___x_1960_; 
v_a_1957_ = lean_array_uget_borrowed(v_as_1950_, v_i_1952_);
lean_inc(v_a_1957_);
v___x_1958_ = l_Lean_MVarIdSet_insert(v_b_1953_, v_a_1957_);
v___x_1959_ = ((size_t)1ULL);
v___x_1960_ = lean_usize_add(v_i_1952_, v___x_1959_);
v_i_1952_ = v___x_1960_;
v_b_1953_ = v___x_1958_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg___boxed(lean_object* v_as_1962_, lean_object* v_sz_1963_, lean_object* v_i_1964_, lean_object* v_b_1965_, lean_object* v___y_1966_){
_start:
{
size_t v_sz_boxed_1967_; size_t v_i_boxed_1968_; lean_object* v_res_1969_; 
v_sz_boxed_1967_ = lean_unbox_usize(v_sz_1963_);
lean_dec(v_sz_1963_);
v_i_boxed_1968_ = lean_unbox_usize(v_i_1964_);
lean_dec(v_i_1964_);
v_res_1969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg(v_as_1962_, v_sz_boxed_1967_, v_i_boxed_1968_, v_b_1965_);
lean_dec_ref(v_as_1962_);
return v_res_1969_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1970_ = lean_box(0);
v___x_1971_ = lean_unsigned_to_nat(16u);
v___x_1972_ = lean_mk_array(v___x_1971_, v___x_1970_);
return v___x_1972_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__0);
v___x_1974_ = lean_unsigned_to_nat(0u);
v___x_1975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
lean_ctor_set(v___x_1975_, 1, v___x_1973_);
return v___x_1975_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__2));
v___x_1979_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__1);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
lean_ctor_set(v___x_1980_, 1, v___x_1978_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2(lean_object* v_as_1981_, size_t v_sz_1982_, size_t v_i_1983_, lean_object* v_b_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_){
_start:
{
uint8_t v___x_1990_; 
v___x_1990_ = lean_usize_dec_lt(v_i_1983_, v_sz_1982_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; 
v___x_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1991_, 0, v_b_1984_);
return v___x_1991_;
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v_result_1995_; size_t v_sz_1996_; size_t v___x_1997_; lean_object* v___x_1998_; 
v_a_1992_ = lean_array_uget_borrowed(v_as_1981_, v_i_1983_);
v___x_1993_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___closed__3);
lean_inc(v_a_1992_);
v___x_1994_ = l_Lean_Expr_collectMVars(v___x_1993_, v_a_1992_);
v_result_1995_ = lean_ctor_get(v___x_1994_, 1);
lean_inc_ref(v_result_1995_);
lean_dec_ref(v___x_1994_);
v_sz_1996_ = lean_array_size(v_result_1995_);
v___x_1997_ = ((size_t)0ULL);
v___x_1998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg(v_result_1995_, v_sz_1996_, v___x_1997_, v_b_1984_);
lean_dec_ref(v_result_1995_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; size_t v___x_2000_; size_t v___x_2001_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = ((size_t)1ULL);
v___x_2001_ = lean_usize_add(v_i_1983_, v___x_2000_);
v_i_1983_ = v___x_2001_;
v_b_1984_ = v_a_1999_;
goto _start;
}
else
{
return v___x_1998_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2___boxed(lean_object* v_as_2003_, lean_object* v_sz_2004_, lean_object* v_i_2005_, lean_object* v_b_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
size_t v_sz_boxed_2012_; size_t v_i_boxed_2013_; lean_object* v_res_2014_; 
v_sz_boxed_2012_ = lean_unbox_usize(v_sz_2004_);
lean_dec(v_sz_2004_);
v_i_boxed_2013_ = lean_unbox_usize(v_i_2005_);
lean_dec(v_i_2005_);
v_res_2014_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2(v_as_2003_, v_sz_boxed_2012_, v_i_boxed_2013_, v_b_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec_ref(v_as_2003_);
return v_res_2014_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__2(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__1));
v___x_2019_ = l_Lean_stringToMessageData(v___x_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8(lean_object* v_lhsArgs_2020_, lean_object* v_fst_2021_, lean_object* v_fst_2022_, lean_object* v_lhsFn_2023_, lean_object* v_declName_2024_, lean_object* v_prio_2025_, lean_object* v_snd_2026_, lean_object* v_x_2027_, lean_object* v_x_2028_, lean_object* v_x_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
if (lean_obj_tag(v_x_2027_) == 5)
{
lean_object* v_fn_2035_; lean_object* v_arg_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_fn_2035_ = lean_ctor_get(v_x_2027_, 0);
lean_inc_ref(v_fn_2035_);
v_arg_2036_ = lean_ctor_get(v_x_2027_, 1);
lean_inc_ref(v_arg_2036_);
lean_dec_ref_known(v_x_2027_, 2);
v___x_2037_ = lean_array_set(v_x_2028_, v_x_2029_, v_arg_2036_);
v___x_2038_ = lean_unsigned_to_nat(1u);
v___x_2039_ = lean_nat_sub(v_x_2029_, v___x_2038_);
lean_dec(v_x_2029_);
v_x_2027_ = v_fn_2035_;
v_x_2028_ = v___x_2037_;
v_x_2029_ = v___x_2039_;
goto _start;
}
else
{
lean_object* v___x_2041_; lean_object* v___y_2043_; lean_object* v___y_2044_; lean_object* v___y_2045_; lean_object* v___y_2046_; uint8_t v___y_2103_; uint8_t v___x_2110_; 
lean_dec(v_x_2029_);
v___x_2041_ = lean_box(1);
v___x_2110_ = l_Lean_Expr_isConst(v_lhsFn_2023_);
if (v___x_2110_ == 0)
{
v___y_2103_ = v___x_2110_;
goto v___jp_2102_;
}
else
{
uint8_t v___x_2111_; 
v___x_2111_ = l_Lean_Expr_isConst(v_x_2027_);
v___y_2103_ = v___x_2111_;
goto v___jp_2102_;
}
v___jp_2042_:
{
size_t v_sz_2047_; size_t v___x_2048_; lean_object* v___x_2049_; 
v_sz_2047_ = lean_array_size(v_lhsArgs_2020_);
v___x_2048_ = ((size_t)0ULL);
v___x_2049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__2(v_lhsArgs_2020_, v_sz_2047_, v___x_2048_, v___x_2041_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; size_t v_sz_2058_; lean_object* v___x_2059_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v___x_2051_ = lean_unsigned_to_nat(0u);
v___x_2052_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__0));
v___x_2053_ = lean_array_get_size(v_fst_2021_);
v___x_2054_ = l_Array_toSubarray___redArg(v_fst_2021_, v___x_2051_, v___x_2053_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2052_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2051_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
v___x_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2057_, 0, v_a_2050_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v_sz_2058_ = lean_array_size(v_fst_2022_);
v___x_2059_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7(v_fst_2022_, v_sz_2058_, v___x_2048_, v___x_2057_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2072_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2072_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2072_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_snd_2064_; lean_object* v_snd_2065_; lean_object* v_fst_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
v_snd_2064_ = lean_ctor_get(v_a_2060_, 1);
lean_inc(v_snd_2064_);
lean_dec(v_a_2060_);
v_snd_2065_ = lean_ctor_get(v_snd_2064_, 1);
lean_inc(v_snd_2065_);
lean_dec(v_snd_2064_);
v_fst_2066_ = lean_ctor_get(v_snd_2065_, 0);
lean_inc(v_fst_2066_);
lean_dec(v_snd_2065_);
v___x_2067_ = l_Lean_Expr_constName_x21(v_lhsFn_2023_);
v___x_2068_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2068_, 0, v_declName_2024_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
lean_ctor_set(v___x_2068_, 2, v_fst_2066_);
lean_ctor_set(v___x_2068_, 3, v_prio_2025_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2068_);
v___x_2070_ = v___x_2062_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2068_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_dec(v_prio_2025_);
lean_dec(v_declName_2024_);
v_a_2073_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2059_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2059_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v_prio_2025_);
lean_dec(v_declName_2024_);
lean_dec_ref(v_fst_2021_);
v_a_2081_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2049_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2049_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
v___jp_2089_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
v___x_2090_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___closed__2);
v___x_2091_ = l_Lean_indentExpr(v_snd_2026_);
v___x_2092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2090_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_2092_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_);
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2093_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2093_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
v___jp_2102_:
{
if (v___y_2103_ == 0)
{
lean_dec_ref(v_x_2028_);
lean_dec_ref(v_x_2027_);
lean_dec(v_prio_2025_);
lean_dec(v_declName_2024_);
lean_dec_ref(v_fst_2021_);
goto v___jp_2089_;
}
else
{
lean_object* v___x_2104_; lean_object* v___x_2105_; uint8_t v___x_2106_; 
v___x_2104_ = l_Lean_Expr_constName_x21(v_lhsFn_2023_);
v___x_2105_ = l_Lean_Expr_constName_x21(v_x_2027_);
lean_dec_ref(v_x_2027_);
v___x_2106_ = lean_name_eq(v___x_2104_, v___x_2105_);
lean_dec(v___x_2105_);
lean_dec(v___x_2104_);
if (v___x_2106_ == 0)
{
lean_dec_ref(v_x_2028_);
lean_dec(v_prio_2025_);
lean_dec(v_declName_2024_);
lean_dec_ref(v_fst_2021_);
goto v___jp_2089_;
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; 
v___x_2107_ = lean_array_get_size(v_lhsArgs_2020_);
v___x_2108_ = lean_array_get_size(v_x_2028_);
lean_dec_ref(v_x_2028_);
v___x_2109_ = lean_nat_dec_eq(v___x_2107_, v___x_2108_);
if (v___x_2109_ == 0)
{
lean_dec(v_prio_2025_);
lean_dec(v_declName_2024_);
lean_dec_ref(v_fst_2021_);
goto v___jp_2089_;
}
else
{
lean_dec_ref(v_snd_2026_);
v___y_2043_ = v___y_2030_;
v___y_2044_ = v___y_2031_;
v___y_2045_ = v___y_2032_;
v___y_2046_ = v___y_2033_;
goto v___jp_2042_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8___boxed(lean_object* v_lhsArgs_2112_, lean_object* v_fst_2113_, lean_object* v_fst_2114_, lean_object* v_lhsFn_2115_, lean_object* v_declName_2116_, lean_object* v_prio_2117_, lean_object* v_snd_2118_, lean_object* v_x_2119_, lean_object* v_x_2120_, lean_object* v_x_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8(v_lhsArgs_2112_, v_fst_2113_, v_fst_2114_, v_lhsFn_2115_, v_declName_2116_, v_prio_2117_, v_snd_2118_, v_x_2119_, v_x_2120_, v_x_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec_ref(v_lhsFn_2115_);
lean_dec_ref(v_fst_2114_);
lean_dec_ref(v_lhsArgs_2112_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9_spec__12(lean_object* v_snd_2128_, lean_object* v_fst_2129_, lean_object* v_fst_2130_, lean_object* v_declName_2131_, lean_object* v_prio_2132_, lean_object* v_snd_2133_, lean_object* v_x_2134_, lean_object* v_x_2135_, lean_object* v_x_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_){
_start:
{
if (lean_obj_tag(v_x_2134_) == 5)
{
lean_object* v_fn_2142_; lean_object* v_arg_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v_fn_2142_ = lean_ctor_get(v_x_2134_, 0);
lean_inc_ref(v_fn_2142_);
v_arg_2143_ = lean_ctor_get(v_x_2134_, 1);
lean_inc_ref(v_arg_2143_);
lean_dec_ref_known(v_x_2134_, 2);
v___x_2144_ = lean_array_set(v_x_2135_, v_x_2136_, v_arg_2143_);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = lean_nat_sub(v_x_2136_, v___x_2145_);
lean_dec(v_x_2136_);
v_x_2134_ = v_fn_2142_;
v_x_2135_ = v___x_2144_;
v_x_2136_ = v___x_2146_;
goto _start;
}
else
{
lean_object* v_dummy_2148_; lean_object* v_nargs_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_dec(v_x_2136_);
v_dummy_2148_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1);
v_nargs_2149_ = l_Lean_Expr_getAppNumArgs(v_snd_2128_);
lean_inc(v_nargs_2149_);
v___x_2150_ = lean_mk_array(v_nargs_2149_, v_dummy_2148_);
v___x_2151_ = lean_unsigned_to_nat(1u);
v___x_2152_ = lean_nat_sub(v_nargs_2149_, v___x_2151_);
lean_dec(v_nargs_2149_);
v___x_2153_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8(v_x_2135_, v_fst_2129_, v_fst_2130_, v_x_2134_, v_declName_2131_, v_prio_2132_, v_snd_2133_, v_snd_2128_, v___x_2150_, v___x_2152_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_);
lean_dec_ref(v_x_2134_);
lean_dec_ref(v_x_2135_);
return v___x_2153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9_spec__12___boxed(lean_object* v_snd_2154_, lean_object* v_fst_2155_, lean_object* v_fst_2156_, lean_object* v_declName_2157_, lean_object* v_prio_2158_, lean_object* v_snd_2159_, lean_object* v_x_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9_spec__12(v_snd_2154_, v_fst_2155_, v_fst_2156_, v_declName_2157_, v_prio_2158_, v_snd_2159_, v_x_2160_, v_x_2161_, v_x_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec_ref(v_fst_2156_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9(lean_object* v_fst_2169_, lean_object* v_fst_2170_, lean_object* v_declName_2171_, lean_object* v_prio_2172_, lean_object* v_snd_2173_, lean_object* v_snd_2174_, lean_object* v_x_2175_, lean_object* v_x_2176_, lean_object* v_x_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
if (lean_obj_tag(v_x_2175_) == 5)
{
lean_object* v_fn_2183_; lean_object* v_arg_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v_fn_2183_ = lean_ctor_get(v_x_2175_, 0);
lean_inc_ref(v_fn_2183_);
v_arg_2184_ = lean_ctor_get(v_x_2175_, 1);
lean_inc_ref(v_arg_2184_);
lean_dec_ref_known(v_x_2175_, 2);
v___x_2185_ = lean_array_set(v_x_2176_, v_x_2177_, v_arg_2184_);
v___x_2186_ = lean_unsigned_to_nat(1u);
v___x_2187_ = lean_nat_sub(v_x_2177_, v___x_2186_);
v___x_2188_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9_spec__12(v_snd_2174_, v_fst_2169_, v_fst_2170_, v_declName_2171_, v_prio_2172_, v_snd_2173_, v_fn_2183_, v___x_2185_, v___x_2187_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_);
return v___x_2188_;
}
else
{
lean_object* v_dummy_2189_; lean_object* v_nargs_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v_dummy_2189_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1);
v_nargs_2190_ = l_Lean_Expr_getAppNumArgs(v_snd_2174_);
lean_inc(v_nargs_2190_);
v___x_2191_ = lean_mk_array(v_nargs_2190_, v_dummy_2189_);
v___x_2192_ = lean_unsigned_to_nat(1u);
v___x_2193_ = lean_nat_sub(v_nargs_2190_, v___x_2192_);
lean_dec(v_nargs_2190_);
v___x_2194_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__8(v_x_2176_, v_fst_2169_, v_fst_2170_, v_x_2175_, v_declName_2171_, v_prio_2172_, v_snd_2173_, v_snd_2174_, v___x_2191_, v___x_2193_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_);
lean_dec_ref(v_x_2175_);
lean_dec_ref(v_x_2176_);
return v___x_2194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9___boxed(lean_object* v_fst_2195_, lean_object* v_fst_2196_, lean_object* v_declName_2197_, lean_object* v_prio_2198_, lean_object* v_snd_2199_, lean_object* v_snd_2200_, lean_object* v_x_2201_, lean_object* v_x_2202_, lean_object* v_x_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9(v_fst_2195_, v_fst_2196_, v_declName_2197_, v_prio_2198_, v_snd_2199_, v_snd_2200_, v_x_2201_, v_x_2202_, v_x_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
lean_dec(v___y_2205_);
lean_dec_ref(v___y_2204_);
lean_dec(v_x_2203_);
lean_dec_ref(v_fst_2196_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__2(lean_object* v_a_2210_, lean_object* v_a_2211_){
_start:
{
if (lean_obj_tag(v_a_2210_) == 0)
{
lean_object* v___x_2212_; 
v___x_2212_ = l_List_reverse___redArg(v_a_2211_);
return v___x_2212_;
}
else
{
lean_object* v_head_2213_; lean_object* v_tail_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2223_; 
v_head_2213_ = lean_ctor_get(v_a_2210_, 0);
v_tail_2214_ = lean_ctor_get(v_a_2210_, 1);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_a_2210_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2216_ = v_a_2210_;
v_isShared_2217_ = v_isSharedCheck_2223_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_tail_2214_);
lean_inc(v_head_2213_);
lean_dec(v_a_2210_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2223_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___x_2218_ = l_Lean_mkLevelParam(v_head_2213_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 1, v_a_2211_);
lean_ctor_set(v___x_2216_, 0, v___x_2218_);
v___x_2220_ = v___x_2216_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_a_2211_);
v___x_2220_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
v_a_2210_ = v_tail_2214_;
v_a_2211_ = v___x_2220_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
return v___x_2225_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0);
v___x_2227_ = lean_unsigned_to_nat(0u);
v___x_2228_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
lean_ctor_set(v___x_2228_, 2, v___x_2227_);
lean_ctor_set(v___x_2228_, 3, v___x_2227_);
lean_ctor_set(v___x_2228_, 4, v___x_2226_);
lean_ctor_set(v___x_2228_, 5, v___x_2226_);
lean_ctor_set(v___x_2228_, 6, v___x_2226_);
lean_ctor_set(v___x_2228_, 7, v___x_2226_);
lean_ctor_set(v___x_2228_, 8, v___x_2226_);
lean_ctor_set(v___x_2228_, 9, v___x_2226_);
lean_ctor_set(v___x_2228_, 10, v___x_2226_);
return v___x_2228_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = lean_unsigned_to_nat(32u);
v___x_2230_ = lean_mk_empty_array_with_capacity(v___x_2229_);
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
return v___x_2231_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__3(void){
_start:
{
size_t v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2232_ = ((size_t)5ULL);
v___x_2233_ = lean_unsigned_to_nat(0u);
v___x_2234_ = lean_unsigned_to_nat(32u);
v___x_2235_ = lean_mk_empty_array_with_capacity(v___x_2234_);
v___x_2236_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2);
v___x_2237_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set(v___x_2237_, 1, v___x_2235_);
lean_ctor_set(v___x_2237_, 2, v___x_2233_);
lean_ctor_set(v___x_2237_, 3, v___x_2233_);
lean_ctor_set_usize(v___x_2237_, 4, v___x_2232_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2238_ = lean_box(1);
v___x_2239_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__3);
v___x_2240_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__0);
v___x_2241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
lean_ctor_set(v___x_2241_, 1, v___x_2239_);
lean_ctor_set(v___x_2241_, 2, v___x_2238_);
return v___x_2241_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__5));
v___x_2244_ = l_Lean_stringToMessageData(v___x_2243_);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__8(void){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2246_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__7));
v___x_2247_ = l_Lean_stringToMessageData(v___x_2246_);
return v___x_2247_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__10(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__9));
v___x_2250_ = l_Lean_stringToMessageData(v___x_2249_);
return v___x_2250_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__12(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2252_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__11));
v___x_2253_ = l_Lean_stringToMessageData(v___x_2252_);
return v___x_2253_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__14(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__13));
v___x_2256_ = l_Lean_stringToMessageData(v___x_2255_);
return v___x_2256_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__16(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__15));
v___x_2259_ = l_Lean_stringToMessageData(v___x_2258_);
return v___x_2259_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__18(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__17));
v___x_2262_ = l_Lean_stringToMessageData(v___x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg(lean_object* v_msg_2263_, lean_object* v_declHint_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v_env_2269_; uint8_t v___x_2270_; 
v___x_2267_ = l_Lean_instInhabitedName;
v___x_2268_ = lean_st_ref_get(v___y_2265_);
v_env_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc_ref(v_env_2269_);
lean_dec(v___x_2268_);
v___x_2270_ = l_Lean_Name_isAnonymous(v_declHint_2264_);
if (v___x_2270_ == 0)
{
uint8_t v_isExporting_2271_; 
v_isExporting_2271_ = lean_ctor_get_uint8(v_env_2269_, sizeof(void*)*8);
if (v_isExporting_2271_ == 0)
{
lean_object* v___x_2272_; 
lean_dec_ref(v_env_2269_);
lean_dec(v_declHint_2264_);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v_msg_2263_);
return v___x_2272_;
}
else
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
lean_inc_ref(v_env_2269_);
v___x_2273_ = l_Lean_Environment_setExporting(v_env_2269_, v___x_2270_);
lean_inc(v_declHint_2264_);
lean_inc_ref(v___x_2273_);
v___x_2274_ = l_Lean_Environment_contains(v___x_2273_, v_declHint_2264_, v_isExporting_2271_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; 
lean_dec_ref(v___x_2273_);
lean_dec_ref(v_env_2269_);
lean_dec(v_declHint_2264_);
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v_msg_2263_);
return v___x_2275_;
}
else
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v_c_2281_; lean_object* v___x_2282_; 
v___x_2276_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1);
v___x_2277_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4);
v___x_2278_ = l_Lean_Options_empty;
v___x_2279_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2273_);
lean_ctor_set(v___x_2279_, 1, v___x_2276_);
lean_ctor_set(v___x_2279_, 2, v___x_2277_);
lean_ctor_set(v___x_2279_, 3, v___x_2278_);
lean_inc(v_declHint_2264_);
v___x_2280_ = l_Lean_MessageData_ofConstName(v_declHint_2264_, v___x_2270_);
v_c_2281_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2281_, 0, v___x_2279_);
lean_ctor_set(v_c_2281_, 1, v___x_2280_);
v___x_2282_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2269_, v_declHint_2264_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
lean_dec_ref(v_env_2269_);
lean_dec(v_declHint_2264_);
v___x_2283_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6);
v___x_2284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
lean_ctor_set(v___x_2284_, 1, v_c_2281_);
v___x_2285_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__8);
v___x_2286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = l_Lean_MessageData_note(v___x_2286_);
v___x_2288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2288_, 0, v_msg_2263_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
return v___x_2289_;
}
else
{
lean_object* v_val_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2324_; 
v_val_2290_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2292_ = v___x_2282_;
v_isShared_2293_ = v_isSharedCheck_2324_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_val_2290_);
lean_dec(v___x_2282_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2324_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v_mod_2296_; uint8_t v___x_2297_; 
v___x_2294_ = l_Lean_Environment_header(v_env_2269_);
lean_dec_ref(v_env_2269_);
v___x_2295_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2294_);
lean_dec_ref(v___x_2294_);
v_mod_2296_ = lean_array_get(v___x_2267_, v___x_2295_, v_val_2290_);
lean_dec(v_val_2290_);
lean_dec_ref(v___x_2295_);
v___x_2297_ = l_Lean_isPrivateName(v_declHint_2264_);
lean_dec(v_declHint_2264_);
if (v___x_2297_ == 0)
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2298_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__10);
v___x_2299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v_c_2281_);
v___x_2300_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__12);
v___x_2301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2299_);
lean_ctor_set(v___x_2301_, 1, v___x_2300_);
v___x_2302_ = l_Lean_MessageData_ofName(v_mod_2296_);
v___x_2303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__14);
v___x_2305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2303_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = l_Lean_MessageData_note(v___x_2305_);
v___x_2307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2307_, 0, v_msg_2263_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set_tag(v___x_2292_, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2307_);
v___x_2309_ = v___x_2292_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2322_; 
v___x_2311_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__6);
v___x_2312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
lean_ctor_set(v___x_2312_, 1, v_c_2281_);
v___x_2313_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__16);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = l_Lean_MessageData_ofName(v_mod_2296_);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__18);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = l_Lean_MessageData_note(v___x_2318_);
v___x_2320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2320_, 0, v_msg_2263_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set_tag(v___x_2292_, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2320_);
v___x_2322_ = v___x_2292_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v___x_2320_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2325_; 
lean_dec_ref(v_env_2269_);
lean_dec(v_declHint_2264_);
v___x_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2325_, 0, v_msg_2263_);
return v___x_2325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___boxed(lean_object* v_msg_2326_, lean_object* v_declHint_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg(v_msg_2326_, v_declHint_2327_, v___y_2328_);
lean_dec(v___y_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16(lean_object* v_msg_2331_, lean_object* v_declHint_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v___x_2338_; lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2348_; 
v___x_2338_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg(v_msg_2331_, v_declHint_2332_, v___y_2336_);
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2341_ = v___x_2338_;
v_isShared_2342_ = v_isSharedCheck_2348_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2348_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2346_; 
v___x_2343_ = l_Lean_unknownIdentifierMessageTag;
v___x_2344_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
lean_ctor_set(v___x_2344_, 1, v_a_2339_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2344_);
v___x_2346_ = v___x_2341_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16___boxed(lean_object* v_msg_2349_, lean_object* v_declHint_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16(v_msg_2349_, v_declHint_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg(lean_object* v_ref_2357_, lean_object* v_msg_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_toCold_2364_; lean_object* v_currRecDepth_2365_; lean_object* v_ref_2366_; uint8_t v_diag_2367_; uint8_t v_suppressElabErrors_2368_; lean_object* v_ref_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_toCold_2364_ = lean_ctor_get(v___y_2361_, 0);
v_currRecDepth_2365_ = lean_ctor_get(v___y_2361_, 1);
v_ref_2366_ = lean_ctor_get(v___y_2361_, 2);
v_diag_2367_ = lean_ctor_get_uint8(v___y_2361_, sizeof(void*)*3);
v_suppressElabErrors_2368_ = lean_ctor_get_uint8(v___y_2361_, sizeof(void*)*3 + 1);
v_ref_2369_ = l_Lean_replaceRef(v_ref_2357_, v_ref_2366_);
lean_inc(v_currRecDepth_2365_);
lean_inc_ref(v_toCold_2364_);
v___x_2370_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2370_, 0, v_toCold_2364_);
lean_ctor_set(v___x_2370_, 1, v_currRecDepth_2365_);
lean_ctor_set(v___x_2370_, 2, v_ref_2369_);
lean_ctor_set_uint8(v___x_2370_, sizeof(void*)*3, v_diag_2367_);
lean_ctor_set_uint8(v___x_2370_, sizeof(void*)*3 + 1, v_suppressElabErrors_2368_);
v___x_2371_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v_msg_2358_, v___y_2359_, v___y_2360_, v___x_2370_, v___y_2362_);
lean_dec_ref_known(v___x_2370_, 3);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg___boxed(lean_object* v_ref_2372_, lean_object* v_msg_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg(v_ref_2372_, v_msg_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
lean_dec(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v_ref_2372_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg(lean_object* v_ref_2380_, lean_object* v_msg_2381_, lean_object* v_declHint_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v___x_2388_; lean_object* v_a_2389_; lean_object* v___x_2390_; 
v___x_2388_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16(v_msg_2381_, v_declHint_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref(v___x_2388_);
v___x_2390_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg(v_ref_2380_, v_a_2389_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg___boxed(lean_object* v_ref_2391_, lean_object* v_msg_2392_, lean_object* v_declHint_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg(v_ref_2391_, v_msg_2392_, v_declHint_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v_ref_2391_);
return v_res_2399_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__0));
v___x_2402_ = l_Lean_stringToMessageData(v___x_2401_);
return v___x_2402_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__2));
v___x_2405_ = l_Lean_stringToMessageData(v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg(lean_object* v_ref_2406_, lean_object* v_constName_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; uint8_t v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2413_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__1);
v___x_2414_ = 0;
lean_inc(v_constName_2407_);
v___x_2415_ = l_Lean_MessageData_ofConstName(v_constName_2407_, v___x_2414_);
v___x_2416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2413_);
lean_ctor_set(v___x_2416_, 1, v___x_2415_);
v___x_2417_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___closed__3);
v___x_2418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2416_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg(v_ref_2406_, v___x_2418_, v_constName_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg___boxed(lean_object* v_ref_2420_, lean_object* v_constName_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg(v_ref_2420_, v_constName_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec(v___y_2423_);
lean_dec_ref(v___y_2422_);
lean_dec(v_ref_2420_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg(lean_object* v_constName_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v_ref_2434_; lean_object* v___x_2435_; 
v_ref_2434_ = lean_ctor_get(v___y_2431_, 2);
v___x_2435_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg(v_ref_2434_, v_constName_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_constName_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg(v_constName_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1(lean_object* v_constName_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v___x_2449_; lean_object* v_env_2450_; uint8_t v___x_2451_; lean_object* v___x_2452_; 
v___x_2449_ = lean_st_ref_get(v___y_2447_);
v_env_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc_ref(v_env_2450_);
lean_dec(v___x_2449_);
v___x_2451_ = 0;
lean_inc(v_constName_2443_);
v___x_2452_ = l_Lean_Environment_findConstVal_x3f(v_env_2450_, v_constName_2443_, v___x_2451_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg(v_constName_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2453_;
}
else
{
lean_object* v_val_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec(v_constName_2443_);
v_val_2454_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2452_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_val_2454_);
lean_dec(v___x_2452_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set_tag(v___x_2456_, 0);
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_val_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1___boxed(lean_object* v_constName_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1(v_constName_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1(lean_object* v_constName_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_){
_start:
{
lean_object* v___x_2475_; 
lean_inc(v_constName_2469_);
v___x_2475_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1(v_constName_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2487_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2478_ = v___x_2475_;
v_isShared_2479_ = v_isSharedCheck_2487_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2475_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2487_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v_levelParams_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2485_; 
v_levelParams_2480_ = lean_ctor_get(v_a_2476_, 1);
lean_inc(v_levelParams_2480_);
lean_dec(v_a_2476_);
v___x_2481_ = lean_box(0);
v___x_2482_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__2(v_levelParams_2480_, v___x_2481_);
v___x_2483_ = l_Lean_mkConst(v_constName_2469_, v___x_2482_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 0, v___x_2483_);
v___x_2485_ = v___x_2478_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
lean_dec(v_constName_2469_);
v_a_2488_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2475_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2475_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1___boxed(lean_object* v_constName_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1(v_constName_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
return v_res_2502_;
}
}
static lean_object* _init_l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = ((lean_object*)(l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__0));
v___x_2505_ = l_Lean_stringToMessageData(v___x_2504_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem___lam__0(lean_object* v_declName_2506_, lean_object* v_prio_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_){
_start:
{
lean_object* v___x_2513_; 
lean_inc(v_declName_2506_);
v___x_2513_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1(v_declName_2506_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2515_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2513_, 1);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
lean_inc(v___y_2509_);
lean_inc_ref(v___y_2508_);
v___x_2515_ = lean_infer_type(v_a_2514_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v___x_2517_ = lean_box(0);
v___x_2518_ = 0;
v___x_2519_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_2516_, v___x_2517_, v___x_2518_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v_snd_2521_; lean_object* v_fst_2522_; lean_object* v_fst_2523_; lean_object* v_snd_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2555_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
v_snd_2521_ = lean_ctor_get(v_a_2520_, 1);
lean_inc(v_snd_2521_);
v_fst_2522_ = lean_ctor_get(v_a_2520_, 0);
lean_inc(v_fst_2522_);
lean_dec(v_a_2520_);
v_fst_2523_ = lean_ctor_get(v_snd_2521_, 0);
v_snd_2524_ = lean_ctor_get(v_snd_2521_, 1);
v_isSharedCheck_2555_ = !lean_is_exclusive(v_snd_2521_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2526_ = v_snd_2521_;
v_isShared_2527_ = v_isSharedCheck_2555_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_snd_2524_);
lean_inc(v_fst_2523_);
lean_dec(v_snd_2521_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2555_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v_fst_2529_; lean_object* v_snd_2530_; lean_object* v___x_2537_; lean_object* v___x_2538_; uint8_t v___x_2539_; 
v___x_2537_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__9));
v___x_2538_ = lean_unsigned_to_nat(3u);
v___x_2539_ = l_Lean_Expr_isAppOfArity(v_snd_2524_, v___x_2537_, v___x_2538_);
if (v___x_2539_ == 0)
{
lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__11));
v___x_2541_ = lean_unsigned_to_nat(2u);
v___x_2542_ = l_Lean_Expr_isAppOfArity(v_snd_2524_, v___x_2540_, v___x_2541_);
if (v___x_2542_ == 0)
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2546_; 
lean_dec(v_fst_2523_);
lean_dec(v_fst_2522_);
lean_dec(v_prio_2507_);
lean_dec(v_declName_2506_);
v___x_2543_ = lean_obj_once(&l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__1, &l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__1_once, _init_l_Lean_Meta_mkSimpCongrTheorem___lam__0___closed__1);
v___x_2544_ = l_Lean_indentExpr(v_snd_2524_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set_tag(v___x_2526_, 7);
lean_ctor_set(v___x_2526_, 1, v___x_2544_);
lean_ctor_set(v___x_2526_, 0, v___x_2543_);
v___x_2546_ = v___x_2526_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2543_);
lean_ctor_set(v_reuseFailAlloc_2548_, 1, v___x_2544_);
v___x_2546_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
lean_object* v___x_2547_; 
v___x_2547_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v___x_2546_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
return v___x_2547_;
}
}
else
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_del_object(v___x_2526_);
v___x_2549_ = l_Lean_Expr_appFn_x21(v_snd_2524_);
v___x_2550_ = l_Lean_Expr_appArg_x21(v___x_2549_);
lean_dec_ref(v___x_2549_);
v___x_2551_ = l_Lean_Expr_appArg_x21(v_snd_2524_);
v_fst_2529_ = v___x_2550_;
v_snd_2530_ = v___x_2551_;
goto v___jp_2528_;
}
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
lean_del_object(v___x_2526_);
v___x_2552_ = l_Lean_Expr_appFn_x21(v_snd_2524_);
v___x_2553_ = l_Lean_Expr_appArg_x21(v___x_2552_);
lean_dec_ref(v___x_2552_);
v___x_2554_ = l_Lean_Expr_appArg_x21(v_snd_2524_);
v_fst_2529_ = v___x_2553_;
v_snd_2530_ = v___x_2554_;
goto v___jp_2528_;
}
v___jp_2528_:
{
lean_object* v_dummy_2531_; lean_object* v_nargs_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v_dummy_2531_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__7___lam__0___closed__1);
v_nargs_2532_ = l_Lean_Expr_getAppNumArgs(v_fst_2529_);
lean_inc(v_nargs_2532_);
v___x_2533_ = lean_mk_array(v_nargs_2532_, v_dummy_2531_);
v___x_2534_ = lean_unsigned_to_nat(1u);
v___x_2535_ = lean_nat_sub(v_nargs_2532_, v___x_2534_);
lean_dec(v_nargs_2532_);
v___x_2536_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkSimpCongrTheorem_spec__9(v_fst_2523_, v_fst_2522_, v_declName_2506_, v_prio_2507_, v_snd_2524_, v_snd_2530_, v_fst_2529_, v___x_2533_, v___x_2535_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___x_2535_);
lean_dec(v_fst_2522_);
return v___x_2536_;
}
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v_prio_2507_);
lean_dec(v_declName_2506_);
v_a_2556_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2519_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2519_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v_prio_2507_);
lean_dec(v_declName_2506_);
v_a_2564_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2566_ = v___x_2515_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2515_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2564_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v_prio_2507_);
lean_dec(v_declName_2506_);
v_a_2572_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2513_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2513_);
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
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem___lam__0___boxed(lean_object* v_declName_2580_, lean_object* v_prio_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Lean_Meta_mkSimpCongrTheorem___lam__0(v_declName_2580_, v_prio_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem(lean_object* v_declName_2588_, lean_object* v_prio_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_){
_start:
{
lean_object* v___y_2596_; lean_object* v___x_2613_; uint8_t v_transparency_2614_; uint8_t v___x_2615_; uint8_t v___x_2616_; 
v___x_2613_ = l_Lean_Meta_Context_config(v_a_2590_);
v_transparency_2614_ = lean_ctor_get_uint8(v___x_2613_, 9);
lean_dec_ref(v___x_2613_);
v___x_2615_ = 2;
v___x_2616_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2614_, v___x_2615_);
if (v___x_2616_ == 0)
{
lean_object* v_keyedConfig_2617_; uint8_t v_trackZetaDelta_2618_; lean_object* v_zetaDeltaSet_2619_; lean_object* v_lctx_2620_; lean_object* v_localInstances_2621_; lean_object* v_defEqCtx_x3f_2622_; lean_object* v_synthPendingDepth_2623_; lean_object* v_customCanUnfoldPredicate_x3f_2624_; uint8_t v_univApprox_2625_; uint8_t v_inTypeClassResolution_2626_; uint8_t v_cacheInferType_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v_keyedConfig_2617_ = lean_ctor_get(v_a_2590_, 0);
v_trackZetaDelta_2618_ = lean_ctor_get_uint8(v_a_2590_, sizeof(void*)*7);
v_zetaDeltaSet_2619_ = lean_ctor_get(v_a_2590_, 1);
v_lctx_2620_ = lean_ctor_get(v_a_2590_, 2);
v_localInstances_2621_ = lean_ctor_get(v_a_2590_, 3);
v_defEqCtx_x3f_2622_ = lean_ctor_get(v_a_2590_, 4);
v_synthPendingDepth_2623_ = lean_ctor_get(v_a_2590_, 5);
v_customCanUnfoldPredicate_x3f_2624_ = lean_ctor_get(v_a_2590_, 6);
v_univApprox_2625_ = lean_ctor_get_uint8(v_a_2590_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2626_ = lean_ctor_get_uint8(v_a_2590_, sizeof(void*)*7 + 2);
v_cacheInferType_2627_ = lean_ctor_get_uint8(v_a_2590_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2617_);
v___x_2628_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2615_, v_keyedConfig_2617_);
lean_inc(v_customCanUnfoldPredicate_x3f_2624_);
lean_inc(v_synthPendingDepth_2623_);
lean_inc(v_defEqCtx_x3f_2622_);
lean_inc_ref(v_localInstances_2621_);
lean_inc_ref(v_lctx_2620_);
lean_inc(v_zetaDeltaSet_2619_);
v___x_2629_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2629_, 0, v___x_2628_);
lean_ctor_set(v___x_2629_, 1, v_zetaDeltaSet_2619_);
lean_ctor_set(v___x_2629_, 2, v_lctx_2620_);
lean_ctor_set(v___x_2629_, 3, v_localInstances_2621_);
lean_ctor_set(v___x_2629_, 4, v_defEqCtx_x3f_2622_);
lean_ctor_set(v___x_2629_, 5, v_synthPendingDepth_2623_);
lean_ctor_set(v___x_2629_, 6, v_customCanUnfoldPredicate_x3f_2624_);
lean_ctor_set_uint8(v___x_2629_, sizeof(void*)*7, v_trackZetaDelta_2618_);
lean_ctor_set_uint8(v___x_2629_, sizeof(void*)*7 + 1, v_univApprox_2625_);
lean_ctor_set_uint8(v___x_2629_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2626_);
lean_ctor_set_uint8(v___x_2629_, sizeof(void*)*7 + 3, v_cacheInferType_2627_);
lean_inc(v_a_2593_);
lean_inc_ref(v_a_2592_);
lean_inc(v_a_2591_);
v___x_2630_ = l_Lean_Meta_mkSimpCongrTheorem___lam__0(v_declName_2588_, v_prio_2589_, v___x_2629_, v_a_2591_, v_a_2592_, v_a_2593_);
v___y_2596_ = v___x_2630_;
goto v___jp_2595_;
}
else
{
lean_object* v___x_2631_; 
lean_inc(v_a_2593_);
lean_inc_ref(v_a_2592_);
lean_inc(v_a_2591_);
lean_inc_ref(v_a_2590_);
v___x_2631_ = l_Lean_Meta_mkSimpCongrTheorem___lam__0(v_declName_2588_, v_prio_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_);
v___y_2596_ = v___x_2631_;
goto v___jp_2595_;
}
v___jp_2595_:
{
if (lean_obj_tag(v___y_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
v_a_2597_ = lean_ctor_get(v___y_2596_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___y_2596_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___y_2596_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___y_2596_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
v_a_2605_ = lean_ctor_get(v___y_2596_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___y_2596_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___y_2596_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___y_2596_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpCongrTheorem___boxed(lean_object* v_declName_2632_, lean_object* v_prio_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lean_Meta_mkSimpCongrTheorem(v_declName_2632_, v_prio_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_);
lean_dec(v_a_2637_);
lean_dec_ref(v_a_2636_);
lean_dec(v_a_2635_);
lean_dec_ref(v_a_2634_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0(lean_object* v_as_2640_, size_t v_sz_2641_, size_t v_i_2642_, lean_object* v_b_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___x_2649_; 
v___x_2649_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___redArg(v_as_2640_, v_sz_2641_, v_i_2642_, v_b_2643_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0___boxed(lean_object* v_as_2650_, lean_object* v_sz_2651_, lean_object* v_i_2652_, lean_object* v_b_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
size_t v_sz_boxed_2659_; size_t v_i_boxed_2660_; lean_object* v_res_2661_; 
v_sz_boxed_2659_ = lean_unbox_usize(v_sz_2651_);
lean_dec(v_sz_2651_);
v_i_boxed_2660_ = lean_unbox_usize(v_i_2652_);
lean_dec(v_i_2652_);
v_res_2661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkSimpCongrTheorem_spec__0(v_as_2650_, v_sz_boxed_2659_, v_i_boxed_2660_, v_b_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec_ref(v_as_2650_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3(lean_object* v_00_u03b1_2662_, lean_object* v_msg_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v___x_2669_; 
v___x_2669_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___redArg(v_msg_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
return v___x_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3___boxed(lean_object* v_00_u03b1_2670_, lean_object* v_msg_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_throwError___at___00Lean_Meta_mkSimpCongrTheorem_spec__3(v_00_u03b1_2670_, v_msg_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v___y_2673_);
lean_dec_ref(v___y_2672_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3(lean_object* v_00_u03b1_2678_, lean_object* v_constName_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___redArg(v_constName_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2686_, lean_object* v_constName_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3(v_00_u03b1_2686_, v_constName_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12(lean_object* v_00_u03b1_2694_, lean_object* v_ref_2695_, lean_object* v_constName_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___redArg(v_ref_2695_, v_constName_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12___boxed(lean_object* v_00_u03b1_2703_, lean_object* v_ref_2704_, lean_object* v_constName_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12(v_00_u03b1_2703_, v_ref_2704_, v_constName_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec(v_ref_2704_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15(lean_object* v_00_u03b1_2712_, lean_object* v_ref_2713_, lean_object* v_msg_2714_, lean_object* v_declHint_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___redArg(v_ref_2713_, v_msg_2714_, v_declHint_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2722_, lean_object* v_ref_2723_, lean_object* v_msg_2724_, lean_object* v_declHint_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15(v_00_u03b1_2722_, v_ref_2723_, v_msg_2724_, v_declHint_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2728_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v_ref_2723_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17(lean_object* v_msg_2732_, lean_object* v_declHint_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg(v_msg_2732_, v_declHint_2733_, v___y_2737_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___boxed(lean_object* v_msg_2740_, lean_object* v_declHint_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17(v_msg_2740_, v_declHint_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17(lean_object* v_00_u03b1_2748_, lean_object* v_ref_2749_, lean_object* v_msg_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___redArg(v_ref_2749_, v_msg_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17___boxed(lean_object* v_00_u03b1_2757_, lean_object* v_ref_2758_, lean_object* v_msg_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__17(v_00_u03b1_2757_, v_ref_2758_, v_msg_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
lean_dec(v_ref_2758_);
return v_res_2765_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2766_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2);
v___x_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2766_);
return v___x_2767_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0);
v___x_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2768_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
return v___x_2769_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__0);
v___x_2771_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2770_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
lean_ctor_set(v___x_2771_, 2, v___x_2770_);
lean_ctor_set(v___x_2771_, 3, v___x_2770_);
lean_ctor_set(v___x_2771_, 4, v___x_2770_);
lean_ctor_set(v___x_2771_, 5, v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg(lean_object* v_ext_2772_, lean_object* v_b_2773_, uint8_t v_kind_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_toCold_2779_; lean_object* v_currNamespace_2780_; lean_object* v___x_2781_; lean_object* v_env_2782_; lean_object* v_nextMacroScope_2783_; lean_object* v_ngen_2784_; lean_object* v_auxDeclNGen_2785_; lean_object* v_traceState_2786_; lean_object* v_messages_2787_; lean_object* v_infoState_2788_; lean_object* v_snapshotTasks_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2816_; 
v_toCold_2779_ = lean_ctor_get(v___y_2776_, 0);
v_currNamespace_2780_ = lean_ctor_get(v_toCold_2779_, 4);
v___x_2781_ = lean_st_ref_take(v___y_2777_);
v_env_2782_ = lean_ctor_get(v___x_2781_, 0);
v_nextMacroScope_2783_ = lean_ctor_get(v___x_2781_, 1);
v_ngen_2784_ = lean_ctor_get(v___x_2781_, 2);
v_auxDeclNGen_2785_ = lean_ctor_get(v___x_2781_, 3);
v_traceState_2786_ = lean_ctor_get(v___x_2781_, 4);
v_messages_2787_ = lean_ctor_get(v___x_2781_, 6);
v_infoState_2788_ = lean_ctor_get(v___x_2781_, 7);
v_snapshotTasks_2789_ = lean_ctor_get(v___x_2781_, 8);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; 
v_unused_2817_ = lean_ctor_get(v___x_2781_, 5);
lean_dec(v_unused_2817_);
v___x_2791_ = v___x_2781_;
v_isShared_2792_ = v_isSharedCheck_2816_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_snapshotTasks_2789_);
lean_inc(v_infoState_2788_);
lean_inc(v_messages_2787_);
lean_inc(v_traceState_2786_);
lean_inc(v_auxDeclNGen_2785_);
lean_inc(v_ngen_2784_);
lean_inc(v_nextMacroScope_2783_);
lean_inc(v_env_2782_);
lean_dec(v___x_2781_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2816_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2796_; 
lean_inc(v_currNamespace_2780_);
v___x_2793_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_2782_, v_ext_2772_, v_b_2773_, v_kind_2774_, v_currNamespace_2780_);
v___x_2794_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__1);
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 5, v___x_2794_);
lean_ctor_set(v___x_2791_, 0, v___x_2793_);
v___x_2796_ = v___x_2791_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2793_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v_nextMacroScope_2783_);
lean_ctor_set(v_reuseFailAlloc_2815_, 2, v_ngen_2784_);
lean_ctor_set(v_reuseFailAlloc_2815_, 3, v_auxDeclNGen_2785_);
lean_ctor_set(v_reuseFailAlloc_2815_, 4, v_traceState_2786_);
lean_ctor_set(v_reuseFailAlloc_2815_, 5, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2815_, 6, v_messages_2787_);
lean_ctor_set(v_reuseFailAlloc_2815_, 7, v_infoState_2788_);
lean_ctor_set(v_reuseFailAlloc_2815_, 8, v_snapshotTasks_2789_);
v___x_2796_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v_mctx_2799_; lean_object* v_zetaDeltaFVarIds_2800_; lean_object* v_postponed_2801_; lean_object* v_diag_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2813_; 
v___x_2797_ = lean_st_ref_put(v___y_2777_, v___x_2796_);
v___x_2798_ = lean_st_ref_take(v___y_2775_);
v_mctx_2799_ = lean_ctor_get(v___x_2798_, 0);
v_zetaDeltaFVarIds_2800_ = lean_ctor_get(v___x_2798_, 2);
v_postponed_2801_ = lean_ctor_get(v___x_2798_, 3);
v_diag_2802_ = lean_ctor_get(v___x_2798_, 4);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2813_ == 0)
{
lean_object* v_unused_2814_; 
v_unused_2814_ = lean_ctor_get(v___x_2798_, 1);
lean_dec(v_unused_2814_);
v___x_2804_ = v___x_2798_;
v_isShared_2805_ = v_isSharedCheck_2813_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_diag_2802_);
lean_inc(v_postponed_2801_);
lean_inc(v_zetaDeltaFVarIds_2800_);
lean_inc(v_mctx_2799_);
lean_dec(v___x_2798_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2813_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2806_ = lean_box(0);
v___x_2807_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___closed__2);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 1, v___x_2807_);
v___x_2809_ = v___x_2804_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_mctx_2799_);
lean_ctor_set(v_reuseFailAlloc_2812_, 1, v___x_2807_);
lean_ctor_set(v_reuseFailAlloc_2812_, 2, v_zetaDeltaFVarIds_2800_);
lean_ctor_set(v_reuseFailAlloc_2812_, 3, v_postponed_2801_);
lean_ctor_set(v_reuseFailAlloc_2812_, 4, v_diag_2802_);
v___x_2809_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_st_ref_put(v___y_2775_, v___x_2809_);
v___x_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2806_);
return v___x_2811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg___boxed(lean_object* v_ext_2818_, lean_object* v_b_2819_, lean_object* v_kind_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
uint8_t v_kind_boxed_2825_; lean_object* v_res_2826_; 
v_kind_boxed_2825_ = lean_unbox(v_kind_2820_);
v_res_2826_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg(v_ext_2818_, v_b_2819_, v_kind_boxed_2825_, v___y_2821_, v___y_2822_, v___y_2823_);
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec(v___y_2821_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0(lean_object* v_00_u03b1_2827_, lean_object* v_00_u03b2_2828_, lean_object* v_00_u03c3_2829_, lean_object* v_ext_2830_, lean_object* v_b_2831_, uint8_t v_kind_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg(v_ext_2830_, v_b_2831_, v_kind_2832_, v___y_2834_, v___y_2835_, v___y_2836_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___boxed(lean_object* v_00_u03b1_2839_, lean_object* v_00_u03b2_2840_, lean_object* v_00_u03c3_2841_, lean_object* v_ext_2842_, lean_object* v_b_2843_, lean_object* v_kind_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
uint8_t v_kind_boxed_2850_; lean_object* v_res_2851_; 
v_kind_boxed_2850_ = lean_unbox(v_kind_2844_);
v_res_2851_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0(v_00_u03b1_2839_, v_00_u03b2_2840_, v_00_u03c3_2841_, v_ext_2842_, v_b_2843_, v_kind_boxed_2850_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v___y_2846_);
lean_dec_ref(v___y_2845_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addSimpCongrTheorem(lean_object* v_declName_2852_, uint8_t v_attrKind_2853_, lean_object* v_prio_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_Meta_mkSimpCongrTheorem(v_declName_2852_, v_prio_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_a_2861_);
lean_dec_ref_known(v___x_2860_, 1);
v___x_2862_ = l_Lean_Meta_congrExtension;
v___x_2863_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addSimpCongrTheorem_spec__0___redArg(v___x_2862_, v_a_2861_, v_attrKind_2853_, v_a_2856_, v_a_2857_, v_a_2858_);
return v___x_2863_;
}
else
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2871_; 
v_a_2864_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2866_ = v___x_2860_;
v_isShared_2867_ = v_isSharedCheck_2871_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2860_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2871_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
if (v_isShared_2867_ == 0)
{
v___x_2869_ = v___x_2866_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_a_2864_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addSimpCongrTheorem___boxed(lean_object* v_declName_2872_, lean_object* v_attrKind_2873_, lean_object* v_prio_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_){
_start:
{
uint8_t v_attrKind_boxed_2880_; lean_object* v_res_2881_; 
v_attrKind_boxed_2880_ = lean_unbox(v_attrKind_2873_);
v_res_2881_ = l_Lean_Meta_addSimpCongrTheorem(v_declName_2872_, v_attrKind_boxed_2880_, v_prio_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_);
lean_dec(v_a_2878_);
lean_dec_ref(v_a_2877_);
lean_dec(v_a_2876_);
lean_dec_ref(v_a_2875_);
return v_res_2881_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2888_; uint64_t v___x_2889_; 
v___x_2888_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_2889_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2888_);
return v___x_2889_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2890_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2891_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_2892_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2892_, 0, v___x_2891_);
lean_ctor_set_uint64(v___x_2892_, sizeof(void*)*1, v___x_2890_);
return v___x_2892_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2893_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2, &l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default___closed__2);
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2895_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2896_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
lean_ctor_set(v___x_2896_, 2, v___x_2895_);
lean_ctor_set(v___x_2896_, 3, v___x_2895_);
lean_ctor_set(v___x_2896_, 4, v___x_2895_);
lean_ctor_set(v___x_2896_, 5, v___x_2895_);
return v___x_2896_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2897_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2898_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
lean_ctor_set(v___x_2898_, 2, v___x_2897_);
lean_ctor_set(v___x_2898_, 3, v___x_2897_);
lean_ctor_set(v___x_2898_, 4, v___x_2897_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(lean_object* v___x_2899_, lean_object* v___x_2900_, lean_object* v_declName_2901_, lean_object* v_stx_2902_, uint8_t v_attrKind_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2907_ = lean_unsigned_to_nat(1u);
v___x_2908_ = l_Lean_Syntax_getArg(v_stx_2902_, v___x_2907_);
v___x_2909_ = l_Lean_getAttrParamOptPrio(v___x_2908_, v___y_2904_, v___y_2905_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; uint8_t v___x_2911_; uint8_t v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; size_t v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2909_, 1);
v___x_2911_ = 0;
v___x_2912_ = 1;
v___x_2913_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2914_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2915_ = lean_unsigned_to_nat(32u);
v___x_2916_ = lean_mk_empty_array_with_capacity(v___x_2915_);
v___x_2917_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__2);
v___x_2918_ = ((size_t)5ULL);
lean_inc_n(v___x_2899_, 6);
v___x_2919_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v___x_2916_);
lean_ctor_set(v___x_2919_, 2, v___x_2899_);
lean_ctor_set(v___x_2919_, 3, v___x_2899_);
lean_ctor_set_usize(v___x_2919_, 4, v___x_2918_);
v___x_2920_ = lean_box(1);
lean_inc_ref(v___x_2919_);
v___x_2921_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2914_);
lean_ctor_set(v___x_2921_, 1, v___x_2919_);
lean_ctor_set(v___x_2921_, 2, v___x_2920_);
v___x_2922_ = lean_mk_empty_array_with_capacity(v___x_2899_);
v___x_2923_ = lean_box(0);
lean_inc(v___x_2900_);
v___x_2924_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2924_, 0, v___x_2913_);
lean_ctor_set(v___x_2924_, 1, v___x_2900_);
lean_ctor_set(v___x_2924_, 2, v___x_2921_);
lean_ctor_set(v___x_2924_, 3, v___x_2922_);
lean_ctor_set(v___x_2924_, 4, v___x_2923_);
lean_ctor_set(v___x_2924_, 5, v___x_2899_);
lean_ctor_set(v___x_2924_, 6, v___x_2923_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*7, v___x_2911_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*7 + 1, v___x_2911_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*7 + 2, v___x_2911_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*7 + 3, v___x_2912_);
v___x_2925_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2899_);
lean_ctor_set(v___x_2925_, 1, v___x_2899_);
lean_ctor_set(v___x_2925_, 2, v___x_2899_);
lean_ctor_set(v___x_2925_, 3, v___x_2899_);
lean_ctor_set(v___x_2925_, 4, v___x_2914_);
lean_ctor_set(v___x_2925_, 5, v___x_2914_);
lean_ctor_set(v___x_2925_, 6, v___x_2914_);
lean_ctor_set(v___x_2925_, 7, v___x_2914_);
lean_ctor_set(v___x_2925_, 8, v___x_2914_);
lean_ctor_set(v___x_2925_, 9, v___x_2914_);
lean_ctor_set(v___x_2925_, 10, v___x_2914_);
v___x_2926_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2927_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_2928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2925_);
lean_ctor_set(v___x_2928_, 1, v___x_2926_);
lean_ctor_set(v___x_2928_, 2, v___x_2900_);
lean_ctor_set(v___x_2928_, 3, v___x_2919_);
lean_ctor_set(v___x_2928_, 4, v___x_2927_);
v___x_2929_ = lean_box(0);
v___x_2930_ = lean_st_mk_ref(v___x_2928_);
v___x_2931_ = l_Lean_Meta_addSimpCongrTheorem(v_declName_2901_, v_attrKind_2903_, v_a_2910_, v___x_2924_, v___x_2930_, v___y_2904_, v___y_2905_);
lean_dec_ref_known(v___x_2924_, 7);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2939_; 
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2939_ == 0)
{
lean_object* v_unused_2940_; 
v_unused_2940_ = lean_ctor_get(v___x_2931_, 0);
lean_dec(v_unused_2940_);
v___x_2933_ = v___x_2931_;
v_isShared_2934_ = v_isSharedCheck_2939_;
goto v_resetjp_2932_;
}
else
{
lean_dec(v___x_2931_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2939_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2935_; lean_object* v___x_2937_; 
v___x_2935_ = lean_st_ref_get(v___x_2930_);
lean_dec(v___x_2930_);
lean_dec(v___x_2935_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 0, v___x_2929_);
v___x_2937_ = v___x_2933_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v___x_2929_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
else
{
lean_dec(v___x_2930_);
return v___x_2931_;
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v_declName_2901_);
lean_dec(v___x_2900_);
lean_dec(v___x_2899_);
v_a_2941_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2909_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2909_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object* v___x_2949_, lean_object* v___x_2950_, lean_object* v_declName_2951_, lean_object* v_stx_2952_, lean_object* v_attrKind_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
uint8_t v_attrKind_boxed_2957_; lean_object* v_res_2958_; 
v_attrKind_boxed_2957_ = lean_unbox(v_attrKind_2953_);
v_res_2958_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(v___x_2949_, v___x_2950_, v_declName_2951_, v_stx_2952_, v_attrKind_boxed_2957_, v___y_2954_, v___y_2955_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v_stx_2952_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_){
_start:
{
lean_object* v___x_2963_; lean_object* v_toCold_2964_; lean_object* v_env_2965_; lean_object* v_options_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2963_ = lean_st_ref_get(v___y_2961_);
v_toCold_2964_ = lean_ctor_get(v___y_2960_, 0);
v_env_2965_ = lean_ctor_get(v___x_2963_, 0);
lean_inc_ref(v_env_2965_);
lean_dec(v___x_2963_);
v_options_2966_ = lean_ctor_get(v_toCold_2964_, 2);
v___x_2967_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__1);
v___x_2968_ = lean_unsigned_to_nat(32u);
v___x_2969_ = lean_mk_empty_array_with_capacity(v___x_2968_);
lean_dec_ref(v___x_2969_);
v___x_2970_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_mkSimpCongrTheorem_spec__1_spec__1_spec__3_spec__12_spec__15_spec__16_spec__17___redArg___closed__4);
lean_inc_ref(v_options_2966_);
v___x_2971_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2971_, 0, v_env_2965_);
lean_ctor_set(v___x_2971_, 1, v___x_2967_);
lean_ctor_set(v___x_2971_, 2, v___x_2970_);
lean_ctor_set(v___x_2971_, 3, v_options_2966_);
v___x_2972_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
lean_ctor_set(v___x_2972_, 1, v_msgData_2959_);
v___x_2973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0_spec__0(v_msgData_2974_, v___y_2975_, v___y_2976_);
lean_dec(v___y_2976_);
lean_dec_ref(v___y_2975_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_){
_start:
{
lean_object* v_ref_2983_; lean_object* v___x_2984_; lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2993_; 
v_ref_2983_ = lean_ctor_get(v___y_2980_, 2);
v___x_2984_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0_spec__0(v_msg_2979_, v___y_2980_, v___y_2981_);
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_2993_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2993_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2991_; 
lean_inc(v_ref_2983_);
v___x_2989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2989_, 0, v_ref_2983_);
lean_ctor_set(v___x_2989_, 1, v_a_2985_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set_tag(v___x_2987_, 1);
lean_ctor_set(v___x_2987_, 0, v___x_2989_);
v___x_2991_ = v___x_2987_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2989_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg(v_msg_2994_, v___y_2995_, v___y_2996_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
return v_res_2998_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3001_ = l_Lean_stringToMessageData(v___x_3000_);
return v___x_3001_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3004_ = l_Lean_stringToMessageData(v___x_3003_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(lean_object* v___x_3005_, lean_object* v_decl_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3010_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3011_ = l_Lean_MessageData_ofName(v___x_3005_);
v___x_3012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3010_);
lean_ctor_set(v___x_3012_, 1, v___x_3011_);
v___x_3013_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3012_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
v___x_3015_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg(v___x_3014_, v___y_3007_, v___y_3008_);
return v___x_3015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object* v___x_3016_, lean_object* v_decl_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(v___x_3016_, v_decl_3017_, v___y_3018_, v___y_3019_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v_decl_3017_);
return v_res_3021_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3023_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3024_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0, &l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0_once, _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default___closed__0);
v___x_3025_ = l_Lean_Name_str___override(v___x_3024_, v___x_3023_);
return v___x_3025_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3026_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_3027_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3028_ = l_Lean_Name_str___override(v___x_3027_, v___x_3026_);
return v___x_3028_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3029_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_3030_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3031_ = l_Lean_Name_str___override(v___x_3030_, v___x_3029_);
return v___x_3031_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3033_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3034_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3035_ = l_Lean_Name_str___override(v___x_3034_, v___x_3033_);
return v___x_3035_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3037_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3038_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3039_ = l_Lean_Name_str___override(v___x_3038_, v___x_3037_);
return v___x_3039_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3041_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3042_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3043_ = l_Lean_Name_str___override(v___x_3042_, v___x_3041_);
return v___x_3043_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3047_ = lean_unsigned_to_nat(0u);
v___x_3048_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3049_ = l_Lean_Name_num___override(v___x_3048_, v___x_3047_);
return v___x_3049_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3050_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_3051_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3052_ = l_Lean_Name_str___override(v___x_3051_, v___x_3050_);
return v___x_3052_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3053_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_3054_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3055_ = l_Lean_Name_str___override(v___x_3054_, v___x_3053_);
return v___x_3055_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3057_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3058_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3059_ = l_Lean_Name_str___override(v___x_3058_, v___x_3057_);
return v___x_3059_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3061_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3062_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3063_ = l_Lean_Name_str___override(v___x_3062_, v___x_3061_);
return v___x_3063_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_3065_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3066_ = l_Lean_Name_str___override(v___x_3065_, v___x_3064_);
return v___x_3066_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3067_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_));
v___x_3068_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3069_ = l_Lean_Name_str___override(v___x_3068_, v___x_3067_);
return v___x_3069_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3070_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3071_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3072_ = l_Lean_Name_str___override(v___x_3071_, v___x_3070_);
return v___x_3072_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3073_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3074_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3075_ = l_Lean_Name_str___override(v___x_3074_, v___x_3073_);
return v___x_3075_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3076_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3077_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3078_ = l_Lean_Name_str___override(v___x_3077_, v___x_3076_);
return v___x_3078_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3079_ = lean_unsigned_to_nat(3428004144u);
v___x_3080_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3081_ = l_Lean_Name_num___override(v___x_3080_, v___x_3079_);
return v___x_3081_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3083_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3084_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3085_ = l_Lean_Name_str___override(v___x_3084_, v___x_3083_);
return v___x_3085_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3088_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3089_ = l_Lean_Name_str___override(v___x_3088_, v___x_3087_);
return v___x_3089_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = lean_unsigned_to_nat(2u);
v___x_3091_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3092_ = l_Lean_Name_num___override(v___x_3091_, v___x_3090_);
return v___x_3092_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__33_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3099_ = 0;
v___x_3100_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3101_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3102_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3103_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
lean_ctor_set(v___x_3103_, 1, v___x_3101_);
lean_ctor_set(v___x_3103_, 2, v___x_3100_);
lean_ctor_set_uint8(v___x_3103_, sizeof(void*)*3, v___x_3099_);
return v___x_3103_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__34_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_3104_; lean_object* v___f_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___f_3104_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___f_3105_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3106_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__33_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__33_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__33_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3107_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
lean_ctor_set(v___x_3107_, 1, v___f_3105_);
lean_ctor_set(v___x_3107_, 2, v___f_3104_);
return v___x_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__34_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__34_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__34_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3110_ = l_Lean_registerBuiltinAttribute(v___x_3109_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object* v_a_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_();
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_3113_, lean_object* v_msg_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v___x_3118_; 
v___x_3118_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___redArg(v_msg_3114_, v___y_3115_, v___y_3116_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_3119_, lean_object* v_msg_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__spec__0(v_00_u03b1_3119_, v_msg_3120_, v___y_3121_, v___y_3122_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3127_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_);
v___x_3128_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_));
v___x_3129_ = l_Lean_addBuiltinDocString(v___x_3127_, v___x_3128_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2____boxed(lean_object* v_a_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_();
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object* v_a_3132_){
_start:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v_env_3136_; lean_object* v___x_3137_; lean_object* v_ext_3138_; lean_object* v_toEnvExtension_3139_; lean_object* v_asyncMode_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3134_ = l_Lean_Meta_instInhabitedSimpCongrTheorems_default;
v___x_3135_ = lean_st_ref_get(v_a_3132_);
v_env_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc_ref(v_env_3136_);
lean_dec(v___x_3135_);
v___x_3137_ = l_Lean_Meta_congrExtension;
v_ext_3138_ = lean_ctor_get(v___x_3137_, 1);
v_toEnvExtension_3139_ = lean_ctor_get(v_ext_3138_, 0);
v_asyncMode_3140_ = lean_ctor_get(v_toEnvExtension_3139_, 2);
v___x_3141_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3134_, v___x_3137_, v_env_3136_, v_asyncMode_3140_);
v___x_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg___boxed(lean_object* v_a_3143_, lean_object* v_a_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_3143_);
lean_dec(v_a_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems(lean_object* v_a_3146_, lean_object* v_a_3147_){
_start:
{
lean_object* v___x_3149_; 
v___x_3149_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_3147_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSimpCongrTheorems___boxed(lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l_Lean_Meta_getSimpCongrTheorems(v_a_3150_, v_a_3151_);
lean_dec(v_a_3151_);
lean_dec_ref(v_a_3150_);
return v_res_3153_;
}
}
lean_object* runtime_initialize_Lean_Util_Recognizers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_Recognizers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedSimpCongrTheorem_default = _init_l_Lean_Meta_instInhabitedSimpCongrTheorem_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpCongrTheorem_default);
l_Lean_Meta_instInhabitedSimpCongrTheorem = _init_l_Lean_Meta_instInhabitedSimpCongrTheorem();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpCongrTheorem);
l_Lean_Meta_instInhabitedSimpCongrTheorems_default = _init_l_Lean_Meta_instInhabitedSimpCongrTheorems_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpCongrTheorems_default);
l_Lean_Meta_instInhabitedSimpCongrTheorems = _init_l_Lean_Meta_instInhabitedSimpCongrTheorems();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpCongrTheorems);
res = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3898756595____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_congrExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_congrExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Tactic_Simp_SimpCongrTheorems_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Tactic_Simp_SimpCongrTheorems_3428004144____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_Recognizers(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_Recognizers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_SimpCongrTheorems(builtin);
}
#ifdef __cplusplus
}
#endif

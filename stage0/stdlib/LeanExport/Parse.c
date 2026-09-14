// Lean compiler output
// Module: LeanExport.Parse
// Imports: public import Std.Data.HashMap public import Lean.Declaration import Init.Data.Array.GetLit import Init.Data.String.Search import Init.System.IO import Std.Internal.Parsec.String import Lean.Data.Json.Parser
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
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Level_imax___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_Parser_anyCore(lean_object*);
lean_object* l_Std_Internal_Parsec_String_Parser_run___redArg(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Level_max___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_instInhabitedExportedEnv_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__0;
static lean_once_cell_t l_LeanExport_instInhabitedExportedEnv_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__1;
static const lean_array_object l_LeanExport_instInhabitedExportedEnv_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__2 = (const lean_object*)&l_LeanExport_instInhabitedExportedEnv_default___closed__2_value;
static lean_once_cell_t l_LeanExport_instInhabitedExportedEnv_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__3;
LEAN_EXPORT lean_object* l_LeanExport_instInhabitedExportedEnv_default;
LEAN_EXPORT lean_object* l_LeanExport_instInhabitedExportedEnv;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__5;
static const lean_array_object l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Name not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Level not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Expr not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "RecursorRule not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0_value;
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Duplicate declaration: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Expected JSON object"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1_value;
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_Parser_anyCore, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Name.str invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2_value;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Name.num invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Level.succ invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Level.max invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Level.imax invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Level.param invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.bvar invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.sort invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Expr.const invalid"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "us"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed__const__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Expr.app invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "fn"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Invalid binder info: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Expr.lam invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binderInfo"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Expr.forallE invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.letE invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.proj invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Expr.lit natVal invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Expr.lit strVal invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Expr.mdata invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "failed to convert to name idx"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0_value)}};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "axiomInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "levelParams"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isUnsafe"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "defnInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hints"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "safety"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "safe"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Unknown safety parameter: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "thmInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "opaqueInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "quotInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unknown quot kind: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "inductInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numIndices"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctors"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isRec"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isReflexive"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "inductInfo invalid: Expected JSON object"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ctorInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "induct"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cidx"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numFields"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "recInfo invalid"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0_value)}};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1_value;
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nfields"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2_value;
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numMotives"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numMinors"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Inductive invalid, no `recs`"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Inductive invalid, no `ctors`"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Inductive invalid, no `types`"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "types"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "recs"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0 = (const lean_object*)&l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0_value;
static const lean_string_object l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1 = (const lean_object*)&l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1_value;
static const lean_string_object l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2 = (const lean_object*)&l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Unknown export object with keys "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "il"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ie"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_parseStream(lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_parseStream___boxed(lean_object*, lean_object*);
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_LeanExport_instInhabitedExportedEnv_default___closed__0, &l_LeanExport_instInhabitedExportedEnv_default___closed__0_once, _init_l_LeanExport_instInhabitedExportedEnv_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = ((lean_object*)(l_LeanExport_instInhabitedExportedEnv_default___closed__2));
v___x_10_ = lean_obj_once(&l_LeanExport_instInhabitedExportedEnv_default___closed__1, &l_LeanExport_instInhabitedExportedEnv_default___closed__1_once, _init_l_LeanExport_instInhabitedExportedEnv_default___closed__1);
v___x_11_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_LeanExport_instInhabitedExportedEnv_default___closed__3, &l_LeanExport_instInhabitedExportedEnv_default___closed__3_once, _init_l_LeanExport_instInhabitedExportedEnv_default___closed__3);
return v___x_12_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_LeanExport_instInhabitedExportedEnv_default;
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
return v_x_14_;
}
else
{
lean_object* v_key_16_; lean_object* v_value_17_; lean_object* v_tail_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_41_; 
v_key_16_ = lean_ctor_get(v_x_15_, 0);
v_value_17_ = lean_ctor_get(v_x_15_, 1);
v_tail_18_ = lean_ctor_get(v_x_15_, 2);
v_isSharedCheck_41_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_41_ == 0)
{
v___x_20_ = v_x_15_;
v_isShared_21_ = v_isSharedCheck_41_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_tail_18_);
lean_inc(v_value_17_);
lean_inc(v_key_16_);
lean_dec(v_x_15_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_41_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___x_25_; uint64_t v_fold_26_; uint64_t v___x_27_; uint64_t v___x_28_; uint64_t v___x_29_; size_t v___x_30_; size_t v___x_31_; size_t v___x_32_; size_t v___x_33_; size_t v___x_34_; lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_22_ = lean_array_get_size(v_x_14_);
v___x_23_ = lean_uint64_of_nat(v_key_16_);
v___x_24_ = 32ULL;
v___x_25_ = lean_uint64_shift_right(v___x_23_, v___x_24_);
v_fold_26_ = lean_uint64_xor(v___x_23_, v___x_25_);
v___x_27_ = 16ULL;
v___x_28_ = lean_uint64_shift_right(v_fold_26_, v___x_27_);
v___x_29_ = lean_uint64_xor(v_fold_26_, v___x_28_);
v___x_30_ = lean_uint64_to_usize(v___x_29_);
v___x_31_ = lean_usize_of_nat(v___x_22_);
v___x_32_ = ((size_t)1ULL);
v___x_33_ = lean_usize_sub(v___x_31_, v___x_32_);
v___x_34_ = lean_usize_land(v___x_30_, v___x_33_);
v___x_35_ = lean_array_uget_borrowed(v_x_14_, v___x_34_);
lean_inc(v___x_35_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 2, v___x_35_);
v___x_37_ = v___x_20_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_key_16_);
lean_ctor_set(v_reuseFailAlloc_40_, 1, v_value_17_);
lean_ctor_set(v_reuseFailAlloc_40_, 2, v___x_35_);
v___x_37_ = v_reuseFailAlloc_40_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; 
v___x_38_ = lean_array_uset(v_x_14_, v___x_34_, v___x_37_);
v_x_14_ = v___x_38_;
v_x_15_ = v_tail_18_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(lean_object* v_i_42_, lean_object* v_source_43_, lean_object* v_target_44_){
_start:
{
lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_45_ = lean_array_get_size(v_source_43_);
v___x_46_ = lean_nat_dec_lt(v_i_42_, v___x_45_);
if (v___x_46_ == 0)
{
lean_dec_ref(v_source_43_);
lean_dec(v_i_42_);
return v_target_44_;
}
else
{
lean_object* v_es_47_; lean_object* v___x_48_; lean_object* v_source_49_; lean_object* v_target_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v_es_47_ = lean_array_fget(v_source_43_, v_i_42_);
v___x_48_ = lean_box(0);
v_source_49_ = lean_array_fset(v_source_43_, v_i_42_, v___x_48_);
v_target_50_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(v_target_44_, v_es_47_);
v___x_51_ = lean_unsigned_to_nat(1u);
v___x_52_ = lean_nat_add(v_i_42_, v___x_51_);
lean_dec(v_i_42_);
v_i_42_ = v___x_52_;
v_source_43_ = v_source_49_;
v_target_44_ = v_target_50_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(lean_object* v_data_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v_nbuckets_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_55_ = lean_array_get_size(v_data_54_);
v___x_56_ = lean_unsigned_to_nat(2u);
v_nbuckets_57_ = lean_nat_mul(v___x_55_, v___x_56_);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = lean_box(0);
v___x_60_ = lean_mk_array(v_nbuckets_57_, v___x_59_);
v___x_61_ = lean_array_propagate_mark(v_data_54_, v___x_60_);
v___x_62_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(v___x_58_, v_data_54_, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(lean_object* v_a_63_, lean_object* v_b_64_, lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_dec(v_b_64_);
lean_dec(v_a_63_);
return v_x_65_;
}
else
{
lean_object* v_key_66_; lean_object* v_value_67_; lean_object* v_tail_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_80_; 
v_key_66_ = lean_ctor_get(v_x_65_, 0);
v_value_67_ = lean_ctor_get(v_x_65_, 1);
v_tail_68_ = lean_ctor_get(v_x_65_, 2);
v_isSharedCheck_80_ = !lean_is_exclusive(v_x_65_);
if (v_isSharedCheck_80_ == 0)
{
v___x_70_ = v_x_65_;
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_tail_68_);
lean_inc(v_value_67_);
lean_inc(v_key_66_);
lean_dec(v_x_65_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
uint8_t v___x_72_; 
v___x_72_ = lean_nat_dec_eq(v_key_66_, v_a_63_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_73_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(v_a_63_, v_b_64_, v_tail_68_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 2, v___x_73_);
v___x_75_ = v___x_70_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_key_66_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_value_67_);
lean_ctor_set(v_reuseFailAlloc_76_, 2, v___x_73_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
else
{
lean_object* v___x_78_; 
lean_dec(v_value_67_);
lean_dec(v_key_66_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 1, v_b_64_);
lean_ctor_set(v___x_70_, 0, v_a_63_);
v___x_78_ = v___x_70_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_a_63_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_b_64_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v_tail_68_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(lean_object* v_a_81_, lean_object* v_x_82_){
_start:
{
if (lean_obj_tag(v_x_82_) == 0)
{
uint8_t v___x_83_; 
v___x_83_ = 0;
return v___x_83_;
}
else
{
lean_object* v_key_84_; lean_object* v_tail_85_; uint8_t v___x_86_; 
v_key_84_ = lean_ctor_get(v_x_82_, 0);
v_tail_85_ = lean_ctor_get(v_x_82_, 2);
v___x_86_ = lean_nat_dec_eq(v_key_84_, v_a_81_);
if (v___x_86_ == 0)
{
v_x_82_ = v_tail_85_;
goto _start;
}
else
{
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg___boxed(lean_object* v_a_88_, lean_object* v_x_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_88_, v_x_89_);
lean_dec(v_x_89_);
lean_dec(v_a_88_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(lean_object* v_m_92_, lean_object* v_a_93_, lean_object* v_b_94_){
_start:
{
lean_object* v_size_95_; lean_object* v_buckets_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_139_; 
v_size_95_ = lean_ctor_get(v_m_92_, 0);
v_buckets_96_ = lean_ctor_get(v_m_92_, 1);
v_isSharedCheck_139_ = !lean_is_exclusive(v_m_92_);
if (v_isSharedCheck_139_ == 0)
{
v___x_98_ = v_m_92_;
v_isShared_99_ = v_isSharedCheck_139_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_buckets_96_);
lean_inc(v_size_95_);
lean_dec(v_m_92_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_139_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; uint64_t v___x_101_; uint64_t v___x_102_; uint64_t v___x_103_; uint64_t v_fold_104_; uint64_t v___x_105_; uint64_t v___x_106_; uint64_t v___x_107_; size_t v___x_108_; size_t v___x_109_; size_t v___x_110_; size_t v___x_111_; size_t v___x_112_; lean_object* v_bkt_113_; uint8_t v___x_114_; 
v___x_100_ = lean_array_get_size(v_buckets_96_);
v___x_101_ = lean_uint64_of_nat(v_a_93_);
v___x_102_ = 32ULL;
v___x_103_ = lean_uint64_shift_right(v___x_101_, v___x_102_);
v_fold_104_ = lean_uint64_xor(v___x_101_, v___x_103_);
v___x_105_ = 16ULL;
v___x_106_ = lean_uint64_shift_right(v_fold_104_, v___x_105_);
v___x_107_ = lean_uint64_xor(v_fold_104_, v___x_106_);
v___x_108_ = lean_uint64_to_usize(v___x_107_);
v___x_109_ = lean_usize_of_nat(v___x_100_);
v___x_110_ = ((size_t)1ULL);
v___x_111_ = lean_usize_sub(v___x_109_, v___x_110_);
v___x_112_ = lean_usize_land(v___x_108_, v___x_111_);
v_bkt_113_ = lean_array_uget_borrowed(v_buckets_96_, v___x_112_);
v___x_114_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_93_, v_bkt_113_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v_size_x27_116_; lean_object* v___x_117_; lean_object* v_buckets_x27_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_115_ = lean_unsigned_to_nat(1u);
v_size_x27_116_ = lean_nat_add(v_size_95_, v___x_115_);
lean_dec(v_size_95_);
lean_inc(v_bkt_113_);
v___x_117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_117_, 0, v_a_93_);
lean_ctor_set(v___x_117_, 1, v_b_94_);
lean_ctor_set(v___x_117_, 2, v_bkt_113_);
v_buckets_x27_118_ = lean_array_uset(v_buckets_96_, v___x_112_, v___x_117_);
v___x_119_ = lean_unsigned_to_nat(4u);
v___x_120_ = lean_nat_mul(v_size_x27_116_, v___x_119_);
v___x_121_ = lean_unsigned_to_nat(3u);
v___x_122_ = lean_nat_div(v___x_120_, v___x_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_array_get_size(v_buckets_x27_118_);
v___x_124_ = lean_nat_dec_le(v___x_122_, v___x_123_);
lean_dec(v___x_122_);
if (v___x_124_ == 0)
{
lean_object* v_val_125_; lean_object* v___x_127_; 
v_val_125_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(v_buckets_x27_118_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_val_125_);
lean_ctor_set(v___x_98_, 0, v_size_x27_116_);
v___x_127_ = v___x_98_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_size_x27_116_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_val_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
else
{
lean_object* v___x_130_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_buckets_x27_118_);
lean_ctor_set(v___x_98_, 0, v_size_x27_116_);
v___x_130_ = v___x_98_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_size_x27_116_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v_buckets_x27_118_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
else
{
lean_object* v___x_132_; lean_object* v_buckets_x27_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
lean_inc(v_bkt_113_);
v___x_132_ = lean_box(0);
v_buckets_x27_133_ = lean_array_uset(v_buckets_96_, v___x_112_, v___x_132_);
v___x_134_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(v_a_93_, v_b_94_, v_bkt_113_);
v___x_135_ = lean_array_uset(v_buckets_x27_133_, v___x_112_, v___x_134_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_135_);
v___x_137_ = v___x_98_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_size_95_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v___x_135_);
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
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = lean_box(0);
v___x_141_ = l_unsafeCast___redArg(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = lean_box(0);
v___x_143_ = lean_unsigned_to_nat(16u);
v___x_144_ = lean_mk_array(v___x_143_, v___x_142_);
return v___x_144_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1);
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
lean_ctor_set(v___x_147_, 1, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_148_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2);
v___x_151_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v___x_150_, v___x_149_, v___x_148_);
return v___x_151_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_box(0);
v___x_153_ = l_unsafeCast___redArg(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__5(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2);
v___x_157_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v___x_156_, v___x_155_, v___x_154_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(lean_object* v_x_160_, lean_object* v_stream_161_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_163_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2);
v___x_164_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3);
v___x_165_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__5, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__5_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__5);
v___x_166_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__6));
v___x_167_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_167_, 0, v_stream_161_);
lean_ctor_set(v___x_167_, 1, v___x_164_);
lean_ctor_set(v___x_167_, 2, v___x_165_);
lean_ctor_set(v___x_167_, 3, v___x_163_);
lean_ctor_set(v___x_167_, 4, v___x_163_);
lean_ctor_set(v___x_167_, 5, v___x_163_);
lean_ctor_set(v___x_167_, 6, v___x_166_);
v___x_168_ = lean_apply_2(v_x_160_, v___x_167_, lean_box(0));
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___boxed(lean_object* v_x_169_, lean_object* v_stream_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(v_x_169_, v_stream_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run(lean_object* v_00_u03b1_173_, lean_object* v_x_174_, lean_object* v_stream_175_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(v_x_174_, v_stream_175_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___boxed(lean_object* v_00_u03b1_178_, lean_object* v_x_179_, lean_object* v_stream_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run(v_00_u03b1_178_, v_x_179_, v_stream_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0(lean_object* v_00_u03b2_183_, lean_object* v_m_184_, lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_m_184_, v_a_185_, v_b_186_);
return v___x_187_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0(lean_object* v_00_u03b2_188_, lean_object* v_a_189_, lean_object* v_x_190_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_189_, v_x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___boxed(lean_object* v_00_u03b2_192_, lean_object* v_a_193_, lean_object* v_x_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0(v_00_u03b2_192_, v_a_193_, v_x_194_);
lean_dec(v_x_194_);
lean_dec(v_a_193_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1(lean_object* v_00_u03b2_197_, lean_object* v_data_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(v_data_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2(lean_object* v_00_u03b2_200_, lean_object* v_a_201_, lean_object* v_b_202_, lean_object* v_x_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(v_a_201_, v_b_202_, v_x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_205_, lean_object* v_i_206_, lean_object* v_source_207_, lean_object* v_target_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(v_i_206_, v_source_207_, v_target_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_210_, lean_object* v_x_211_, lean_object* v_x_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(v_x_211_, v_x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg(lean_object* v_msg_214_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_216_, 0, v_msg_214_);
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg___boxed(lean_object* v_msg_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg(v_msg_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail(lean_object* v_00_u03b1_221_, lean_object* v_msg_222_, lean_object* v_a_223_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_225_, 0, v_msg_222_);
v___x_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___boxed(lean_object* v_00_u03b1_227_, lean_object* v_msg_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l___private_LeanExport_Parse_0__LeanExport_Parse_fail(v_00_u03b1_227_, v_msg_228_, v_a_229_);
lean_dec_ref(v_a_229_);
return v_res_231_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1(void){
_start:
{
lean_object* v___x_233_; lean_object* v___f_234_; 
v___x_233_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_234_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_234_, 0, v___x_233_);
return v___f_234_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName(lean_object* v_nidx_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_nameMap_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___x_242_; 
v_nameMap_239_ = lean_ctor_get(v_a_237_, 1);
v___f_240_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_241_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_nidx_236_);
v___x_242_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_241_, v___f_240_, v_nameMap_239_, v_nidx_236_);
if (lean_obj_tag(v___x_242_) == 1)
{
lean_object* v_val_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_251_; 
lean_dec(v_nidx_236_);
v_val_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_251_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_251_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_val_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_251_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v_val_243_);
lean_ctor_set(v___x_247_, 1, v_a_237_);
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 0);
lean_ctor_set(v___x_245_, 0, v___x_247_);
v___x_249_ = v___x_245_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v___x_242_);
lean_dec_ref(v_a_237_);
v___x_252_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_253_ = l_Nat_reprFast(v_nidx_236_);
v___x_254_ = lean_string_append(v___x_252_, v___x_253_);
lean_dec_ref(v___x_253_);
v___x_255_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___boxed(lean_object* v_nidx_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getName(v_nidx_257_, v_a_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName(lean_object* v_nidx_261_, lean_object* v_n_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_stream_265_; lean_object* v_nameMap_266_; lean_object* v_levelMap_267_; lean_object* v_exprMap_268_; lean_object* v_recursorRuleMap_269_; lean_object* v_constMap_270_; lean_object* v_constOrder_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_284_; 
v_stream_265_ = lean_ctor_get(v_a_263_, 0);
v_nameMap_266_ = lean_ctor_get(v_a_263_, 1);
v_levelMap_267_ = lean_ctor_get(v_a_263_, 2);
v_exprMap_268_ = lean_ctor_get(v_a_263_, 3);
v_recursorRuleMap_269_ = lean_ctor_get(v_a_263_, 4);
v_constMap_270_ = lean_ctor_get(v_a_263_, 5);
v_constOrder_271_ = lean_ctor_get(v_a_263_, 6);
v_isSharedCheck_284_ = !lean_is_exclusive(v_a_263_);
if (v_isSharedCheck_284_ == 0)
{
v___x_273_ = v_a_263_;
v_isShared_274_ = v_isSharedCheck_284_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_constOrder_271_);
lean_inc(v_constMap_270_);
lean_inc(v_recursorRuleMap_269_);
lean_inc(v_exprMap_268_);
lean_inc(v_levelMap_267_);
lean_inc(v_nameMap_266_);
lean_inc(v_stream_265_);
lean_dec(v_a_263_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_284_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___f_275_; lean_object* v___x_276_; lean_object* v___f_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___f_275_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___x_276_ = lean_box(0);
v___f_277_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
v___x_278_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_277_, v___f_275_, v_nameMap_266_, v_nidx_261_, v_n_262_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_278_);
v___x_280_ = v___x_273_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_stream_265_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v_levelMap_267_);
lean_ctor_set(v_reuseFailAlloc_283_, 3, v_exprMap_268_);
lean_ctor_set(v_reuseFailAlloc_283_, 4, v_recursorRuleMap_269_);
lean_ctor_set(v_reuseFailAlloc_283_, 5, v_constMap_270_);
lean_ctor_set(v_reuseFailAlloc_283_, 6, v_constOrder_271_);
v___x_280_ = v_reuseFailAlloc_283_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_276_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName___boxed(lean_object* v_nidx_285_, lean_object* v_n_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addName(v_nidx_285_, v_n_286_, v_a_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel(lean_object* v_uidx_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_levelMap_294_; lean_object* v___f_295_; lean_object* v___f_296_; lean_object* v___x_297_; 
v_levelMap_294_ = lean_ctor_get(v_a_292_, 2);
v___f_295_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_296_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_uidx_291_);
v___x_297_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_296_, v___f_295_, v_levelMap_294_, v_uidx_291_);
if (lean_obj_tag(v___x_297_) == 1)
{
lean_object* v_val_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_306_; 
lean_dec(v_uidx_291_);
v_val_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_306_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_306_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_val_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_306_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v_val_298_);
lean_ctor_set(v___x_302_, 1, v_a_292_);
if (v_isShared_301_ == 0)
{
lean_ctor_set_tag(v___x_300_, 0);
lean_ctor_set(v___x_300_, 0, v___x_302_);
v___x_304_ = v___x_300_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
else
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
lean_dec(v___x_297_);
lean_dec_ref(v_a_292_);
v___x_307_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_308_ = l_Nat_reprFast(v_uidx_291_);
v___x_309_ = lean_string_append(v___x_307_, v___x_308_);
lean_dec_ref(v___x_308_);
v___x_310_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
v___x_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___boxed(lean_object* v_uidx_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel(v_uidx_312_, v_a_313_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel(lean_object* v_uidx_316_, lean_object* v_l_317_, lean_object* v_a_318_){
_start:
{
lean_object* v_stream_320_; lean_object* v_nameMap_321_; lean_object* v_levelMap_322_; lean_object* v_exprMap_323_; lean_object* v_recursorRuleMap_324_; lean_object* v_constMap_325_; lean_object* v_constOrder_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_339_; 
v_stream_320_ = lean_ctor_get(v_a_318_, 0);
v_nameMap_321_ = lean_ctor_get(v_a_318_, 1);
v_levelMap_322_ = lean_ctor_get(v_a_318_, 2);
v_exprMap_323_ = lean_ctor_get(v_a_318_, 3);
v_recursorRuleMap_324_ = lean_ctor_get(v_a_318_, 4);
v_constMap_325_ = lean_ctor_get(v_a_318_, 5);
v_constOrder_326_ = lean_ctor_get(v_a_318_, 6);
v_isSharedCheck_339_ = !lean_is_exclusive(v_a_318_);
if (v_isSharedCheck_339_ == 0)
{
v___x_328_ = v_a_318_;
v_isShared_329_ = v_isSharedCheck_339_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_constOrder_326_);
lean_inc(v_constMap_325_);
lean_inc(v_recursorRuleMap_324_);
lean_inc(v_exprMap_323_);
lean_inc(v_levelMap_322_);
lean_inc(v_nameMap_321_);
lean_inc(v_stream_320_);
lean_dec(v_a_318_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_339_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___f_330_; lean_object* v___x_331_; lean_object* v___f_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___f_330_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___x_331_ = lean_box(0);
v___f_332_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
v___x_333_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_332_, v___f_330_, v_levelMap_322_, v_uidx_316_, v_l_317_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 2, v___x_333_);
v___x_335_ = v___x_328_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_stream_320_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_nameMap_321_);
lean_ctor_set(v_reuseFailAlloc_338_, 2, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_338_, 3, v_exprMap_323_);
lean_ctor_set(v_reuseFailAlloc_338_, 4, v_recursorRuleMap_324_);
lean_ctor_set(v_reuseFailAlloc_338_, 5, v_constMap_325_);
lean_ctor_set(v_reuseFailAlloc_338_, 6, v_constOrder_326_);
v___x_335_ = v_reuseFailAlloc_338_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_331_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___boxed(lean_object* v_uidx_340_, lean_object* v_l_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel(v_uidx_340_, v_l_341_, v_a_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr(lean_object* v_eidx_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_exprMap_349_; lean_object* v___f_350_; lean_object* v___f_351_; lean_object* v___x_352_; 
v_exprMap_349_ = lean_ctor_get(v_a_347_, 3);
v___f_350_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_351_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_eidx_346_);
v___x_352_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_351_, v___f_350_, v_exprMap_349_, v_eidx_346_);
if (lean_obj_tag(v___x_352_) == 1)
{
lean_object* v_val_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_eidx_346_);
v_val_353_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_361_ == 0)
{
v___x_355_ = v___x_352_;
v_isShared_356_ = v_isSharedCheck_361_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_val_353_);
lean_dec(v___x_352_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_361_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_val_353_);
lean_ctor_set(v___x_357_, 1, v_a_347_);
if (v_isShared_356_ == 0)
{
lean_ctor_set_tag(v___x_355_, 0);
lean_ctor_set(v___x_355_, 0, v___x_357_);
v___x_359_ = v___x_355_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec(v___x_352_);
lean_dec_ref(v_a_347_);
v___x_362_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_363_ = l_Nat_reprFast(v_eidx_346_);
v___x_364_ = lean_string_append(v___x_362_, v___x_363_);
lean_dec_ref(v___x_363_);
v___x_365_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___boxed(lean_object* v_eidx_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr(v_eidx_367_, v_a_368_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr(lean_object* v_eidx_371_, lean_object* v_e_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_stream_375_; lean_object* v_nameMap_376_; lean_object* v_levelMap_377_; lean_object* v_exprMap_378_; lean_object* v_recursorRuleMap_379_; lean_object* v_constMap_380_; lean_object* v_constOrder_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_394_; 
v_stream_375_ = lean_ctor_get(v_a_373_, 0);
v_nameMap_376_ = lean_ctor_get(v_a_373_, 1);
v_levelMap_377_ = lean_ctor_get(v_a_373_, 2);
v_exprMap_378_ = lean_ctor_get(v_a_373_, 3);
v_recursorRuleMap_379_ = lean_ctor_get(v_a_373_, 4);
v_constMap_380_ = lean_ctor_get(v_a_373_, 5);
v_constOrder_381_ = lean_ctor_get(v_a_373_, 6);
v_isSharedCheck_394_ = !lean_is_exclusive(v_a_373_);
if (v_isSharedCheck_394_ == 0)
{
v___x_383_ = v_a_373_;
v_isShared_384_ = v_isSharedCheck_394_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_constOrder_381_);
lean_inc(v_constMap_380_);
lean_inc(v_recursorRuleMap_379_);
lean_inc(v_exprMap_378_);
lean_inc(v_levelMap_377_);
lean_inc(v_nameMap_376_);
lean_inc(v_stream_375_);
lean_dec(v_a_373_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_394_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___f_385_; lean_object* v___x_386_; lean_object* v___f_387_; lean_object* v___x_388_; lean_object* v___x_390_; 
v___f_385_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___x_386_ = lean_box(0);
v___f_387_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
v___x_388_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_387_, v___f_385_, v_exprMap_378_, v_eidx_371_, v_e_372_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 3, v___x_388_);
v___x_390_ = v___x_383_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_stream_375_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_nameMap_376_);
lean_ctor_set(v_reuseFailAlloc_393_, 2, v_levelMap_377_);
lean_ctor_set(v_reuseFailAlloc_393_, 3, v___x_388_);
lean_ctor_set(v_reuseFailAlloc_393_, 4, v_recursorRuleMap_379_);
lean_ctor_set(v_reuseFailAlloc_393_, 5, v_constMap_380_);
lean_ctor_set(v_reuseFailAlloc_393_, 6, v_constOrder_381_);
v___x_390_ = v_reuseFailAlloc_393_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_386_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
return v___x_392_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___boxed(lean_object* v_eidx_395_, lean_object* v_e_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr(v_eidx_395_, v_e_396_, v_a_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule(lean_object* v_ridx_401_, lean_object* v_a_402_){
_start:
{
lean_object* v_recursorRuleMap_404_; lean_object* v___f_405_; lean_object* v___f_406_; lean_object* v___x_407_; 
v_recursorRuleMap_404_ = lean_ctor_get(v_a_402_, 4);
v___f_405_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_406_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_ridx_401_);
v___x_407_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_406_, v___f_405_, v_recursorRuleMap_404_, v_ridx_401_);
if (lean_obj_tag(v___x_407_) == 1)
{
lean_object* v_val_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_ridx_401_);
v_val_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_416_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_val_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v_val_408_);
lean_ctor_set(v___x_412_, 1, v_a_402_);
if (v_isShared_411_ == 0)
{
lean_ctor_set_tag(v___x_410_, 0);
lean_ctor_set(v___x_410_, 0, v___x_412_);
v___x_414_ = v___x_410_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec(v___x_407_);
lean_dec_ref(v_a_402_);
v___x_417_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0));
v___x_418_ = l_Nat_reprFast(v_ridx_401_);
v___x_419_ = lean_string_append(v___x_417_, v___x_418_);
lean_dec_ref(v___x_418_);
v___x_420_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___boxed(lean_object* v_ridx_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule(v_ridx_422_, v_a_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule(lean_object* v_ridx_426_, lean_object* v_r_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_stream_430_; lean_object* v_nameMap_431_; lean_object* v_levelMap_432_; lean_object* v_exprMap_433_; lean_object* v_recursorRuleMap_434_; lean_object* v_constMap_435_; lean_object* v_constOrder_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_449_; 
v_stream_430_ = lean_ctor_get(v_a_428_, 0);
v_nameMap_431_ = lean_ctor_get(v_a_428_, 1);
v_levelMap_432_ = lean_ctor_get(v_a_428_, 2);
v_exprMap_433_ = lean_ctor_get(v_a_428_, 3);
v_recursorRuleMap_434_ = lean_ctor_get(v_a_428_, 4);
v_constMap_435_ = lean_ctor_get(v_a_428_, 5);
v_constOrder_436_ = lean_ctor_get(v_a_428_, 6);
v_isSharedCheck_449_ = !lean_is_exclusive(v_a_428_);
if (v_isSharedCheck_449_ == 0)
{
v___x_438_ = v_a_428_;
v_isShared_439_ = v_isSharedCheck_449_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_constOrder_436_);
lean_inc(v_constMap_435_);
lean_inc(v_recursorRuleMap_434_);
lean_inc(v_exprMap_433_);
lean_inc(v_levelMap_432_);
lean_inc(v_nameMap_431_);
lean_inc(v_stream_430_);
lean_dec(v_a_428_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_449_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___f_442_; lean_object* v___x_443_; lean_object* v___x_445_; 
v___f_440_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___x_441_ = lean_box(0);
v___f_442_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
v___x_443_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_442_, v___f_440_, v_recursorRuleMap_434_, v_ridx_426_, v_r_427_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 4, v___x_443_);
v___x_445_ = v___x_438_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_stream_430_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_nameMap_431_);
lean_ctor_set(v_reuseFailAlloc_448_, 2, v_levelMap_432_);
lean_ctor_set(v_reuseFailAlloc_448_, 3, v_exprMap_433_);
lean_ctor_set(v_reuseFailAlloc_448_, 4, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_448_, 5, v_constMap_435_);
lean_ctor_set(v_reuseFailAlloc_448_, 6, v_constOrder_436_);
v___x_445_ = v_reuseFailAlloc_448_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_441_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___boxed(lean_object* v_ridx_450_, lean_object* v_r_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule(v_ridx_450_, v_r_451_, v_a_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst(lean_object* v_name_458_, lean_object* v_d_459_, lean_object* v_a_460_){
_start:
{
lean_object* v_stream_462_; lean_object* v_nameMap_463_; lean_object* v_levelMap_464_; lean_object* v_exprMap_465_; lean_object* v_recursorRuleMap_466_; lean_object* v_constMap_467_; lean_object* v_constOrder_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_488_; 
v_stream_462_ = lean_ctor_get(v_a_460_, 0);
v_nameMap_463_ = lean_ctor_get(v_a_460_, 1);
v_levelMap_464_ = lean_ctor_get(v_a_460_, 2);
v_exprMap_465_ = lean_ctor_get(v_a_460_, 3);
v_recursorRuleMap_466_ = lean_ctor_get(v_a_460_, 4);
v_constMap_467_ = lean_ctor_get(v_a_460_, 5);
v_constOrder_468_ = lean_ctor_get(v_a_460_, 6);
v_isSharedCheck_488_ = !lean_is_exclusive(v_a_460_);
if (v_isSharedCheck_488_ == 0)
{
v___x_470_ = v_a_460_;
v_isShared_471_ = v_isSharedCheck_488_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_constOrder_468_);
lean_inc(v_constMap_467_);
lean_inc(v_recursorRuleMap_466_);
lean_inc(v_exprMap_465_);
lean_inc(v_levelMap_464_);
lean_inc(v_nameMap_463_);
lean_inc(v_stream_462_);
lean_dec(v_a_460_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_488_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_472_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0));
v___x_473_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1));
lean_inc(v_name_458_);
v___x_474_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_472_, v___x_473_, v_constMap_467_, v_name_458_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_475_ = lean_box(0);
lean_inc(v_name_458_);
v___x_476_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_472_, v___x_473_, v_constMap_467_, v_name_458_, v_d_459_);
v___x_477_ = lean_array_push(v_constOrder_468_, v_name_458_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 6, v___x_477_);
lean_ctor_set(v___x_470_, 5, v___x_476_);
v___x_479_ = v___x_470_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_stream_462_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_nameMap_463_);
lean_ctor_set(v_reuseFailAlloc_482_, 2, v_levelMap_464_);
lean_ctor_set(v_reuseFailAlloc_482_, 3, v_exprMap_465_);
lean_ctor_set(v_reuseFailAlloc_482_, 4, v_recursorRuleMap_466_);
lean_ctor_set(v_reuseFailAlloc_482_, 5, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_482_, 6, v___x_477_);
v___x_479_ = v_reuseFailAlloc_482_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_475_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
lean_del_object(v___x_470_);
lean_dec_ref(v_constOrder_468_);
lean_dec_ref(v_constMap_467_);
lean_dec_ref(v_recursorRuleMap_466_);
lean_dec_ref(v_exprMap_465_);
lean_dec_ref(v_levelMap_464_);
lean_dec_ref(v_nameMap_463_);
lean_dec_ref(v_stream_462_);
lean_dec_ref(v_d_459_);
v___x_483_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_484_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_458_, v___x_474_);
v___x_485_ = lean_string_append(v___x_483_, v___x_484_);
lean_dec_ref(v___x_484_);
v___x_486_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
v___x_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___boxed(lean_object* v_name_489_, lean_object* v_d_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addConst(v_name_489_, v_d_490_, v_a_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj(lean_object* v_line_498_, lean_object* v_a_499_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2));
v___x_505_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_504_, v_line_498_);
if (lean_obj_tag(v___x_505_) == 1)
{
lean_object* v_a_506_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref_known(v___x_505_, 1);
if (lean_obj_tag(v_a_506_) == 5)
{
lean_object* v_kvPairs_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_515_; 
v_kvPairs_507_ = lean_ctor_get(v_a_506_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v_a_506_);
if (v_isSharedCheck_515_ == 0)
{
v___x_509_ = v_a_506_;
v_isShared_510_ = v_isSharedCheck_515_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_kvPairs_507_);
lean_dec(v_a_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_515_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v_kvPairs_507_);
lean_ctor_set(v___x_511_, 1, v_a_499_);
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 0);
lean_ctor_set(v___x_509_, 0, v___x_511_);
v___x_513_ = v___x_509_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
else
{
lean_dec(v_a_506_);
lean_dec_ref(v_a_499_);
goto v___jp_501_;
}
}
else
{
lean_dec_ref(v___x_505_);
lean_dec_ref(v_a_499_);
goto v___jp_501_;
}
v___jp_501_:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1));
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___boxed(lean_object* v_line_516_, lean_object* v_a_517_, lean_object* v_a_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj(v_line_516_, v_a_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(lean_object* v_a_520_, lean_object* v_x_521_){
_start:
{
if (lean_obj_tag(v_x_521_) == 0)
{
lean_object* v___x_522_; 
v___x_522_ = lean_box(0);
return v___x_522_;
}
else
{
lean_object* v_key_523_; lean_object* v_value_524_; lean_object* v_tail_525_; uint8_t v___x_526_; 
v_key_523_ = lean_ctor_get(v_x_521_, 0);
v_value_524_ = lean_ctor_get(v_x_521_, 1);
v_tail_525_ = lean_ctor_get(v_x_521_, 2);
v___x_526_ = lean_nat_dec_eq(v_key_523_, v_a_520_);
if (v___x_526_ == 0)
{
v_x_521_ = v_tail_525_;
goto _start;
}
else
{
lean_object* v___x_528_; 
lean_inc(v_value_524_);
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v_value_524_);
return v___x_528_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg___boxed(lean_object* v_a_529_, lean_object* v_x_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(v_a_529_, v_x_530_);
lean_dec(v_x_530_);
lean_dec(v_a_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(lean_object* v_m_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_buckets_534_; lean_object* v___x_535_; uint64_t v___x_536_; uint64_t v___x_537_; uint64_t v___x_538_; uint64_t v_fold_539_; uint64_t v___x_540_; uint64_t v___x_541_; uint64_t v___x_542_; size_t v___x_543_; size_t v___x_544_; size_t v___x_545_; size_t v___x_546_; size_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_buckets_534_ = lean_ctor_get(v_m_532_, 1);
v___x_535_ = lean_array_get_size(v_buckets_534_);
v___x_536_ = lean_uint64_of_nat(v_a_533_);
v___x_537_ = 32ULL;
v___x_538_ = lean_uint64_shift_right(v___x_536_, v___x_537_);
v_fold_539_ = lean_uint64_xor(v___x_536_, v___x_538_);
v___x_540_ = 16ULL;
v___x_541_ = lean_uint64_shift_right(v_fold_539_, v___x_540_);
v___x_542_ = lean_uint64_xor(v_fold_539_, v___x_541_);
v___x_543_ = lean_uint64_to_usize(v___x_542_);
v___x_544_ = lean_usize_of_nat(v___x_535_);
v___x_545_ = ((size_t)1ULL);
v___x_546_ = lean_usize_sub(v___x_544_, v___x_545_);
v___x_547_ = lean_usize_land(v___x_543_, v___x_546_);
v___x_548_ = lean_array_uget_borrowed(v_buckets_534_, v___x_547_);
v___x_549_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(v_a_533_, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg___boxed(lean_object* v_m_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_m_550_, v_a_551_);
lean_dec(v_a_551_);
lean_dec_ref(v_m_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(lean_object* v_t_553_, lean_object* v_k_554_){
_start:
{
if (lean_obj_tag(v_t_553_) == 0)
{
lean_object* v_k_555_; lean_object* v_v_556_; lean_object* v_l_557_; lean_object* v_r_558_; uint8_t v___x_559_; 
v_k_555_ = lean_ctor_get(v_t_553_, 1);
v_v_556_ = lean_ctor_get(v_t_553_, 2);
v_l_557_ = lean_ctor_get(v_t_553_, 3);
v_r_558_ = lean_ctor_get(v_t_553_, 4);
v___x_559_ = lean_string_compare(v_k_554_, v_k_555_);
switch(v___x_559_)
{
case 0:
{
v_t_553_ = v_l_557_;
goto _start;
}
case 1:
{
lean_object* v___x_561_; 
lean_inc(v_v_556_);
v___x_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_561_, 0, v_v_556_);
return v___x_561_;
}
default: 
{
v_t_553_ = v_r_558_;
goto _start;
}
}
}
else
{
lean_object* v___x_563_; 
v___x_563_ = lean_box(0);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg___boxed(lean_object* v_t_564_, lean_object* v_k_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_t_564_, v_k_565_);
lean_dec_ref(v_k_565_);
lean_dec(v_t_564_);
return v_res_566_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3(void){
_start:
{
lean_object* v_natZero_571_; lean_object* v_intZero_572_; 
v_natZero_571_ = lean_unsigned_to_nat(0u);
v_intZero_572_ = lean_nat_to_int(v_natZero_571_);
return v_intZero_572_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(lean_object* v_json_574_, lean_object* v_a_575_){
_start:
{
if (lean_obj_tag(v_json_574_) == 5)
{
lean_object* v_kvPairs_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v_kvPairs_583_ = lean_ctor_get(v_json_574_, 0);
v___x_584_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2));
v___x_585_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_583_, v___x_584_);
if (lean_obj_tag(v___x_585_) == 1)
{
lean_object* v_val_586_; 
v_val_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_val_586_);
lean_dec_ref_known(v___x_585_, 1);
if (lean_obj_tag(v_val_586_) == 2)
{
lean_object* v_n_587_; lean_object* v_mantissa_588_; lean_object* v_exponent_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_633_; 
v_n_587_ = lean_ctor_get(v_val_586_, 0);
lean_inc_ref(v_n_587_);
lean_dec_ref_known(v_val_586_, 1);
v_mantissa_588_ = lean_ctor_get(v_n_587_, 0);
v_exponent_589_ = lean_ctor_get(v_n_587_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_n_587_);
if (v_isSharedCheck_633_ == 0)
{
v___x_591_ = v_n_587_;
v_isShared_592_ = v_isSharedCheck_633_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_exponent_589_);
lean_inc(v_mantissa_588_);
lean_dec(v_n_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_633_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v_natZero_593_; lean_object* v_intZero_594_; uint8_t v_isNeg_595_; 
v_natZero_593_ = lean_unsigned_to_nat(0u);
v_intZero_594_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_595_ = lean_int_dec_lt(v_mantissa_588_, v_intZero_594_);
if (v_isNeg_595_ == 0)
{
uint8_t v___x_596_; 
v___x_596_ = lean_nat_dec_eq(v_exponent_589_, v_natZero_593_);
lean_dec(v_exponent_589_);
if (v___x_596_ == 0)
{
lean_del_object(v___x_591_);
lean_dec(v_mantissa_588_);
lean_dec_ref(v_a_575_);
goto v___jp_577_;
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4));
v___x_598_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_583_, v___x_597_);
if (lean_obj_tag(v___x_598_) == 1)
{
lean_object* v_val_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_632_; 
v_val_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_632_ == 0)
{
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_632_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_val_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_632_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
if (lean_obj_tag(v_val_599_) == 3)
{
lean_object* v_s_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_631_; 
v_s_603_ = lean_ctor_get(v_val_599_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_val_599_);
if (v_isSharedCheck_631_ == 0)
{
v___x_605_ = v_val_599_;
v_isShared_606_ = v_isSharedCheck_631_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_s_603_);
lean_dec(v_val_599_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_631_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v_nameMap_607_; lean_object* v_a_608_; lean_object* v___x_609_; 
v_nameMap_607_ = lean_ctor_get(v_a_575_, 1);
v_a_608_ = lean_nat_abs(v_mantissa_588_);
lean_dec(v_mantissa_588_);
v___x_609_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_607_, v_a_608_);
if (lean_obj_tag(v___x_609_) == 1)
{
lean_object* v_val_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_a_608_);
lean_del_object(v___x_605_);
lean_del_object(v___x_601_);
v_val_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_621_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_621_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_val_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_621_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = l_Lean_Name_str___override(v_val_610_, v_s_603_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 1, v_a_575_);
lean_ctor_set(v___x_591_, 0, v___x_614_);
v___x_616_ = v___x_591_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_614_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_a_575_);
v___x_616_ = v_reuseFailAlloc_620_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_618_; 
if (v_isShared_613_ == 0)
{
lean_ctor_set_tag(v___x_612_, 0);
lean_ctor_set(v___x_612_, 0, v___x_616_);
v___x_618_ = v___x_612_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
lean_dec(v___x_609_);
lean_dec_ref(v_s_603_);
lean_del_object(v___x_591_);
lean_dec_ref(v_a_575_);
v___x_622_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_623_ = l_Nat_reprFast(v_a_608_);
v___x_624_ = lean_string_append(v___x_622_, v___x_623_);
lean_dec_ref(v___x_623_);
if (v_isShared_606_ == 0)
{
lean_ctor_set_tag(v___x_605_, 18);
lean_ctor_set(v___x_605_, 0, v___x_624_);
v___x_626_ = v___x_605_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_630_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
lean_object* v___x_628_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_626_);
v___x_628_ = v___x_601_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
else
{
lean_del_object(v___x_601_);
lean_dec(v_val_599_);
lean_del_object(v___x_591_);
lean_dec(v_mantissa_588_);
lean_dec_ref(v_a_575_);
goto v___jp_580_;
}
}
}
else
{
lean_dec(v___x_598_);
lean_del_object(v___x_591_);
lean_dec(v_mantissa_588_);
lean_dec_ref(v_a_575_);
goto v___jp_580_;
}
}
}
else
{
lean_del_object(v___x_591_);
lean_dec(v_exponent_589_);
lean_dec(v_mantissa_588_);
lean_dec_ref(v_a_575_);
goto v___jp_577_;
}
}
}
else
{
lean_dec(v_val_586_);
lean_dec_ref(v_a_575_);
goto v___jp_577_;
}
}
else
{
lean_dec(v___x_585_);
lean_dec_ref(v_a_575_);
goto v___jp_577_;
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec_ref(v_a_575_);
v___x_634_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
return v___x_635_;
}
v___jp_577_:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
v___jp_580_:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___boxed(lean_object* v_json_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(v_json_636_, v_a_637_);
lean_dec(v_json_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0(lean_object* v_00_u03b4_640_, lean_object* v_t_641_, lean_object* v_k_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_t_641_, v_k_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___boxed(lean_object* v_00_u03b4_644_, lean_object* v_t_645_, lean_object* v_k_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0(v_00_u03b4_644_, v_t_645_, v_k_646_);
lean_dec_ref(v_k_646_);
lean_dec(v_t_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1(lean_object* v_00_u03b2_648_, lean_object* v_m_649_, lean_object* v_a_650_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_m_649_, v_a_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___boxed(lean_object* v_00_u03b2_652_, lean_object* v_m_653_, lean_object* v_a_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1(v_00_u03b2_652_, v_m_653_, v_a_654_);
lean_dec(v_a_654_);
lean_dec_ref(v_m_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1(lean_object* v_00_u03b2_656_, lean_object* v_a_657_, lean_object* v_x_658_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(v_a_657_, v_x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___boxed(lean_object* v_00_u03b2_660_, lean_object* v_a_661_, lean_object* v_x_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1(v_00_u03b2_660_, v_a_661_, v_x_662_);
lean_dec(v_x_662_);
lean_dec(v_a_661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(lean_object* v_json_668_, lean_object* v_a_669_){
_start:
{
if (lean_obj_tag(v_json_668_) == 5)
{
lean_object* v_kvPairs_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_kvPairs_677_ = lean_ctor_get(v_json_668_, 0);
v___x_678_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2));
v___x_679_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_677_, v___x_678_);
if (lean_obj_tag(v___x_679_) == 1)
{
lean_object* v_val_680_; 
v_val_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_val_680_);
lean_dec_ref_known(v___x_679_, 1);
if (lean_obj_tag(v_val_680_) == 2)
{
lean_object* v_n_681_; lean_object* v_mantissa_682_; lean_object* v_exponent_683_; lean_object* v_natZero_684_; lean_object* v_intZero_685_; uint8_t v_isNeg_686_; 
v_n_681_ = lean_ctor_get(v_val_680_, 0);
lean_inc_ref(v_n_681_);
lean_dec_ref_known(v_val_680_, 1);
v_mantissa_682_ = lean_ctor_get(v_n_681_, 0);
lean_inc(v_mantissa_682_);
v_exponent_683_ = lean_ctor_get(v_n_681_, 1);
lean_inc(v_exponent_683_);
lean_dec_ref(v_n_681_);
v_natZero_684_ = lean_unsigned_to_nat(0u);
v_intZero_685_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_686_ = lean_int_dec_lt(v_mantissa_682_, v_intZero_685_);
if (v_isNeg_686_ == 0)
{
uint8_t v___x_687_; 
v___x_687_ = lean_nat_dec_eq(v_exponent_683_, v_natZero_684_);
lean_dec(v_exponent_683_);
if (v___x_687_ == 0)
{
lean_dec(v_mantissa_682_);
lean_dec_ref(v_a_669_);
goto v___jp_671_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2));
v___x_689_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_677_, v___x_688_);
if (lean_obj_tag(v___x_689_) == 1)
{
lean_object* v_val_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_732_; 
v_val_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_732_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_732_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_val_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_732_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
if (lean_obj_tag(v_val_690_) == 2)
{
lean_object* v_n_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_731_; 
v_n_694_ = lean_ctor_get(v_val_690_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_val_690_);
if (v_isSharedCheck_731_ == 0)
{
v___x_696_ = v_val_690_;
v_isShared_697_ = v_isSharedCheck_731_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_n_694_);
lean_dec(v_val_690_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_731_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_mantissa_698_; lean_object* v_exponent_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_730_; 
v_mantissa_698_ = lean_ctor_get(v_n_694_, 0);
v_exponent_699_ = lean_ctor_get(v_n_694_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_n_694_);
if (v_isSharedCheck_730_ == 0)
{
v___x_701_ = v_n_694_;
v_isShared_702_ = v_isSharedCheck_730_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_exponent_699_);
lean_inc(v_mantissa_698_);
lean_dec(v_n_694_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_730_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
uint8_t v_isNeg_703_; 
v_isNeg_703_ = lean_int_dec_lt(v_mantissa_698_, v_intZero_685_);
if (v_isNeg_703_ == 0)
{
uint8_t v___x_704_; 
v___x_704_ = lean_nat_dec_eq(v_exponent_699_, v_natZero_684_);
lean_dec(v_exponent_699_);
if (v___x_704_ == 0)
{
lean_del_object(v___x_701_);
lean_dec(v_mantissa_698_);
lean_del_object(v___x_696_);
lean_del_object(v___x_692_);
lean_dec(v_mantissa_682_);
lean_dec_ref(v_a_669_);
goto v___jp_674_;
}
else
{
lean_object* v_nameMap_705_; lean_object* v_a_706_; lean_object* v___x_707_; 
v_nameMap_705_ = lean_ctor_get(v_a_669_, 1);
v_a_706_ = lean_nat_abs(v_mantissa_682_);
lean_dec(v_mantissa_682_);
v___x_707_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_705_, v_a_706_);
if (lean_obj_tag(v___x_707_) == 1)
{
lean_object* v_val_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_a_706_);
lean_del_object(v___x_696_);
lean_del_object(v___x_692_);
v_val_708_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_720_ == 0)
{
v___x_710_ = v___x_707_;
v_isShared_711_ = v_isSharedCheck_720_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_val_708_);
lean_dec(v___x_707_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_720_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v_a_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v_a_712_ = lean_nat_abs(v_mantissa_698_);
lean_dec(v_mantissa_698_);
v___x_713_ = l_Lean_Name_num___override(v_val_708_, v_a_712_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v_a_669_);
lean_ctor_set(v___x_701_, 0, v___x_713_);
v___x_715_ = v___x_701_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_a_669_);
v___x_715_ = v_reuseFailAlloc_719_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_717_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set_tag(v___x_710_, 0);
lean_ctor_set(v___x_710_, 0, v___x_715_);
v___x_717_ = v___x_710_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_715_);
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
else
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
lean_dec(v___x_707_);
lean_del_object(v___x_701_);
lean_dec(v_mantissa_698_);
lean_dec_ref(v_a_669_);
v___x_721_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_722_ = l_Nat_reprFast(v_a_706_);
v___x_723_ = lean_string_append(v___x_721_, v___x_722_);
lean_dec_ref(v___x_722_);
if (v_isShared_697_ == 0)
{
lean_ctor_set_tag(v___x_696_, 18);
lean_ctor_set(v___x_696_, 0, v___x_723_);
v___x_725_ = v___x_696_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_723_);
v___x_725_ = v_reuseFailAlloc_729_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
lean_object* v___x_727_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_725_);
v___x_727_ = v___x_692_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_725_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
else
{
lean_del_object(v___x_701_);
lean_dec(v_exponent_699_);
lean_dec(v_mantissa_698_);
lean_del_object(v___x_696_);
lean_del_object(v___x_692_);
lean_dec(v_mantissa_682_);
lean_dec_ref(v_a_669_);
goto v___jp_674_;
}
}
}
}
else
{
lean_del_object(v___x_692_);
lean_dec(v_val_690_);
lean_dec(v_mantissa_682_);
lean_dec_ref(v_a_669_);
goto v___jp_674_;
}
}
}
else
{
lean_dec(v___x_689_);
lean_dec(v_mantissa_682_);
lean_dec_ref(v_a_669_);
goto v___jp_674_;
}
}
}
else
{
lean_dec(v_exponent_683_);
lean_dec(v_mantissa_682_);
lean_dec_ref(v_a_669_);
goto v___jp_671_;
}
}
else
{
lean_dec(v_val_680_);
lean_dec_ref(v_a_669_);
goto v___jp_671_;
}
}
else
{
lean_dec(v___x_679_);
lean_dec_ref(v_a_669_);
goto v___jp_671_;
}
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; 
lean_dec_ref(v_a_669_);
v___x_733_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1));
v___x_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
return v___x_734_;
}
v___jp_671_:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
v___jp_674_:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1));
v___x_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
return v___x_676_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___boxed(lean_object* v_json_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(v_json_735_, v_a_736_);
lean_dec(v_json_735_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(lean_object* v_json_742_, lean_object* v_a_743_){
_start:
{
if (lean_obj_tag(v_json_742_) == 2)
{
lean_object* v_n_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_784_; 
v_n_748_ = lean_ctor_get(v_json_742_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v_json_742_);
if (v_isSharedCheck_784_ == 0)
{
v___x_750_ = v_json_742_;
v_isShared_751_ = v_isSharedCheck_784_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_n_748_);
lean_dec(v_json_742_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_784_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_mantissa_752_; lean_object* v_exponent_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_783_; 
v_mantissa_752_ = lean_ctor_get(v_n_748_, 0);
v_exponent_753_ = lean_ctor_get(v_n_748_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_n_748_);
if (v_isSharedCheck_783_ == 0)
{
v___x_755_ = v_n_748_;
v_isShared_756_ = v_isSharedCheck_783_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_exponent_753_);
lean_inc(v_mantissa_752_);
lean_dec(v_n_748_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_783_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v_natZero_757_; lean_object* v_intZero_758_; uint8_t v_isNeg_759_; 
v_natZero_757_ = lean_unsigned_to_nat(0u);
v_intZero_758_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_759_ = lean_int_dec_lt(v_mantissa_752_, v_intZero_758_);
if (v_isNeg_759_ == 0)
{
uint8_t v___x_760_; 
v___x_760_ = lean_nat_dec_eq(v_exponent_753_, v_natZero_757_);
lean_dec(v_exponent_753_);
if (v___x_760_ == 0)
{
lean_del_object(v___x_755_);
lean_dec(v_mantissa_752_);
lean_del_object(v___x_750_);
lean_dec_ref(v_a_743_);
goto v___jp_745_;
}
else
{
lean_object* v_levelMap_761_; lean_object* v_a_762_; lean_object* v___x_763_; 
v_levelMap_761_ = lean_ctor_get(v_a_743_, 2);
v_a_762_ = lean_nat_abs(v_mantissa_752_);
lean_dec(v_mantissa_752_);
v___x_763_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_761_, v_a_762_);
if (lean_obj_tag(v___x_763_) == 1)
{
lean_object* v_val_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_a_762_);
lean_del_object(v___x_750_);
v_val_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_775_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_775_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_val_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_775_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_770_; 
v___x_768_ = l_Lean_Level_succ___override(v_val_764_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 1, v_a_743_);
lean_ctor_set(v___x_755_, 0, v___x_768_);
v___x_770_ = v___x_755_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_a_743_);
v___x_770_ = v_reuseFailAlloc_774_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_772_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v___x_770_);
v___x_772_ = v___x_766_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
else
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_780_; 
lean_dec(v___x_763_);
lean_del_object(v___x_755_);
lean_dec_ref(v_a_743_);
v___x_776_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_777_ = l_Nat_reprFast(v_a_762_);
v___x_778_ = lean_string_append(v___x_776_, v___x_777_);
lean_dec_ref(v___x_777_);
if (v_isShared_751_ == 0)
{
lean_ctor_set_tag(v___x_750_, 18);
lean_ctor_set(v___x_750_, 0, v___x_778_);
v___x_780_ = v___x_750_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_778_);
v___x_780_ = v_reuseFailAlloc_782_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_781_; 
v___x_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
return v___x_781_;
}
}
}
}
else
{
lean_del_object(v___x_755_);
lean_dec(v_exponent_753_);
lean_dec(v_mantissa_752_);
lean_del_object(v___x_750_);
lean_dec_ref(v_a_743_);
goto v___jp_745_;
}
}
}
}
else
{
lean_dec_ref(v_a_743_);
lean_dec(v_json_742_);
goto v___jp_745_;
}
v___jp_745_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1));
v___x_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___boxed(lean_object* v_json_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(v_json_785_, v_a_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(lean_object* v_json_792_, lean_object* v_a_793_){
_start:
{
if (lean_obj_tag(v_json_792_) == 4)
{
lean_object* v_elems_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_elems_798_ = lean_ctor_get(v_json_792_, 0);
v___x_799_ = lean_array_get_size(v_elems_798_);
v___x_800_ = lean_unsigned_to_nat(2u);
v___x_801_ = lean_nat_dec_eq(v___x_799_, v___x_800_);
if (v___x_801_ == 0)
{
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_fget(v_elems_798_, v___x_802_);
if (lean_obj_tag(v___x_803_) == 2)
{
lean_object* v_n_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_868_; 
v_n_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_868_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_868_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_n_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_868_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_mantissa_808_; lean_object* v_exponent_809_; lean_object* v_intZero_810_; uint8_t v_isNeg_811_; 
v_mantissa_808_ = lean_ctor_get(v_n_804_, 0);
lean_inc(v_mantissa_808_);
v_exponent_809_ = lean_ctor_get(v_n_804_, 1);
lean_inc(v_exponent_809_);
lean_dec_ref(v_n_804_);
v_intZero_810_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_811_ = lean_int_dec_lt(v_mantissa_808_, v_intZero_810_);
if (v_isNeg_811_ == 0)
{
uint8_t v___x_812_; 
v___x_812_ = lean_nat_dec_eq(v_exponent_809_, v___x_802_);
lean_dec(v_exponent_809_);
if (v___x_812_ == 0)
{
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
else
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = lean_unsigned_to_nat(1u);
v___x_814_ = lean_array_fget(v_elems_798_, v___x_813_);
if (lean_obj_tag(v___x_814_) == 2)
{
lean_object* v_n_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_867_; 
v_n_815_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_867_ == 0)
{
v___x_817_ = v___x_814_;
v_isShared_818_ = v_isSharedCheck_867_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_n_815_);
lean_dec(v___x_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_867_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v_mantissa_819_; lean_object* v_exponent_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_866_; 
v_mantissa_819_ = lean_ctor_get(v_n_815_, 0);
v_exponent_820_ = lean_ctor_get(v_n_815_, 1);
v_isSharedCheck_866_ = !lean_is_exclusive(v_n_815_);
if (v_isSharedCheck_866_ == 0)
{
v___x_822_ = v_n_815_;
v_isShared_823_ = v_isSharedCheck_866_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_exponent_820_);
lean_inc(v_mantissa_819_);
lean_dec(v_n_815_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_866_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
uint8_t v_isNeg_824_; 
v_isNeg_824_ = lean_int_dec_lt(v_mantissa_819_, v_intZero_810_);
if (v_isNeg_824_ == 0)
{
uint8_t v___x_825_; 
v___x_825_ = lean_nat_dec_eq(v_exponent_820_, v___x_802_);
lean_dec(v_exponent_820_);
if (v___x_825_ == 0)
{
lean_del_object(v___x_822_);
lean_dec(v_mantissa_819_);
lean_del_object(v___x_817_);
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
else
{
lean_object* v_levelMap_826_; lean_object* v_a_827_; lean_object* v___x_828_; 
v_levelMap_826_ = lean_ctor_get(v_a_793_, 2);
v_a_827_ = lean_nat_abs(v_mantissa_808_);
lean_dec(v_mantissa_808_);
v___x_828_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_826_, v_a_827_);
if (lean_obj_tag(v___x_828_) == 1)
{
lean_object* v_val_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_856_; 
lean_dec(v_a_827_);
lean_del_object(v___x_806_);
v_val_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_856_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_856_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_val_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_856_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v_a_833_; lean_object* v___x_834_; 
v_a_833_ = lean_nat_abs(v_mantissa_819_);
lean_dec(v_mantissa_819_);
v___x_834_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_826_, v_a_833_);
if (lean_obj_tag(v___x_834_) == 1)
{
lean_object* v_val_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_846_; 
lean_dec(v_a_833_);
lean_del_object(v___x_831_);
lean_del_object(v___x_817_);
v_val_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_846_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_846_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_val_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_846_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = l_Lean_Level_max___override(v_val_829_, v_val_835_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v_a_793_);
lean_ctor_set(v___x_822_, 0, v___x_839_);
v___x_841_ = v___x_822_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_839_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_a_793_);
v___x_841_ = v_reuseFailAlloc_845_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_843_; 
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 0);
lean_ctor_set(v___x_837_, 0, v___x_841_);
v___x_843_ = v___x_837_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_851_; 
lean_dec(v___x_834_);
lean_dec(v_val_829_);
lean_del_object(v___x_822_);
lean_dec_ref(v_a_793_);
v___x_847_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_848_ = l_Nat_reprFast(v_a_833_);
v___x_849_ = lean_string_append(v___x_847_, v___x_848_);
lean_dec_ref(v___x_848_);
if (v_isShared_832_ == 0)
{
lean_ctor_set_tag(v___x_831_, 18);
lean_ctor_set(v___x_831_, 0, v___x_849_);
v___x_851_ = v___x_831_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_849_);
v___x_851_ = v_reuseFailAlloc_855_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_853_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 1);
lean_ctor_set(v___x_817_, 0, v___x_851_);
v___x_853_ = v___x_817_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
lean_dec(v___x_828_);
lean_del_object(v___x_822_);
lean_dec(v_mantissa_819_);
lean_dec_ref(v_a_793_);
v___x_857_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_858_ = l_Nat_reprFast(v_a_827_);
v___x_859_ = lean_string_append(v___x_857_, v___x_858_);
lean_dec_ref(v___x_858_);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 18);
lean_ctor_set(v___x_817_, 0, v___x_859_);
v___x_861_ = v___x_817_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_865_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_863_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 1);
lean_ctor_set(v___x_806_, 0, v___x_861_);
v___x_863_ = v___x_806_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
else
{
lean_del_object(v___x_822_);
lean_dec(v_exponent_820_);
lean_dec(v_mantissa_819_);
lean_del_object(v___x_817_);
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
}
}
}
else
{
lean_dec(v___x_814_);
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
}
}
else
{
lean_dec(v_exponent_809_);
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
}
}
else
{
lean_dec(v___x_803_);
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
}
}
else
{
lean_dec_ref(v_a_793_);
goto v___jp_795_;
}
v___jp_795_:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1));
v___x_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___boxed(lean_object* v_json_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(v_json_869_, v_a_870_);
lean_dec(v_json_869_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(lean_object* v_json_876_, lean_object* v_a_877_){
_start:
{
if (lean_obj_tag(v_json_876_) == 4)
{
lean_object* v_elems_882_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v_elems_882_ = lean_ctor_get(v_json_876_, 0);
v___x_883_ = lean_array_get_size(v_elems_882_);
v___x_884_ = lean_unsigned_to_nat(2u);
v___x_885_ = lean_nat_dec_eq(v___x_883_, v___x_884_);
if (v___x_885_ == 0)
{
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
else
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lean_array_fget(v_elems_882_, v___x_886_);
if (lean_obj_tag(v___x_887_) == 2)
{
lean_object* v_n_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_952_; 
v_n_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_952_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_952_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_n_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_952_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v_mantissa_892_; lean_object* v_exponent_893_; lean_object* v_intZero_894_; uint8_t v_isNeg_895_; 
v_mantissa_892_ = lean_ctor_get(v_n_888_, 0);
lean_inc(v_mantissa_892_);
v_exponent_893_ = lean_ctor_get(v_n_888_, 1);
lean_inc(v_exponent_893_);
lean_dec_ref(v_n_888_);
v_intZero_894_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_895_ = lean_int_dec_lt(v_mantissa_892_, v_intZero_894_);
if (v_isNeg_895_ == 0)
{
uint8_t v___x_896_; 
v___x_896_ = lean_nat_dec_eq(v_exponent_893_, v___x_886_);
lean_dec(v_exponent_893_);
if (v___x_896_ == 0)
{
lean_dec(v_mantissa_892_);
lean_del_object(v___x_890_);
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_unsigned_to_nat(1u);
v___x_898_ = lean_array_fget(v_elems_882_, v___x_897_);
if (lean_obj_tag(v___x_898_) == 2)
{
lean_object* v_n_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_951_; 
v_n_899_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_951_ == 0)
{
v___x_901_ = v___x_898_;
v_isShared_902_ = v_isSharedCheck_951_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_n_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_951_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v_mantissa_903_; lean_object* v_exponent_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_950_; 
v_mantissa_903_ = lean_ctor_get(v_n_899_, 0);
v_exponent_904_ = lean_ctor_get(v_n_899_, 1);
v_isSharedCheck_950_ = !lean_is_exclusive(v_n_899_);
if (v_isSharedCheck_950_ == 0)
{
v___x_906_ = v_n_899_;
v_isShared_907_ = v_isSharedCheck_950_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_exponent_904_);
lean_inc(v_mantissa_903_);
lean_dec(v_n_899_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_950_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
uint8_t v_isNeg_908_; 
v_isNeg_908_ = lean_int_dec_lt(v_mantissa_903_, v_intZero_894_);
if (v_isNeg_908_ == 0)
{
uint8_t v___x_909_; 
v___x_909_ = lean_nat_dec_eq(v_exponent_904_, v___x_886_);
lean_dec(v_exponent_904_);
if (v___x_909_ == 0)
{
lean_del_object(v___x_906_);
lean_dec(v_mantissa_903_);
lean_del_object(v___x_901_);
lean_dec(v_mantissa_892_);
lean_del_object(v___x_890_);
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
else
{
lean_object* v_levelMap_910_; lean_object* v_a_911_; lean_object* v___x_912_; 
v_levelMap_910_ = lean_ctor_get(v_a_877_, 2);
v_a_911_ = lean_nat_abs(v_mantissa_892_);
lean_dec(v_mantissa_892_);
v___x_912_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_910_, v_a_911_);
if (lean_obj_tag(v___x_912_) == 1)
{
lean_object* v_val_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_a_911_);
lean_del_object(v___x_890_);
v_val_913_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_940_ == 0)
{
v___x_915_ = v___x_912_;
v_isShared_916_ = v_isSharedCheck_940_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_val_913_);
lean_dec(v___x_912_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_940_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v_a_917_; lean_object* v___x_918_; 
v_a_917_ = lean_nat_abs(v_mantissa_903_);
lean_dec(v_mantissa_903_);
v___x_918_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_910_, v_a_917_);
if (lean_obj_tag(v___x_918_) == 1)
{
lean_object* v_val_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_a_917_);
lean_del_object(v___x_915_);
lean_del_object(v___x_901_);
v_val_919_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_930_ == 0)
{
v___x_921_ = v___x_918_;
v_isShared_922_ = v_isSharedCheck_930_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_val_919_);
lean_dec(v___x_918_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_930_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_923_ = l_Lean_Level_imax___override(v_val_913_, v_val_919_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v_a_877_);
lean_ctor_set(v___x_906_, 0, v___x_923_);
v___x_925_ = v___x_906_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_a_877_);
v___x_925_ = v_reuseFailAlloc_929_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_927_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set_tag(v___x_921_, 0);
lean_ctor_set(v___x_921_, 0, v___x_925_);
v___x_927_ = v___x_921_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
lean_dec(v___x_918_);
lean_dec(v_val_913_);
lean_del_object(v___x_906_);
lean_dec_ref(v_a_877_);
v___x_931_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_932_ = l_Nat_reprFast(v_a_917_);
v___x_933_ = lean_string_append(v___x_931_, v___x_932_);
lean_dec_ref(v___x_932_);
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 18);
lean_ctor_set(v___x_915_, 0, v___x_933_);
v___x_935_ = v___x_915_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_939_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_937_; 
if (v_isShared_902_ == 0)
{
lean_ctor_set_tag(v___x_901_, 1);
lean_ctor_set(v___x_901_, 0, v___x_935_);
v___x_937_ = v___x_901_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
lean_dec(v___x_912_);
lean_del_object(v___x_906_);
lean_dec(v_mantissa_903_);
lean_dec_ref(v_a_877_);
v___x_941_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_942_ = l_Nat_reprFast(v_a_911_);
v___x_943_ = lean_string_append(v___x_941_, v___x_942_);
lean_dec_ref(v___x_942_);
if (v_isShared_902_ == 0)
{
lean_ctor_set_tag(v___x_901_, 18);
lean_ctor_set(v___x_901_, 0, v___x_943_);
v___x_945_ = v___x_901_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_949_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_947_; 
if (v_isShared_891_ == 0)
{
lean_ctor_set_tag(v___x_890_, 1);
lean_ctor_set(v___x_890_, 0, v___x_945_);
v___x_947_ = v___x_890_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
else
{
lean_del_object(v___x_906_);
lean_dec(v_exponent_904_);
lean_dec(v_mantissa_903_);
lean_del_object(v___x_901_);
lean_dec(v_mantissa_892_);
lean_del_object(v___x_890_);
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
}
}
}
else
{
lean_dec(v___x_898_);
lean_dec(v_mantissa_892_);
lean_del_object(v___x_890_);
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
}
}
else
{
lean_dec(v_exponent_893_);
lean_dec(v_mantissa_892_);
lean_del_object(v___x_890_);
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
}
}
else
{
lean_dec(v___x_887_);
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
}
}
else
{
lean_dec_ref(v_a_877_);
goto v___jp_879_;
}
v___jp_879_:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1));
v___x_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
return v___x_881_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___boxed(lean_object* v_json_953_, lean_object* v_a_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(v_json_953_, v_a_954_);
lean_dec(v_json_953_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(lean_object* v_json_960_, lean_object* v_a_961_){
_start:
{
if (lean_obj_tag(v_json_960_) == 2)
{
lean_object* v_n_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1002_; 
v_n_966_ = lean_ctor_get(v_json_960_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_json_960_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_968_ = v_json_960_;
v_isShared_969_ = v_isSharedCheck_1002_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_n_966_);
lean_dec(v_json_960_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1002_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v_mantissa_970_; lean_object* v_exponent_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_1001_; 
v_mantissa_970_ = lean_ctor_get(v_n_966_, 0);
v_exponent_971_ = lean_ctor_get(v_n_966_, 1);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_n_966_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_973_ = v_n_966_;
v_isShared_974_ = v_isSharedCheck_1001_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_exponent_971_);
lean_inc(v_mantissa_970_);
lean_dec(v_n_966_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_1001_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v_natZero_975_; lean_object* v_intZero_976_; uint8_t v_isNeg_977_; 
v_natZero_975_ = lean_unsigned_to_nat(0u);
v_intZero_976_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_977_ = lean_int_dec_lt(v_mantissa_970_, v_intZero_976_);
if (v_isNeg_977_ == 0)
{
uint8_t v___x_978_; 
v___x_978_ = lean_nat_dec_eq(v_exponent_971_, v_natZero_975_);
lean_dec(v_exponent_971_);
if (v___x_978_ == 0)
{
lean_del_object(v___x_973_);
lean_dec(v_mantissa_970_);
lean_del_object(v___x_968_);
lean_dec_ref(v_a_961_);
goto v___jp_963_;
}
else
{
lean_object* v_nameMap_979_; lean_object* v_a_980_; lean_object* v___x_981_; 
v_nameMap_979_ = lean_ctor_get(v_a_961_, 1);
v_a_980_ = lean_nat_abs(v_mantissa_970_);
lean_dec(v_mantissa_970_);
v___x_981_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_979_, v_a_980_);
if (lean_obj_tag(v___x_981_) == 1)
{
lean_object* v_val_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_993_; 
lean_dec(v_a_980_);
lean_del_object(v___x_968_);
v_val_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_993_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_993_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_val_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_993_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_986_ = l_Lean_Level_param___override(v_val_982_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 1, v_a_961_);
lean_ctor_set(v___x_973_, 0, v___x_986_);
v___x_988_ = v___x_973_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_a_961_);
v___x_988_ = v_reuseFailAlloc_992_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_990_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 0);
lean_ctor_set(v___x_984_, 0, v___x_988_);
v___x_990_ = v___x_984_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
else
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
lean_dec(v___x_981_);
lean_del_object(v___x_973_);
lean_dec_ref(v_a_961_);
v___x_994_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_995_ = l_Nat_reprFast(v_a_980_);
v___x_996_ = lean_string_append(v___x_994_, v___x_995_);
lean_dec_ref(v___x_995_);
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 18);
lean_ctor_set(v___x_968_, 0, v___x_996_);
v___x_998_ = v___x_968_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_996_);
v___x_998_ = v_reuseFailAlloc_1000_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
return v___x_999_;
}
}
}
}
else
{
lean_del_object(v___x_973_);
lean_dec(v_exponent_971_);
lean_dec(v_mantissa_970_);
lean_del_object(v___x_968_);
lean_dec_ref(v_a_961_);
goto v___jp_963_;
}
}
}
}
else
{
lean_dec_ref(v_a_961_);
lean_dec(v_json_960_);
goto v___jp_963_;
}
v___jp_963_:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1));
v___x_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___boxed(lean_object* v_json_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(v_json_1003_, v_a_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(lean_object* v_json_1010_, lean_object* v_a_1011_){
_start:
{
if (lean_obj_tag(v_json_1010_) == 2)
{
lean_object* v_n_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1038_; 
v_n_1016_ = lean_ctor_get(v_json_1010_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_json_1010_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1018_ = v_json_1010_;
v_isShared_1019_ = v_isSharedCheck_1038_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_n_1016_);
lean_dec(v_json_1010_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1038_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v_mantissa_1020_; lean_object* v_exponent_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1037_; 
v_mantissa_1020_ = lean_ctor_get(v_n_1016_, 0);
v_exponent_1021_ = lean_ctor_get(v_n_1016_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_n_1016_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1023_ = v_n_1016_;
v_isShared_1024_ = v_isSharedCheck_1037_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_exponent_1021_);
lean_inc(v_mantissa_1020_);
lean_dec(v_n_1016_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1037_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v_natZero_1025_; lean_object* v_intZero_1026_; uint8_t v_isNeg_1027_; 
v_natZero_1025_ = lean_unsigned_to_nat(0u);
v_intZero_1026_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1027_ = lean_int_dec_lt(v_mantissa_1020_, v_intZero_1026_);
if (v_isNeg_1027_ == 0)
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_nat_dec_eq(v_exponent_1021_, v_natZero_1025_);
lean_dec(v_exponent_1021_);
if (v___x_1028_ == 0)
{
lean_del_object(v___x_1023_);
lean_dec(v_mantissa_1020_);
lean_del_object(v___x_1018_);
lean_dec_ref(v_a_1011_);
goto v___jp_1013_;
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1030_; lean_object* v___x_1032_; 
v_a_1029_ = lean_nat_abs(v_mantissa_1020_);
lean_dec(v_mantissa_1020_);
v___x_1030_ = l_Lean_Expr_bvar___override(v_a_1029_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 1, v_a_1011_);
lean_ctor_set(v___x_1023_, 0, v___x_1030_);
v___x_1032_ = v___x_1023_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_a_1011_);
v___x_1032_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1034_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set_tag(v___x_1018_, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1032_);
v___x_1034_ = v___x_1018_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_del_object(v___x_1023_);
lean_dec(v_exponent_1021_);
lean_dec(v_mantissa_1020_);
lean_del_object(v___x_1018_);
lean_dec_ref(v_a_1011_);
goto v___jp_1013_;
}
}
}
}
else
{
lean_dec_ref(v_a_1011_);
lean_dec(v_json_1010_);
goto v___jp_1013_;
}
v___jp_1013_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1));
v___x_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
return v___x_1015_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___boxed(lean_object* v_json_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(v_json_1039_, v_a_1040_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(lean_object* v_json_1046_, lean_object* v_a_1047_){
_start:
{
if (lean_obj_tag(v_json_1046_) == 2)
{
lean_object* v_n_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1088_; 
v_n_1052_ = lean_ctor_get(v_json_1046_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_json_1046_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1054_ = v_json_1046_;
v_isShared_1055_ = v_isSharedCheck_1088_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_n_1052_);
lean_dec(v_json_1046_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1088_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v_mantissa_1056_; lean_object* v_exponent_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1087_; 
v_mantissa_1056_ = lean_ctor_get(v_n_1052_, 0);
v_exponent_1057_ = lean_ctor_get(v_n_1052_, 1);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_n_1052_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1059_ = v_n_1052_;
v_isShared_1060_ = v_isSharedCheck_1087_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_exponent_1057_);
lean_inc(v_mantissa_1056_);
lean_dec(v_n_1052_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1087_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v_natZero_1061_; lean_object* v_intZero_1062_; uint8_t v_isNeg_1063_; 
v_natZero_1061_ = lean_unsigned_to_nat(0u);
v_intZero_1062_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1063_ = lean_int_dec_lt(v_mantissa_1056_, v_intZero_1062_);
if (v_isNeg_1063_ == 0)
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_nat_dec_eq(v_exponent_1057_, v_natZero_1061_);
lean_dec(v_exponent_1057_);
if (v___x_1064_ == 0)
{
lean_del_object(v___x_1059_);
lean_dec(v_mantissa_1056_);
lean_del_object(v___x_1054_);
lean_dec_ref(v_a_1047_);
goto v___jp_1049_;
}
else
{
lean_object* v_levelMap_1065_; lean_object* v_a_1066_; lean_object* v___x_1067_; 
v_levelMap_1065_ = lean_ctor_get(v_a_1047_, 2);
v_a_1066_ = lean_nat_abs(v_mantissa_1056_);
lean_dec(v_mantissa_1056_);
v___x_1067_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_1065_, v_a_1066_);
if (lean_obj_tag(v___x_1067_) == 1)
{
lean_object* v_val_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1079_; 
lean_dec(v_a_1066_);
lean_del_object(v___x_1054_);
v_val_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1079_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_val_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1079_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1072_; lean_object* v___x_1074_; 
v___x_1072_ = l_Lean_Expr_sort___override(v_val_1068_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 1, v_a_1047_);
lean_ctor_set(v___x_1059_, 0, v___x_1072_);
v___x_1074_ = v___x_1059_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_a_1047_);
v___x_1074_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v___x_1076_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1074_);
v___x_1076_ = v___x_1070_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
else
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1084_; 
lean_dec(v___x_1067_);
lean_del_object(v___x_1059_);
lean_dec_ref(v_a_1047_);
v___x_1080_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_1081_ = l_Nat_reprFast(v_a_1066_);
v___x_1082_ = lean_string_append(v___x_1080_, v___x_1081_);
lean_dec_ref(v___x_1081_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set_tag(v___x_1054_, 18);
lean_ctor_set(v___x_1054_, 0, v___x_1082_);
v___x_1084_ = v___x_1054_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
return v___x_1085_;
}
}
}
}
else
{
lean_del_object(v___x_1059_);
lean_dec(v_exponent_1057_);
lean_dec(v_mantissa_1056_);
lean_del_object(v___x_1054_);
lean_dec_ref(v_a_1047_);
goto v___jp_1049_;
}
}
}
}
else
{
lean_dec_ref(v_a_1047_);
lean_dec(v_json_1046_);
goto v___jp_1049_;
}
v___jp_1049_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1));
v___x_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___boxed(lean_object* v_json_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(v_json_1089_, v_a_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(size_t v_sz_1096_, size_t v_i_1097_, lean_object* v_bs_1098_, lean_object* v___y_1099_){
_start:
{
uint8_t v___x_1104_; 
v___x_1104_ = lean_usize_dec_lt(v_i_1097_, v_sz_1096_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1105_ = l_unsafeCast___redArg(v_bs_1098_);
lean_dec_ref(v_bs_1098_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
lean_ctor_set(v___x_1106_, 1, v___y_1099_);
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
else
{
lean_object* v_v_1108_; lean_object* v___x_1109_; 
v_v_1108_ = lean_array_uget_borrowed(v_bs_1098_, v_i_1097_);
v___x_1109_ = l_unsafeCast___redArg(v_v_1108_);
if (lean_obj_tag(v___x_1109_) == 2)
{
lean_object* v_n_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1137_; 
v_n_1110_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1112_ = v___x_1109_;
v_isShared_1113_ = v_isSharedCheck_1137_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_n_1110_);
lean_dec(v___x_1109_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1137_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v_mantissa_1114_; lean_object* v_exponent_1115_; lean_object* v_natZero_1116_; lean_object* v_intZero_1117_; uint8_t v_isNeg_1118_; 
v_mantissa_1114_ = lean_ctor_get(v_n_1110_, 0);
lean_inc(v_mantissa_1114_);
v_exponent_1115_ = lean_ctor_get(v_n_1110_, 1);
lean_inc(v_exponent_1115_);
lean_dec_ref(v_n_1110_);
v_natZero_1116_ = lean_unsigned_to_nat(0u);
v_intZero_1117_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1118_ = lean_int_dec_lt(v_mantissa_1114_, v_intZero_1117_);
if (v_isNeg_1118_ == 0)
{
uint8_t v___x_1119_; 
v___x_1119_ = lean_nat_dec_eq(v_exponent_1115_, v_natZero_1116_);
lean_dec(v_exponent_1115_);
if (v___x_1119_ == 0)
{
lean_dec(v_mantissa_1114_);
lean_del_object(v___x_1112_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v_bs_1098_);
goto v___jp_1101_;
}
else
{
lean_object* v_levelMap_1120_; lean_object* v_a_1121_; lean_object* v___x_1122_; 
v_levelMap_1120_ = lean_ctor_get(v___y_1099_, 2);
v_a_1121_ = lean_nat_abs(v_mantissa_1114_);
lean_dec(v_mantissa_1114_);
v___x_1122_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_1120_, v_a_1121_);
if (lean_obj_tag(v___x_1122_) == 1)
{
lean_object* v_val_1123_; lean_object* v_bs_x27_1124_; size_t v___x_1125_; size_t v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_dec(v_a_1121_);
lean_del_object(v___x_1112_);
v_val_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_val_1123_);
lean_dec_ref_known(v___x_1122_, 1);
v_bs_x27_1124_ = lean_array_uset(v_bs_1098_, v_i_1097_, v_natZero_1116_);
v___x_1125_ = ((size_t)1ULL);
v___x_1126_ = lean_usize_add(v_i_1097_, v___x_1125_);
v___x_1127_ = l_unsafeCast___redArg(v_val_1123_);
lean_dec(v_val_1123_);
v___x_1128_ = lean_array_uset(v_bs_x27_1124_, v_i_1097_, v___x_1127_);
v_i_1097_ = v___x_1126_;
v_bs_1098_ = v___x_1128_;
goto _start;
}
else
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1134_; 
lean_dec(v___x_1122_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v_bs_1098_);
v___x_1130_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_1131_ = l_Nat_reprFast(v_a_1121_);
v___x_1132_ = lean_string_append(v___x_1130_, v___x_1131_);
lean_dec_ref(v___x_1131_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 18);
lean_ctor_set(v___x_1112_, 0, v___x_1132_);
v___x_1134_ = v___x_1112_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1132_);
v___x_1134_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
return v___x_1135_;
}
}
}
}
else
{
lean_dec(v_exponent_1115_);
lean_dec(v_mantissa_1114_);
lean_del_object(v___x_1112_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v_bs_1098_);
goto v___jp_1101_;
}
}
}
else
{
lean_dec(v___x_1109_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v_bs_1098_);
goto v___jp_1101_;
}
}
v___jp_1101_:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
return v___x_1103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___boxed(lean_object* v_sz_1138_, lean_object* v_i_1139_, lean_object* v_bs_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
size_t v_sz_boxed_1143_; size_t v_i_boxed_1144_; lean_object* v_res_1145_; 
v_sz_boxed_1143_ = lean_unbox_usize(v_sz_1138_);
lean_dec(v_sz_1138_);
v_i_boxed_1144_ = lean_unbox_usize(v_i_1139_);
lean_dec(v_i_1139_);
v_res_1145_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(v_sz_boxed_1143_, v_i_boxed_1144_, v_bs_1140_, v___y_1141_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(lean_object* v_json_1150_, lean_object* v_a_1151_){
_start:
{
if (lean_obj_tag(v_json_1150_) == 5)
{
lean_object* v_kvPairs_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_kvPairs_1159_ = lean_ctor_get(v_json_1150_, 0);
v___x_1160_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1161_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1159_, v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 1)
{
lean_object* v_val_1162_; 
v_val_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_val_1162_);
lean_dec_ref_known(v___x_1161_, 1);
if (lean_obj_tag(v_val_1162_) == 2)
{
lean_object* v_n_1163_; lean_object* v_mantissa_1164_; lean_object* v_exponent_1165_; lean_object* v_natZero_1166_; lean_object* v_intZero_1167_; uint8_t v_isNeg_1168_; 
v_n_1163_ = lean_ctor_get(v_val_1162_, 0);
lean_inc_ref(v_n_1163_);
lean_dec_ref_known(v_val_1162_, 1);
v_mantissa_1164_ = lean_ctor_get(v_n_1163_, 0);
lean_inc(v_mantissa_1164_);
v_exponent_1165_ = lean_ctor_get(v_n_1163_, 1);
lean_inc(v_exponent_1165_);
lean_dec_ref(v_n_1163_);
v_natZero_1166_ = lean_unsigned_to_nat(0u);
v_intZero_1167_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1168_ = lean_int_dec_lt(v_mantissa_1164_, v_intZero_1167_);
if (v_isNeg_1168_ == 0)
{
uint8_t v___x_1169_; 
v___x_1169_ = lean_nat_dec_eq(v_exponent_1165_, v_natZero_1166_);
lean_dec(v_exponent_1165_);
if (v___x_1169_ == 0)
{
lean_dec(v_mantissa_1164_);
lean_dec_ref(v_a_1151_);
goto v___jp_1153_;
}
else
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1));
v___x_1171_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1159_, v___x_1170_);
if (lean_obj_tag(v___x_1171_) == 1)
{
lean_object* v_val_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1228_; 
v_val_1172_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1174_ = v___x_1171_;
v_isShared_1175_ = v_isSharedCheck_1228_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_val_1172_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1228_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
if (lean_obj_tag(v_val_1172_) == 4)
{
lean_object* v_elems_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1227_; 
v_elems_1176_ = lean_ctor_get(v_val_1172_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_val_1172_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1178_ = v_val_1172_;
v_isShared_1179_ = v_isSharedCheck_1227_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_elems_1176_);
lean_dec(v_val_1172_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1227_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v_nameMap_1180_; lean_object* v_a_1181_; lean_object* v___x_1182_; 
v_nameMap_1180_ = lean_ctor_get(v_a_1151_, 1);
v_a_1181_ = lean_nat_abs(v_mantissa_1164_);
lean_dec(v_mantissa_1164_);
v___x_1182_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1180_, v_a_1181_);
if (lean_obj_tag(v___x_1182_) == 1)
{
lean_object* v_val_1183_; size_t v_sz_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1960__overap_1189_; lean_object* v___x_1190_; 
lean_dec(v_a_1181_);
lean_del_object(v___x_1178_);
lean_del_object(v___x_1174_);
v_val_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_val_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v_sz_1184_ = lean_array_size(v_elems_1176_);
v___x_1185_ = l_unsafeCast___redArg(v_elems_1176_);
lean_dec_ref(v_elems_1176_);
v___x_1186_ = lean_box_usize(v_sz_1184_);
v___x_1187_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed__const__1));
v___x_1188_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___boxed), 5, 3);
lean_closure_set(v___x_1188_, 0, v___x_1186_);
lean_closure_set(v___x_1188_, 1, v___x_1187_);
lean_closure_set(v___x_1188_, 2, v___x_1185_);
v___x_1960__overap_1189_ = l_unsafeCast___redArg(v___x_1188_);
lean_dec_ref(v___x_1188_);
v___x_1190_ = lean_apply_2(v___x_1960__overap_1189_, v_a_1151_, lean_box(0));
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1209_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1193_ = v___x_1190_;
v_isShared_1194_ = v_isSharedCheck_1209_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1190_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1209_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v_fst_1195_; lean_object* v_snd_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1208_; 
v_fst_1195_ = lean_ctor_get(v_a_1191_, 0);
v_snd_1196_ = lean_ctor_get(v_a_1191_, 1);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_a_1191_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1198_ = v_a_1191_;
v_isShared_1199_ = v_isSharedCheck_1208_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_snd_1196_);
lean_inc(v_fst_1195_);
lean_dec(v_a_1191_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1208_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1203_; 
v___x_1200_ = lean_array_to_list(v_fst_1195_);
v___x_1201_ = l_Lean_Expr_const___override(v_val_1183_, v___x_1200_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 0, v___x_1201_);
v___x_1203_ = v___x_1198_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_snd_1196_);
v___x_1203_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
lean_object* v___x_1205_; 
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1203_);
v___x_1205_ = v___x_1193_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v___x_1203_);
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
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_val_1183_);
v_a_1210_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1190_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1190_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
lean_dec(v___x_1182_);
lean_dec_ref(v_elems_1176_);
lean_dec_ref(v_a_1151_);
v___x_1218_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1219_ = l_Nat_reprFast(v_a_1181_);
v___x_1220_ = lean_string_append(v___x_1218_, v___x_1219_);
lean_dec_ref(v___x_1219_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set_tag(v___x_1178_, 18);
lean_ctor_set(v___x_1178_, 0, v___x_1220_);
v___x_1222_ = v___x_1178_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1224_; 
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 0, v___x_1222_);
v___x_1224_ = v___x_1174_;
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
else
{
lean_del_object(v___x_1174_);
lean_dec(v_val_1172_);
lean_dec(v_mantissa_1164_);
lean_dec_ref(v_a_1151_);
goto v___jp_1156_;
}
}
}
else
{
lean_dec(v___x_1171_);
lean_dec(v_mantissa_1164_);
lean_dec_ref(v_a_1151_);
goto v___jp_1156_;
}
}
}
else
{
lean_dec(v_exponent_1165_);
lean_dec(v_mantissa_1164_);
lean_dec_ref(v_a_1151_);
goto v___jp_1153_;
}
}
else
{
lean_dec(v_val_1162_);
lean_dec_ref(v_a_1151_);
goto v___jp_1153_;
}
}
else
{
lean_dec(v___x_1161_);
lean_dec_ref(v_a_1151_);
goto v___jp_1153_;
}
}
else
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec_ref(v_a_1151_);
v___x_1229_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
v___jp_1153_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
return v___x_1155_;
}
v___jp_1156_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed(lean_object* v_json_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(v_json_1231_, v_a_1232_);
lean_dec(v_json_1231_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(lean_object* v_json_1240_, lean_object* v_a_1241_){
_start:
{
if (lean_obj_tag(v_json_1240_) == 5)
{
lean_object* v_kvPairs_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v_kvPairs_1249_ = lean_ctor_get(v_json_1240_, 0);
v___x_1250_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2));
v___x_1251_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1249_, v___x_1250_);
if (lean_obj_tag(v___x_1251_) == 1)
{
lean_object* v_val_1252_; 
v_val_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_val_1252_);
lean_dec_ref_known(v___x_1251_, 1);
if (lean_obj_tag(v_val_1252_) == 2)
{
lean_object* v_n_1253_; lean_object* v_mantissa_1254_; lean_object* v_exponent_1255_; lean_object* v_natZero_1256_; lean_object* v_intZero_1257_; uint8_t v_isNeg_1258_; 
v_n_1253_ = lean_ctor_get(v_val_1252_, 0);
lean_inc_ref(v_n_1253_);
lean_dec_ref_known(v_val_1252_, 1);
v_mantissa_1254_ = lean_ctor_get(v_n_1253_, 0);
lean_inc(v_mantissa_1254_);
v_exponent_1255_ = lean_ctor_get(v_n_1253_, 1);
lean_inc(v_exponent_1255_);
lean_dec_ref(v_n_1253_);
v_natZero_1256_ = lean_unsigned_to_nat(0u);
v_intZero_1257_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1258_ = lean_int_dec_lt(v_mantissa_1254_, v_intZero_1257_);
if (v_isNeg_1258_ == 0)
{
uint8_t v___x_1259_; 
v___x_1259_ = lean_nat_dec_eq(v_exponent_1255_, v_natZero_1256_);
lean_dec(v_exponent_1255_);
if (v___x_1259_ == 0)
{
lean_dec(v_mantissa_1254_);
lean_dec_ref(v_a_1241_);
goto v___jp_1243_;
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3));
v___x_1261_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1249_, v___x_1260_);
if (lean_obj_tag(v___x_1261_) == 1)
{
lean_object* v_val_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1319_; 
v_val_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1319_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_val_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1319_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
if (lean_obj_tag(v_val_1262_) == 2)
{
lean_object* v_n_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1318_; 
v_n_1266_ = lean_ctor_get(v_val_1262_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_val_1262_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1268_ = v_val_1262_;
v_isShared_1269_ = v_isSharedCheck_1318_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_n_1266_);
lean_dec(v_val_1262_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1318_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v_mantissa_1270_; lean_object* v_exponent_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1317_; 
v_mantissa_1270_ = lean_ctor_get(v_n_1266_, 0);
v_exponent_1271_ = lean_ctor_get(v_n_1266_, 1);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_n_1266_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1273_ = v_n_1266_;
v_isShared_1274_ = v_isSharedCheck_1317_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_exponent_1271_);
lean_inc(v_mantissa_1270_);
lean_dec(v_n_1266_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1317_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
uint8_t v_isNeg_1275_; 
v_isNeg_1275_ = lean_int_dec_lt(v_mantissa_1270_, v_intZero_1257_);
if (v_isNeg_1275_ == 0)
{
uint8_t v___x_1276_; 
v___x_1276_ = lean_nat_dec_eq(v_exponent_1271_, v_natZero_1256_);
lean_dec(v_exponent_1271_);
if (v___x_1276_ == 0)
{
lean_del_object(v___x_1273_);
lean_dec(v_mantissa_1270_);
lean_del_object(v___x_1268_);
lean_del_object(v___x_1264_);
lean_dec(v_mantissa_1254_);
lean_dec_ref(v_a_1241_);
goto v___jp_1246_;
}
else
{
lean_object* v_exprMap_1277_; lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_exprMap_1277_ = lean_ctor_get(v_a_1241_, 3);
v_a_1278_ = lean_nat_abs(v_mantissa_1254_);
lean_dec(v_mantissa_1254_);
v___x_1279_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1279_) == 1)
{
lean_object* v_val_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1307_; 
lean_dec(v_a_1278_);
lean_del_object(v___x_1264_);
v_val_1280_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1282_ = v___x_1279_;
v_isShared_1283_ = v_isSharedCheck_1307_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_val_1280_);
lean_dec(v___x_1279_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1307_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v_a_1284_; lean_object* v___x_1285_; 
v_a_1284_ = lean_nat_abs(v_mantissa_1270_);
lean_dec(v_mantissa_1270_);
v___x_1285_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1277_, v_a_1284_);
if (lean_obj_tag(v___x_1285_) == 1)
{
lean_object* v_val_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1297_; 
lean_dec(v_a_1284_);
lean_del_object(v___x_1282_);
lean_del_object(v___x_1268_);
v_val_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1297_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_val_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1297_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = l_Lean_Expr_app___override(v_val_1280_, v_val_1286_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 1, v_a_1241_);
lean_ctor_set(v___x_1273_, 0, v___x_1290_);
v___x_1292_ = v___x_1273_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_a_1241_);
v___x_1292_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
lean_object* v___x_1294_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set_tag(v___x_1288_, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1292_);
v___x_1294_ = v___x_1288_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1302_; 
lean_dec(v___x_1285_);
lean_dec(v_val_1280_);
lean_del_object(v___x_1273_);
lean_dec_ref(v_a_1241_);
v___x_1298_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1299_ = l_Nat_reprFast(v_a_1284_);
v___x_1300_ = lean_string_append(v___x_1298_, v___x_1299_);
lean_dec_ref(v___x_1299_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 18);
lean_ctor_set(v___x_1282_, 0, v___x_1300_);
v___x_1302_ = v___x_1282_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1304_; 
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 1);
lean_ctor_set(v___x_1268_, 0, v___x_1302_);
v___x_1304_ = v___x_1268_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1302_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
}
else
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1312_; 
lean_dec(v___x_1279_);
lean_del_object(v___x_1273_);
lean_dec(v_mantissa_1270_);
lean_dec_ref(v_a_1241_);
v___x_1308_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1309_ = l_Nat_reprFast(v_a_1278_);
v___x_1310_ = lean_string_append(v___x_1308_, v___x_1309_);
lean_dec_ref(v___x_1309_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 18);
lean_ctor_set(v___x_1268_, 0, v___x_1310_);
v___x_1312_ = v___x_1268_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1310_);
v___x_1312_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1314_; 
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v___x_1312_);
v___x_1314_ = v___x_1264_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
else
{
lean_del_object(v___x_1273_);
lean_dec(v_exponent_1271_);
lean_dec(v_mantissa_1270_);
lean_del_object(v___x_1268_);
lean_del_object(v___x_1264_);
lean_dec(v_mantissa_1254_);
lean_dec_ref(v_a_1241_);
goto v___jp_1246_;
}
}
}
}
else
{
lean_del_object(v___x_1264_);
lean_dec(v_val_1262_);
lean_dec(v_mantissa_1254_);
lean_dec_ref(v_a_1241_);
goto v___jp_1246_;
}
}
}
else
{
lean_dec(v___x_1261_);
lean_dec(v_mantissa_1254_);
lean_dec_ref(v_a_1241_);
goto v___jp_1246_;
}
}
}
else
{
lean_dec(v_exponent_1255_);
lean_dec(v_mantissa_1254_);
lean_dec_ref(v_a_1241_);
goto v___jp_1243_;
}
}
else
{
lean_dec(v_val_1252_);
lean_dec_ref(v_a_1241_);
goto v___jp_1243_;
}
}
else
{
lean_dec(v___x_1251_);
lean_dec_ref(v_a_1241_);
goto v___jp_1243_;
}
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_dec_ref(v_a_1241_);
v___x_1320_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1));
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
v___jp_1243_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1));
v___x_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
return v___x_1245_;
}
v___jp_1246_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1247_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1));
v___x_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
return v___x_1248_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___boxed(lean_object* v_json_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(v_json_1322_, v_a_1323_);
lean_dec(v_json_1322_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(lean_object* v_info_1331_, lean_object* v_a_1332_){
_start:
{
lean_object* v___x_1334_; uint8_t v___x_1335_; 
v___x_1334_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0));
v___x_1335_ = lean_string_dec_eq(v_info_1331_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1336_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1));
v___x_1337_ = lean_string_dec_eq(v_info_1331_, v___x_1336_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; uint8_t v___x_1339_; 
v___x_1338_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2));
v___x_1339_ = lean_string_dec_eq(v_info_1331_, v___x_1338_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1340_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3));
v___x_1341_ = lean_string_dec_eq(v_info_1331_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_dec_ref(v_a_1332_);
v___x_1342_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4));
v___x_1343_ = lean_string_append(v___x_1342_, v_info_1331_);
v___x_1344_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
else
{
uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1346_ = 3;
v___x_1347_ = lean_box(v___x_1346_);
v___x_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
lean_ctor_set(v___x_1348_, 1, v_a_1332_);
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
}
else
{
uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1350_ = 2;
v___x_1351_ = lean_box(v___x_1350_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
lean_ctor_set(v___x_1352_, 1, v_a_1332_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
}
else
{
uint8_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1354_ = 1;
v___x_1355_ = lean_box(v___x_1354_);
v___x_1356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
lean_ctor_set(v___x_1356_, 1, v_a_1332_);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
return v___x_1357_;
}
}
else
{
uint8_t v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1358_ = 0;
v___x_1359_ = lean_box(v___x_1358_);
v___x_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v_a_1332_);
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
return v___x_1361_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___boxed(lean_object* v_info_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(v_info_1362_, v_a_1363_);
lean_dec_ref(v_info_1362_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(lean_object* v_json_1372_, lean_object* v_a_1373_){
_start:
{
if (lean_obj_tag(v_json_1372_) == 5)
{
lean_object* v_kvPairs_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v_kvPairs_1387_ = lean_ctor_get(v_json_1372_, 0);
v___x_1388_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1389_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1387_, v___x_1388_);
if (lean_obj_tag(v___x_1389_) == 1)
{
lean_object* v_val_1390_; 
v_val_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_val_1390_);
lean_dec_ref_known(v___x_1389_, 1);
if (lean_obj_tag(v_val_1390_) == 2)
{
lean_object* v_n_1391_; lean_object* v_mantissa_1392_; lean_object* v_exponent_1393_; lean_object* v_natZero_1394_; lean_object* v_intZero_1395_; uint8_t v_isNeg_1396_; 
v_n_1391_ = lean_ctor_get(v_val_1390_, 0);
lean_inc_ref(v_n_1391_);
lean_dec_ref_known(v_val_1390_, 1);
v_mantissa_1392_ = lean_ctor_get(v_n_1391_, 0);
lean_inc(v_mantissa_1392_);
v_exponent_1393_ = lean_ctor_get(v_n_1391_, 1);
lean_inc(v_exponent_1393_);
lean_dec_ref(v_n_1391_);
v_natZero_1394_ = lean_unsigned_to_nat(0u);
v_intZero_1395_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1396_ = lean_int_dec_lt(v_mantissa_1392_, v_intZero_1395_);
if (v_isNeg_1396_ == 0)
{
uint8_t v___x_1397_; 
v___x_1397_ = lean_nat_dec_eq(v_exponent_1393_, v_natZero_1394_);
lean_dec(v_exponent_1393_);
if (v___x_1397_ == 0)
{
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1375_;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_1399_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1387_, v___x_1398_);
if (lean_obj_tag(v___x_1399_) == 1)
{
lean_object* v_val_1400_; 
v_val_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_val_1400_);
lean_dec_ref_known(v___x_1399_, 1);
if (lean_obj_tag(v_val_1400_) == 2)
{
lean_object* v_n_1401_; lean_object* v_mantissa_1402_; lean_object* v_exponent_1403_; uint8_t v_isNeg_1404_; 
v_n_1401_ = lean_ctor_get(v_val_1400_, 0);
lean_inc_ref(v_n_1401_);
lean_dec_ref_known(v_val_1400_, 1);
v_mantissa_1402_ = lean_ctor_get(v_n_1401_, 0);
lean_inc(v_mantissa_1402_);
v_exponent_1403_ = lean_ctor_get(v_n_1401_, 1);
lean_inc(v_exponent_1403_);
lean_dec_ref(v_n_1401_);
v_isNeg_1404_ = lean_int_dec_lt(v_mantissa_1402_, v_intZero_1395_);
if (v_isNeg_1404_ == 0)
{
uint8_t v___x_1405_; 
v___x_1405_ = lean_nat_dec_eq(v_exponent_1403_, v_natZero_1394_);
lean_dec(v_exponent_1403_);
if (v___x_1405_ == 0)
{
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1378_;
}
else
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3));
v___x_1407_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1387_, v___x_1406_);
if (lean_obj_tag(v___x_1407_) == 1)
{
lean_object* v_val_1408_; 
v_val_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_val_1408_);
lean_dec_ref_known(v___x_1407_, 1);
if (lean_obj_tag(v_val_1408_) == 2)
{
lean_object* v_n_1409_; lean_object* v_mantissa_1410_; lean_object* v_exponent_1411_; uint8_t v_isNeg_1412_; 
v_n_1409_ = lean_ctor_get(v_val_1408_, 0);
lean_inc_ref(v_n_1409_);
lean_dec_ref_known(v_val_1408_, 1);
v_mantissa_1410_ = lean_ctor_get(v_n_1409_, 0);
lean_inc(v_mantissa_1410_);
v_exponent_1411_ = lean_ctor_get(v_n_1409_, 1);
lean_inc(v_exponent_1411_);
lean_dec_ref(v_n_1409_);
v_isNeg_1412_ = lean_int_dec_lt(v_mantissa_1410_, v_intZero_1395_);
if (v_isNeg_1412_ == 0)
{
uint8_t v___x_1413_; 
v___x_1413_ = lean_nat_dec_eq(v_exponent_1411_, v_natZero_1394_);
lean_dec(v_exponent_1411_);
if (v___x_1413_ == 0)
{
lean_dec(v_mantissa_1410_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1381_;
}
else
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4));
v___x_1415_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1387_, v___x_1414_);
if (lean_obj_tag(v___x_1415_) == 1)
{
lean_object* v_val_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1499_; 
v_val_1416_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1418_ = v___x_1415_;
v_isShared_1419_ = v_isSharedCheck_1499_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_val_1416_);
lean_dec(v___x_1415_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1499_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
if (lean_obj_tag(v_val_1416_) == 3)
{
lean_object* v_s_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1498_; 
v_s_1420_ = lean_ctor_get(v_val_1416_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_val_1416_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1422_ = v_val_1416_;
v_isShared_1423_ = v_isSharedCheck_1498_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_s_1420_);
lean_dec(v_val_1416_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1498_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v_nameMap_1424_; lean_object* v_exprMap_1425_; lean_object* v_a_1426_; lean_object* v___x_1427_; 
v_nameMap_1424_ = lean_ctor_get(v_a_1373_, 1);
v_exprMap_1425_ = lean_ctor_get(v_a_1373_, 3);
v_a_1426_ = lean_nat_abs(v_mantissa_1392_);
lean_dec(v_mantissa_1392_);
v___x_1427_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1424_, v_a_1426_);
if (lean_obj_tag(v___x_1427_) == 1)
{
lean_object* v_val_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1488_; 
lean_dec(v_a_1426_);
lean_del_object(v___x_1418_);
v_val_1428_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1430_ = v___x_1427_;
v_isShared_1431_ = v_isSharedCheck_1488_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_val_1428_);
lean_dec(v___x_1427_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1488_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v_a_1432_; lean_object* v___x_1433_; 
v_a_1432_ = lean_nat_abs(v_mantissa_1402_);
lean_dec(v_mantissa_1402_);
v___x_1433_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1425_, v_a_1432_);
if (lean_obj_tag(v___x_1433_) == 1)
{
lean_object* v_val_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1478_; 
lean_dec(v_a_1432_);
lean_del_object(v___x_1422_);
v_val_1434_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1436_ = v___x_1433_;
v_isShared_1437_ = v_isSharedCheck_1478_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_val_1434_);
lean_dec(v___x_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1478_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v_a_1438_; lean_object* v___x_1439_; 
v_a_1438_ = lean_nat_abs(v_mantissa_1410_);
lean_dec(v_mantissa_1410_);
v___x_1439_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1425_, v_a_1438_);
if (lean_obj_tag(v___x_1439_) == 1)
{
lean_object* v_val_1440_; lean_object* v___x_1441_; 
lean_dec(v_a_1438_);
lean_del_object(v___x_1436_);
lean_del_object(v___x_1430_);
v_val_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_val_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1441_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(v_s_1420_, v_a_1373_);
lean_dec_ref(v_s_1420_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1460_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1444_ = v___x_1441_;
v_isShared_1445_ = v_isSharedCheck_1460_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1441_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1460_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v_fst_1446_; lean_object* v_snd_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1459_; 
v_fst_1446_ = lean_ctor_get(v_a_1442_, 0);
v_snd_1447_ = lean_ctor_get(v_a_1442_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_a_1442_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1449_ = v_a_1442_;
v_isShared_1450_ = v_isSharedCheck_1459_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_snd_1447_);
lean_inc(v_fst_1446_);
lean_dec(v_a_1442_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1459_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
uint8_t v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1451_ = lean_unbox(v_fst_1446_);
lean_dec(v_fst_1446_);
v___x_1452_ = l_Lean_Expr_lam___override(v_val_1428_, v_val_1434_, v_val_1440_, v___x_1451_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1452_);
v___x_1454_ = v___x_1449_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v_snd_1447_);
v___x_1454_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1456_; 
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 0, v___x_1454_);
v___x_1456_ = v___x_1444_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v___x_1454_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_val_1440_);
lean_dec(v_val_1434_);
lean_dec(v_val_1428_);
v_a_1461_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1441_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1441_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1473_; 
lean_dec(v___x_1439_);
lean_dec(v_val_1434_);
lean_dec(v_val_1428_);
lean_dec_ref(v_s_1420_);
lean_dec_ref(v_a_1373_);
v___x_1469_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1470_ = l_Nat_reprFast(v_a_1438_);
v___x_1471_ = lean_string_append(v___x_1469_, v___x_1470_);
lean_dec_ref(v___x_1470_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set_tag(v___x_1436_, 18);
lean_ctor_set(v___x_1436_, 0, v___x_1471_);
v___x_1473_ = v___x_1436_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1471_);
v___x_1473_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1475_; 
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 0, v___x_1473_);
v___x_1475_ = v___x_1430_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1473_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
lean_dec(v___x_1433_);
lean_dec(v_val_1428_);
lean_dec_ref(v_s_1420_);
lean_dec(v_mantissa_1410_);
lean_dec_ref(v_a_1373_);
v___x_1479_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1480_ = l_Nat_reprFast(v_a_1432_);
v___x_1481_ = lean_string_append(v___x_1479_, v___x_1480_);
lean_dec_ref(v___x_1480_);
if (v_isShared_1431_ == 0)
{
lean_ctor_set_tag(v___x_1430_, 18);
lean_ctor_set(v___x_1430_, 0, v___x_1481_);
v___x_1483_ = v___x_1430_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 1);
lean_ctor_set(v___x_1422_, 0, v___x_1483_);
v___x_1485_ = v___x_1422_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
lean_dec(v___x_1427_);
lean_dec_ref(v_s_1420_);
lean_dec(v_mantissa_1410_);
lean_dec(v_mantissa_1402_);
lean_dec_ref(v_a_1373_);
v___x_1489_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1490_ = l_Nat_reprFast(v_a_1426_);
v___x_1491_ = lean_string_append(v___x_1489_, v___x_1490_);
lean_dec_ref(v___x_1490_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 18);
lean_ctor_set(v___x_1422_, 0, v___x_1491_);
v___x_1493_ = v___x_1422_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1495_; 
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1493_);
v___x_1495_ = v___x_1418_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
else
{
lean_del_object(v___x_1418_);
lean_dec(v_val_1416_);
lean_dec(v_mantissa_1410_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1384_;
}
}
}
else
{
lean_dec(v___x_1415_);
lean_dec(v_mantissa_1410_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1384_;
}
}
}
else
{
lean_dec(v_exponent_1411_);
lean_dec(v_mantissa_1410_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1381_;
}
}
else
{
lean_dec(v_val_1408_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1381_;
}
}
else
{
lean_dec(v___x_1407_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1381_;
}
}
}
else
{
lean_dec(v_exponent_1403_);
lean_dec(v_mantissa_1402_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1378_;
}
}
else
{
lean_dec(v_val_1400_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1378_;
}
}
else
{
lean_dec(v___x_1399_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1378_;
}
}
}
else
{
lean_dec(v_exponent_1393_);
lean_dec(v_mantissa_1392_);
lean_dec_ref(v_a_1373_);
goto v___jp_1375_;
}
}
else
{
lean_dec(v_val_1390_);
lean_dec_ref(v_a_1373_);
goto v___jp_1375_;
}
}
else
{
lean_dec(v___x_1389_);
lean_dec_ref(v_a_1373_);
goto v___jp_1375_;
}
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec_ref(v_a_1373_);
v___x_1500_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
return v___x_1501_;
}
v___jp_1375_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
v___jp_1378_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
v___jp_1381_:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
return v___x_1383_;
}
v___jp_1384_:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
return v___x_1386_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___boxed(lean_object* v_json_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(v_json_1502_, v_a_1503_);
lean_dec(v_json_1502_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(lean_object* v_json_1509_, lean_object* v_a_1510_){
_start:
{
if (lean_obj_tag(v_json_1509_) == 5)
{
lean_object* v_kvPairs_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_kvPairs_1524_ = lean_ctor_get(v_json_1509_, 0);
v___x_1525_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1526_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1524_, v___x_1525_);
if (lean_obj_tag(v___x_1526_) == 1)
{
lean_object* v_val_1527_; 
v_val_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_val_1527_);
lean_dec_ref_known(v___x_1526_, 1);
if (lean_obj_tag(v_val_1527_) == 2)
{
lean_object* v_n_1528_; lean_object* v_mantissa_1529_; lean_object* v_exponent_1530_; lean_object* v_natZero_1531_; lean_object* v_intZero_1532_; uint8_t v_isNeg_1533_; 
v_n_1528_ = lean_ctor_get(v_val_1527_, 0);
lean_inc_ref(v_n_1528_);
lean_dec_ref_known(v_val_1527_, 1);
v_mantissa_1529_ = lean_ctor_get(v_n_1528_, 0);
lean_inc(v_mantissa_1529_);
v_exponent_1530_ = lean_ctor_get(v_n_1528_, 1);
lean_inc(v_exponent_1530_);
lean_dec_ref(v_n_1528_);
v_natZero_1531_ = lean_unsigned_to_nat(0u);
v_intZero_1532_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1533_ = lean_int_dec_lt(v_mantissa_1529_, v_intZero_1532_);
if (v_isNeg_1533_ == 0)
{
uint8_t v___x_1534_; 
v___x_1534_ = lean_nat_dec_eq(v_exponent_1530_, v_natZero_1531_);
lean_dec(v_exponent_1530_);
if (v___x_1534_ == 0)
{
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1512_;
}
else
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_1536_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1524_, v___x_1535_);
if (lean_obj_tag(v___x_1536_) == 1)
{
lean_object* v_val_1537_; 
v_val_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v___x_1536_, 1);
if (lean_obj_tag(v_val_1537_) == 2)
{
lean_object* v_n_1538_; lean_object* v_mantissa_1539_; lean_object* v_exponent_1540_; uint8_t v_isNeg_1541_; 
v_n_1538_ = lean_ctor_get(v_val_1537_, 0);
lean_inc_ref(v_n_1538_);
lean_dec_ref_known(v_val_1537_, 1);
v_mantissa_1539_ = lean_ctor_get(v_n_1538_, 0);
lean_inc(v_mantissa_1539_);
v_exponent_1540_ = lean_ctor_get(v_n_1538_, 1);
lean_inc(v_exponent_1540_);
lean_dec_ref(v_n_1538_);
v_isNeg_1541_ = lean_int_dec_lt(v_mantissa_1539_, v_intZero_1532_);
if (v_isNeg_1541_ == 0)
{
uint8_t v___x_1542_; 
v___x_1542_ = lean_nat_dec_eq(v_exponent_1540_, v_natZero_1531_);
lean_dec(v_exponent_1540_);
if (v___x_1542_ == 0)
{
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1515_;
}
else
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3));
v___x_1544_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1524_, v___x_1543_);
if (lean_obj_tag(v___x_1544_) == 1)
{
lean_object* v_val_1545_; 
v_val_1545_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_val_1545_);
lean_dec_ref_known(v___x_1544_, 1);
if (lean_obj_tag(v_val_1545_) == 2)
{
lean_object* v_n_1546_; lean_object* v_mantissa_1547_; lean_object* v_exponent_1548_; uint8_t v_isNeg_1549_; 
v_n_1546_ = lean_ctor_get(v_val_1545_, 0);
lean_inc_ref(v_n_1546_);
lean_dec_ref_known(v_val_1545_, 1);
v_mantissa_1547_ = lean_ctor_get(v_n_1546_, 0);
lean_inc(v_mantissa_1547_);
v_exponent_1548_ = lean_ctor_get(v_n_1546_, 1);
lean_inc(v_exponent_1548_);
lean_dec_ref(v_n_1546_);
v_isNeg_1549_ = lean_int_dec_lt(v_mantissa_1547_, v_intZero_1532_);
if (v_isNeg_1549_ == 0)
{
uint8_t v___x_1550_; 
v___x_1550_ = lean_nat_dec_eq(v_exponent_1548_, v_natZero_1531_);
lean_dec(v_exponent_1548_);
if (v___x_1550_ == 0)
{
lean_dec(v_mantissa_1547_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1518_;
}
else
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4));
v___x_1552_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1524_, v___x_1551_);
if (lean_obj_tag(v___x_1552_) == 1)
{
lean_object* v_val_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1636_; 
v_val_1553_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1555_ = v___x_1552_;
v_isShared_1556_ = v_isSharedCheck_1636_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_val_1553_);
lean_dec(v___x_1552_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1636_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
if (lean_obj_tag(v_val_1553_) == 3)
{
lean_object* v_s_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1635_; 
v_s_1557_ = lean_ctor_get(v_val_1553_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_val_1553_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1559_ = v_val_1553_;
v_isShared_1560_ = v_isSharedCheck_1635_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_s_1557_);
lean_dec(v_val_1553_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1635_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v_nameMap_1561_; lean_object* v_exprMap_1562_; lean_object* v_a_1563_; lean_object* v___x_1564_; 
v_nameMap_1561_ = lean_ctor_get(v_a_1510_, 1);
v_exprMap_1562_ = lean_ctor_get(v_a_1510_, 3);
v_a_1563_ = lean_nat_abs(v_mantissa_1529_);
lean_dec(v_mantissa_1529_);
v___x_1564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1561_, v_a_1563_);
if (lean_obj_tag(v___x_1564_) == 1)
{
lean_object* v_val_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1625_; 
lean_dec(v_a_1563_);
lean_del_object(v___x_1555_);
v_val_1565_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1567_ = v___x_1564_;
v_isShared_1568_ = v_isSharedCheck_1625_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_val_1565_);
lean_dec(v___x_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1625_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v_a_1569_; lean_object* v___x_1570_; 
v_a_1569_ = lean_nat_abs(v_mantissa_1539_);
lean_dec(v_mantissa_1539_);
v___x_1570_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1562_, v_a_1569_);
if (lean_obj_tag(v___x_1570_) == 1)
{
lean_object* v_val_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v_a_1569_);
lean_del_object(v___x_1559_);
v_val_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1615_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_val_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1615_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v_a_1575_; lean_object* v___x_1576_; 
v_a_1575_ = lean_nat_abs(v_mantissa_1547_);
lean_dec(v_mantissa_1547_);
v___x_1576_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1562_, v_a_1575_);
if (lean_obj_tag(v___x_1576_) == 1)
{
lean_object* v_val_1577_; lean_object* v___x_1578_; 
lean_dec(v_a_1575_);
lean_del_object(v___x_1573_);
lean_del_object(v___x_1567_);
v_val_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_val_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(v_s_1557_, v_a_1510_);
lean_dec_ref(v_s_1557_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1597_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1581_ = v___x_1578_;
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1578_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v_fst_1583_; lean_object* v_snd_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1596_; 
v_fst_1583_ = lean_ctor_get(v_a_1579_, 0);
v_snd_1584_ = lean_ctor_get(v_a_1579_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_a_1579_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1586_ = v_a_1579_;
v_isShared_1587_ = v_isSharedCheck_1596_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_snd_1584_);
lean_inc(v_fst_1583_);
lean_dec(v_a_1579_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1596_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
uint8_t v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1591_; 
v___x_1588_ = lean_unbox(v_fst_1583_);
lean_dec(v_fst_1583_);
v___x_1589_ = l_Lean_Expr_forallE___override(v_val_1565_, v_val_1571_, v_val_1577_, v___x_1588_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 0, v___x_1589_);
v___x_1591_ = v___x_1586_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1589_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v_snd_1584_);
v___x_1591_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1593_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 0, v___x_1591_);
v___x_1593_ = v___x_1581_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec(v_val_1577_);
lean_dec(v_val_1571_);
lean_dec(v_val_1565_);
v_a_1598_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1578_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1578_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1610_; 
lean_dec(v___x_1576_);
lean_dec(v_val_1571_);
lean_dec(v_val_1565_);
lean_dec_ref(v_s_1557_);
lean_dec_ref(v_a_1510_);
v___x_1606_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1607_ = l_Nat_reprFast(v_a_1575_);
v___x_1608_ = lean_string_append(v___x_1606_, v___x_1607_);
lean_dec_ref(v___x_1607_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set_tag(v___x_1573_, 18);
lean_ctor_set(v___x_1573_, 0, v___x_1608_);
v___x_1610_ = v___x_1573_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1608_);
v___x_1610_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1612_; 
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 0, v___x_1610_);
v___x_1612_ = v___x_1567_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1620_; 
lean_dec(v___x_1570_);
lean_dec(v_val_1565_);
lean_dec_ref(v_s_1557_);
lean_dec(v_mantissa_1547_);
lean_dec_ref(v_a_1510_);
v___x_1616_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1617_ = l_Nat_reprFast(v_a_1569_);
v___x_1618_ = lean_string_append(v___x_1616_, v___x_1617_);
lean_dec_ref(v___x_1617_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set_tag(v___x_1567_, 18);
lean_ctor_set(v___x_1567_, 0, v___x_1618_);
v___x_1620_ = v___x_1567_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
lean_object* v___x_1622_; 
if (v_isShared_1560_ == 0)
{
lean_ctor_set_tag(v___x_1559_, 1);
lean_ctor_set(v___x_1559_, 0, v___x_1620_);
v___x_1622_ = v___x_1559_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
}
else
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1630_; 
lean_dec(v___x_1564_);
lean_dec_ref(v_s_1557_);
lean_dec(v_mantissa_1547_);
lean_dec(v_mantissa_1539_);
lean_dec_ref(v_a_1510_);
v___x_1626_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1627_ = l_Nat_reprFast(v_a_1563_);
v___x_1628_ = lean_string_append(v___x_1626_, v___x_1627_);
lean_dec_ref(v___x_1627_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set_tag(v___x_1559_, 18);
lean_ctor_set(v___x_1559_, 0, v___x_1628_);
v___x_1630_ = v___x_1559_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1628_);
v___x_1630_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
lean_object* v___x_1632_; 
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v___x_1630_);
v___x_1632_ = v___x_1555_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
else
{
lean_del_object(v___x_1555_);
lean_dec(v_val_1553_);
lean_dec(v_mantissa_1547_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1521_;
}
}
}
else
{
lean_dec(v___x_1552_);
lean_dec(v_mantissa_1547_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1521_;
}
}
}
else
{
lean_dec(v_exponent_1548_);
lean_dec(v_mantissa_1547_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1518_;
}
}
else
{
lean_dec(v_val_1545_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1518_;
}
}
else
{
lean_dec(v___x_1544_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1518_;
}
}
}
else
{
lean_dec(v_exponent_1540_);
lean_dec(v_mantissa_1539_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1515_;
}
}
else
{
lean_dec(v_val_1537_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1515_;
}
}
else
{
lean_dec(v___x_1536_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1515_;
}
}
}
else
{
lean_dec(v_exponent_1530_);
lean_dec(v_mantissa_1529_);
lean_dec_ref(v_a_1510_);
goto v___jp_1512_;
}
}
else
{
lean_dec(v_val_1527_);
lean_dec_ref(v_a_1510_);
goto v___jp_1512_;
}
}
else
{
lean_dec(v___x_1526_);
lean_dec_ref(v_a_1510_);
goto v___jp_1512_;
}
}
else
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_dec_ref(v_a_1510_);
v___x_1637_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1637_);
return v___x_1638_;
}
v___jp_1512_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1513_);
return v___x_1514_;
}
v___jp_1515_:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
return v___x_1517_;
}
v___jp_1518_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
return v___x_1520_;
}
v___jp_1521_:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
return v___x_1523_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___boxed(lean_object* v_json_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(v_json_1639_, v_a_1640_);
lean_dec(v_json_1639_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(lean_object* v_json_1648_, lean_object* v_a_1649_){
_start:
{
if (lean_obj_tag(v_json_1648_) == 5)
{
lean_object* v_kvPairs_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v_kvPairs_1666_ = lean_ctor_get(v_json_1648_, 0);
v___x_1667_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1668_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1666_, v___x_1667_);
if (lean_obj_tag(v___x_1668_) == 1)
{
lean_object* v_val_1669_; 
v_val_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_val_1669_);
lean_dec_ref_known(v___x_1668_, 1);
if (lean_obj_tag(v_val_1669_) == 2)
{
lean_object* v_n_1670_; lean_object* v_mantissa_1671_; lean_object* v_exponent_1672_; lean_object* v_natZero_1673_; lean_object* v_intZero_1674_; uint8_t v_isNeg_1675_; 
v_n_1670_ = lean_ctor_get(v_val_1669_, 0);
lean_inc_ref(v_n_1670_);
lean_dec_ref_known(v_val_1669_, 1);
v_mantissa_1671_ = lean_ctor_get(v_n_1670_, 0);
lean_inc(v_mantissa_1671_);
v_exponent_1672_ = lean_ctor_get(v_n_1670_, 1);
lean_inc(v_exponent_1672_);
lean_dec_ref(v_n_1670_);
v_natZero_1673_ = lean_unsigned_to_nat(0u);
v_intZero_1674_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1675_ = lean_int_dec_lt(v_mantissa_1671_, v_intZero_1674_);
if (v_isNeg_1675_ == 0)
{
uint8_t v___x_1676_; 
v___x_1676_ = lean_nat_dec_eq(v_exponent_1672_, v_natZero_1673_);
lean_dec(v_exponent_1672_);
if (v___x_1676_ == 0)
{
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1651_;
}
else
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_1678_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1666_, v___x_1677_);
if (lean_obj_tag(v___x_1678_) == 1)
{
lean_object* v_val_1679_; 
v_val_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_val_1679_);
lean_dec_ref_known(v___x_1678_, 1);
if (lean_obj_tag(v_val_1679_) == 2)
{
lean_object* v_n_1680_; lean_object* v_mantissa_1681_; lean_object* v_exponent_1682_; uint8_t v_isNeg_1683_; 
v_n_1680_ = lean_ctor_get(v_val_1679_, 0);
lean_inc_ref(v_n_1680_);
lean_dec_ref_known(v_val_1679_, 1);
v_mantissa_1681_ = lean_ctor_get(v_n_1680_, 0);
lean_inc(v_mantissa_1681_);
v_exponent_1682_ = lean_ctor_get(v_n_1680_, 1);
lean_inc(v_exponent_1682_);
lean_dec_ref(v_n_1680_);
v_isNeg_1683_ = lean_int_dec_lt(v_mantissa_1681_, v_intZero_1674_);
if (v_isNeg_1683_ == 0)
{
uint8_t v___x_1684_; 
v___x_1684_ = lean_nat_dec_eq(v_exponent_1682_, v_natZero_1673_);
lean_dec(v_exponent_1682_);
if (v___x_1684_ == 0)
{
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1654_;
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_1686_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1666_, v___x_1685_);
if (lean_obj_tag(v___x_1686_) == 1)
{
lean_object* v_val_1687_; 
v_val_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_val_1687_);
lean_dec_ref_known(v___x_1686_, 1);
if (lean_obj_tag(v_val_1687_) == 2)
{
lean_object* v_n_1688_; lean_object* v_mantissa_1689_; lean_object* v_exponent_1690_; uint8_t v_isNeg_1691_; 
v_n_1688_ = lean_ctor_get(v_val_1687_, 0);
lean_inc_ref(v_n_1688_);
lean_dec_ref_known(v_val_1687_, 1);
v_mantissa_1689_ = lean_ctor_get(v_n_1688_, 0);
lean_inc(v_mantissa_1689_);
v_exponent_1690_ = lean_ctor_get(v_n_1688_, 1);
lean_inc(v_exponent_1690_);
lean_dec_ref(v_n_1688_);
v_isNeg_1691_ = lean_int_dec_lt(v_mantissa_1689_, v_intZero_1674_);
if (v_isNeg_1691_ == 0)
{
uint8_t v___x_1692_; 
v___x_1692_ = lean_nat_dec_eq(v_exponent_1690_, v_natZero_1673_);
lean_dec(v_exponent_1690_);
if (v___x_1692_ == 0)
{
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1657_;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3));
v___x_1694_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1666_, v___x_1693_);
if (lean_obj_tag(v___x_1694_) == 1)
{
lean_object* v_val_1695_; 
v_val_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v___x_1694_, 1);
if (lean_obj_tag(v_val_1695_) == 2)
{
lean_object* v_n_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1789_; 
v_n_1696_ = lean_ctor_get(v_val_1695_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_val_1695_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1698_ = v_val_1695_;
v_isShared_1699_ = v_isSharedCheck_1789_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_n_1696_);
lean_dec(v_val_1695_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1789_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v_mantissa_1700_; lean_object* v_exponent_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1788_; 
v_mantissa_1700_ = lean_ctor_get(v_n_1696_, 0);
v_exponent_1701_ = lean_ctor_get(v_n_1696_, 1);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_n_1696_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1703_ = v_n_1696_;
v_isShared_1704_ = v_isSharedCheck_1788_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_exponent_1701_);
lean_inc(v_mantissa_1700_);
lean_dec(v_n_1696_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1788_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
uint8_t v_isNeg_1705_; 
v_isNeg_1705_ = lean_int_dec_lt(v_mantissa_1700_, v_intZero_1674_);
if (v_isNeg_1705_ == 0)
{
uint8_t v___x_1706_; 
v___x_1706_ = lean_nat_dec_eq(v_exponent_1701_, v_natZero_1673_);
lean_dec(v_exponent_1701_);
if (v___x_1706_ == 0)
{
lean_del_object(v___x_1703_);
lean_dec(v_mantissa_1700_);
lean_del_object(v___x_1698_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1660_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3));
v___x_1708_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1666_, v___x_1707_);
if (lean_obj_tag(v___x_1708_) == 1)
{
lean_object* v_val_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1787_; 
v_val_1709_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1711_ = v___x_1708_;
v_isShared_1712_ = v_isSharedCheck_1787_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_val_1709_);
lean_dec(v___x_1708_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1787_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
if (lean_obj_tag(v_val_1709_) == 1)
{
uint8_t v_b_1713_; lean_object* v_nameMap_1714_; lean_object* v_exprMap_1715_; lean_object* v_a_1716_; lean_object* v___x_1717_; 
v_b_1713_ = lean_ctor_get_uint8(v_val_1709_, 0);
lean_dec_ref_known(v_val_1709_, 0);
v_nameMap_1714_ = lean_ctor_get(v_a_1649_, 1);
v_exprMap_1715_ = lean_ctor_get(v_a_1649_, 3);
v_a_1716_ = lean_nat_abs(v_mantissa_1671_);
lean_dec(v_mantissa_1671_);
v___x_1717_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1714_, v_a_1716_);
if (lean_obj_tag(v___x_1717_) == 1)
{
lean_object* v_val_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1777_; 
lean_dec(v_a_1716_);
lean_del_object(v___x_1698_);
v_val_1718_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1720_ = v___x_1717_;
v_isShared_1721_ = v_isSharedCheck_1777_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_val_1718_);
lean_dec(v___x_1717_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1777_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v_a_1722_; lean_object* v___x_1723_; 
v_a_1722_ = lean_nat_abs(v_mantissa_1681_);
lean_dec(v_mantissa_1681_);
v___x_1723_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1715_, v_a_1722_);
if (lean_obj_tag(v___x_1723_) == 1)
{
lean_object* v_val_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1767_; 
lean_dec(v_a_1722_);
lean_del_object(v___x_1711_);
v_val_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1767_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_val_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1767_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v_a_1728_; lean_object* v___x_1729_; 
v_a_1728_ = lean_nat_abs(v_mantissa_1689_);
lean_dec(v_mantissa_1689_);
v___x_1729_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1715_, v_a_1728_);
if (lean_obj_tag(v___x_1729_) == 1)
{
lean_object* v_val_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1757_; 
lean_dec(v_a_1728_);
lean_del_object(v___x_1720_);
v_val_1730_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1732_ = v___x_1729_;
v_isShared_1733_ = v_isSharedCheck_1757_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_val_1730_);
lean_dec(v___x_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1757_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v_a_1734_; lean_object* v___x_1735_; 
v_a_1734_ = lean_nat_abs(v_mantissa_1700_);
lean_dec(v_mantissa_1700_);
v___x_1735_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1715_, v_a_1734_);
if (lean_obj_tag(v___x_1735_) == 1)
{
lean_object* v_val_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_a_1734_);
lean_del_object(v___x_1732_);
lean_del_object(v___x_1726_);
v_val_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1747_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_val_1736_);
lean_dec(v___x_1735_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1747_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1740_ = l_Lean_Expr_letE___override(v_val_1718_, v_val_1724_, v_val_1730_, v_val_1736_, v_b_1713_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 1, v_a_1649_);
lean_ctor_set(v___x_1703_, 0, v___x_1740_);
v___x_1742_ = v___x_1703_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v___x_1740_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v_a_1649_);
v___x_1742_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1744_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1742_);
v___x_1744_ = v___x_1738_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
else
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
lean_dec(v___x_1735_);
lean_dec(v_val_1730_);
lean_dec(v_val_1724_);
lean_dec(v_val_1718_);
lean_del_object(v___x_1703_);
lean_dec_ref(v_a_1649_);
v___x_1748_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1749_ = l_Nat_reprFast(v_a_1734_);
v___x_1750_ = lean_string_append(v___x_1748_, v___x_1749_);
lean_dec_ref(v___x_1749_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set_tag(v___x_1732_, 18);
lean_ctor_set(v___x_1732_, 0, v___x_1750_);
v___x_1752_ = v___x_1732_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1754_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1752_);
v___x_1754_ = v___x_1726_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1762_; 
lean_dec(v___x_1729_);
lean_dec(v_val_1724_);
lean_dec(v_val_1718_);
lean_del_object(v___x_1703_);
lean_dec(v_mantissa_1700_);
lean_dec_ref(v_a_1649_);
v___x_1758_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1759_ = l_Nat_reprFast(v_a_1728_);
v___x_1760_ = lean_string_append(v___x_1758_, v___x_1759_);
lean_dec_ref(v___x_1759_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set_tag(v___x_1726_, 18);
lean_ctor_set(v___x_1726_, 0, v___x_1760_);
v___x_1762_ = v___x_1726_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1764_; 
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1762_);
v___x_1764_ = v___x_1720_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
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
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1772_; 
lean_dec(v___x_1723_);
lean_dec(v_val_1718_);
lean_del_object(v___x_1703_);
lean_dec(v_mantissa_1700_);
lean_dec(v_mantissa_1689_);
lean_dec_ref(v_a_1649_);
v___x_1768_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1769_ = l_Nat_reprFast(v_a_1722_);
v___x_1770_ = lean_string_append(v___x_1768_, v___x_1769_);
lean_dec_ref(v___x_1769_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set_tag(v___x_1720_, 18);
lean_ctor_set(v___x_1720_, 0, v___x_1770_);
v___x_1772_ = v___x_1720_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v___x_1772_);
v___x_1774_ = v___x_1711_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1782_; 
lean_dec(v___x_1717_);
lean_del_object(v___x_1703_);
lean_dec(v_mantissa_1700_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec_ref(v_a_1649_);
v___x_1778_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1779_ = l_Nat_reprFast(v_a_1716_);
v___x_1780_ = lean_string_append(v___x_1778_, v___x_1779_);
lean_dec_ref(v___x_1779_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set_tag(v___x_1711_, 18);
lean_ctor_set(v___x_1711_, 0, v___x_1780_);
v___x_1782_ = v___x_1711_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
lean_object* v___x_1784_; 
if (v_isShared_1699_ == 0)
{
lean_ctor_set_tag(v___x_1698_, 1);
lean_ctor_set(v___x_1698_, 0, v___x_1782_);
v___x_1784_ = v___x_1698_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
lean_del_object(v___x_1711_);
lean_dec(v_val_1709_);
lean_del_object(v___x_1703_);
lean_dec(v_mantissa_1700_);
lean_del_object(v___x_1698_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1663_;
}
}
}
else
{
lean_dec(v___x_1708_);
lean_del_object(v___x_1703_);
lean_dec(v_mantissa_1700_);
lean_del_object(v___x_1698_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1663_;
}
}
}
else
{
lean_del_object(v___x_1703_);
lean_dec(v_exponent_1701_);
lean_dec(v_mantissa_1700_);
lean_del_object(v___x_1698_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1660_;
}
}
}
}
else
{
lean_dec(v_val_1695_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1660_;
}
}
else
{
lean_dec(v___x_1694_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1660_;
}
}
}
else
{
lean_dec(v_exponent_1690_);
lean_dec(v_mantissa_1689_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1657_;
}
}
else
{
lean_dec(v_val_1687_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1657_;
}
}
else
{
lean_dec(v___x_1686_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1657_;
}
}
}
else
{
lean_dec(v_exponent_1682_);
lean_dec(v_mantissa_1681_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1654_;
}
}
else
{
lean_dec(v_val_1679_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1654_;
}
}
else
{
lean_dec(v___x_1678_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1654_;
}
}
}
else
{
lean_dec(v_exponent_1672_);
lean_dec(v_mantissa_1671_);
lean_dec_ref(v_a_1649_);
goto v___jp_1651_;
}
}
else
{
lean_dec(v_val_1669_);
lean_dec_ref(v_a_1649_);
goto v___jp_1651_;
}
}
else
{
lean_dec(v___x_1668_);
lean_dec_ref(v_a_1649_);
goto v___jp_1651_;
}
}
else
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_dec_ref(v_a_1649_);
v___x_1790_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
return v___x_1791_;
}
v___jp_1651_:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
return v___x_1653_;
}
v___jp_1654_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
return v___x_1656_;
}
v___jp_1657_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
v___jp_1660_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
return v___x_1662_;
}
v___jp_1663_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
return v___x_1665_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___boxed(lean_object* v_json_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(v_json_1792_, v_a_1793_);
lean_dec(v_json_1792_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(lean_object* v_json_1802_, lean_object* v_a_1803_){
_start:
{
if (lean_obj_tag(v_json_1802_) == 5)
{
lean_object* v_kvPairs_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v_kvPairs_1814_ = lean_ctor_get(v_json_1802_, 0);
v___x_1815_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2));
v___x_1816_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1814_, v___x_1815_);
if (lean_obj_tag(v___x_1816_) == 1)
{
lean_object* v_val_1817_; 
v_val_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_val_1817_);
lean_dec_ref_known(v___x_1816_, 1);
if (lean_obj_tag(v_val_1817_) == 2)
{
lean_object* v_n_1818_; lean_object* v_mantissa_1819_; lean_object* v_exponent_1820_; lean_object* v_natZero_1821_; lean_object* v_intZero_1822_; uint8_t v_isNeg_1823_; 
v_n_1818_ = lean_ctor_get(v_val_1817_, 0);
lean_inc_ref(v_n_1818_);
lean_dec_ref_known(v_val_1817_, 1);
v_mantissa_1819_ = lean_ctor_get(v_n_1818_, 0);
lean_inc(v_mantissa_1819_);
v_exponent_1820_ = lean_ctor_get(v_n_1818_, 1);
lean_inc(v_exponent_1820_);
lean_dec_ref(v_n_1818_);
v_natZero_1821_ = lean_unsigned_to_nat(0u);
v_intZero_1822_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1823_ = lean_int_dec_lt(v_mantissa_1819_, v_intZero_1822_);
if (v_isNeg_1823_ == 0)
{
uint8_t v___x_1824_; 
v___x_1824_ = lean_nat_dec_eq(v_exponent_1820_, v_natZero_1821_);
lean_dec(v_exponent_1820_);
if (v___x_1824_ == 0)
{
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1805_;
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3));
v___x_1826_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1814_, v___x_1825_);
if (lean_obj_tag(v___x_1826_) == 1)
{
lean_object* v_val_1827_; 
v_val_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_val_1827_);
lean_dec_ref_known(v___x_1826_, 1);
if (lean_obj_tag(v_val_1827_) == 2)
{
lean_object* v_n_1828_; lean_object* v_mantissa_1829_; lean_object* v_exponent_1830_; uint8_t v_isNeg_1831_; 
v_n_1828_ = lean_ctor_get(v_val_1827_, 0);
lean_inc_ref(v_n_1828_);
lean_dec_ref_known(v_val_1827_, 1);
v_mantissa_1829_ = lean_ctor_get(v_n_1828_, 0);
lean_inc(v_mantissa_1829_);
v_exponent_1830_ = lean_ctor_get(v_n_1828_, 1);
lean_inc(v_exponent_1830_);
lean_dec_ref(v_n_1828_);
v_isNeg_1831_ = lean_int_dec_lt(v_mantissa_1829_, v_intZero_1822_);
if (v_isNeg_1831_ == 0)
{
uint8_t v___x_1832_; 
v___x_1832_ = lean_nat_dec_eq(v_exponent_1830_, v_natZero_1821_);
lean_dec(v_exponent_1830_);
if (v___x_1832_ == 0)
{
lean_dec(v_mantissa_1829_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1808_;
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4));
v___x_1834_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1814_, v___x_1833_);
if (lean_obj_tag(v___x_1834_) == 1)
{
lean_object* v_val_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1894_; 
v_val_1835_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1837_ = v___x_1834_;
v_isShared_1838_ = v_isSharedCheck_1894_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_val_1835_);
lean_dec(v___x_1834_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1894_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
if (lean_obj_tag(v_val_1835_) == 2)
{
lean_object* v_n_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1893_; 
v_n_1839_ = lean_ctor_get(v_val_1835_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v_val_1835_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1841_ = v_val_1835_;
v_isShared_1842_ = v_isSharedCheck_1893_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_n_1839_);
lean_dec(v_val_1835_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1893_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v_mantissa_1843_; lean_object* v_exponent_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1892_; 
v_mantissa_1843_ = lean_ctor_get(v_n_1839_, 0);
v_exponent_1844_ = lean_ctor_get(v_n_1839_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_n_1839_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1846_ = v_n_1839_;
v_isShared_1847_ = v_isSharedCheck_1892_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_exponent_1844_);
lean_inc(v_mantissa_1843_);
lean_dec(v_n_1839_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1892_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
uint8_t v_isNeg_1848_; 
v_isNeg_1848_ = lean_int_dec_lt(v_mantissa_1843_, v_intZero_1822_);
if (v_isNeg_1848_ == 0)
{
uint8_t v___x_1849_; 
v___x_1849_ = lean_nat_dec_eq(v_exponent_1844_, v_natZero_1821_);
lean_dec(v_exponent_1844_);
if (v___x_1849_ == 0)
{
lean_del_object(v___x_1846_);
lean_dec(v_mantissa_1843_);
lean_del_object(v___x_1841_);
lean_del_object(v___x_1837_);
lean_dec(v_mantissa_1829_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1811_;
}
else
{
lean_object* v_nameMap_1850_; lean_object* v_exprMap_1851_; lean_object* v_a_1852_; lean_object* v___x_1853_; 
v_nameMap_1850_ = lean_ctor_get(v_a_1803_, 1);
v_exprMap_1851_ = lean_ctor_get(v_a_1803_, 3);
v_a_1852_ = lean_nat_abs(v_mantissa_1819_);
lean_dec(v_mantissa_1819_);
v___x_1853_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1850_, v_a_1852_);
if (lean_obj_tag(v___x_1853_) == 1)
{
lean_object* v_val_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_a_1852_);
lean_del_object(v___x_1837_);
v_val_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1882_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_val_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1882_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v_a_1858_; lean_object* v___x_1859_; 
v_a_1858_ = lean_nat_abs(v_mantissa_1843_);
lean_dec(v_mantissa_1843_);
v___x_1859_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1851_, v_a_1858_);
if (lean_obj_tag(v___x_1859_) == 1)
{
lean_object* v_val_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1872_; 
lean_dec(v_a_1858_);
lean_del_object(v___x_1856_);
lean_del_object(v___x_1841_);
v_val_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1872_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_val_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1872_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v_a_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v_a_1864_ = lean_nat_abs(v_mantissa_1829_);
lean_dec(v_mantissa_1829_);
v___x_1865_ = l_Lean_Expr_proj___override(v_val_1854_, v_a_1864_, v_val_1860_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 1, v_a_1803_);
lean_ctor_set(v___x_1846_, 0, v___x_1865_);
v___x_1867_ = v___x_1846_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_a_1803_);
v___x_1867_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
if (v_isShared_1863_ == 0)
{
lean_ctor_set_tag(v___x_1862_, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1867_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1877_; 
lean_dec(v___x_1859_);
lean_dec(v_val_1854_);
lean_del_object(v___x_1846_);
lean_dec(v_mantissa_1829_);
lean_dec_ref(v_a_1803_);
v___x_1873_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1874_ = l_Nat_reprFast(v_a_1858_);
v___x_1875_ = lean_string_append(v___x_1873_, v___x_1874_);
lean_dec_ref(v___x_1874_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set_tag(v___x_1856_, 18);
lean_ctor_set(v___x_1856_, 0, v___x_1875_);
v___x_1877_ = v___x_1856_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1879_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set_tag(v___x_1841_, 1);
lean_ctor_set(v___x_1841_, 0, v___x_1877_);
v___x_1879_ = v___x_1841_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
else
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1887_; 
lean_dec(v___x_1853_);
lean_del_object(v___x_1846_);
lean_dec(v_mantissa_1843_);
lean_dec(v_mantissa_1829_);
lean_dec_ref(v_a_1803_);
v___x_1883_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1884_ = l_Nat_reprFast(v_a_1852_);
v___x_1885_ = lean_string_append(v___x_1883_, v___x_1884_);
lean_dec_ref(v___x_1884_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set_tag(v___x_1841_, 18);
lean_ctor_set(v___x_1841_, 0, v___x_1885_);
v___x_1887_ = v___x_1841_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
lean_object* v___x_1889_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1887_);
v___x_1889_ = v___x_1837_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1887_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
else
{
lean_del_object(v___x_1846_);
lean_dec(v_exponent_1844_);
lean_dec(v_mantissa_1843_);
lean_del_object(v___x_1841_);
lean_del_object(v___x_1837_);
lean_dec(v_mantissa_1829_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1811_;
}
}
}
}
else
{
lean_del_object(v___x_1837_);
lean_dec(v_val_1835_);
lean_dec(v_mantissa_1829_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1811_;
}
}
}
else
{
lean_dec(v___x_1834_);
lean_dec(v_mantissa_1829_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1811_;
}
}
}
else
{
lean_dec(v_exponent_1830_);
lean_dec(v_mantissa_1829_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1808_;
}
}
else
{
lean_dec(v_val_1827_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1808_;
}
}
else
{
lean_dec(v___x_1826_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1808_;
}
}
}
else
{
lean_dec(v_exponent_1820_);
lean_dec(v_mantissa_1819_);
lean_dec_ref(v_a_1803_);
goto v___jp_1805_;
}
}
else
{
lean_dec(v_val_1817_);
lean_dec_ref(v_a_1803_);
goto v___jp_1805_;
}
}
else
{
lean_dec(v___x_1816_);
lean_dec_ref(v_a_1803_);
goto v___jp_1805_;
}
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
lean_dec_ref(v_a_1803_);
v___x_1895_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
return v___x_1896_;
}
v___jp_1805_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
return v___x_1807_;
}
v___jp_1808_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
v___jp_1811_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1812_);
return v___x_1813_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___boxed(lean_object* v_json_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(v_json_1897_, v_a_1898_);
lean_dec(v_json_1897_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(lean_object* v_json_1904_, lean_object* v_a_1905_){
_start:
{
if (lean_obj_tag(v_json_1904_) == 3)
{
lean_object* v_s_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1932_; 
v_s_1907_ = lean_ctor_get(v_json_1904_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_json_1904_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1909_ = v_json_1904_;
v_isShared_1910_ = v_isSharedCheck_1932_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_s_1907_);
lean_dec(v_json_1904_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1932_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1911_ = lean_unsigned_to_nat(0u);
v___x_1912_ = lean_string_utf8_byte_size(v_s_1907_);
v___x_1913_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1913_, 0, v_s_1907_);
lean_ctor_set(v___x_1913_, 1, v___x_1911_);
lean_ctor_set(v___x_1913_, 2, v___x_1912_);
v___x_1914_ = l_String_Slice_toNat_x3f(v___x_1913_);
lean_dec_ref_known(v___x_1913_, 3);
if (lean_obj_tag(v___x_1914_) == 1)
{
lean_object* v_val_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1927_; 
v_val_1915_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1917_ = v___x_1914_;
v_isShared_1918_ = v_isSharedCheck_1927_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_val_1915_);
lean_dec(v___x_1914_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1927_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
lean_ctor_set_tag(v___x_1917_, 0);
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_val_1915_);
v___x_1920_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1921_ = l_Lean_Expr_lit___override(v___x_1920_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v_a_1905_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set_tag(v___x_1909_, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1922_);
v___x_1924_ = v___x_1909_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
else
{
lean_object* v___x_1928_; lean_object* v___x_1930_; 
lean_dec(v___x_1914_);
lean_dec_ref(v_a_1905_);
v___x_1928_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1));
if (v_isShared_1910_ == 0)
{
lean_ctor_set_tag(v___x_1909_, 1);
lean_ctor_set(v___x_1909_, 0, v___x_1928_);
v___x_1930_ = v___x_1909_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
else
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
lean_dec_ref(v_a_1905_);
lean_dec(v_json_1904_);
v___x_1933_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1));
v___x_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
return v___x_1934_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___boxed(lean_object* v_json_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(v_json_1935_, v_a_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(lean_object* v_json_1942_, lean_object* v_a_1943_){
_start:
{
if (lean_obj_tag(v_json_1942_) == 3)
{
lean_object* v_s_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1955_; 
v_s_1945_ = lean_ctor_get(v_json_1942_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v_json_1942_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1947_ = v_json_1942_;
v_isShared_1948_ = v_isSharedCheck_1955_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_s_1945_);
lean_dec(v_json_1942_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1955_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
lean_ctor_set_tag(v___x_1947_, 1);
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_s_1945_);
v___x_1950_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = l_Lean_Expr_lit___override(v___x_1950_);
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
lean_ctor_set(v___x_1952_, 1, v_a_1943_);
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
return v___x_1953_;
}
}
}
else
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_dec_ref(v_a_1943_);
lean_dec(v_json_1942_);
v___x_1956_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1));
v___x_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
return v___x_1957_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___boxed(lean_object* v_json_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(v_json_1958_, v_a_1959_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(lean_object* v_json_1967_, lean_object* v_a_1968_){
_start:
{
if (lean_obj_tag(v_json_1967_) == 5)
{
lean_object* v_kvPairs_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_kvPairs_1976_ = lean_ctor_get(v_json_1967_, 0);
v___x_1977_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2));
v___x_1978_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1976_, v___x_1977_);
if (lean_obj_tag(v___x_1978_) == 1)
{
lean_object* v_val_1979_; 
v_val_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_val_1979_);
lean_dec_ref_known(v___x_1978_, 1);
if (lean_obj_tag(v_val_1979_) == 2)
{
lean_object* v_n_1980_; lean_object* v_mantissa_1981_; lean_object* v_exponent_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2027_; 
v_n_1980_ = lean_ctor_get(v_val_1979_, 0);
lean_inc_ref(v_n_1980_);
lean_dec_ref_known(v_val_1979_, 1);
v_mantissa_1981_ = lean_ctor_get(v_n_1980_, 0);
v_exponent_1982_ = lean_ctor_get(v_n_1980_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_n_1980_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_1984_ = v_n_1980_;
v_isShared_1985_ = v_isSharedCheck_2027_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_exponent_1982_);
lean_inc(v_mantissa_1981_);
lean_dec(v_n_1980_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2027_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v_natZero_1986_; lean_object* v_intZero_1987_; uint8_t v_isNeg_1988_; 
v_natZero_1986_ = lean_unsigned_to_nat(0u);
v_intZero_1987_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1988_ = lean_int_dec_lt(v_mantissa_1981_, v_intZero_1987_);
if (v_isNeg_1988_ == 0)
{
uint8_t v___x_1989_; 
v___x_1989_ = lean_nat_dec_eq(v_exponent_1982_, v_natZero_1986_);
lean_dec(v_exponent_1982_);
if (v___x_1989_ == 0)
{
lean_del_object(v___x_1984_);
lean_dec(v_mantissa_1981_);
lean_dec_ref(v_a_1968_);
goto v___jp_1970_;
}
else
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1990_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3));
v___x_1991_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1976_, v___x_1990_);
if (lean_obj_tag(v___x_1991_) == 1)
{
lean_object* v_val_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2026_; 
v_val_1992_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_1994_ = v___x_1991_;
v_isShared_1995_ = v_isSharedCheck_2026_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_val_1992_);
lean_dec(v___x_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2026_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
if (lean_obj_tag(v_val_1992_) == 5)
{
lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2024_; 
v_isSharedCheck_2024_ = !lean_is_exclusive(v_val_1992_);
if (v_isSharedCheck_2024_ == 0)
{
lean_object* v_unused_2025_; 
v_unused_2025_ = lean_ctor_get(v_val_1992_, 0);
lean_dec(v_unused_2025_);
v___x_1997_ = v_val_1992_;
v_isShared_1998_ = v_isSharedCheck_2024_;
goto v_resetjp_1996_;
}
else
{
lean_dec(v_val_1992_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2024_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v_exprMap_1999_; lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_exprMap_1999_ = lean_ctor_get(v_a_1968_, 3);
v_a_2000_ = lean_nat_abs(v_mantissa_1981_);
lean_dec(v_mantissa_1981_);
v___x_2001_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1999_, v_a_2000_);
if (lean_obj_tag(v___x_2001_) == 1)
{
lean_object* v_val_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2014_; 
lean_dec(v_a_2000_);
lean_del_object(v___x_1997_);
lean_del_object(v___x_1994_);
v_val_2002_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2004_ = v___x_2001_;
v_isShared_2005_ = v_isSharedCheck_2014_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_val_2002_);
lean_dec(v___x_2001_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2014_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2006_ = lean_box(0);
v___x_2007_ = l_Lean_Expr_mdata___override(v___x_2006_, v_val_2002_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v_a_1968_);
lean_ctor_set(v___x_1984_, 0, v___x_2007_);
v___x_2009_ = v___x_1984_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2007_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_a_1968_);
v___x_2009_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
lean_object* v___x_2011_; 
if (v_isShared_2005_ == 0)
{
lean_ctor_set_tag(v___x_2004_, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2009_);
v___x_2011_ = v___x_2004_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2009_);
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
else
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2019_; 
lean_dec(v___x_2001_);
lean_del_object(v___x_1984_);
lean_dec_ref(v_a_1968_);
v___x_2015_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2016_ = l_Nat_reprFast(v_a_2000_);
v___x_2017_ = lean_string_append(v___x_2015_, v___x_2016_);
lean_dec_ref(v___x_2016_);
if (v_isShared_1998_ == 0)
{
lean_ctor_set_tag(v___x_1997_, 18);
lean_ctor_set(v___x_1997_, 0, v___x_2017_);
v___x_2019_ = v___x_1997_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2021_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2019_);
v___x_2021_ = v___x_1994_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
}
else
{
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1984_);
lean_dec(v_mantissa_1981_);
lean_dec_ref(v_a_1968_);
goto v___jp_1973_;
}
}
}
else
{
lean_dec(v___x_1991_);
lean_del_object(v___x_1984_);
lean_dec(v_mantissa_1981_);
lean_dec_ref(v_a_1968_);
goto v___jp_1973_;
}
}
}
else
{
lean_del_object(v___x_1984_);
lean_dec(v_exponent_1982_);
lean_dec(v_mantissa_1981_);
lean_dec_ref(v_a_1968_);
goto v___jp_1970_;
}
}
}
else
{
lean_dec(v_val_1979_);
lean_dec_ref(v_a_1968_);
goto v___jp_1970_;
}
}
else
{
lean_dec(v___x_1978_);
lean_dec_ref(v_a_1968_);
goto v___jp_1970_;
}
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
lean_dec_ref(v_a_1968_);
v___x_2028_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1));
v___x_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
return v___x_2029_;
}
v___jp_1970_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1));
v___x_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1971_);
return v___x_1972_;
}
v___jp_1973_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1));
v___x_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
return v___x_1975_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___boxed(lean_object* v_json_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(v_json_2030_, v_a_2031_);
lean_dec(v_json_2030_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(lean_object* v_x_2037_, lean_object* v_x_2038_, lean_object* v___y_2039_){
_start:
{
if (lean_obj_tag(v_x_2037_) == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2044_ = l_List_reverse___redArg(v_x_2038_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
lean_ctor_set(v___x_2045_, 1, v___y_2039_);
v___x_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
return v___x_2046_;
}
else
{
lean_object* v_head_2047_; 
v_head_2047_ = lean_ctor_get(v_x_2037_, 0);
lean_inc(v_head_2047_);
if (lean_obj_tag(v_head_2047_) == 2)
{
lean_object* v_n_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2079_; 
v_n_2048_ = lean_ctor_get(v_head_2047_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v_head_2047_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2050_ = v_head_2047_;
v_isShared_2051_ = v_isSharedCheck_2079_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_n_2048_);
lean_dec(v_head_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2079_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v_tail_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2077_; 
v_tail_2052_ = lean_ctor_get(v_x_2037_, 1);
v_isSharedCheck_2077_ = !lean_is_exclusive(v_x_2037_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; 
v_unused_2078_ = lean_ctor_get(v_x_2037_, 0);
lean_dec(v_unused_2078_);
v___x_2054_ = v_x_2037_;
v_isShared_2055_ = v_isSharedCheck_2077_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_tail_2052_);
lean_dec(v_x_2037_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2077_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v_mantissa_2056_; lean_object* v_exponent_2057_; lean_object* v_natZero_2058_; lean_object* v_intZero_2059_; uint8_t v_isNeg_2060_; 
v_mantissa_2056_ = lean_ctor_get(v_n_2048_, 0);
lean_inc(v_mantissa_2056_);
v_exponent_2057_ = lean_ctor_get(v_n_2048_, 1);
lean_inc(v_exponent_2057_);
lean_dec_ref(v_n_2048_);
v_natZero_2058_ = lean_unsigned_to_nat(0u);
v_intZero_2059_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2060_ = lean_int_dec_lt(v_mantissa_2056_, v_intZero_2059_);
if (v_isNeg_2060_ == 0)
{
uint8_t v___x_2061_; 
v___x_2061_ = lean_nat_dec_eq(v_exponent_2057_, v_natZero_2058_);
lean_dec(v_exponent_2057_);
if (v___x_2061_ == 0)
{
lean_dec(v_mantissa_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_tail_2052_);
lean_del_object(v___x_2050_);
lean_dec_ref(v___y_2039_);
lean_dec(v_x_2038_);
goto v___jp_2041_;
}
else
{
lean_object* v_nameMap_2062_; lean_object* v_a_2063_; lean_object* v___x_2064_; 
v_nameMap_2062_ = lean_ctor_get(v___y_2039_, 1);
v_a_2063_ = lean_nat_abs(v_mantissa_2056_);
lean_dec(v_mantissa_2056_);
v___x_2064_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2062_, v_a_2063_);
if (lean_obj_tag(v___x_2064_) == 1)
{
lean_object* v_val_2065_; lean_object* v___x_2067_; 
lean_dec(v_a_2063_);
lean_del_object(v___x_2050_);
v_val_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_val_2065_);
lean_dec_ref_known(v___x_2064_, 1);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 1, v_x_2038_);
lean_ctor_set(v___x_2054_, 0, v_val_2065_);
v___x_2067_ = v___x_2054_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_val_2065_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_x_2038_);
v___x_2067_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_x_2037_ = v_tail_2052_;
v_x_2038_ = v___x_2067_;
goto _start;
}
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2074_; 
lean_dec(v___x_2064_);
lean_del_object(v___x_2054_);
lean_dec(v_tail_2052_);
lean_dec_ref(v___y_2039_);
lean_dec(v_x_2038_);
v___x_2070_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2071_ = l_Nat_reprFast(v_a_2063_);
v___x_2072_ = lean_string_append(v___x_2070_, v___x_2071_);
lean_dec_ref(v___x_2071_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set_tag(v___x_2050_, 18);
lean_ctor_set(v___x_2050_, 0, v___x_2072_);
v___x_2074_ = v___x_2050_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2074_);
return v___x_2075_;
}
}
}
}
else
{
lean_dec(v_exponent_2057_);
lean_dec(v_mantissa_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_tail_2052_);
lean_del_object(v___x_2050_);
lean_dec_ref(v___y_2039_);
lean_dec(v_x_2038_);
goto v___jp_2041_;
}
}
}
}
else
{
lean_dec_ref_known(v_x_2037_, 2);
lean_dec(v_head_2047_);
lean_dec_ref(v___y_2039_);
lean_dec(v_x_2038_);
goto v___jp_2041_;
}
}
v___jp_2041_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1));
v___x_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___boxed(lean_object* v_x_2080_, lean_object* v_x_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(v_x_2080_, v_x_2081_, v___y_2082_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(lean_object* v_idxs_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2088_ = lean_array_to_list(v_idxs_2085_);
v___x_2089_ = lean_box(0);
v___x_2090_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(v___x_2088_, v___x_2089_, v_a_2086_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList___boxed(lean_object* v_idxs_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_idxs_2091_, v_a_2092_);
return v_res_2094_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(lean_object* v_a_2095_, lean_object* v_x_2096_){
_start:
{
if (lean_obj_tag(v_x_2096_) == 0)
{
uint8_t v___x_2097_; 
v___x_2097_ = 0;
return v___x_2097_;
}
else
{
lean_object* v_key_2098_; lean_object* v_tail_2099_; uint8_t v___x_2100_; 
v_key_2098_ = lean_ctor_get(v_x_2096_, 0);
v_tail_2099_ = lean_ctor_get(v_x_2096_, 2);
v___x_2100_ = lean_name_eq(v_key_2098_, v_a_2095_);
if (v___x_2100_ == 0)
{
v_x_2096_ = v_tail_2099_;
goto _start;
}
else
{
return v___x_2100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg___boxed(lean_object* v_a_2102_, lean_object* v_x_2103_){
_start:
{
uint8_t v_res_2104_; lean_object* v_r_2105_; 
v_res_2104_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2102_, v_x_2103_);
lean_dec(v_x_2103_);
lean_dec(v_a_2102_);
v_r_2105_ = lean_box(v_res_2104_);
return v_r_2105_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(lean_object* v_m_2106_, lean_object* v_a_2107_){
_start:
{
lean_object* v_buckets_2108_; lean_object* v___x_2109_; uint64_t v___y_2111_; lean_object* v___x_2125_; 
v_buckets_2108_ = lean_ctor_get(v_m_2106_, 1);
v___x_2109_ = lean_array_get_size(v_buckets_2108_);
v___x_2125_ = l_unsafeCast___redArg(v_a_2107_);
if (lean_obj_tag(v___x_2125_) == 0)
{
uint64_t v___x_2126_; 
v___x_2126_ = 1723ULL;
v___y_2111_ = v___x_2126_;
goto v___jp_2110_;
}
else
{
uint64_t v_hash_2127_; 
v_hash_2127_ = lean_ctor_get_uint64(v___x_2125_, sizeof(void*)*2);
lean_dec(v___x_2125_);
v___y_2111_ = v_hash_2127_;
goto v___jp_2110_;
}
v___jp_2110_:
{
uint64_t v___x_2112_; uint64_t v___x_2113_; uint64_t v_fold_2114_; uint64_t v___x_2115_; uint64_t v___x_2116_; uint64_t v___x_2117_; size_t v___x_2118_; size_t v___x_2119_; size_t v___x_2120_; size_t v___x_2121_; size_t v___x_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; 
v___x_2112_ = 32ULL;
v___x_2113_ = lean_uint64_shift_right(v___y_2111_, v___x_2112_);
v_fold_2114_ = lean_uint64_xor(v___y_2111_, v___x_2113_);
v___x_2115_ = 16ULL;
v___x_2116_ = lean_uint64_shift_right(v_fold_2114_, v___x_2115_);
v___x_2117_ = lean_uint64_xor(v_fold_2114_, v___x_2116_);
v___x_2118_ = lean_uint64_to_usize(v___x_2117_);
v___x_2119_ = lean_usize_of_nat(v___x_2109_);
v___x_2120_ = ((size_t)1ULL);
v___x_2121_ = lean_usize_sub(v___x_2119_, v___x_2120_);
v___x_2122_ = lean_usize_land(v___x_2118_, v___x_2121_);
v___x_2123_ = lean_array_uget_borrowed(v_buckets_2108_, v___x_2122_);
v___x_2124_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2107_, v___x_2123_);
return v___x_2124_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg___boxed(lean_object* v_m_2128_, lean_object* v_a_2129_){
_start:
{
uint8_t v_res_2130_; lean_object* v_r_2131_; 
v_res_2130_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_m_2128_, v_a_2129_);
lean_dec(v_a_2129_);
lean_dec_ref(v_m_2128_);
v_r_2131_ = lean_box(v_res_2130_);
return v_r_2131_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_2132_, lean_object* v_x_2133_){
_start:
{
if (lean_obj_tag(v_x_2133_) == 0)
{
return v_x_2132_;
}
else
{
lean_object* v_key_2134_; lean_object* v_value_2135_; lean_object* v_tail_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2163_; 
v_key_2134_ = lean_ctor_get(v_x_2133_, 0);
v_value_2135_ = lean_ctor_get(v_x_2133_, 1);
v_tail_2136_ = lean_ctor_get(v_x_2133_, 2);
v_isSharedCheck_2163_ = !lean_is_exclusive(v_x_2133_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2138_ = v_x_2133_;
v_isShared_2139_ = v_isSharedCheck_2163_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_tail_2136_);
lean_inc(v_value_2135_);
lean_inc(v_key_2134_);
lean_dec(v_x_2133_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2163_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; uint64_t v___y_2142_; lean_object* v___x_2160_; 
v___x_2140_ = lean_array_get_size(v_x_2132_);
v___x_2160_ = l_unsafeCast___redArg(v_key_2134_);
if (lean_obj_tag(v___x_2160_) == 0)
{
uint64_t v___x_2161_; 
v___x_2161_ = 1723ULL;
v___y_2142_ = v___x_2161_;
goto v___jp_2141_;
}
else
{
uint64_t v_hash_2162_; 
v_hash_2162_ = lean_ctor_get_uint64(v___x_2160_, sizeof(void*)*2);
lean_dec(v___x_2160_);
v___y_2142_ = v_hash_2162_;
goto v___jp_2141_;
}
v___jp_2141_:
{
uint64_t v___x_2143_; uint64_t v___x_2144_; uint64_t v_fold_2145_; uint64_t v___x_2146_; uint64_t v___x_2147_; uint64_t v___x_2148_; size_t v___x_2149_; size_t v___x_2150_; size_t v___x_2151_; size_t v___x_2152_; size_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2156_; 
v___x_2143_ = 32ULL;
v___x_2144_ = lean_uint64_shift_right(v___y_2142_, v___x_2143_);
v_fold_2145_ = lean_uint64_xor(v___y_2142_, v___x_2144_);
v___x_2146_ = 16ULL;
v___x_2147_ = lean_uint64_shift_right(v_fold_2145_, v___x_2146_);
v___x_2148_ = lean_uint64_xor(v_fold_2145_, v___x_2147_);
v___x_2149_ = lean_uint64_to_usize(v___x_2148_);
v___x_2150_ = lean_usize_of_nat(v___x_2140_);
v___x_2151_ = ((size_t)1ULL);
v___x_2152_ = lean_usize_sub(v___x_2150_, v___x_2151_);
v___x_2153_ = lean_usize_land(v___x_2149_, v___x_2152_);
v___x_2154_ = lean_array_uget_borrowed(v_x_2132_, v___x_2153_);
lean_inc(v___x_2154_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 2, v___x_2154_);
v___x_2156_ = v___x_2138_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_key_2134_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v_value_2135_);
lean_ctor_set(v_reuseFailAlloc_2159_, 2, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; 
v___x_2157_ = lean_array_uset(v_x_2132_, v___x_2153_, v___x_2156_);
v_x_2132_ = v___x_2157_;
v_x_2133_ = v_tail_2136_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(lean_object* v_i_2164_, lean_object* v_source_2165_, lean_object* v_target_2166_){
_start:
{
lean_object* v___x_2167_; uint8_t v___x_2168_; 
v___x_2167_ = lean_array_get_size(v_source_2165_);
v___x_2168_ = lean_nat_dec_lt(v_i_2164_, v___x_2167_);
if (v___x_2168_ == 0)
{
lean_dec_ref(v_source_2165_);
lean_dec(v_i_2164_);
return v_target_2166_;
}
else
{
lean_object* v_es_2169_; lean_object* v___x_2170_; lean_object* v_source_2171_; lean_object* v_target_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v_es_2169_ = lean_array_fget(v_source_2165_, v_i_2164_);
v___x_2170_ = lean_box(0);
v_source_2171_ = lean_array_fset(v_source_2165_, v_i_2164_, v___x_2170_);
v_target_2172_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(v_target_2166_, v_es_2169_);
v___x_2173_ = lean_unsigned_to_nat(1u);
v___x_2174_ = lean_nat_add(v_i_2164_, v___x_2173_);
lean_dec(v_i_2164_);
v_i_2164_ = v___x_2174_;
v_source_2165_ = v_source_2171_;
v_target_2166_ = v_target_2172_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(lean_object* v_data_2176_){
_start:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v_nbuckets_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2177_ = lean_array_get_size(v_data_2176_);
v___x_2178_ = lean_unsigned_to_nat(2u);
v_nbuckets_2179_ = lean_nat_mul(v___x_2177_, v___x_2178_);
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = lean_box(0);
v___x_2182_ = lean_mk_array(v_nbuckets_2179_, v___x_2181_);
v___x_2183_ = lean_array_propagate_mark(v_data_2176_, v___x_2182_);
v___x_2184_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(v___x_2180_, v_data_2176_, v___x_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(lean_object* v_a_2185_, lean_object* v_b_2186_, lean_object* v_x_2187_){
_start:
{
if (lean_obj_tag(v_x_2187_) == 0)
{
lean_dec(v_b_2186_);
lean_dec(v_a_2185_);
return v_x_2187_;
}
else
{
lean_object* v_key_2188_; lean_object* v_value_2189_; lean_object* v_tail_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2202_; 
v_key_2188_ = lean_ctor_get(v_x_2187_, 0);
v_value_2189_ = lean_ctor_get(v_x_2187_, 1);
v_tail_2190_ = lean_ctor_get(v_x_2187_, 2);
v_isSharedCheck_2202_ = !lean_is_exclusive(v_x_2187_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2192_ = v_x_2187_;
v_isShared_2193_ = v_isSharedCheck_2202_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_tail_2190_);
lean_inc(v_value_2189_);
lean_inc(v_key_2188_);
lean_dec(v_x_2187_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2202_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
uint8_t v___x_2194_; 
v___x_2194_ = lean_name_eq(v_key_2188_, v_a_2185_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2197_; 
v___x_2195_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(v_a_2185_, v_b_2186_, v_tail_2190_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 2, v___x_2195_);
v___x_2197_ = v___x_2192_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_key_2188_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v_value_2189_);
lean_ctor_set(v_reuseFailAlloc_2198_, 2, v___x_2195_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
else
{
lean_object* v___x_2200_; 
lean_dec(v_value_2189_);
lean_dec(v_key_2188_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 1, v_b_2186_);
lean_ctor_set(v___x_2192_, 0, v_a_2185_);
v___x_2200_ = v___x_2192_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2185_);
lean_ctor_set(v_reuseFailAlloc_2201_, 1, v_b_2186_);
lean_ctor_set(v_reuseFailAlloc_2201_, 2, v_tail_2190_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(lean_object* v_m_2203_, lean_object* v_a_2204_, lean_object* v_b_2205_){
_start:
{
lean_object* v_size_2206_; lean_object* v_buckets_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2254_; 
v_size_2206_ = lean_ctor_get(v_m_2203_, 0);
v_buckets_2207_ = lean_ctor_get(v_m_2203_, 1);
v_isSharedCheck_2254_ = !lean_is_exclusive(v_m_2203_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2209_ = v_m_2203_;
v_isShared_2210_ = v_isSharedCheck_2254_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_buckets_2207_);
lean_inc(v_size_2206_);
lean_dec(v_m_2203_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2254_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; uint64_t v___y_2213_; lean_object* v___x_2251_; 
v___x_2211_ = lean_array_get_size(v_buckets_2207_);
v___x_2251_ = l_unsafeCast___redArg(v_a_2204_);
if (lean_obj_tag(v___x_2251_) == 0)
{
uint64_t v___x_2252_; 
v___x_2252_ = 1723ULL;
v___y_2213_ = v___x_2252_;
goto v___jp_2212_;
}
else
{
uint64_t v_hash_2253_; 
v_hash_2253_ = lean_ctor_get_uint64(v___x_2251_, sizeof(void*)*2);
lean_dec(v___x_2251_);
v___y_2213_ = v_hash_2253_;
goto v___jp_2212_;
}
v___jp_2212_:
{
uint64_t v___x_2214_; uint64_t v___x_2215_; uint64_t v_fold_2216_; uint64_t v___x_2217_; uint64_t v___x_2218_; uint64_t v___x_2219_; size_t v___x_2220_; size_t v___x_2221_; size_t v___x_2222_; size_t v___x_2223_; size_t v___x_2224_; lean_object* v_bkt_2225_; uint8_t v___x_2226_; 
v___x_2214_ = 32ULL;
v___x_2215_ = lean_uint64_shift_right(v___y_2213_, v___x_2214_);
v_fold_2216_ = lean_uint64_xor(v___y_2213_, v___x_2215_);
v___x_2217_ = 16ULL;
v___x_2218_ = lean_uint64_shift_right(v_fold_2216_, v___x_2217_);
v___x_2219_ = lean_uint64_xor(v_fold_2216_, v___x_2218_);
v___x_2220_ = lean_uint64_to_usize(v___x_2219_);
v___x_2221_ = lean_usize_of_nat(v___x_2211_);
v___x_2222_ = ((size_t)1ULL);
v___x_2223_ = lean_usize_sub(v___x_2221_, v___x_2222_);
v___x_2224_ = lean_usize_land(v___x_2220_, v___x_2223_);
v_bkt_2225_ = lean_array_uget_borrowed(v_buckets_2207_, v___x_2224_);
v___x_2226_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2204_, v_bkt_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; lean_object* v_size_x27_2228_; lean_object* v___x_2229_; lean_object* v_buckets_x27_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2227_ = lean_unsigned_to_nat(1u);
v_size_x27_2228_ = lean_nat_add(v_size_2206_, v___x_2227_);
lean_dec(v_size_2206_);
lean_inc(v_bkt_2225_);
v___x_2229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2229_, 0, v_a_2204_);
lean_ctor_set(v___x_2229_, 1, v_b_2205_);
lean_ctor_set(v___x_2229_, 2, v_bkt_2225_);
v_buckets_x27_2230_ = lean_array_uset(v_buckets_2207_, v___x_2224_, v___x_2229_);
v___x_2231_ = lean_unsigned_to_nat(4u);
v___x_2232_ = lean_nat_mul(v_size_x27_2228_, v___x_2231_);
v___x_2233_ = lean_unsigned_to_nat(3u);
v___x_2234_ = lean_nat_div(v___x_2232_, v___x_2233_);
lean_dec(v___x_2232_);
v___x_2235_ = lean_array_get_size(v_buckets_x27_2230_);
v___x_2236_ = lean_nat_dec_le(v___x_2234_, v___x_2235_);
lean_dec(v___x_2234_);
if (v___x_2236_ == 0)
{
lean_object* v_val_2237_; lean_object* v___x_2239_; 
v_val_2237_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(v_buckets_x27_2230_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v_val_2237_);
lean_ctor_set(v___x_2209_, 0, v_size_x27_2228_);
v___x_2239_ = v___x_2209_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_size_x27_2228_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v_val_2237_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
else
{
lean_object* v___x_2242_; 
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v_buckets_x27_2230_);
lean_ctor_set(v___x_2209_, 0, v_size_x27_2228_);
v___x_2242_ = v___x_2209_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_size_x27_2228_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v_buckets_x27_2230_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
else
{
lean_object* v___x_2244_; lean_object* v_buckets_x27_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2249_; 
lean_inc(v_bkt_2225_);
v___x_2244_ = lean_box(0);
v_buckets_x27_2245_ = lean_array_uset(v_buckets_2207_, v___x_2224_, v___x_2244_);
v___x_2246_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(v_a_2204_, v_b_2205_, v_bkt_2225_);
v___x_2247_ = lean_array_uset(v_buckets_x27_2245_, v___x_2224_, v___x_2246_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___x_2247_);
v___x_2249_ = v___x_2209_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_size_2206_);
lean_ctor_set(v_reuseFailAlloc_2250_, 1, v___x_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(lean_object* v_data_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2275_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2276_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2260_, v___x_2275_);
if (lean_obj_tag(v___x_2276_) == 1)
{
lean_object* v_val_2277_; 
v_val_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_val_2277_);
lean_dec_ref_known(v___x_2276_, 1);
if (lean_obj_tag(v_val_2277_) == 2)
{
lean_object* v_n_2278_; lean_object* v_mantissa_2279_; lean_object* v_exponent_2280_; lean_object* v_natZero_2281_; lean_object* v_intZero_2282_; uint8_t v_isNeg_2283_; 
v_n_2278_ = lean_ctor_get(v_val_2277_, 0);
lean_inc_ref(v_n_2278_);
lean_dec_ref_known(v_val_2277_, 1);
v_mantissa_2279_ = lean_ctor_get(v_n_2278_, 0);
lean_inc(v_mantissa_2279_);
v_exponent_2280_ = lean_ctor_get(v_n_2278_, 1);
lean_inc(v_exponent_2280_);
lean_dec_ref(v_n_2278_);
v_natZero_2281_ = lean_unsigned_to_nat(0u);
v_intZero_2282_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2283_ = lean_int_dec_lt(v_mantissa_2279_, v_intZero_2282_);
if (v_isNeg_2283_ == 0)
{
uint8_t v___x_2284_; 
v___x_2284_ = lean_nat_dec_eq(v_exponent_2280_, v_natZero_2281_);
lean_dec(v_exponent_2280_);
if (v___x_2284_ == 0)
{
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2263_;
}
else
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2286_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2260_, v___x_2285_);
if (lean_obj_tag(v___x_2286_) == 1)
{
lean_object* v_val_2287_; 
v_val_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_val_2287_);
lean_dec_ref_known(v___x_2286_, 1);
if (lean_obj_tag(v_val_2287_) == 4)
{
lean_object* v_elems_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_elems_2288_ = lean_ctor_get(v_val_2287_, 0);
lean_inc_ref(v_elems_2288_);
lean_dec_ref_known(v_val_2287_, 1);
v___x_2289_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2290_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2260_, v___x_2289_);
if (lean_obj_tag(v___x_2290_) == 1)
{
lean_object* v_val_2291_; 
v_val_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_val_2291_);
lean_dec_ref_known(v___x_2290_, 1);
if (lean_obj_tag(v_val_2291_) == 2)
{
lean_object* v_n_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2399_; 
v_n_2292_ = lean_ctor_get(v_val_2291_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v_val_2291_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2294_ = v_val_2291_;
v_isShared_2295_ = v_isSharedCheck_2399_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_n_2292_);
lean_dec(v_val_2291_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2399_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v_mantissa_2296_; lean_object* v_exponent_2297_; uint8_t v_isNeg_2298_; 
v_mantissa_2296_ = lean_ctor_get(v_n_2292_, 0);
lean_inc(v_mantissa_2296_);
v_exponent_2297_ = lean_ctor_get(v_n_2292_, 1);
lean_inc(v_exponent_2297_);
lean_dec_ref(v_n_2292_);
v_isNeg_2298_ = lean_int_dec_lt(v_mantissa_2296_, v_intZero_2282_);
if (v_isNeg_2298_ == 0)
{
uint8_t v___x_2299_; 
v___x_2299_ = lean_nat_dec_eq(v_exponent_2297_, v_natZero_2281_);
lean_dec(v_exponent_2297_);
if (v___x_2299_ == 0)
{
lean_dec(v_mantissa_2296_);
lean_del_object(v___x_2294_);
lean_dec_ref(v_elems_2288_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2269_;
}
else
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_2301_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2260_, v___x_2300_);
if (lean_obj_tag(v___x_2301_) == 1)
{
lean_object* v_val_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2398_; 
v_val_2302_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2304_ = v___x_2301_;
v_isShared_2305_ = v_isSharedCheck_2398_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_val_2302_);
lean_dec(v___x_2301_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2398_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
if (lean_obj_tag(v_val_2302_) == 1)
{
uint8_t v_b_2306_; lean_object* v_nameMap_2307_; lean_object* v_a_2308_; lean_object* v___x_2309_; 
v_b_2306_ = lean_ctor_get_uint8(v_val_2302_, 0);
lean_dec_ref_known(v_val_2302_, 0);
v_nameMap_2307_ = lean_ctor_get(v_a_2261_, 1);
v_a_2308_ = lean_nat_abs(v_mantissa_2279_);
lean_dec(v_mantissa_2279_);
v___x_2309_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2307_, v_a_2308_);
if (lean_obj_tag(v___x_2309_) == 1)
{
lean_object* v_val_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2388_; 
lean_dec(v_a_2308_);
lean_del_object(v___x_2304_);
lean_del_object(v___x_2294_);
v_val_2310_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2312_ = v___x_2309_;
v_isShared_2313_ = v_isSharedCheck_2388_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_val_2310_);
lean_dec(v___x_2309_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2388_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v_a_2314_; lean_object* v___x_2315_; 
v_a_2314_ = lean_nat_abs(v_mantissa_2296_);
lean_dec(v_mantissa_2296_);
v___x_2315_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2288_, v_a_2261_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2379_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2318_ = v___x_2315_;
v_isShared_2319_ = v_isSharedCheck_2379_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2315_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2379_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v_snd_2320_; lean_object* v_fst_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2378_; 
v_snd_2320_ = lean_ctor_get(v_a_2316_, 1);
v_fst_2321_ = lean_ctor_get(v_a_2316_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_a_2316_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2323_ = v_a_2316_;
v_isShared_2324_ = v_isSharedCheck_2378_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_snd_2320_);
lean_inc(v_fst_2321_);
lean_dec(v_a_2316_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2378_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v_stream_2325_; lean_object* v_nameMap_2326_; lean_object* v_levelMap_2327_; lean_object* v_exprMap_2328_; lean_object* v_recursorRuleMap_2329_; lean_object* v_constMap_2330_; lean_object* v_constOrder_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2377_; 
v_stream_2325_ = lean_ctor_get(v_snd_2320_, 0);
v_nameMap_2326_ = lean_ctor_get(v_snd_2320_, 1);
v_levelMap_2327_ = lean_ctor_get(v_snd_2320_, 2);
v_exprMap_2328_ = lean_ctor_get(v_snd_2320_, 3);
v_recursorRuleMap_2329_ = lean_ctor_get(v_snd_2320_, 4);
v_constMap_2330_ = lean_ctor_get(v_snd_2320_, 5);
v_constOrder_2331_ = lean_ctor_get(v_snd_2320_, 6);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_snd_2320_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2333_ = v_snd_2320_;
v_isShared_2334_ = v_isSharedCheck_2377_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_constOrder_2331_);
lean_inc(v_constMap_2330_);
lean_inc(v_recursorRuleMap_2329_);
lean_inc(v_exprMap_2328_);
lean_inc(v_levelMap_2327_);
lean_inc(v_nameMap_2326_);
lean_inc(v_stream_2325_);
lean_dec(v_snd_2320_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2377_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; 
v___x_2335_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2328_, v_a_2314_);
if (lean_obj_tag(v___x_2335_) == 1)
{
lean_object* v_val_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2367_; 
lean_dec(v_a_2314_);
lean_del_object(v___x_2312_);
v_val_2336_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2338_ = v___x_2335_;
v_isShared_2339_ = v_isSharedCheck_2367_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_val_2336_);
lean_dec(v___x_2335_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2367_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2340_; uint8_t v___x_2341_; 
lean_inc(v_val_2310_);
v___x_2340_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2340_, 0, v_val_2310_);
lean_ctor_set(v___x_2340_, 1, v_fst_2321_);
lean_ctor_set(v___x_2340_, 2, v_val_2336_);
v___x_2341_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_2330_, v_val_2310_);
if (v___x_2341_ == 0)
{
lean_object* v___x_2342_; lean_object* v___x_2344_; 
v___x_2342_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2342_, 0, v___x_2340_);
lean_ctor_set_uint8(v___x_2342_, sizeof(void*)*1, v_b_2306_);
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2342_);
v___x_2344_ = v___x_2338_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2342_);
v___x_2344_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2345_ = lean_box(0);
lean_inc(v_val_2310_);
v___x_2346_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_2330_, v_val_2310_, v___x_2344_);
v___x_2347_ = lean_array_push(v_constOrder_2331_, v_val_2310_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 6, v___x_2347_);
lean_ctor_set(v___x_2333_, 5, v___x_2346_);
v___x_2349_ = v___x_2333_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_stream_2325_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v_nameMap_2326_);
lean_ctor_set(v_reuseFailAlloc_2356_, 2, v_levelMap_2327_);
lean_ctor_set(v_reuseFailAlloc_2356_, 3, v_exprMap_2328_);
lean_ctor_set(v_reuseFailAlloc_2356_, 4, v_recursorRuleMap_2329_);
lean_ctor_set(v_reuseFailAlloc_2356_, 5, v___x_2346_);
lean_ctor_set(v_reuseFailAlloc_2356_, 6, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2351_; 
if (v_isShared_2324_ == 0)
{
lean_ctor_set(v___x_2323_, 1, v___x_2349_);
lean_ctor_set(v___x_2323_, 0, v___x_2345_);
v___x_2351_ = v___x_2323_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2345_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2353_; 
if (v_isShared_2319_ == 0)
{
lean_ctor_set(v___x_2318_, 0, v___x_2351_);
v___x_2353_ = v___x_2318_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
}
else
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
lean_dec_ref_known(v___x_2340_, 3);
lean_del_object(v___x_2333_);
lean_dec_ref(v_constOrder_2331_);
lean_dec_ref(v_constMap_2330_);
lean_dec_ref(v_recursorRuleMap_2329_);
lean_dec_ref(v_exprMap_2328_);
lean_dec_ref(v_levelMap_2327_);
lean_dec_ref(v_nameMap_2326_);
lean_dec_ref(v_stream_2325_);
lean_del_object(v___x_2323_);
v___x_2358_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_2359_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2310_, v___x_2341_);
v___x_2360_ = lean_string_append(v___x_2358_, v___x_2359_);
lean_dec_ref(v___x_2359_);
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 18);
lean_ctor_set(v___x_2338_, 0, v___x_2360_);
v___x_2362_ = v___x_2338_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2364_; 
if (v_isShared_2319_ == 0)
{
lean_ctor_set_tag(v___x_2318_, 1);
lean_ctor_set(v___x_2318_, 0, v___x_2362_);
v___x_2364_ = v___x_2318_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
else
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2372_; 
lean_dec(v___x_2335_);
lean_del_object(v___x_2333_);
lean_dec_ref(v_constOrder_2331_);
lean_dec_ref(v_constMap_2330_);
lean_dec_ref(v_recursorRuleMap_2329_);
lean_dec_ref(v_exprMap_2328_);
lean_dec_ref(v_levelMap_2327_);
lean_dec_ref(v_nameMap_2326_);
lean_dec_ref(v_stream_2325_);
lean_del_object(v___x_2323_);
lean_dec(v_fst_2321_);
lean_dec(v_val_2310_);
v___x_2368_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2369_ = l_Nat_reprFast(v_a_2314_);
v___x_2370_ = lean_string_append(v___x_2368_, v___x_2369_);
lean_dec_ref(v___x_2369_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set_tag(v___x_2312_, 18);
lean_ctor_set(v___x_2312_, 0, v___x_2370_);
v___x_2372_ = v___x_2312_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2374_; 
if (v_isShared_2319_ == 0)
{
lean_ctor_set_tag(v___x_2318_, 1);
lean_ctor_set(v___x_2318_, 0, v___x_2372_);
v___x_2374_ = v___x_2318_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2387_; 
lean_dec(v_a_2314_);
lean_del_object(v___x_2312_);
lean_dec(v_val_2310_);
v_a_2380_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2382_ = v___x_2315_;
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2315_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2385_; 
if (v_isShared_2383_ == 0)
{
v___x_2385_ = v___x_2382_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_a_2380_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
}
}
else
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2393_; 
lean_dec(v___x_2309_);
lean_dec(v_mantissa_2296_);
lean_dec_ref(v_elems_2288_);
lean_dec_ref(v_a_2261_);
v___x_2389_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2390_ = l_Nat_reprFast(v_a_2308_);
v___x_2391_ = lean_string_append(v___x_2389_, v___x_2390_);
lean_dec_ref(v___x_2390_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set_tag(v___x_2304_, 18);
lean_ctor_set(v___x_2304_, 0, v___x_2391_);
v___x_2393_ = v___x_2304_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2391_);
v___x_2393_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
lean_object* v___x_2395_; 
if (v_isShared_2295_ == 0)
{
lean_ctor_set_tag(v___x_2294_, 1);
lean_ctor_set(v___x_2294_, 0, v___x_2393_);
v___x_2395_ = v___x_2294_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
else
{
lean_del_object(v___x_2304_);
lean_dec(v_val_2302_);
lean_dec(v_mantissa_2296_);
lean_del_object(v___x_2294_);
lean_dec_ref(v_elems_2288_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2272_;
}
}
}
else
{
lean_dec(v___x_2301_);
lean_dec(v_mantissa_2296_);
lean_del_object(v___x_2294_);
lean_dec_ref(v_elems_2288_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2272_;
}
}
}
else
{
lean_dec(v_exponent_2297_);
lean_dec(v_mantissa_2296_);
lean_del_object(v___x_2294_);
lean_dec_ref(v_elems_2288_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2269_;
}
}
}
else
{
lean_dec(v_val_2291_);
lean_dec_ref(v_elems_2288_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2269_;
}
}
else
{
lean_dec(v___x_2290_);
lean_dec_ref(v_elems_2288_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2269_;
}
}
else
{
lean_dec(v_val_2287_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2266_;
}
}
else
{
lean_dec(v___x_2286_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2266_;
}
}
}
else
{
lean_dec(v_exponent_2280_);
lean_dec(v_mantissa_2279_);
lean_dec_ref(v_a_2261_);
goto v___jp_2263_;
}
}
else
{
lean_dec(v_val_2277_);
lean_dec_ref(v_a_2261_);
goto v___jp_2263_;
}
}
else
{
lean_dec(v___x_2276_);
lean_dec_ref(v_a_2261_);
goto v___jp_2263_;
}
v___jp_2263_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2264_);
return v___x_2265_;
}
v___jp_2266_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
return v___x_2268_;
}
v___jp_2269_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
return v___x_2271_;
}
v___jp_2272_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2273_);
return v___x_2274_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___boxed(lean_object* v_data_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(v_data_2400_, v_a_2401_);
lean_dec(v_data_2400_);
return v_res_2403_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0(lean_object* v_00_u03b2_2404_, lean_object* v_m_2405_, lean_object* v_a_2406_){
_start:
{
uint8_t v___x_2407_; 
v___x_2407_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_m_2405_, v_a_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___boxed(lean_object* v_00_u03b2_2408_, lean_object* v_m_2409_, lean_object* v_a_2410_){
_start:
{
uint8_t v_res_2411_; lean_object* v_r_2412_; 
v_res_2411_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0(v_00_u03b2_2408_, v_m_2409_, v_a_2410_);
lean_dec(v_a_2410_);
lean_dec_ref(v_m_2409_);
v_r_2412_ = lean_box(v_res_2411_);
return v_r_2412_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1(lean_object* v_00_u03b2_2413_, lean_object* v_m_2414_, lean_object* v_a_2415_, lean_object* v_b_2416_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_m_2414_, v_a_2415_, v_b_2416_);
return v___x_2417_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0(lean_object* v_00_u03b2_2418_, lean_object* v_a_2419_, lean_object* v_x_2420_){
_start:
{
uint8_t v___x_2421_; 
v___x_2421_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2419_, v_x_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2422_, lean_object* v_a_2423_, lean_object* v_x_2424_){
_start:
{
uint8_t v_res_2425_; lean_object* v_r_2426_; 
v_res_2425_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0(v_00_u03b2_2422_, v_a_2423_, v_x_2424_);
lean_dec(v_x_2424_);
lean_dec(v_a_2423_);
v_r_2426_ = lean_box(v_res_2425_);
return v_r_2426_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2(lean_object* v_00_u03b2_2427_, lean_object* v_data_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(v_data_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3(lean_object* v_00_u03b2_2430_, lean_object* v_a_2431_, lean_object* v_b_2432_, lean_object* v_x_2433_){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(v_a_2431_, v_b_2432_, v_x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2435_, lean_object* v_i_2436_, lean_object* v_source_2437_, lean_object* v_target_2438_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(v_i_2436_, v_source_2437_, v_target_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_2440_, lean_object* v_x_2441_, lean_object* v_x_2442_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(v_x_2441_, v_x_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(lean_object* v_data_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2485_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2484_);
if (lean_obj_tag(v___x_2485_) == 1)
{
lean_object* v_val_2486_; 
v_val_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc(v_val_2486_);
lean_dec_ref_known(v___x_2485_, 1);
if (lean_obj_tag(v_val_2486_) == 2)
{
lean_object* v_n_2487_; lean_object* v_mantissa_2488_; lean_object* v_exponent_2489_; lean_object* v_natZero_2490_; lean_object* v_intZero_2491_; uint8_t v_isNeg_2492_; 
v_n_2487_ = lean_ctor_get(v_val_2486_, 0);
lean_inc_ref(v_n_2487_);
lean_dec_ref_known(v_val_2486_, 1);
v_mantissa_2488_ = lean_ctor_get(v_n_2487_, 0);
lean_inc(v_mantissa_2488_);
v_exponent_2489_ = lean_ctor_get(v_n_2487_, 1);
lean_inc(v_exponent_2489_);
lean_dec_ref(v_n_2487_);
v_natZero_2490_ = lean_unsigned_to_nat(0u);
v_intZero_2491_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2492_ = lean_int_dec_lt(v_mantissa_2488_, v_intZero_2491_);
if (v_isNeg_2492_ == 0)
{
uint8_t v___x_2493_; 
v___x_2493_ = lean_nat_dec_eq(v_exponent_2489_, v_natZero_2490_);
lean_dec(v_exponent_2489_);
if (v___x_2493_ == 0)
{
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2460_;
}
else
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2494_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2495_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2494_);
if (lean_obj_tag(v___x_2495_) == 1)
{
lean_object* v_val_2496_; 
v_val_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_val_2496_);
lean_dec_ref_known(v___x_2495_, 1);
if (lean_obj_tag(v_val_2496_) == 4)
{
lean_object* v_elems_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v_elems_2497_ = lean_ctor_get(v_val_2496_, 0);
lean_inc_ref(v_elems_2497_);
lean_dec_ref_known(v_val_2496_, 1);
v___x_2498_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2499_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2498_);
if (lean_obj_tag(v___x_2499_) == 1)
{
lean_object* v_val_2500_; 
v_val_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_val_2500_);
lean_dec_ref_known(v___x_2499_, 1);
if (lean_obj_tag(v_val_2500_) == 2)
{
lean_object* v_n_2501_; lean_object* v_mantissa_2502_; lean_object* v_exponent_2503_; uint8_t v_isNeg_2504_; 
v_n_2501_ = lean_ctor_get(v_val_2500_, 0);
lean_inc_ref(v_n_2501_);
lean_dec_ref_known(v_val_2500_, 1);
v_mantissa_2502_ = lean_ctor_get(v_n_2501_, 0);
lean_inc(v_mantissa_2502_);
v_exponent_2503_ = lean_ctor_get(v_n_2501_, 1);
lean_inc(v_exponent_2503_);
lean_dec_ref(v_n_2501_);
v_isNeg_2504_ = lean_int_dec_lt(v_mantissa_2502_, v_intZero_2491_);
if (v_isNeg_2504_ == 0)
{
uint8_t v___x_2505_; 
v___x_2505_ = lean_nat_dec_eq(v_exponent_2503_, v_natZero_2490_);
lean_dec(v_exponent_2503_);
if (v___x_2505_ == 0)
{
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2466_;
}
else
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_2507_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2506_);
if (lean_obj_tag(v___x_2507_) == 1)
{
lean_object* v_val_2508_; 
v_val_2508_ = lean_ctor_get(v___x_2507_, 0);
lean_inc(v_val_2508_);
lean_dec_ref_known(v___x_2507_, 1);
if (lean_obj_tag(v_val_2508_) == 2)
{
lean_object* v_n_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2707_; 
v_n_2509_ = lean_ctor_get(v_val_2508_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v_val_2508_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2511_ = v_val_2508_;
v_isShared_2512_ = v_isSharedCheck_2707_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_n_2509_);
lean_dec(v_val_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2707_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v_mantissa_2513_; lean_object* v_exponent_2514_; uint8_t v_isNeg_2515_; 
v_mantissa_2513_ = lean_ctor_get(v_n_2509_, 0);
lean_inc(v_mantissa_2513_);
v_exponent_2514_ = lean_ctor_get(v_n_2509_, 1);
lean_inc(v_exponent_2514_);
lean_dec_ref(v_n_2509_);
v_isNeg_2515_ = lean_int_dec_lt(v_mantissa_2513_, v_intZero_2491_);
if (v_isNeg_2515_ == 0)
{
uint8_t v___x_2516_; 
v___x_2516_ = lean_nat_dec_eq(v_exponent_2514_, v_natZero_2490_);
lean_dec(v_exponent_2514_);
if (v___x_2516_ == 0)
{
lean_dec(v_mantissa_2513_);
lean_del_object(v___x_2511_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2469_;
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2517_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2));
v___x_2518_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2517_);
if (lean_obj_tag(v___x_2518_) == 1)
{
lean_object* v_val_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
lean_del_object(v___x_2511_);
v_val_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_val_2519_);
lean_dec_ref_known(v___x_2518_, 1);
v___x_2520_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3));
v___x_2521_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2520_);
if (lean_obj_tag(v___x_2521_) == 1)
{
lean_object* v_val_2522_; 
v_val_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_val_2522_);
lean_dec_ref_known(v___x_2521_, 1);
if (lean_obj_tag(v_val_2522_) == 3)
{
lean_object* v_s_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v_s_2523_ = lean_ctor_get(v_val_2522_, 0);
lean_inc_ref(v_s_2523_);
lean_dec_ref_known(v_val_2522_, 1);
v___x_2524_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_2525_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2457_, v___x_2524_);
if (lean_obj_tag(v___x_2525_) == 1)
{
lean_object* v_val_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2702_; 
v_val_2526_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2528_ = v___x_2525_;
v_isShared_2529_ = v_isSharedCheck_2702_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_val_2526_);
lean_dec(v___x_2525_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2702_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
if (lean_obj_tag(v_val_2526_) == 4)
{
lean_object* v_elems_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2701_; 
v_elems_2530_ = lean_ctor_get(v_val_2526_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v_val_2526_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2532_ = v_val_2526_;
v_isShared_2533_ = v_isSharedCheck_2701_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_elems_2530_);
lean_dec(v_val_2526_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2701_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v_nameMap_2534_; lean_object* v_a_2535_; lean_object* v___x_2536_; 
v_nameMap_2534_ = lean_ctor_get(v_a_2458_, 1);
v_a_2535_ = lean_nat_abs(v_mantissa_2488_);
lean_dec(v_mantissa_2488_);
v___x_2536_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2534_, v_a_2535_);
if (lean_obj_tag(v___x_2536_) == 1)
{
lean_object* v_val_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v_a_2535_);
lean_del_object(v___x_2532_);
lean_del_object(v___x_2528_);
v_val_2537_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2539_ = v___x_2536_;
v_isShared_2540_ = v_isSharedCheck_2691_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_val_2537_);
lean_dec(v___x_2536_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2691_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v_a_2541_; lean_object* v_a_2542_; lean_object* v___x_2543_; 
v_a_2541_ = lean_nat_abs(v_mantissa_2502_);
lean_dec(v_mantissa_2502_);
v_a_2542_ = lean_nat_abs(v_mantissa_2513_);
lean_dec(v_mantissa_2513_);
v___x_2543_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2497_, v_a_2458_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2682_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2546_ = v___x_2543_;
v_isShared_2547_ = v_isSharedCheck_2682_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2682_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v_snd_2548_; lean_object* v_fst_2549_; lean_object* v_exprMap_2550_; lean_object* v___x_2551_; 
v_snd_2548_ = lean_ctor_get(v_a_2544_, 1);
lean_inc(v_snd_2548_);
v_fst_2549_ = lean_ctor_get(v_a_2544_, 0);
lean_inc(v_fst_2549_);
lean_dec(v_a_2544_);
v_exprMap_2550_ = lean_ctor_get(v_snd_2548_, 3);
v___x_2551_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2550_, v_a_2541_);
if (lean_obj_tag(v___x_2551_) == 1)
{
lean_object* v_val_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2672_; 
lean_dec(v_a_2541_);
lean_del_object(v___x_2539_);
v_val_2552_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2672_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2672_ == 0)
{
v___x_2554_ = v___x_2551_;
v_isShared_2555_ = v_isSharedCheck_2672_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_val_2552_);
lean_dec(v___x_2551_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2672_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2556_; 
v___x_2556_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2550_, v_a_2542_);
if (lean_obj_tag(v___x_2556_) == 1)
{
lean_object* v_val_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2662_; 
lean_dec(v_a_2542_);
v_val_2557_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2559_ = v___x_2556_;
v_isShared_2560_ = v_isSharedCheck_2662_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_val_2557_);
lean_dec(v___x_2556_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2662_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___y_2562_; uint8_t v_safety_2563_; lean_object* v___y_2564_; lean_object* v_hints_2624_; lean_object* v___y_2625_; 
switch(lean_obj_tag(v_val_2519_))
{
case 3:
{
lean_object* v_s_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_s_2643_ = lean_ctor_get(v_val_2519_, 0);
lean_inc_ref(v_s_2643_);
lean_dec_ref_known(v_val_2519_, 1);
v___x_2644_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9));
v___x_2645_ = lean_string_dec_eq(v_s_2643_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2646_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10));
v___x_2647_ = lean_string_dec_eq(v_s_2643_, v___x_2646_);
lean_dec_ref(v_s_2643_);
if (v___x_2647_ == 0)
{
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_del_object(v___x_2554_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
goto v___jp_2481_;
}
else
{
lean_object* v___x_2648_; 
v___x_2648_ = lean_box(1);
v_hints_2624_ = v___x_2648_;
v___y_2625_ = v_snd_2548_;
goto v___jp_2623_;
}
}
else
{
lean_object* v___x_2649_; 
lean_dec_ref(v_s_2643_);
v___x_2649_ = lean_box(0);
v_hints_2624_ = v___x_2649_;
v___y_2625_ = v_snd_2548_;
goto v___jp_2623_;
}
}
case 5:
{
lean_object* v_kvPairs_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v_kvPairs_2650_ = lean_ctor_get(v_val_2519_, 0);
lean_inc(v_kvPairs_2650_);
lean_dec_ref_known(v_val_2519_, 1);
v___x_2651_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11));
v___x_2652_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_2650_, v___x_2651_);
lean_dec(v_kvPairs_2650_);
if (lean_obj_tag(v___x_2652_) == 1)
{
lean_object* v_val_2653_; 
v_val_2653_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_val_2653_);
lean_dec_ref_known(v___x_2652_, 1);
if (lean_obj_tag(v_val_2653_) == 2)
{
lean_object* v_n_2654_; lean_object* v_mantissa_2655_; lean_object* v_exponent_2656_; uint8_t v_isNeg_2657_; 
v_n_2654_ = lean_ctor_get(v_val_2653_, 0);
lean_inc_ref(v_n_2654_);
lean_dec_ref_known(v_val_2653_, 1);
v_mantissa_2655_ = lean_ctor_get(v_n_2654_, 0);
lean_inc(v_mantissa_2655_);
v_exponent_2656_ = lean_ctor_get(v_n_2654_, 1);
lean_inc(v_exponent_2656_);
lean_dec_ref(v_n_2654_);
v_isNeg_2657_ = lean_int_dec_lt(v_mantissa_2655_, v_intZero_2491_);
if (v_isNeg_2657_ == 0)
{
uint8_t v___x_2658_; 
v___x_2658_ = lean_nat_dec_eq(v_exponent_2656_, v_natZero_2490_);
lean_dec(v_exponent_2656_);
if (v___x_2658_ == 0)
{
lean_dec(v_mantissa_2655_);
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_del_object(v___x_2554_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
goto v___jp_2478_;
}
else
{
lean_object* v_a_2659_; uint32_t v___x_2660_; lean_object* v___x_2661_; 
v_a_2659_ = lean_nat_abs(v_mantissa_2655_);
lean_dec(v_mantissa_2655_);
v___x_2660_ = lean_uint32_of_nat(v_a_2659_);
lean_dec(v_a_2659_);
v___x_2661_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_2661_, 0, v___x_2660_);
v_hints_2624_ = v___x_2661_;
v___y_2625_ = v_snd_2548_;
goto v___jp_2623_;
}
}
else
{
lean_dec(v_exponent_2656_);
lean_dec(v_mantissa_2655_);
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_del_object(v___x_2554_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
goto v___jp_2478_;
}
}
else
{
lean_dec(v_val_2653_);
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_del_object(v___x_2554_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
goto v___jp_2478_;
}
}
else
{
lean_dec(v___x_2652_);
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_del_object(v___x_2554_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
goto v___jp_2478_;
}
}
default: 
{
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_del_object(v___x_2554_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
goto v___jp_2481_;
}
}
v___jp_2561_:
{
lean_object* v___x_2565_; 
v___x_2565_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2530_, v___y_2564_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2614_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2568_ = v___x_2565_;
v_isShared_2569_ = v_isSharedCheck_2614_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2565_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2614_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v_snd_2570_; lean_object* v_fst_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2613_; 
v_snd_2570_ = lean_ctor_get(v_a_2566_, 1);
v_fst_2571_ = lean_ctor_get(v_a_2566_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_a_2566_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2573_ = v_a_2566_;
v_isShared_2574_ = v_isSharedCheck_2613_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_snd_2570_);
lean_inc(v_fst_2571_);
lean_dec(v_a_2566_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2613_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v_stream_2575_; lean_object* v_nameMap_2576_; lean_object* v_levelMap_2577_; lean_object* v_exprMap_2578_; lean_object* v_recursorRuleMap_2579_; lean_object* v_constMap_2580_; lean_object* v_constOrder_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2612_; 
v_stream_2575_ = lean_ctor_get(v_snd_2570_, 0);
v_nameMap_2576_ = lean_ctor_get(v_snd_2570_, 1);
v_levelMap_2577_ = lean_ctor_get(v_snd_2570_, 2);
v_exprMap_2578_ = lean_ctor_get(v_snd_2570_, 3);
v_recursorRuleMap_2579_ = lean_ctor_get(v_snd_2570_, 4);
v_constMap_2580_ = lean_ctor_get(v_snd_2570_, 5);
v_constOrder_2581_ = lean_ctor_get(v_snd_2570_, 6);
v_isSharedCheck_2612_ = !lean_is_exclusive(v_snd_2570_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2583_ = v_snd_2570_;
v_isShared_2584_ = v_isSharedCheck_2612_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_constOrder_2581_);
lean_inc(v_constMap_2580_);
lean_inc(v_recursorRuleMap_2579_);
lean_inc(v_exprMap_2578_);
lean_inc(v_levelMap_2577_);
lean_inc(v_nameMap_2576_);
lean_inc(v_stream_2575_);
lean_dec(v_snd_2570_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2612_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
uint8_t v___x_2585_; 
v___x_2585_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_2580_, v_val_2537_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2589_; 
lean_inc(v_val_2537_);
v___x_2586_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2586_, 0, v_val_2537_);
lean_ctor_set(v___x_2586_, 1, v_fst_2549_);
lean_ctor_set(v___x_2586_, 2, v_val_2552_);
v___x_2587_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2587_, 0, v___x_2586_);
lean_ctor_set(v___x_2587_, 1, v_val_2557_);
lean_ctor_set(v___x_2587_, 2, v___y_2562_);
lean_ctor_set(v___x_2587_, 3, v_fst_2571_);
lean_ctor_set_uint8(v___x_2587_, sizeof(void*)*4, v_safety_2563_);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v___x_2587_);
v___x_2589_ = v___x_2559_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2587_);
v___x_2589_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2594_; 
v___x_2590_ = lean_box(0);
lean_inc(v_val_2537_);
v___x_2591_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_2580_, v_val_2537_, v___x_2589_);
v___x_2592_ = lean_array_push(v_constOrder_2581_, v_val_2537_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 6, v___x_2592_);
lean_ctor_set(v___x_2583_, 5, v___x_2591_);
v___x_2594_ = v___x_2583_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_stream_2575_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_nameMap_2576_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v_levelMap_2577_);
lean_ctor_set(v_reuseFailAlloc_2601_, 3, v_exprMap_2578_);
lean_ctor_set(v_reuseFailAlloc_2601_, 4, v_recursorRuleMap_2579_);
lean_ctor_set(v_reuseFailAlloc_2601_, 5, v___x_2591_);
lean_ctor_set(v_reuseFailAlloc_2601_, 6, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2596_; 
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 1, v___x_2594_);
lean_ctor_set(v___x_2573_, 0, v___x_2590_);
v___x_2596_ = v___x_2573_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v___x_2590_);
lean_ctor_set(v_reuseFailAlloc_2600_, 1, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
lean_object* v___x_2598_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v___x_2596_);
v___x_2598_ = v___x_2568_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
}
else
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2607_; 
lean_del_object(v___x_2583_);
lean_dec_ref(v_constOrder_2581_);
lean_dec_ref(v_constMap_2580_);
lean_dec_ref(v_recursorRuleMap_2579_);
lean_dec_ref(v_exprMap_2578_);
lean_dec_ref(v_levelMap_2577_);
lean_dec_ref(v_nameMap_2576_);
lean_dec_ref(v_stream_2575_);
lean_del_object(v___x_2573_);
lean_dec(v_fst_2571_);
lean_dec(v___y_2562_);
lean_dec(v_val_2557_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
v___x_2603_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_2604_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2537_, v___x_2585_);
v___x_2605_ = lean_string_append(v___x_2603_, v___x_2604_);
lean_dec_ref(v___x_2604_);
if (v_isShared_2560_ == 0)
{
lean_ctor_set_tag(v___x_2559_, 18);
lean_ctor_set(v___x_2559_, 0, v___x_2605_);
v___x_2607_ = v___x_2559_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2605_);
v___x_2607_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
lean_object* v___x_2609_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 1);
lean_ctor_set(v___x_2568_, 0, v___x_2607_);
v___x_2609_ = v___x_2568_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v___x_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v___y_2562_);
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_val_2537_);
v_a_2615_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2565_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2565_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
v___jp_2623_:
{
lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___x_2626_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5));
v___x_2627_ = lean_string_dec_eq(v_s_2523_, v___x_2626_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; uint8_t v___x_2629_; 
v___x_2628_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6));
v___x_2629_ = lean_string_dec_eq(v_s_2523_, v___x_2628_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2630_; uint8_t v___x_2631_; 
v___x_2630_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7));
v___x_2631_ = lean_string_dec_eq(v_s_2523_, v___x_2630_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
lean_dec_ref(v___y_2625_);
lean_dec(v_hints_2624_);
lean_del_object(v___x_2559_);
lean_dec(v_val_2557_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
v___x_2632_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8));
v___x_2633_ = lean_string_append(v___x_2632_, v_s_2523_);
lean_dec_ref(v_s_2523_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set_tag(v___x_2554_, 18);
lean_ctor_set(v___x_2554_, 0, v___x_2633_);
v___x_2635_ = v___x_2554_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2633_);
v___x_2635_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
lean_object* v___x_2637_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set_tag(v___x_2546_, 1);
lean_ctor_set(v___x_2546_, 0, v___x_2635_);
v___x_2637_ = v___x_2546_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v___x_2635_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
else
{
uint8_t v___x_2640_; 
lean_del_object(v___x_2554_);
lean_del_object(v___x_2546_);
lean_dec_ref(v_s_2523_);
v___x_2640_ = 2;
v___y_2562_ = v_hints_2624_;
v_safety_2563_ = v___x_2640_;
v___y_2564_ = v___y_2625_;
goto v___jp_2561_;
}
}
else
{
uint8_t v___x_2641_; 
lean_del_object(v___x_2554_);
lean_del_object(v___x_2546_);
lean_dec_ref(v_s_2523_);
v___x_2641_ = 1;
v___y_2562_ = v_hints_2624_;
v_safety_2563_ = v___x_2641_;
v___y_2564_ = v___y_2625_;
goto v___jp_2561_;
}
}
else
{
uint8_t v___x_2642_; 
lean_del_object(v___x_2554_);
lean_del_object(v___x_2546_);
lean_dec_ref(v_s_2523_);
v___x_2642_ = 0;
v___y_2562_ = v_hints_2624_;
v_safety_2563_ = v___x_2642_;
v___y_2564_ = v___y_2625_;
goto v___jp_2561_;
}
}
}
}
else
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2667_; 
lean_dec(v___x_2556_);
lean_dec(v_val_2552_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
v___x_2663_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2664_ = l_Nat_reprFast(v_a_2542_);
v___x_2665_ = lean_string_append(v___x_2663_, v___x_2664_);
lean_dec_ref(v___x_2664_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set_tag(v___x_2554_, 18);
lean_ctor_set(v___x_2554_, 0, v___x_2665_);
v___x_2667_ = v___x_2554_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v___x_2665_);
v___x_2667_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2669_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set_tag(v___x_2546_, 1);
lean_ctor_set(v___x_2546_, 0, v___x_2667_);
v___x_2669_ = v___x_2546_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v___x_2667_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
lean_dec(v___x_2551_);
lean_dec(v_fst_2549_);
lean_dec(v_snd_2548_);
lean_dec(v_a_2542_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
v___x_2673_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2674_ = l_Nat_reprFast(v_a_2541_);
v___x_2675_ = lean_string_append(v___x_2673_, v___x_2674_);
lean_dec_ref(v___x_2674_);
if (v_isShared_2540_ == 0)
{
lean_ctor_set_tag(v___x_2539_, 18);
lean_ctor_set(v___x_2539_, 0, v___x_2675_);
v___x_2677_ = v___x_2539_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2679_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set_tag(v___x_2546_, 1);
lean_ctor_set(v___x_2546_, 0, v___x_2677_);
v___x_2679_ = v___x_2546_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2677_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec(v_a_2542_);
lean_dec(v_a_2541_);
lean_del_object(v___x_2539_);
lean_dec(v_val_2537_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
v_a_2683_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2543_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2543_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
}
else
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2696_; 
lean_dec(v___x_2536_);
lean_dec_ref(v_elems_2530_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
lean_dec(v_mantissa_2513_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec_ref(v_a_2458_);
v___x_2692_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2693_ = l_Nat_reprFast(v_a_2535_);
v___x_2694_ = lean_string_append(v___x_2692_, v___x_2693_);
lean_dec_ref(v___x_2693_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set_tag(v___x_2532_, 18);
lean_ctor_set(v___x_2532_, 0, v___x_2694_);
v___x_2696_ = v___x_2532_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2694_);
v___x_2696_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2698_; 
if (v_isShared_2529_ == 0)
{
lean_ctor_set(v___x_2528_, 0, v___x_2696_);
v___x_2698_ = v___x_2528_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
}
else
{
lean_del_object(v___x_2528_);
lean_dec(v_val_2526_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
lean_dec(v_mantissa_2513_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2475_;
}
}
}
else
{
lean_dec(v___x_2525_);
lean_dec_ref(v_s_2523_);
lean_dec(v_val_2519_);
lean_dec(v_mantissa_2513_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2475_;
}
}
else
{
lean_dec(v_val_2522_);
lean_dec(v_val_2519_);
lean_dec(v_mantissa_2513_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2472_;
}
}
else
{
lean_dec(v___x_2521_);
lean_dec(v_val_2519_);
lean_dec(v_mantissa_2513_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2472_;
}
}
else
{
lean_object* v___x_2703_; lean_object* v___x_2705_; 
lean_dec(v___x_2518_);
lean_dec(v_mantissa_2513_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
v___x_2703_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
if (v_isShared_2512_ == 0)
{
lean_ctor_set_tag(v___x_2511_, 1);
lean_ctor_set(v___x_2511_, 0, v___x_2703_);
v___x_2705_ = v___x_2511_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
else
{
lean_dec(v_exponent_2514_);
lean_dec(v_mantissa_2513_);
lean_del_object(v___x_2511_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2469_;
}
}
}
else
{
lean_dec(v_val_2508_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2469_;
}
}
else
{
lean_dec(v___x_2507_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2469_;
}
}
}
else
{
lean_dec(v_exponent_2503_);
lean_dec(v_mantissa_2502_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2466_;
}
}
else
{
lean_dec(v_val_2500_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2466_;
}
}
else
{
lean_dec(v___x_2499_);
lean_dec_ref(v_elems_2497_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2466_;
}
}
else
{
lean_dec(v_val_2496_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2463_;
}
}
else
{
lean_dec(v___x_2495_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2463_;
}
}
}
else
{
lean_dec(v_exponent_2489_);
lean_dec(v_mantissa_2488_);
lean_dec_ref(v_a_2458_);
goto v___jp_2460_;
}
}
else
{
lean_dec(v_val_2486_);
lean_dec_ref(v_a_2458_);
goto v___jp_2460_;
}
}
else
{
lean_dec(v___x_2485_);
lean_dec_ref(v_a_2458_);
goto v___jp_2460_;
}
v___jp_2460_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
v___jp_2463_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
return v___x_2465_;
}
v___jp_2466_:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
return v___x_2468_;
}
v___jp_2469_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2470_);
return v___x_2471_;
}
v___jp_2472_:
{
lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2473_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2473_);
return v___x_2474_;
}
v___jp_2475_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2476_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
return v___x_2477_;
}
v___jp_2478_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2479_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
return v___x_2480_;
}
v___jp_2481_:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2482_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___boxed(lean_object* v_data_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(v_data_2708_, v_a_2709_);
lean_dec(v_data_2708_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(lean_object* v_data_2715_, lean_object* v_a_2716_){
_start:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2734_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2715_, v___x_2733_);
if (lean_obj_tag(v___x_2734_) == 1)
{
lean_object* v_val_2735_; 
v_val_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_val_2735_);
lean_dec_ref_known(v___x_2734_, 1);
if (lean_obj_tag(v_val_2735_) == 2)
{
lean_object* v_n_2736_; lean_object* v_mantissa_2737_; lean_object* v_exponent_2738_; lean_object* v_natZero_2739_; lean_object* v_intZero_2740_; uint8_t v_isNeg_2741_; 
v_n_2736_ = lean_ctor_get(v_val_2735_, 0);
lean_inc_ref(v_n_2736_);
lean_dec_ref_known(v_val_2735_, 1);
v_mantissa_2737_ = lean_ctor_get(v_n_2736_, 0);
lean_inc(v_mantissa_2737_);
v_exponent_2738_ = lean_ctor_get(v_n_2736_, 1);
lean_inc(v_exponent_2738_);
lean_dec_ref(v_n_2736_);
v_natZero_2739_ = lean_unsigned_to_nat(0u);
v_intZero_2740_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2741_ = lean_int_dec_lt(v_mantissa_2737_, v_intZero_2740_);
if (v_isNeg_2741_ == 0)
{
uint8_t v___x_2742_; 
v___x_2742_ = lean_nat_dec_eq(v_exponent_2738_, v_natZero_2739_);
lean_dec(v_exponent_2738_);
if (v___x_2742_ == 0)
{
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2718_;
}
else
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2744_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2715_, v___x_2743_);
if (lean_obj_tag(v___x_2744_) == 1)
{
lean_object* v_val_2745_; 
v_val_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_val_2745_);
lean_dec_ref_known(v___x_2744_, 1);
if (lean_obj_tag(v_val_2745_) == 4)
{
lean_object* v_elems_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v_elems_2746_ = lean_ctor_get(v_val_2745_, 0);
lean_inc_ref(v_elems_2746_);
lean_dec_ref_known(v_val_2745_, 1);
v___x_2747_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2748_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2715_, v___x_2747_);
if (lean_obj_tag(v___x_2748_) == 1)
{
lean_object* v_val_2749_; 
v_val_2749_ = lean_ctor_get(v___x_2748_, 0);
lean_inc(v_val_2749_);
lean_dec_ref_known(v___x_2748_, 1);
if (lean_obj_tag(v_val_2749_) == 2)
{
lean_object* v_n_2750_; lean_object* v_mantissa_2751_; lean_object* v_exponent_2752_; uint8_t v_isNeg_2753_; 
v_n_2750_ = lean_ctor_get(v_val_2749_, 0);
lean_inc_ref(v_n_2750_);
lean_dec_ref_known(v_val_2749_, 1);
v_mantissa_2751_ = lean_ctor_get(v_n_2750_, 0);
lean_inc(v_mantissa_2751_);
v_exponent_2752_ = lean_ctor_get(v_n_2750_, 1);
lean_inc(v_exponent_2752_);
lean_dec_ref(v_n_2750_);
v_isNeg_2753_ = lean_int_dec_lt(v_mantissa_2751_, v_intZero_2740_);
if (v_isNeg_2753_ == 0)
{
uint8_t v___x_2754_; 
v___x_2754_ = lean_nat_dec_eq(v_exponent_2752_, v_natZero_2739_);
lean_dec(v_exponent_2752_);
if (v___x_2754_ == 0)
{
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2724_;
}
else
{
lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2755_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_2756_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2715_, v___x_2755_);
if (lean_obj_tag(v___x_2756_) == 1)
{
lean_object* v_val_2757_; 
v_val_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_val_2757_);
lean_dec_ref_known(v___x_2756_, 1);
if (lean_obj_tag(v_val_2757_) == 2)
{
lean_object* v_n_2758_; lean_object* v_mantissa_2759_; lean_object* v_exponent_2760_; uint8_t v_isNeg_2761_; 
v_n_2758_ = lean_ctor_get(v_val_2757_, 0);
lean_inc_ref(v_n_2758_);
lean_dec_ref_known(v_val_2757_, 1);
v_mantissa_2759_ = lean_ctor_get(v_n_2758_, 0);
lean_inc(v_mantissa_2759_);
v_exponent_2760_ = lean_ctor_get(v_n_2758_, 1);
lean_inc(v_exponent_2760_);
lean_dec_ref(v_n_2758_);
v_isNeg_2761_ = lean_int_dec_lt(v_mantissa_2759_, v_intZero_2740_);
if (v_isNeg_2761_ == 0)
{
uint8_t v___x_2762_; 
v___x_2762_ = lean_nat_dec_eq(v_exponent_2760_, v_natZero_2739_);
lean_dec(v_exponent_2760_);
if (v___x_2762_ == 0)
{
lean_dec(v_mantissa_2759_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2727_;
}
else
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_2764_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2715_, v___x_2763_);
if (lean_obj_tag(v___x_2764_) == 1)
{
lean_object* v_val_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2898_; 
v_val_2765_ = lean_ctor_get(v___x_2764_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2764_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2767_ = v___x_2764_;
v_isShared_2768_ = v_isSharedCheck_2898_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_val_2765_);
lean_dec(v___x_2764_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2898_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
if (lean_obj_tag(v_val_2765_) == 4)
{
lean_object* v_elems_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2897_; 
v_elems_2769_ = lean_ctor_get(v_val_2765_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_val_2765_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2771_ = v_val_2765_;
v_isShared_2772_ = v_isSharedCheck_2897_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_elems_2769_);
lean_dec(v_val_2765_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2897_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v_nameMap_2773_; lean_object* v_a_2774_; lean_object* v___x_2775_; 
v_nameMap_2773_ = lean_ctor_get(v_a_2716_, 1);
v_a_2774_ = lean_nat_abs(v_mantissa_2737_);
lean_dec(v_mantissa_2737_);
v___x_2775_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2775_) == 1)
{
lean_object* v_val_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2887_; 
lean_dec(v_a_2774_);
lean_del_object(v___x_2771_);
lean_del_object(v___x_2767_);
v_val_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2887_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_val_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2887_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v_a_2780_; lean_object* v_a_2781_; lean_object* v___x_2782_; 
v_a_2780_ = lean_nat_abs(v_mantissa_2751_);
lean_dec(v_mantissa_2751_);
v_a_2781_ = lean_nat_abs(v_mantissa_2759_);
lean_dec(v_mantissa_2759_);
v___x_2782_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2746_, v_a_2716_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2878_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2785_ = v___x_2782_;
v_isShared_2786_ = v_isSharedCheck_2878_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2782_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2878_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v_snd_2787_; lean_object* v_fst_2788_; lean_object* v_exprMap_2789_; lean_object* v___x_2790_; 
v_snd_2787_ = lean_ctor_get(v_a_2783_, 1);
lean_inc(v_snd_2787_);
v_fst_2788_ = lean_ctor_get(v_a_2783_, 0);
lean_inc(v_fst_2788_);
lean_dec(v_a_2783_);
v_exprMap_2789_ = lean_ctor_get(v_snd_2787_, 3);
v___x_2790_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2789_, v_a_2780_);
if (lean_obj_tag(v___x_2790_) == 1)
{
lean_object* v_val_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2868_; 
lean_dec(v_a_2780_);
lean_del_object(v___x_2778_);
v_val_2791_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2793_ = v___x_2790_;
v_isShared_2794_ = v_isSharedCheck_2868_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_val_2791_);
lean_dec(v___x_2790_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2868_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2789_, v_a_2781_);
if (lean_obj_tag(v___x_2795_) == 1)
{
lean_object* v_val_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2858_; 
lean_del_object(v___x_2793_);
lean_del_object(v___x_2785_);
lean_dec(v_a_2781_);
v_val_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2858_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_val_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2858_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2800_; 
v___x_2800_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2769_, v_snd_2787_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2849_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2803_ = v___x_2800_;
v_isShared_2804_ = v_isSharedCheck_2849_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2800_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2849_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v_snd_2805_; lean_object* v_fst_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2848_; 
v_snd_2805_ = lean_ctor_get(v_a_2801_, 1);
v_fst_2806_ = lean_ctor_get(v_a_2801_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v_a_2801_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2808_ = v_a_2801_;
v_isShared_2809_ = v_isSharedCheck_2848_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_snd_2805_);
lean_inc(v_fst_2806_);
lean_dec(v_a_2801_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2848_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v_stream_2810_; lean_object* v_nameMap_2811_; lean_object* v_levelMap_2812_; lean_object* v_exprMap_2813_; lean_object* v_recursorRuleMap_2814_; lean_object* v_constMap_2815_; lean_object* v_constOrder_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2847_; 
v_stream_2810_ = lean_ctor_get(v_snd_2805_, 0);
v_nameMap_2811_ = lean_ctor_get(v_snd_2805_, 1);
v_levelMap_2812_ = lean_ctor_get(v_snd_2805_, 2);
v_exprMap_2813_ = lean_ctor_get(v_snd_2805_, 3);
v_recursorRuleMap_2814_ = lean_ctor_get(v_snd_2805_, 4);
v_constMap_2815_ = lean_ctor_get(v_snd_2805_, 5);
v_constOrder_2816_ = lean_ctor_get(v_snd_2805_, 6);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_snd_2805_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2818_ = v_snd_2805_;
v_isShared_2819_ = v_isSharedCheck_2847_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_constOrder_2816_);
lean_inc(v_constMap_2815_);
lean_inc(v_recursorRuleMap_2814_);
lean_inc(v_exprMap_2813_);
lean_inc(v_levelMap_2812_);
lean_inc(v_nameMap_2811_);
lean_inc(v_stream_2810_);
lean_dec(v_snd_2805_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2847_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
uint8_t v___x_2820_; 
v___x_2820_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_2815_, v_val_2776_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
lean_inc(v_val_2776_);
v___x_2821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2821_, 0, v_val_2776_);
lean_ctor_set(v___x_2821_, 1, v_fst_2788_);
lean_ctor_set(v___x_2821_, 2, v_val_2791_);
v___x_2822_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2821_);
lean_ctor_set(v___x_2822_, 1, v_val_2796_);
lean_ctor_set(v___x_2822_, 2, v_fst_2806_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set_tag(v___x_2798_, 2);
lean_ctor_set(v___x_2798_, 0, v___x_2822_);
v___x_2824_ = v___x_2798_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2829_; 
v___x_2825_ = lean_box(0);
lean_inc(v_val_2776_);
v___x_2826_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_2815_, v_val_2776_, v___x_2824_);
v___x_2827_ = lean_array_push(v_constOrder_2816_, v_val_2776_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 6, v___x_2827_);
lean_ctor_set(v___x_2818_, 5, v___x_2826_);
v___x_2829_ = v___x_2818_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_stream_2810_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v_nameMap_2811_);
lean_ctor_set(v_reuseFailAlloc_2836_, 2, v_levelMap_2812_);
lean_ctor_set(v_reuseFailAlloc_2836_, 3, v_exprMap_2813_);
lean_ctor_set(v_reuseFailAlloc_2836_, 4, v_recursorRuleMap_2814_);
lean_ctor_set(v_reuseFailAlloc_2836_, 5, v___x_2826_);
lean_ctor_set(v_reuseFailAlloc_2836_, 6, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
lean_object* v___x_2831_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 1, v___x_2829_);
lean_ctor_set(v___x_2808_, 0, v___x_2825_);
v___x_2831_ = v___x_2808_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v___x_2825_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v___x_2829_);
v___x_2831_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
lean_object* v___x_2833_; 
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v___x_2831_);
v___x_2833_ = v___x_2803_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2831_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
lean_del_object(v___x_2818_);
lean_dec_ref(v_constOrder_2816_);
lean_dec_ref(v_constMap_2815_);
lean_dec_ref(v_recursorRuleMap_2814_);
lean_dec_ref(v_exprMap_2813_);
lean_dec_ref(v_levelMap_2812_);
lean_dec_ref(v_nameMap_2811_);
lean_dec_ref(v_stream_2810_);
lean_del_object(v___x_2808_);
lean_dec(v_fst_2806_);
lean_dec(v_val_2796_);
lean_dec(v_val_2791_);
lean_dec(v_fst_2788_);
v___x_2838_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_2839_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2776_, v___x_2820_);
v___x_2840_ = lean_string_append(v___x_2838_, v___x_2839_);
lean_dec_ref(v___x_2839_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set_tag(v___x_2798_, 18);
lean_ctor_set(v___x_2798_, 0, v___x_2840_);
v___x_2842_ = v___x_2798_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2844_; 
if (v_isShared_2804_ == 0)
{
lean_ctor_set_tag(v___x_2803_, 1);
lean_ctor_set(v___x_2803_, 0, v___x_2842_);
v___x_2844_ = v___x_2803_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v___x_2842_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_del_object(v___x_2798_);
lean_dec(v_val_2796_);
lean_dec(v_val_2791_);
lean_dec(v_fst_2788_);
lean_dec(v_val_2776_);
v_a_2850_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2800_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2800_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
else
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2863_; 
lean_dec(v___x_2795_);
lean_dec(v_val_2791_);
lean_dec(v_fst_2788_);
lean_dec(v_snd_2787_);
lean_dec(v_val_2776_);
lean_dec_ref(v_elems_2769_);
v___x_2859_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2860_ = l_Nat_reprFast(v_a_2781_);
v___x_2861_ = lean_string_append(v___x_2859_, v___x_2860_);
lean_dec_ref(v___x_2860_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set_tag(v___x_2793_, 18);
lean_ctor_set(v___x_2793_, 0, v___x_2861_);
v___x_2863_ = v___x_2793_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2861_);
v___x_2863_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2865_; 
if (v_isShared_2786_ == 0)
{
lean_ctor_set_tag(v___x_2785_, 1);
lean_ctor_set(v___x_2785_, 0, v___x_2863_);
v___x_2865_ = v___x_2785_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2863_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
else
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2873_; 
lean_dec(v___x_2790_);
lean_dec(v_fst_2788_);
lean_dec(v_snd_2787_);
lean_dec(v_a_2781_);
lean_dec(v_val_2776_);
lean_dec_ref(v_elems_2769_);
v___x_2869_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2870_ = l_Nat_reprFast(v_a_2780_);
v___x_2871_ = lean_string_append(v___x_2869_, v___x_2870_);
lean_dec_ref(v___x_2870_);
if (v_isShared_2779_ == 0)
{
lean_ctor_set_tag(v___x_2778_, 18);
lean_ctor_set(v___x_2778_, 0, v___x_2871_);
v___x_2873_ = v___x_2778_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
lean_object* v___x_2875_; 
if (v_isShared_2786_ == 0)
{
lean_ctor_set_tag(v___x_2785_, 1);
lean_ctor_set(v___x_2785_, 0, v___x_2873_);
v___x_2875_ = v___x_2785_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v___x_2873_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec(v_a_2781_);
lean_dec(v_a_2780_);
lean_del_object(v___x_2778_);
lean_dec(v_val_2776_);
lean_dec_ref(v_elems_2769_);
v_a_2879_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2782_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2782_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
else
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2892_; 
lean_dec(v___x_2775_);
lean_dec_ref(v_elems_2769_);
lean_dec(v_mantissa_2759_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec_ref(v_a_2716_);
v___x_2888_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2889_ = l_Nat_reprFast(v_a_2774_);
v___x_2890_ = lean_string_append(v___x_2888_, v___x_2889_);
lean_dec_ref(v___x_2889_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 18);
lean_ctor_set(v___x_2771_, 0, v___x_2890_);
v___x_2892_ = v___x_2771_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
lean_object* v___x_2894_; 
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 0, v___x_2892_);
v___x_2894_ = v___x_2767_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2892_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
}
else
{
lean_del_object(v___x_2767_);
lean_dec(v_val_2765_);
lean_dec(v_mantissa_2759_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2730_;
}
}
}
else
{
lean_dec(v___x_2764_);
lean_dec(v_mantissa_2759_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2730_;
}
}
}
else
{
lean_dec(v_exponent_2760_);
lean_dec(v_mantissa_2759_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2727_;
}
}
else
{
lean_dec(v_val_2757_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2727_;
}
}
else
{
lean_dec(v___x_2756_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2727_;
}
}
}
else
{
lean_dec(v_exponent_2752_);
lean_dec(v_mantissa_2751_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2724_;
}
}
else
{
lean_dec(v_val_2749_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2724_;
}
}
else
{
lean_dec(v___x_2748_);
lean_dec_ref(v_elems_2746_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2724_;
}
}
else
{
lean_dec(v_val_2745_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2721_;
}
}
else
{
lean_dec(v___x_2744_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2721_;
}
}
}
else
{
lean_dec(v_exponent_2738_);
lean_dec(v_mantissa_2737_);
lean_dec_ref(v_a_2716_);
goto v___jp_2718_;
}
}
else
{
lean_dec(v_val_2735_);
lean_dec_ref(v_a_2716_);
goto v___jp_2718_;
}
}
else
{
lean_dec(v___x_2734_);
lean_dec_ref(v_a_2716_);
goto v___jp_2718_;
}
v___jp_2718_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
return v___x_2720_;
}
v___jp_2721_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
return v___x_2723_;
}
v___jp_2724_:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2725_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
return v___x_2726_;
}
v___jp_2727_:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
return v___x_2729_;
}
v___jp_2730_:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2731_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2731_);
return v___x_2732_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___boxed(lean_object* v_data_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_){
_start:
{
lean_object* v_res_2902_; 
v_res_2902_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(v_data_2899_, v_a_2900_);
lean_dec(v_data_2899_);
return v_res_2902_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(lean_object* v_data_2906_, lean_object* v_a_2907_){
_start:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2924_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2925_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2906_, v___x_2924_);
if (lean_obj_tag(v___x_2925_) == 1)
{
lean_object* v_val_2926_; 
v_val_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_val_2926_);
lean_dec_ref_known(v___x_2925_, 1);
if (lean_obj_tag(v_val_2926_) == 2)
{
lean_object* v_n_2927_; lean_object* v_mantissa_2928_; lean_object* v_exponent_2929_; lean_object* v_natZero_2930_; lean_object* v_intZero_2931_; uint8_t v_isNeg_2932_; 
v_n_2927_ = lean_ctor_get(v_val_2926_, 0);
lean_inc_ref(v_n_2927_);
lean_dec_ref_known(v_val_2926_, 1);
v_mantissa_2928_ = lean_ctor_get(v_n_2927_, 0);
lean_inc(v_mantissa_2928_);
v_exponent_2929_ = lean_ctor_get(v_n_2927_, 1);
lean_inc(v_exponent_2929_);
lean_dec_ref(v_n_2927_);
v_natZero_2930_ = lean_unsigned_to_nat(0u);
v_intZero_2931_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2932_ = lean_int_dec_lt(v_mantissa_2928_, v_intZero_2931_);
if (v_isNeg_2932_ == 0)
{
uint8_t v___x_2933_; 
v___x_2933_ = lean_nat_dec_eq(v_exponent_2929_, v_natZero_2930_);
lean_dec(v_exponent_2929_);
if (v___x_2933_ == 0)
{
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2921_;
}
else
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2934_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2935_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2906_, v___x_2934_);
if (lean_obj_tag(v___x_2935_) == 1)
{
lean_object* v_val_2936_; 
v_val_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_val_2936_);
lean_dec_ref_known(v___x_2935_, 1);
if (lean_obj_tag(v_val_2936_) == 4)
{
lean_object* v_elems_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v_elems_2937_ = lean_ctor_get(v_val_2936_, 0);
lean_inc_ref(v_elems_2937_);
lean_dec_ref_known(v_val_2936_, 1);
v___x_2938_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2939_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2906_, v___x_2938_);
if (lean_obj_tag(v___x_2939_) == 1)
{
lean_object* v_val_2940_; 
v_val_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_val_2940_);
lean_dec_ref_known(v___x_2939_, 1);
if (lean_obj_tag(v_val_2940_) == 2)
{
lean_object* v_n_2941_; lean_object* v_mantissa_2942_; lean_object* v_exponent_2943_; uint8_t v_isNeg_2944_; 
v_n_2941_ = lean_ctor_get(v_val_2940_, 0);
lean_inc_ref(v_n_2941_);
lean_dec_ref_known(v_val_2940_, 1);
v_mantissa_2942_ = lean_ctor_get(v_n_2941_, 0);
lean_inc(v_mantissa_2942_);
v_exponent_2943_ = lean_ctor_get(v_n_2941_, 1);
lean_inc(v_exponent_2943_);
lean_dec_ref(v_n_2941_);
v_isNeg_2944_ = lean_int_dec_lt(v_mantissa_2942_, v_intZero_2931_);
if (v_isNeg_2944_ == 0)
{
uint8_t v___x_2945_; 
v___x_2945_ = lean_nat_dec_eq(v_exponent_2943_, v_natZero_2930_);
lean_dec(v_exponent_2943_);
if (v___x_2945_ == 0)
{
lean_dec(v_mantissa_2942_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2915_;
}
else
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_2947_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2906_, v___x_2946_);
if (lean_obj_tag(v___x_2947_) == 1)
{
lean_object* v_val_2948_; 
v_val_2948_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_val_2948_);
lean_dec_ref_known(v___x_2947_, 1);
if (lean_obj_tag(v_val_2948_) == 2)
{
lean_object* v_n_2949_; lean_object* v_mantissa_2950_; lean_object* v_exponent_2951_; uint8_t v_isNeg_2952_; 
v_n_2949_ = lean_ctor_get(v_val_2948_, 0);
lean_inc_ref(v_n_2949_);
lean_dec_ref_known(v_val_2948_, 1);
v_mantissa_2950_ = lean_ctor_get(v_n_2949_, 0);
lean_inc(v_mantissa_2950_);
v_exponent_2951_ = lean_ctor_get(v_n_2949_, 1);
lean_inc(v_exponent_2951_);
lean_dec_ref(v_n_2949_);
v_isNeg_2952_ = lean_int_dec_lt(v_mantissa_2950_, v_intZero_2931_);
if (v_isNeg_2952_ == 0)
{
uint8_t v___x_2953_; 
v___x_2953_ = lean_nat_dec_eq(v_exponent_2951_, v_natZero_2930_);
lean_dec(v_exponent_2951_);
if (v___x_2953_ == 0)
{
lean_dec(v_mantissa_2950_);
lean_dec(v_mantissa_2942_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2912_;
}
else
{
lean_object* v_a_2954_; lean_object* v_a_2955_; lean_object* v_a_2956_; uint8_t v_b_2958_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v_a_2954_ = lean_nat_abs(v_mantissa_2928_);
lean_dec(v_mantissa_2928_);
v_a_2955_ = lean_nat_abs(v_mantissa_2942_);
lean_dec(v_mantissa_2942_);
v_a_2956_ = lean_nat_abs(v_mantissa_2950_);
lean_dec(v_mantissa_2950_);
v___x_3092_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3093_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2906_, v___x_3092_);
if (lean_obj_tag(v___x_3093_) == 0)
{
v_b_2958_ = v_isNeg_2952_;
goto v___jp_2957_;
}
else
{
lean_object* v_val_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3103_; 
v_val_3094_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3096_ = v___x_3093_;
v_isShared_3097_ = v_isSharedCheck_3103_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_val_3094_);
lean_dec(v___x_3093_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3103_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
if (lean_obj_tag(v_val_3094_) == 1)
{
uint8_t v_b_3098_; 
lean_del_object(v___x_3096_);
v_b_3098_ = lean_ctor_get_uint8(v_val_3094_, 0);
lean_dec_ref_known(v_val_3094_, 0);
v_b_2958_ = v_b_3098_;
goto v___jp_2957_;
}
else
{
lean_object* v___x_3099_; lean_object* v___x_3101_; 
lean_dec(v_val_3094_);
lean_dec(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec_ref(v_elems_2937_);
lean_dec_ref(v_a_2907_);
v___x_3099_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
if (v_isShared_3097_ == 0)
{
lean_ctor_set(v___x_3096_, 0, v___x_3099_);
v___x_3101_ = v___x_3096_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v___x_3099_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
}
v___jp_2957_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2959_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_2960_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2906_, v___x_2959_);
if (lean_obj_tag(v___x_2960_) == 1)
{
lean_object* v_val_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_3091_; 
v_val_2961_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_2963_ = v___x_2960_;
v_isShared_2964_ = v_isSharedCheck_3091_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_val_2961_);
lean_dec(v___x_2960_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_3091_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
if (lean_obj_tag(v_val_2961_) == 4)
{
lean_object* v_elems_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_3090_; 
v_elems_2965_ = lean_ctor_get(v_val_2961_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v_val_2961_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_2967_ = v_val_2961_;
v_isShared_2968_ = v_isSharedCheck_3090_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_elems_2965_);
lean_dec(v_val_2961_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_3090_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v_nameMap_2969_; lean_object* v___x_2970_; 
v_nameMap_2969_ = lean_ctor_get(v_a_2907_, 1);
v___x_2970_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2969_, v_a_2954_);
if (lean_obj_tag(v___x_2970_) == 1)
{
lean_object* v_val_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_3080_; 
lean_del_object(v___x_2967_);
lean_del_object(v___x_2963_);
lean_dec(v_a_2954_);
v_val_2971_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_2973_ = v___x_2970_;
v_isShared_2974_ = v_isSharedCheck_3080_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_val_2971_);
lean_dec(v___x_2970_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_3080_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2975_; 
v___x_2975_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2937_, v_a_2907_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3071_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_2978_ = v___x_2975_;
v_isShared_2979_ = v_isSharedCheck_3071_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2975_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3071_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v_snd_2980_; lean_object* v_fst_2981_; lean_object* v_exprMap_2982_; lean_object* v___x_2983_; 
v_snd_2980_ = lean_ctor_get(v_a_2976_, 1);
lean_inc(v_snd_2980_);
v_fst_2981_ = lean_ctor_get(v_a_2976_, 0);
lean_inc(v_fst_2981_);
lean_dec(v_a_2976_);
v_exprMap_2982_ = lean_ctor_get(v_snd_2980_, 3);
v___x_2983_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2982_, v_a_2955_);
if (lean_obj_tag(v___x_2983_) == 1)
{
lean_object* v_val_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_3061_; 
lean_del_object(v___x_2973_);
lean_dec(v_a_2955_);
v_val_2984_ = lean_ctor_get(v___x_2983_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_2986_ = v___x_2983_;
v_isShared_2987_ = v_isSharedCheck_3061_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_val_2984_);
lean_dec(v___x_2983_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_3061_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2988_; 
v___x_2988_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2982_, v_a_2956_);
if (lean_obj_tag(v___x_2988_) == 1)
{
lean_object* v_val_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3051_; 
lean_del_object(v___x_2986_);
lean_del_object(v___x_2978_);
lean_dec(v_a_2956_);
v_val_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_3051_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_val_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3051_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2993_; 
v___x_2993_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2965_, v_snd_2980_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3042_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_2996_ = v___x_2993_;
v_isShared_2997_ = v_isSharedCheck_3042_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2993_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3042_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v_snd_2998_; lean_object* v_fst_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3041_; 
v_snd_2998_ = lean_ctor_get(v_a_2994_, 1);
v_fst_2999_ = lean_ctor_get(v_a_2994_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v_a_2994_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3001_ = v_a_2994_;
v_isShared_3002_ = v_isSharedCheck_3041_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_snd_2998_);
lean_inc(v_fst_2999_);
lean_dec(v_a_2994_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3041_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v_stream_3003_; lean_object* v_nameMap_3004_; lean_object* v_levelMap_3005_; lean_object* v_exprMap_3006_; lean_object* v_recursorRuleMap_3007_; lean_object* v_constMap_3008_; lean_object* v_constOrder_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3040_; 
v_stream_3003_ = lean_ctor_get(v_snd_2998_, 0);
v_nameMap_3004_ = lean_ctor_get(v_snd_2998_, 1);
v_levelMap_3005_ = lean_ctor_get(v_snd_2998_, 2);
v_exprMap_3006_ = lean_ctor_get(v_snd_2998_, 3);
v_recursorRuleMap_3007_ = lean_ctor_get(v_snd_2998_, 4);
v_constMap_3008_ = lean_ctor_get(v_snd_2998_, 5);
v_constOrder_3009_ = lean_ctor_get(v_snd_2998_, 6);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_snd_2998_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3011_ = v_snd_2998_;
v_isShared_3012_ = v_isSharedCheck_3040_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_constOrder_3009_);
lean_inc(v_constMap_3008_);
lean_inc(v_recursorRuleMap_3007_);
lean_inc(v_exprMap_3006_);
lean_inc(v_levelMap_3005_);
lean_inc(v_nameMap_3004_);
lean_inc(v_stream_3003_);
lean_dec(v_snd_2998_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3040_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
uint8_t v___x_3013_; 
v___x_3013_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3008_, v_val_2971_);
if (v___x_3013_ == 0)
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3017_; 
lean_inc(v_val_2971_);
v___x_3014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3014_, 0, v_val_2971_);
lean_ctor_set(v___x_3014_, 1, v_fst_2981_);
lean_ctor_set(v___x_3014_, 2, v_val_2984_);
v___x_3015_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3015_, 0, v___x_3014_);
lean_ctor_set(v___x_3015_, 1, v_val_2989_);
lean_ctor_set(v___x_3015_, 2, v_fst_2999_);
lean_ctor_set_uint8(v___x_3015_, sizeof(void*)*3, v_b_2958_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set_tag(v___x_2991_, 3);
lean_ctor_set(v___x_2991_, 0, v___x_3015_);
v___x_3017_ = v___x_2991_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3018_ = lean_box(0);
lean_inc(v_val_2971_);
v___x_3019_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3008_, v_val_2971_, v___x_3017_);
v___x_3020_ = lean_array_push(v_constOrder_3009_, v_val_2971_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 6, v___x_3020_);
lean_ctor_set(v___x_3011_, 5, v___x_3019_);
v___x_3022_ = v___x_3011_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_stream_3003_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v_nameMap_3004_);
lean_ctor_set(v_reuseFailAlloc_3029_, 2, v_levelMap_3005_);
lean_ctor_set(v_reuseFailAlloc_3029_, 3, v_exprMap_3006_);
lean_ctor_set(v_reuseFailAlloc_3029_, 4, v_recursorRuleMap_3007_);
lean_ctor_set(v_reuseFailAlloc_3029_, 5, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3029_, 6, v___x_3020_);
v___x_3022_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
lean_object* v___x_3024_; 
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 1, v___x_3022_);
lean_ctor_set(v___x_3001_, 0, v___x_3018_);
v___x_3024_ = v___x_3001_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3018_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v___x_3022_);
v___x_3024_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3026_; 
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 0, v___x_3024_);
v___x_3026_ = v___x_2996_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3024_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
else
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
lean_del_object(v___x_3011_);
lean_dec_ref(v_constOrder_3009_);
lean_dec_ref(v_constMap_3008_);
lean_dec_ref(v_recursorRuleMap_3007_);
lean_dec_ref(v_exprMap_3006_);
lean_dec_ref(v_levelMap_3005_);
lean_dec_ref(v_nameMap_3004_);
lean_dec_ref(v_stream_3003_);
lean_del_object(v___x_3001_);
lean_dec(v_fst_2999_);
lean_dec(v_val_2989_);
lean_dec(v_val_2984_);
lean_dec(v_fst_2981_);
v___x_3031_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3032_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2971_, v___x_3013_);
v___x_3033_ = lean_string_append(v___x_3031_, v___x_3032_);
lean_dec_ref(v___x_3032_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set_tag(v___x_2991_, 18);
lean_ctor_set(v___x_2991_, 0, v___x_3033_);
v___x_3035_ = v___x_2991_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3037_; 
if (v_isShared_2997_ == 0)
{
lean_ctor_set_tag(v___x_2996_, 1);
lean_ctor_set(v___x_2996_, 0, v___x_3035_);
v___x_3037_ = v___x_2996_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3050_; 
lean_del_object(v___x_2991_);
lean_dec(v_val_2989_);
lean_dec(v_val_2984_);
lean_dec(v_fst_2981_);
lean_dec(v_val_2971_);
v_a_3043_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3045_ = v___x_2993_;
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_2993_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3048_; 
if (v_isShared_3046_ == 0)
{
v___x_3048_ = v___x_3045_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3043_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
}
}
else
{
lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3056_; 
lean_dec(v___x_2988_);
lean_dec(v_val_2984_);
lean_dec(v_fst_2981_);
lean_dec(v_snd_2980_);
lean_dec(v_val_2971_);
lean_dec_ref(v_elems_2965_);
v___x_3052_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3053_ = l_Nat_reprFast(v_a_2956_);
v___x_3054_ = lean_string_append(v___x_3052_, v___x_3053_);
lean_dec_ref(v___x_3053_);
if (v_isShared_2987_ == 0)
{
lean_ctor_set_tag(v___x_2986_, 18);
lean_ctor_set(v___x_2986_, 0, v___x_3054_);
v___x_3056_ = v___x_2986_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
lean_object* v___x_3058_; 
if (v_isShared_2979_ == 0)
{
lean_ctor_set_tag(v___x_2978_, 1);
lean_ctor_set(v___x_2978_, 0, v___x_3056_);
v___x_3058_ = v___x_2978_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
}
else
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3066_; 
lean_dec(v___x_2983_);
lean_dec(v_fst_2981_);
lean_dec(v_snd_2980_);
lean_dec(v_val_2971_);
lean_dec_ref(v_elems_2965_);
lean_dec(v_a_2956_);
v___x_3062_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3063_ = l_Nat_reprFast(v_a_2955_);
v___x_3064_ = lean_string_append(v___x_3062_, v___x_3063_);
lean_dec_ref(v___x_3063_);
if (v_isShared_2974_ == 0)
{
lean_ctor_set_tag(v___x_2973_, 18);
lean_ctor_set(v___x_2973_, 0, v___x_3064_);
v___x_3066_ = v___x_2973_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v___x_3064_);
v___x_3066_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
lean_object* v___x_3068_; 
if (v_isShared_2979_ == 0)
{
lean_ctor_set_tag(v___x_2978_, 1);
lean_ctor_set(v___x_2978_, 0, v___x_3066_);
v___x_3068_ = v___x_2978_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3066_);
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
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_del_object(v___x_2973_);
lean_dec(v_val_2971_);
lean_dec_ref(v_elems_2965_);
lean_dec(v_a_2956_);
lean_dec(v_a_2955_);
v_a_3072_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_2975_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_2975_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3085_; 
lean_dec(v___x_2970_);
lean_dec_ref(v_elems_2965_);
lean_dec(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec_ref(v_elems_2937_);
lean_dec_ref(v_a_2907_);
v___x_3081_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3082_ = l_Nat_reprFast(v_a_2954_);
v___x_3083_ = lean_string_append(v___x_3081_, v___x_3082_);
lean_dec_ref(v___x_3082_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set_tag(v___x_2967_, 18);
lean_ctor_set(v___x_2967_, 0, v___x_3083_);
v___x_3085_ = v___x_2967_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v___x_3083_);
v___x_3085_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
lean_object* v___x_3087_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 0, v___x_3085_);
v___x_3087_ = v___x_2963_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3085_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
}
else
{
lean_del_object(v___x_2963_);
lean_dec(v_val_2961_);
lean_dec(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec_ref(v_elems_2937_);
lean_dec_ref(v_a_2907_);
goto v___jp_2909_;
}
}
}
else
{
lean_dec(v___x_2960_);
lean_dec(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec_ref(v_elems_2937_);
lean_dec_ref(v_a_2907_);
goto v___jp_2909_;
}
}
}
}
else
{
lean_dec(v_exponent_2951_);
lean_dec(v_mantissa_2950_);
lean_dec(v_mantissa_2942_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2912_;
}
}
else
{
lean_dec(v_val_2948_);
lean_dec(v_mantissa_2942_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2912_;
}
}
else
{
lean_dec(v___x_2947_);
lean_dec(v_mantissa_2942_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2912_;
}
}
}
else
{
lean_dec(v_exponent_2943_);
lean_dec(v_mantissa_2942_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2915_;
}
}
else
{
lean_dec(v_val_2940_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2915_;
}
}
else
{
lean_dec(v___x_2939_);
lean_dec_ref(v_elems_2937_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2915_;
}
}
else
{
lean_dec(v_val_2936_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2918_;
}
}
else
{
lean_dec(v___x_2935_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2918_;
}
}
}
else
{
lean_dec(v_exponent_2929_);
lean_dec(v_mantissa_2928_);
lean_dec_ref(v_a_2907_);
goto v___jp_2921_;
}
}
else
{
lean_dec(v_val_2926_);
lean_dec_ref(v_a_2907_);
goto v___jp_2921_;
}
}
else
{
lean_dec(v___x_2925_);
lean_dec_ref(v_a_2907_);
goto v___jp_2921_;
}
v___jp_2909_:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
return v___x_2911_;
}
v___jp_2912_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
return v___x_2914_;
}
v___jp_2915_:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2916_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
return v___x_2917_;
}
v___jp_2918_:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2919_);
return v___x_2920_;
}
v___jp_2921_:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2922_);
return v___x_2923_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___boxed(lean_object* v_data_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(v_data_3104_, v_a_3105_);
lean_dec(v_data_3104_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(lean_object* v_data_3116_, lean_object* v_a_3117_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3132_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3116_, v___x_3131_);
if (lean_obj_tag(v___x_3132_) == 1)
{
lean_object* v_val_3133_; 
v_val_3133_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_val_3133_);
lean_dec_ref_known(v___x_3132_, 1);
if (lean_obj_tag(v_val_3133_) == 2)
{
lean_object* v_n_3134_; lean_object* v_mantissa_3135_; lean_object* v_exponent_3136_; lean_object* v_natZero_3137_; lean_object* v_intZero_3138_; uint8_t v_isNeg_3139_; 
v_n_3134_ = lean_ctor_get(v_val_3133_, 0);
lean_inc_ref(v_n_3134_);
lean_dec_ref_known(v_val_3133_, 1);
v_mantissa_3135_ = lean_ctor_get(v_n_3134_, 0);
lean_inc(v_mantissa_3135_);
v_exponent_3136_ = lean_ctor_get(v_n_3134_, 1);
lean_inc(v_exponent_3136_);
lean_dec_ref(v_n_3134_);
v_natZero_3137_ = lean_unsigned_to_nat(0u);
v_intZero_3138_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3139_ = lean_int_dec_lt(v_mantissa_3135_, v_intZero_3138_);
if (v_isNeg_3139_ == 0)
{
uint8_t v___x_3140_; 
v___x_3140_ = lean_nat_dec_eq(v_exponent_3136_, v_natZero_3137_);
lean_dec(v_exponent_3136_);
if (v___x_3140_ == 0)
{
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3128_;
}
else
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3141_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3142_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3116_, v___x_3141_);
if (lean_obj_tag(v___x_3142_) == 1)
{
lean_object* v_val_3143_; 
v_val_3143_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_val_3143_);
lean_dec_ref_known(v___x_3142_, 1);
if (lean_obj_tag(v_val_3143_) == 4)
{
lean_object* v_elems_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_elems_3144_ = lean_ctor_get(v_val_3143_, 0);
lean_inc_ref(v_elems_3144_);
lean_dec_ref_known(v_val_3143_, 1);
v___x_3145_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3146_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3116_, v___x_3145_);
if (lean_obj_tag(v___x_3146_) == 1)
{
lean_object* v_val_3147_; 
v_val_3147_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_val_3147_);
lean_dec_ref_known(v___x_3146_, 1);
if (lean_obj_tag(v_val_3147_) == 2)
{
lean_object* v_n_3148_; lean_object* v_mantissa_3149_; lean_object* v_exponent_3150_; uint8_t v_isNeg_3151_; 
v_n_3148_ = lean_ctor_get(v_val_3147_, 0);
lean_inc_ref(v_n_3148_);
lean_dec_ref_known(v_val_3147_, 1);
v_mantissa_3149_ = lean_ctor_get(v_n_3148_, 0);
lean_inc(v_mantissa_3149_);
v_exponent_3150_ = lean_ctor_get(v_n_3148_, 1);
lean_inc(v_exponent_3150_);
lean_dec_ref(v_n_3148_);
v_isNeg_3151_ = lean_int_dec_lt(v_mantissa_3149_, v_intZero_3138_);
if (v_isNeg_3151_ == 0)
{
uint8_t v___x_3152_; 
v___x_3152_ = lean_nat_dec_eq(v_exponent_3150_, v_natZero_3137_);
lean_dec(v_exponent_3150_);
if (v___x_3152_ == 0)
{
lean_dec(v_mantissa_3149_);
lean_dec_ref(v_elems_3144_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3122_;
}
else
{
lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3153_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2));
v___x_3154_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3116_, v___x_3153_);
if (lean_obj_tag(v___x_3154_) == 1)
{
lean_object* v_val_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3283_; 
v_val_3155_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3157_ = v___x_3154_;
v_isShared_3158_ = v_isSharedCheck_3283_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_val_3155_);
lean_dec(v___x_3154_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3283_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
if (lean_obj_tag(v_val_3155_) == 3)
{
lean_object* v_s_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3282_; 
v_s_3159_ = lean_ctor_get(v_val_3155_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v_val_3155_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3161_ = v_val_3155_;
v_isShared_3162_ = v_isSharedCheck_3282_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_s_3159_);
lean_dec(v_val_3155_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3282_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v_nameMap_3163_; lean_object* v_a_3164_; lean_object* v___x_3165_; 
v_nameMap_3163_ = lean_ctor_get(v_a_3117_, 1);
v_a_3164_ = lean_nat_abs(v_mantissa_3135_);
lean_dec(v_mantissa_3135_);
v___x_3165_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3163_, v_a_3164_);
if (lean_obj_tag(v___x_3165_) == 1)
{
lean_object* v_val_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3272_; 
lean_dec(v_a_3164_);
lean_del_object(v___x_3157_);
v_val_3166_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3168_ = v___x_3165_;
v_isShared_3169_ = v_isSharedCheck_3272_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_val_3166_);
lean_dec(v___x_3165_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3272_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v_a_3170_; lean_object* v___x_3171_; 
v_a_3170_ = lean_nat_abs(v_mantissa_3149_);
lean_dec(v_mantissa_3149_);
v___x_3171_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3144_, v_a_3117_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3263_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3174_ = v___x_3171_;
v_isShared_3175_ = v_isSharedCheck_3263_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3171_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3263_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v_snd_3176_; lean_object* v_fst_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3262_; 
v_snd_3176_ = lean_ctor_get(v_a_3172_, 1);
v_fst_3177_ = lean_ctor_get(v_a_3172_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_a_3172_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3179_ = v_a_3172_;
v_isShared_3180_ = v_isSharedCheck_3262_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_snd_3176_);
lean_inc(v_fst_3177_);
lean_dec(v_a_3172_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3262_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v_stream_3181_; lean_object* v_nameMap_3182_; lean_object* v_levelMap_3183_; lean_object* v_exprMap_3184_; lean_object* v_recursorRuleMap_3185_; lean_object* v_constMap_3186_; lean_object* v_constOrder_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3261_; 
v_stream_3181_ = lean_ctor_get(v_snd_3176_, 0);
v_nameMap_3182_ = lean_ctor_get(v_snd_3176_, 1);
v_levelMap_3183_ = lean_ctor_get(v_snd_3176_, 2);
v_exprMap_3184_ = lean_ctor_get(v_snd_3176_, 3);
v_recursorRuleMap_3185_ = lean_ctor_get(v_snd_3176_, 4);
v_constMap_3186_ = lean_ctor_get(v_snd_3176_, 5);
v_constOrder_3187_ = lean_ctor_get(v_snd_3176_, 6);
v_isSharedCheck_3261_ = !lean_is_exclusive(v_snd_3176_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3189_ = v_snd_3176_;
v_isShared_3190_ = v_isSharedCheck_3261_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_constOrder_3187_);
lean_inc(v_constMap_3186_);
lean_inc(v_recursorRuleMap_3185_);
lean_inc(v_exprMap_3184_);
lean_inc(v_levelMap_3183_);
lean_inc(v_nameMap_3182_);
lean_inc(v_stream_3181_);
lean_dec(v_snd_3176_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3261_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3184_, v_a_3170_);
if (lean_obj_tag(v___x_3191_) == 1)
{
lean_object* v_val_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3251_; 
lean_dec(v_a_3170_);
v_val_3192_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3194_ = v___x_3191_;
v_isShared_3195_ = v_isSharedCheck_3251_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_val_3192_);
lean_dec(v___x_3191_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3251_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
uint8_t v_kind_3197_; lean_object* v_stream_3198_; lean_object* v_nameMap_3199_; lean_object* v_levelMap_3200_; lean_object* v_exprMap_3201_; lean_object* v_recursorRuleMap_3202_; lean_object* v_constMap_3203_; lean_object* v_constOrder_3204_; uint8_t v___x_3232_; 
v___x_3232_ = lean_string_dec_eq(v_s_3159_, v___x_3145_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3233_; uint8_t v___x_3234_; 
v___x_3233_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3));
v___x_3234_ = lean_string_dec_eq(v_s_3159_, v___x_3233_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; uint8_t v___x_3236_; 
v___x_3235_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4));
v___x_3236_ = lean_string_dec_eq(v_s_3159_, v___x_3235_);
if (v___x_3236_ == 0)
{
lean_object* v___x_3237_; uint8_t v___x_3238_; 
v___x_3237_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5));
v___x_3238_ = lean_string_dec_eq(v_s_3159_, v___x_3237_);
if (v___x_3238_ == 0)
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3242_; 
lean_del_object(v___x_3194_);
lean_dec(v_val_3192_);
lean_del_object(v___x_3189_);
lean_dec_ref(v_constOrder_3187_);
lean_dec_ref(v_constMap_3186_);
lean_dec_ref(v_recursorRuleMap_3185_);
lean_dec_ref(v_exprMap_3184_);
lean_dec_ref(v_levelMap_3183_);
lean_dec_ref(v_nameMap_3182_);
lean_dec_ref(v_stream_3181_);
lean_del_object(v___x_3179_);
lean_dec(v_fst_3177_);
lean_del_object(v___x_3174_);
lean_dec(v_val_3166_);
v___x_3239_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6));
v___x_3240_ = lean_string_append(v___x_3239_, v_s_3159_);
lean_dec_ref(v_s_3159_);
if (v_isShared_3169_ == 0)
{
lean_ctor_set_tag(v___x_3168_, 18);
lean_ctor_set(v___x_3168_, 0, v___x_3240_);
v___x_3242_ = v___x_3168_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3240_);
v___x_3242_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
lean_object* v___x_3244_; 
if (v_isShared_3162_ == 0)
{
lean_ctor_set_tag(v___x_3161_, 1);
lean_ctor_set(v___x_3161_, 0, v___x_3242_);
v___x_3244_ = v___x_3161_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
else
{
uint8_t v___x_3247_; 
lean_del_object(v___x_3168_);
lean_del_object(v___x_3161_);
lean_dec_ref(v_s_3159_);
v___x_3247_ = 3;
v_kind_3197_ = v___x_3247_;
v_stream_3198_ = v_stream_3181_;
v_nameMap_3199_ = v_nameMap_3182_;
v_levelMap_3200_ = v_levelMap_3183_;
v_exprMap_3201_ = v_exprMap_3184_;
v_recursorRuleMap_3202_ = v_recursorRuleMap_3185_;
v_constMap_3203_ = v_constMap_3186_;
v_constOrder_3204_ = v_constOrder_3187_;
goto v___jp_3196_;
}
}
else
{
uint8_t v___x_3248_; 
lean_del_object(v___x_3168_);
lean_del_object(v___x_3161_);
lean_dec_ref(v_s_3159_);
v___x_3248_ = 2;
v_kind_3197_ = v___x_3248_;
v_stream_3198_ = v_stream_3181_;
v_nameMap_3199_ = v_nameMap_3182_;
v_levelMap_3200_ = v_levelMap_3183_;
v_exprMap_3201_ = v_exprMap_3184_;
v_recursorRuleMap_3202_ = v_recursorRuleMap_3185_;
v_constMap_3203_ = v_constMap_3186_;
v_constOrder_3204_ = v_constOrder_3187_;
goto v___jp_3196_;
}
}
else
{
uint8_t v___x_3249_; 
lean_del_object(v___x_3168_);
lean_del_object(v___x_3161_);
lean_dec_ref(v_s_3159_);
v___x_3249_ = 1;
v_kind_3197_ = v___x_3249_;
v_stream_3198_ = v_stream_3181_;
v_nameMap_3199_ = v_nameMap_3182_;
v_levelMap_3200_ = v_levelMap_3183_;
v_exprMap_3201_ = v_exprMap_3184_;
v_recursorRuleMap_3202_ = v_recursorRuleMap_3185_;
v_constMap_3203_ = v_constMap_3186_;
v_constOrder_3204_ = v_constOrder_3187_;
goto v___jp_3196_;
}
}
else
{
uint8_t v___x_3250_; 
lean_del_object(v___x_3168_);
lean_del_object(v___x_3161_);
lean_dec_ref(v_s_3159_);
v___x_3250_ = 0;
v_kind_3197_ = v___x_3250_;
v_stream_3198_ = v_stream_3181_;
v_nameMap_3199_ = v_nameMap_3182_;
v_levelMap_3200_ = v_levelMap_3183_;
v_exprMap_3201_ = v_exprMap_3184_;
v_recursorRuleMap_3202_ = v_recursorRuleMap_3185_;
v_constMap_3203_ = v_constMap_3186_;
v_constOrder_3204_ = v_constOrder_3187_;
goto v___jp_3196_;
}
v___jp_3196_:
{
uint8_t v___x_3205_; 
v___x_3205_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3203_, v_val_3166_);
if (v___x_3205_ == 0)
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3209_; 
lean_inc(v_val_3166_);
v___x_3206_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3206_, 0, v_val_3166_);
lean_ctor_set(v___x_3206_, 1, v_fst_3177_);
lean_ctor_set(v___x_3206_, 2, v_val_3192_);
v___x_3207_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
lean_ctor_set_uint8(v___x_3207_, sizeof(void*)*1, v_kind_3197_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set_tag(v___x_3194_, 4);
lean_ctor_set(v___x_3194_, 0, v___x_3207_);
v___x_3209_ = v___x_3194_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v___x_3207_);
v___x_3209_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3214_; 
v___x_3210_ = lean_box(0);
lean_inc(v_val_3166_);
v___x_3211_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3203_, v_val_3166_, v___x_3209_);
v___x_3212_ = lean_array_push(v_constOrder_3204_, v_val_3166_);
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 6, v___x_3212_);
lean_ctor_set(v___x_3189_, 5, v___x_3211_);
lean_ctor_set(v___x_3189_, 4, v_recursorRuleMap_3202_);
lean_ctor_set(v___x_3189_, 3, v_exprMap_3201_);
lean_ctor_set(v___x_3189_, 2, v_levelMap_3200_);
lean_ctor_set(v___x_3189_, 1, v_nameMap_3199_);
lean_ctor_set(v___x_3189_, 0, v_stream_3198_);
v___x_3214_ = v___x_3189_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_stream_3198_);
lean_ctor_set(v_reuseFailAlloc_3221_, 1, v_nameMap_3199_);
lean_ctor_set(v_reuseFailAlloc_3221_, 2, v_levelMap_3200_);
lean_ctor_set(v_reuseFailAlloc_3221_, 3, v_exprMap_3201_);
lean_ctor_set(v_reuseFailAlloc_3221_, 4, v_recursorRuleMap_3202_);
lean_ctor_set(v_reuseFailAlloc_3221_, 5, v___x_3211_);
lean_ctor_set(v_reuseFailAlloc_3221_, 6, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
lean_object* v___x_3216_; 
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 1, v___x_3214_);
lean_ctor_set(v___x_3179_, 0, v___x_3210_);
v___x_3216_ = v___x_3179_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v___x_3210_);
lean_ctor_set(v_reuseFailAlloc_3220_, 1, v___x_3214_);
v___x_3216_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3218_; 
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 0, v___x_3216_);
v___x_3218_ = v___x_3174_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v___x_3216_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
}
}
else
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3227_; 
lean_dec_ref(v_constOrder_3204_);
lean_dec_ref(v_constMap_3203_);
lean_dec_ref(v_recursorRuleMap_3202_);
lean_dec_ref(v_exprMap_3201_);
lean_dec_ref(v_levelMap_3200_);
lean_dec_ref(v_nameMap_3199_);
lean_dec_ref(v_stream_3198_);
lean_dec(v_val_3192_);
lean_del_object(v___x_3189_);
lean_del_object(v___x_3179_);
lean_dec(v_fst_3177_);
v___x_3223_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3224_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3166_, v___x_3205_);
v___x_3225_ = lean_string_append(v___x_3223_, v___x_3224_);
lean_dec_ref(v___x_3224_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set_tag(v___x_3194_, 18);
lean_ctor_set(v___x_3194_, 0, v___x_3225_);
v___x_3227_ = v___x_3194_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v___x_3225_);
v___x_3227_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
lean_object* v___x_3229_; 
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 1);
lean_ctor_set(v___x_3174_, 0, v___x_3227_);
v___x_3229_ = v___x_3174_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v___x_3227_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
}
}
else
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3256_; 
lean_dec(v___x_3191_);
lean_del_object(v___x_3189_);
lean_dec_ref(v_constOrder_3187_);
lean_dec_ref(v_constMap_3186_);
lean_dec_ref(v_recursorRuleMap_3185_);
lean_dec_ref(v_exprMap_3184_);
lean_dec_ref(v_levelMap_3183_);
lean_dec_ref(v_nameMap_3182_);
lean_dec_ref(v_stream_3181_);
lean_del_object(v___x_3179_);
lean_dec(v_fst_3177_);
lean_dec(v_val_3166_);
lean_del_object(v___x_3161_);
lean_dec_ref(v_s_3159_);
v___x_3252_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3253_ = l_Nat_reprFast(v_a_3170_);
v___x_3254_ = lean_string_append(v___x_3252_, v___x_3253_);
lean_dec_ref(v___x_3253_);
if (v_isShared_3169_ == 0)
{
lean_ctor_set_tag(v___x_3168_, 18);
lean_ctor_set(v___x_3168_, 0, v___x_3254_);
v___x_3256_ = v___x_3168_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3258_; 
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 1);
lean_ctor_set(v___x_3174_, 0, v___x_3256_);
v___x_3258_ = v___x_3174_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v___x_3256_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
lean_dec(v_a_3170_);
lean_del_object(v___x_3168_);
lean_dec(v_val_3166_);
lean_del_object(v___x_3161_);
lean_dec_ref(v_s_3159_);
v_a_3264_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3171_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3171_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
}
}
else
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
lean_dec(v___x_3165_);
lean_dec_ref(v_s_3159_);
lean_dec(v_mantissa_3149_);
lean_dec_ref(v_elems_3144_);
lean_dec_ref(v_a_3117_);
v___x_3273_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3274_ = l_Nat_reprFast(v_a_3164_);
v___x_3275_ = lean_string_append(v___x_3273_, v___x_3274_);
lean_dec_ref(v___x_3274_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set_tag(v___x_3161_, 18);
lean_ctor_set(v___x_3161_, 0, v___x_3275_);
v___x_3277_ = v___x_3161_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3279_; 
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 0, v___x_3277_);
v___x_3279_ = v___x_3157_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3277_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
}
else
{
lean_del_object(v___x_3157_);
lean_dec(v_val_3155_);
lean_dec(v_mantissa_3149_);
lean_dec_ref(v_elems_3144_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3119_;
}
}
}
else
{
lean_dec(v___x_3154_);
lean_dec(v_mantissa_3149_);
lean_dec_ref(v_elems_3144_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3119_;
}
}
}
else
{
lean_dec(v_exponent_3150_);
lean_dec(v_mantissa_3149_);
lean_dec_ref(v_elems_3144_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3122_;
}
}
else
{
lean_dec(v_val_3147_);
lean_dec_ref(v_elems_3144_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3122_;
}
}
else
{
lean_dec(v___x_3146_);
lean_dec_ref(v_elems_3144_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3122_;
}
}
else
{
lean_dec(v_val_3143_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3125_;
}
}
else
{
lean_dec(v___x_3142_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3125_;
}
}
}
else
{
lean_dec(v_exponent_3136_);
lean_dec(v_mantissa_3135_);
lean_dec_ref(v_a_3117_);
goto v___jp_3128_;
}
}
else
{
lean_dec(v_val_3133_);
lean_dec_ref(v_a_3117_);
goto v___jp_3128_;
}
}
else
{
lean_dec(v___x_3132_);
lean_dec_ref(v_a_3117_);
goto v___jp_3128_;
}
v___jp_3119_:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
return v___x_3121_;
}
v___jp_3122_:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
return v___x_3124_;
}
v___jp_3125_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
return v___x_3127_;
}
v___jp_3128_:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3129_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
return v___x_3130_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___boxed(lean_object* v_data_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(v_data_3284_, v_a_3285_);
lean_dec(v_data_3284_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(lean_object* v_json_3300_, lean_object* v_a_3301_){
_start:
{
if (lean_obj_tag(v_json_3300_) == 5)
{
lean_object* v_kvPairs_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v_kvPairs_3336_ = lean_ctor_get(v_json_3300_, 0);
v___x_3337_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3338_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3337_);
if (lean_obj_tag(v___x_3338_) == 1)
{
lean_object* v_val_3339_; 
v_val_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_val_3339_);
lean_dec_ref_known(v___x_3338_, 1);
if (lean_obj_tag(v_val_3339_) == 2)
{
lean_object* v_n_3340_; lean_object* v_mantissa_3341_; lean_object* v_exponent_3342_; lean_object* v_natZero_3343_; lean_object* v_intZero_3344_; uint8_t v_isNeg_3345_; 
v_n_3340_ = lean_ctor_get(v_val_3339_, 0);
lean_inc_ref(v_n_3340_);
lean_dec_ref_known(v_val_3339_, 1);
v_mantissa_3341_ = lean_ctor_get(v_n_3340_, 0);
lean_inc(v_mantissa_3341_);
v_exponent_3342_ = lean_ctor_get(v_n_3340_, 1);
lean_inc(v_exponent_3342_);
lean_dec_ref(v_n_3340_);
v_natZero_3343_ = lean_unsigned_to_nat(0u);
v_intZero_3344_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3345_ = lean_int_dec_lt(v_mantissa_3341_, v_intZero_3344_);
if (v_isNeg_3345_ == 0)
{
uint8_t v___x_3346_; 
v___x_3346_ = lean_nat_dec_eq(v_exponent_3342_, v_natZero_3343_);
lean_dec(v_exponent_3342_);
if (v___x_3346_ == 0)
{
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3303_;
}
else
{
lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3347_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3348_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3347_);
if (lean_obj_tag(v___x_3348_) == 1)
{
lean_object* v_val_3349_; 
v_val_3349_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_val_3349_);
lean_dec_ref_known(v___x_3348_, 1);
if (lean_obj_tag(v_val_3349_) == 4)
{
lean_object* v_elems_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v_elems_3350_ = lean_ctor_get(v_val_3349_, 0);
lean_inc_ref(v_elems_3350_);
lean_dec_ref_known(v_val_3349_, 1);
v___x_3351_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3352_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3351_);
if (lean_obj_tag(v___x_3352_) == 1)
{
lean_object* v_val_3353_; 
v_val_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_val_3353_);
lean_dec_ref_known(v___x_3352_, 1);
if (lean_obj_tag(v_val_3353_) == 2)
{
lean_object* v_n_3354_; lean_object* v_mantissa_3355_; lean_object* v_exponent_3356_; uint8_t v_isNeg_3357_; 
v_n_3354_ = lean_ctor_get(v_val_3353_, 0);
lean_inc_ref(v_n_3354_);
lean_dec_ref_known(v_val_3353_, 1);
v_mantissa_3355_ = lean_ctor_get(v_n_3354_, 0);
lean_inc(v_mantissa_3355_);
v_exponent_3356_ = lean_ctor_get(v_n_3354_, 1);
lean_inc(v_exponent_3356_);
lean_dec_ref(v_n_3354_);
v_isNeg_3357_ = lean_int_dec_lt(v_mantissa_3355_, v_intZero_3344_);
if (v_isNeg_3357_ == 0)
{
uint8_t v___x_3358_; 
v___x_3358_ = lean_nat_dec_eq(v_exponent_3356_, v_natZero_3343_);
lean_dec(v_exponent_3356_);
if (v___x_3358_ == 0)
{
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3309_;
}
else
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2));
v___x_3360_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3359_);
if (lean_obj_tag(v___x_3360_) == 1)
{
lean_object* v_val_3361_; 
v_val_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_val_3361_);
lean_dec_ref_known(v___x_3360_, 1);
if (lean_obj_tag(v_val_3361_) == 2)
{
lean_object* v_n_3362_; lean_object* v_mantissa_3363_; lean_object* v_exponent_3364_; uint8_t v_isNeg_3365_; 
v_n_3362_ = lean_ctor_get(v_val_3361_, 0);
lean_inc_ref(v_n_3362_);
lean_dec_ref_known(v_val_3361_, 1);
v_mantissa_3363_ = lean_ctor_get(v_n_3362_, 0);
lean_inc(v_mantissa_3363_);
v_exponent_3364_ = lean_ctor_get(v_n_3362_, 1);
lean_inc(v_exponent_3364_);
lean_dec_ref(v_n_3362_);
v_isNeg_3365_ = lean_int_dec_lt(v_mantissa_3363_, v_intZero_3344_);
if (v_isNeg_3365_ == 0)
{
uint8_t v___x_3366_; 
v___x_3366_ = lean_nat_dec_eq(v_exponent_3364_, v_natZero_3343_);
lean_dec(v_exponent_3364_);
if (v___x_3366_ == 0)
{
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3312_;
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3));
v___x_3368_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3367_);
if (lean_obj_tag(v___x_3368_) == 1)
{
lean_object* v_val_3369_; 
v_val_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_val_3369_);
lean_dec_ref_known(v___x_3368_, 1);
if (lean_obj_tag(v_val_3369_) == 2)
{
lean_object* v_n_3370_; lean_object* v_mantissa_3371_; lean_object* v_exponent_3372_; uint8_t v_isNeg_3373_; 
v_n_3370_ = lean_ctor_get(v_val_3369_, 0);
lean_inc_ref(v_n_3370_);
lean_dec_ref_known(v_val_3369_, 1);
v_mantissa_3371_ = lean_ctor_get(v_n_3370_, 0);
lean_inc(v_mantissa_3371_);
v_exponent_3372_ = lean_ctor_get(v_n_3370_, 1);
lean_inc(v_exponent_3372_);
lean_dec_ref(v_n_3370_);
v_isNeg_3373_ = lean_int_dec_lt(v_mantissa_3371_, v_intZero_3344_);
if (v_isNeg_3373_ == 0)
{
uint8_t v___x_3374_; 
v___x_3374_ = lean_nat_dec_eq(v_exponent_3372_, v_natZero_3343_);
lean_dec(v_exponent_3372_);
if (v___x_3374_ == 0)
{
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3315_;
}
else
{
lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3375_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_3376_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3375_);
if (lean_obj_tag(v___x_3376_) == 1)
{
lean_object* v_val_3377_; 
v_val_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_val_3377_);
lean_dec_ref_known(v___x_3376_, 1);
if (lean_obj_tag(v_val_3377_) == 4)
{
lean_object* v_elems_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v_elems_3378_ = lean_ctor_get(v_val_3377_, 0);
lean_inc_ref(v_elems_3378_);
lean_dec_ref_known(v_val_3377_, 1);
v___x_3379_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4));
v___x_3380_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3379_);
if (lean_obj_tag(v___x_3380_) == 1)
{
lean_object* v_val_3381_; 
v_val_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_val_3381_);
lean_dec_ref_known(v___x_3380_, 1);
if (lean_obj_tag(v_val_3381_) == 4)
{
lean_object* v_elems_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_elems_3382_ = lean_ctor_get(v_val_3381_, 0);
lean_inc_ref(v_elems_3382_);
lean_dec_ref_known(v_val_3381_, 1);
v___x_3383_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5));
v___x_3384_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3383_);
if (lean_obj_tag(v___x_3384_) == 1)
{
lean_object* v_val_3385_; 
v_val_3385_ = lean_ctor_get(v___x_3384_, 0);
lean_inc(v_val_3385_);
lean_dec_ref_known(v___x_3384_, 1);
if (lean_obj_tag(v_val_3385_) == 2)
{
lean_object* v_n_3386_; lean_object* v_mantissa_3387_; lean_object* v_exponent_3388_; uint8_t v_isNeg_3389_; 
v_n_3386_ = lean_ctor_get(v_val_3385_, 0);
lean_inc_ref(v_n_3386_);
lean_dec_ref_known(v_val_3385_, 1);
v_mantissa_3387_ = lean_ctor_get(v_n_3386_, 0);
lean_inc(v_mantissa_3387_);
v_exponent_3388_ = lean_ctor_get(v_n_3386_, 1);
lean_inc(v_exponent_3388_);
lean_dec_ref(v_n_3386_);
v_isNeg_3389_ = lean_int_dec_lt(v_mantissa_3387_, v_intZero_3344_);
if (v_isNeg_3389_ == 0)
{
uint8_t v___x_3390_; 
v___x_3390_ = lean_nat_dec_eq(v_exponent_3388_, v_natZero_3343_);
lean_dec(v_exponent_3388_);
if (v___x_3390_ == 0)
{
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3324_;
}
else
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6));
v___x_3392_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3391_);
if (lean_obj_tag(v___x_3392_) == 1)
{
lean_object* v_val_3393_; 
v_val_3393_ = lean_ctor_get(v___x_3392_, 0);
lean_inc(v_val_3393_);
lean_dec_ref_known(v___x_3392_, 1);
if (lean_obj_tag(v_val_3393_) == 1)
{
uint8_t v_b_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v_b_3394_ = lean_ctor_get_uint8(v_val_3393_, 0);
lean_dec_ref_known(v_val_3393_, 0);
v___x_3395_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3396_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3395_);
if (lean_obj_tag(v___x_3396_) == 1)
{
lean_object* v_val_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3533_; 
v_val_3397_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3399_ = v___x_3396_;
v_isShared_3400_ = v_isSharedCheck_3533_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_val_3397_);
lean_dec(v___x_3396_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3533_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
if (lean_obj_tag(v_val_3397_) == 1)
{
uint8_t v_b_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v_b_3401_ = lean_ctor_get_uint8(v_val_3397_, 0);
lean_dec_ref_known(v_val_3397_, 0);
v___x_3402_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7));
v___x_3403_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3336_, v___x_3402_);
if (lean_obj_tag(v___x_3403_) == 1)
{
lean_object* v_val_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3532_; 
v_val_3404_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3406_ = v___x_3403_;
v_isShared_3407_ = v_isSharedCheck_3532_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_val_3404_);
lean_dec(v___x_3403_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3532_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
if (lean_obj_tag(v_val_3404_) == 1)
{
uint8_t v_b_3408_; lean_object* v_nameMap_3409_; lean_object* v_a_3410_; lean_object* v___x_3411_; 
v_b_3408_ = lean_ctor_get_uint8(v_val_3404_, 0);
lean_dec_ref_known(v_val_3404_, 0);
v_nameMap_3409_ = lean_ctor_get(v_a_3301_, 1);
v_a_3410_ = lean_nat_abs(v_mantissa_3341_);
lean_dec(v_mantissa_3341_);
v___x_3411_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3409_, v_a_3410_);
if (lean_obj_tag(v___x_3411_) == 1)
{
lean_object* v_val_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3522_; 
lean_dec(v_a_3410_);
lean_del_object(v___x_3406_);
lean_del_object(v___x_3399_);
v_val_3412_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3414_ = v___x_3411_;
v_isShared_3415_ = v_isSharedCheck_3522_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_val_3412_);
lean_dec(v___x_3411_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3522_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v_a_3416_; lean_object* v_a_3417_; lean_object* v_a_3418_; lean_object* v_a_3419_; lean_object* v___x_3420_; 
v_a_3416_ = lean_nat_abs(v_mantissa_3355_);
lean_dec(v_mantissa_3355_);
v_a_3417_ = lean_nat_abs(v_mantissa_3363_);
lean_dec(v_mantissa_3363_);
v_a_3418_ = lean_nat_abs(v_mantissa_3371_);
lean_dec(v_mantissa_3371_);
v_a_3419_ = lean_nat_abs(v_mantissa_3387_);
lean_dec(v_mantissa_3387_);
v___x_3420_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3350_, v_a_3301_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v_a_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3513_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3423_ = v___x_3420_;
v_isShared_3424_ = v_isSharedCheck_3513_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_a_3421_);
lean_dec(v___x_3420_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3513_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v_snd_3425_; lean_object* v_fst_3426_; lean_object* v_exprMap_3427_; lean_object* v___x_3428_; 
v_snd_3425_ = lean_ctor_get(v_a_3421_, 1);
lean_inc(v_snd_3425_);
v_fst_3426_ = lean_ctor_get(v_a_3421_, 0);
lean_inc(v_fst_3426_);
lean_dec(v_a_3421_);
v_exprMap_3427_ = lean_ctor_get(v_snd_3425_, 3);
v___x_3428_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3427_, v_a_3416_);
if (lean_obj_tag(v___x_3428_) == 1)
{
lean_object* v_val_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3503_; 
lean_del_object(v___x_3423_);
lean_dec(v_a_3416_);
lean_del_object(v___x_3414_);
v_val_3429_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3431_ = v___x_3428_;
v_isShared_3432_ = v_isSharedCheck_3503_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_val_3429_);
lean_dec(v___x_3428_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3503_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3433_; 
v___x_3433_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3378_, v_snd_3425_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; lean_object* v_fst_3435_; lean_object* v_snd_3436_; lean_object* v___x_3437_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_a_3434_);
lean_dec_ref_known(v___x_3433_, 1);
v_fst_3435_ = lean_ctor_get(v_a_3434_, 0);
lean_inc(v_fst_3435_);
v_snd_3436_ = lean_ctor_get(v_a_3434_, 1);
lean_inc(v_snd_3436_);
lean_dec(v_a_3434_);
v___x_3437_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3382_, v_snd_3436_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3486_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3440_ = v___x_3437_;
v_isShared_3441_ = v_isSharedCheck_3486_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3437_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3486_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v_snd_3442_; lean_object* v_fst_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3485_; 
v_snd_3442_ = lean_ctor_get(v_a_3438_, 1);
v_fst_3443_ = lean_ctor_get(v_a_3438_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_a_3438_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3445_ = v_a_3438_;
v_isShared_3446_ = v_isSharedCheck_3485_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_snd_3442_);
lean_inc(v_fst_3443_);
lean_dec(v_a_3438_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3485_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v_stream_3447_; lean_object* v_nameMap_3448_; lean_object* v_levelMap_3449_; lean_object* v_exprMap_3450_; lean_object* v_recursorRuleMap_3451_; lean_object* v_constMap_3452_; lean_object* v_constOrder_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3484_; 
v_stream_3447_ = lean_ctor_get(v_snd_3442_, 0);
v_nameMap_3448_ = lean_ctor_get(v_snd_3442_, 1);
v_levelMap_3449_ = lean_ctor_get(v_snd_3442_, 2);
v_exprMap_3450_ = lean_ctor_get(v_snd_3442_, 3);
v_recursorRuleMap_3451_ = lean_ctor_get(v_snd_3442_, 4);
v_constMap_3452_ = lean_ctor_get(v_snd_3442_, 5);
v_constOrder_3453_ = lean_ctor_get(v_snd_3442_, 6);
v_isSharedCheck_3484_ = !lean_is_exclusive(v_snd_3442_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3455_ = v_snd_3442_;
v_isShared_3456_ = v_isSharedCheck_3484_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_constOrder_3453_);
lean_inc(v_constMap_3452_);
lean_inc(v_recursorRuleMap_3451_);
lean_inc(v_exprMap_3450_);
lean_inc(v_levelMap_3449_);
lean_inc(v_nameMap_3448_);
lean_inc(v_stream_3447_);
lean_dec(v_snd_3442_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3484_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
uint8_t v___x_3457_; 
v___x_3457_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3452_, v_val_3412_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3461_; 
lean_inc(v_val_3412_);
v___x_3458_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3458_, 0, v_val_3412_);
lean_ctor_set(v___x_3458_, 1, v_fst_3426_);
lean_ctor_set(v___x_3458_, 2, v_val_3429_);
v___x_3459_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_3459_, 0, v___x_3458_);
lean_ctor_set(v___x_3459_, 1, v_a_3417_);
lean_ctor_set(v___x_3459_, 2, v_a_3418_);
lean_ctor_set(v___x_3459_, 3, v_fst_3435_);
lean_ctor_set(v___x_3459_, 4, v_fst_3443_);
lean_ctor_set(v___x_3459_, 5, v_a_3419_);
lean_ctor_set_uint8(v___x_3459_, sizeof(void*)*6, v_b_3394_);
lean_ctor_set_uint8(v___x_3459_, sizeof(void*)*6 + 1, v_b_3401_);
lean_ctor_set_uint8(v___x_3459_, sizeof(void*)*6 + 2, v_b_3408_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set_tag(v___x_3431_, 5);
lean_ctor_set(v___x_3431_, 0, v___x_3459_);
v___x_3461_ = v___x_3431_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v___x_3459_);
v___x_3461_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3462_ = lean_box(0);
lean_inc(v_val_3412_);
v___x_3463_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3452_, v_val_3412_, v___x_3461_);
v___x_3464_ = lean_array_push(v_constOrder_3453_, v_val_3412_);
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 6, v___x_3464_);
lean_ctor_set(v___x_3455_, 5, v___x_3463_);
v___x_3466_ = v___x_3455_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_stream_3447_);
lean_ctor_set(v_reuseFailAlloc_3473_, 1, v_nameMap_3448_);
lean_ctor_set(v_reuseFailAlloc_3473_, 2, v_levelMap_3449_);
lean_ctor_set(v_reuseFailAlloc_3473_, 3, v_exprMap_3450_);
lean_ctor_set(v_reuseFailAlloc_3473_, 4, v_recursorRuleMap_3451_);
lean_ctor_set(v_reuseFailAlloc_3473_, 5, v___x_3463_);
lean_ctor_set(v_reuseFailAlloc_3473_, 6, v___x_3464_);
v___x_3466_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
lean_object* v___x_3468_; 
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 1, v___x_3466_);
lean_ctor_set(v___x_3445_, 0, v___x_3462_);
v___x_3468_ = v___x_3445_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3462_);
lean_ctor_set(v_reuseFailAlloc_3472_, 1, v___x_3466_);
v___x_3468_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
lean_object* v___x_3470_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 0, v___x_3468_);
v___x_3470_ = v___x_3440_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v___x_3468_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
return v___x_3470_;
}
}
}
}
}
else
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
lean_del_object(v___x_3455_);
lean_dec_ref(v_constOrder_3453_);
lean_dec_ref(v_constMap_3452_);
lean_dec_ref(v_recursorRuleMap_3451_);
lean_dec_ref(v_exprMap_3450_);
lean_dec_ref(v_levelMap_3449_);
lean_dec_ref(v_nameMap_3448_);
lean_dec_ref(v_stream_3447_);
lean_del_object(v___x_3445_);
lean_dec(v_fst_3443_);
lean_dec(v_fst_3435_);
lean_dec(v_val_3429_);
lean_dec(v_fst_3426_);
lean_dec(v_a_3419_);
lean_dec(v_a_3418_);
lean_dec(v_a_3417_);
v___x_3475_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3476_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3412_, v___x_3457_);
v___x_3477_ = lean_string_append(v___x_3475_, v___x_3476_);
lean_dec_ref(v___x_3476_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set_tag(v___x_3431_, 18);
lean_ctor_set(v___x_3431_, 0, v___x_3477_);
v___x_3479_ = v___x_3431_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___x_3481_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set_tag(v___x_3440_, 1);
lean_ctor_set(v___x_3440_, 0, v___x_3479_);
v___x_3481_ = v___x_3440_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3494_; 
lean_dec(v_fst_3435_);
lean_del_object(v___x_3431_);
lean_dec(v_val_3429_);
lean_dec(v_fst_3426_);
lean_dec(v_a_3419_);
lean_dec(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec(v_val_3412_);
v_a_3487_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3489_ = v___x_3437_;
v_isShared_3490_ = v_isSharedCheck_3494_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_a_3487_);
lean_dec(v___x_3437_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3494_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___x_3492_; 
if (v_isShared_3490_ == 0)
{
v___x_3492_ = v___x_3489_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_a_3487_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
return v___x_3492_;
}
}
}
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3502_; 
lean_del_object(v___x_3431_);
lean_dec(v_val_3429_);
lean_dec(v_fst_3426_);
lean_dec(v_a_3419_);
lean_dec(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec(v_val_3412_);
lean_dec_ref(v_elems_3382_);
v_a_3495_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3497_ = v___x_3433_;
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_a_3495_);
lean_dec(v___x_3433_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3500_; 
if (v_isShared_3498_ == 0)
{
v___x_3500_ = v___x_3497_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_a_3495_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
}
}
}
else
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3508_; 
lean_dec(v___x_3428_);
lean_dec(v_fst_3426_);
lean_dec(v_snd_3425_);
lean_dec(v_a_3419_);
lean_dec(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec(v_val_3412_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
v___x_3504_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3505_ = l_Nat_reprFast(v_a_3416_);
v___x_3506_ = lean_string_append(v___x_3504_, v___x_3505_);
lean_dec_ref(v___x_3505_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set_tag(v___x_3414_, 18);
lean_ctor_set(v___x_3414_, 0, v___x_3506_);
v___x_3508_ = v___x_3414_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3510_; 
if (v_isShared_3424_ == 0)
{
lean_ctor_set_tag(v___x_3423_, 1);
lean_ctor_set(v___x_3423_, 0, v___x_3508_);
v___x_3510_ = v___x_3423_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3508_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec(v_a_3419_);
lean_dec(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec(v_a_3416_);
lean_del_object(v___x_3414_);
lean_dec(v_val_3412_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
v_a_3514_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3420_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3420_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
else
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3527_; 
lean_dec(v___x_3411_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec_ref(v_a_3301_);
v___x_3523_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3524_ = l_Nat_reprFast(v_a_3410_);
v___x_3525_ = lean_string_append(v___x_3523_, v___x_3524_);
lean_dec_ref(v___x_3524_);
if (v_isShared_3407_ == 0)
{
lean_ctor_set_tag(v___x_3406_, 18);
lean_ctor_set(v___x_3406_, 0, v___x_3525_);
v___x_3527_ = v___x_3406_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3525_);
v___x_3527_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
lean_object* v___x_3529_; 
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 0, v___x_3527_);
v___x_3529_ = v___x_3399_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v___x_3527_);
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
else
{
lean_del_object(v___x_3406_);
lean_dec(v_val_3404_);
lean_del_object(v___x_3399_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3333_;
}
}
}
else
{
lean_dec(v___x_3403_);
lean_del_object(v___x_3399_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3333_;
}
}
else
{
lean_del_object(v___x_3399_);
lean_dec(v_val_3397_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3330_;
}
}
}
else
{
lean_dec(v___x_3396_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3330_;
}
}
else
{
lean_dec(v_val_3393_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3327_;
}
}
else
{
lean_dec(v___x_3392_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3327_;
}
}
}
else
{
lean_dec(v_exponent_3388_);
lean_dec(v_mantissa_3387_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3324_;
}
}
else
{
lean_dec(v_val_3385_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3324_;
}
}
else
{
lean_dec(v___x_3384_);
lean_dec_ref(v_elems_3382_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3324_;
}
}
else
{
lean_dec(v_val_3381_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3321_;
}
}
else
{
lean_dec(v___x_3380_);
lean_dec_ref(v_elems_3378_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3321_;
}
}
else
{
lean_dec(v_val_3377_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3318_;
}
}
else
{
lean_dec(v___x_3376_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3318_;
}
}
}
else
{
lean_dec(v_exponent_3372_);
lean_dec(v_mantissa_3371_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3315_;
}
}
else
{
lean_dec(v_val_3369_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3315_;
}
}
else
{
lean_dec(v___x_3368_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3315_;
}
}
}
else
{
lean_dec(v_exponent_3364_);
lean_dec(v_mantissa_3363_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3312_;
}
}
else
{
lean_dec(v_val_3361_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3312_;
}
}
else
{
lean_dec(v___x_3360_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3312_;
}
}
}
else
{
lean_dec(v_exponent_3356_);
lean_dec(v_mantissa_3355_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3309_;
}
}
else
{
lean_dec(v_val_3353_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3309_;
}
}
else
{
lean_dec(v___x_3352_);
lean_dec_ref(v_elems_3350_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3309_;
}
}
else
{
lean_dec(v_val_3349_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3306_;
}
}
else
{
lean_dec(v___x_3348_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3306_;
}
}
}
else
{
lean_dec(v_exponent_3342_);
lean_dec(v_mantissa_3341_);
lean_dec_ref(v_a_3301_);
goto v___jp_3303_;
}
}
else
{
lean_dec(v_val_3339_);
lean_dec_ref(v_a_3301_);
goto v___jp_3303_;
}
}
else
{
lean_dec(v___x_3338_);
lean_dec_ref(v_a_3301_);
goto v___jp_3303_;
}
}
else
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
lean_dec_ref(v_a_3301_);
v___x_3534_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9));
v___x_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3534_);
return v___x_3535_;
}
v___jp_3303_:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3304_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3304_);
return v___x_3305_;
}
v___jp_3306_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3308_, 0, v___x_3307_);
return v___x_3308_;
}
v___jp_3309_:
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3310_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
return v___x_3311_;
}
v___jp_3312_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3313_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
return v___x_3314_;
}
v___jp_3315_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
return v___x_3317_;
}
v___jp_3318_:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3319_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
return v___x_3320_;
}
v___jp_3321_:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3322_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
return v___x_3323_;
}
v___jp_3324_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3325_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
return v___x_3326_;
}
v___jp_3327_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3328_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3328_);
return v___x_3329_;
}
v___jp_3330_:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
return v___x_3332_;
}
v___jp_3333_:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3334_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
return v___x_3335_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___boxed(lean_object* v_json_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(v_json_3536_, v_a_3537_);
lean_dec(v_json_3536_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(lean_object* v_json_3546_, lean_object* v_a_3547_){
_start:
{
if (lean_obj_tag(v_json_3546_) == 5)
{
lean_object* v_kvPairs_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v_kvPairs_3573_ = lean_ctor_get(v_json_3546_, 0);
v___x_3574_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3575_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3574_);
if (lean_obj_tag(v___x_3575_) == 1)
{
lean_object* v_val_3576_; 
v_val_3576_ = lean_ctor_get(v___x_3575_, 0);
lean_inc(v_val_3576_);
lean_dec_ref_known(v___x_3575_, 1);
if (lean_obj_tag(v_val_3576_) == 2)
{
lean_object* v_n_3577_; lean_object* v_mantissa_3578_; lean_object* v_exponent_3579_; lean_object* v_natZero_3580_; lean_object* v_intZero_3581_; uint8_t v_isNeg_3582_; 
v_n_3577_ = lean_ctor_get(v_val_3576_, 0);
lean_inc_ref(v_n_3577_);
lean_dec_ref_known(v_val_3576_, 1);
v_mantissa_3578_ = lean_ctor_get(v_n_3577_, 0);
lean_inc(v_mantissa_3578_);
v_exponent_3579_ = lean_ctor_get(v_n_3577_, 1);
lean_inc(v_exponent_3579_);
lean_dec_ref(v_n_3577_);
v_natZero_3580_ = lean_unsigned_to_nat(0u);
v_intZero_3581_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3582_ = lean_int_dec_lt(v_mantissa_3578_, v_intZero_3581_);
if (v_isNeg_3582_ == 0)
{
uint8_t v___x_3583_; 
v___x_3583_ = lean_nat_dec_eq(v_exponent_3579_, v_natZero_3580_);
lean_dec(v_exponent_3579_);
if (v___x_3583_ == 0)
{
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3549_;
}
else
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3585_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3584_);
if (lean_obj_tag(v___x_3585_) == 1)
{
lean_object* v_val_3586_; 
v_val_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_val_3586_);
lean_dec_ref_known(v___x_3585_, 1);
if (lean_obj_tag(v_val_3586_) == 4)
{
lean_object* v_elems_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v_elems_3587_ = lean_ctor_get(v_val_3586_, 0);
lean_inc_ref(v_elems_3587_);
lean_dec_ref_known(v_val_3586_, 1);
v___x_3588_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3589_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3588_);
if (lean_obj_tag(v___x_3589_) == 1)
{
lean_object* v_val_3590_; 
v_val_3590_ = lean_ctor_get(v___x_3589_, 0);
lean_inc(v_val_3590_);
lean_dec_ref_known(v___x_3589_, 1);
if (lean_obj_tag(v_val_3590_) == 2)
{
lean_object* v_n_3591_; lean_object* v_mantissa_3592_; lean_object* v_exponent_3593_; uint8_t v_isNeg_3594_; 
v_n_3591_ = lean_ctor_get(v_val_3590_, 0);
lean_inc_ref(v_n_3591_);
lean_dec_ref_known(v_val_3590_, 1);
v_mantissa_3592_ = lean_ctor_get(v_n_3591_, 0);
lean_inc(v_mantissa_3592_);
v_exponent_3593_ = lean_ctor_get(v_n_3591_, 1);
lean_inc(v_exponent_3593_);
lean_dec_ref(v_n_3591_);
v_isNeg_3594_ = lean_int_dec_lt(v_mantissa_3592_, v_intZero_3581_);
if (v_isNeg_3594_ == 0)
{
uint8_t v___x_3595_; 
v___x_3595_ = lean_nat_dec_eq(v_exponent_3593_, v_natZero_3580_);
lean_dec(v_exponent_3593_);
if (v___x_3595_ == 0)
{
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3555_;
}
else
{
lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3596_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2));
v___x_3597_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3596_);
if (lean_obj_tag(v___x_3597_) == 1)
{
lean_object* v_val_3598_; 
v_val_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_val_3598_);
lean_dec_ref_known(v___x_3597_, 1);
if (lean_obj_tag(v_val_3598_) == 2)
{
lean_object* v_n_3599_; lean_object* v_mantissa_3600_; lean_object* v_exponent_3601_; uint8_t v_isNeg_3602_; 
v_n_3599_ = lean_ctor_get(v_val_3598_, 0);
lean_inc_ref(v_n_3599_);
lean_dec_ref_known(v_val_3598_, 1);
v_mantissa_3600_ = lean_ctor_get(v_n_3599_, 0);
lean_inc(v_mantissa_3600_);
v_exponent_3601_ = lean_ctor_get(v_n_3599_, 1);
lean_inc(v_exponent_3601_);
lean_dec_ref(v_n_3599_);
v_isNeg_3602_ = lean_int_dec_lt(v_mantissa_3600_, v_intZero_3581_);
if (v_isNeg_3602_ == 0)
{
uint8_t v___x_3603_; 
v___x_3603_ = lean_nat_dec_eq(v_exponent_3601_, v_natZero_3580_);
lean_dec(v_exponent_3601_);
if (v___x_3603_ == 0)
{
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3558_;
}
else
{
lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3604_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3));
v___x_3605_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3604_);
if (lean_obj_tag(v___x_3605_) == 1)
{
lean_object* v_val_3606_; 
v_val_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_val_3606_);
lean_dec_ref_known(v___x_3605_, 1);
if (lean_obj_tag(v_val_3606_) == 2)
{
lean_object* v_n_3607_; lean_object* v_mantissa_3608_; lean_object* v_exponent_3609_; uint8_t v_isNeg_3610_; 
v_n_3607_ = lean_ctor_get(v_val_3606_, 0);
lean_inc_ref(v_n_3607_);
lean_dec_ref_known(v_val_3606_, 1);
v_mantissa_3608_ = lean_ctor_get(v_n_3607_, 0);
lean_inc(v_mantissa_3608_);
v_exponent_3609_ = lean_ctor_get(v_n_3607_, 1);
lean_inc(v_exponent_3609_);
lean_dec_ref(v_n_3607_);
v_isNeg_3610_ = lean_int_dec_lt(v_mantissa_3608_, v_intZero_3581_);
if (v_isNeg_3610_ == 0)
{
uint8_t v___x_3611_; 
v___x_3611_ = lean_nat_dec_eq(v_exponent_3609_, v_natZero_3580_);
lean_dec(v_exponent_3609_);
if (v___x_3611_ == 0)
{
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3561_;
}
else
{
lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3612_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2));
v___x_3613_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3612_);
if (lean_obj_tag(v___x_3613_) == 1)
{
lean_object* v_val_3614_; 
v_val_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_val_3614_);
lean_dec_ref_known(v___x_3613_, 1);
if (lean_obj_tag(v_val_3614_) == 2)
{
lean_object* v_n_3615_; lean_object* v_mantissa_3616_; lean_object* v_exponent_3617_; uint8_t v_isNeg_3618_; 
v_n_3615_ = lean_ctor_get(v_val_3614_, 0);
lean_inc_ref(v_n_3615_);
lean_dec_ref_known(v_val_3614_, 1);
v_mantissa_3616_ = lean_ctor_get(v_n_3615_, 0);
lean_inc(v_mantissa_3616_);
v_exponent_3617_ = lean_ctor_get(v_n_3615_, 1);
lean_inc(v_exponent_3617_);
lean_dec_ref(v_n_3615_);
v_isNeg_3618_ = lean_int_dec_lt(v_mantissa_3616_, v_intZero_3581_);
if (v_isNeg_3618_ == 0)
{
uint8_t v___x_3619_; 
v___x_3619_ = lean_nat_dec_eq(v_exponent_3617_, v_natZero_3580_);
lean_dec(v_exponent_3617_);
if (v___x_3619_ == 0)
{
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3564_;
}
else
{
lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3620_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4));
v___x_3621_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3620_);
if (lean_obj_tag(v___x_3621_) == 1)
{
lean_object* v_val_3622_; 
v_val_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_val_3622_);
lean_dec_ref_known(v___x_3621_, 1);
if (lean_obj_tag(v_val_3622_) == 2)
{
lean_object* v_n_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3749_; 
v_n_3623_ = lean_ctor_get(v_val_3622_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_val_3622_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3625_ = v_val_3622_;
v_isShared_3626_ = v_isSharedCheck_3749_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_n_3623_);
lean_dec(v_val_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3749_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v_mantissa_3627_; lean_object* v_exponent_3628_; uint8_t v_isNeg_3629_; 
v_mantissa_3627_ = lean_ctor_get(v_n_3623_, 0);
lean_inc(v_mantissa_3627_);
v_exponent_3628_ = lean_ctor_get(v_n_3623_, 1);
lean_inc(v_exponent_3628_);
lean_dec_ref(v_n_3623_);
v_isNeg_3629_ = lean_int_dec_lt(v_mantissa_3627_, v_intZero_3581_);
if (v_isNeg_3629_ == 0)
{
uint8_t v___x_3630_; 
v___x_3630_ = lean_nat_dec_eq(v_exponent_3628_, v_natZero_3580_);
lean_dec(v_exponent_3628_);
if (v___x_3630_ == 0)
{
lean_dec(v_mantissa_3627_);
lean_del_object(v___x_3625_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3567_;
}
else
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3632_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3573_, v___x_3631_);
if (lean_obj_tag(v___x_3632_) == 1)
{
lean_object* v_val_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3748_; 
v_val_3633_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3635_ = v___x_3632_;
v_isShared_3636_ = v_isSharedCheck_3748_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_val_3633_);
lean_dec(v___x_3632_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3748_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
if (lean_obj_tag(v_val_3633_) == 1)
{
uint8_t v_b_3637_; lean_object* v_nameMap_3638_; lean_object* v_a_3639_; lean_object* v___x_3640_; 
v_b_3637_ = lean_ctor_get_uint8(v_val_3633_, 0);
lean_dec_ref_known(v_val_3633_, 0);
v_nameMap_3638_ = lean_ctor_get(v_a_3547_, 1);
v_a_3639_ = lean_nat_abs(v_mantissa_3578_);
lean_dec(v_mantissa_3578_);
v___x_3640_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3638_, v_a_3639_);
if (lean_obj_tag(v___x_3640_) == 1)
{
lean_object* v_val_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3738_; 
lean_dec(v_a_3639_);
lean_del_object(v___x_3635_);
lean_del_object(v___x_3625_);
v_val_3641_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3643_ = v___x_3640_;
v_isShared_3644_ = v_isSharedCheck_3738_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_val_3641_);
lean_dec(v___x_3640_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3738_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v_a_3645_; lean_object* v_a_3646_; lean_object* v_a_3647_; lean_object* v_a_3648_; lean_object* v_a_3649_; lean_object* v___x_3650_; 
v_a_3645_ = lean_nat_abs(v_mantissa_3592_);
lean_dec(v_mantissa_3592_);
v_a_3646_ = lean_nat_abs(v_mantissa_3600_);
lean_dec(v_mantissa_3600_);
v_a_3647_ = lean_nat_abs(v_mantissa_3608_);
lean_dec(v_mantissa_3608_);
v_a_3648_ = lean_nat_abs(v_mantissa_3616_);
lean_dec(v_mantissa_3616_);
v_a_3649_ = lean_nat_abs(v_mantissa_3627_);
lean_dec(v_mantissa_3627_);
v___x_3650_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3587_, v_a_3547_);
if (lean_obj_tag(v___x_3650_) == 0)
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3729_; 
v_a_3651_ = lean_ctor_get(v___x_3650_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3650_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3653_ = v___x_3650_;
v_isShared_3654_ = v_isSharedCheck_3729_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3650_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3729_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v_snd_3655_; lean_object* v_fst_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3728_; 
v_snd_3655_ = lean_ctor_get(v_a_3651_, 1);
v_fst_3656_ = lean_ctor_get(v_a_3651_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_a_3651_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3658_ = v_a_3651_;
v_isShared_3659_ = v_isSharedCheck_3728_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_snd_3655_);
lean_inc(v_fst_3656_);
lean_dec(v_a_3651_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3728_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v_stream_3660_; lean_object* v_nameMap_3661_; lean_object* v_levelMap_3662_; lean_object* v_exprMap_3663_; lean_object* v_recursorRuleMap_3664_; lean_object* v_constMap_3665_; lean_object* v_constOrder_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3727_; 
v_stream_3660_ = lean_ctor_get(v_snd_3655_, 0);
v_nameMap_3661_ = lean_ctor_get(v_snd_3655_, 1);
v_levelMap_3662_ = lean_ctor_get(v_snd_3655_, 2);
v_exprMap_3663_ = lean_ctor_get(v_snd_3655_, 3);
v_recursorRuleMap_3664_ = lean_ctor_get(v_snd_3655_, 4);
v_constMap_3665_ = lean_ctor_get(v_snd_3655_, 5);
v_constOrder_3666_ = lean_ctor_get(v_snd_3655_, 6);
v_isSharedCheck_3727_ = !lean_is_exclusive(v_snd_3655_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3668_ = v_snd_3655_;
v_isShared_3669_ = v_isSharedCheck_3727_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_constOrder_3666_);
lean_inc(v_constMap_3665_);
lean_inc(v_recursorRuleMap_3664_);
lean_inc(v_exprMap_3663_);
lean_inc(v_levelMap_3662_);
lean_inc(v_nameMap_3661_);
lean_inc(v_stream_3660_);
lean_dec(v_snd_3655_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3727_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3670_; 
v___x_3670_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3663_, v_a_3645_);
if (lean_obj_tag(v___x_3670_) == 1)
{
lean_object* v_val_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_a_3645_);
lean_del_object(v___x_3643_);
v_val_3671_ = lean_ctor_get(v___x_3670_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3673_ = v___x_3670_;
v_isShared_3674_ = v_isSharedCheck_3717_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_val_3671_);
lean_dec(v___x_3670_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3717_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3675_; 
v___x_3675_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3661_, v_a_3646_);
if (lean_obj_tag(v___x_3675_) == 1)
{
lean_object* v_val_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3707_; 
lean_del_object(v___x_3673_);
lean_dec(v_a_3646_);
v_val_3676_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3678_ = v___x_3675_;
v_isShared_3679_ = v_isSharedCheck_3707_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_val_3676_);
lean_dec(v___x_3675_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3707_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
uint8_t v___x_3680_; 
v___x_3680_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3665_, v_val_3641_);
if (v___x_3680_ == 0)
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3684_; 
lean_inc(v_val_3641_);
v___x_3681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3681_, 0, v_val_3641_);
lean_ctor_set(v___x_3681_, 1, v_fst_3656_);
lean_ctor_set(v___x_3681_, 2, v_val_3671_);
v___x_3682_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_3682_, 0, v___x_3681_);
lean_ctor_set(v___x_3682_, 1, v_val_3676_);
lean_ctor_set(v___x_3682_, 2, v_a_3647_);
lean_ctor_set(v___x_3682_, 3, v_a_3648_);
lean_ctor_set(v___x_3682_, 4, v_a_3649_);
lean_ctor_set_uint8(v___x_3682_, sizeof(void*)*5, v_b_3637_);
if (v_isShared_3679_ == 0)
{
lean_ctor_set_tag(v___x_3678_, 6);
lean_ctor_set(v___x_3678_, 0, v___x_3682_);
v___x_3684_ = v___x_3678_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v___x_3682_);
v___x_3684_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3689_; 
v___x_3685_ = lean_box(0);
lean_inc(v_val_3641_);
v___x_3686_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3665_, v_val_3641_, v___x_3684_);
v___x_3687_ = lean_array_push(v_constOrder_3666_, v_val_3641_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 6, v___x_3687_);
lean_ctor_set(v___x_3668_, 5, v___x_3686_);
v___x_3689_ = v___x_3668_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_stream_3660_);
lean_ctor_set(v_reuseFailAlloc_3696_, 1, v_nameMap_3661_);
lean_ctor_set(v_reuseFailAlloc_3696_, 2, v_levelMap_3662_);
lean_ctor_set(v_reuseFailAlloc_3696_, 3, v_exprMap_3663_);
lean_ctor_set(v_reuseFailAlloc_3696_, 4, v_recursorRuleMap_3664_);
lean_ctor_set(v_reuseFailAlloc_3696_, 5, v___x_3686_);
lean_ctor_set(v_reuseFailAlloc_3696_, 6, v___x_3687_);
v___x_3689_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
lean_object* v___x_3691_; 
if (v_isShared_3659_ == 0)
{
lean_ctor_set(v___x_3658_, 1, v___x_3689_);
lean_ctor_set(v___x_3658_, 0, v___x_3685_);
v___x_3691_ = v___x_3658_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v___x_3685_);
lean_ctor_set(v_reuseFailAlloc_3695_, 1, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
lean_object* v___x_3693_; 
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 0, v___x_3691_);
v___x_3693_ = v___x_3653_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3691_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
}
else
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3702_; 
lean_dec(v_val_3676_);
lean_dec(v_val_3671_);
lean_del_object(v___x_3668_);
lean_dec_ref(v_constOrder_3666_);
lean_dec_ref(v_constMap_3665_);
lean_dec_ref(v_recursorRuleMap_3664_);
lean_dec_ref(v_exprMap_3663_);
lean_dec_ref(v_levelMap_3662_);
lean_dec_ref(v_nameMap_3661_);
lean_dec_ref(v_stream_3660_);
lean_del_object(v___x_3658_);
lean_dec(v_fst_3656_);
lean_dec(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec(v_a_3647_);
v___x_3698_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3699_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3641_, v___x_3680_);
v___x_3700_ = lean_string_append(v___x_3698_, v___x_3699_);
lean_dec_ref(v___x_3699_);
if (v_isShared_3679_ == 0)
{
lean_ctor_set_tag(v___x_3678_, 18);
lean_ctor_set(v___x_3678_, 0, v___x_3700_);
v___x_3702_ = v___x_3678_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v___x_3700_);
v___x_3702_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
lean_object* v___x_3704_; 
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 0, v___x_3702_);
v___x_3704_ = v___x_3653_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v___x_3702_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
}
else
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3712_; 
lean_dec(v___x_3675_);
lean_dec(v_val_3671_);
lean_del_object(v___x_3668_);
lean_dec_ref(v_constOrder_3666_);
lean_dec_ref(v_constMap_3665_);
lean_dec_ref(v_recursorRuleMap_3664_);
lean_dec_ref(v_exprMap_3663_);
lean_dec_ref(v_levelMap_3662_);
lean_dec_ref(v_nameMap_3661_);
lean_dec_ref(v_stream_3660_);
lean_del_object(v___x_3658_);
lean_dec(v_fst_3656_);
lean_dec(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec(v_a_3647_);
lean_dec(v_val_3641_);
v___x_3708_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3709_ = l_Nat_reprFast(v_a_3646_);
v___x_3710_ = lean_string_append(v___x_3708_, v___x_3709_);
lean_dec_ref(v___x_3709_);
if (v_isShared_3674_ == 0)
{
lean_ctor_set_tag(v___x_3673_, 18);
lean_ctor_set(v___x_3673_, 0, v___x_3710_);
v___x_3712_ = v___x_3673_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3710_);
v___x_3712_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3714_; 
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 0, v___x_3712_);
v___x_3714_ = v___x_3653_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v___x_3712_);
v___x_3714_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
return v___x_3714_;
}
}
}
}
}
else
{
lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3722_; 
lean_dec(v___x_3670_);
lean_del_object(v___x_3668_);
lean_dec_ref(v_constOrder_3666_);
lean_dec_ref(v_constMap_3665_);
lean_dec_ref(v_recursorRuleMap_3664_);
lean_dec_ref(v_exprMap_3663_);
lean_dec_ref(v_levelMap_3662_);
lean_dec_ref(v_nameMap_3661_);
lean_dec_ref(v_stream_3660_);
lean_del_object(v___x_3658_);
lean_dec(v_fst_3656_);
lean_dec(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec(v_a_3647_);
lean_dec(v_a_3646_);
lean_dec(v_val_3641_);
v___x_3718_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3719_ = l_Nat_reprFast(v_a_3645_);
v___x_3720_ = lean_string_append(v___x_3718_, v___x_3719_);
lean_dec_ref(v___x_3719_);
if (v_isShared_3644_ == 0)
{
lean_ctor_set_tag(v___x_3643_, 18);
lean_ctor_set(v___x_3643_, 0, v___x_3720_);
v___x_3722_ = v___x_3643_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v___x_3720_);
v___x_3722_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
lean_object* v___x_3724_; 
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 0, v___x_3722_);
v___x_3724_ = v___x_3653_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3722_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
lean_dec(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec(v_a_3647_);
lean_dec(v_a_3646_);
lean_dec(v_a_3645_);
lean_del_object(v___x_3643_);
lean_dec(v_val_3641_);
v_a_3730_ = lean_ctor_get(v___x_3650_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3650_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3650_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3650_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
else
{
lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3743_; 
lean_dec(v___x_3640_);
lean_dec(v_mantissa_3627_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec_ref(v_a_3547_);
v___x_3739_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3740_ = l_Nat_reprFast(v_a_3639_);
v___x_3741_ = lean_string_append(v___x_3739_, v___x_3740_);
lean_dec_ref(v___x_3740_);
if (v_isShared_3636_ == 0)
{
lean_ctor_set_tag(v___x_3635_, 18);
lean_ctor_set(v___x_3635_, 0, v___x_3741_);
v___x_3743_ = v___x_3635_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v___x_3741_);
v___x_3743_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
lean_object* v___x_3745_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set_tag(v___x_3625_, 1);
lean_ctor_set(v___x_3625_, 0, v___x_3743_);
v___x_3745_ = v___x_3625_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v___x_3743_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
}
else
{
lean_del_object(v___x_3635_);
lean_dec(v_val_3633_);
lean_dec(v_mantissa_3627_);
lean_del_object(v___x_3625_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3570_;
}
}
}
else
{
lean_dec(v___x_3632_);
lean_dec(v_mantissa_3627_);
lean_del_object(v___x_3625_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3570_;
}
}
}
else
{
lean_dec(v_exponent_3628_);
lean_dec(v_mantissa_3627_);
lean_del_object(v___x_3625_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3567_;
}
}
}
else
{
lean_dec(v_val_3622_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3567_;
}
}
else
{
lean_dec(v___x_3621_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3567_;
}
}
}
else
{
lean_dec(v_exponent_3617_);
lean_dec(v_mantissa_3616_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3564_;
}
}
else
{
lean_dec(v_val_3614_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3564_;
}
}
else
{
lean_dec(v___x_3613_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3564_;
}
}
}
else
{
lean_dec(v_exponent_3609_);
lean_dec(v_mantissa_3608_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3561_;
}
}
else
{
lean_dec(v_val_3606_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3561_;
}
}
else
{
lean_dec(v___x_3605_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3561_;
}
}
}
else
{
lean_dec(v_exponent_3601_);
lean_dec(v_mantissa_3600_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3558_;
}
}
else
{
lean_dec(v_val_3598_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3558_;
}
}
else
{
lean_dec(v___x_3597_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3558_;
}
}
}
else
{
lean_dec(v_exponent_3593_);
lean_dec(v_mantissa_3592_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3555_;
}
}
else
{
lean_dec(v_val_3590_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3555_;
}
}
else
{
lean_dec(v___x_3589_);
lean_dec_ref(v_elems_3587_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3555_;
}
}
else
{
lean_dec(v_val_3586_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3552_;
}
}
else
{
lean_dec(v___x_3585_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3552_;
}
}
}
else
{
lean_dec(v_exponent_3579_);
lean_dec(v_mantissa_3578_);
lean_dec_ref(v_a_3547_);
goto v___jp_3549_;
}
}
else
{
lean_dec(v_val_3576_);
lean_dec_ref(v_a_3547_);
goto v___jp_3549_;
}
}
else
{
lean_dec(v___x_3575_);
lean_dec_ref(v_a_3547_);
goto v___jp_3549_;
}
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
lean_dec_ref(v_a_3547_);
v___x_3750_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
return v___x_3751_;
}
v___jp_3549_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
return v___x_3551_;
}
v___jp_3552_:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3553_);
return v___x_3554_;
}
v___jp_3555_:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3556_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3556_);
return v___x_3557_;
}
v___jp_3558_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3559_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
return v___x_3560_;
}
v___jp_3561_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3562_);
return v___x_3563_;
}
v___jp_3564_:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3565_);
return v___x_3566_;
}
v___jp_3567_:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3568_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3568_);
return v___x_3569_;
}
v___jp_3570_:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3571_);
return v___x_3572_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___boxed(lean_object* v_json_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_){
_start:
{
lean_object* v_res_3755_; 
v_res_3755_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(v_json_3752_, v_a_3753_);
lean_dec(v_json_3752_);
return v_res_3755_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(lean_object* v_x_3761_, lean_object* v_x_3762_, lean_object* v___y_3763_){
_start:
{
if (lean_obj_tag(v_x_3761_) == 0)
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3774_ = l_List_reverse___redArg(v_x_3762_);
v___x_3775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3774_);
lean_ctor_set(v___x_3775_, 1, v___y_3763_);
v___x_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3775_);
return v___x_3776_;
}
else
{
lean_object* v_head_3777_; 
v_head_3777_ = lean_ctor_get(v_x_3761_, 0);
lean_inc(v_head_3777_);
if (lean_obj_tag(v_head_3777_) == 5)
{
lean_object* v_tail_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3853_; 
v_tail_3778_ = lean_ctor_get(v_x_3761_, 1);
v_isSharedCheck_3853_ = !lean_is_exclusive(v_x_3761_);
if (v_isSharedCheck_3853_ == 0)
{
lean_object* v_unused_3854_; 
v_unused_3854_ = lean_ctor_get(v_x_3761_, 0);
lean_dec(v_unused_3854_);
v___x_3780_ = v_x_3761_;
v_isShared_3781_ = v_isSharedCheck_3853_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_tail_3778_);
lean_dec(v_x_3761_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3853_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v_kvPairs_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v_kvPairs_3782_ = lean_ctor_get(v_head_3777_, 0);
lean_inc(v_kvPairs_3782_);
lean_dec_ref_known(v_head_3777_, 1);
v___x_3783_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3));
v___x_3784_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3782_, v___x_3783_);
if (lean_obj_tag(v___x_3784_) == 1)
{
lean_object* v_val_3785_; 
v_val_3785_ = lean_ctor_get(v___x_3784_, 0);
lean_inc(v_val_3785_);
lean_dec_ref_known(v___x_3784_, 1);
if (lean_obj_tag(v_val_3785_) == 2)
{
lean_object* v_n_3786_; lean_object* v_mantissa_3787_; lean_object* v_exponent_3788_; lean_object* v_natZero_3789_; lean_object* v_intZero_3790_; uint8_t v_isNeg_3791_; 
v_n_3786_ = lean_ctor_get(v_val_3785_, 0);
lean_inc_ref(v_n_3786_);
lean_dec_ref_known(v_val_3785_, 1);
v_mantissa_3787_ = lean_ctor_get(v_n_3786_, 0);
lean_inc(v_mantissa_3787_);
v_exponent_3788_ = lean_ctor_get(v_n_3786_, 1);
lean_inc(v_exponent_3788_);
lean_dec_ref(v_n_3786_);
v_natZero_3789_ = lean_unsigned_to_nat(0u);
v_intZero_3790_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3791_ = lean_int_dec_lt(v_mantissa_3787_, v_intZero_3790_);
if (v_isNeg_3791_ == 0)
{
uint8_t v___x_3792_; 
v___x_3792_ = lean_nat_dec_eq(v_exponent_3788_, v_natZero_3789_);
lean_dec(v_exponent_3788_);
if (v___x_3792_ == 0)
{
lean_dec(v_mantissa_3787_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3765_;
}
else
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3793_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2));
v___x_3794_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3782_, v___x_3793_);
if (lean_obj_tag(v___x_3794_) == 1)
{
lean_object* v_val_3795_; 
v_val_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_val_3795_);
lean_dec_ref_known(v___x_3794_, 1);
if (lean_obj_tag(v_val_3795_) == 2)
{
lean_object* v_n_3796_; lean_object* v_mantissa_3797_; lean_object* v_exponent_3798_; uint8_t v_isNeg_3799_; 
v_n_3796_ = lean_ctor_get(v_val_3795_, 0);
lean_inc_ref(v_n_3796_);
lean_dec_ref_known(v_val_3795_, 1);
v_mantissa_3797_ = lean_ctor_get(v_n_3796_, 0);
lean_inc(v_mantissa_3797_);
v_exponent_3798_ = lean_ctor_get(v_n_3796_, 1);
lean_inc(v_exponent_3798_);
lean_dec_ref(v_n_3796_);
v_isNeg_3799_ = lean_int_dec_lt(v_mantissa_3797_, v_intZero_3790_);
if (v_isNeg_3799_ == 0)
{
uint8_t v___x_3800_; 
v___x_3800_ = lean_nat_dec_eq(v_exponent_3798_, v_natZero_3789_);
lean_dec(v_exponent_3798_);
if (v___x_3800_ == 0)
{
lean_dec(v_mantissa_3797_);
lean_dec(v_mantissa_3787_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3768_;
}
else
{
lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3801_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3));
v___x_3802_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3782_, v___x_3801_);
lean_dec(v_kvPairs_3782_);
if (lean_obj_tag(v___x_3802_) == 1)
{
lean_object* v_val_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3852_; 
v_val_3803_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3805_ = v___x_3802_;
v_isShared_3806_ = v_isSharedCheck_3852_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_val_3803_);
lean_dec(v___x_3802_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3852_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
if (lean_obj_tag(v_val_3803_) == 2)
{
lean_object* v_n_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3851_; 
v_n_3807_ = lean_ctor_get(v_val_3803_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v_val_3803_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3809_ = v_val_3803_;
v_isShared_3810_ = v_isSharedCheck_3851_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_n_3807_);
lean_dec(v_val_3803_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3851_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v_mantissa_3811_; lean_object* v_exponent_3812_; uint8_t v_isNeg_3813_; 
v_mantissa_3811_ = lean_ctor_get(v_n_3807_, 0);
lean_inc(v_mantissa_3811_);
v_exponent_3812_ = lean_ctor_get(v_n_3807_, 1);
lean_inc(v_exponent_3812_);
lean_dec_ref(v_n_3807_);
v_isNeg_3813_ = lean_int_dec_lt(v_mantissa_3811_, v_intZero_3790_);
if (v_isNeg_3813_ == 0)
{
uint8_t v___x_3814_; 
v___x_3814_ = lean_nat_dec_eq(v_exponent_3812_, v_natZero_3789_);
lean_dec(v_exponent_3812_);
if (v___x_3814_ == 0)
{
lean_dec(v_mantissa_3811_);
lean_del_object(v___x_3809_);
lean_del_object(v___x_3805_);
lean_dec(v_mantissa_3797_);
lean_dec(v_mantissa_3787_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3771_;
}
else
{
lean_object* v_nameMap_3815_; lean_object* v_exprMap_3816_; lean_object* v_a_3817_; lean_object* v___x_3818_; 
v_nameMap_3815_ = lean_ctor_get(v___y_3763_, 1);
v_exprMap_3816_ = lean_ctor_get(v___y_3763_, 3);
v_a_3817_ = lean_nat_abs(v_mantissa_3787_);
lean_dec(v_mantissa_3787_);
v___x_3818_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3815_, v_a_3817_);
if (lean_obj_tag(v___x_3818_) == 1)
{
lean_object* v_val_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3841_; 
lean_dec(v_a_3817_);
lean_del_object(v___x_3805_);
v_val_3819_ = lean_ctor_get(v___x_3818_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3818_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3821_ = v___x_3818_;
v_isShared_3822_ = v_isSharedCheck_3841_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_val_3819_);
lean_dec(v___x_3818_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3841_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v_a_3823_; lean_object* v___x_3824_; 
v_a_3823_ = lean_nat_abs(v_mantissa_3811_);
lean_dec(v_mantissa_3811_);
v___x_3824_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3816_, v_a_3823_);
if (lean_obj_tag(v___x_3824_) == 1)
{
lean_object* v_val_3825_; lean_object* v_a_3826_; lean_object* v___x_3827_; lean_object* v___x_3829_; 
lean_dec(v_a_3823_);
lean_del_object(v___x_3821_);
lean_del_object(v___x_3809_);
v_val_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_val_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v_a_3826_ = lean_nat_abs(v_mantissa_3797_);
lean_dec(v_mantissa_3797_);
v___x_3827_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3827_, 0, v_val_3819_);
lean_ctor_set(v___x_3827_, 1, v_a_3826_);
lean_ctor_set(v___x_3827_, 2, v_val_3825_);
if (v_isShared_3781_ == 0)
{
lean_ctor_set(v___x_3780_, 1, v_x_3762_);
lean_ctor_set(v___x_3780_, 0, v___x_3827_);
v___x_3829_ = v___x_3780_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v___x_3827_);
lean_ctor_set(v_reuseFailAlloc_3831_, 1, v_x_3762_);
v___x_3829_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
v_x_3761_ = v_tail_3778_;
v_x_3762_ = v___x_3829_;
goto _start;
}
}
else
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3836_; 
lean_dec(v___x_3824_);
lean_dec(v_val_3819_);
lean_dec(v_mantissa_3797_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
v___x_3832_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3833_ = l_Nat_reprFast(v_a_3823_);
v___x_3834_ = lean_string_append(v___x_3832_, v___x_3833_);
lean_dec_ref(v___x_3833_);
if (v_isShared_3822_ == 0)
{
lean_ctor_set_tag(v___x_3821_, 18);
lean_ctor_set(v___x_3821_, 0, v___x_3834_);
v___x_3836_ = v___x_3821_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v___x_3834_);
v___x_3836_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
lean_object* v___x_3838_; 
if (v_isShared_3810_ == 0)
{
lean_ctor_set_tag(v___x_3809_, 1);
lean_ctor_set(v___x_3809_, 0, v___x_3836_);
v___x_3838_ = v___x_3809_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v___x_3836_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
}
else
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3846_; 
lean_dec(v___x_3818_);
lean_dec(v_mantissa_3811_);
lean_dec(v_mantissa_3797_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
v___x_3842_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3843_ = l_Nat_reprFast(v_a_3817_);
v___x_3844_ = lean_string_append(v___x_3842_, v___x_3843_);
lean_dec_ref(v___x_3843_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set_tag(v___x_3809_, 18);
lean_ctor_set(v___x_3809_, 0, v___x_3844_);
v___x_3846_ = v___x_3809_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3844_);
v___x_3846_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
lean_object* v___x_3848_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 0, v___x_3846_);
v___x_3848_ = v___x_3805_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v___x_3846_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
}
else
{
lean_dec(v_exponent_3812_);
lean_dec(v_mantissa_3811_);
lean_del_object(v___x_3809_);
lean_del_object(v___x_3805_);
lean_dec(v_mantissa_3797_);
lean_dec(v_mantissa_3787_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3771_;
}
}
}
else
{
lean_del_object(v___x_3805_);
lean_dec(v_val_3803_);
lean_dec(v_mantissa_3797_);
lean_dec(v_mantissa_3787_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3771_;
}
}
}
else
{
lean_dec(v___x_3802_);
lean_dec(v_mantissa_3797_);
lean_dec(v_mantissa_3787_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3771_;
}
}
}
else
{
lean_dec(v_exponent_3798_);
lean_dec(v_mantissa_3797_);
lean_dec(v_mantissa_3787_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3768_;
}
}
else
{
lean_dec(v_val_3795_);
lean_dec(v_mantissa_3787_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3768_;
}
}
else
{
lean_dec(v___x_3794_);
lean_dec(v_mantissa_3787_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3768_;
}
}
}
else
{
lean_dec(v_exponent_3788_);
lean_dec(v_mantissa_3787_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3765_;
}
}
else
{
lean_dec(v_val_3785_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3765_;
}
}
else
{
lean_dec(v___x_3784_);
lean_dec(v_kvPairs_3782_);
lean_del_object(v___x_3780_);
lean_dec(v_tail_3778_);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
goto v___jp_3765_;
}
}
}
else
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
lean_dec(v_head_3777_);
lean_dec_ref_known(v_x_3761_, 2);
lean_dec_ref(v___y_3763_);
lean_dec(v_x_3762_);
v___x_3855_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3855_);
return v___x_3856_;
}
}
v___jp_3765_:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
return v___x_3767_;
}
v___jp_3768_:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3769_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
return v___x_3770_;
}
v___jp_3771_:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
return v___x_3773_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___boxed(lean_object* v_x_3857_, lean_object* v_x_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
lean_object* v_res_3861_; 
v_res_3861_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(v_x_3857_, v_x_3858_, v___y_3859_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(lean_object* v_json_3866_, lean_object* v_a_3867_){
_start:
{
if (lean_obj_tag(v_json_3866_) == 5)
{
lean_object* v_kvPairs_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v_kvPairs_3902_ = lean_ctor_get(v_json_3866_, 0);
v___x_3903_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3904_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3903_);
if (lean_obj_tag(v___x_3904_) == 1)
{
lean_object* v_val_3905_; 
v_val_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_val_3905_);
lean_dec_ref_known(v___x_3904_, 1);
if (lean_obj_tag(v_val_3905_) == 2)
{
lean_object* v_n_3906_; lean_object* v_mantissa_3907_; lean_object* v_exponent_3908_; lean_object* v_natZero_3909_; lean_object* v_intZero_3910_; uint8_t v_isNeg_3911_; 
v_n_3906_ = lean_ctor_get(v_val_3905_, 0);
lean_inc_ref(v_n_3906_);
lean_dec_ref_known(v_val_3905_, 1);
v_mantissa_3907_ = lean_ctor_get(v_n_3906_, 0);
lean_inc(v_mantissa_3907_);
v_exponent_3908_ = lean_ctor_get(v_n_3906_, 1);
lean_inc(v_exponent_3908_);
lean_dec_ref(v_n_3906_);
v_natZero_3909_ = lean_unsigned_to_nat(0u);
v_intZero_3910_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3911_ = lean_int_dec_lt(v_mantissa_3907_, v_intZero_3910_);
if (v_isNeg_3911_ == 0)
{
uint8_t v___x_3912_; 
v___x_3912_ = lean_nat_dec_eq(v_exponent_3908_, v_natZero_3909_);
lean_dec(v_exponent_3908_);
if (v___x_3912_ == 0)
{
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3869_;
}
else
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3914_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3913_);
if (lean_obj_tag(v___x_3914_) == 1)
{
lean_object* v_val_3915_; 
v_val_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_val_3915_);
lean_dec_ref_known(v___x_3914_, 1);
if (lean_obj_tag(v_val_3915_) == 4)
{
lean_object* v_elems_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v_elems_3916_ = lean_ctor_get(v_val_3915_, 0);
lean_inc_ref(v_elems_3916_);
lean_dec_ref_known(v_val_3915_, 1);
v___x_3917_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3918_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3917_);
if (lean_obj_tag(v___x_3918_) == 1)
{
lean_object* v_val_3919_; 
v_val_3919_ = lean_ctor_get(v___x_3918_, 0);
lean_inc(v_val_3919_);
lean_dec_ref_known(v___x_3918_, 1);
if (lean_obj_tag(v_val_3919_) == 2)
{
lean_object* v_n_3920_; lean_object* v_mantissa_3921_; lean_object* v_exponent_3922_; uint8_t v_isNeg_3923_; 
v_n_3920_ = lean_ctor_get(v_val_3919_, 0);
lean_inc_ref(v_n_3920_);
lean_dec_ref_known(v_val_3919_, 1);
v_mantissa_3921_ = lean_ctor_get(v_n_3920_, 0);
lean_inc(v_mantissa_3921_);
v_exponent_3922_ = lean_ctor_get(v_n_3920_, 1);
lean_inc(v_exponent_3922_);
lean_dec_ref(v_n_3920_);
v_isNeg_3923_ = lean_int_dec_lt(v_mantissa_3921_, v_intZero_3910_);
if (v_isNeg_3923_ == 0)
{
uint8_t v___x_3924_; 
v___x_3924_ = lean_nat_dec_eq(v_exponent_3922_, v_natZero_3909_);
lean_dec(v_exponent_3922_);
if (v___x_3924_ == 0)
{
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3875_;
}
else
{
lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___x_3925_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_3926_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3925_);
if (lean_obj_tag(v___x_3926_) == 1)
{
lean_object* v_val_3927_; 
v_val_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_val_3927_);
lean_dec_ref_known(v___x_3926_, 1);
if (lean_obj_tag(v_val_3927_) == 4)
{
lean_object* v_elems_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v_elems_3928_ = lean_ctor_get(v_val_3927_, 0);
lean_inc_ref(v_elems_3928_);
lean_dec_ref_known(v_val_3927_, 1);
v___x_3929_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2));
v___x_3930_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3929_);
if (lean_obj_tag(v___x_3930_) == 1)
{
lean_object* v_val_3931_; 
v_val_3931_ = lean_ctor_get(v___x_3930_, 0);
lean_inc(v_val_3931_);
lean_dec_ref_known(v___x_3930_, 1);
if (lean_obj_tag(v_val_3931_) == 2)
{
lean_object* v_n_3932_; lean_object* v_mantissa_3933_; lean_object* v_exponent_3934_; uint8_t v_isNeg_3935_; 
v_n_3932_ = lean_ctor_get(v_val_3931_, 0);
lean_inc_ref(v_n_3932_);
lean_dec_ref_known(v_val_3931_, 1);
v_mantissa_3933_ = lean_ctor_get(v_n_3932_, 0);
lean_inc(v_mantissa_3933_);
v_exponent_3934_ = lean_ctor_get(v_n_3932_, 1);
lean_inc(v_exponent_3934_);
lean_dec_ref(v_n_3932_);
v_isNeg_3935_ = lean_int_dec_lt(v_mantissa_3933_, v_intZero_3910_);
if (v_isNeg_3935_ == 0)
{
uint8_t v___x_3936_; 
v___x_3936_ = lean_nat_dec_eq(v_exponent_3934_, v_natZero_3909_);
lean_dec(v_exponent_3934_);
if (v___x_3936_ == 0)
{
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3881_;
}
else
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3937_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3));
v___x_3938_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3937_);
if (lean_obj_tag(v___x_3938_) == 1)
{
lean_object* v_val_3939_; 
v_val_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_val_3939_);
lean_dec_ref_known(v___x_3938_, 1);
if (lean_obj_tag(v_val_3939_) == 2)
{
lean_object* v_n_3940_; lean_object* v_mantissa_3941_; lean_object* v_exponent_3942_; uint8_t v_isNeg_3943_; 
v_n_3940_ = lean_ctor_get(v_val_3939_, 0);
lean_inc_ref(v_n_3940_);
lean_dec_ref_known(v_val_3939_, 1);
v_mantissa_3941_ = lean_ctor_get(v_n_3940_, 0);
lean_inc(v_mantissa_3941_);
v_exponent_3942_ = lean_ctor_get(v_n_3940_, 1);
lean_inc(v_exponent_3942_);
lean_dec_ref(v_n_3940_);
v_isNeg_3943_ = lean_int_dec_lt(v_mantissa_3941_, v_intZero_3910_);
if (v_isNeg_3943_ == 0)
{
uint8_t v___x_3944_; 
v___x_3944_ = lean_nat_dec_eq(v_exponent_3942_, v_natZero_3909_);
lean_dec(v_exponent_3942_);
if (v___x_3944_ == 0)
{
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3884_;
}
else
{
lean_object* v___x_3945_; lean_object* v___x_3946_; 
v___x_3945_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0));
v___x_3946_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3945_);
if (lean_obj_tag(v___x_3946_) == 1)
{
lean_object* v_val_3947_; 
v_val_3947_ = lean_ctor_get(v___x_3946_, 0);
lean_inc(v_val_3947_);
lean_dec_ref_known(v___x_3946_, 1);
if (lean_obj_tag(v_val_3947_) == 2)
{
lean_object* v_n_3948_; lean_object* v_mantissa_3949_; lean_object* v_exponent_3950_; uint8_t v_isNeg_3951_; 
v_n_3948_ = lean_ctor_get(v_val_3947_, 0);
lean_inc_ref(v_n_3948_);
lean_dec_ref_known(v_val_3947_, 1);
v_mantissa_3949_ = lean_ctor_get(v_n_3948_, 0);
lean_inc(v_mantissa_3949_);
v_exponent_3950_ = lean_ctor_get(v_n_3948_, 1);
lean_inc(v_exponent_3950_);
lean_dec_ref(v_n_3948_);
v_isNeg_3951_ = lean_int_dec_lt(v_mantissa_3949_, v_intZero_3910_);
if (v_isNeg_3951_ == 0)
{
uint8_t v___x_3952_; 
v___x_3952_ = lean_nat_dec_eq(v_exponent_3950_, v_natZero_3909_);
lean_dec(v_exponent_3950_);
if (v___x_3952_ == 0)
{
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3887_;
}
else
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1));
v___x_3954_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3953_);
if (lean_obj_tag(v___x_3954_) == 1)
{
lean_object* v_val_3955_; 
v_val_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_val_3955_);
lean_dec_ref_known(v___x_3954_, 1);
if (lean_obj_tag(v_val_3955_) == 2)
{
lean_object* v_n_3956_; lean_object* v_mantissa_3957_; lean_object* v_exponent_3958_; uint8_t v_isNeg_3959_; 
v_n_3956_ = lean_ctor_get(v_val_3955_, 0);
lean_inc_ref(v_n_3956_);
lean_dec_ref_known(v_val_3955_, 1);
v_mantissa_3957_ = lean_ctor_get(v_n_3956_, 0);
lean_inc(v_mantissa_3957_);
v_exponent_3958_ = lean_ctor_get(v_n_3956_, 1);
lean_inc(v_exponent_3958_);
lean_dec_ref(v_n_3956_);
v_isNeg_3959_ = lean_int_dec_lt(v_mantissa_3957_, v_intZero_3910_);
if (v_isNeg_3959_ == 0)
{
uint8_t v___x_3960_; 
v___x_3960_ = lean_nat_dec_eq(v_exponent_3958_, v_natZero_3909_);
lean_dec(v_exponent_3958_);
if (v___x_3960_ == 0)
{
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3890_;
}
else
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2));
v___x_3962_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3961_);
if (lean_obj_tag(v___x_3962_) == 1)
{
lean_object* v_val_3963_; 
v_val_3963_ = lean_ctor_get(v___x_3962_, 0);
lean_inc(v_val_3963_);
lean_dec_ref_known(v___x_3962_, 1);
if (lean_obj_tag(v_val_3963_) == 1)
{
uint8_t v_b_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_b_3964_ = lean_ctor_get_uint8(v_val_3963_, 0);
lean_dec_ref_known(v_val_3963_, 0);
v___x_3965_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3));
v___x_3966_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3965_);
if (lean_obj_tag(v___x_3966_) == 1)
{
lean_object* v_val_3967_; 
v_val_3967_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_val_3967_);
lean_dec_ref_known(v___x_3966_, 1);
if (lean_obj_tag(v_val_3967_) == 4)
{
lean_object* v_elems_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_4106_; 
v_elems_3968_ = lean_ctor_get(v_val_3967_, 0);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_val_3967_);
if (v_isSharedCheck_4106_ == 0)
{
v___x_3970_ = v_val_3967_;
v_isShared_3971_ = v_isSharedCheck_4106_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_elems_3968_);
lean_dec(v_val_3967_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_4106_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3972_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3973_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3902_, v___x_3972_);
if (lean_obj_tag(v___x_3973_) == 1)
{
lean_object* v_val_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_4105_; 
v_val_3974_ = lean_ctor_get(v___x_3973_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_3973_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_3976_ = v___x_3973_;
v_isShared_3977_ = v_isSharedCheck_4105_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_val_3974_);
lean_dec(v___x_3973_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_4105_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
if (lean_obj_tag(v_val_3974_) == 1)
{
uint8_t v_b_3978_; lean_object* v_nameMap_3979_; lean_object* v_a_3980_; lean_object* v___x_3981_; 
v_b_3978_ = lean_ctor_get_uint8(v_val_3974_, 0);
lean_dec_ref_known(v_val_3974_, 0);
v_nameMap_3979_ = lean_ctor_get(v_a_3867_, 1);
v_a_3980_ = lean_nat_abs(v_mantissa_3907_);
lean_dec(v_mantissa_3907_);
v___x_3981_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3979_, v_a_3980_);
if (lean_obj_tag(v___x_3981_) == 1)
{
lean_object* v_val_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_4095_; 
lean_dec(v_a_3980_);
lean_del_object(v___x_3976_);
lean_del_object(v___x_3970_);
v_val_3982_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_4095_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_4095_ == 0)
{
v___x_3984_ = v___x_3981_;
v_isShared_3985_ = v_isSharedCheck_4095_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_val_3982_);
lean_dec(v___x_3981_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_4095_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v_a_3986_; lean_object* v_a_3987_; lean_object* v_a_3988_; lean_object* v_a_3989_; lean_object* v_a_3990_; lean_object* v___x_3991_; 
v_a_3986_ = lean_nat_abs(v_mantissa_3921_);
lean_dec(v_mantissa_3921_);
v_a_3987_ = lean_nat_abs(v_mantissa_3933_);
lean_dec(v_mantissa_3933_);
v_a_3988_ = lean_nat_abs(v_mantissa_3941_);
lean_dec(v_mantissa_3941_);
v_a_3989_ = lean_nat_abs(v_mantissa_3949_);
lean_dec(v_mantissa_3949_);
v_a_3990_ = lean_nat_abs(v_mantissa_3957_);
lean_dec(v_mantissa_3957_);
v___x_3991_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3916_, v_a_3867_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4086_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4086_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4086_ == 0)
{
v___x_3994_ = v___x_3991_;
v_isShared_3995_ = v_isSharedCheck_4086_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3991_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4086_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v_snd_3996_; lean_object* v_fst_3997_; lean_object* v_exprMap_3998_; lean_object* v___x_3999_; 
v_snd_3996_ = lean_ctor_get(v_a_3992_, 1);
lean_inc(v_snd_3996_);
v_fst_3997_ = lean_ctor_get(v_a_3992_, 0);
lean_inc(v_fst_3997_);
lean_dec(v_a_3992_);
v_exprMap_3998_ = lean_ctor_get(v_snd_3996_, 3);
v___x_3999_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3998_, v_a_3986_);
if (lean_obj_tag(v___x_3999_) == 1)
{
lean_object* v_val_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4076_; 
lean_del_object(v___x_3994_);
lean_dec(v_a_3986_);
lean_del_object(v___x_3984_);
v_val_4000_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4002_ = v___x_3999_;
v_isShared_4003_ = v_isSharedCheck_4076_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_val_4000_);
lean_dec(v___x_3999_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4076_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4004_; 
v___x_4004_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3928_, v_snd_3996_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v_fst_4006_; lean_object* v_snd_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v_fst_4006_ = lean_ctor_get(v_a_4005_, 0);
lean_inc(v_fst_4006_);
v_snd_4007_ = lean_ctor_get(v_a_4005_, 1);
lean_inc(v_snd_4007_);
lean_dec(v_a_4005_);
v___x_4008_ = lean_array_to_list(v_elems_3968_);
v___x_4009_ = lean_box(0);
v___x_4010_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(v___x_4008_, v___x_4009_, v_snd_4007_);
if (lean_obj_tag(v___x_4010_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4059_; 
v_a_4011_ = lean_ctor_get(v___x_4010_, 0);
v_isSharedCheck_4059_ = !lean_is_exclusive(v___x_4010_);
if (v_isSharedCheck_4059_ == 0)
{
v___x_4013_ = v___x_4010_;
v_isShared_4014_ = v_isSharedCheck_4059_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___x_4010_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4059_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v_snd_4015_; lean_object* v_fst_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4058_; 
v_snd_4015_ = lean_ctor_get(v_a_4011_, 1);
v_fst_4016_ = lean_ctor_get(v_a_4011_, 0);
v_isSharedCheck_4058_ = !lean_is_exclusive(v_a_4011_);
if (v_isSharedCheck_4058_ == 0)
{
v___x_4018_ = v_a_4011_;
v_isShared_4019_ = v_isSharedCheck_4058_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_snd_4015_);
lean_inc(v_fst_4016_);
lean_dec(v_a_4011_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4058_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v_stream_4020_; lean_object* v_nameMap_4021_; lean_object* v_levelMap_4022_; lean_object* v_exprMap_4023_; lean_object* v_recursorRuleMap_4024_; lean_object* v_constMap_4025_; lean_object* v_constOrder_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4057_; 
v_stream_4020_ = lean_ctor_get(v_snd_4015_, 0);
v_nameMap_4021_ = lean_ctor_get(v_snd_4015_, 1);
v_levelMap_4022_ = lean_ctor_get(v_snd_4015_, 2);
v_exprMap_4023_ = lean_ctor_get(v_snd_4015_, 3);
v_recursorRuleMap_4024_ = lean_ctor_get(v_snd_4015_, 4);
v_constMap_4025_ = lean_ctor_get(v_snd_4015_, 5);
v_constOrder_4026_ = lean_ctor_get(v_snd_4015_, 6);
v_isSharedCheck_4057_ = !lean_is_exclusive(v_snd_4015_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4028_ = v_snd_4015_;
v_isShared_4029_ = v_isSharedCheck_4057_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_constOrder_4026_);
lean_inc(v_constMap_4025_);
lean_inc(v_recursorRuleMap_4024_);
lean_inc(v_exprMap_4023_);
lean_inc(v_levelMap_4022_);
lean_inc(v_nameMap_4021_);
lean_inc(v_stream_4020_);
lean_dec(v_snd_4015_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4057_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
uint8_t v___x_4030_; 
v___x_4030_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_4025_, v_val_3982_);
if (v___x_4030_ == 0)
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4034_; 
lean_inc(v_val_3982_);
v___x_4031_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4031_, 0, v_val_3982_);
lean_ctor_set(v___x_4031_, 1, v_fst_3997_);
lean_ctor_set(v___x_4031_, 2, v_val_4000_);
v___x_4032_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_4032_, 0, v___x_4031_);
lean_ctor_set(v___x_4032_, 1, v_fst_4006_);
lean_ctor_set(v___x_4032_, 2, v_a_3987_);
lean_ctor_set(v___x_4032_, 3, v_a_3988_);
lean_ctor_set(v___x_4032_, 4, v_a_3989_);
lean_ctor_set(v___x_4032_, 5, v_a_3990_);
lean_ctor_set(v___x_4032_, 6, v_fst_4016_);
lean_ctor_set_uint8(v___x_4032_, sizeof(void*)*7, v_b_3964_);
lean_ctor_set_uint8(v___x_4032_, sizeof(void*)*7 + 1, v_b_3978_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set_tag(v___x_4002_, 7);
lean_ctor_set(v___x_4002_, 0, v___x_4032_);
v___x_4034_ = v___x_4002_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v___x_4032_);
v___x_4034_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4039_; 
v___x_4035_ = lean_box(0);
lean_inc(v_val_3982_);
v___x_4036_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_4025_, v_val_3982_, v___x_4034_);
v___x_4037_ = lean_array_push(v_constOrder_4026_, v_val_3982_);
if (v_isShared_4029_ == 0)
{
lean_ctor_set(v___x_4028_, 6, v___x_4037_);
lean_ctor_set(v___x_4028_, 5, v___x_4036_);
v___x_4039_ = v___x_4028_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_stream_4020_);
lean_ctor_set(v_reuseFailAlloc_4046_, 1, v_nameMap_4021_);
lean_ctor_set(v_reuseFailAlloc_4046_, 2, v_levelMap_4022_);
lean_ctor_set(v_reuseFailAlloc_4046_, 3, v_exprMap_4023_);
lean_ctor_set(v_reuseFailAlloc_4046_, 4, v_recursorRuleMap_4024_);
lean_ctor_set(v_reuseFailAlloc_4046_, 5, v___x_4036_);
lean_ctor_set(v_reuseFailAlloc_4046_, 6, v___x_4037_);
v___x_4039_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
lean_object* v___x_4041_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 1, v___x_4039_);
lean_ctor_set(v___x_4018_, 0, v___x_4035_);
v___x_4041_ = v___x_4018_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4035_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_4039_);
v___x_4041_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
lean_object* v___x_4043_; 
if (v_isShared_4014_ == 0)
{
lean_ctor_set(v___x_4013_, 0, v___x_4041_);
v___x_4043_ = v___x_4013_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v___x_4041_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
else
{
lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4052_; 
lean_del_object(v___x_4028_);
lean_dec_ref(v_constOrder_4026_);
lean_dec_ref(v_constMap_4025_);
lean_dec_ref(v_recursorRuleMap_4024_);
lean_dec_ref(v_exprMap_4023_);
lean_dec_ref(v_levelMap_4022_);
lean_dec_ref(v_nameMap_4021_);
lean_dec_ref(v_stream_4020_);
lean_del_object(v___x_4018_);
lean_dec(v_fst_4016_);
lean_dec(v_fst_4006_);
lean_dec(v_val_4000_);
lean_dec(v_fst_3997_);
lean_dec(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
v___x_4048_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_4049_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3982_, v___x_4030_);
v___x_4050_ = lean_string_append(v___x_4048_, v___x_4049_);
lean_dec_ref(v___x_4049_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set_tag(v___x_4002_, 18);
lean_ctor_set(v___x_4002_, 0, v___x_4050_);
v___x_4052_ = v___x_4002_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v___x_4050_);
v___x_4052_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
lean_object* v___x_4054_; 
if (v_isShared_4014_ == 0)
{
lean_ctor_set_tag(v___x_4013_, 1);
lean_ctor_set(v___x_4013_, 0, v___x_4052_);
v___x_4054_ = v___x_4013_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v___x_4052_);
v___x_4054_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
return v___x_4054_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4067_; 
lean_dec(v_fst_4006_);
lean_del_object(v___x_4002_);
lean_dec(v_val_4000_);
lean_dec(v_fst_3997_);
lean_dec(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec(v_val_3982_);
v_a_4060_ = lean_ctor_get(v___x_4010_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4010_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4062_ = v___x_4010_;
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_a_4060_);
lean_dec(v___x_4010_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4065_; 
if (v_isShared_4063_ == 0)
{
v___x_4065_ = v___x_4062_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_a_4060_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
return v___x_4065_;
}
}
}
}
else
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4075_; 
lean_del_object(v___x_4002_);
lean_dec(v_val_4000_);
lean_dec(v_fst_3997_);
lean_dec(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec(v_val_3982_);
lean_dec_ref(v_elems_3968_);
v_a_4068_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4070_ = v___x_4004_;
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v___x_4004_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_a_4068_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
}
}
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4081_; 
lean_dec(v___x_3999_);
lean_dec(v_fst_3997_);
lean_dec(v_snd_3996_);
lean_dec(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec(v_val_3982_);
lean_dec_ref(v_elems_3968_);
lean_dec_ref(v_elems_3928_);
v___x_4077_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_4078_ = l_Nat_reprFast(v_a_3986_);
v___x_4079_ = lean_string_append(v___x_4077_, v___x_4078_);
lean_dec_ref(v___x_4078_);
if (v_isShared_3985_ == 0)
{
lean_ctor_set_tag(v___x_3984_, 18);
lean_ctor_set(v___x_3984_, 0, v___x_4079_);
v___x_4081_ = v___x_3984_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
lean_object* v___x_4083_; 
if (v_isShared_3995_ == 0)
{
lean_ctor_set_tag(v___x_3994_, 1);
lean_ctor_set(v___x_3994_, 0, v___x_4081_);
v___x_4083_ = v___x_3994_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v___x_4081_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
}
else
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
lean_dec(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec(v_a_3986_);
lean_del_object(v___x_3984_);
lean_dec(v_val_3982_);
lean_dec_ref(v_elems_3968_);
lean_dec_ref(v_elems_3928_);
v_a_4087_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_3991_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_3991_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
}
}
else
{
lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4100_; 
lean_dec(v___x_3981_);
lean_dec_ref(v_elems_3968_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec_ref(v_a_3867_);
v___x_4096_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_4097_ = l_Nat_reprFast(v_a_3980_);
v___x_4098_ = lean_string_append(v___x_4096_, v___x_4097_);
lean_dec_ref(v___x_4097_);
if (v_isShared_3977_ == 0)
{
lean_ctor_set_tag(v___x_3976_, 18);
lean_ctor_set(v___x_3976_, 0, v___x_4098_);
v___x_4100_ = v___x_3976_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v___x_4098_);
v___x_4100_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
lean_object* v___x_4102_; 
if (v_isShared_3971_ == 0)
{
lean_ctor_set_tag(v___x_3970_, 1);
lean_ctor_set(v___x_3970_, 0, v___x_4100_);
v___x_4102_ = v___x_3970_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v___x_4100_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
else
{
lean_del_object(v___x_3976_);
lean_dec(v_val_3974_);
lean_del_object(v___x_3970_);
lean_dec_ref(v_elems_3968_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3899_;
}
}
}
else
{
lean_dec(v___x_3973_);
lean_del_object(v___x_3970_);
lean_dec_ref(v_elems_3968_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3899_;
}
}
}
else
{
lean_dec(v_val_3967_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3896_;
}
}
else
{
lean_dec(v___x_3966_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3896_;
}
}
else
{
lean_dec(v_val_3963_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3893_;
}
}
else
{
lean_dec(v___x_3962_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3893_;
}
}
}
else
{
lean_dec(v_exponent_3958_);
lean_dec(v_mantissa_3957_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3890_;
}
}
else
{
lean_dec(v_val_3955_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3890_;
}
}
else
{
lean_dec(v___x_3954_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3890_;
}
}
}
else
{
lean_dec(v_exponent_3950_);
lean_dec(v_mantissa_3949_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3887_;
}
}
else
{
lean_dec(v_val_3947_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3887_;
}
}
else
{
lean_dec(v___x_3946_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3887_;
}
}
}
else
{
lean_dec(v_exponent_3942_);
lean_dec(v_mantissa_3941_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3884_;
}
}
else
{
lean_dec(v_val_3939_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3884_;
}
}
else
{
lean_dec(v___x_3938_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3884_;
}
}
}
else
{
lean_dec(v_exponent_3934_);
lean_dec(v_mantissa_3933_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3881_;
}
}
else
{
lean_dec(v_val_3931_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3881_;
}
}
else
{
lean_dec(v___x_3930_);
lean_dec_ref(v_elems_3928_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3881_;
}
}
else
{
lean_dec(v_val_3927_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3878_;
}
}
else
{
lean_dec(v___x_3926_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3878_;
}
}
}
else
{
lean_dec(v_exponent_3922_);
lean_dec(v_mantissa_3921_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3875_;
}
}
else
{
lean_dec(v_val_3919_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3875_;
}
}
else
{
lean_dec(v___x_3918_);
lean_dec_ref(v_elems_3916_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3875_;
}
}
else
{
lean_dec(v_val_3915_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3872_;
}
}
else
{
lean_dec(v___x_3914_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3872_;
}
}
}
else
{
lean_dec(v_exponent_3908_);
lean_dec(v_mantissa_3907_);
lean_dec_ref(v_a_3867_);
goto v___jp_3869_;
}
}
else
{
lean_dec(v_val_3905_);
lean_dec_ref(v_a_3867_);
goto v___jp_3869_;
}
}
else
{
lean_dec(v___x_3904_);
lean_dec_ref(v_a_3867_);
goto v___jp_3869_;
}
}
else
{
lean_object* v___x_4107_; lean_object* v___x_4108_; 
lean_dec_ref(v_a_3867_);
v___x_4107_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
return v___x_4108_;
}
v___jp_3869_:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3870_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3870_);
return v___x_3871_;
}
v___jp_3872_:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3873_);
return v___x_3874_;
}
v___jp_3875_:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3876_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
return v___x_3877_;
}
v___jp_3878_:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3879_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
return v___x_3880_;
}
v___jp_3881_:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3882_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
return v___x_3883_;
}
v___jp_3884_:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3885_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3885_);
return v___x_3886_;
}
v___jp_3887_:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3888_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
return v___x_3889_;
}
v___jp_3890_:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3891_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
return v___x_3892_;
}
v___jp_3893_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3894_);
return v___x_3895_;
}
v___jp_3896_:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
return v___x_3898_;
}
v___jp_3899_:
{
lean_object* v___x_3900_; lean_object* v___x_3901_; 
v___x_3900_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3900_);
return v___x_3901_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___boxed(lean_object* v_json_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(v_json_4109_, v_a_4110_);
lean_dec(v_json_4109_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(lean_object* v_as_4113_, size_t v_i_4114_, size_t v_stop_4115_, lean_object* v_b_4116_, lean_object* v___y_4117_){
_start:
{
uint8_t v___x_4119_; 
v___x_4119_ = lean_usize_dec_eq(v_i_4114_, v_stop_4115_);
if (v___x_4119_ == 0)
{
lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4120_ = lean_array_uget_borrowed(v_as_4113_, v_i_4114_);
v___x_4121_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(v___x_4120_, v___y_4117_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; lean_object* v_fst_4123_; lean_object* v_snd_4124_; size_t v___x_4125_; size_t v___x_4126_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
lean_inc(v_a_4122_);
lean_dec_ref_known(v___x_4121_, 1);
v_fst_4123_ = lean_ctor_get(v_a_4122_, 0);
lean_inc(v_fst_4123_);
v_snd_4124_ = lean_ctor_get(v_a_4122_, 1);
lean_inc(v_snd_4124_);
lean_dec(v_a_4122_);
v___x_4125_ = ((size_t)1ULL);
v___x_4126_ = lean_usize_add(v_i_4114_, v___x_4125_);
v_i_4114_ = v___x_4126_;
v_b_4116_ = v_fst_4123_;
v___y_4117_ = v_snd_4124_;
goto _start;
}
else
{
return v___x_4121_;
}
}
else
{
lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4128_, 0, v_b_4116_);
lean_ctor_set(v___x_4128_, 1, v___y_4117_);
v___x_4129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4128_);
return v___x_4129_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0___boxed(lean_object* v_as_4130_, lean_object* v_i_4131_, lean_object* v_stop_4132_, lean_object* v_b_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
size_t v_i_boxed_4136_; size_t v_stop_boxed_4137_; lean_object* v_res_4138_; 
v_i_boxed_4136_ = lean_unbox_usize(v_i_4131_);
lean_dec(v_i_4131_);
v_stop_boxed_4137_ = lean_unbox_usize(v_stop_4132_);
lean_dec(v_stop_4132_);
v_res_4138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(v_as_4130_, v_i_boxed_4136_, v_stop_boxed_4137_, v_b_4133_, v___y_4134_);
lean_dec_ref(v_as_4130_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(lean_object* v_as_4139_, size_t v_i_4140_, size_t v_stop_4141_, lean_object* v_b_4142_, lean_object* v___y_4143_){
_start:
{
uint8_t v___x_4145_; 
v___x_4145_ = lean_usize_dec_eq(v_i_4140_, v_stop_4141_);
if (v___x_4145_ == 0)
{
lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4146_ = lean_array_uget_borrowed(v_as_4139_, v_i_4140_);
v___x_4147_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(v___x_4146_, v___y_4143_);
if (lean_obj_tag(v___x_4147_) == 0)
{
lean_object* v_a_4148_; lean_object* v_fst_4149_; lean_object* v_snd_4150_; size_t v___x_4151_; size_t v___x_4152_; 
v_a_4148_ = lean_ctor_get(v___x_4147_, 0);
lean_inc(v_a_4148_);
lean_dec_ref_known(v___x_4147_, 1);
v_fst_4149_ = lean_ctor_get(v_a_4148_, 0);
lean_inc(v_fst_4149_);
v_snd_4150_ = lean_ctor_get(v_a_4148_, 1);
lean_inc(v_snd_4150_);
lean_dec(v_a_4148_);
v___x_4151_ = ((size_t)1ULL);
v___x_4152_ = lean_usize_add(v_i_4140_, v___x_4151_);
v_i_4140_ = v___x_4152_;
v_b_4142_ = v_fst_4149_;
v___y_4143_ = v_snd_4150_;
goto _start;
}
else
{
return v___x_4147_;
}
}
else
{
lean_object* v___x_4154_; lean_object* v___x_4155_; 
v___x_4154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4154_, 0, v_b_4142_);
lean_ctor_set(v___x_4154_, 1, v___y_4143_);
v___x_4155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4154_);
return v___x_4155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1___boxed(lean_object* v_as_4156_, lean_object* v_i_4157_, lean_object* v_stop_4158_, lean_object* v_b_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_){
_start:
{
size_t v_i_boxed_4162_; size_t v_stop_boxed_4163_; lean_object* v_res_4164_; 
v_i_boxed_4162_ = lean_unbox_usize(v_i_4157_);
lean_dec(v_i_4157_);
v_stop_boxed_4163_ = lean_unbox_usize(v_stop_4158_);
lean_dec(v_stop_4158_);
v_res_4164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(v_as_4156_, v_i_boxed_4162_, v_stop_boxed_4163_, v_b_4159_, v___y_4160_);
lean_dec_ref(v_as_4156_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(lean_object* v_as_4165_, size_t v_i_4166_, size_t v_stop_4167_, lean_object* v_b_4168_, lean_object* v___y_4169_){
_start:
{
uint8_t v___x_4171_; 
v___x_4171_ = lean_usize_dec_eq(v_i_4166_, v_stop_4167_);
if (v___x_4171_ == 0)
{
lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4172_ = lean_array_uget_borrowed(v_as_4165_, v_i_4166_);
v___x_4173_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(v___x_4172_, v___y_4169_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; lean_object* v_fst_4175_; lean_object* v_snd_4176_; size_t v___x_4177_; size_t v___x_4178_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4174_);
lean_dec_ref_known(v___x_4173_, 1);
v_fst_4175_ = lean_ctor_get(v_a_4174_, 0);
lean_inc(v_fst_4175_);
v_snd_4176_ = lean_ctor_get(v_a_4174_, 1);
lean_inc(v_snd_4176_);
lean_dec(v_a_4174_);
v___x_4177_ = ((size_t)1ULL);
v___x_4178_ = lean_usize_add(v_i_4166_, v___x_4177_);
v_i_4166_ = v___x_4178_;
v_b_4168_ = v_fst_4175_;
v___y_4169_ = v_snd_4176_;
goto _start;
}
else
{
return v___x_4173_;
}
}
else
{
lean_object* v___x_4180_; lean_object* v___x_4181_; 
v___x_4180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4180_, 0, v_b_4168_);
lean_ctor_set(v___x_4180_, 1, v___y_4169_);
v___x_4181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4180_);
return v___x_4181_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2___boxed(lean_object* v_as_4182_, lean_object* v_i_4183_, lean_object* v_stop_4184_, lean_object* v_b_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
size_t v_i_boxed_4188_; size_t v_stop_boxed_4189_; lean_object* v_res_4190_; 
v_i_boxed_4188_ = lean_unbox_usize(v_i_4183_);
lean_dec(v_i_4183_);
v_stop_boxed_4189_ = lean_unbox_usize(v_stop_4184_);
lean_dec(v_stop_4184_);
v_res_4190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(v_as_4182_, v_i_boxed_4188_, v_stop_boxed_4189_, v_b_4185_, v___y_4186_);
lean_dec_ref(v_as_4182_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(lean_object* v_data_4202_, lean_object* v_a_4203_){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4214_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6));
v___x_4215_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_4202_, v___x_4214_);
if (lean_obj_tag(v___x_4215_) == 1)
{
lean_object* v_val_4216_; 
v_val_4216_ = lean_ctor_get(v___x_4215_, 0);
lean_inc(v_val_4216_);
lean_dec_ref_known(v___x_4215_, 1);
if (lean_obj_tag(v_val_4216_) == 4)
{
lean_object* v_elems_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v_elems_4217_ = lean_ctor_get(v_val_4216_, 0);
lean_inc_ref(v_elems_4217_);
lean_dec_ref_known(v_val_4216_, 1);
v___x_4218_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4));
v___x_4219_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_4202_, v___x_4218_);
if (lean_obj_tag(v___x_4219_) == 1)
{
lean_object* v_val_4220_; 
v_val_4220_ = lean_ctor_get(v___x_4219_, 0);
lean_inc(v_val_4220_);
lean_dec_ref_known(v___x_4219_, 1);
if (lean_obj_tag(v_val_4220_) == 4)
{
lean_object* v_elems_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
v_elems_4221_ = lean_ctor_get(v_val_4220_, 0);
lean_inc_ref(v_elems_4221_);
lean_dec_ref_known(v_val_4220_, 1);
v___x_4222_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7));
v___x_4223_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_4202_, v___x_4222_);
if (lean_obj_tag(v___x_4223_) == 1)
{
lean_object* v_val_4224_; 
v_val_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_val_4224_);
lean_dec_ref_known(v___x_4223_, 1);
if (lean_obj_tag(v_val_4224_) == 4)
{
lean_object* v_elems_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4280_; 
v_elems_4225_ = lean_ctor_get(v_val_4224_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v_val_4224_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4227_ = v_val_4224_;
v_isShared_4228_ = v_isSharedCheck_4280_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_elems_4225_);
lean_dec(v_val_4224_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4280_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4229_; lean_object* v_snd_4231_; lean_object* v___y_4251_; lean_object* v_snd_4255_; lean_object* v___y_4267_; lean_object* v___x_4270_; uint8_t v___x_4271_; 
v___x_4229_ = lean_unsigned_to_nat(0u);
v___x_4270_ = lean_array_get_size(v_elems_4217_);
v___x_4271_ = lean_nat_dec_lt(v___x_4229_, v___x_4270_);
if (v___x_4271_ == 0)
{
lean_dec_ref(v_elems_4217_);
v_snd_4255_ = v_a_4203_;
goto v___jp_4254_;
}
else
{
lean_object* v___x_4272_; uint8_t v___x_4273_; 
v___x_4272_ = lean_box(0);
v___x_4273_ = lean_nat_dec_le(v___x_4270_, v___x_4270_);
if (v___x_4273_ == 0)
{
if (v___x_4271_ == 0)
{
lean_dec_ref(v_elems_4217_);
v_snd_4255_ = v_a_4203_;
goto v___jp_4254_;
}
else
{
size_t v___x_4274_; size_t v___x_4275_; lean_object* v___x_4276_; 
v___x_4274_ = ((size_t)0ULL);
v___x_4275_ = lean_usize_of_nat(v___x_4270_);
v___x_4276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(v_elems_4217_, v___x_4274_, v___x_4275_, v___x_4272_, v_a_4203_);
lean_dec_ref(v_elems_4217_);
v___y_4267_ = v___x_4276_;
goto v___jp_4266_;
}
}
else
{
size_t v___x_4277_; size_t v___x_4278_; lean_object* v___x_4279_; 
v___x_4277_ = ((size_t)0ULL);
v___x_4278_ = lean_usize_of_nat(v___x_4270_);
v___x_4279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(v_elems_4217_, v___x_4277_, v___x_4278_, v___x_4272_, v_a_4203_);
lean_dec_ref(v_elems_4217_);
v___y_4267_ = v___x_4279_;
goto v___jp_4266_;
}
}
v___jp_4230_:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; uint8_t v___x_4234_; 
v___x_4232_ = lean_array_get_size(v_elems_4225_);
v___x_4233_ = lean_box(0);
v___x_4234_ = lean_nat_dec_lt(v___x_4229_, v___x_4232_);
if (v___x_4234_ == 0)
{
lean_object* v___x_4235_; lean_object* v___x_4237_; 
lean_dec_ref(v_elems_4225_);
v___x_4235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4233_);
lean_ctor_set(v___x_4235_, 1, v_snd_4231_);
if (v_isShared_4228_ == 0)
{
lean_ctor_set_tag(v___x_4227_, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4235_);
v___x_4237_ = v___x_4227_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
else
{
uint8_t v___x_4239_; 
v___x_4239_ = lean_nat_dec_le(v___x_4232_, v___x_4232_);
if (v___x_4239_ == 0)
{
if (v___x_4234_ == 0)
{
lean_object* v___x_4240_; lean_object* v___x_4242_; 
lean_dec_ref(v_elems_4225_);
v___x_4240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4233_);
lean_ctor_set(v___x_4240_, 1, v_snd_4231_);
if (v_isShared_4228_ == 0)
{
lean_ctor_set_tag(v___x_4227_, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4240_);
v___x_4242_ = v___x_4227_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4240_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
else
{
size_t v___x_4244_; size_t v___x_4245_; lean_object* v___x_4246_; 
lean_del_object(v___x_4227_);
v___x_4244_ = ((size_t)0ULL);
v___x_4245_ = lean_usize_of_nat(v___x_4232_);
v___x_4246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(v_elems_4225_, v___x_4244_, v___x_4245_, v___x_4233_, v_snd_4231_);
lean_dec_ref(v_elems_4225_);
return v___x_4246_;
}
}
else
{
size_t v___x_4247_; size_t v___x_4248_; lean_object* v___x_4249_; 
lean_del_object(v___x_4227_);
v___x_4247_ = ((size_t)0ULL);
v___x_4248_ = lean_usize_of_nat(v___x_4232_);
v___x_4249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(v_elems_4225_, v___x_4247_, v___x_4248_, v___x_4233_, v_snd_4231_);
lean_dec_ref(v_elems_4225_);
return v___x_4249_;
}
}
}
v___jp_4250_:
{
if (lean_obj_tag(v___y_4251_) == 0)
{
lean_object* v_a_4252_; lean_object* v_snd_4253_; 
v_a_4252_ = lean_ctor_get(v___y_4251_, 0);
lean_inc(v_a_4252_);
lean_dec_ref_known(v___y_4251_, 1);
v_snd_4253_ = lean_ctor_get(v_a_4252_, 1);
lean_inc(v_snd_4253_);
lean_dec(v_a_4252_);
v_snd_4231_ = v_snd_4253_;
goto v___jp_4230_;
}
else
{
lean_del_object(v___x_4227_);
lean_dec_ref(v_elems_4225_);
return v___y_4251_;
}
}
v___jp_4254_:
{
lean_object* v___x_4256_; uint8_t v___x_4257_; 
v___x_4256_ = lean_array_get_size(v_elems_4221_);
v___x_4257_ = lean_nat_dec_lt(v___x_4229_, v___x_4256_);
if (v___x_4257_ == 0)
{
lean_dec_ref(v_elems_4221_);
v_snd_4231_ = v_snd_4255_;
goto v___jp_4230_;
}
else
{
lean_object* v___x_4258_; uint8_t v___x_4259_; 
v___x_4258_ = lean_box(0);
v___x_4259_ = lean_nat_dec_le(v___x_4256_, v___x_4256_);
if (v___x_4259_ == 0)
{
if (v___x_4257_ == 0)
{
lean_dec_ref(v_elems_4221_);
v_snd_4231_ = v_snd_4255_;
goto v___jp_4230_;
}
else
{
size_t v___x_4260_; size_t v___x_4261_; lean_object* v___x_4262_; 
v___x_4260_ = ((size_t)0ULL);
v___x_4261_ = lean_usize_of_nat(v___x_4256_);
v___x_4262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(v_elems_4221_, v___x_4260_, v___x_4261_, v___x_4258_, v_snd_4255_);
lean_dec_ref(v_elems_4221_);
v___y_4251_ = v___x_4262_;
goto v___jp_4250_;
}
}
else
{
size_t v___x_4263_; size_t v___x_4264_; lean_object* v___x_4265_; 
v___x_4263_ = ((size_t)0ULL);
v___x_4264_ = lean_usize_of_nat(v___x_4256_);
v___x_4265_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(v_elems_4221_, v___x_4263_, v___x_4264_, v___x_4258_, v_snd_4255_);
lean_dec_ref(v_elems_4221_);
v___y_4251_ = v___x_4265_;
goto v___jp_4250_;
}
}
}
v___jp_4266_:
{
if (lean_obj_tag(v___y_4267_) == 0)
{
lean_object* v_a_4268_; lean_object* v_snd_4269_; 
v_a_4268_ = lean_ctor_get(v___y_4267_, 0);
lean_inc(v_a_4268_);
lean_dec_ref_known(v___y_4267_, 1);
v_snd_4269_ = lean_ctor_get(v_a_4268_, 1);
lean_inc(v_snd_4269_);
lean_dec(v_a_4268_);
v_snd_4255_ = v_snd_4269_;
goto v___jp_4254_;
}
else
{
lean_del_object(v___x_4227_);
lean_dec_ref(v_elems_4225_);
lean_dec_ref(v_elems_4221_);
return v___y_4267_;
}
}
}
}
else
{
lean_dec(v_val_4224_);
lean_dec_ref(v_elems_4221_);
lean_dec_ref(v_elems_4217_);
lean_dec_ref(v_a_4203_);
goto v___jp_4205_;
}
}
else
{
lean_dec(v___x_4223_);
lean_dec_ref(v_elems_4221_);
lean_dec_ref(v_elems_4217_);
lean_dec_ref(v_a_4203_);
goto v___jp_4205_;
}
}
else
{
lean_dec(v_val_4220_);
lean_dec_ref(v_elems_4217_);
lean_dec_ref(v_a_4203_);
goto v___jp_4208_;
}
}
else
{
lean_dec(v___x_4219_);
lean_dec_ref(v_elems_4217_);
lean_dec_ref(v_a_4203_);
goto v___jp_4208_;
}
}
else
{
lean_dec(v_val_4216_);
lean_dec_ref(v_a_4203_);
goto v___jp_4211_;
}
}
else
{
lean_dec(v___x_4215_);
lean_dec_ref(v_a_4203_);
goto v___jp_4211_;
}
v___jp_4205_:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; 
v___x_4206_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1));
v___x_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4207_, 0, v___x_4206_);
return v___x_4207_;
}
v___jp_4208_:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4209_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3));
v___x_4210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4209_);
return v___x_4210_;
}
v___jp_4211_:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4212_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5));
v___x_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4212_);
return v___x_4213_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___boxed(lean_object* v_data_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(v_data_4281_, v_a_4282_);
lean_dec(v_data_4281_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(lean_object* v_x_4286_, lean_object* v_x_4287_){
_start:
{
if (lean_obj_tag(v_x_4287_) == 0)
{
return v_x_4286_;
}
else
{
lean_object* v_head_4288_; lean_object* v_tail_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v_head_4288_ = lean_ctor_get(v_x_4287_, 0);
v_tail_4289_ = lean_ctor_get(v_x_4287_, 1);
v___x_4290_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0));
v___x_4291_ = lean_string_append(v_x_4286_, v___x_4290_);
v___x_4292_ = lean_string_append(v___x_4291_, v_head_4288_);
v_x_4286_ = v___x_4292_;
v_x_4287_ = v_tail_4289_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___boxed(lean_object* v_x_4294_, lean_object* v_x_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(v_x_4294_, v_x_4295_);
lean_dec(v_x_4295_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(lean_object* v_x_4300_){
_start:
{
if (lean_obj_tag(v_x_4300_) == 0)
{
lean_object* v___x_4301_; 
v___x_4301_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0));
return v___x_4301_;
}
else
{
lean_object* v_tail_4302_; 
v_tail_4302_ = lean_ctor_get(v_x_4300_, 1);
if (lean_obj_tag(v_tail_4302_) == 0)
{
lean_object* v_head_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; 
v_head_4303_ = lean_ctor_get(v_x_4300_, 0);
v___x_4304_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1));
v___x_4305_ = lean_string_append(v___x_4304_, v_head_4303_);
v___x_4306_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2));
v___x_4307_ = lean_string_append(v___x_4305_, v___x_4306_);
return v___x_4307_;
}
else
{
lean_object* v_head_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; uint32_t v___x_4312_; lean_object* v___x_4313_; 
v_head_4308_ = lean_ctor_get(v_x_4300_, 0);
v___x_4309_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1));
v___x_4310_ = lean_string_append(v___x_4309_, v_head_4308_);
v___x_4311_ = l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(v___x_4310_, v_tail_4302_);
v___x_4312_ = 93;
v___x_4313_ = lean_string_push(v___x_4311_, v___x_4312_);
return v___x_4313_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___boxed(lean_object* v_x_4314_){
_start:
{
lean_object* v_res_4315_; 
v_res_4315_ = l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(v_x_4314_);
lean_dec(v_x_4314_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(lean_object* v_init_4316_, lean_object* v_x_4317_){
_start:
{
if (lean_obj_tag(v_x_4317_) == 0)
{
lean_object* v_k_4318_; lean_object* v_v_4319_; lean_object* v_l_4320_; lean_object* v_r_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; 
v_k_4318_ = lean_ctor_get(v_x_4317_, 1);
v_v_4319_ = lean_ctor_get(v_x_4317_, 2);
v_l_4320_ = lean_ctor_get(v_x_4317_, 3);
v_r_4321_ = lean_ctor_get(v_x_4317_, 4);
v___x_4322_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(v_init_4316_, v_r_4321_);
lean_inc(v_v_4319_);
lean_inc(v_k_4318_);
v___x_4323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4323_, 0, v_k_4318_);
lean_ctor_set(v___x_4323_, 1, v_v_4319_);
v___x_4324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4324_, 0, v___x_4323_);
lean_ctor_set(v___x_4324_, 1, v___x_4322_);
v_init_4316_ = v___x_4324_;
v_x_4317_ = v_l_4320_;
goto _start;
}
else
{
return v_init_4316_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___boxed(lean_object* v_init_4326_, lean_object* v_x_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(v_init_4326_, v_x_4327_);
lean_dec(v_x_4327_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(lean_object* v_init_4329_, lean_object* v_x_4330_){
_start:
{
if (lean_obj_tag(v_x_4330_) == 0)
{
lean_object* v_k_4331_; lean_object* v_l_4332_; lean_object* v_r_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
v_k_4331_ = lean_ctor_get(v_x_4330_, 1);
v_l_4332_ = lean_ctor_get(v_x_4330_, 3);
v_r_4333_ = lean_ctor_get(v_x_4330_, 4);
v___x_4334_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(v_init_4329_, v_r_4333_);
lean_inc(v_k_4331_);
v___x_4335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4335_, 0, v_k_4331_);
lean_ctor_set(v___x_4335_, 1, v___x_4334_);
v_init_4329_ = v___x_4335_;
v_x_4330_ = v_l_4332_;
goto _start;
}
else
{
return v_init_4329_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0___boxed(lean_object* v_init_4337_, lean_object* v_x_4338_){
_start:
{
lean_object* v_res_4339_; 
v_res_4339_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(v_init_4337_, v_x_4338_);
lean_dec(v_x_4338_);
return v_res_4339_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(lean_object* v_line_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4371_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2));
v___x_4372_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_4371_, v_line_4365_);
if (lean_obj_tag(v___x_4372_) == 1)
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_5246_; 
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_5246_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_5246_ == 0)
{
v___x_4375_ = v___x_4372_;
v_isShared_4376_ = v_isSharedCheck_5246_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_5246_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
if (lean_obj_tag(v_a_4373_) == 5)
{
lean_object* v_kvPairs_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_5245_; 
v_kvPairs_4377_ = lean_ctor_get(v_a_4373_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v_a_4373_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_4379_ = v_a_4373_;
v_isShared_4380_ = v_isSharedCheck_5245_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_kvPairs_4377_);
lean_dec(v_a_4373_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_5245_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v_fst_4394_; lean_object* v_snd_4395_; lean_object* v_tail_4396_; lean_object* v___y_5212_; lean_object* v___x_5217_; lean_object* v___x_5218_; 
v___x_5217_ = lean_box(0);
v___x_5218_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(v___x_5217_, v_kvPairs_4377_);
if (lean_obj_tag(v___x_5218_) == 1)
{
lean_object* v_tail_5219_; 
v_tail_5219_ = lean_ctor_get(v___x_5218_, 1);
lean_inc(v_tail_5219_);
if (lean_obj_tag(v_tail_5219_) == 1)
{
lean_object* v_head_5220_; lean_object* v_head_5221_; lean_object* v_tail_5222_; lean_object* v___x_5224_; uint8_t v_isShared_5225_; uint8_t v_isSharedCheck_5243_; 
v_head_5220_ = lean_ctor_get(v_tail_5219_, 0);
lean_inc(v_head_5220_);
v_head_5221_ = lean_ctor_get(v___x_5218_, 0);
lean_inc(v_head_5221_);
v_tail_5222_ = lean_ctor_get(v_tail_5219_, 1);
v_isSharedCheck_5243_ = !lean_is_exclusive(v_tail_5219_);
if (v_isSharedCheck_5243_ == 0)
{
lean_object* v_unused_5244_; 
v_unused_5244_ = lean_ctor_get(v_tail_5219_, 0);
lean_dec(v_unused_5244_);
v___x_5224_ = v_tail_5219_;
v_isShared_5225_ = v_isSharedCheck_5243_;
goto v_resetjp_5223_;
}
else
{
lean_inc(v_tail_5222_);
lean_dec(v_tail_5219_);
v___x_5224_ = lean_box(0);
v_isShared_5225_ = v_isSharedCheck_5243_;
goto v_resetjp_5223_;
}
v_resetjp_5223_:
{
lean_object* v_fst_5226_; lean_object* v_snd_5227_; lean_object* v___x_5228_; uint8_t v___x_5229_; 
v_fst_5226_ = lean_ctor_get(v_head_5220_, 0);
lean_inc(v_fst_5226_);
v_snd_5227_ = lean_ctor_get(v_head_5220_, 1);
lean_inc(v_snd_5227_);
lean_dec(v_head_5220_);
v___x_5228_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1));
v___x_5229_ = lean_string_dec_eq(v_fst_5226_, v___x_5228_);
if (v___x_5229_ == 0)
{
lean_object* v___x_5230_; uint8_t v___x_5231_; 
v___x_5230_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3));
v___x_5231_ = lean_string_dec_eq(v_fst_5226_, v___x_5230_);
if (v___x_5231_ == 0)
{
lean_object* v___x_5232_; uint8_t v___x_5233_; 
v___x_5232_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2));
v___x_5233_ = lean_string_dec_eq(v_fst_5226_, v___x_5232_);
lean_dec(v_fst_5226_);
if (v___x_5233_ == 0)
{
lean_dec(v_snd_5227_);
lean_del_object(v___x_5224_);
lean_dec(v_tail_5222_);
lean_dec(v_head_5221_);
v___y_5212_ = v___x_5218_;
goto v___jp_5211_;
}
else
{
if (lean_obj_tag(v_tail_5222_) == 0)
{
lean_object* v___x_5235_; 
lean_dec_ref_known(v___x_5218_, 2);
if (v_isShared_5225_ == 0)
{
lean_ctor_set(v___x_5224_, 0, v_head_5221_);
v___x_5235_ = v___x_5224_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5236_; 
v_reuseFailAlloc_5236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5236_, 0, v_head_5221_);
lean_ctor_set(v_reuseFailAlloc_5236_, 1, v_tail_5222_);
v___x_5235_ = v_reuseFailAlloc_5236_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
v_fst_4394_ = v___x_5232_;
v_snd_4395_ = v_snd_5227_;
v_tail_4396_ = v___x_5235_;
goto v___jp_4393_;
}
}
else
{
lean_dec(v_snd_5227_);
lean_del_object(v___x_5224_);
lean_dec(v_tail_5222_);
lean_dec(v_head_5221_);
v___y_5212_ = v___x_5218_;
goto v___jp_5211_;
}
}
}
else
{
lean_dec(v_fst_5226_);
if (lean_obj_tag(v_tail_5222_) == 0)
{
lean_object* v___x_5238_; 
lean_dec_ref_known(v___x_5218_, 2);
if (v_isShared_5225_ == 0)
{
lean_ctor_set(v___x_5224_, 0, v_head_5221_);
v___x_5238_ = v___x_5224_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_head_5221_);
lean_ctor_set(v_reuseFailAlloc_5239_, 1, v_tail_5222_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
v_fst_4394_ = v___x_5230_;
v_snd_4395_ = v_snd_5227_;
v_tail_4396_ = v___x_5238_;
goto v___jp_4393_;
}
}
else
{
lean_dec(v_snd_5227_);
lean_del_object(v___x_5224_);
lean_dec(v_tail_5222_);
lean_dec(v_head_5221_);
v___y_5212_ = v___x_5218_;
goto v___jp_5211_;
}
}
}
else
{
lean_dec(v_fst_5226_);
if (lean_obj_tag(v_tail_5222_) == 0)
{
lean_object* v___x_5241_; 
lean_dec_ref_known(v___x_5218_, 2);
if (v_isShared_5225_ == 0)
{
lean_ctor_set(v___x_5224_, 0, v_head_5221_);
v___x_5241_ = v___x_5224_;
goto v_reusejp_5240_;
}
else
{
lean_object* v_reuseFailAlloc_5242_; 
v_reuseFailAlloc_5242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5242_, 0, v_head_5221_);
lean_ctor_set(v_reuseFailAlloc_5242_, 1, v_tail_5222_);
v___x_5241_ = v_reuseFailAlloc_5242_;
goto v_reusejp_5240_;
}
v_reusejp_5240_:
{
v_fst_4394_ = v___x_5228_;
v_snd_4395_ = v_snd_5227_;
v_tail_4396_ = v___x_5241_;
goto v___jp_4393_;
}
}
else
{
lean_dec(v_snd_5227_);
lean_del_object(v___x_5224_);
lean_dec(v_tail_5222_);
lean_dec(v_head_5221_);
v___y_5212_ = v___x_5218_;
goto v___jp_5211_;
}
}
}
}
else
{
lean_dec(v_tail_5219_);
v___y_5212_ = v___x_5218_;
goto v___jp_5211_;
}
}
else
{
v___y_5212_ = v___x_5218_;
goto v___jp_5211_;
}
v___jp_4381_:
{
lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4388_; 
v___x_4382_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0));
v___x_4383_ = lean_box(0);
v___x_4384_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(v___x_4383_, v_kvPairs_4377_);
lean_dec(v_kvPairs_4377_);
v___x_4385_ = l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(v___x_4384_);
lean_dec(v___x_4384_);
v___x_4386_ = lean_string_append(v___x_4382_, v___x_4385_);
lean_dec_ref(v___x_4385_);
if (v_isShared_4380_ == 0)
{
lean_ctor_set_tag(v___x_4379_, 18);
lean_ctor_set(v___x_4379_, 0, v___x_4386_);
v___x_4388_ = v___x_4379_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v___x_4386_);
v___x_4388_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
lean_object* v___x_4390_; 
if (v_isShared_4376_ == 0)
{
lean_ctor_set(v___x_4375_, 0, v___x_4388_);
v___x_4390_ = v___x_4375_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v___x_4388_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
v___jp_4393_:
{
lean_object* v___x_4397_; uint8_t v___x_4398_; 
v___x_4397_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1));
v___x_4398_ = lean_string_dec_eq(v_fst_4394_, v___x_4397_);
if (v___x_4398_ == 0)
{
lean_object* v___x_4399_; uint8_t v___x_4400_; 
v___x_4399_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2));
v___x_4400_ = lean_string_dec_eq(v_fst_4394_, v___x_4399_);
if (v___x_4400_ == 0)
{
lean_object* v___x_4401_; uint8_t v___x_4402_; 
v___x_4401_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3));
v___x_4402_ = lean_string_dec_eq(v_fst_4394_, v___x_4401_);
if (v___x_4402_ == 0)
{
lean_object* v___x_4403_; uint8_t v___x_4404_; 
v___x_4403_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4));
v___x_4404_ = lean_string_dec_eq(v_fst_4394_, v___x_4403_);
if (v___x_4404_ == 0)
{
lean_object* v___x_4405_; uint8_t v___x_4406_; 
v___x_4405_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5));
v___x_4406_ = lean_string_dec_eq(v_fst_4394_, v___x_4405_);
if (v___x_4406_ == 0)
{
lean_object* v___x_4407_; uint8_t v___x_4408_; 
v___x_4407_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6));
v___x_4408_ = lean_string_dec_eq(v_fst_4394_, v___x_4407_);
if (v___x_4408_ == 0)
{
lean_object* v___x_4409_; uint8_t v___x_4410_; 
v___x_4409_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9));
v___x_4410_ = lean_string_dec_eq(v_fst_4394_, v___x_4409_);
if (v___x_4410_ == 0)
{
lean_object* v___x_4411_; uint8_t v___x_4412_; 
v___x_4411_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7));
v___x_4412_ = lean_string_dec_eq(v_fst_4394_, v___x_4411_);
if (v___x_4412_ == 0)
{
lean_object* v___x_4413_; uint8_t v___x_4414_; 
v___x_4413_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8));
v___x_4414_ = lean_string_dec_eq(v_fst_4394_, v___x_4413_);
lean_dec_ref(v_fst_4394_);
if (v___x_4414_ == 0)
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_snd_4395_) == 5)
{
if (lean_obj_tag(v_tail_4396_) == 0)
{
lean_object* v_kvPairs_4415_; lean_object* v___x_4416_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v_kvPairs_4415_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc(v_kvPairs_4415_);
lean_dec_ref_known(v_snd_4395_, 1);
v___x_4416_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(v_kvPairs_4415_, v_a_4366_);
lean_dec(v_kvPairs_4415_);
return v___x_4416_;
}
else
{
lean_dec_ref_known(v_snd_4395_, 1);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 5)
{
if (lean_obj_tag(v_tail_4396_) == 0)
{
lean_object* v_kvPairs_4417_; lean_object* v___x_4418_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v_kvPairs_4417_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc(v_kvPairs_4417_);
lean_dec_ref_known(v_snd_4395_, 1);
v___x_4418_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(v_kvPairs_4417_, v_a_4366_);
lean_dec(v_kvPairs_4417_);
return v___x_4418_;
}
else
{
lean_dec_ref_known(v_snd_4395_, 1);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 5)
{
if (lean_obj_tag(v_tail_4396_) == 0)
{
lean_object* v_kvPairs_4419_; lean_object* v___x_4420_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v_kvPairs_4419_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc(v_kvPairs_4419_);
lean_dec_ref_known(v_snd_4395_, 1);
v___x_4420_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(v_kvPairs_4419_, v_a_4366_);
lean_dec(v_kvPairs_4419_);
return v___x_4420_;
}
else
{
lean_dec_ref_known(v_snd_4395_, 1);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 5)
{
if (lean_obj_tag(v_tail_4396_) == 0)
{
lean_object* v_kvPairs_4421_; lean_object* v___x_4422_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v_kvPairs_4421_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc(v_kvPairs_4421_);
lean_dec_ref_known(v_snd_4395_, 1);
v___x_4422_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(v_kvPairs_4421_, v_a_4366_);
lean_dec(v_kvPairs_4421_);
return v___x_4422_;
}
else
{
lean_dec_ref_known(v_snd_4395_, 1);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 5)
{
if (lean_obj_tag(v_tail_4396_) == 0)
{
lean_object* v_kvPairs_4423_; lean_object* v___x_4424_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v_kvPairs_4423_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc(v_kvPairs_4423_);
lean_dec_ref_known(v_snd_4395_, 1);
v___x_4424_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(v_kvPairs_4423_, v_a_4366_);
lean_dec(v_kvPairs_4423_);
return v___x_4424_;
}
else
{
lean_dec_ref_known(v_snd_4395_, 1);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 5)
{
if (lean_obj_tag(v_tail_4396_) == 0)
{
lean_object* v_kvPairs_4425_; lean_object* v___x_4426_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v_kvPairs_4425_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc(v_kvPairs_4425_);
lean_dec_ref_known(v_snd_4395_, 1);
v___x_4426_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(v_kvPairs_4425_, v_a_4366_);
lean_dec(v_kvPairs_4425_);
return v___x_4426_;
}
else
{
lean_dec_ref_known(v_snd_4395_, 1);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 2)
{
lean_object* v_n_4427_; lean_object* v_mantissa_4428_; lean_object* v_exponent_4429_; lean_object* v_natZero_4430_; lean_object* v_intZero_4431_; uint8_t v_isNeg_4432_; 
v_n_4427_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc_ref(v_n_4427_);
lean_dec_ref_known(v_snd_4395_, 1);
v_mantissa_4428_ = lean_ctor_get(v_n_4427_, 0);
lean_inc(v_mantissa_4428_);
v_exponent_4429_ = lean_ctor_get(v_n_4427_, 1);
lean_inc(v_exponent_4429_);
lean_dec_ref(v_n_4427_);
v_natZero_4430_ = lean_unsigned_to_nat(0u);
v_intZero_4431_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_4432_ = lean_int_dec_lt(v_mantissa_4428_, v_intZero_4431_);
if (v_isNeg_4432_ == 0)
{
uint8_t v___x_4433_; 
v___x_4433_ = lean_nat_dec_eq(v_exponent_4429_, v_natZero_4430_);
lean_dec(v_exponent_4429_);
if (v___x_4433_ == 0)
{
lean_dec(v_mantissa_4428_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_tail_4396_) == 1)
{
lean_object* v_head_4434_; lean_object* v_tail_4435_; lean_object* v_fst_4436_; lean_object* v_snd_4437_; lean_object* v_a_4438_; lean_object* v___x_4439_; uint8_t v___x_4440_; 
v_head_4434_ = lean_ctor_get(v_tail_4396_, 0);
lean_inc(v_head_4434_);
v_tail_4435_ = lean_ctor_get(v_tail_4396_, 1);
lean_inc(v_tail_4435_);
lean_dec_ref_known(v_tail_4396_, 2);
v_fst_4436_ = lean_ctor_get(v_head_4434_, 0);
lean_inc(v_fst_4436_);
v_snd_4437_ = lean_ctor_get(v_head_4434_, 1);
lean_inc(v_snd_4437_);
lean_dec(v_head_4434_);
v_a_4438_ = lean_nat_abs(v_mantissa_4428_);
lean_dec(v_mantissa_4428_);
v___x_4439_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9));
v___x_4440_ = lean_string_dec_eq(v_fst_4436_, v___x_4439_);
if (v___x_4440_ == 0)
{
lean_object* v___x_4441_; uint8_t v___x_4442_; 
v___x_4441_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10));
v___x_4442_ = lean_string_dec_eq(v_fst_4436_, v___x_4441_);
if (v___x_4442_ == 0)
{
lean_object* v___x_4443_; uint8_t v___x_4444_; 
v___x_4443_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11));
v___x_4444_ = lean_string_dec_eq(v_fst_4436_, v___x_4443_);
if (v___x_4444_ == 0)
{
lean_object* v___x_4445_; uint8_t v___x_4446_; 
v___x_4445_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12));
v___x_4446_ = lean_string_dec_eq(v_fst_4436_, v___x_4445_);
if (v___x_4446_ == 0)
{
lean_object* v___x_4447_; uint8_t v___x_4448_; 
v___x_4447_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13));
v___x_4448_ = lean_string_dec_eq(v_fst_4436_, v___x_4447_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; uint8_t v___x_4450_; 
v___x_4449_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14));
v___x_4450_ = lean_string_dec_eq(v_fst_4436_, v___x_4449_);
if (v___x_4450_ == 0)
{
lean_object* v___x_4451_; uint8_t v___x_4452_; 
v___x_4451_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15));
v___x_4452_ = lean_string_dec_eq(v_fst_4436_, v___x_4451_);
if (v___x_4452_ == 0)
{
lean_object* v___x_4453_; uint8_t v___x_4454_; 
v___x_4453_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16));
v___x_4454_ = lean_string_dec_eq(v_fst_4436_, v___x_4453_);
if (v___x_4454_ == 0)
{
lean_object* v___x_4455_; uint8_t v___x_4456_; 
v___x_4455_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17));
v___x_4456_ = lean_string_dec_eq(v_fst_4436_, v___x_4455_);
if (v___x_4456_ == 0)
{
lean_object* v___x_4457_; uint8_t v___x_4458_; 
v___x_4457_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18));
v___x_4458_ = lean_string_dec_eq(v_fst_4436_, v___x_4457_);
if (v___x_4458_ == 0)
{
lean_object* v___x_4459_; uint8_t v___x_4460_; 
v___x_4459_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19));
v___x_4460_ = lean_string_dec_eq(v_fst_4436_, v___x_4459_);
lean_dec(v_fst_4436_);
if (v___x_4460_ == 0)
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4461_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4461_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4461_) == 0)
{
lean_object* v_a_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4494_; 
v_a_4462_ = lean_ctor_get(v___x_4461_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4464_ = v___x_4461_;
v_isShared_4465_ = v_isSharedCheck_4494_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_a_4462_);
lean_dec(v___x_4461_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4494_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v_snd_4466_; lean_object* v_fst_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4493_; 
v_snd_4466_ = lean_ctor_get(v_a_4462_, 1);
v_fst_4467_ = lean_ctor_get(v_a_4462_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v_a_4462_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4469_ = v_a_4462_;
v_isShared_4470_ = v_isSharedCheck_4493_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_snd_4466_);
lean_inc(v_fst_4467_);
lean_dec(v_a_4462_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4493_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
lean_object* v_stream_4471_; lean_object* v_nameMap_4472_; lean_object* v_levelMap_4473_; lean_object* v_exprMap_4474_; lean_object* v_recursorRuleMap_4475_; lean_object* v_constMap_4476_; lean_object* v_constOrder_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4492_; 
v_stream_4471_ = lean_ctor_get(v_snd_4466_, 0);
v_nameMap_4472_ = lean_ctor_get(v_snd_4466_, 1);
v_levelMap_4473_ = lean_ctor_get(v_snd_4466_, 2);
v_exprMap_4474_ = lean_ctor_get(v_snd_4466_, 3);
v_recursorRuleMap_4475_ = lean_ctor_get(v_snd_4466_, 4);
v_constMap_4476_ = lean_ctor_get(v_snd_4466_, 5);
v_constOrder_4477_ = lean_ctor_get(v_snd_4466_, 6);
v_isSharedCheck_4492_ = !lean_is_exclusive(v_snd_4466_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4479_ = v_snd_4466_;
v_isShared_4480_ = v_isSharedCheck_4492_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_constOrder_4477_);
lean_inc(v_constMap_4476_);
lean_inc(v_recursorRuleMap_4475_);
lean_inc(v_exprMap_4474_);
lean_inc(v_levelMap_4473_);
lean_inc(v_nameMap_4472_);
lean_inc(v_stream_4471_);
lean_dec(v_snd_4466_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4492_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4484_; 
v___x_4481_ = lean_box(0);
v___x_4482_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4474_, v_a_4438_, v_fst_4467_);
if (v_isShared_4480_ == 0)
{
lean_ctor_set(v___x_4479_, 3, v___x_4482_);
v___x_4484_ = v___x_4479_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v_stream_4471_);
lean_ctor_set(v_reuseFailAlloc_4491_, 1, v_nameMap_4472_);
lean_ctor_set(v_reuseFailAlloc_4491_, 2, v_levelMap_4473_);
lean_ctor_set(v_reuseFailAlloc_4491_, 3, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4491_, 4, v_recursorRuleMap_4475_);
lean_ctor_set(v_reuseFailAlloc_4491_, 5, v_constMap_4476_);
lean_ctor_set(v_reuseFailAlloc_4491_, 6, v_constOrder_4477_);
v___x_4484_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
lean_object* v___x_4486_; 
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 1, v___x_4484_);
lean_ctor_set(v___x_4469_, 0, v___x_4481_);
v___x_4486_ = v___x_4469_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4490_; 
v_reuseFailAlloc_4490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4490_, 0, v___x_4481_);
lean_ctor_set(v_reuseFailAlloc_4490_, 1, v___x_4484_);
v___x_4486_ = v_reuseFailAlloc_4490_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
lean_object* v___x_4488_; 
if (v_isShared_4465_ == 0)
{
lean_ctor_set(v___x_4464_, 0, v___x_4486_);
v___x_4488_ = v___x_4464_;
goto v_reusejp_4487_;
}
else
{
lean_object* v_reuseFailAlloc_4489_; 
v_reuseFailAlloc_4489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4489_, 0, v___x_4486_);
v___x_4488_ = v_reuseFailAlloc_4489_;
goto v_reusejp_4487_;
}
v_reusejp_4487_:
{
return v___x_4488_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4502_; 
lean_dec(v_a_4438_);
v_a_4495_ = lean_ctor_get(v___x_4461_, 0);
v_isSharedCheck_4502_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4502_ == 0)
{
v___x_4497_ = v___x_4461_;
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_a_4495_);
lean_dec(v___x_4461_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4500_; 
if (v_isShared_4498_ == 0)
{
v___x_4500_ = v___x_4497_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v_a_4495_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
return v___x_4500_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4503_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4503_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(v_snd_4437_, v_a_4366_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4536_; 
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4536_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4536_ == 0)
{
v___x_4506_ = v___x_4503_;
v_isShared_4507_ = v_isSharedCheck_4536_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4503_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4536_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v_snd_4508_; lean_object* v_fst_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4535_; 
v_snd_4508_ = lean_ctor_get(v_a_4504_, 1);
v_fst_4509_ = lean_ctor_get(v_a_4504_, 0);
v_isSharedCheck_4535_ = !lean_is_exclusive(v_a_4504_);
if (v_isSharedCheck_4535_ == 0)
{
v___x_4511_ = v_a_4504_;
v_isShared_4512_ = v_isSharedCheck_4535_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_snd_4508_);
lean_inc(v_fst_4509_);
lean_dec(v_a_4504_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4535_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v_stream_4513_; lean_object* v_nameMap_4514_; lean_object* v_levelMap_4515_; lean_object* v_exprMap_4516_; lean_object* v_recursorRuleMap_4517_; lean_object* v_constMap_4518_; lean_object* v_constOrder_4519_; lean_object* v___x_4521_; uint8_t v_isShared_4522_; uint8_t v_isSharedCheck_4534_; 
v_stream_4513_ = lean_ctor_get(v_snd_4508_, 0);
v_nameMap_4514_ = lean_ctor_get(v_snd_4508_, 1);
v_levelMap_4515_ = lean_ctor_get(v_snd_4508_, 2);
v_exprMap_4516_ = lean_ctor_get(v_snd_4508_, 3);
v_recursorRuleMap_4517_ = lean_ctor_get(v_snd_4508_, 4);
v_constMap_4518_ = lean_ctor_get(v_snd_4508_, 5);
v_constOrder_4519_ = lean_ctor_get(v_snd_4508_, 6);
v_isSharedCheck_4534_ = !lean_is_exclusive(v_snd_4508_);
if (v_isSharedCheck_4534_ == 0)
{
v___x_4521_ = v_snd_4508_;
v_isShared_4522_ = v_isSharedCheck_4534_;
goto v_resetjp_4520_;
}
else
{
lean_inc(v_constOrder_4519_);
lean_inc(v_constMap_4518_);
lean_inc(v_recursorRuleMap_4517_);
lean_inc(v_exprMap_4516_);
lean_inc(v_levelMap_4515_);
lean_inc(v_nameMap_4514_);
lean_inc(v_stream_4513_);
lean_dec(v_snd_4508_);
v___x_4521_ = lean_box(0);
v_isShared_4522_ = v_isSharedCheck_4534_;
goto v_resetjp_4520_;
}
v_resetjp_4520_:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4526_; 
v___x_4523_ = lean_box(0);
v___x_4524_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4516_, v_a_4438_, v_fst_4509_);
if (v_isShared_4522_ == 0)
{
lean_ctor_set(v___x_4521_, 3, v___x_4524_);
v___x_4526_ = v___x_4521_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v_stream_4513_);
lean_ctor_set(v_reuseFailAlloc_4533_, 1, v_nameMap_4514_);
lean_ctor_set(v_reuseFailAlloc_4533_, 2, v_levelMap_4515_);
lean_ctor_set(v_reuseFailAlloc_4533_, 3, v___x_4524_);
lean_ctor_set(v_reuseFailAlloc_4533_, 4, v_recursorRuleMap_4517_);
lean_ctor_set(v_reuseFailAlloc_4533_, 5, v_constMap_4518_);
lean_ctor_set(v_reuseFailAlloc_4533_, 6, v_constOrder_4519_);
v___x_4526_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
lean_object* v___x_4528_; 
if (v_isShared_4512_ == 0)
{
lean_ctor_set(v___x_4511_, 1, v___x_4526_);
lean_ctor_set(v___x_4511_, 0, v___x_4523_);
v___x_4528_ = v___x_4511_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v___x_4523_);
lean_ctor_set(v_reuseFailAlloc_4532_, 1, v___x_4526_);
v___x_4528_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
lean_object* v___x_4530_; 
if (v_isShared_4507_ == 0)
{
lean_ctor_set(v___x_4506_, 0, v___x_4528_);
v___x_4530_ = v___x_4506_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v___x_4528_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4544_; 
lean_dec(v_a_4438_);
v_a_4537_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4544_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4544_ == 0)
{
v___x_4539_ = v___x_4503_;
v_isShared_4540_ = v_isSharedCheck_4544_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_a_4537_);
lean_dec(v___x_4503_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4544_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v___x_4542_; 
if (v_isShared_4540_ == 0)
{
v___x_4542_ = v___x_4539_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v_a_4537_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
return v___x_4542_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4545_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4545_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(v_snd_4437_, v_a_4366_);
if (lean_obj_tag(v___x_4545_) == 0)
{
lean_object* v_a_4546_; lean_object* v___x_4548_; uint8_t v_isShared_4549_; uint8_t v_isSharedCheck_4578_; 
v_a_4546_ = lean_ctor_get(v___x_4545_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4545_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4548_ = v___x_4545_;
v_isShared_4549_ = v_isSharedCheck_4578_;
goto v_resetjp_4547_;
}
else
{
lean_inc(v_a_4546_);
lean_dec(v___x_4545_);
v___x_4548_ = lean_box(0);
v_isShared_4549_ = v_isSharedCheck_4578_;
goto v_resetjp_4547_;
}
v_resetjp_4547_:
{
lean_object* v_snd_4550_; lean_object* v_fst_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4577_; 
v_snd_4550_ = lean_ctor_get(v_a_4546_, 1);
v_fst_4551_ = lean_ctor_get(v_a_4546_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v_a_4546_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4553_ = v_a_4546_;
v_isShared_4554_ = v_isSharedCheck_4577_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_snd_4550_);
lean_inc(v_fst_4551_);
lean_dec(v_a_4546_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4577_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v_stream_4555_; lean_object* v_nameMap_4556_; lean_object* v_levelMap_4557_; lean_object* v_exprMap_4558_; lean_object* v_recursorRuleMap_4559_; lean_object* v_constMap_4560_; lean_object* v_constOrder_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4576_; 
v_stream_4555_ = lean_ctor_get(v_snd_4550_, 0);
v_nameMap_4556_ = lean_ctor_get(v_snd_4550_, 1);
v_levelMap_4557_ = lean_ctor_get(v_snd_4550_, 2);
v_exprMap_4558_ = lean_ctor_get(v_snd_4550_, 3);
v_recursorRuleMap_4559_ = lean_ctor_get(v_snd_4550_, 4);
v_constMap_4560_ = lean_ctor_get(v_snd_4550_, 5);
v_constOrder_4561_ = lean_ctor_get(v_snd_4550_, 6);
v_isSharedCheck_4576_ = !lean_is_exclusive(v_snd_4550_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4563_ = v_snd_4550_;
v_isShared_4564_ = v_isSharedCheck_4576_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_constOrder_4561_);
lean_inc(v_constMap_4560_);
lean_inc(v_recursorRuleMap_4559_);
lean_inc(v_exprMap_4558_);
lean_inc(v_levelMap_4557_);
lean_inc(v_nameMap_4556_);
lean_inc(v_stream_4555_);
lean_dec(v_snd_4550_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4576_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4568_; 
v___x_4565_ = lean_box(0);
v___x_4566_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4558_, v_a_4438_, v_fst_4551_);
if (v_isShared_4564_ == 0)
{
lean_ctor_set(v___x_4563_, 3, v___x_4566_);
v___x_4568_ = v___x_4563_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_stream_4555_);
lean_ctor_set(v_reuseFailAlloc_4575_, 1, v_nameMap_4556_);
lean_ctor_set(v_reuseFailAlloc_4575_, 2, v_levelMap_4557_);
lean_ctor_set(v_reuseFailAlloc_4575_, 3, v___x_4566_);
lean_ctor_set(v_reuseFailAlloc_4575_, 4, v_recursorRuleMap_4559_);
lean_ctor_set(v_reuseFailAlloc_4575_, 5, v_constMap_4560_);
lean_ctor_set(v_reuseFailAlloc_4575_, 6, v_constOrder_4561_);
v___x_4568_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
lean_object* v___x_4570_; 
if (v_isShared_4554_ == 0)
{
lean_ctor_set(v___x_4553_, 1, v___x_4568_);
lean_ctor_set(v___x_4553_, 0, v___x_4565_);
v___x_4570_ = v___x_4553_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v___x_4565_);
lean_ctor_set(v_reuseFailAlloc_4574_, 1, v___x_4568_);
v___x_4570_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
lean_object* v___x_4572_; 
if (v_isShared_4549_ == 0)
{
lean_ctor_set(v___x_4548_, 0, v___x_4570_);
v___x_4572_ = v___x_4548_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v___x_4570_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4579_; lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_4586_; 
lean_dec(v_a_4438_);
v_a_4579_ = lean_ctor_get(v___x_4545_, 0);
v_isSharedCheck_4586_ = !lean_is_exclusive(v___x_4545_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4581_ = v___x_4545_;
v_isShared_4582_ = v_isSharedCheck_4586_;
goto v_resetjp_4580_;
}
else
{
lean_inc(v_a_4579_);
lean_dec(v___x_4545_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_4586_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
lean_object* v___x_4584_; 
if (v_isShared_4582_ == 0)
{
v___x_4584_ = v___x_4581_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v_a_4579_);
v___x_4584_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
return v___x_4584_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4587_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4587_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4587_) == 0)
{
lean_object* v_a_4588_; lean_object* v___x_4590_; uint8_t v_isShared_4591_; uint8_t v_isSharedCheck_4620_; 
v_a_4588_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4590_ = v___x_4587_;
v_isShared_4591_ = v_isSharedCheck_4620_;
goto v_resetjp_4589_;
}
else
{
lean_inc(v_a_4588_);
lean_dec(v___x_4587_);
v___x_4590_ = lean_box(0);
v_isShared_4591_ = v_isSharedCheck_4620_;
goto v_resetjp_4589_;
}
v_resetjp_4589_:
{
lean_object* v_snd_4592_; lean_object* v_fst_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4619_; 
v_snd_4592_ = lean_ctor_get(v_a_4588_, 1);
v_fst_4593_ = lean_ctor_get(v_a_4588_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_a_4588_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4595_ = v_a_4588_;
v_isShared_4596_ = v_isSharedCheck_4619_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_snd_4592_);
lean_inc(v_fst_4593_);
lean_dec(v_a_4588_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4619_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v_stream_4597_; lean_object* v_nameMap_4598_; lean_object* v_levelMap_4599_; lean_object* v_exprMap_4600_; lean_object* v_recursorRuleMap_4601_; lean_object* v_constMap_4602_; lean_object* v_constOrder_4603_; lean_object* v___x_4605_; uint8_t v_isShared_4606_; uint8_t v_isSharedCheck_4618_; 
v_stream_4597_ = lean_ctor_get(v_snd_4592_, 0);
v_nameMap_4598_ = lean_ctor_get(v_snd_4592_, 1);
v_levelMap_4599_ = lean_ctor_get(v_snd_4592_, 2);
v_exprMap_4600_ = lean_ctor_get(v_snd_4592_, 3);
v_recursorRuleMap_4601_ = lean_ctor_get(v_snd_4592_, 4);
v_constMap_4602_ = lean_ctor_get(v_snd_4592_, 5);
v_constOrder_4603_ = lean_ctor_get(v_snd_4592_, 6);
v_isSharedCheck_4618_ = !lean_is_exclusive(v_snd_4592_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4605_ = v_snd_4592_;
v_isShared_4606_ = v_isSharedCheck_4618_;
goto v_resetjp_4604_;
}
else
{
lean_inc(v_constOrder_4603_);
lean_inc(v_constMap_4602_);
lean_inc(v_recursorRuleMap_4601_);
lean_inc(v_exprMap_4600_);
lean_inc(v_levelMap_4599_);
lean_inc(v_nameMap_4598_);
lean_inc(v_stream_4597_);
lean_dec(v_snd_4592_);
v___x_4605_ = lean_box(0);
v_isShared_4606_ = v_isSharedCheck_4618_;
goto v_resetjp_4604_;
}
v_resetjp_4604_:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4607_ = lean_box(0);
v___x_4608_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4600_, v_a_4438_, v_fst_4593_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 3, v___x_4608_);
v___x_4610_ = v___x_4605_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_stream_4597_);
lean_ctor_set(v_reuseFailAlloc_4617_, 1, v_nameMap_4598_);
lean_ctor_set(v_reuseFailAlloc_4617_, 2, v_levelMap_4599_);
lean_ctor_set(v_reuseFailAlloc_4617_, 3, v___x_4608_);
lean_ctor_set(v_reuseFailAlloc_4617_, 4, v_recursorRuleMap_4601_);
lean_ctor_set(v_reuseFailAlloc_4617_, 5, v_constMap_4602_);
lean_ctor_set(v_reuseFailAlloc_4617_, 6, v_constOrder_4603_);
v___x_4610_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
lean_object* v___x_4612_; 
if (v_isShared_4596_ == 0)
{
lean_ctor_set(v___x_4595_, 1, v___x_4610_);
lean_ctor_set(v___x_4595_, 0, v___x_4607_);
v___x_4612_ = v___x_4595_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4607_);
lean_ctor_set(v_reuseFailAlloc_4616_, 1, v___x_4610_);
v___x_4612_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
lean_object* v___x_4614_; 
if (v_isShared_4591_ == 0)
{
lean_ctor_set(v___x_4590_, 0, v___x_4612_);
v___x_4614_ = v___x_4590_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v___x_4612_);
v___x_4614_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
return v___x_4614_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4621_; lean_object* v___x_4623_; uint8_t v_isShared_4624_; uint8_t v_isSharedCheck_4628_; 
lean_dec(v_a_4438_);
v_a_4621_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4628_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4628_ == 0)
{
v___x_4623_ = v___x_4587_;
v_isShared_4624_ = v_isSharedCheck_4628_;
goto v_resetjp_4622_;
}
else
{
lean_inc(v_a_4621_);
lean_dec(v___x_4587_);
v___x_4623_ = lean_box(0);
v_isShared_4624_ = v_isSharedCheck_4628_;
goto v_resetjp_4622_;
}
v_resetjp_4622_:
{
lean_object* v___x_4626_; 
if (v_isShared_4624_ == 0)
{
v___x_4626_ = v___x_4623_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v_a_4621_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
return v___x_4626_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4629_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4629_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4662_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4662_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4632_ = v___x_4629_;
v_isShared_4633_ = v_isSharedCheck_4662_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4629_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4662_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v_snd_4634_; lean_object* v_fst_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4661_; 
v_snd_4634_ = lean_ctor_get(v_a_4630_, 1);
v_fst_4635_ = lean_ctor_get(v_a_4630_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v_a_4630_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4637_ = v_a_4630_;
v_isShared_4638_ = v_isSharedCheck_4661_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_snd_4634_);
lean_inc(v_fst_4635_);
lean_dec(v_a_4630_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4661_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v_stream_4639_; lean_object* v_nameMap_4640_; lean_object* v_levelMap_4641_; lean_object* v_exprMap_4642_; lean_object* v_recursorRuleMap_4643_; lean_object* v_constMap_4644_; lean_object* v_constOrder_4645_; lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4660_; 
v_stream_4639_ = lean_ctor_get(v_snd_4634_, 0);
v_nameMap_4640_ = lean_ctor_get(v_snd_4634_, 1);
v_levelMap_4641_ = lean_ctor_get(v_snd_4634_, 2);
v_exprMap_4642_ = lean_ctor_get(v_snd_4634_, 3);
v_recursorRuleMap_4643_ = lean_ctor_get(v_snd_4634_, 4);
v_constMap_4644_ = lean_ctor_get(v_snd_4634_, 5);
v_constOrder_4645_ = lean_ctor_get(v_snd_4634_, 6);
v_isSharedCheck_4660_ = !lean_is_exclusive(v_snd_4634_);
if (v_isSharedCheck_4660_ == 0)
{
v___x_4647_ = v_snd_4634_;
v_isShared_4648_ = v_isSharedCheck_4660_;
goto v_resetjp_4646_;
}
else
{
lean_inc(v_constOrder_4645_);
lean_inc(v_constMap_4644_);
lean_inc(v_recursorRuleMap_4643_);
lean_inc(v_exprMap_4642_);
lean_inc(v_levelMap_4641_);
lean_inc(v_nameMap_4640_);
lean_inc(v_stream_4639_);
lean_dec(v_snd_4634_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4660_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4652_; 
v___x_4649_ = lean_box(0);
v___x_4650_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4642_, v_a_4438_, v_fst_4635_);
if (v_isShared_4648_ == 0)
{
lean_ctor_set(v___x_4647_, 3, v___x_4650_);
v___x_4652_ = v___x_4647_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4659_; 
v_reuseFailAlloc_4659_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4659_, 0, v_stream_4639_);
lean_ctor_set(v_reuseFailAlloc_4659_, 1, v_nameMap_4640_);
lean_ctor_set(v_reuseFailAlloc_4659_, 2, v_levelMap_4641_);
lean_ctor_set(v_reuseFailAlloc_4659_, 3, v___x_4650_);
lean_ctor_set(v_reuseFailAlloc_4659_, 4, v_recursorRuleMap_4643_);
lean_ctor_set(v_reuseFailAlloc_4659_, 5, v_constMap_4644_);
lean_ctor_set(v_reuseFailAlloc_4659_, 6, v_constOrder_4645_);
v___x_4652_ = v_reuseFailAlloc_4659_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
lean_object* v___x_4654_; 
if (v_isShared_4638_ == 0)
{
lean_ctor_set(v___x_4637_, 1, v___x_4652_);
lean_ctor_set(v___x_4637_, 0, v___x_4649_);
v___x_4654_ = v___x_4637_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4658_; 
v_reuseFailAlloc_4658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4658_, 0, v___x_4649_);
lean_ctor_set(v_reuseFailAlloc_4658_, 1, v___x_4652_);
v___x_4654_ = v_reuseFailAlloc_4658_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
lean_object* v___x_4656_; 
if (v_isShared_4633_ == 0)
{
lean_ctor_set(v___x_4632_, 0, v___x_4654_);
v___x_4656_ = v___x_4632_;
goto v_reusejp_4655_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v___x_4654_);
v___x_4656_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4655_;
}
v_reusejp_4655_:
{
return v___x_4656_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4670_; 
lean_dec(v_a_4438_);
v_a_4663_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4670_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4670_ == 0)
{
v___x_4665_ = v___x_4629_;
v_isShared_4666_ = v_isSharedCheck_4670_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v___x_4629_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4670_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4668_; 
if (v_isShared_4666_ == 0)
{
v___x_4668_ = v___x_4665_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v_a_4663_);
v___x_4668_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
return v___x_4668_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4671_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4671_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4671_) == 0)
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4704_; 
v_a_4672_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4674_ = v___x_4671_;
v_isShared_4675_ = v_isSharedCheck_4704_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v___x_4671_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4704_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v_snd_4676_; lean_object* v_fst_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4703_; 
v_snd_4676_ = lean_ctor_get(v_a_4672_, 1);
v_fst_4677_ = lean_ctor_get(v_a_4672_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v_a_4672_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4679_ = v_a_4672_;
v_isShared_4680_ = v_isSharedCheck_4703_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_snd_4676_);
lean_inc(v_fst_4677_);
lean_dec(v_a_4672_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4703_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v_stream_4681_; lean_object* v_nameMap_4682_; lean_object* v_levelMap_4683_; lean_object* v_exprMap_4684_; lean_object* v_recursorRuleMap_4685_; lean_object* v_constMap_4686_; lean_object* v_constOrder_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4702_; 
v_stream_4681_ = lean_ctor_get(v_snd_4676_, 0);
v_nameMap_4682_ = lean_ctor_get(v_snd_4676_, 1);
v_levelMap_4683_ = lean_ctor_get(v_snd_4676_, 2);
v_exprMap_4684_ = lean_ctor_get(v_snd_4676_, 3);
v_recursorRuleMap_4685_ = lean_ctor_get(v_snd_4676_, 4);
v_constMap_4686_ = lean_ctor_get(v_snd_4676_, 5);
v_constOrder_4687_ = lean_ctor_get(v_snd_4676_, 6);
v_isSharedCheck_4702_ = !lean_is_exclusive(v_snd_4676_);
if (v_isSharedCheck_4702_ == 0)
{
v___x_4689_ = v_snd_4676_;
v_isShared_4690_ = v_isSharedCheck_4702_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_constOrder_4687_);
lean_inc(v_constMap_4686_);
lean_inc(v_recursorRuleMap_4685_);
lean_inc(v_exprMap_4684_);
lean_inc(v_levelMap_4683_);
lean_inc(v_nameMap_4682_);
lean_inc(v_stream_4681_);
lean_dec(v_snd_4676_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4702_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4694_; 
v___x_4691_ = lean_box(0);
v___x_4692_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4684_, v_a_4438_, v_fst_4677_);
if (v_isShared_4690_ == 0)
{
lean_ctor_set(v___x_4689_, 3, v___x_4692_);
v___x_4694_ = v___x_4689_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4701_; 
v_reuseFailAlloc_4701_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4701_, 0, v_stream_4681_);
lean_ctor_set(v_reuseFailAlloc_4701_, 1, v_nameMap_4682_);
lean_ctor_set(v_reuseFailAlloc_4701_, 2, v_levelMap_4683_);
lean_ctor_set(v_reuseFailAlloc_4701_, 3, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4701_, 4, v_recursorRuleMap_4685_);
lean_ctor_set(v_reuseFailAlloc_4701_, 5, v_constMap_4686_);
lean_ctor_set(v_reuseFailAlloc_4701_, 6, v_constOrder_4687_);
v___x_4694_ = v_reuseFailAlloc_4701_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
lean_object* v___x_4696_; 
if (v_isShared_4680_ == 0)
{
lean_ctor_set(v___x_4679_, 1, v___x_4694_);
lean_ctor_set(v___x_4679_, 0, v___x_4691_);
v___x_4696_ = v___x_4679_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v___x_4691_);
lean_ctor_set(v_reuseFailAlloc_4700_, 1, v___x_4694_);
v___x_4696_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
lean_object* v___x_4698_; 
if (v_isShared_4675_ == 0)
{
lean_ctor_set(v___x_4674_, 0, v___x_4696_);
v___x_4698_ = v___x_4674_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v___x_4696_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
return v___x_4698_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4712_; 
lean_dec(v_a_4438_);
v_a_4705_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4707_ = v___x_4671_;
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_dec(v___x_4671_);
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
v_reuseFailAlloc_4711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v_a_4705_);
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
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4713_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4713_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4713_) == 0)
{
lean_object* v_a_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4746_; 
v_a_4714_ = lean_ctor_get(v___x_4713_, 0);
v_isSharedCheck_4746_ = !lean_is_exclusive(v___x_4713_);
if (v_isSharedCheck_4746_ == 0)
{
v___x_4716_ = v___x_4713_;
v_isShared_4717_ = v_isSharedCheck_4746_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_a_4714_);
lean_dec(v___x_4713_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4746_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v_snd_4718_; lean_object* v_fst_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4745_; 
v_snd_4718_ = lean_ctor_get(v_a_4714_, 1);
v_fst_4719_ = lean_ctor_get(v_a_4714_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v_a_4714_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4721_ = v_a_4714_;
v_isShared_4722_ = v_isSharedCheck_4745_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_snd_4718_);
lean_inc(v_fst_4719_);
lean_dec(v_a_4714_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4745_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v_stream_4723_; lean_object* v_nameMap_4724_; lean_object* v_levelMap_4725_; lean_object* v_exprMap_4726_; lean_object* v_recursorRuleMap_4727_; lean_object* v_constMap_4728_; lean_object* v_constOrder_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4744_; 
v_stream_4723_ = lean_ctor_get(v_snd_4718_, 0);
v_nameMap_4724_ = lean_ctor_get(v_snd_4718_, 1);
v_levelMap_4725_ = lean_ctor_get(v_snd_4718_, 2);
v_exprMap_4726_ = lean_ctor_get(v_snd_4718_, 3);
v_recursorRuleMap_4727_ = lean_ctor_get(v_snd_4718_, 4);
v_constMap_4728_ = lean_ctor_get(v_snd_4718_, 5);
v_constOrder_4729_ = lean_ctor_get(v_snd_4718_, 6);
v_isSharedCheck_4744_ = !lean_is_exclusive(v_snd_4718_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4731_ = v_snd_4718_;
v_isShared_4732_ = v_isSharedCheck_4744_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_constOrder_4729_);
lean_inc(v_constMap_4728_);
lean_inc(v_recursorRuleMap_4727_);
lean_inc(v_exprMap_4726_);
lean_inc(v_levelMap_4725_);
lean_inc(v_nameMap_4724_);
lean_inc(v_stream_4723_);
lean_dec(v_snd_4718_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4744_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4736_; 
v___x_4733_ = lean_box(0);
v___x_4734_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4726_, v_a_4438_, v_fst_4719_);
if (v_isShared_4732_ == 0)
{
lean_ctor_set(v___x_4731_, 3, v___x_4734_);
v___x_4736_ = v___x_4731_;
goto v_reusejp_4735_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_stream_4723_);
lean_ctor_set(v_reuseFailAlloc_4743_, 1, v_nameMap_4724_);
lean_ctor_set(v_reuseFailAlloc_4743_, 2, v_levelMap_4725_);
lean_ctor_set(v_reuseFailAlloc_4743_, 3, v___x_4734_);
lean_ctor_set(v_reuseFailAlloc_4743_, 4, v_recursorRuleMap_4727_);
lean_ctor_set(v_reuseFailAlloc_4743_, 5, v_constMap_4728_);
lean_ctor_set(v_reuseFailAlloc_4743_, 6, v_constOrder_4729_);
v___x_4736_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4735_;
}
v_reusejp_4735_:
{
lean_object* v___x_4738_; 
if (v_isShared_4722_ == 0)
{
lean_ctor_set(v___x_4721_, 1, v___x_4736_);
lean_ctor_set(v___x_4721_, 0, v___x_4733_);
v___x_4738_ = v___x_4721_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v___x_4733_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v___x_4736_);
v___x_4738_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
lean_object* v___x_4740_; 
if (v_isShared_4717_ == 0)
{
lean_ctor_set(v___x_4716_, 0, v___x_4738_);
v___x_4740_ = v___x_4716_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v___x_4738_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
lean_dec(v_a_4438_);
v_a_4747_ = lean_ctor_get(v___x_4713_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4713_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4713_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4713_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4755_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4755_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4755_) == 0)
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4788_; 
v_a_4756_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4788_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4788_ == 0)
{
v___x_4758_ = v___x_4755_;
v_isShared_4759_ = v_isSharedCheck_4788_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4755_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4788_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v_snd_4760_; lean_object* v_fst_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4787_; 
v_snd_4760_ = lean_ctor_get(v_a_4756_, 1);
v_fst_4761_ = lean_ctor_get(v_a_4756_, 0);
v_isSharedCheck_4787_ = !lean_is_exclusive(v_a_4756_);
if (v_isSharedCheck_4787_ == 0)
{
v___x_4763_ = v_a_4756_;
v_isShared_4764_ = v_isSharedCheck_4787_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_snd_4760_);
lean_inc(v_fst_4761_);
lean_dec(v_a_4756_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4787_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v_stream_4765_; lean_object* v_nameMap_4766_; lean_object* v_levelMap_4767_; lean_object* v_exprMap_4768_; lean_object* v_recursorRuleMap_4769_; lean_object* v_constMap_4770_; lean_object* v_constOrder_4771_; lean_object* v___x_4773_; uint8_t v_isShared_4774_; uint8_t v_isSharedCheck_4786_; 
v_stream_4765_ = lean_ctor_get(v_snd_4760_, 0);
v_nameMap_4766_ = lean_ctor_get(v_snd_4760_, 1);
v_levelMap_4767_ = lean_ctor_get(v_snd_4760_, 2);
v_exprMap_4768_ = lean_ctor_get(v_snd_4760_, 3);
v_recursorRuleMap_4769_ = lean_ctor_get(v_snd_4760_, 4);
v_constMap_4770_ = lean_ctor_get(v_snd_4760_, 5);
v_constOrder_4771_ = lean_ctor_get(v_snd_4760_, 6);
v_isSharedCheck_4786_ = !lean_is_exclusive(v_snd_4760_);
if (v_isSharedCheck_4786_ == 0)
{
v___x_4773_ = v_snd_4760_;
v_isShared_4774_ = v_isSharedCheck_4786_;
goto v_resetjp_4772_;
}
else
{
lean_inc(v_constOrder_4771_);
lean_inc(v_constMap_4770_);
lean_inc(v_recursorRuleMap_4769_);
lean_inc(v_exprMap_4768_);
lean_inc(v_levelMap_4767_);
lean_inc(v_nameMap_4766_);
lean_inc(v_stream_4765_);
lean_dec(v_snd_4760_);
v___x_4773_ = lean_box(0);
v_isShared_4774_ = v_isSharedCheck_4786_;
goto v_resetjp_4772_;
}
v_resetjp_4772_:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4778_; 
v___x_4775_ = lean_box(0);
v___x_4776_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4768_, v_a_4438_, v_fst_4761_);
if (v_isShared_4774_ == 0)
{
lean_ctor_set(v___x_4773_, 3, v___x_4776_);
v___x_4778_ = v___x_4773_;
goto v_reusejp_4777_;
}
else
{
lean_object* v_reuseFailAlloc_4785_; 
v_reuseFailAlloc_4785_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4785_, 0, v_stream_4765_);
lean_ctor_set(v_reuseFailAlloc_4785_, 1, v_nameMap_4766_);
lean_ctor_set(v_reuseFailAlloc_4785_, 2, v_levelMap_4767_);
lean_ctor_set(v_reuseFailAlloc_4785_, 3, v___x_4776_);
lean_ctor_set(v_reuseFailAlloc_4785_, 4, v_recursorRuleMap_4769_);
lean_ctor_set(v_reuseFailAlloc_4785_, 5, v_constMap_4770_);
lean_ctor_set(v_reuseFailAlloc_4785_, 6, v_constOrder_4771_);
v___x_4778_ = v_reuseFailAlloc_4785_;
goto v_reusejp_4777_;
}
v_reusejp_4777_:
{
lean_object* v___x_4780_; 
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 1, v___x_4778_);
lean_ctor_set(v___x_4763_, 0, v___x_4775_);
v___x_4780_ = v___x_4763_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v___x_4775_);
lean_ctor_set(v_reuseFailAlloc_4784_, 1, v___x_4778_);
v___x_4780_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
lean_object* v___x_4782_; 
if (v_isShared_4759_ == 0)
{
lean_ctor_set(v___x_4758_, 0, v___x_4780_);
v___x_4782_ = v___x_4758_;
goto v_reusejp_4781_;
}
else
{
lean_object* v_reuseFailAlloc_4783_; 
v_reuseFailAlloc_4783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4783_, 0, v___x_4780_);
v___x_4782_ = v_reuseFailAlloc_4783_;
goto v_reusejp_4781_;
}
v_reusejp_4781_:
{
return v___x_4782_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4796_; 
lean_dec(v_a_4438_);
v_a_4789_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4796_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4796_ == 0)
{
v___x_4791_ = v___x_4755_;
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_a_4789_);
lean_dec(v___x_4755_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v___x_4794_; 
if (v_isShared_4792_ == 0)
{
v___x_4794_ = v___x_4791_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4795_; 
v_reuseFailAlloc_4795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4795_, 0, v_a_4789_);
v___x_4794_ = v_reuseFailAlloc_4795_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
return v___x_4794_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4797_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4797_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(v_snd_4437_, v_a_4366_);
lean_dec(v_snd_4437_);
if (lean_obj_tag(v___x_4797_) == 0)
{
lean_object* v_a_4798_; lean_object* v___x_4800_; uint8_t v_isShared_4801_; uint8_t v_isSharedCheck_4830_; 
v_a_4798_ = lean_ctor_get(v___x_4797_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4797_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4800_ = v___x_4797_;
v_isShared_4801_ = v_isSharedCheck_4830_;
goto v_resetjp_4799_;
}
else
{
lean_inc(v_a_4798_);
lean_dec(v___x_4797_);
v___x_4800_ = lean_box(0);
v_isShared_4801_ = v_isSharedCheck_4830_;
goto v_resetjp_4799_;
}
v_resetjp_4799_:
{
lean_object* v_snd_4802_; lean_object* v_fst_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4829_; 
v_snd_4802_ = lean_ctor_get(v_a_4798_, 1);
v_fst_4803_ = lean_ctor_get(v_a_4798_, 0);
v_isSharedCheck_4829_ = !lean_is_exclusive(v_a_4798_);
if (v_isSharedCheck_4829_ == 0)
{
v___x_4805_ = v_a_4798_;
v_isShared_4806_ = v_isSharedCheck_4829_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_snd_4802_);
lean_inc(v_fst_4803_);
lean_dec(v_a_4798_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4829_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v_stream_4807_; lean_object* v_nameMap_4808_; lean_object* v_levelMap_4809_; lean_object* v_exprMap_4810_; lean_object* v_recursorRuleMap_4811_; lean_object* v_constMap_4812_; lean_object* v_constOrder_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4828_; 
v_stream_4807_ = lean_ctor_get(v_snd_4802_, 0);
v_nameMap_4808_ = lean_ctor_get(v_snd_4802_, 1);
v_levelMap_4809_ = lean_ctor_get(v_snd_4802_, 2);
v_exprMap_4810_ = lean_ctor_get(v_snd_4802_, 3);
v_recursorRuleMap_4811_ = lean_ctor_get(v_snd_4802_, 4);
v_constMap_4812_ = lean_ctor_get(v_snd_4802_, 5);
v_constOrder_4813_ = lean_ctor_get(v_snd_4802_, 6);
v_isSharedCheck_4828_ = !lean_is_exclusive(v_snd_4802_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4815_ = v_snd_4802_;
v_isShared_4816_ = v_isSharedCheck_4828_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_constOrder_4813_);
lean_inc(v_constMap_4812_);
lean_inc(v_recursorRuleMap_4811_);
lean_inc(v_exprMap_4810_);
lean_inc(v_levelMap_4809_);
lean_inc(v_nameMap_4808_);
lean_inc(v_stream_4807_);
lean_dec(v_snd_4802_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4828_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4820_; 
v___x_4817_ = lean_box(0);
v___x_4818_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4810_, v_a_4438_, v_fst_4803_);
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 3, v___x_4818_);
v___x_4820_ = v___x_4815_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_stream_4807_);
lean_ctor_set(v_reuseFailAlloc_4827_, 1, v_nameMap_4808_);
lean_ctor_set(v_reuseFailAlloc_4827_, 2, v_levelMap_4809_);
lean_ctor_set(v_reuseFailAlloc_4827_, 3, v___x_4818_);
lean_ctor_set(v_reuseFailAlloc_4827_, 4, v_recursorRuleMap_4811_);
lean_ctor_set(v_reuseFailAlloc_4827_, 5, v_constMap_4812_);
lean_ctor_set(v_reuseFailAlloc_4827_, 6, v_constOrder_4813_);
v___x_4820_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
lean_object* v___x_4822_; 
if (v_isShared_4806_ == 0)
{
lean_ctor_set(v___x_4805_, 1, v___x_4820_);
lean_ctor_set(v___x_4805_, 0, v___x_4817_);
v___x_4822_ = v___x_4805_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v___x_4817_);
lean_ctor_set(v_reuseFailAlloc_4826_, 1, v___x_4820_);
v___x_4822_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
lean_object* v___x_4824_; 
if (v_isShared_4801_ == 0)
{
lean_ctor_set(v___x_4800_, 0, v___x_4822_);
v___x_4824_ = v___x_4800_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v___x_4822_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4831_; lean_object* v___x_4833_; uint8_t v_isShared_4834_; uint8_t v_isSharedCheck_4838_; 
lean_dec(v_a_4438_);
v_a_4831_ = lean_ctor_get(v___x_4797_, 0);
v_isSharedCheck_4838_ = !lean_is_exclusive(v___x_4797_);
if (v_isSharedCheck_4838_ == 0)
{
v___x_4833_ = v___x_4797_;
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
else
{
lean_inc(v_a_4831_);
lean_dec(v___x_4797_);
v___x_4833_ = lean_box(0);
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
v_resetjp_4832_:
{
lean_object* v___x_4836_; 
if (v_isShared_4834_ == 0)
{
v___x_4836_ = v___x_4833_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v_a_4831_);
v___x_4836_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
return v___x_4836_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4839_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4839_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(v_snd_4437_, v_a_4366_);
if (lean_obj_tag(v___x_4839_) == 0)
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4872_; 
v_a_4840_ = lean_ctor_get(v___x_4839_, 0);
v_isSharedCheck_4872_ = !lean_is_exclusive(v___x_4839_);
if (v_isSharedCheck_4872_ == 0)
{
v___x_4842_ = v___x_4839_;
v_isShared_4843_ = v_isSharedCheck_4872_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4839_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4872_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v_snd_4844_; lean_object* v_fst_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4871_; 
v_snd_4844_ = lean_ctor_get(v_a_4840_, 1);
v_fst_4845_ = lean_ctor_get(v_a_4840_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v_a_4840_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4847_ = v_a_4840_;
v_isShared_4848_ = v_isSharedCheck_4871_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_snd_4844_);
lean_inc(v_fst_4845_);
lean_dec(v_a_4840_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4871_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v_stream_4849_; lean_object* v_nameMap_4850_; lean_object* v_levelMap_4851_; lean_object* v_exprMap_4852_; lean_object* v_recursorRuleMap_4853_; lean_object* v_constMap_4854_; lean_object* v_constOrder_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4870_; 
v_stream_4849_ = lean_ctor_get(v_snd_4844_, 0);
v_nameMap_4850_ = lean_ctor_get(v_snd_4844_, 1);
v_levelMap_4851_ = lean_ctor_get(v_snd_4844_, 2);
v_exprMap_4852_ = lean_ctor_get(v_snd_4844_, 3);
v_recursorRuleMap_4853_ = lean_ctor_get(v_snd_4844_, 4);
v_constMap_4854_ = lean_ctor_get(v_snd_4844_, 5);
v_constOrder_4855_ = lean_ctor_get(v_snd_4844_, 6);
v_isSharedCheck_4870_ = !lean_is_exclusive(v_snd_4844_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4857_ = v_snd_4844_;
v_isShared_4858_ = v_isSharedCheck_4870_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_constOrder_4855_);
lean_inc(v_constMap_4854_);
lean_inc(v_recursorRuleMap_4853_);
lean_inc(v_exprMap_4852_);
lean_inc(v_levelMap_4851_);
lean_inc(v_nameMap_4850_);
lean_inc(v_stream_4849_);
lean_dec(v_snd_4844_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4870_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4862_; 
v___x_4859_ = lean_box(0);
v___x_4860_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4852_, v_a_4438_, v_fst_4845_);
if (v_isShared_4858_ == 0)
{
lean_ctor_set(v___x_4857_, 3, v___x_4860_);
v___x_4862_ = v___x_4857_;
goto v_reusejp_4861_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_stream_4849_);
lean_ctor_set(v_reuseFailAlloc_4869_, 1, v_nameMap_4850_);
lean_ctor_set(v_reuseFailAlloc_4869_, 2, v_levelMap_4851_);
lean_ctor_set(v_reuseFailAlloc_4869_, 3, v___x_4860_);
lean_ctor_set(v_reuseFailAlloc_4869_, 4, v_recursorRuleMap_4853_);
lean_ctor_set(v_reuseFailAlloc_4869_, 5, v_constMap_4854_);
lean_ctor_set(v_reuseFailAlloc_4869_, 6, v_constOrder_4855_);
v___x_4862_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4861_;
}
v_reusejp_4861_:
{
lean_object* v___x_4864_; 
if (v_isShared_4848_ == 0)
{
lean_ctor_set(v___x_4847_, 1, v___x_4862_);
lean_ctor_set(v___x_4847_, 0, v___x_4859_);
v___x_4864_ = v___x_4847_;
goto v_reusejp_4863_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v___x_4859_);
lean_ctor_set(v_reuseFailAlloc_4868_, 1, v___x_4862_);
v___x_4864_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4863_;
}
v_reusejp_4863_:
{
lean_object* v___x_4866_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 0, v___x_4864_);
v___x_4866_ = v___x_4842_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v___x_4864_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
return v___x_4866_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4880_; 
lean_dec(v_a_4438_);
v_a_4873_ = lean_ctor_get(v___x_4839_, 0);
v_isSharedCheck_4880_ = !lean_is_exclusive(v___x_4839_);
if (v_isSharedCheck_4880_ == 0)
{
v___x_4875_ = v___x_4839_;
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_a_4873_);
lean_dec(v___x_4839_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4878_; 
if (v_isShared_4876_ == 0)
{
v___x_4878_ = v___x_4875_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v_a_4873_);
v___x_4878_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
return v___x_4878_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4436_);
if (lean_obj_tag(v_tail_4435_) == 0)
{
lean_object* v___x_4881_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4881_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(v_snd_4437_, v_a_4366_);
if (lean_obj_tag(v___x_4881_) == 0)
{
lean_object* v_a_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4914_; 
v_a_4882_ = lean_ctor_get(v___x_4881_, 0);
v_isSharedCheck_4914_ = !lean_is_exclusive(v___x_4881_);
if (v_isSharedCheck_4914_ == 0)
{
v___x_4884_ = v___x_4881_;
v_isShared_4885_ = v_isSharedCheck_4914_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_a_4882_);
lean_dec(v___x_4881_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4914_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v_snd_4886_; lean_object* v_fst_4887_; lean_object* v___x_4889_; uint8_t v_isShared_4890_; uint8_t v_isSharedCheck_4913_; 
v_snd_4886_ = lean_ctor_get(v_a_4882_, 1);
v_fst_4887_ = lean_ctor_get(v_a_4882_, 0);
v_isSharedCheck_4913_ = !lean_is_exclusive(v_a_4882_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4889_ = v_a_4882_;
v_isShared_4890_ = v_isSharedCheck_4913_;
goto v_resetjp_4888_;
}
else
{
lean_inc(v_snd_4886_);
lean_inc(v_fst_4887_);
lean_dec(v_a_4882_);
v___x_4889_ = lean_box(0);
v_isShared_4890_ = v_isSharedCheck_4913_;
goto v_resetjp_4888_;
}
v_resetjp_4888_:
{
lean_object* v_stream_4891_; lean_object* v_nameMap_4892_; lean_object* v_levelMap_4893_; lean_object* v_exprMap_4894_; lean_object* v_recursorRuleMap_4895_; lean_object* v_constMap_4896_; lean_object* v_constOrder_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4912_; 
v_stream_4891_ = lean_ctor_get(v_snd_4886_, 0);
v_nameMap_4892_ = lean_ctor_get(v_snd_4886_, 1);
v_levelMap_4893_ = lean_ctor_get(v_snd_4886_, 2);
v_exprMap_4894_ = lean_ctor_get(v_snd_4886_, 3);
v_recursorRuleMap_4895_ = lean_ctor_get(v_snd_4886_, 4);
v_constMap_4896_ = lean_ctor_get(v_snd_4886_, 5);
v_constOrder_4897_ = lean_ctor_get(v_snd_4886_, 6);
v_isSharedCheck_4912_ = !lean_is_exclusive(v_snd_4886_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_4899_ = v_snd_4886_;
v_isShared_4900_ = v_isSharedCheck_4912_;
goto v_resetjp_4898_;
}
else
{
lean_inc(v_constOrder_4897_);
lean_inc(v_constMap_4896_);
lean_inc(v_recursorRuleMap_4895_);
lean_inc(v_exprMap_4894_);
lean_inc(v_levelMap_4893_);
lean_inc(v_nameMap_4892_);
lean_inc(v_stream_4891_);
lean_dec(v_snd_4886_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4912_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4904_; 
v___x_4901_ = lean_box(0);
v___x_4902_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4894_, v_a_4438_, v_fst_4887_);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 3, v___x_4902_);
v___x_4904_ = v___x_4899_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v_stream_4891_);
lean_ctor_set(v_reuseFailAlloc_4911_, 1, v_nameMap_4892_);
lean_ctor_set(v_reuseFailAlloc_4911_, 2, v_levelMap_4893_);
lean_ctor_set(v_reuseFailAlloc_4911_, 3, v___x_4902_);
lean_ctor_set(v_reuseFailAlloc_4911_, 4, v_recursorRuleMap_4895_);
lean_ctor_set(v_reuseFailAlloc_4911_, 5, v_constMap_4896_);
lean_ctor_set(v_reuseFailAlloc_4911_, 6, v_constOrder_4897_);
v___x_4904_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
lean_object* v___x_4906_; 
if (v_isShared_4890_ == 0)
{
lean_ctor_set(v___x_4889_, 1, v___x_4904_);
lean_ctor_set(v___x_4889_, 0, v___x_4901_);
v___x_4906_ = v___x_4889_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4910_; 
v_reuseFailAlloc_4910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4910_, 0, v___x_4901_);
lean_ctor_set(v_reuseFailAlloc_4910_, 1, v___x_4904_);
v___x_4906_ = v_reuseFailAlloc_4910_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
lean_object* v___x_4908_; 
if (v_isShared_4885_ == 0)
{
lean_ctor_set(v___x_4884_, 0, v___x_4906_);
v___x_4908_ = v___x_4884_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v___x_4906_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4922_; 
lean_dec(v_a_4438_);
v_a_4915_ = lean_ctor_get(v___x_4881_, 0);
v_isSharedCheck_4922_ = !lean_is_exclusive(v___x_4881_);
if (v_isSharedCheck_4922_ == 0)
{
v___x_4917_ = v___x_4881_;
v_isShared_4918_ = v_isSharedCheck_4922_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_a_4915_);
lean_dec(v___x_4881_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4922_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4920_; 
if (v_isShared_4918_ == 0)
{
v___x_4920_ = v___x_4917_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v_a_4915_);
v___x_4920_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
return v___x_4920_;
}
}
}
}
else
{
lean_dec(v_a_4438_);
lean_dec(v_snd_4437_);
lean_dec(v_tail_4435_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_mantissa_4428_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_exponent_4429_);
lean_dec(v_mantissa_4428_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 2)
{
lean_object* v_n_4923_; lean_object* v_mantissa_4924_; lean_object* v_exponent_4925_; lean_object* v_natZero_4926_; lean_object* v_intZero_4927_; uint8_t v_isNeg_4928_; 
v_n_4923_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc_ref(v_n_4923_);
lean_dec_ref_known(v_snd_4395_, 1);
v_mantissa_4924_ = lean_ctor_get(v_n_4923_, 0);
lean_inc(v_mantissa_4924_);
v_exponent_4925_ = lean_ctor_get(v_n_4923_, 1);
lean_inc(v_exponent_4925_);
lean_dec_ref(v_n_4923_);
v_natZero_4926_ = lean_unsigned_to_nat(0u);
v_intZero_4927_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_4928_ = lean_int_dec_lt(v_mantissa_4924_, v_intZero_4927_);
if (v_isNeg_4928_ == 0)
{
uint8_t v___x_4929_; 
v___x_4929_ = lean_nat_dec_eq(v_exponent_4925_, v_natZero_4926_);
lean_dec(v_exponent_4925_);
if (v___x_4929_ == 0)
{
lean_dec(v_mantissa_4924_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_tail_4396_) == 1)
{
lean_object* v_head_4930_; lean_object* v_tail_4931_; lean_object* v_fst_4932_; lean_object* v_snd_4933_; lean_object* v_a_4934_; lean_object* v___x_4935_; uint8_t v___x_4936_; 
v_head_4930_ = lean_ctor_get(v_tail_4396_, 0);
lean_inc(v_head_4930_);
v_tail_4931_ = lean_ctor_get(v_tail_4396_, 1);
lean_inc(v_tail_4931_);
lean_dec_ref_known(v_tail_4396_, 2);
v_fst_4932_ = lean_ctor_get(v_head_4930_, 0);
lean_inc(v_fst_4932_);
v_snd_4933_ = lean_ctor_get(v_head_4930_, 1);
lean_inc(v_snd_4933_);
lean_dec(v_head_4930_);
v_a_4934_ = lean_nat_abs(v_mantissa_4924_);
lean_dec(v_mantissa_4924_);
v___x_4935_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20));
v___x_4936_ = lean_string_dec_eq(v_fst_4932_, v___x_4935_);
if (v___x_4936_ == 0)
{
lean_object* v___x_4937_; uint8_t v___x_4938_; 
v___x_4937_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21));
v___x_4938_ = lean_string_dec_eq(v_fst_4932_, v___x_4937_);
if (v___x_4938_ == 0)
{
lean_object* v___x_4939_; uint8_t v___x_4940_; 
v___x_4939_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22));
v___x_4940_ = lean_string_dec_eq(v_fst_4932_, v___x_4939_);
if (v___x_4940_ == 0)
{
lean_object* v___x_4941_; uint8_t v___x_4942_; 
v___x_4941_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23));
v___x_4942_ = lean_string_dec_eq(v_fst_4932_, v___x_4941_);
lean_dec(v_fst_4932_);
if (v___x_4942_ == 0)
{
lean_dec(v_a_4934_);
lean_dec(v_snd_4933_);
lean_dec(v_tail_4931_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_tail_4931_) == 0)
{
lean_object* v___x_4943_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4943_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(v_snd_4933_, v_a_4366_);
if (lean_obj_tag(v___x_4943_) == 0)
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4976_; 
v_a_4944_ = lean_ctor_get(v___x_4943_, 0);
v_isSharedCheck_4976_ = !lean_is_exclusive(v___x_4943_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4946_ = v___x_4943_;
v_isShared_4947_ = v_isSharedCheck_4976_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4943_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4976_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v_snd_4948_; lean_object* v_fst_4949_; lean_object* v___x_4951_; uint8_t v_isShared_4952_; uint8_t v_isSharedCheck_4975_; 
v_snd_4948_ = lean_ctor_get(v_a_4944_, 1);
v_fst_4949_ = lean_ctor_get(v_a_4944_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v_a_4944_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4951_ = v_a_4944_;
v_isShared_4952_ = v_isSharedCheck_4975_;
goto v_resetjp_4950_;
}
else
{
lean_inc(v_snd_4948_);
lean_inc(v_fst_4949_);
lean_dec(v_a_4944_);
v___x_4951_ = lean_box(0);
v_isShared_4952_ = v_isSharedCheck_4975_;
goto v_resetjp_4950_;
}
v_resetjp_4950_:
{
lean_object* v_stream_4953_; lean_object* v_nameMap_4954_; lean_object* v_levelMap_4955_; lean_object* v_exprMap_4956_; lean_object* v_recursorRuleMap_4957_; lean_object* v_constMap_4958_; lean_object* v_constOrder_4959_; lean_object* v___x_4961_; uint8_t v_isShared_4962_; uint8_t v_isSharedCheck_4974_; 
v_stream_4953_ = lean_ctor_get(v_snd_4948_, 0);
v_nameMap_4954_ = lean_ctor_get(v_snd_4948_, 1);
v_levelMap_4955_ = lean_ctor_get(v_snd_4948_, 2);
v_exprMap_4956_ = lean_ctor_get(v_snd_4948_, 3);
v_recursorRuleMap_4957_ = lean_ctor_get(v_snd_4948_, 4);
v_constMap_4958_ = lean_ctor_get(v_snd_4948_, 5);
v_constOrder_4959_ = lean_ctor_get(v_snd_4948_, 6);
v_isSharedCheck_4974_ = !lean_is_exclusive(v_snd_4948_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4961_ = v_snd_4948_;
v_isShared_4962_ = v_isSharedCheck_4974_;
goto v_resetjp_4960_;
}
else
{
lean_inc(v_constOrder_4959_);
lean_inc(v_constMap_4958_);
lean_inc(v_recursorRuleMap_4957_);
lean_inc(v_exprMap_4956_);
lean_inc(v_levelMap_4955_);
lean_inc(v_nameMap_4954_);
lean_inc(v_stream_4953_);
lean_dec(v_snd_4948_);
v___x_4961_ = lean_box(0);
v_isShared_4962_ = v_isSharedCheck_4974_;
goto v_resetjp_4960_;
}
v_resetjp_4960_:
{
lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4966_; 
v___x_4963_ = lean_box(0);
v___x_4964_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_4955_, v_a_4934_, v_fst_4949_);
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 2, v___x_4964_);
v___x_4966_ = v___x_4961_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_stream_4953_);
lean_ctor_set(v_reuseFailAlloc_4973_, 1, v_nameMap_4954_);
lean_ctor_set(v_reuseFailAlloc_4973_, 2, v___x_4964_);
lean_ctor_set(v_reuseFailAlloc_4973_, 3, v_exprMap_4956_);
lean_ctor_set(v_reuseFailAlloc_4973_, 4, v_recursorRuleMap_4957_);
lean_ctor_set(v_reuseFailAlloc_4973_, 5, v_constMap_4958_);
lean_ctor_set(v_reuseFailAlloc_4973_, 6, v_constOrder_4959_);
v___x_4966_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
lean_object* v___x_4968_; 
if (v_isShared_4952_ == 0)
{
lean_ctor_set(v___x_4951_, 1, v___x_4966_);
lean_ctor_set(v___x_4951_, 0, v___x_4963_);
v___x_4968_ = v___x_4951_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4972_; 
v_reuseFailAlloc_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4972_, 0, v___x_4963_);
lean_ctor_set(v_reuseFailAlloc_4972_, 1, v___x_4966_);
v___x_4968_ = v_reuseFailAlloc_4972_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
lean_object* v___x_4970_; 
if (v_isShared_4947_ == 0)
{
lean_ctor_set(v___x_4946_, 0, v___x_4968_);
v___x_4970_ = v___x_4946_;
goto v_reusejp_4969_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v___x_4968_);
v___x_4970_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4969_;
}
v_reusejp_4969_:
{
return v___x_4970_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_4984_; 
lean_dec(v_a_4934_);
v_a_4977_ = lean_ctor_get(v___x_4943_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4943_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4979_ = v___x_4943_;
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
else
{
lean_inc(v_a_4977_);
lean_dec(v___x_4943_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4982_; 
if (v_isShared_4980_ == 0)
{
v___x_4982_ = v___x_4979_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4977_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
else
{
lean_dec(v_a_4934_);
lean_dec(v_snd_4933_);
lean_dec(v_tail_4931_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4932_);
if (lean_obj_tag(v_tail_4931_) == 0)
{
lean_object* v___x_4985_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_4985_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(v_snd_4933_, v_a_4366_);
lean_dec(v_snd_4933_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_5018_; 
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5018_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5018_ == 0)
{
v___x_4988_ = v___x_4985_;
v_isShared_4989_ = v_isSharedCheck_5018_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v___x_4985_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_5018_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v_snd_4990_; lean_object* v_fst_4991_; lean_object* v___x_4993_; uint8_t v_isShared_4994_; uint8_t v_isSharedCheck_5017_; 
v_snd_4990_ = lean_ctor_get(v_a_4986_, 1);
v_fst_4991_ = lean_ctor_get(v_a_4986_, 0);
v_isSharedCheck_5017_ = !lean_is_exclusive(v_a_4986_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_4993_ = v_a_4986_;
v_isShared_4994_ = v_isSharedCheck_5017_;
goto v_resetjp_4992_;
}
else
{
lean_inc(v_snd_4990_);
lean_inc(v_fst_4991_);
lean_dec(v_a_4986_);
v___x_4993_ = lean_box(0);
v_isShared_4994_ = v_isSharedCheck_5017_;
goto v_resetjp_4992_;
}
v_resetjp_4992_:
{
lean_object* v_stream_4995_; lean_object* v_nameMap_4996_; lean_object* v_levelMap_4997_; lean_object* v_exprMap_4998_; lean_object* v_recursorRuleMap_4999_; lean_object* v_constMap_5000_; lean_object* v_constOrder_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5016_; 
v_stream_4995_ = lean_ctor_get(v_snd_4990_, 0);
v_nameMap_4996_ = lean_ctor_get(v_snd_4990_, 1);
v_levelMap_4997_ = lean_ctor_get(v_snd_4990_, 2);
v_exprMap_4998_ = lean_ctor_get(v_snd_4990_, 3);
v_recursorRuleMap_4999_ = lean_ctor_get(v_snd_4990_, 4);
v_constMap_5000_ = lean_ctor_get(v_snd_4990_, 5);
v_constOrder_5001_ = lean_ctor_get(v_snd_4990_, 6);
v_isSharedCheck_5016_ = !lean_is_exclusive(v_snd_4990_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5003_ = v_snd_4990_;
v_isShared_5004_ = v_isSharedCheck_5016_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_constOrder_5001_);
lean_inc(v_constMap_5000_);
lean_inc(v_recursorRuleMap_4999_);
lean_inc(v_exprMap_4998_);
lean_inc(v_levelMap_4997_);
lean_inc(v_nameMap_4996_);
lean_inc(v_stream_4995_);
lean_dec(v_snd_4990_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5016_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5008_; 
v___x_5005_ = lean_box(0);
v___x_5006_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_4997_, v_a_4934_, v_fst_4991_);
if (v_isShared_5004_ == 0)
{
lean_ctor_set(v___x_5003_, 2, v___x_5006_);
v___x_5008_ = v___x_5003_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v_stream_4995_);
lean_ctor_set(v_reuseFailAlloc_5015_, 1, v_nameMap_4996_);
lean_ctor_set(v_reuseFailAlloc_5015_, 2, v___x_5006_);
lean_ctor_set(v_reuseFailAlloc_5015_, 3, v_exprMap_4998_);
lean_ctor_set(v_reuseFailAlloc_5015_, 4, v_recursorRuleMap_4999_);
lean_ctor_set(v_reuseFailAlloc_5015_, 5, v_constMap_5000_);
lean_ctor_set(v_reuseFailAlloc_5015_, 6, v_constOrder_5001_);
v___x_5008_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
lean_object* v___x_5010_; 
if (v_isShared_4994_ == 0)
{
lean_ctor_set(v___x_4993_, 1, v___x_5008_);
lean_ctor_set(v___x_4993_, 0, v___x_5005_);
v___x_5010_ = v___x_4993_;
goto v_reusejp_5009_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v___x_5005_);
lean_ctor_set(v_reuseFailAlloc_5014_, 1, v___x_5008_);
v___x_5010_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5009_;
}
v_reusejp_5009_:
{
lean_object* v___x_5012_; 
if (v_isShared_4989_ == 0)
{
lean_ctor_set(v___x_4988_, 0, v___x_5010_);
v___x_5012_ = v___x_4988_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v___x_5010_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
return v___x_5012_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
lean_dec(v_a_4934_);
v_a_5019_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_4985_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_4985_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5022_ == 0)
{
v___x_5024_ = v___x_5021_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_a_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
}
else
{
lean_dec(v_a_4934_);
lean_dec(v_snd_4933_);
lean_dec(v_tail_4931_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4932_);
if (lean_obj_tag(v_tail_4931_) == 0)
{
lean_object* v___x_5027_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_5027_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(v_snd_4933_, v_a_4366_);
lean_dec(v_snd_4933_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5060_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5060_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5060_ == 0)
{
v___x_5030_ = v___x_5027_;
v_isShared_5031_ = v_isSharedCheck_5060_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5027_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5060_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v_snd_5032_; lean_object* v_fst_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5059_; 
v_snd_5032_ = lean_ctor_get(v_a_5028_, 1);
v_fst_5033_ = lean_ctor_get(v_a_5028_, 0);
v_isSharedCheck_5059_ = !lean_is_exclusive(v_a_5028_);
if (v_isSharedCheck_5059_ == 0)
{
v___x_5035_ = v_a_5028_;
v_isShared_5036_ = v_isSharedCheck_5059_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_snd_5032_);
lean_inc(v_fst_5033_);
lean_dec(v_a_5028_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5059_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v_stream_5037_; lean_object* v_nameMap_5038_; lean_object* v_levelMap_5039_; lean_object* v_exprMap_5040_; lean_object* v_recursorRuleMap_5041_; lean_object* v_constMap_5042_; lean_object* v_constOrder_5043_; lean_object* v___x_5045_; uint8_t v_isShared_5046_; uint8_t v_isSharedCheck_5058_; 
v_stream_5037_ = lean_ctor_get(v_snd_5032_, 0);
v_nameMap_5038_ = lean_ctor_get(v_snd_5032_, 1);
v_levelMap_5039_ = lean_ctor_get(v_snd_5032_, 2);
v_exprMap_5040_ = lean_ctor_get(v_snd_5032_, 3);
v_recursorRuleMap_5041_ = lean_ctor_get(v_snd_5032_, 4);
v_constMap_5042_ = lean_ctor_get(v_snd_5032_, 5);
v_constOrder_5043_ = lean_ctor_get(v_snd_5032_, 6);
v_isSharedCheck_5058_ = !lean_is_exclusive(v_snd_5032_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5045_ = v_snd_5032_;
v_isShared_5046_ = v_isSharedCheck_5058_;
goto v_resetjp_5044_;
}
else
{
lean_inc(v_constOrder_5043_);
lean_inc(v_constMap_5042_);
lean_inc(v_recursorRuleMap_5041_);
lean_inc(v_exprMap_5040_);
lean_inc(v_levelMap_5039_);
lean_inc(v_nameMap_5038_);
lean_inc(v_stream_5037_);
lean_dec(v_snd_5032_);
v___x_5045_ = lean_box(0);
v_isShared_5046_ = v_isSharedCheck_5058_;
goto v_resetjp_5044_;
}
v_resetjp_5044_:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5050_; 
v___x_5047_ = lean_box(0);
v___x_5048_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_5039_, v_a_4934_, v_fst_5033_);
if (v_isShared_5046_ == 0)
{
lean_ctor_set(v___x_5045_, 2, v___x_5048_);
v___x_5050_ = v___x_5045_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_stream_5037_);
lean_ctor_set(v_reuseFailAlloc_5057_, 1, v_nameMap_5038_);
lean_ctor_set(v_reuseFailAlloc_5057_, 2, v___x_5048_);
lean_ctor_set(v_reuseFailAlloc_5057_, 3, v_exprMap_5040_);
lean_ctor_set(v_reuseFailAlloc_5057_, 4, v_recursorRuleMap_5041_);
lean_ctor_set(v_reuseFailAlloc_5057_, 5, v_constMap_5042_);
lean_ctor_set(v_reuseFailAlloc_5057_, 6, v_constOrder_5043_);
v___x_5050_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
lean_object* v___x_5052_; 
if (v_isShared_5036_ == 0)
{
lean_ctor_set(v___x_5035_, 1, v___x_5050_);
lean_ctor_set(v___x_5035_, 0, v___x_5047_);
v___x_5052_ = v___x_5035_;
goto v_reusejp_5051_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v___x_5047_);
lean_ctor_set(v_reuseFailAlloc_5056_, 1, v___x_5050_);
v___x_5052_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5051_;
}
v_reusejp_5051_:
{
lean_object* v___x_5054_; 
if (v_isShared_5031_ == 0)
{
lean_ctor_set(v___x_5030_, 0, v___x_5052_);
v___x_5054_ = v___x_5030_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v___x_5052_);
v___x_5054_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
return v___x_5054_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5068_; 
lean_dec(v_a_4934_);
v_a_5061_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5063_ = v___x_5027_;
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_a_5061_);
lean_dec(v___x_5027_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v___x_5066_; 
if (v_isShared_5064_ == 0)
{
v___x_5066_ = v___x_5063_;
goto v_reusejp_5065_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_a_5061_);
v___x_5066_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5065_;
}
v_reusejp_5065_:
{
return v___x_5066_;
}
}
}
}
else
{
lean_dec(v_a_4934_);
lean_dec(v_snd_4933_);
lean_dec(v_tail_4931_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_4932_);
if (lean_obj_tag(v_tail_4931_) == 0)
{
lean_object* v___x_5069_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_5069_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(v_snd_4933_, v_a_4366_);
if (lean_obj_tag(v___x_5069_) == 0)
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5102_; 
v_a_5070_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5072_ = v___x_5069_;
v_isShared_5073_ = v_isSharedCheck_5102_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5069_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5102_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v_snd_5074_; lean_object* v_fst_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5101_; 
v_snd_5074_ = lean_ctor_get(v_a_5070_, 1);
v_fst_5075_ = lean_ctor_get(v_a_5070_, 0);
v_isSharedCheck_5101_ = !lean_is_exclusive(v_a_5070_);
if (v_isSharedCheck_5101_ == 0)
{
v___x_5077_ = v_a_5070_;
v_isShared_5078_ = v_isSharedCheck_5101_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_snd_5074_);
lean_inc(v_fst_5075_);
lean_dec(v_a_5070_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5101_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
lean_object* v_stream_5079_; lean_object* v_nameMap_5080_; lean_object* v_levelMap_5081_; lean_object* v_exprMap_5082_; lean_object* v_recursorRuleMap_5083_; lean_object* v_constMap_5084_; lean_object* v_constOrder_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5100_; 
v_stream_5079_ = lean_ctor_get(v_snd_5074_, 0);
v_nameMap_5080_ = lean_ctor_get(v_snd_5074_, 1);
v_levelMap_5081_ = lean_ctor_get(v_snd_5074_, 2);
v_exprMap_5082_ = lean_ctor_get(v_snd_5074_, 3);
v_recursorRuleMap_5083_ = lean_ctor_get(v_snd_5074_, 4);
v_constMap_5084_ = lean_ctor_get(v_snd_5074_, 5);
v_constOrder_5085_ = lean_ctor_get(v_snd_5074_, 6);
v_isSharedCheck_5100_ = !lean_is_exclusive(v_snd_5074_);
if (v_isSharedCheck_5100_ == 0)
{
v___x_5087_ = v_snd_5074_;
v_isShared_5088_ = v_isSharedCheck_5100_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_constOrder_5085_);
lean_inc(v_constMap_5084_);
lean_inc(v_recursorRuleMap_5083_);
lean_inc(v_exprMap_5082_);
lean_inc(v_levelMap_5081_);
lean_inc(v_nameMap_5080_);
lean_inc(v_stream_5079_);
lean_dec(v_snd_5074_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5100_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5092_; 
v___x_5089_ = lean_box(0);
v___x_5090_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_5081_, v_a_4934_, v_fst_5075_);
if (v_isShared_5088_ == 0)
{
lean_ctor_set(v___x_5087_, 2, v___x_5090_);
v___x_5092_ = v___x_5087_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5099_; 
v_reuseFailAlloc_5099_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5099_, 0, v_stream_5079_);
lean_ctor_set(v_reuseFailAlloc_5099_, 1, v_nameMap_5080_);
lean_ctor_set(v_reuseFailAlloc_5099_, 2, v___x_5090_);
lean_ctor_set(v_reuseFailAlloc_5099_, 3, v_exprMap_5082_);
lean_ctor_set(v_reuseFailAlloc_5099_, 4, v_recursorRuleMap_5083_);
lean_ctor_set(v_reuseFailAlloc_5099_, 5, v_constMap_5084_);
lean_ctor_set(v_reuseFailAlloc_5099_, 6, v_constOrder_5085_);
v___x_5092_ = v_reuseFailAlloc_5099_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
lean_object* v___x_5094_; 
if (v_isShared_5078_ == 0)
{
lean_ctor_set(v___x_5077_, 1, v___x_5092_);
lean_ctor_set(v___x_5077_, 0, v___x_5089_);
v___x_5094_ = v___x_5077_;
goto v_reusejp_5093_;
}
else
{
lean_object* v_reuseFailAlloc_5098_; 
v_reuseFailAlloc_5098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5098_, 0, v___x_5089_);
lean_ctor_set(v_reuseFailAlloc_5098_, 1, v___x_5092_);
v___x_5094_ = v_reuseFailAlloc_5098_;
goto v_reusejp_5093_;
}
v_reusejp_5093_:
{
lean_object* v___x_5096_; 
if (v_isShared_5073_ == 0)
{
lean_ctor_set(v___x_5072_, 0, v___x_5094_);
v___x_5096_ = v___x_5072_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v___x_5094_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5110_; 
lean_dec(v_a_4934_);
v_a_5103_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5105_ = v___x_5069_;
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v___x_5069_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v___x_5108_; 
if (v_isShared_5106_ == 0)
{
v___x_5108_ = v___x_5105_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5103_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
return v___x_5108_;
}
}
}
}
else
{
lean_dec(v_a_4934_);
lean_dec(v_snd_4933_);
lean_dec(v_tail_4931_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_mantissa_4924_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_exponent_4925_);
lean_dec(v_mantissa_4924_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec_ref(v_fst_4394_);
if (lean_obj_tag(v_snd_4395_) == 2)
{
lean_object* v_n_5111_; lean_object* v_mantissa_5112_; lean_object* v_exponent_5113_; lean_object* v_natZero_5114_; lean_object* v_intZero_5115_; uint8_t v_isNeg_5116_; 
v_n_5111_ = lean_ctor_get(v_snd_4395_, 0);
lean_inc_ref(v_n_5111_);
lean_dec_ref_known(v_snd_4395_, 1);
v_mantissa_5112_ = lean_ctor_get(v_n_5111_, 0);
lean_inc(v_mantissa_5112_);
v_exponent_5113_ = lean_ctor_get(v_n_5111_, 1);
lean_inc(v_exponent_5113_);
lean_dec_ref(v_n_5111_);
v_natZero_5114_ = lean_unsigned_to_nat(0u);
v_intZero_5115_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_5116_ = lean_int_dec_lt(v_mantissa_5112_, v_intZero_5115_);
if (v_isNeg_5116_ == 0)
{
uint8_t v___x_5117_; 
v___x_5117_ = lean_nat_dec_eq(v_exponent_5113_, v_natZero_5114_);
lean_dec(v_exponent_5113_);
if (v___x_5117_ == 0)
{
lean_dec(v_mantissa_5112_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_tail_4396_) == 1)
{
lean_object* v_head_5118_; lean_object* v_tail_5119_; lean_object* v_fst_5120_; lean_object* v_snd_5121_; lean_object* v_a_5122_; lean_object* v___x_5123_; uint8_t v___x_5124_; 
v_head_5118_ = lean_ctor_get(v_tail_4396_, 0);
lean_inc(v_head_5118_);
v_tail_5119_ = lean_ctor_get(v_tail_4396_, 1);
lean_inc(v_tail_5119_);
lean_dec_ref_known(v_tail_4396_, 2);
v_fst_5120_ = lean_ctor_get(v_head_5118_, 0);
lean_inc(v_fst_5120_);
v_snd_5121_ = lean_ctor_get(v_head_5118_, 1);
lean_inc(v_snd_5121_);
lean_dec(v_head_5118_);
v_a_5122_ = lean_nat_abs(v_mantissa_5112_);
lean_dec(v_mantissa_5112_);
v___x_5123_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4));
v___x_5124_ = lean_string_dec_eq(v_fst_5120_, v___x_5123_);
if (v___x_5124_ == 0)
{
lean_object* v___x_5125_; uint8_t v___x_5126_; 
v___x_5125_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24));
v___x_5126_ = lean_string_dec_eq(v_fst_5120_, v___x_5125_);
lean_dec(v_fst_5120_);
if (v___x_5126_ == 0)
{
lean_dec(v_a_5122_);
lean_dec(v_snd_5121_);
lean_dec(v_tail_5119_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
else
{
if (lean_obj_tag(v_tail_5119_) == 0)
{
lean_object* v___x_5127_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_5127_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(v_snd_5121_, v_a_4366_);
lean_dec(v_snd_5121_);
if (lean_obj_tag(v___x_5127_) == 0)
{
lean_object* v_a_5128_; lean_object* v___x_5130_; uint8_t v_isShared_5131_; uint8_t v_isSharedCheck_5160_; 
v_a_5128_ = lean_ctor_get(v___x_5127_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5127_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5130_ = v___x_5127_;
v_isShared_5131_ = v_isSharedCheck_5160_;
goto v_resetjp_5129_;
}
else
{
lean_inc(v_a_5128_);
lean_dec(v___x_5127_);
v___x_5130_ = lean_box(0);
v_isShared_5131_ = v_isSharedCheck_5160_;
goto v_resetjp_5129_;
}
v_resetjp_5129_:
{
lean_object* v_snd_5132_; lean_object* v_fst_5133_; lean_object* v___x_5135_; uint8_t v_isShared_5136_; uint8_t v_isSharedCheck_5159_; 
v_snd_5132_ = lean_ctor_get(v_a_5128_, 1);
v_fst_5133_ = lean_ctor_get(v_a_5128_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v_a_5128_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5135_ = v_a_5128_;
v_isShared_5136_ = v_isSharedCheck_5159_;
goto v_resetjp_5134_;
}
else
{
lean_inc(v_snd_5132_);
lean_inc(v_fst_5133_);
lean_dec(v_a_5128_);
v___x_5135_ = lean_box(0);
v_isShared_5136_ = v_isSharedCheck_5159_;
goto v_resetjp_5134_;
}
v_resetjp_5134_:
{
lean_object* v_stream_5137_; lean_object* v_nameMap_5138_; lean_object* v_levelMap_5139_; lean_object* v_exprMap_5140_; lean_object* v_recursorRuleMap_5141_; lean_object* v_constMap_5142_; lean_object* v_constOrder_5143_; lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5158_; 
v_stream_5137_ = lean_ctor_get(v_snd_5132_, 0);
v_nameMap_5138_ = lean_ctor_get(v_snd_5132_, 1);
v_levelMap_5139_ = lean_ctor_get(v_snd_5132_, 2);
v_exprMap_5140_ = lean_ctor_get(v_snd_5132_, 3);
v_recursorRuleMap_5141_ = lean_ctor_get(v_snd_5132_, 4);
v_constMap_5142_ = lean_ctor_get(v_snd_5132_, 5);
v_constOrder_5143_ = lean_ctor_get(v_snd_5132_, 6);
v_isSharedCheck_5158_ = !lean_is_exclusive(v_snd_5132_);
if (v_isSharedCheck_5158_ == 0)
{
v___x_5145_ = v_snd_5132_;
v_isShared_5146_ = v_isSharedCheck_5158_;
goto v_resetjp_5144_;
}
else
{
lean_inc(v_constOrder_5143_);
lean_inc(v_constMap_5142_);
lean_inc(v_recursorRuleMap_5141_);
lean_inc(v_exprMap_5140_);
lean_inc(v_levelMap_5139_);
lean_inc(v_nameMap_5138_);
lean_inc(v_stream_5137_);
lean_dec(v_snd_5132_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5158_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5150_; 
v___x_5147_ = lean_box(0);
v___x_5148_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_nameMap_5138_, v_a_5122_, v_fst_5133_);
if (v_isShared_5146_ == 0)
{
lean_ctor_set(v___x_5145_, 1, v___x_5148_);
v___x_5150_ = v___x_5145_;
goto v_reusejp_5149_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v_stream_5137_);
lean_ctor_set(v_reuseFailAlloc_5157_, 1, v___x_5148_);
lean_ctor_set(v_reuseFailAlloc_5157_, 2, v_levelMap_5139_);
lean_ctor_set(v_reuseFailAlloc_5157_, 3, v_exprMap_5140_);
lean_ctor_set(v_reuseFailAlloc_5157_, 4, v_recursorRuleMap_5141_);
lean_ctor_set(v_reuseFailAlloc_5157_, 5, v_constMap_5142_);
lean_ctor_set(v_reuseFailAlloc_5157_, 6, v_constOrder_5143_);
v___x_5150_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5149_;
}
v_reusejp_5149_:
{
lean_object* v___x_5152_; 
if (v_isShared_5136_ == 0)
{
lean_ctor_set(v___x_5135_, 1, v___x_5150_);
lean_ctor_set(v___x_5135_, 0, v___x_5147_);
v___x_5152_ = v___x_5135_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v___x_5147_);
lean_ctor_set(v_reuseFailAlloc_5156_, 1, v___x_5150_);
v___x_5152_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
lean_object* v___x_5154_; 
if (v_isShared_5131_ == 0)
{
lean_ctor_set(v___x_5130_, 0, v___x_5152_);
v___x_5154_ = v___x_5130_;
goto v_reusejp_5153_;
}
else
{
lean_object* v_reuseFailAlloc_5155_; 
v_reuseFailAlloc_5155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5155_, 0, v___x_5152_);
v___x_5154_ = v_reuseFailAlloc_5155_;
goto v_reusejp_5153_;
}
v_reusejp_5153_:
{
return v___x_5154_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5168_; 
lean_dec(v_a_5122_);
v_a_5161_ = lean_ctor_get(v___x_5127_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v___x_5127_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5163_ = v___x_5127_;
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v___x_5127_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
return v___x_5166_;
}
}
}
}
else
{
lean_dec(v_a_5122_);
lean_dec(v_snd_5121_);
lean_dec(v_tail_5119_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_fst_5120_);
if (lean_obj_tag(v_tail_5119_) == 0)
{
lean_object* v___x_5169_; 
lean_del_object(v___x_4379_);
lean_dec(v_kvPairs_4377_);
lean_del_object(v___x_4375_);
v___x_5169_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(v_snd_5121_, v_a_4366_);
lean_dec(v_snd_5121_);
if (lean_obj_tag(v___x_5169_) == 0)
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5202_; 
v_a_5170_ = lean_ctor_get(v___x_5169_, 0);
v_isSharedCheck_5202_ = !lean_is_exclusive(v___x_5169_);
if (v_isSharedCheck_5202_ == 0)
{
v___x_5172_ = v___x_5169_;
v_isShared_5173_ = v_isSharedCheck_5202_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v___x_5169_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5202_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v_snd_5174_; lean_object* v_fst_5175_; lean_object* v___x_5177_; uint8_t v_isShared_5178_; uint8_t v_isSharedCheck_5201_; 
v_snd_5174_ = lean_ctor_get(v_a_5170_, 1);
v_fst_5175_ = lean_ctor_get(v_a_5170_, 0);
v_isSharedCheck_5201_ = !lean_is_exclusive(v_a_5170_);
if (v_isSharedCheck_5201_ == 0)
{
v___x_5177_ = v_a_5170_;
v_isShared_5178_ = v_isSharedCheck_5201_;
goto v_resetjp_5176_;
}
else
{
lean_inc(v_snd_5174_);
lean_inc(v_fst_5175_);
lean_dec(v_a_5170_);
v___x_5177_ = lean_box(0);
v_isShared_5178_ = v_isSharedCheck_5201_;
goto v_resetjp_5176_;
}
v_resetjp_5176_:
{
lean_object* v_stream_5179_; lean_object* v_nameMap_5180_; lean_object* v_levelMap_5181_; lean_object* v_exprMap_5182_; lean_object* v_recursorRuleMap_5183_; lean_object* v_constMap_5184_; lean_object* v_constOrder_5185_; lean_object* v___x_5187_; uint8_t v_isShared_5188_; uint8_t v_isSharedCheck_5200_; 
v_stream_5179_ = lean_ctor_get(v_snd_5174_, 0);
v_nameMap_5180_ = lean_ctor_get(v_snd_5174_, 1);
v_levelMap_5181_ = lean_ctor_get(v_snd_5174_, 2);
v_exprMap_5182_ = lean_ctor_get(v_snd_5174_, 3);
v_recursorRuleMap_5183_ = lean_ctor_get(v_snd_5174_, 4);
v_constMap_5184_ = lean_ctor_get(v_snd_5174_, 5);
v_constOrder_5185_ = lean_ctor_get(v_snd_5174_, 6);
v_isSharedCheck_5200_ = !lean_is_exclusive(v_snd_5174_);
if (v_isSharedCheck_5200_ == 0)
{
v___x_5187_ = v_snd_5174_;
v_isShared_5188_ = v_isSharedCheck_5200_;
goto v_resetjp_5186_;
}
else
{
lean_inc(v_constOrder_5185_);
lean_inc(v_constMap_5184_);
lean_inc(v_recursorRuleMap_5183_);
lean_inc(v_exprMap_5182_);
lean_inc(v_levelMap_5181_);
lean_inc(v_nameMap_5180_);
lean_inc(v_stream_5179_);
lean_dec(v_snd_5174_);
v___x_5187_ = lean_box(0);
v_isShared_5188_ = v_isSharedCheck_5200_;
goto v_resetjp_5186_;
}
v_resetjp_5186_:
{
lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5192_; 
v___x_5189_ = lean_box(0);
v___x_5190_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_nameMap_5180_, v_a_5122_, v_fst_5175_);
if (v_isShared_5188_ == 0)
{
lean_ctor_set(v___x_5187_, 1, v___x_5190_);
v___x_5192_ = v___x_5187_;
goto v_reusejp_5191_;
}
else
{
lean_object* v_reuseFailAlloc_5199_; 
v_reuseFailAlloc_5199_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5199_, 0, v_stream_5179_);
lean_ctor_set(v_reuseFailAlloc_5199_, 1, v___x_5190_);
lean_ctor_set(v_reuseFailAlloc_5199_, 2, v_levelMap_5181_);
lean_ctor_set(v_reuseFailAlloc_5199_, 3, v_exprMap_5182_);
lean_ctor_set(v_reuseFailAlloc_5199_, 4, v_recursorRuleMap_5183_);
lean_ctor_set(v_reuseFailAlloc_5199_, 5, v_constMap_5184_);
lean_ctor_set(v_reuseFailAlloc_5199_, 6, v_constOrder_5185_);
v___x_5192_ = v_reuseFailAlloc_5199_;
goto v_reusejp_5191_;
}
v_reusejp_5191_:
{
lean_object* v___x_5194_; 
if (v_isShared_5178_ == 0)
{
lean_ctor_set(v___x_5177_, 1, v___x_5192_);
lean_ctor_set(v___x_5177_, 0, v___x_5189_);
v___x_5194_ = v___x_5177_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5198_; 
v_reuseFailAlloc_5198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5198_, 0, v___x_5189_);
lean_ctor_set(v_reuseFailAlloc_5198_, 1, v___x_5192_);
v___x_5194_ = v_reuseFailAlloc_5198_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
lean_object* v___x_5196_; 
if (v_isShared_5173_ == 0)
{
lean_ctor_set(v___x_5172_, 0, v___x_5194_);
v___x_5196_ = v___x_5172_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v___x_5194_);
v___x_5196_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
return v___x_5196_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5210_; 
lean_dec(v_a_5122_);
v_a_5203_ = lean_ctor_get(v___x_5169_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___x_5169_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5205_ = v___x_5169_;
v_isShared_5206_ = v_isSharedCheck_5210_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_a_5203_);
lean_dec(v___x_5169_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5210_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
lean_object* v___x_5208_; 
if (v_isShared_5206_ == 0)
{
v___x_5208_ = v___x_5205_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v_a_5203_);
v___x_5208_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
return v___x_5208_;
}
}
}
}
else
{
lean_dec(v_a_5122_);
lean_dec(v_snd_5121_);
lean_dec(v_tail_5119_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_mantissa_5112_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
else
{
lean_dec(v_exponent_5113_);
lean_dec(v_mantissa_5112_);
lean_dec(v_tail_4396_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
else
{
lean_dec(v_tail_4396_);
lean_dec(v_snd_4395_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
v___jp_5211_:
{
if (lean_obj_tag(v___y_5212_) == 1)
{
lean_object* v_head_5213_; lean_object* v_tail_5214_; lean_object* v_fst_5215_; lean_object* v_snd_5216_; 
v_head_5213_ = lean_ctor_get(v___y_5212_, 0);
lean_inc(v_head_5213_);
v_tail_5214_ = lean_ctor_get(v___y_5212_, 1);
lean_inc(v_tail_5214_);
lean_dec_ref_known(v___y_5212_, 2);
v_fst_5215_ = lean_ctor_get(v_head_5213_, 0);
lean_inc(v_fst_5215_);
v_snd_5216_ = lean_ctor_get(v_head_5213_, 1);
lean_inc(v_snd_5216_);
lean_dec(v_head_5213_);
v_fst_4394_ = v_fst_5215_;
v_snd_4395_ = v_snd_5216_;
v_tail_4396_ = v_tail_5214_;
goto v___jp_4393_;
}
else
{
lean_dec(v___y_5212_);
lean_dec_ref(v_a_4366_);
goto v___jp_4381_;
}
}
}
}
else
{
lean_del_object(v___x_4375_);
lean_dec(v_a_4373_);
lean_dec_ref(v_a_4366_);
goto v___jp_4368_;
}
}
}
else
{
lean_dec_ref(v___x_4372_);
lean_dec_ref(v_a_4366_);
goto v___jp_4368_;
}
v___jp_4368_:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4369_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1));
v___x_4370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4369_);
return v___x_4370_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___boxed(lean_object* v_line_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_){
_start:
{
lean_object* v_res_5250_; 
v_res_5250_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(v_line_5247_, v_a_5248_);
return v_res_5250_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(lean_object* v_a_5251_){
_start:
{
lean_object* v_stream_5253_; lean_object* v_getLine_5254_; lean_object* v___x_5255_; 
v_stream_5253_ = lean_ctor_get(v_a_5251_, 0);
v_getLine_5254_ = lean_ctor_get(v_stream_5253_, 3);
lean_inc_ref(v_getLine_5254_);
v___x_5255_ = lean_apply_1(v_getLine_5254_, lean_box(0));
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_object* v_a_5256_; lean_object* v___x_5258_; uint8_t v_isShared_5259_; uint8_t v_isSharedCheck_5272_; 
v_a_5256_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5272_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5272_ == 0)
{
v___x_5258_ = v___x_5255_;
v_isShared_5259_ = v_isSharedCheck_5272_;
goto v_resetjp_5257_;
}
else
{
lean_inc(v_a_5256_);
lean_dec(v___x_5255_);
v___x_5258_ = lean_box(0);
v_isShared_5259_ = v_isSharedCheck_5272_;
goto v_resetjp_5257_;
}
v_resetjp_5257_:
{
lean_object* v___x_5260_; lean_object* v___x_5261_; uint8_t v___x_5262_; 
v___x_5260_ = lean_string_utf8_byte_size(v_a_5256_);
v___x_5261_ = lean_unsigned_to_nat(0u);
v___x_5262_ = lean_nat_dec_eq(v___x_5260_, v___x_5261_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5263_; 
lean_del_object(v___x_5258_);
v___x_5263_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(v_a_5256_, v_a_5251_);
if (lean_obj_tag(v___x_5263_) == 0)
{
lean_object* v_a_5264_; lean_object* v_snd_5265_; 
v_a_5264_ = lean_ctor_get(v___x_5263_, 0);
lean_inc(v_a_5264_);
lean_dec_ref_known(v___x_5263_, 1);
v_snd_5265_ = lean_ctor_get(v_a_5264_, 1);
lean_inc(v_snd_5265_);
lean_dec(v_a_5264_);
v_a_5251_ = v_snd_5265_;
goto _start;
}
else
{
return v___x_5263_;
}
}
else
{
lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5270_; 
lean_dec(v_a_5256_);
v___x_5267_ = lean_box(0);
v___x_5268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5268_, 0, v___x_5267_);
lean_ctor_set(v___x_5268_, 1, v_a_5251_);
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 0, v___x_5268_);
v___x_5270_ = v___x_5258_;
goto v_reusejp_5269_;
}
else
{
lean_object* v_reuseFailAlloc_5271_; 
v_reuseFailAlloc_5271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5271_, 0, v___x_5268_);
v___x_5270_ = v_reuseFailAlloc_5271_;
goto v_reusejp_5269_;
}
v_reusejp_5269_:
{
return v___x_5270_;
}
}
}
}
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5280_; 
lean_dec_ref(v_a_5251_);
v_a_5273_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5275_ = v___x_5255_;
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5255_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5278_; 
if (v_isShared_5276_ == 0)
{
v___x_5278_ = v___x_5275_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5273_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
return v___x_5278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go___boxed(lean_object* v_a_5281_, lean_object* v_a_5282_){
_start:
{
lean_object* v_res_5283_; 
v_res_5283_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(v_a_5281_);
return v_res_5283_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems(lean_object* v_a_5284_){
_start:
{
lean_object* v___x_5286_; 
v___x_5286_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(v_a_5284_);
return v___x_5286_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems___boxed(lean_object* v_a_5287_, lean_object* v_a_5288_){
_start:
{
lean_object* v_res_5289_; 
v_res_5289_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems(v_a_5287_);
return v_res_5289_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(lean_object* v_a_5290_){
_start:
{
lean_object* v_stream_5292_; lean_object* v_getLine_5293_; lean_object* v___x_5294_; 
v_stream_5292_ = lean_ctor_get(v_a_5290_, 0);
v_getLine_5293_ = lean_ctor_get(v_stream_5292_, 3);
lean_inc_ref(v_getLine_5293_);
v___x_5294_ = lean_apply_1(v_getLine_5293_, lean_box(0));
if (lean_obj_tag(v___x_5294_) == 0)
{
lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5303_; 
v_isSharedCheck_5303_ = !lean_is_exclusive(v___x_5294_);
if (v_isSharedCheck_5303_ == 0)
{
lean_object* v_unused_5304_; 
v_unused_5304_ = lean_ctor_get(v___x_5294_, 0);
lean_dec(v_unused_5304_);
v___x_5296_ = v___x_5294_;
v_isShared_5297_ = v_isSharedCheck_5303_;
goto v_resetjp_5295_;
}
else
{
lean_dec(v___x_5294_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5303_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5301_; 
v___x_5298_ = lean_box(0);
v___x_5299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5299_, 0, v___x_5298_);
lean_ctor_set(v___x_5299_, 1, v_a_5290_);
if (v_isShared_5297_ == 0)
{
lean_ctor_set(v___x_5296_, 0, v___x_5299_);
v___x_5301_ = v___x_5296_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v___x_5299_);
v___x_5301_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
return v___x_5301_;
}
}
}
else
{
lean_object* v_a_5305_; lean_object* v___x_5307_; uint8_t v_isShared_5308_; uint8_t v_isSharedCheck_5312_; 
lean_dec_ref(v_a_5290_);
v_a_5305_ = lean_ctor_get(v___x_5294_, 0);
v_isSharedCheck_5312_ = !lean_is_exclusive(v___x_5294_);
if (v_isSharedCheck_5312_ == 0)
{
v___x_5307_ = v___x_5294_;
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
else
{
lean_inc(v_a_5305_);
lean_dec(v___x_5294_);
v___x_5307_ = lean_box(0);
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
v_resetjp_5306_:
{
lean_object* v___x_5310_; 
if (v_isShared_5308_ == 0)
{
v___x_5310_ = v___x_5307_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5311_; 
v_reuseFailAlloc_5311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5311_, 0, v_a_5305_);
v___x_5310_ = v_reuseFailAlloc_5311_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
return v___x_5310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata___boxed(lean_object* v_a_5313_, lean_object* v_a_5314_){
_start:
{
lean_object* v_res_5315_; 
v_res_5315_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(v_a_5313_);
return v_res_5315_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile(lean_object* v_a_5316_){
_start:
{
lean_object* v___x_5318_; 
v___x_5318_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(v_a_5316_);
if (lean_obj_tag(v___x_5318_) == 0)
{
lean_object* v_a_5319_; lean_object* v_snd_5320_; lean_object* v___x_5321_; 
v_a_5319_ = lean_ctor_get(v___x_5318_, 0);
lean_inc(v_a_5319_);
lean_dec_ref_known(v___x_5318_, 1);
v_snd_5320_ = lean_ctor_get(v_a_5319_, 1);
lean_inc(v_snd_5320_);
lean_dec(v_a_5319_);
v___x_5321_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(v_snd_5320_);
return v___x_5321_;
}
else
{
return v___x_5318_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile___boxed(lean_object* v_a_5322_, lean_object* v_a_5323_){
_start:
{
lean_object* v_res_5324_; 
v_res_5324_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile(v_a_5322_);
return v_res_5324_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_parseStream(lean_object* v_stream_5325_){
_start:
{
lean_object* v___x_5327_; lean_object* v___x_5328_; 
v___x_5327_ = lean_alloc_closure((void*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile___boxed), 2, 0);
v___x_5328_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(v___x_5327_, v_stream_5325_);
if (lean_obj_tag(v___x_5328_) == 0)
{
lean_object* v_a_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5347_; 
v_a_5329_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5347_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5347_ == 0)
{
v___x_5331_ = v___x_5328_;
v_isShared_5332_ = v_isSharedCheck_5347_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_a_5329_);
lean_dec(v___x_5328_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5347_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v_snd_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5345_; 
v_snd_5333_ = lean_ctor_get(v_a_5329_, 1);
v_isSharedCheck_5345_ = !lean_is_exclusive(v_a_5329_);
if (v_isSharedCheck_5345_ == 0)
{
lean_object* v_unused_5346_; 
v_unused_5346_ = lean_ctor_get(v_a_5329_, 0);
lean_dec(v_unused_5346_);
v___x_5335_ = v_a_5329_;
v_isShared_5336_ = v_isSharedCheck_5345_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_snd_5333_);
lean_dec(v_a_5329_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5345_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v_constMap_5337_; lean_object* v_constOrder_5338_; lean_object* v___x_5340_; 
v_constMap_5337_ = lean_ctor_get(v_snd_5333_, 5);
lean_inc_ref(v_constMap_5337_);
v_constOrder_5338_ = lean_ctor_get(v_snd_5333_, 6);
lean_inc_ref(v_constOrder_5338_);
lean_dec(v_snd_5333_);
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 1, v_constOrder_5338_);
lean_ctor_set(v___x_5335_, 0, v_constMap_5337_);
v___x_5340_ = v___x_5335_;
goto v_reusejp_5339_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v_constMap_5337_);
lean_ctor_set(v_reuseFailAlloc_5344_, 1, v_constOrder_5338_);
v___x_5340_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5339_;
}
v_reusejp_5339_:
{
lean_object* v___x_5342_; 
if (v_isShared_5332_ == 0)
{
lean_ctor_set(v___x_5331_, 0, v___x_5340_);
v___x_5342_ = v___x_5331_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v___x_5340_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
return v___x_5342_;
}
}
}
}
}
else
{
lean_object* v_a_5348_; lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5355_; 
v_a_5348_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5355_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5355_ == 0)
{
v___x_5350_ = v___x_5328_;
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
else
{
lean_inc(v_a_5348_);
lean_dec(v___x_5328_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5353_; 
if (v_isShared_5351_ == 0)
{
v___x_5353_ = v___x_5350_;
goto v_reusejp_5352_;
}
else
{
lean_object* v_reuseFailAlloc_5354_; 
v_reuseFailAlloc_5354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5354_, 0, v_a_5348_);
v___x_5353_ = v_reuseFailAlloc_5354_;
goto v_reusejp_5352_;
}
v_reusejp_5352_:
{
return v___x_5353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_parseStream___boxed(lean_object* v_stream_5356_, lean_object* v_a_5357_){
_start:
{
lean_object* v_res_5358_; 
v_res_5358_ = l_LeanExport_parseStream(v_stream_5356_);
return v_res_5358_;
}
}
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* runtime_initialize_Lean_Declaration(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_String(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_Parser(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanExport_Parse(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanExport_instInhabitedExportedEnv_default = _init_l_LeanExport_instInhabitedExportedEnv_default();
lean_mark_persistent(l_LeanExport_instInhabitedExportedEnv_default);
l_LeanExport_instInhabitedExportedEnv = _init_l_LeanExport_instInhabitedExportedEnv();
lean_mark_persistent(l_LeanExport_instInhabitedExportedEnv);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanExport_Parse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lean_Declaration(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_String(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanExport_Parse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanExport_Parse(builtin);
}
#ifdef __cplusplus
}
#endif

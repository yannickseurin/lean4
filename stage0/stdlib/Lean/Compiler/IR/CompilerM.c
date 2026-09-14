// Lean compiler output
// Module: Lean.Compiler.IR.CompilerM
// Imports: public import Lean.Compiler.IR.Format public import Lean.Compiler.ExportAttr public import Lean.Compiler.LCNF.PublicDeclsExt import Lean.Compiler.InitAttr import all Lean.Compiler.ModPkgExt import Init.Data.Format.Macro import Lean.Compiler.LCNF.Basic
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
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_get_export_name_for(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_isDeclMeta(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isDeclPublic(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isBoxedName(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_IR_formatDecl(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_mkBoxedName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_OLeanLevel_ctorIdx(uint8_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_regularInitAttr;
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_IR_LogEntry_fmt_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_LogEntry_fmt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__0 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__0_value;
static const lean_string_object l_Lean_IR_LogEntry_fmt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__1 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__1_value;
static lean_once_cell_t l_Lean_IR_LogEntry_fmt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_LogEntry_fmt___closed__2;
static lean_once_cell_t l_Lean_IR_LogEntry_fmt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_LogEntry_fmt___closed__3;
static const lean_ctor_object l_Lean_IR_LogEntry_fmt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_LogEntry_fmt___closed__0_value)}};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__4 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__4_value;
static const lean_ctor_object l_Lean_IR_LogEntry_fmt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_LogEntry_fmt___closed__1_value)}};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__5 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_fmt(lean_object*);
static const lean_closure_object l_Lean_IR_LogEntry_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_LogEntry_fmt, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_LogEntry_instToFormat___closed__0 = (const lean_object*)&l_Lean_IR_LogEntry_instToFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_LogEntry_instToFormat = (const lean_object*)&l_Lean_IR_LogEntry_instToFormat___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_format(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_format___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString___boxed(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_log___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_IR_log___closed__0 = (const lean_object*)&l_Lean_IR_log___closed__0_value;
static const lean_string_object l_Lean_IR_log___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "IR"};
static const lean_object* l_Lean_IR_log___closed__1 = (const lean_object*)&l_Lean_IR_log___closed__1_value;
static const lean_ctor_object l_Lean_IR_log___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_log___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_Lean_IR_log___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_log___closed__2_value_aux_0),((lean_object*)&l_Lean_IR_log___closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 183, 71, 31, 86, 224, 207, 192)}};
static const lean_object* l_Lean_IR_log___closed__2 = (const lean_object*)&l_Lean_IR_log___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_IR_log(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_log___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_tracePrefixOptionName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__0 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__0_value;
static const lean_string_object l_Lean_IR_tracePrefixOptionName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "compiler"};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__1 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__1_value;
static const lean_string_object l_Lean_IR_tracePrefixOptionName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__2 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__2_value;
static const lean_ctor_object l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_0),((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 121, 176, 5, 201, 231, 94, 72)}};
static const lean_ctor_object l_Lean_IR_tracePrefixOptionName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_1),((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 180, 88, 7, 84, 16, 192, 27)}};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__3 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_IR_tracePrefixOptionName = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logDecls(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls(lean_object*);
static const lean_array_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 186, 94, 176, 136, 38, 52, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "declMapExt"};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_IR_log___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 220, 115, 150, 240, 139, 111, 12)}};
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 236, 150, 45, 29, 146, 124, 106)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_declMapExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2;
LEAN_EXPORT lean_object* lean_ir_export_entries(lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_findEnvDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_findEnvDecl___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_ir_find_env_decl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_ir_find_env_decl_boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_has_compile_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_hasCompileError___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_getDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown declaration `"};
static const lean_object* l_Lean_IR_getDecl___closed__0 = (const lean_object*)&l_Lean_IR_getDecl___closed__0_value;
static const lean_string_object l_Lean_IR_getDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_IR_getDecl___closed__1 = (const lean_object*)&l_Lean_IR_getDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_IR_getDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecls(lean_object*);
static lean_once_cell_t l_Lean_IR_addDecl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_addDecl___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_addDecl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_addDecl___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_decl_get_sorry_dep(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0;
static const lean_array_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__1_value;
LEAN_EXPORT lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_IR_LogEntry_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_cls_8_; lean_object* v_decls_9_; lean_object* v___x_10_; 
v_cls_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_cls_8_);
v_decls_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_decls_9_);
lean_dec_ref_known(v_t_6_, 2);
v___x_10_ = lean_apply_2(v_k_7_, v_cls_8_, v_decls_9_);
return v___x_10_;
}
else
{
lean_object* v_msg_11_; lean_object* v___x_12_; 
v_msg_11_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_msg_11_);
lean_dec_ref_known(v_t_6_, 1);
v___x_12_ = lean_apply_1(v_k_7_, v_msg_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_IR_LogEntry_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim___redArg(lean_object* v_t_25_, lean_object* v_step_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_25_, v_step_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_step_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_29_, v_step_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim___redArg(lean_object* v_t_33_, lean_object* v_message_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_33_, v_message_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_message_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_37_, v_message_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_IR_LogEntry_fmt_spec__0(lean_object* v_a_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_nat_to_int(v_a_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(lean_object* v_as_43_, size_t v_i_44_, size_t v_stop_45_, lean_object* v_b_46_){
_start:
{
uint8_t v___x_47_; 
v___x_47_ = lean_usize_dec_eq(v_i_44_, v_stop_45_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; size_t v___x_54_; size_t v___x_55_; 
v___x_48_ = lean_array_uget_borrowed(v_as_43_, v_i_44_);
v___x_49_ = lean_box(1);
v___x_50_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_50_, 0, v_b_46_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
v___x_51_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_48_);
v___x_52_ = l_Lean_IR_formatDecl(v___x_48_, v___x_51_);
v___x_53_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_50_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = ((size_t)1ULL);
v___x_55_ = lean_usize_add(v_i_44_, v___x_54_);
v_i_44_ = v___x_55_;
v_b_46_ = v___x_53_;
goto _start;
}
else
{
return v_b_46_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1___boxed(lean_object* v_as_57_, lean_object* v_i_58_, lean_object* v_stop_59_, lean_object* v_b_60_){
_start:
{
size_t v_i_boxed_61_; size_t v_stop_boxed_62_; lean_object* v_res_63_; 
v_i_boxed_61_ = lean_unbox_usize(v_i_58_);
lean_dec(v_i_58_);
v_stop_boxed_62_ = lean_unbox_usize(v_stop_59_);
lean_dec(v_stop_59_);
v_res_63_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(v_as_57_, v_i_boxed_61_, v_stop_boxed_62_, v_b_60_);
lean_dec_ref(v_as_57_);
return v_res_63_;
}
}
static lean_object* _init_l_Lean_IR_LogEntry_fmt___closed__2(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(l_Lean_IR_LogEntry_fmt___closed__0));
v___x_67_ = lean_string_length(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_IR_LogEntry_fmt___closed__3(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Lean_IR_LogEntry_fmt___closed__2, &l_Lean_IR_LogEntry_fmt___closed__2_once, _init_l_Lean_IR_LogEntry_fmt___closed__2);
v___x_69_ = lean_nat_to_int(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_fmt(lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v_cls_75_; lean_object* v_decls_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_108_; 
v_cls_75_ = lean_ctor_get(v_x_74_, 0);
v_decls_76_ = lean_ctor_get(v_x_74_, 1);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_74_);
if (v_isSharedCheck_108_ == 0)
{
v___x_78_ = v_x_74_;
v_isShared_79_ = v_isSharedCheck_108_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_decls_76_);
lean_inc(v_cls_75_);
lean_dec(v_x_74_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_108_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_80_ = 1;
v___x_81_ = l_Lean_Name_toString(v_cls_75_, v___x_80_);
v___x_82_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
v___x_83_ = lean_obj_once(&l_Lean_IR_LogEntry_fmt___closed__3, &l_Lean_IR_LogEntry_fmt___closed__3_once, _init_l_Lean_IR_LogEntry_fmt___closed__3);
v___x_84_ = ((lean_object*)(l_Lean_IR_LogEntry_fmt___closed__4));
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 5);
lean_ctor_set(v___x_78_, 1, v___x_82_);
lean_ctor_set(v___x_78_, 0, v___x_84_);
v___x_86_ = v___x_78_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___x_82_);
v___x_86_ = v_reuseFailAlloc_107_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_87_ = ((lean_object*)(l_Lean_IR_LogEntry_fmt___closed__5));
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_83_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = 0;
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_90_);
v___x_92_ = lean_box(0);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = lean_array_get_size(v_decls_76_);
v___x_95_ = lean_nat_dec_lt(v___x_93_, v___x_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
lean_dec_ref(v_decls_76_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_91_);
lean_ctor_set(v___x_96_, 1, v___x_92_);
return v___x_96_;
}
else
{
uint8_t v___x_97_; 
v___x_97_ = lean_nat_dec_le(v___x_94_, v___x_94_);
if (v___x_97_ == 0)
{
if (v___x_95_ == 0)
{
lean_object* v___x_98_; 
lean_dec_ref(v_decls_76_);
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_91_);
lean_ctor_set(v___x_98_, 1, v___x_92_);
return v___x_98_;
}
else
{
size_t v___x_99_; size_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_99_ = ((size_t)0ULL);
v___x_100_ = lean_usize_of_nat(v___x_94_);
v___x_101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(v_decls_76_, v___x_99_, v___x_100_, v___x_92_);
lean_dec_ref(v_decls_76_);
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_91_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
return v___x_102_;
}
}
else
{
size_t v___x_103_; size_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_103_ = ((size_t)0ULL);
v___x_104_ = lean_usize_of_nat(v___x_94_);
v___x_105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(v_decls_76_, v___x_103_, v___x_104_, v___x_92_);
lean_dec_ref(v_decls_76_);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_91_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
return v___x_106_;
}
}
}
}
}
else
{
lean_object* v_msg_109_; 
v_msg_109_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_msg_109_);
lean_dec_ref_known(v_x_74_, 1);
return v_msg_109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(lean_object* v_as_112_, size_t v_i_113_, size_t v_stop_114_, lean_object* v_b_115_){
_start:
{
uint8_t v___x_116_; 
v___x_116_ = lean_usize_dec_eq(v_i_113_, v_stop_114_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; size_t v___x_122_; size_t v___x_123_; 
v___x_117_ = lean_array_uget_borrowed(v_as_112_, v_i_113_);
v___x_118_ = lean_box(1);
v___x_119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_119_, 0, v_b_115_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
lean_inc(v___x_117_);
v___x_120_ = l_Lean_IR_LogEntry_fmt(v___x_117_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_add(v_i_113_, v___x_122_);
v_i_113_ = v___x_123_;
v_b_115_ = v___x_121_;
goto _start;
}
else
{
return v_b_115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0___boxed(lean_object* v_as_125_, lean_object* v_i_126_, lean_object* v_stop_127_, lean_object* v_b_128_){
_start:
{
size_t v_i_boxed_129_; size_t v_stop_boxed_130_; lean_object* v_res_131_; 
v_i_boxed_129_ = lean_unbox_usize(v_i_126_);
lean_dec(v_i_126_);
v_stop_boxed_130_ = lean_unbox_usize(v_stop_127_);
lean_dec(v_stop_127_);
v_res_131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(v_as_125_, v_i_boxed_129_, v_stop_boxed_130_, v_b_128_);
lean_dec_ref(v_as_125_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_format(lean_object* v_log_132_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_133_ = lean_box(0);
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = lean_array_get_size(v_log_132_);
v___x_136_ = lean_nat_dec_lt(v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
return v___x_133_;
}
else
{
uint8_t v___x_137_; 
v___x_137_ = lean_nat_dec_le(v___x_135_, v___x_135_);
if (v___x_137_ == 0)
{
if (v___x_136_ == 0)
{
return v___x_133_;
}
else
{
size_t v___x_138_; size_t v___x_139_; lean_object* v___x_140_; 
v___x_138_ = ((size_t)0ULL);
v___x_139_ = lean_usize_of_nat(v___x_135_);
v___x_140_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(v_log_132_, v___x_138_, v___x_139_, v___x_133_);
return v___x_140_;
}
}
else
{
size_t v___x_141_; size_t v___x_142_; lean_object* v___x_143_; 
v___x_141_ = ((size_t)0ULL);
v___x_142_ = lean_usize_of_nat(v___x_135_);
v___x_143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(v_log_132_, v___x_141_, v___x_142_, v___x_133_);
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_format___boxed(lean_object* v_log_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_IR_Log_format(v_log_144_);
lean_dec_ref(v_log_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString(lean_object* v_log_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = l_Lean_IR_Log_format(v_log_146_);
v___x_148_ = l_Std_Format_defWidth;
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = l_Std_Format_pretty(v___x_147_, v___x_148_, v___x_149_, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString___boxed(lean_object* v_log_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_IR_Log_toString(v_log_151_);
lean_dec_ref(v_log_151_);
return v_res_152_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_153_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1);
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
lean_ctor_set(v___x_158_, 2, v___x_157_);
lean_ctor_set(v___x_158_, 3, v___x_157_);
lean_ctor_set(v___x_158_, 4, v___x_156_);
lean_ctor_set(v___x_158_, 5, v___x_156_);
lean_ctor_set(v___x_158_, 6, v___x_156_);
lean_ctor_set(v___x_158_, 7, v___x_156_);
lean_ctor_set(v___x_158_, 8, v___x_156_);
lean_ctor_set(v___x_158_, 9, v___x_156_);
lean_ctor_set(v___x_158_, 10, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_unsigned_to_nat(32u);
v___x_160_ = lean_mk_empty_array_with_capacity(v___x_159_);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_162_ = ((size_t)5ULL);
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_unsigned_to_nat(32u);
v___x_165_ = lean_mk_empty_array_with_capacity(v___x_164_);
v___x_166_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3);
v___x_167_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_165_);
lean_ctor_set(v___x_167_, 2, v___x_163_);
lean_ctor_set(v___x_167_, 3, v___x_163_);
lean_ctor_set_usize(v___x_167_, 4, v___x_162_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_box(1);
v___x_169_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4);
v___x_170_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1);
v___x_171_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
lean_ctor_set(v___x_171_, 2, v___x_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(lean_object* v_msgData_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; lean_object* v_toCold_177_; lean_object* v_env_178_; lean_object* v_options_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_176_ = lean_st_ref_get(v___y_174_);
v_toCold_177_ = lean_ctor_get(v___y_173_, 0);
v_env_178_ = lean_ctor_get(v___x_176_, 0);
lean_inc_ref(v_env_178_);
lean_dec(v___x_176_);
v_options_179_ = lean_ctor_get(v_toCold_177_, 2);
v___x_180_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2);
v___x_181_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_179_);
v___x_182_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_182_, 0, v_env_178_);
lean_ctor_set(v___x_182_, 1, v___x_180_);
lean_ctor_set(v___x_182_, 2, v___x_181_);
lean_ctor_set(v___x_182_, 3, v_options_179_);
v___x_183_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v_msgData_172_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___boxed(lean_object* v_msgData_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(v_msgData_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
return v_res_189_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0(void){
_start:
{
lean_object* v___x_190_; double v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_float_of_nat(v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0(lean_object* v_cls_195_, lean_object* v_msg_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_ref_200_; lean_object* v___x_201_; lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_246_; 
v_ref_200_ = lean_ctor_get(v___y_197_, 2);
v___x_201_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(v_msg_196_, v___y_197_, v___y_198_);
v_a_202_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_246_ == 0)
{
v___x_204_ = v___x_201_;
v_isShared_205_ = v_isSharedCheck_246_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_246_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; lean_object* v_traceState_207_; lean_object* v_env_208_; lean_object* v_nextMacroScope_209_; lean_object* v_ngen_210_; lean_object* v_auxDeclNGen_211_; lean_object* v_cache_212_; lean_object* v_messages_213_; lean_object* v_infoState_214_; lean_object* v_snapshotTasks_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_245_; 
v___x_206_ = lean_st_ref_take(v___y_198_);
v_traceState_207_ = lean_ctor_get(v___x_206_, 4);
v_env_208_ = lean_ctor_get(v___x_206_, 0);
v_nextMacroScope_209_ = lean_ctor_get(v___x_206_, 1);
v_ngen_210_ = lean_ctor_get(v___x_206_, 2);
v_auxDeclNGen_211_ = lean_ctor_get(v___x_206_, 3);
v_cache_212_ = lean_ctor_get(v___x_206_, 5);
v_messages_213_ = lean_ctor_get(v___x_206_, 6);
v_infoState_214_ = lean_ctor_get(v___x_206_, 7);
v_snapshotTasks_215_ = lean_ctor_get(v___x_206_, 8);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_245_ == 0)
{
v___x_217_ = v___x_206_;
v_isShared_218_ = v_isSharedCheck_245_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_snapshotTasks_215_);
lean_inc(v_infoState_214_);
lean_inc(v_messages_213_);
lean_inc(v_cache_212_);
lean_inc(v_traceState_207_);
lean_inc(v_auxDeclNGen_211_);
lean_inc(v_ngen_210_);
lean_inc(v_nextMacroScope_209_);
lean_inc(v_env_208_);
lean_dec(v___x_206_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_245_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
uint64_t v_tid_219_; lean_object* v_traces_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_244_; 
v_tid_219_ = lean_ctor_get_uint64(v_traceState_207_, sizeof(void*)*1);
v_traces_220_ = lean_ctor_get(v_traceState_207_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v_traceState_207_);
if (v_isSharedCheck_244_ == 0)
{
v___x_222_ = v_traceState_207_;
v_isShared_223_ = v_isSharedCheck_244_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_traces_220_);
lean_dec(v_traceState_207_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_244_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; lean_object* v___x_225_; double v___x_226_; uint8_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_224_ = lean_box(0);
v___x_225_ = lean_box(0);
v___x_226_ = lean_float_once(&l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0);
v___x_227_ = 0;
v___x_228_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1));
v___x_229_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_229_, 0, v_cls_195_);
lean_ctor_set(v___x_229_, 1, v___x_225_);
lean_ctor_set(v___x_229_, 2, v___x_228_);
lean_ctor_set_float(v___x_229_, sizeof(void*)*3, v___x_226_);
lean_ctor_set_float(v___x_229_, sizeof(void*)*3 + 8, v___x_226_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*3 + 16, v___x_227_);
v___x_230_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2));
v___x_231_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v_a_202_);
lean_ctor_set(v___x_231_, 2, v___x_230_);
lean_inc(v_ref_200_);
v___x_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_232_, 0, v_ref_200_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = l_Lean_PersistentArray_push___redArg(v_traces_220_, v___x_232_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_233_);
v___x_235_ = v___x_222_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_233_);
lean_ctor_set_uint64(v_reuseFailAlloc_243_, sizeof(void*)*1, v_tid_219_);
v___x_235_ = v_reuseFailAlloc_243_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v___x_237_; 
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 4, v___x_235_);
v___x_237_ = v___x_217_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_env_208_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_nextMacroScope_209_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v_ngen_210_);
lean_ctor_set(v_reuseFailAlloc_242_, 3, v_auxDeclNGen_211_);
lean_ctor_set(v_reuseFailAlloc_242_, 4, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_242_, 5, v_cache_212_);
lean_ctor_set(v_reuseFailAlloc_242_, 6, v_messages_213_);
lean_ctor_set(v_reuseFailAlloc_242_, 7, v_infoState_214_);
lean_ctor_set(v_reuseFailAlloc_242_, 8, v_snapshotTasks_215_);
v___x_237_ = v_reuseFailAlloc_242_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_238_ = lean_st_ref_put(v___y_198_, v___x_237_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_224_);
v___x_240_ = v___x_204_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_224_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___boxed(lean_object* v_cls_247_, lean_object* v_msg_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_addTrace___at___00Lean_IR_log_spec__0(v_cls_247_, v_msg_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_log(lean_object* v_entry_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_262_ = ((lean_object*)(l_Lean_IR_log___closed__2));
v___x_263_ = l_Lean_IR_LogEntry_fmt(v_entry_258_);
v___x_264_ = l_Lean_MessageData_ofFormat(v___x_263_);
v___x_265_ = l_Lean_addTrace___at___00Lean_IR_log_spec__0(v___x_262_, v___x_264_, v_a_259_, v_a_260_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_log___boxed(lean_object* v_entry_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_IR_log(v_entry_266_, v_a_267_, v_a_268_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
return v_res_270_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(lean_object* v_opts_279_, lean_object* v_optName_280_){
_start:
{
lean_object* v_map_281_; lean_object* v___x_288_; 
v_map_281_ = lean_ctor_get(v_opts_279_, 0);
v___x_288_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_281_, v_optName_280_);
if (lean_obj_tag(v___x_288_) == 1)
{
lean_object* v_val_289_; 
v_val_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_val_289_);
lean_dec_ref_known(v___x_288_, 1);
if (lean_obj_tag(v_val_289_) == 1)
{
uint8_t v_v_290_; 
v_v_290_ = lean_ctor_get_uint8(v_val_289_, 0);
lean_dec_ref_known(v_val_289_, 0);
return v_v_290_;
}
else
{
lean_dec(v_val_289_);
goto v___jp_282_;
}
}
else
{
lean_dec(v___x_288_);
goto v___jp_282_;
}
v___jp_282_:
{
lean_object* v___x_283_; uint8_t v___x_284_; lean_object* v___x_285_; 
v___x_283_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_284_ = 0;
v___x_285_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_281_, v___x_283_);
if (lean_obj_tag(v___x_285_) == 0)
{
return v___x_284_;
}
else
{
lean_object* v_val_286_; 
v_val_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v___x_285_, 1);
if (lean_obj_tag(v_val_286_) == 1)
{
uint8_t v_v_287_; 
v_v_287_ = lean_ctor_get_uint8(v_val_286_, 0);
lean_dec_ref_known(v_val_286_, 0);
return v_v_287_;
}
else
{
lean_dec(v_val_286_);
return v___x_284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor___boxed(lean_object* v_opts_291_, lean_object* v_optName_292_){
_start:
{
uint8_t v_res_293_; lean_object* v_r_294_; 
v_res_293_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(v_opts_291_, v_optName_292_);
lean_dec(v_optName_292_);
lean_dec_ref(v_opts_291_);
v_r_294_ = lean_box(v_res_293_);
return v_r_294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(lean_object* v_optName_295_, lean_object* v_cls_296_, lean_object* v_decls_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_toCold_301_; lean_object* v_options_302_; uint8_t v___x_303_; 
v_toCold_301_ = lean_ctor_get(v_a_298_, 0);
v_options_302_ = lean_ctor_get(v_toCold_301_, 2);
v___x_303_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(v_options_302_, v_optName_295_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec_ref(v_decls_297_);
lean_dec(v_cls_296_);
v___x_304_ = lean_box(0);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v_cls_296_);
lean_ctor_set(v___x_306_, 1, v_decls_297_);
v___x_307_ = l_Lean_IR_log(v___x_306_, v_a_298_, v_a_299_);
return v___x_307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux___boxed(lean_object* v_optName_308_, lean_object* v_cls_309_, lean_object* v_decls_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(v_optName_308_, v_cls_309_, v_decls_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_optName_308_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logDecls(lean_object* v_cls_315_, lean_object* v_decl_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
lean_inc(v_cls_315_);
v___x_321_ = l_Lean_Name_append(v___x_320_, v_cls_315_);
v___x_322_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(v___x_321_, v_cls_315_, v_decl_316_, v_a_317_, v_a_318_);
lean_dec(v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logDecls___boxed(lean_object* v_cls_323_, lean_object* v_decl_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_IR_logDecls(v_cls_323_, v_decl_324_, v_a_325_, v_a_326_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(lean_object* v_inst_329_, lean_object* v_optName_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_toCold_335_; lean_object* v_options_336_; uint8_t v___x_337_; 
v_toCold_335_ = lean_ctor_get(v_a_332_, 0);
v_options_336_ = lean_ctor_get(v_toCold_335_, 2);
v___x_337_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(v_options_336_, v_optName_330_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec(v_a_331_);
lean_dec_ref(v_inst_329_);
v___x_338_ = lean_box(0);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_apply_1(v_inst_329_, v_a_331_);
v___x_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
v___x_342_ = l_Lean_IR_log(v___x_341_, v_a_332_, v_a_333_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg___boxed(lean_object* v_inst_343_, lean_object* v_optName_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_343_, v_optName_344_, v_a_345_, v_a_346_, v_a_347_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec(v_optName_344_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux(lean_object* v_00_u03b1_350_, lean_object* v_inst_351_, lean_object* v_optName_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_351_, v_optName_352_, v_a_353_, v_a_354_, v_a_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___boxed(lean_object* v_00_u03b1_358_, lean_object* v_inst_359_, lean_object* v_optName_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux(v_00_u03b1_358_, v_inst_359_, v_optName_360_, v_a_361_, v_a_362_, v_a_363_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
lean_dec(v_optName_360_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg(lean_object* v_inst_366_, lean_object* v_cls_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_373_ = l_Lean_Name_append(v___x_372_, v_cls_367_);
v___x_374_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_366_, v___x_373_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg___boxed(lean_object* v_inst_375_, lean_object* v_cls_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_IR_logMessageIf___redArg(v_inst_375_, v_cls_376_, v_a_377_, v_a_378_, v_a_379_);
lean_dec(v_a_379_);
lean_dec_ref(v_a_378_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf(lean_object* v_00_u03b1_382_, lean_object* v_inst_383_, lean_object* v_cls_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_390_ = l_Lean_Name_append(v___x_389_, v_cls_384_);
v___x_391_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_383_, v___x_390_, v_a_385_, v_a_386_, v_a_387_);
lean_dec(v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___boxed(lean_object* v_00_u03b1_392_, lean_object* v_inst_393_, lean_object* v_cls_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_IR_logMessageIf(v_00_u03b1_392_, v_inst_393_, v_cls_394_, v_a_395_, v_a_396_, v_a_397_);
lean_dec(v_a_397_);
lean_dec_ref(v_a_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg(lean_object* v_inst_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_406_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_400_, v___x_405_, v_a_401_, v_a_402_, v_a_403_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg___boxed(lean_object* v_inst_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_IR_logMessage___redArg(v_inst_407_, v_a_408_, v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage(lean_object* v_00_u03b1_413_, lean_object* v_inst_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_420_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_414_, v___x_419_, v_a_415_, v_a_416_, v_a_417_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___boxed(lean_object* v_00_u03b1_421_, lean_object* v_inst_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_IR_logMessage(v_00_u03b1_421_, v_inst_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
return v_res_427_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt(lean_object* v_a_428_, lean_object* v_b_429_){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v___x_430_ = l_Lean_IR_Decl_name(v_a_428_);
v___x_431_ = l_Lean_IR_Decl_name(v_b_429_);
v___x_432_ = l_Lean_Name_quickLt(v___x_430_, v___x_431_);
lean_dec(v___x_431_);
lean_dec(v___x_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt___boxed(lean_object* v_a_433_, lean_object* v_b_434_){
_start:
{
uint8_t v_res_435_; lean_object* v_r_436_; 
v_res_435_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt(v_a_433_, v_b_434_);
lean_dec_ref(v_b_434_);
lean_dec_ref(v_a_433_);
v_r_436_ = lean_box(v_res_435_);
return v_r_436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls(lean_object* v_decls_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_439_ = lean_array_get_size(v_decls_438_);
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_nat_dec_eq(v___x_439_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___y_446_; uint8_t v___x_450_; 
v___x_442_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0));
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = lean_nat_sub(v___x_439_, v___x_443_);
v___x_450_ = lean_nat_dec_le(v___x_440_, v___x_444_);
if (v___x_450_ == 0)
{
lean_inc(v___x_444_);
v___y_446_ = v___x_444_;
goto v___jp_445_;
}
else
{
v___y_446_ = v___x_440_;
goto v___jp_445_;
}
v___jp_445_:
{
uint8_t v___x_447_; 
v___x_447_ = lean_nat_dec_le(v___y_446_, v___x_444_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
lean_dec(v___x_444_);
lean_inc(v___y_446_);
v___x_448_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_442_, v___x_439_, v_decls_438_, v___y_446_, v___y_446_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_446_);
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_442_, v___x_439_, v_decls_438_, v___y_446_, v___x_444_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___x_444_);
return v___x_449_;
}
}
}
else
{
return v_decls_438_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f(lean_object* v_decls_454_, lean_object* v_declName_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_456_ = lean_unsigned_to_nat(0u);
v___x_457_ = lean_array_get_size(v_decls_454_);
v___x_458_ = lean_nat_dec_lt(v___x_456_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
lean_dec(v_declName_455_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
else
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_sub(v___x_457_, v___x_460_);
v___x_462_ = lean_nat_dec_le(v___x_456_, v___x_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; 
lean_dec(v___x_461_);
lean_dec(v_declName_455_);
v___x_463_ = lean_box(0);
return v___x_463_;
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_tmpDecl_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_464_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_465_ = lean_box(0);
v___x_466_ = lean_box(0);
v_tmpDecl_467_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_467_, 0, v_declName_455_);
lean_ctor_set(v_tmpDecl_467_, 1, v___x_464_);
lean_ctor_set(v_tmpDecl_467_, 2, v___x_465_);
lean_ctor_set(v_tmpDecl_467_, 3, v___x_466_);
v___x_468_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0));
v___x_469_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1));
v___x_470_ = l_Array_binSearchAux___redArg(v___x_468_, v___x_469_, v_decls_454_, v_tmpDecl_467_, v___x_456_, v___x_461_);
return v___x_470_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___boxed(lean_object* v_decls_471_, lean_object* v_declName_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f(v_decls_471_, v_declName_472_);
lean_dec_ref(v_decls_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_hi_474_, lean_object* v_pivot_475_, lean_object* v_as_476_, lean_object* v_i_477_, lean_object* v_k_478_){
_start:
{
uint8_t v___x_479_; 
v___x_479_ = lean_nat_dec_lt(v_k_478_, v_hi_474_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; 
lean_dec(v_k_478_);
v___x_480_ = lean_array_fswap(v_as_476_, v_i_477_, v_hi_474_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v_i_477_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_482_ = lean_array_fget_borrowed(v_as_476_, v_k_478_);
v___x_483_ = l_Lean_IR_Decl_name(v___x_482_);
v___x_484_ = l_Lean_IR_Decl_name(v_pivot_475_);
v___x_485_ = l_Lean_Name_quickLt(v___x_483_, v___x_484_);
lean_dec(v___x_484_);
lean_dec(v___x_483_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v_k_478_, v___x_486_);
lean_dec(v_k_478_);
v_k_478_ = v___x_487_;
goto _start;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_489_ = lean_array_fswap(v_as_476_, v_i_477_, v_k_478_);
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = lean_nat_add(v_i_477_, v___x_490_);
lean_dec(v_i_477_);
v___x_492_ = lean_nat_add(v_k_478_, v___x_490_);
lean_dec(v_k_478_);
v_as_476_ = v___x_489_;
v_i_477_ = v___x_491_;
v_k_478_ = v___x_492_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_hi_494_, lean_object* v_pivot_495_, lean_object* v_as_496_, lean_object* v_i_497_, lean_object* v_k_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_494_, v_pivot_495_, v_as_496_, v_i_497_, v_k_498_);
lean_dec_ref(v_pivot_495_);
lean_dec(v_hi_494_);
return v_res_499_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_502_ = l_Lean_IR_Decl_name(v___y_500_);
v___x_503_ = l_Lean_IR_Decl_name(v___y_501_);
v___x_504_ = l_Lean_Name_quickLt(v___x_502_, v___x_503_);
lean_dec(v___x_503_);
lean_dec(v___x_502_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v_res_507_; lean_object* v_r_508_; 
v_res_507_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___y_505_, v___y_506_);
lean_dec_ref(v___y_506_);
lean_dec_ref(v___y_505_);
v_r_508_ = lean_box(v_res_507_);
return v_r_508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_509_, lean_object* v_as_510_, lean_object* v_lo_511_, lean_object* v_hi_512_){
_start:
{
lean_object* v___y_514_; uint8_t v___x_524_; 
v___x_524_ = lean_nat_dec_lt(v_lo_511_, v_hi_512_);
if (v___x_524_ == 0)
{
lean_dec(v_lo_511_);
return v_as_510_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v_mid_527_; lean_object* v___y_529_; lean_object* v___y_535_; lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_525_ = lean_nat_add(v_lo_511_, v_hi_512_);
v___x_526_ = lean_unsigned_to_nat(1u);
v_mid_527_ = lean_nat_shiftr(v___x_525_, v___x_526_);
lean_dec(v___x_525_);
v___x_540_ = lean_array_fget_borrowed(v_as_510_, v_mid_527_);
v___x_541_ = lean_array_fget_borrowed(v_as_510_, v_lo_511_);
v___x_542_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_540_, v___x_541_);
if (v___x_542_ == 0)
{
v___y_535_ = v_as_510_;
goto v___jp_534_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_array_fswap(v_as_510_, v_lo_511_, v_mid_527_);
v___y_535_ = v___x_543_;
goto v___jp_534_;
}
v___jp_528_:
{
lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_530_ = lean_array_fget_borrowed(v___y_529_, v_mid_527_);
v___x_531_ = lean_array_fget_borrowed(v___y_529_, v_hi_512_);
v___x_532_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_dec(v_mid_527_);
v___y_514_ = v___y_529_;
goto v___jp_513_;
}
else
{
lean_object* v___x_533_; 
v___x_533_ = lean_array_fswap(v___y_529_, v_mid_527_, v_hi_512_);
lean_dec(v_mid_527_);
v___y_514_ = v___x_533_;
goto v___jp_513_;
}
}
v___jp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_array_fget_borrowed(v___y_535_, v_hi_512_);
v___x_537_ = lean_array_fget_borrowed(v___y_535_, v_lo_511_);
v___x_538_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_536_, v___x_537_);
if (v___x_538_ == 0)
{
v___y_529_ = v___y_535_;
goto v___jp_528_;
}
else
{
lean_object* v___x_539_; 
v___x_539_ = lean_array_fswap(v___y_535_, v_lo_511_, v_hi_512_);
v___y_529_ = v___x_539_;
goto v___jp_528_;
}
}
}
v___jp_513_:
{
lean_object* v_pivot_515_; lean_object* v___x_516_; lean_object* v_fst_517_; lean_object* v_snd_518_; uint8_t v___x_519_; 
v_pivot_515_ = lean_array_fget(v___y_514_, v_hi_512_);
lean_inc_n(v_lo_511_, 2);
v___x_516_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_512_, v_pivot_515_, v___y_514_, v_lo_511_, v_lo_511_);
lean_dec(v_pivot_515_);
v_fst_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_fst_517_);
v_snd_518_ = lean_ctor_get(v___x_516_, 1);
lean_inc(v_snd_518_);
lean_dec_ref(v___x_516_);
v___x_519_ = lean_nat_dec_le(v_hi_512_, v_fst_517_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_520_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v_n_509_, v_snd_518_, v_lo_511_, v_fst_517_);
v___x_521_ = lean_unsigned_to_nat(1u);
v___x_522_ = lean_nat_add(v_fst_517_, v___x_521_);
lean_dec(v_fst_517_);
v_as_510_ = v___x_520_;
v_lo_511_ = v___x_522_;
goto _start;
}
else
{
lean_dec(v_fst_517_);
lean_dec(v_lo_511_);
return v_snd_518_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_544_, lean_object* v_as_545_, lean_object* v_lo_546_, lean_object* v_hi_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v_n_544_, v_as_545_, v_lo_546_, v_hi_547_);
lean_dec(v_hi_547_);
lean_dec(v_n_544_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_env_555_, lean_object* v_as_556_, size_t v_i_557_, size_t v_stop_558_, lean_object* v_b_559_){
_start:
{
lean_object* v___y_561_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; uint8_t v___x_572_; 
v___x_572_ = lean_usize_dec_eq(v_i_557_, v_stop_558_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; uint8_t v___y_575_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_573_ = lean_array_uget_borrowed(v_as_556_, v_i_557_);
v___x_590_ = l_Lean_IR_Decl_name(v___x_573_);
lean_inc_ref(v_env_555_);
v___x_591_ = l_Lean_isDeclMeta(v_env_555_, v___x_590_);
if (v___x_591_ == 0)
{
uint8_t v___x_592_; 
lean_inc_ref(v_env_555_);
v___x_592_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_555_, v___x_590_);
if (v___x_592_ == 0)
{
lean_dec(v___x_590_);
v___y_561_ = v_b_559_;
goto v___jp_560_;
}
else
{
uint8_t v___x_593_; 
v___x_593_ = l_Lean_Compiler_LCNF_isBoxedName(v___x_590_);
if (v___x_593_ == 0)
{
lean_dec(v___x_590_);
v___y_575_ = v___x_591_;
goto v___jp_574_;
}
else
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = l_Lean_Name_getPrefix(v___x_590_);
lean_dec(v___x_590_);
lean_inc_ref(v_env_555_);
v___x_595_ = l_Lean_isExtern(v_env_555_, v___x_594_);
v___y_575_ = v___x_595_;
goto v___jp_574_;
}
}
}
else
{
lean_object* v___x_596_; 
lean_dec(v___x_590_);
lean_inc(v___x_573_);
v___x_596_ = lean_array_push(v_b_559_, v___x_573_);
v___y_561_ = v___x_596_;
goto v___jp_560_;
}
v___jp_574_:
{
if (v___y_575_ == 0)
{
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v_f_576_; lean_object* v_xs_577_; lean_object* v_type_578_; lean_object* v___x_579_; 
v_f_576_ = lean_ctor_get(v___x_573_, 0);
v_xs_577_ = lean_ctor_get(v___x_573_, 1);
v_type_578_ = lean_ctor_get(v___x_573_, 2);
lean_inc(v_f_576_);
lean_inc_ref(v_env_555_);
v___x_579_ = lean_get_export_name_for(v_env_555_, v_f_576_);
if (lean_obj_tag(v___x_579_) == 1)
{
lean_object* v_val_580_; 
v_val_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_val_580_);
lean_dec_ref_known(v___x_579_, 1);
if (lean_obj_tag(v_val_580_) == 1)
{
lean_object* v_str_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v_str_581_ = lean_ctor_get(v_val_580_, 1);
lean_inc_ref(v_str_581_);
lean_dec_ref_known(v_val_580_, 2);
v___x_582_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2));
v___x_583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v_str_581_);
v___x_584_ = lean_box(0);
v___x_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
lean_inc(v_type_578_);
lean_inc_ref(v_xs_577_);
lean_inc(v_f_576_);
v___x_586_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_586_, 0, v_f_576_);
lean_ctor_set(v___x_586_, 1, v_xs_577_);
lean_ctor_set(v___x_586_, 2, v_type_578_);
lean_ctor_set(v___x_586_, 3, v___x_585_);
v___x_587_ = lean_array_push(v_b_559_, v___x_586_);
v___y_561_ = v___x_587_;
goto v___jp_560_;
}
else
{
lean_dec(v_val_580_);
lean_inc(v_type_578_);
lean_inc_ref(v_xs_577_);
lean_inc(v_f_576_);
v___y_566_ = v_f_576_;
v___y_567_ = v_xs_577_;
v___y_568_ = v_type_578_;
goto v___jp_565_;
}
}
else
{
lean_dec(v___x_579_);
lean_inc(v_type_578_);
lean_inc_ref(v_xs_577_);
lean_inc(v_f_576_);
v___y_566_ = v_f_576_;
v___y_567_ = v_xs_577_;
v___y_568_ = v_type_578_;
goto v___jp_565_;
}
}
else
{
lean_object* v___x_588_; 
lean_inc(v___x_573_);
v___x_588_ = lean_array_push(v_b_559_, v___x_573_);
v___y_561_ = v___x_588_;
goto v___jp_560_;
}
}
else
{
lean_object* v___x_589_; 
lean_inc(v___x_573_);
v___x_589_ = lean_array_push(v_b_559_, v___x_573_);
v___y_561_ = v___x_589_;
goto v___jp_560_;
}
}
}
else
{
lean_dec_ref(v_env_555_);
return v_b_559_;
}
v___jp_560_:
{
size_t v___x_562_; size_t v___x_563_; 
v___x_562_ = ((size_t)1ULL);
v___x_563_ = lean_usize_add(v_i_557_, v___x_562_);
v_i_557_ = v___x_563_;
v_b_559_ = v___y_561_;
goto _start;
}
v___jp_565_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0));
v___x_570_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_570_, 0, v___y_566_);
lean_ctor_set(v___x_570_, 1, v___y_567_);
lean_ctor_set(v___x_570_, 2, v___y_568_);
lean_ctor_set(v___x_570_, 3, v___x_569_);
v___x_571_ = lean_array_push(v_b_559_, v___x_570_);
v___y_561_ = v___x_571_;
goto v___jp_560_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_env_597_, lean_object* v_as_598_, lean_object* v_i_599_, lean_object* v_stop_600_, lean_object* v_b_601_){
_start:
{
size_t v_i_boxed_602_; size_t v_stop_boxed_603_; lean_object* v_res_604_; 
v_i_boxed_602_ = lean_unbox_usize(v_i_599_);
lean_dec(v_i_599_);
v_stop_boxed_603_ = lean_unbox_usize(v_stop_600_);
lean_dec(v_stop_600_);
v_res_604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(v_env_597_, v_as_598_, v_i_boxed_602_, v_stop_boxed_603_, v_b_601_);
lean_dec_ref(v_as_598_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(lean_object* v_env_607_, lean_object* v_as_608_, lean_object* v_start_609_, lean_object* v_stop_610_){
_start:
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0));
v___x_612_ = lean_nat_dec_lt(v_start_609_, v_stop_610_);
if (v___x_612_ == 0)
{
lean_dec_ref(v_env_607_);
return v___x_611_;
}
else
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = lean_array_get_size(v_as_608_);
v___x_614_ = lean_nat_dec_le(v_stop_610_, v___x_613_);
if (v___x_614_ == 0)
{
uint8_t v___x_615_; 
v___x_615_ = lean_nat_dec_lt(v_start_609_, v___x_613_);
if (v___x_615_ == 0)
{
lean_dec_ref(v_env_607_);
return v___x_611_;
}
else
{
size_t v___x_616_; size_t v___x_617_; lean_object* v___x_618_; 
v___x_616_ = lean_usize_of_nat(v_start_609_);
v___x_617_ = lean_usize_of_nat(v___x_613_);
v___x_618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(v_env_607_, v_as_608_, v___x_616_, v___x_617_, v___x_611_);
return v___x_618_;
}
}
else
{
size_t v___x_619_; size_t v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_usize_of_nat(v_start_609_);
v___x_620_ = lean_usize_of_nat(v_stop_610_);
v___x_621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(v_env_607_, v_as_608_, v___x_619_, v___x_620_, v___x_611_);
return v___x_621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_622_, lean_object* v_as_623_, lean_object* v_start_624_, lean_object* v_stop_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(v_env_622_, v_as_623_, v_start_624_, v_stop_625_);
lean_dec(v_stop_625_);
lean_dec(v_start_624_);
lean_dec_ref(v_as_623_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
return v_x_627_;
}
else
{
lean_object* v_head_629_; lean_object* v_tail_630_; lean_object* v___x_631_; 
v_head_629_ = lean_ctor_get(v_x_628_, 0);
lean_inc(v_head_629_);
v_tail_630_ = lean_ctor_get(v_x_628_, 1);
lean_inc(v_tail_630_);
lean_dec_ref_known(v_x_628_, 2);
v___x_631_ = lean_array_push(v_x_627_, v_head_629_);
v_x_627_ = v___x_631_;
v_x_628_ = v_tail_630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_env_633_, lean_object* v_s_634_, lean_object* v_entries_635_){
_start:
{
lean_object* v___y_637_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v_decls_647_; lean_object* v___x_648_; lean_object* v___y_650_; lean_object* v___y_651_; uint8_t v___x_653_; 
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0));
v_decls_647_ = l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(v___x_646_, v_entries_635_);
v___x_648_ = lean_array_get_size(v_decls_647_);
v___x_653_ = lean_nat_dec_eq(v___x_648_, v___x_645_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___y_657_; uint8_t v___x_659_; 
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_nat_sub(v___x_648_, v___x_654_);
v___x_659_ = lean_nat_dec_le(v___x_645_, v___x_655_);
if (v___x_659_ == 0)
{
lean_inc(v___x_655_);
v___y_657_ = v___x_655_;
goto v___jp_656_;
}
else
{
v___y_657_ = v___x_645_;
goto v___jp_656_;
}
v___jp_656_:
{
uint8_t v___x_658_; 
v___x_658_ = lean_nat_dec_le(v___y_657_, v___x_655_);
if (v___x_658_ == 0)
{
lean_dec(v___x_655_);
lean_inc(v___y_657_);
v___y_650_ = v___y_657_;
v___y_651_ = v___y_657_;
goto v___jp_649_;
}
else
{
v___y_650_ = v___y_657_;
v___y_651_ = v___x_655_;
goto v___jp_649_;
}
}
}
else
{
v___y_637_ = v_decls_647_;
goto v___jp_636_;
}
v___jp_636_:
{
lean_object* v___x_638_; uint8_t v_isModule_639_; 
v___x_638_ = l_Lean_Environment_header(v_env_633_);
v_isModule_639_ = lean_ctor_get_uint8(v___x_638_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_638_);
if (v_isModule_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec_ref(v_env_633_);
lean_inc_ref_n(v___y_637_, 2);
v___x_640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_640_, 0, v___y_637_);
lean_ctor_set(v___x_640_, 1, v___y_637_);
lean_ctor_set(v___x_640_, 2, v___y_637_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_641_ = lean_unsigned_to_nat(0u);
v___x_642_ = lean_array_get_size(v___y_637_);
v___x_643_ = l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(v_env_633_, v___y_637_, v___x_641_, v___x_642_);
lean_dec_ref(v___y_637_);
lean_inc_ref_n(v___x_643_, 2);
v___x_644_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
lean_ctor_set(v___x_644_, 2, v___x_643_);
return v___x_644_;
}
}
v___jp_649_:
{
lean_object* v___x_652_; 
v___x_652_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v___x_648_, v_decls_647_, v___y_650_, v___y_651_);
lean_dec(v___y_651_);
v___y_637_ = v___x_652_;
goto v___jp_636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_env_660_, lean_object* v_s_661_, lean_object* v_entries_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(v_env_660_, v_s_661_, v_entries_662_);
lean_dec_ref(v_s_661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_es_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_array_mk(v_es_664_);
return v___x_665_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(lean_object* v_keys_666_, lean_object* v_i_667_, lean_object* v_k_668_){
_start:
{
lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_669_ = lean_array_get_size(v_keys_666_);
v___x_670_ = lean_nat_dec_lt(v_i_667_, v___x_669_);
if (v___x_670_ == 0)
{
lean_dec(v_i_667_);
return v___x_670_;
}
else
{
lean_object* v_k_x27_671_; uint8_t v___x_672_; 
v_k_x27_671_ = lean_array_fget_borrowed(v_keys_666_, v_i_667_);
v___x_672_ = lean_name_eq(v_k_668_, v_k_x27_671_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_unsigned_to_nat(1u);
v___x_674_ = lean_nat_add(v_i_667_, v___x_673_);
lean_dec(v_i_667_);
v_i_667_ = v___x_674_;
goto _start;
}
else
{
lean_dec(v_i_667_);
return v___x_670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg___boxed(lean_object* v_keys_676_, lean_object* v_i_677_, lean_object* v_k_678_){
_start:
{
uint8_t v_res_679_; lean_object* v_r_680_; 
v_res_679_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(v_keys_676_, v_i_677_, v_k_678_);
lean_dec(v_k_678_);
lean_dec_ref(v_keys_676_);
v_r_680_ = lean_box(v_res_679_);
return v_r_680_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object* v_x_681_, size_t v_x_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_681_) == 0)
{
lean_object* v_es_684_; lean_object* v___x_685_; size_t v___x_686_; size_t v___x_687_; lean_object* v_j_688_; lean_object* v___x_689_; 
v_es_684_ = lean_ctor_get(v_x_681_, 0);
v___x_685_ = lean_box(2);
v___x_686_ = ((size_t)31ULL);
v___x_687_ = lean_usize_land(v_x_682_, v___x_686_);
v_j_688_ = lean_usize_to_nat(v___x_687_);
v___x_689_ = lean_array_get_borrowed(v___x_685_, v_es_684_, v_j_688_);
lean_dec(v_j_688_);
switch(lean_obj_tag(v___x_689_))
{
case 0:
{
lean_object* v_key_690_; uint8_t v___x_691_; 
v_key_690_ = lean_ctor_get(v___x_689_, 0);
v___x_691_ = lean_name_eq(v_x_683_, v_key_690_);
return v___x_691_;
}
case 1:
{
lean_object* v_node_692_; size_t v___x_693_; size_t v___x_694_; 
v_node_692_ = lean_ctor_get(v___x_689_, 0);
v___x_693_ = ((size_t)5ULL);
v___x_694_ = lean_usize_shift_right(v_x_682_, v___x_693_);
v_x_681_ = v_node_692_;
v_x_682_ = v___x_694_;
goto _start;
}
default: 
{
uint8_t v___x_696_; 
v___x_696_ = 0;
return v___x_696_;
}
}
}
else
{
lean_object* v_ks_697_; lean_object* v___x_698_; uint8_t v___x_699_; 
v_ks_697_ = lean_ctor_get(v_x_681_, 0);
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(v_ks_697_, v___x_698_, v_x_683_);
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object* v_x_700_, lean_object* v_x_701_, lean_object* v_x_702_){
_start:
{
size_t v_x_2176__boxed_703_; uint8_t v_res_704_; lean_object* v_r_705_; 
v_x_2176__boxed_703_ = lean_unbox_usize(v_x_701_);
lean_dec(v_x_701_);
v_res_704_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_700_, v_x_2176__boxed_703_, v_x_702_);
lean_dec(v_x_702_);
lean_dec_ref(v_x_700_);
v_r_705_ = lean_box(v_res_704_);
return v_r_705_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(lean_object* v_x_706_, lean_object* v_x_707_){
_start:
{
uint64_t v___y_709_; lean_object* v___x_712_; 
v___x_712_ = l_unsafeCast___redArg(v_x_707_);
if (lean_obj_tag(v___x_712_) == 0)
{
uint64_t v___x_713_; 
v___x_713_ = 1723ULL;
v___y_709_ = v___x_713_;
goto v___jp_708_;
}
else
{
uint64_t v_hash_714_; 
v_hash_714_ = lean_ctor_get_uint64(v___x_712_, sizeof(void*)*2);
lean_dec(v___x_712_);
v___y_709_ = v_hash_714_;
goto v___jp_708_;
}
v___jp_708_:
{
size_t v___x_710_; uint8_t v___x_711_; 
v___x_710_ = lean_uint64_to_usize(v___y_709_);
v___x_711_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_706_, v___x_710_, v_x_707_);
return v___x_711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object* v_x_715_, lean_object* v_x_716_){
_start:
{
uint8_t v_res_717_; lean_object* v_r_718_; 
v_res_717_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v_x_715_, v_x_716_);
lean_dec(v_x_716_);
lean_dec_ref(v_x_715_);
v_r_718_ = lean_box(v_res_717_);
return v_r_718_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_x1_719_, lean_object* v_x2_720_){
_start:
{
lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_721_ = l_Lean_IR_Decl_name(v_x2_720_);
v___x_722_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v_x1_719_, v___x_721_);
lean_dec(v___x_721_);
if (v___x_722_ == 0)
{
uint8_t v___x_723_; 
v___x_723_ = 1;
return v___x_723_;
}
else
{
uint8_t v___x_724_; 
v___x_724_ = 0;
return v___x_724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_x1_725_, lean_object* v_x2_726_){
_start:
{
uint8_t v_res_727_; lean_object* v_r_728_; 
v_res_727_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(v_x1_725_, v_x2_726_);
lean_dec_ref(v_x2_726_);
lean_dec_ref(v_x1_725_);
v_r_728_ = lean_box(v_res_727_);
return v_r_728_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_x_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_x_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(v_x_733_);
lean_dec_ref(v_x_733_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(lean_object* v_x_735_, lean_object* v_x_736_, lean_object* v_x_737_, lean_object* v_x_738_){
_start:
{
lean_object* v_ks_739_; lean_object* v_vs_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_764_; 
v_ks_739_ = lean_ctor_get(v_x_735_, 0);
v_vs_740_ = lean_ctor_get(v_x_735_, 1);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_764_ == 0)
{
v___x_742_ = v_x_735_;
v_isShared_743_ = v_isSharedCheck_764_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_vs_740_);
lean_inc(v_ks_739_);
lean_dec(v_x_735_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_764_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = lean_array_get_size(v_ks_739_);
v___x_745_ = lean_nat_dec_lt(v_x_736_, v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
lean_dec(v_x_736_);
v___x_746_ = lean_array_push(v_ks_739_, v_x_737_);
v___x_747_ = lean_array_push(v_vs_740_, v_x_738_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 1, v___x_747_);
lean_ctor_set(v___x_742_, 0, v___x_746_);
v___x_749_ = v___x_742_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_746_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
else
{
lean_object* v_k_x27_751_; uint8_t v___x_752_; 
v_k_x27_751_ = lean_array_fget_borrowed(v_ks_739_, v_x_736_);
v___x_752_ = lean_name_eq(v_x_737_, v_k_x27_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_754_; 
if (v_isShared_743_ == 0)
{
v___x_754_ = v___x_742_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_ks_739_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_vs_740_);
v___x_754_ = v_reuseFailAlloc_758_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = lean_unsigned_to_nat(1u);
v___x_756_ = lean_nat_add(v_x_736_, v___x_755_);
lean_dec(v_x_736_);
v_x_735_ = v___x_754_;
v_x_736_ = v___x_756_;
goto _start;
}
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_759_ = lean_array_fset(v_ks_739_, v_x_736_, v_x_737_);
v___x_760_ = lean_array_fset(v_vs_740_, v_x_736_, v_x_738_);
lean_dec(v_x_736_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 1, v___x_760_);
lean_ctor_set(v___x_742_, 0, v___x_759_);
v___x_762_ = v___x_742_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(lean_object* v_n_765_, lean_object* v_k_766_, lean_object* v_v_767_){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(v_n_765_, v___x_768_, v_k_766_, v_v_767_);
return v___x_769_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_box(0);
v___x_771_ = l_unsafeCast___redArg(v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(lean_object* v_x_773_, size_t v_x_774_, size_t v_x_775_, lean_object* v_x_776_, lean_object* v_x_777_){
_start:
{
if (lean_obj_tag(v_x_773_) == 0)
{
lean_object* v_es_778_; size_t v___x_779_; size_t v___x_780_; lean_object* v_j_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
v_es_778_ = lean_ctor_get(v_x_773_, 0);
v___x_779_ = ((size_t)31ULL);
v___x_780_ = lean_usize_land(v_x_774_, v___x_779_);
v_j_781_ = lean_usize_to_nat(v___x_780_);
v___x_782_ = lean_array_get_size(v_es_778_);
v___x_783_ = lean_nat_dec_lt(v_j_781_, v___x_782_);
if (v___x_783_ == 0)
{
lean_dec(v_j_781_);
lean_dec(v_x_777_);
lean_dec(v_x_776_);
return v_x_773_;
}
else
{
lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_822_; 
lean_inc_ref(v_es_778_);
v_isSharedCheck_822_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v_x_773_, 0);
lean_dec(v_unused_823_);
v___x_785_ = v_x_773_;
v_isShared_786_ = v_isSharedCheck_822_;
goto v_resetjp_784_;
}
else
{
lean_dec(v_x_773_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_822_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v_v_787_; lean_object* v___x_788_; lean_object* v_xs_x27_789_; lean_object* v___y_791_; 
v_v_787_ = lean_array_fget(v_es_778_, v_j_781_);
v___x_788_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0);
v_xs_x27_789_ = lean_array_fset(v_es_778_, v_j_781_, v___x_788_);
switch(lean_obj_tag(v_v_787_))
{
case 0:
{
lean_object* v_key_796_; lean_object* v_val_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_807_; 
v_key_796_ = lean_ctor_get(v_v_787_, 0);
v_val_797_ = lean_ctor_get(v_v_787_, 1);
v_isSharedCheck_807_ = !lean_is_exclusive(v_v_787_);
if (v_isSharedCheck_807_ == 0)
{
v___x_799_ = v_v_787_;
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_val_797_);
lean_inc(v_key_796_);
lean_dec(v_v_787_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
uint8_t v___x_801_; 
v___x_801_ = lean_name_eq(v_x_776_, v_key_796_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_del_object(v___x_799_);
v___x_802_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_796_, v_val_797_, v_x_776_, v_x_777_);
v___x_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
v___y_791_ = v___x_803_;
goto v___jp_790_;
}
else
{
lean_object* v___x_805_; 
lean_dec(v_val_797_);
lean_dec(v_key_796_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v_x_777_);
lean_ctor_set(v___x_799_, 0, v_x_776_);
v___x_805_ = v___x_799_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_x_776_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_x_777_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v___y_791_ = v___x_805_;
goto v___jp_790_;
}
}
}
}
case 1:
{
lean_object* v_node_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_820_; 
v_node_808_ = lean_ctor_get(v_v_787_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_v_787_);
if (v_isSharedCheck_820_ == 0)
{
v___x_810_ = v_v_787_;
v_isShared_811_ = v_isSharedCheck_820_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_node_808_);
lean_dec(v_v_787_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_820_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
size_t v___x_812_; size_t v___x_813_; size_t v___x_814_; size_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_812_ = ((size_t)5ULL);
v___x_813_ = lean_usize_shift_right(v_x_774_, v___x_812_);
v___x_814_ = ((size_t)1ULL);
v___x_815_ = lean_usize_add(v_x_775_, v___x_814_);
v___x_816_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_node_808_, v___x_813_, v___x_815_, v_x_776_, v_x_777_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_816_);
v___x_818_ = v___x_810_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v___y_791_ = v___x_818_;
goto v___jp_790_;
}
}
}
default: 
{
lean_object* v___x_821_; 
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v_x_776_);
lean_ctor_set(v___x_821_, 1, v_x_777_);
v___y_791_ = v___x_821_;
goto v___jp_790_;
}
}
v___jp_790_:
{
lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_792_ = lean_array_fset(v_xs_x27_789_, v_j_781_, v___y_791_);
lean_dec(v_j_781_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_792_);
v___x_794_ = v___x_785_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
else
{
lean_object* v_ks_824_; lean_object* v_vs_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_843_; 
v_ks_824_ = lean_ctor_get(v_x_773_, 0);
v_vs_825_ = lean_ctor_get(v_x_773_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_843_ == 0)
{
v___x_827_ = v_x_773_;
v_isShared_828_ = v_isSharedCheck_843_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_vs_825_);
lean_inc(v_ks_824_);
lean_dec(v_x_773_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_843_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_ks_824_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_vs_825_);
v___x_830_ = v_reuseFailAlloc_842_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v_newNode_831_; size_t v___x_832_; uint8_t v___x_833_; 
v_newNode_831_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(v___x_830_, v_x_776_, v_x_777_);
v___x_832_ = ((size_t)7ULL);
v___x_833_ = lean_usize_dec_le(v___x_832_, v_x_775_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_834_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_831_);
v___x_835_ = lean_unsigned_to_nat(4u);
v___x_836_ = lean_nat_dec_lt(v___x_834_, v___x_835_);
lean_dec(v___x_834_);
if (v___x_836_ == 0)
{
lean_object* v_ks_837_; lean_object* v_vs_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v_ks_837_ = lean_ctor_get(v_newNode_831_, 0);
lean_inc_ref(v_ks_837_);
v_vs_838_ = lean_ctor_get(v_newNode_831_, 1);
lean_inc_ref(v_vs_838_);
lean_dec_ref(v_newNode_831_);
v___x_839_ = lean_unsigned_to_nat(0u);
v___x_840_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__1);
v___x_841_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(v_x_775_, v_ks_837_, v_vs_838_, v___x_839_, v___x_840_);
lean_dec_ref(v_vs_838_);
lean_dec_ref(v_ks_837_);
return v___x_841_;
}
else
{
return v_newNode_831_;
}
}
else
{
return v_newNode_831_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(size_t v_depth_844_, lean_object* v_keys_845_, lean_object* v_vals_846_, lean_object* v_i_847_, lean_object* v_entries_848_){
_start:
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = lean_array_get_size(v_keys_845_);
v___x_850_ = lean_nat_dec_lt(v_i_847_, v___x_849_);
if (v___x_850_ == 0)
{
lean_dec(v_i_847_);
return v_entries_848_;
}
else
{
lean_object* v_k_851_; lean_object* v_v_852_; uint64_t v___y_854_; lean_object* v___x_865_; 
v_k_851_ = lean_array_fget_borrowed(v_keys_845_, v_i_847_);
v_v_852_ = lean_array_fget_borrowed(v_vals_846_, v_i_847_);
v___x_865_ = l_unsafeCast___redArg(v_k_851_);
if (lean_obj_tag(v___x_865_) == 0)
{
uint64_t v___x_866_; 
v___x_866_ = 1723ULL;
v___y_854_ = v___x_866_;
goto v___jp_853_;
}
else
{
uint64_t v_hash_867_; 
v_hash_867_ = lean_ctor_get_uint64(v___x_865_, sizeof(void*)*2);
lean_dec(v___x_865_);
v___y_854_ = v_hash_867_;
goto v___jp_853_;
}
v___jp_853_:
{
size_t v_h_855_; size_t v___x_856_; lean_object* v___x_857_; size_t v___x_858_; size_t v___x_859_; size_t v___x_860_; size_t v_h_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_h_855_ = lean_uint64_to_usize(v___y_854_);
v___x_856_ = ((size_t)5ULL);
v___x_857_ = lean_unsigned_to_nat(1u);
v___x_858_ = ((size_t)1ULL);
v___x_859_ = lean_usize_sub(v_depth_844_, v___x_858_);
v___x_860_ = lean_usize_mul(v___x_856_, v___x_859_);
v_h_861_ = lean_usize_shift_right(v_h_855_, v___x_860_);
v___x_862_ = lean_nat_add(v_i_847_, v___x_857_);
lean_dec(v_i_847_);
lean_inc(v_v_852_);
lean_inc(v_k_851_);
v___x_863_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_entries_848_, v_h_861_, v_depth_844_, v_k_851_, v_v_852_);
v_i_847_ = v___x_862_;
v_entries_848_ = v___x_863_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_depth_868_, lean_object* v_keys_869_, lean_object* v_vals_870_, lean_object* v_i_871_, lean_object* v_entries_872_){
_start:
{
size_t v_depth_boxed_873_; lean_object* v_res_874_; 
v_depth_boxed_873_ = lean_unbox_usize(v_depth_868_);
lean_dec(v_depth_868_);
v_res_874_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(v_depth_boxed_873_, v_keys_869_, v_vals_870_, v_i_871_, v_entries_872_);
lean_dec_ref(v_vals_870_);
lean_dec_ref(v_keys_869_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___boxed(lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_, lean_object* v_x_878_, lean_object* v_x_879_){
_start:
{
size_t v_x_2344__boxed_880_; size_t v_x_2345__boxed_881_; lean_object* v_res_882_; 
v_x_2344__boxed_880_ = lean_unbox_usize(v_x_876_);
lean_dec(v_x_876_);
v_x_2345__boxed_881_ = lean_unbox_usize(v_x_877_);
lean_dec(v_x_877_);
v_res_882_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_x_875_, v_x_2344__boxed_880_, v_x_2345__boxed_881_, v_x_878_, v_x_879_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(lean_object* v_x_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
uint64_t v___y_887_; lean_object* v___x_891_; 
v___x_891_ = l_unsafeCast___redArg(v_x_884_);
if (lean_obj_tag(v___x_891_) == 0)
{
uint64_t v___x_892_; 
v___x_892_ = 1723ULL;
v___y_887_ = v___x_892_;
goto v___jp_886_;
}
else
{
uint64_t v_hash_893_; 
v_hash_893_ = lean_ctor_get_uint64(v___x_891_, sizeof(void*)*2);
lean_dec(v___x_891_);
v___y_887_ = v_hash_893_;
goto v___jp_886_;
}
v___jp_886_:
{
size_t v___x_888_; size_t v___x_889_; lean_object* v___x_890_; 
v___x_888_ = lean_uint64_to_usize(v___y_887_);
v___x_889_ = ((size_t)1ULL);
v___x_890_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_x_883_, v___x_888_, v___x_889_, v_x_884_, v_x_885_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_s_894_, lean_object* v_d_895_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = l_Lean_IR_Decl_name(v_d_895_);
v___x_897_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(v_s_894_, v___x_896_, v_d_895_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_));
v___x_926_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_();
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2(lean_object* v_n_929_, lean_object* v_as_930_, lean_object* v_lo_931_, lean_object* v_hi_932_, lean_object* v_w_933_, lean_object* v_hlo_934_, lean_object* v_hhi_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v_n_929_, v_as_930_, v_lo_931_, v_hi_932_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_937_, lean_object* v_as_938_, lean_object* v_lo_939_, lean_object* v_hi_940_, lean_object* v_w_941_, lean_object* v_hlo_942_, lean_object* v_hhi_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2(v_n_937_, v_as_938_, v_lo_939_, v_hi_940_, v_w_941_, v_hlo_942_, v_hhi_943_);
lean_dec(v_hi_940_);
lean_dec(v_n_937_);
return v_res_944_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b2_945_, lean_object* v_x_946_, lean_object* v_x_947_){
_start:
{
uint8_t v___x_948_; 
v___x_948_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v_x_946_, v_x_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___boxed(lean_object* v_00_u03b2_949_, lean_object* v_x_950_, lean_object* v_x_951_){
_start:
{
uint8_t v_res_952_; lean_object* v_r_953_; 
v_res_952_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3(v_00_u03b2_949_, v_x_950_, v_x_951_);
lean_dec(v_x_951_);
lean_dec_ref(v_x_950_);
v_r_953_ = lean_box(v_res_952_);
return v_r_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b2_954_, lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v_x_957_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(v_x_955_, v_x_956_, v_x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_n_959_, lean_object* v_lo_960_, lean_object* v_hi_961_, lean_object* v_hhi_962_, lean_object* v_pivot_963_, lean_object* v_as_964_, lean_object* v_i_965_, lean_object* v_k_966_, lean_object* v_ilo_967_, lean_object* v_ik_968_, lean_object* v_w_969_){
_start:
{
lean_object* v___x_970_; 
v___x_970_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_961_, v_pivot_963_, v_as_964_, v_i_965_, v_k_966_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_n_971_, lean_object* v_lo_972_, lean_object* v_hi_973_, lean_object* v_hhi_974_, lean_object* v_pivot_975_, lean_object* v_as_976_, lean_object* v_i_977_, lean_object* v_k_978_, lean_object* v_ilo_979_, lean_object* v_ik_980_, lean_object* v_w_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3(v_n_971_, v_lo_972_, v_hi_973_, v_hhi_974_, v_pivot_975_, v_as_976_, v_i_977_, v_k_978_, v_ilo_979_, v_ik_980_, v_w_981_);
lean_dec_ref(v_pivot_975_);
lean_dec(v_hi_973_);
lean_dec(v_lo_972_);
lean_dec(v_n_971_);
return v_res_982_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5(lean_object* v_00_u03b2_983_, lean_object* v_x_984_, size_t v_x_985_, lean_object* v_x_986_){
_start:
{
uint8_t v___x_987_; 
v___x_987_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_984_, v_x_985_, v_x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object* v_00_u03b2_988_, lean_object* v_x_989_, lean_object* v_x_990_, lean_object* v_x_991_){
_start:
{
size_t v_x_2631__boxed_992_; uint8_t v_res_993_; lean_object* v_r_994_; 
v_x_2631__boxed_992_ = lean_unbox_usize(v_x_990_);
lean_dec(v_x_990_);
v_res_993_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5(v_00_u03b2_988_, v_x_989_, v_x_2631__boxed_992_, v_x_991_);
lean_dec(v_x_991_);
lean_dec_ref(v_x_989_);
v_r_994_ = lean_box(v_res_993_);
return v_r_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7(lean_object* v_00_u03b2_995_, lean_object* v_x_996_, size_t v_x_997_, size_t v_x_998_, lean_object* v_x_999_, lean_object* v_x_1000_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_x_996_, v_x_997_, v_x_998_, v_x_999_, v_x_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___boxed(lean_object* v_00_u03b2_1002_, lean_object* v_x_1003_, lean_object* v_x_1004_, lean_object* v_x_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
size_t v_x_2642__boxed_1008_; size_t v_x_2643__boxed_1009_; lean_object* v_res_1010_; 
v_x_2642__boxed_1008_ = lean_unbox_usize(v_x_1004_);
lean_dec(v_x_1004_);
v_x_2643__boxed_1009_ = lean_unbox_usize(v_x_1005_);
lean_dec(v_x_1005_);
v_res_1010_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7(v_00_u03b2_1002_, v_x_1003_, v_x_2642__boxed_1008_, v_x_2643__boxed_1009_, v_x_1006_, v_x_1007_);
return v_res_1010_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6(lean_object* v_00_u03b2_1011_, lean_object* v_keys_1012_, lean_object* v_vals_1013_, lean_object* v_heq_1014_, lean_object* v_i_1015_, lean_object* v_k_1016_){
_start:
{
uint8_t v___x_1017_; 
v___x_1017_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(v_keys_1012_, v_i_1015_, v_k_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___boxed(lean_object* v_00_u03b2_1018_, lean_object* v_keys_1019_, lean_object* v_vals_1020_, lean_object* v_heq_1021_, lean_object* v_i_1022_, lean_object* v_k_1023_){
_start:
{
uint8_t v_res_1024_; lean_object* v_r_1025_; 
v_res_1024_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6(v_00_u03b2_1018_, v_keys_1019_, v_vals_1020_, v_heq_1021_, v_i_1022_, v_k_1023_);
lean_dec(v_k_1023_);
lean_dec_ref(v_vals_1020_);
lean_dec_ref(v_keys_1019_);
v_r_1025_ = lean_box(v_res_1024_);
return v_r_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9(lean_object* v_00_u03b2_1026_, lean_object* v_n_1027_, lean_object* v_k_1028_, lean_object* v_v_1029_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(v_n_1027_, v_k_1028_, v_v_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10(lean_object* v_00_u03b2_1031_, size_t v_depth_1032_, lean_object* v_keys_1033_, lean_object* v_vals_1034_, lean_object* v_heq_1035_, lean_object* v_i_1036_, lean_object* v_entries_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(v_depth_1032_, v_keys_1033_, v_vals_1034_, v_i_1036_, v_entries_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b2_1039_, lean_object* v_depth_1040_, lean_object* v_keys_1041_, lean_object* v_vals_1042_, lean_object* v_heq_1043_, lean_object* v_i_1044_, lean_object* v_entries_1045_){
_start:
{
size_t v_depth_boxed_1046_; lean_object* v_res_1047_; 
v_depth_boxed_1046_ = lean_unbox_usize(v_depth_1040_);
lean_dec(v_depth_1040_);
v_res_1047_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10(v_00_u03b2_1039_, v_depth_boxed_1046_, v_keys_1041_, v_vals_1042_, v_heq_1043_, v_i_1044_, v_entries_1045_);
lean_dec_ref(v_vals_1042_);
lean_dec_ref(v_keys_1041_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(v_x_1049_, v_x_1050_, v_x_1051_, v_x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__1(lean_object* v_irDecls_1054_){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1055_ = lean_array_get_size(v_irDecls_1054_);
v___x_1056_ = lean_unsigned_to_nat(0u);
v___x_1057_ = lean_nat_dec_eq(v___x_1055_, v___x_1056_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___y_1067_; uint8_t v___x_1069_; 
v___x_1058_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0));
v___x_1064_ = lean_unsigned_to_nat(1u);
v___x_1065_ = lean_nat_sub(v___x_1055_, v___x_1064_);
v___x_1069_ = lean_nat_dec_le(v___x_1056_, v___x_1065_);
if (v___x_1069_ == 0)
{
lean_inc(v___x_1065_);
v___y_1067_ = v___x_1065_;
goto v___jp_1066_;
}
else
{
v___y_1067_ = v___x_1056_;
goto v___jp_1066_;
}
v___jp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_1058_, v___x_1055_, v_irDecls_1054_, v___y_1060_, v___y_1061_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_1061_);
v___x_1063_ = l_unsafeCast___redArg(v___x_1062_);
lean_dec_ref(v___x_1062_);
return v___x_1063_;
}
v___jp_1066_:
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_nat_dec_le(v___y_1067_, v___x_1065_);
if (v___x_1068_ == 0)
{
lean_dec(v___x_1065_);
lean_inc(v___y_1067_);
v___y_1060_ = v___y_1067_;
v___y_1061_ = v___y_1067_;
goto v___jp_1059_;
}
else
{
v___y_1060_ = v___y_1067_;
v___y_1061_ = v___x_1065_;
goto v___jp_1059_;
}
}
}
else
{
lean_object* v___x_1070_; 
v___x_1070_ = l_unsafeCast___redArg(v_irDecls_1054_);
lean_dec_ref(v_irDecls_1054_);
return v___x_1070_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4(lean_object* v_initDecls_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_unsafeCast___redArg(v_initDecls_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4___boxed(lean_object* v_initDecls_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4(v_initDecls_1073_);
lean_dec_ref(v_initDecls_1073_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7(lean_object* v_modPkg_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_unsafeCast___redArg(v_modPkg_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7___boxed(lean_object* v_modPkg_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7(v_modPkg_1077_);
lean_dec_ref(v_modPkg_1077_);
return v_res_1078_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0(void){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_1079_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = lean_box(0);
v___x_1084_ = l_unsafeCast___redArg(v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* lean_ir_export_entries(lean_object* v_env_1085_){
_start:
{
lean_object* v___x_1086_; lean_object* v_toEnvExtension_1087_; lean_object* v_name_1088_; lean_object* v_asyncMode_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___y_1094_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v_irDecls_1126_; lean_object* v___x_1127_; lean_object* v___y_1129_; lean_object* v___y_1130_; uint8_t v___x_1133_; 
v___x_1086_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1087_ = lean_ctor_get(v___x_1086_, 0);
v_name_1088_ = lean_ctor_get(v___x_1086_, 1);
v_asyncMode_1089_ = lean_ctor_get(v_toEnvExtension_1087_, 2);
v___x_1090_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1091_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1));
v___x_1092_ = lean_box(0);
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0));
lean_inc_ref(v_env_1085_);
v___x_1125_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1090_, v___x_1086_, v_env_1085_, v_asyncMode_1089_);
v_irDecls_1126_ = l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(v___x_1124_, v___x_1125_);
v___x_1127_ = lean_array_get_size(v_irDecls_1126_);
v___x_1133_ = lean_nat_dec_eq(v___x_1127_, v___x_1123_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___y_1137_; uint8_t v___x_1139_; 
v___x_1134_ = lean_unsigned_to_nat(1u);
v___x_1135_ = lean_nat_sub(v___x_1127_, v___x_1134_);
v___x_1139_ = lean_nat_dec_le(v___x_1123_, v___x_1135_);
if (v___x_1139_ == 0)
{
lean_inc(v___x_1135_);
v___y_1137_ = v___x_1135_;
goto v___jp_1136_;
}
else
{
v___y_1137_ = v___x_1123_;
goto v___jp_1136_;
}
v___jp_1136_:
{
uint8_t v___x_1138_; 
v___x_1138_ = lean_nat_dec_le(v___y_1137_, v___x_1135_);
if (v___x_1138_ == 0)
{
lean_dec(v___x_1135_);
lean_inc(v___y_1137_);
v___y_1129_ = v___y_1137_;
v___y_1130_ = v___y_1137_;
goto v___jp_1128_;
}
else
{
v___y_1129_ = v___y_1137_;
v___y_1130_ = v___x_1135_;
goto v___jp_1128_;
}
}
}
else
{
lean_object* v___x_1140_; 
v___x_1140_ = l_unsafeCast___redArg(v_irDecls_1126_);
lean_dec_ref(v_irDecls_1126_);
v___y_1094_ = v___x_1140_;
goto v___jp_1093_;
}
v___jp_1093_:
{
lean_object* v___x_1095_; lean_object* v_ext_1096_; lean_object* v_toEnvExtension_1097_; lean_object* v_name_1098_; lean_object* v_exportEntriesFn_1099_; lean_object* v_asyncMode_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v_private_1104_; lean_object* v___x_1105_; lean_object* v_toEnvExtension_1106_; lean_object* v_name_1107_; lean_object* v_exportEntriesFn_1108_; lean_object* v_asyncMode_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v_private_1112_; lean_object* v_initDecls_1113_; lean_object* v_modPkg_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1095_ = l_Lean_regularInitAttr;
v_ext_1096_ = lean_ctor_get(v___x_1095_, 1);
v_toEnvExtension_1097_ = lean_ctor_get(v_ext_1096_, 0);
v_name_1098_ = lean_ctor_get(v_ext_1096_, 1);
v_exportEntriesFn_1099_ = lean_ctor_get(v_ext_1096_, 4);
v_asyncMode_1100_ = lean_ctor_get(v_toEnvExtension_1097_, 2);
v___x_1101_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
lean_inc_ref_n(v_env_1085_, 3);
v___x_1102_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1091_, v_ext_1096_, v_env_1085_, v_asyncMode_1100_, v___x_1101_);
lean_inc_ref(v_exportEntriesFn_1099_);
v___x_1103_ = lean_apply_2(v_exportEntriesFn_1099_, v_env_1085_, v___x_1102_);
v_private_1104_ = lean_ctor_get(v___x_1103_, 2);
lean_inc(v_private_1104_);
lean_dec_ref(v___x_1103_);
v___x_1105_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_1106_ = lean_ctor_get(v___x_1105_, 0);
v_name_1107_ = lean_ctor_get(v___x_1105_, 1);
v_exportEntriesFn_1108_ = lean_ctor_get(v___x_1105_, 4);
v_asyncMode_1109_ = lean_ctor_get(v_toEnvExtension_1106_, 2);
v___x_1110_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1092_, v___x_1105_, v_env_1085_, v_asyncMode_1109_, v___x_1101_);
lean_inc_ref(v_exportEntriesFn_1108_);
v___x_1111_ = lean_apply_2(v_exportEntriesFn_1108_, v_env_1085_, v___x_1110_);
v_private_1112_ = lean_ctor_get(v___x_1111_, 2);
lean_inc(v_private_1112_);
lean_dec_ref(v___x_1111_);
v_initDecls_1113_ = l_unsafeCast___redArg(v_private_1104_);
lean_dec(v_private_1104_);
v_modPkg_1114_ = l_unsafeCast___redArg(v_private_1112_);
lean_dec(v_private_1112_);
lean_inc(v_name_1088_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v_name_1088_);
lean_ctor_set(v___x_1115_, 1, v___y_1094_);
lean_inc(v_name_1098_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v_name_1098_);
lean_ctor_set(v___x_1116_, 1, v_initDecls_1113_);
lean_inc(v_name_1107_);
v___x_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1117_, 0, v_name_1107_);
lean_ctor_set(v___x_1117_, 1, v_modPkg_1114_);
v___x_1118_ = lean_unsigned_to_nat(3u);
v___x_1119_ = lean_mk_empty_array_with_capacity(v___x_1118_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1115_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1116_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1117_);
return v___x_1122_;
}
v___jp_1128_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v___x_1127_, v_irDecls_1126_, v___y_1129_, v___y_1130_);
lean_dec(v___y_1130_);
v___x_1132_ = l_unsafeCast___redArg(v___x_1131_);
lean_dec_ref(v___x_1131_);
v___y_1094_ = v___x_1132_;
goto v___jp_1093_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(lean_object* v_as_1141_, lean_object* v_k_1142_, lean_object* v_x_1143_, lean_object* v_x_1144_){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v_m_1147_; lean_object* v_a_1148_; uint8_t v___x_1149_; 
v___x_1145_ = lean_nat_add(v_x_1143_, v_x_1144_);
v___x_1146_ = lean_unsigned_to_nat(1u);
v_m_1147_ = lean_nat_shiftr(v___x_1145_, v___x_1146_);
lean_dec(v___x_1145_);
v_a_1148_ = lean_array_fget_borrowed(v_as_1141_, v_m_1147_);
v___x_1149_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v_a_1148_, v_k_1142_);
if (v___x_1149_ == 0)
{
uint8_t v___x_1150_; 
lean_dec(v_x_1144_);
v___x_1150_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v_k_1142_, v_a_1148_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; 
lean_dec(v_m_1147_);
lean_dec(v_x_1143_);
lean_inc(v_a_1148_);
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_a_1148_);
return v___x_1151_;
}
else
{
lean_object* v___x_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; uint8_t v___y_1156_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = lean_nat_dec_eq(v_m_1147_, v___x_1152_);
v___x_1154_ = lean_nat_sub(v_m_1147_, v___x_1146_);
lean_dec(v_m_1147_);
if (v___x_1153_ == 0)
{
uint8_t v___x_1159_; 
v___x_1159_ = lean_nat_dec_lt(v___x_1154_, v_x_1143_);
v___y_1156_ = v___x_1159_;
goto v___jp_1155_;
}
else
{
v___y_1156_ = v___x_1153_;
goto v___jp_1155_;
}
v___jp_1155_:
{
if (v___y_1156_ == 0)
{
v_x_1144_ = v___x_1154_;
goto _start;
}
else
{
lean_object* v___x_1158_; 
lean_dec(v___x_1154_);
lean_dec(v_x_1143_);
v___x_1158_ = lean_box(0);
return v___x_1158_;
}
}
}
}
else
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
lean_dec(v_x_1143_);
v___x_1160_ = lean_nat_add(v_m_1147_, v___x_1146_);
lean_dec(v_m_1147_);
v___x_1161_ = lean_nat_dec_le(v___x_1160_, v_x_1144_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
lean_dec(v___x_1160_);
lean_dec(v_x_1144_);
v___x_1162_ = lean_box(0);
return v___x_1162_;
}
else
{
v_x_1143_ = v___x_1160_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg___boxed(lean_object* v_as_1164_, lean_object* v_k_1165_, lean_object* v_x_1166_, lean_object* v_x_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v_as_1164_, v_k_1165_, v_x_1166_, v_x_1167_);
lean_dec_ref(v_k_1165_);
lean_dec_ref(v_as_1164_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1169_, lean_object* v_vals_1170_, lean_object* v_i_1171_, lean_object* v_k_1172_){
_start:
{
lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = lean_array_get_size(v_keys_1169_);
v___x_1174_ = lean_nat_dec_lt(v_i_1171_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; 
lean_dec(v_i_1171_);
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
else
{
lean_object* v_k_x27_1176_; uint8_t v___x_1177_; 
v_k_x27_1176_ = lean_array_fget_borrowed(v_keys_1169_, v_i_1171_);
v___x_1177_ = lean_name_eq(v_k_1172_, v_k_x27_1176_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_unsigned_to_nat(1u);
v___x_1179_ = lean_nat_add(v_i_1171_, v___x_1178_);
lean_dec(v_i_1171_);
v_i_1171_ = v___x_1179_;
goto _start;
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_array_fget_borrowed(v_vals_1170_, v_i_1171_);
lean_dec(v_i_1171_);
lean_inc(v___x_1181_);
v___x_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1183_, lean_object* v_vals_1184_, lean_object* v_i_1185_, lean_object* v_k_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(v_keys_1183_, v_vals_1184_, v_i_1185_, v_k_1186_);
lean_dec(v_k_1186_);
lean_dec_ref(v_vals_1184_);
lean_dec_ref(v_keys_1183_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(lean_object* v_x_1188_, size_t v_x_1189_, lean_object* v_x_1190_){
_start:
{
if (lean_obj_tag(v_x_1188_) == 0)
{
lean_object* v_es_1191_; lean_object* v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; lean_object* v_j_1195_; lean_object* v___x_1196_; 
v_es_1191_ = lean_ctor_get(v_x_1188_, 0);
v___x_1192_ = lean_box(2);
v___x_1193_ = ((size_t)31ULL);
v___x_1194_ = lean_usize_land(v_x_1189_, v___x_1193_);
v_j_1195_ = lean_usize_to_nat(v___x_1194_);
v___x_1196_ = lean_array_get_borrowed(v___x_1192_, v_es_1191_, v_j_1195_);
lean_dec(v_j_1195_);
switch(lean_obj_tag(v___x_1196_))
{
case 0:
{
lean_object* v_key_1197_; lean_object* v_val_1198_; uint8_t v___x_1199_; 
v_key_1197_ = lean_ctor_get(v___x_1196_, 0);
v_val_1198_ = lean_ctor_get(v___x_1196_, 1);
v___x_1199_ = lean_name_eq(v_x_1190_, v_key_1197_);
if (v___x_1199_ == 0)
{
lean_object* v___x_1200_; 
v___x_1200_ = lean_box(0);
return v___x_1200_;
}
else
{
lean_object* v___x_1201_; 
lean_inc(v_val_1198_);
v___x_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1201_, 0, v_val_1198_);
return v___x_1201_;
}
}
case 1:
{
lean_object* v_node_1202_; size_t v___x_1203_; size_t v___x_1204_; 
v_node_1202_ = lean_ctor_get(v___x_1196_, 0);
v___x_1203_ = ((size_t)5ULL);
v___x_1204_ = lean_usize_shift_right(v_x_1189_, v___x_1203_);
v_x_1188_ = v_node_1202_;
v_x_1189_ = v___x_1204_;
goto _start;
}
default: 
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_box(0);
return v___x_1206_;
}
}
}
else
{
lean_object* v_ks_1207_; lean_object* v_vs_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v_ks_1207_ = lean_ctor_get(v_x_1188_, 0);
v_vs_1208_ = lean_ctor_get(v_x_1188_, 1);
v___x_1209_ = lean_unsigned_to_nat(0u);
v___x_1210_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(v_ks_1207_, v_vs_1208_, v___x_1209_, v_x_1190_);
return v___x_1210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_1211_, lean_object* v_x_1212_, lean_object* v_x_1213_){
_start:
{
size_t v_x_441__boxed_1214_; lean_object* v_res_1215_; 
v_x_441__boxed_1214_ = lean_unbox_usize(v_x_1212_);
lean_dec(v_x_1212_);
v_res_1215_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(v_x_1211_, v_x_441__boxed_1214_, v_x_1213_);
lean_dec(v_x_1213_);
lean_dec_ref(v_x_1211_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(lean_object* v_x_1216_, lean_object* v_x_1217_){
_start:
{
uint64_t v___y_1219_; lean_object* v___x_1222_; 
v___x_1222_ = l_unsafeCast___redArg(v_x_1217_);
if (lean_obj_tag(v___x_1222_) == 0)
{
uint64_t v___x_1223_; 
v___x_1223_ = 1723ULL;
v___y_1219_ = v___x_1223_;
goto v___jp_1218_;
}
else
{
uint64_t v_hash_1224_; 
v_hash_1224_ = lean_ctor_get_uint64(v___x_1222_, sizeof(void*)*2);
lean_dec(v___x_1222_);
v___y_1219_ = v_hash_1224_;
goto v___jp_1218_;
}
v___jp_1218_:
{
size_t v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_uint64_to_usize(v___y_1219_);
v___x_1221_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(v_x_1216_, v___x_1220_, v_x_1217_);
return v___x_1221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg___boxed(lean_object* v_x_1225_, lean_object* v_x_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v_x_1225_, v_x_1226_);
lean_dec(v_x_1226_);
lean_dec_ref(v_x_1225_);
return v_res_1227_;
}
}
static lean_object* _init_l_Lean_IR_findEnvDecl___closed__0(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1229_ = lean_box(0);
v___x_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
lean_ctor_set(v___x_1230_, 1, v___x_1228_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl(lean_object* v_env_1231_, lean_object* v_declName_1232_){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1243_; 
v___x_1233_ = lean_box(0);
v___x_1234_ = lean_obj_once(&l_Lean_IR_findEnvDecl___closed__0, &l_Lean_IR_findEnvDecl___closed__0_once, _init_l_Lean_IR_findEnvDecl___closed__0);
v___x_1235_ = l_Lean_IR_declMapExt;
v___x_1243_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1231_, v_declName_1232_);
if (lean_obj_tag(v___x_1243_) == 0)
{
goto v___jp_1236_;
}
else
{
lean_object* v_val_1244_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v_val_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_val_1244_);
lean_dec_ref_known(v___x_1243_, 1);
v___x_1258_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1234_, v___x_1235_, v_env_1231_, v_val_1244_);
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = lean_array_get_size(v___x_1258_);
v___x_1261_ = lean_nat_dec_lt(v___x_1259_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_dec_ref(v___x_1258_);
goto v___jp_1245_;
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; 
v___x_1262_ = lean_unsigned_to_nat(1u);
v___x_1263_ = lean_nat_sub(v___x_1260_, v___x_1262_);
v___x_1264_ = lean_nat_dec_le(v___x_1259_, v___x_1263_);
if (v___x_1264_ == 0)
{
lean_dec(v___x_1263_);
lean_dec_ref(v___x_1258_);
goto v___jp_1245_;
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_tmpDecl_1267_; lean_object* v___x_1268_; 
v___x_1265_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1266_ = lean_box(0);
lean_inc(v_declName_1232_);
v_tmpDecl_1267_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1267_, 0, v_declName_1232_);
lean_ctor_set(v_tmpDecl_1267_, 1, v___x_1265_);
lean_ctor_set(v_tmpDecl_1267_, 2, v___x_1266_);
lean_ctor_set(v_tmpDecl_1267_, 3, v___x_1233_);
v___x_1268_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1258_, v_tmpDecl_1267_, v___x_1259_, v___x_1263_);
lean_dec_ref_known(v_tmpDecl_1267_, 4);
lean_dec_ref(v___x_1258_);
if (lean_obj_tag(v___x_1268_) == 0)
{
goto v___jp_1245_;
}
else
{
lean_dec(v_val_1244_);
lean_dec(v_declName_1232_);
lean_dec_ref(v_env_1231_);
return v___x_1268_;
}
}
}
v___jp_1245_:
{
uint8_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1246_ = 0;
v___x_1247_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1234_, v___x_1235_, v_env_1231_, v_val_1244_, v___x_1246_);
lean_dec(v_val_1244_);
v___x_1248_ = lean_unsigned_to_nat(0u);
v___x_1249_ = lean_array_get_size(v___x_1247_);
v___x_1250_ = lean_nat_dec_lt(v___x_1248_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_dec_ref(v___x_1247_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_nat_sub(v___x_1249_, v___x_1251_);
v___x_1253_ = lean_nat_dec_le(v___x_1248_, v___x_1252_);
if (v___x_1253_ == 0)
{
lean_dec(v___x_1252_);
lean_dec_ref(v___x_1247_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v_tmpDecl_1256_; lean_object* v___x_1257_; 
v___x_1254_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1255_ = lean_box(0);
lean_inc(v_declName_1232_);
v_tmpDecl_1256_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1256_, 0, v_declName_1232_);
lean_ctor_set(v_tmpDecl_1256_, 1, v___x_1254_);
lean_ctor_set(v_tmpDecl_1256_, 2, v___x_1255_);
lean_ctor_set(v_tmpDecl_1256_, 3, v___x_1233_);
v___x_1257_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1247_, v_tmpDecl_1256_, v___x_1248_, v___x_1252_);
lean_dec_ref_known(v_tmpDecl_1256_, 4);
lean_dec_ref(v___x_1247_);
if (lean_obj_tag(v___x_1257_) == 0)
{
goto v___jp_1236_;
}
else
{
lean_dec(v_declName_1232_);
lean_dec_ref(v_env_1231_);
return v___x_1257_;
}
}
}
}
}
v___jp_1236_:
{
lean_object* v_toEnvExtension_1237_; lean_object* v_asyncMode_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v_snd_1241_; lean_object* v___x_1242_; 
v_toEnvExtension_1237_ = lean_ctor_get(v___x_1235_, 0);
v_asyncMode_1238_ = lean_ctor_get(v_toEnvExtension_1237_, 2);
v___x_1239_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
v___x_1240_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1234_, v___x_1235_, v_env_1231_, v_asyncMode_1238_, v___x_1239_);
v_snd_1241_ = lean_ctor_get(v___x_1240_, 1);
lean_inc(v_snd_1241_);
lean_dec(v___x_1240_);
v___x_1242_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v_snd_1241_, v_declName_1232_);
lean_dec(v_declName_1232_);
lean_dec(v_snd_1241_);
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0(lean_object* v_00_u03b2_1269_, lean_object* v_x_1270_, lean_object* v_x_1271_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v_x_1270_, v_x_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___boxed(lean_object* v_00_u03b2_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0(v_00_u03b2_1273_, v_x_1274_, v_x_1275_);
lean_dec(v_x_1275_);
lean_dec_ref(v_x_1274_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1(lean_object* v_as_1277_, lean_object* v_k_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v_as_1277_, v_k_1278_, v_x_1279_, v_x_1280_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___boxed(lean_object* v_as_1283_, lean_object* v_k_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1(v_as_1283_, v_k_1284_, v_x_1285_, v_x_1286_, v_x_1287_);
lean_dec_ref(v_k_1284_);
lean_dec_ref(v_as_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0(lean_object* v_00_u03b2_1289_, lean_object* v_x_1290_, size_t v_x_1291_, lean_object* v_x_1292_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(v_x_1290_, v_x_1291_, v_x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
size_t v_x_605__boxed_1298_; lean_object* v_res_1299_; 
v_x_605__boxed_1298_ = lean_unbox_usize(v_x_1296_);
lean_dec(v_x_1296_);
v_res_1299_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0(v_00_u03b2_1294_, v_x_1295_, v_x_605__boxed_1298_, v_x_1297_);
lean_dec(v_x_1297_);
lean_dec_ref(v_x_1295_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1300_, lean_object* v_keys_1301_, lean_object* v_vals_1302_, lean_object* v_heq_1303_, lean_object* v_i_1304_, lean_object* v_k_1305_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(v_keys_1301_, v_vals_1302_, v_i_1304_, v_k_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1307_, lean_object* v_keys_1308_, lean_object* v_vals_1309_, lean_object* v_heq_1310_, lean_object* v_i_1311_, lean_object* v_k_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1(v_00_u03b2_1307_, v_keys_1308_, v_vals_1309_, v_heq_1310_, v_i_1311_, v_k_1312_);
lean_dec(v_k_1312_);
lean_dec_ref(v_vals_1309_);
lean_dec_ref(v_keys_1308_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* lean_ir_find_env_decl(lean_object* v_env_1314_, lean_object* v_declName_1315_){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1317_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1314_, v_declName_1315_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v___x_1318_; lean_object* v_toEnvExtension_1319_; lean_object* v_asyncMode_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1318_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1319_ = lean_ctor_get(v___x_1318_, 0);
v_asyncMode_1320_ = lean_ctor_get(v_toEnvExtension_1319_, 2);
v___x_1321_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
v___x_1322_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1316_, v___x_1318_, v_env_1314_, v_asyncMode_1320_, v___x_1321_);
v___x_1323_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v___x_1322_, v_declName_1315_);
lean_dec(v_declName_1315_);
lean_dec(v___x_1322_);
return v___x_1323_;
}
else
{
lean_object* v_val_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___y_1329_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; 
v_val_1324_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_val_1324_);
lean_dec_ref_known(v___x_1317_, 1);
v___x_1325_ = lean_box(0);
v___x_1326_ = lean_obj_once(&l_Lean_IR_findEnvDecl___closed__0, &l_Lean_IR_findEnvDecl___closed__0_once, _init_l_Lean_IR_findEnvDecl___closed__0);
v___x_1327_ = l_Lean_IR_declMapExt;
v___x_1342_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1326_, v___x_1327_, v_env_1314_, v_val_1324_);
v___x_1343_ = lean_unsigned_to_nat(0u);
v___x_1344_ = lean_array_get_size(v___x_1342_);
v___x_1345_ = lean_nat_dec_lt(v___x_1343_, v___x_1344_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
lean_dec_ref(v___x_1342_);
v___x_1346_ = lean_box(0);
v___y_1329_ = v___x_1346_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1347_ = lean_unsigned_to_nat(1u);
v___x_1348_ = lean_nat_sub(v___x_1344_, v___x_1347_);
v___x_1349_ = lean_nat_dec_le(v___x_1343_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; 
lean_dec(v___x_1348_);
lean_dec_ref(v___x_1342_);
v___x_1350_ = lean_box(0);
v___y_1329_ = v___x_1350_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v_tmpDecl_1353_; lean_object* v___x_1354_; 
v___x_1351_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1352_ = lean_box(0);
lean_inc(v_declName_1315_);
v_tmpDecl_1353_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1353_, 0, v_declName_1315_);
lean_ctor_set(v_tmpDecl_1353_, 1, v___x_1351_);
lean_ctor_set(v_tmpDecl_1353_, 2, v___x_1352_);
lean_ctor_set(v_tmpDecl_1353_, 3, v___x_1325_);
v___x_1354_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1342_, v_tmpDecl_1353_, v___x_1343_, v___x_1348_);
lean_dec_ref_known(v_tmpDecl_1353_, 4);
lean_dec_ref(v___x_1342_);
if (lean_obj_tag(v___x_1354_) == 0)
{
v___y_1329_ = v___x_1354_;
goto v___jp_1328_;
}
else
{
lean_dec(v_val_1324_);
lean_dec(v_declName_1315_);
lean_dec_ref(v_env_1314_);
return v___x_1354_;
}
}
}
v___jp_1328_:
{
uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; 
v___x_1330_ = 0;
v___x_1331_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1326_, v___x_1327_, v_env_1314_, v_val_1324_, v___x_1330_);
lean_dec(v_val_1324_);
lean_dec_ref(v_env_1314_);
v___x_1332_ = lean_unsigned_to_nat(0u);
v___x_1333_ = lean_array_get_size(v___x_1331_);
v___x_1334_ = lean_nat_dec_lt(v___x_1332_, v___x_1333_);
if (v___x_1334_ == 0)
{
lean_dec_ref(v___x_1331_);
lean_dec(v_declName_1315_);
return v___y_1329_;
}
else
{
lean_object* v___x_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1335_ = lean_unsigned_to_nat(1u);
v___x_1336_ = lean_nat_sub(v___x_1333_, v___x_1335_);
v___x_1337_ = lean_nat_dec_le(v___x_1332_, v___x_1336_);
if (v___x_1337_ == 0)
{
lean_dec(v___x_1336_);
lean_dec_ref(v___x_1331_);
lean_dec(v_declName_1315_);
return v___y_1329_;
}
else
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v_tmpDecl_1340_; lean_object* v___x_1341_; 
lean_dec(v___y_1329_);
v___x_1338_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1339_ = lean_box(0);
v_tmpDecl_1340_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1340_, 0, v_declName_1315_);
lean_ctor_set(v_tmpDecl_1340_, 1, v___x_1338_);
lean_ctor_set(v_tmpDecl_1340_, 2, v___x_1339_);
lean_ctor_set(v_tmpDecl_1340_, 3, v___x_1325_);
v___x_1341_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1331_, v_tmpDecl_1340_, v___x_1332_, v___x_1336_);
lean_dec_ref_known(v_tmpDecl_1340_, 4);
lean_dec_ref(v___x_1331_);
return v___x_1341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lean_ir_find_env_decl_boxed(lean_object* v_env_1355_, lean_object* v_declName_1356_){
_start:
{
lean_object* v___x_1357_; lean_object* v_boxed_1358_; lean_object* v___x_1359_; 
v___x_1357_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
lean_inc(v_declName_1356_);
v_boxed_1358_ = l_Lean_Compiler_LCNF_mkBoxedName(v_declName_1356_);
v___x_1359_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1355_, v_declName_1356_);
lean_dec(v_declName_1356_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v___x_1360_; lean_object* v_toEnvExtension_1361_; lean_object* v_asyncMode_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1360_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1361_ = lean_ctor_get(v___x_1360_, 0);
v_asyncMode_1362_ = lean_ctor_get(v_toEnvExtension_1361_, 2);
v___x_1363_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
v___x_1364_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1357_, v___x_1360_, v_env_1355_, v_asyncMode_1362_, v___x_1363_);
v___x_1365_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v___x_1364_, v_boxed_1358_);
lean_dec(v_boxed_1358_);
lean_dec(v___x_1364_);
return v___x_1365_;
}
else
{
lean_object* v_val_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___y_1371_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v_val_1366_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_val_1366_);
lean_dec_ref_known(v___x_1359_, 1);
v___x_1367_ = lean_box(0);
v___x_1368_ = lean_obj_once(&l_Lean_IR_findEnvDecl___closed__0, &l_Lean_IR_findEnvDecl___closed__0_once, _init_l_Lean_IR_findEnvDecl___closed__0);
v___x_1369_ = l_Lean_IR_declMapExt;
v___x_1384_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1368_, v___x_1369_, v_env_1355_, v_val_1366_);
v___x_1385_ = lean_unsigned_to_nat(0u);
v___x_1386_ = lean_array_get_size(v___x_1384_);
v___x_1387_ = lean_nat_dec_lt(v___x_1385_, v___x_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; 
lean_dec_ref(v___x_1384_);
v___x_1388_ = lean_box(0);
v___y_1371_ = v___x_1388_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1389_; lean_object* v___x_1390_; uint8_t v___x_1391_; 
v___x_1389_ = lean_unsigned_to_nat(1u);
v___x_1390_ = lean_nat_sub(v___x_1386_, v___x_1389_);
v___x_1391_ = lean_nat_dec_le(v___x_1385_, v___x_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; 
lean_dec(v___x_1390_);
lean_dec_ref(v___x_1384_);
v___x_1392_ = lean_box(0);
v___y_1371_ = v___x_1392_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v_tmpDecl_1395_; lean_object* v___x_1396_; 
v___x_1393_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1394_ = lean_box(0);
lean_inc(v_boxed_1358_);
v_tmpDecl_1395_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1395_, 0, v_boxed_1358_);
lean_ctor_set(v_tmpDecl_1395_, 1, v___x_1393_);
lean_ctor_set(v_tmpDecl_1395_, 2, v___x_1394_);
lean_ctor_set(v_tmpDecl_1395_, 3, v___x_1367_);
v___x_1396_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1384_, v_tmpDecl_1395_, v___x_1385_, v___x_1390_);
lean_dec_ref_known(v_tmpDecl_1395_, 4);
lean_dec_ref(v___x_1384_);
if (lean_obj_tag(v___x_1396_) == 0)
{
v___y_1371_ = v___x_1396_;
goto v___jp_1370_;
}
else
{
lean_dec(v_val_1366_);
lean_dec(v_boxed_1358_);
lean_dec_ref(v_env_1355_);
return v___x_1396_;
}
}
}
v___jp_1370_:
{
uint8_t v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1372_ = 0;
v___x_1373_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1368_, v___x_1369_, v_env_1355_, v_val_1366_, v___x_1372_);
lean_dec(v_val_1366_);
lean_dec_ref(v_env_1355_);
v___x_1374_ = lean_unsigned_to_nat(0u);
v___x_1375_ = lean_array_get_size(v___x_1373_);
v___x_1376_ = lean_nat_dec_lt(v___x_1374_, v___x_1375_);
if (v___x_1376_ == 0)
{
lean_dec_ref(v___x_1373_);
lean_dec(v_boxed_1358_);
return v___y_1371_;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1377_ = lean_unsigned_to_nat(1u);
v___x_1378_ = lean_nat_sub(v___x_1375_, v___x_1377_);
v___x_1379_ = lean_nat_dec_le(v___x_1374_, v___x_1378_);
if (v___x_1379_ == 0)
{
lean_dec(v___x_1378_);
lean_dec_ref(v___x_1373_);
lean_dec(v_boxed_1358_);
return v___y_1371_;
}
else
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v_tmpDecl_1382_; lean_object* v___x_1383_; 
lean_dec(v___y_1371_);
v___x_1380_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1381_ = lean_box(0);
v_tmpDecl_1382_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1382_, 0, v_boxed_1358_);
lean_ctor_set(v_tmpDecl_1382_, 1, v___x_1380_);
lean_ctor_set(v_tmpDecl_1382_, 2, v___x_1381_);
lean_ctor_set(v_tmpDecl_1382_, 3, v___x_1367_);
v___x_1383_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1373_, v_tmpDecl_1382_, v___x_1374_, v___x_1378_);
lean_dec_ref_known(v_tmpDecl_1382_, 4);
lean_dec_ref(v___x_1373_);
return v___x_1383_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lean_has_compile_error(lean_object* v_env_1397_, lean_object* v_constName_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1397_, v_constName_1398_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v___x_1400_; lean_object* v_toEnvExtension_1401_; lean_object* v_asyncMode_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1400_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1401_ = lean_ctor_get(v___x_1400_, 0);
v_asyncMode_1402_ = lean_ctor_get(v_toEnvExtension_1401_, 2);
v___x_1403_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1404_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
v___x_1405_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1403_, v___x_1400_, v_env_1397_, v_asyncMode_1402_, v___x_1404_);
v___x_1406_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v___x_1405_, v_constName_1398_);
lean_dec(v_constName_1398_);
lean_dec(v___x_1405_);
if (v___x_1406_ == 0)
{
uint8_t v___x_1407_; 
v___x_1407_ = 1;
return v___x_1407_;
}
else
{
uint8_t v___x_1408_; 
v___x_1408_ = 0;
return v___x_1408_;
}
}
else
{
uint8_t v___x_1409_; 
lean_dec_ref_known(v___x_1399_, 1);
lean_dec(v_constName_1398_);
lean_dec_ref(v_env_1397_);
v___x_1409_ = 0;
return v___x_1409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_hasCompileError___boxed(lean_object* v_env_1410_, lean_object* v_constName_1411_){
_start:
{
uint8_t v_res_1412_; lean_object* v_r_1413_; 
v_res_1412_ = lean_has_compile_error(v_env_1410_, v_constName_1411_);
v_r_1413_ = lean_box(v_res_1412_);
return v_r_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg(lean_object* v_n_1414_, lean_object* v_a_1415_){
_start:
{
lean_object* v___x_1417_; lean_object* v_env_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1417_ = lean_st_ref_get(v_a_1415_);
v_env_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc_ref(v_env_1418_);
lean_dec(v___x_1417_);
v___x_1419_ = l_Lean_IR_findEnvDecl(v_env_1418_, v_n_1414_);
v___x_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg___boxed(lean_object* v_n_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Lean_IR_findDecl___redArg(v_n_1421_, v_a_1422_);
lean_dec(v_a_1422_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl(lean_object* v_n_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_Lean_IR_findDecl___redArg(v_n_1425_, v_a_1427_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___boxed(lean_object* v_n_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_IR_findDecl(v_n_1430_, v_a_1431_, v_a_1432_);
lean_dec(v_a_1432_);
lean_dec_ref(v_a_1431_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg(lean_object* v_n_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v___x_1438_; lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1453_; 
v___x_1438_ = l_Lean_IR_findDecl___redArg(v_n_1435_, v_a_1436_);
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1453_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1453_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
if (lean_obj_tag(v_a_1439_) == 0)
{
uint8_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1443_ = 0;
v___x_1444_ = lean_box(v___x_1443_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 0, v___x_1444_);
v___x_1446_ = v___x_1441_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
else
{
uint8_t v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1451_; 
lean_dec_ref_known(v_a_1439_, 1);
v___x_1448_ = 1;
v___x_1449_ = lean_box(v___x_1448_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 0, v___x_1449_);
v___x_1451_ = v___x_1441_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg___boxed(lean_object* v_n_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_IR_containsDecl___redArg(v_n_1454_, v_a_1455_);
lean_dec(v_a_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl(lean_object* v_n_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_IR_containsDecl___redArg(v_n_1458_, v_a_1460_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___boxed(lean_object* v_n_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_Lean_IR_containsDecl(v_n_1463_, v_a_1464_, v_a_1465_);
lean_dec(v_a_1465_);
lean_dec_ref(v_a_1464_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(lean_object* v_msg_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_ref_1472_; lean_object* v___x_1473_; lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1482_; 
v_ref_1472_ = lean_ctor_get(v___y_1469_, 2);
v___x_1473_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(v_msg_1468_, v___y_1469_, v___y_1470_);
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1476_ = v___x_1473_;
v_isShared_1477_ = v_isSharedCheck_1482_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1473_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1482_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1480_; 
lean_inc(v_ref_1472_);
v___x_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1478_, 0, v_ref_1472_);
lean_ctor_set(v___x_1478_, 1, v_a_1474_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set_tag(v___x_1476_, 1);
lean_ctor_set(v___x_1476_, 0, v___x_1478_);
v___x_1480_ = v___x_1476_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg___boxed(lean_object* v_msg_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v_msg_1483_, v___y_1484_, v___y_1485_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl(lean_object* v_n_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v___x_1494_; lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1512_; 
lean_inc(v_n_1490_);
v___x_1494_ = l_Lean_IR_findDecl___redArg(v_n_1490_, v_a_1492_);
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1512_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1512_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
if (lean_obj_tag(v_a_1495_) == 1)
{
lean_object* v_val_1499_; lean_object* v___x_1501_; 
lean_dec(v_n_1490_);
v_val_1499_ = lean_ctor_get(v_a_1495_, 0);
lean_inc(v_val_1499_);
lean_dec_ref_known(v_a_1495_, 1);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v_val_1499_);
v___x_1501_ = v___x_1497_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_val_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
else
{
lean_object* v___x_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
lean_del_object(v___x_1497_);
lean_dec(v_a_1495_);
v___x_1503_ = ((lean_object*)(l_Lean_IR_getDecl___closed__0));
v___x_1504_ = 1;
v___x_1505_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_1490_, v___x_1504_);
v___x_1506_ = lean_string_append(v___x_1503_, v___x_1505_);
lean_dec_ref(v___x_1505_);
v___x_1507_ = ((lean_object*)(l_Lean_IR_getDecl___closed__1));
v___x_1508_ = lean_string_append(v___x_1506_, v___x_1507_);
v___x_1509_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
v___x_1510_ = l_Lean_MessageData_ofFormat(v___x_1509_);
v___x_1511_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v___x_1510_, v_a_1491_, v_a_1492_);
return v___x_1511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl___boxed(lean_object* v_n_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_IR_getDecl(v_n_1513_, v_a_1514_, v_a_1515_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0(lean_object* v_00_u03b1_1518_, lean_object* v_msg_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v_msg_1519_, v___y_1520_, v___y_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___boxed(lean_object* v_00_u03b1_1524_, lean_object* v_msg_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0(v_00_u03b1_1524_, v_msg_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg(lean_object* v_n_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v_env_1535_; lean_object* v___x_1536_; lean_object* v_toEnvExtension_1537_; lean_object* v_asyncMode_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1533_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1534_ = lean_st_ref_get(v_a_1531_);
v_env_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc_ref(v_env_1535_);
lean_dec(v___x_1534_);
v___x_1536_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1537_ = lean_ctor_get(v___x_1536_, 0);
v_asyncMode_1538_ = lean_ctor_get(v_toEnvExtension_1537_, 2);
v___x_1539_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
v___x_1540_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1533_, v___x_1536_, v_env_1535_, v_asyncMode_1538_, v___x_1539_);
v___x_1541_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v___x_1540_, v_n_1530_);
lean_dec(v___x_1540_);
v___x_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg___boxed(lean_object* v_n_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lean_IR_findLocalDecl___redArg(v_n_1543_, v_a_1544_);
lean_dec(v_a_1544_);
lean_dec(v_n_1543_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl(lean_object* v_n_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lean_IR_findLocalDecl___redArg(v_n_1547_, v_a_1549_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___boxed(lean_object* v_n_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_IR_findLocalDecl(v_n_1552_, v_a_1553_, v_a_1554_);
lean_dec(v_a_1554_);
lean_dec_ref(v_a_1553_);
lean_dec(v_n_1552_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecls(lean_object* v_env_1557_){
_start:
{
lean_object* v___x_1558_; lean_object* v_toEnvExtension_1559_; lean_object* v_asyncMode_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1558_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1559_ = lean_ctor_get(v___x_1558_, 0);
v_asyncMode_1560_ = lean_ctor_get(v_toEnvExtension_1559_, 2);
v___x_1561_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1562_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1561_, v___x_1558_, v_env_1557_, v_asyncMode_1560_);
return v___x_1562_;
}
}
static lean_object* _init_l_Lean_IR_addDecl___redArg___closed__0(void){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0);
v___x_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
}
static lean_object* _init_l_Lean_IR_addDecl___redArg___closed__1(void){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = lean_obj_once(&l_Lean_IR_addDecl___redArg___closed__0, &l_Lean_IR_addDecl___redArg___closed__0_once, _init_l_Lean_IR_addDecl___redArg___closed__0);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg(lean_object* v_decl_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v___x_1570_; lean_object* v_env_1571_; lean_object* v_nextMacroScope_1572_; lean_object* v_ngen_1573_; lean_object* v_auxDeclNGen_1574_; lean_object* v_traceState_1575_; lean_object* v_messages_1576_; lean_object* v_infoState_1577_; lean_object* v_snapshotTasks_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1594_; 
v___x_1570_ = lean_st_ref_take(v_a_1568_);
v_env_1571_ = lean_ctor_get(v___x_1570_, 0);
v_nextMacroScope_1572_ = lean_ctor_get(v___x_1570_, 1);
v_ngen_1573_ = lean_ctor_get(v___x_1570_, 2);
v_auxDeclNGen_1574_ = lean_ctor_get(v___x_1570_, 3);
v_traceState_1575_ = lean_ctor_get(v___x_1570_, 4);
v_messages_1576_ = lean_ctor_get(v___x_1570_, 6);
v_infoState_1577_ = lean_ctor_get(v___x_1570_, 7);
v_snapshotTasks_1578_ = lean_ctor_get(v___x_1570_, 8);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1594_ == 0)
{
lean_object* v_unused_1595_; 
v_unused_1595_ = lean_ctor_get(v___x_1570_, 5);
lean_dec(v_unused_1595_);
v___x_1580_ = v___x_1570_;
v_isShared_1581_ = v_isSharedCheck_1594_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_snapshotTasks_1578_);
lean_inc(v_infoState_1577_);
lean_inc(v_messages_1576_);
lean_inc(v_traceState_1575_);
lean_inc(v_auxDeclNGen_1574_);
lean_inc(v_ngen_1573_);
lean_inc(v_nextMacroScope_1572_);
lean_inc(v_env_1571_);
lean_dec(v___x_1570_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1594_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1582_; lean_object* v_toEnvExtension_1583_; lean_object* v_asyncMode_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1582_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1583_ = lean_ctor_get(v___x_1582_, 0);
v_asyncMode_1584_ = lean_ctor_get(v_toEnvExtension_1583_, 2);
v___x_1585_ = lean_box(0);
v___x_1586_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__2);
v___x_1587_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1582_, v_env_1571_, v_decl_1567_, v_asyncMode_1584_, v___x_1586_);
v___x_1588_ = lean_obj_once(&l_Lean_IR_addDecl___redArg___closed__1, &l_Lean_IR_addDecl___redArg___closed__1_once, _init_l_Lean_IR_addDecl___redArg___closed__1);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 5, v___x_1588_);
lean_ctor_set(v___x_1580_, 0, v___x_1587_);
v___x_1590_ = v___x_1580_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1593_, 1, v_nextMacroScope_1572_);
lean_ctor_set(v_reuseFailAlloc_1593_, 2, v_ngen_1573_);
lean_ctor_set(v_reuseFailAlloc_1593_, 3, v_auxDeclNGen_1574_);
lean_ctor_set(v_reuseFailAlloc_1593_, 4, v_traceState_1575_);
lean_ctor_set(v_reuseFailAlloc_1593_, 5, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1593_, 6, v_messages_1576_);
lean_ctor_set(v_reuseFailAlloc_1593_, 7, v_infoState_1577_);
lean_ctor_set(v_reuseFailAlloc_1593_, 8, v_snapshotTasks_1578_);
v___x_1590_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = lean_st_ref_put(v_a_1568_, v___x_1590_);
v___x_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1585_);
return v___x_1592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg___boxed(lean_object* v_decl_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lean_IR_addDecl___redArg(v_decl_1596_, v_a_1597_);
lean_dec(v_a_1597_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl(lean_object* v_decl_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Lean_IR_addDecl___redArg(v_decl_1600_, v_a_1602_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___boxed(lean_object* v_decl_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_IR_addDecl(v_decl_1605_, v_a_1606_, v_a_1607_);
lean_dec(v_a_1607_);
lean_dec_ref(v_a_1606_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(lean_object* v_as_1610_, size_t v_i_1611_, size_t v_stop_1612_, lean_object* v_b_1613_, lean_object* v___y_1614_){
_start:
{
uint8_t v___x_1616_; 
v___x_1616_ = lean_usize_dec_eq(v_i_1611_, v_stop_1612_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = lean_array_uget_borrowed(v_as_1610_, v_i_1611_);
lean_inc(v___x_1617_);
v___x_1618_ = l_Lean_IR_addDecl___redArg(v___x_1617_, v___y_1614_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; size_t v___x_1620_; size_t v___x_1621_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1620_ = ((size_t)1ULL);
v___x_1621_ = lean_usize_add(v_i_1611_, v___x_1620_);
v_i_1611_ = v___x_1621_;
v_b_1613_ = v_a_1619_;
goto _start;
}
else
{
return v___x_1618_;
}
}
else
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1623_, 0, v_b_1613_);
return v___x_1623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg___boxed(lean_object* v_as_1624_, lean_object* v_i_1625_, lean_object* v_stop_1626_, lean_object* v_b_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
size_t v_i_boxed_1630_; size_t v_stop_boxed_1631_; lean_object* v_res_1632_; 
v_i_boxed_1630_ = lean_unbox_usize(v_i_1625_);
lean_dec(v_i_1625_);
v_stop_boxed_1631_ = lean_unbox_usize(v_stop_1626_);
lean_dec(v_stop_1626_);
v_res_1632_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_as_1624_, v_i_boxed_1630_, v_stop_boxed_1631_, v_b_1627_, v___y_1628_);
lean_dec(v___y_1628_);
lean_dec_ref(v_as_1624_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecls(lean_object* v_decls_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1637_ = lean_unsigned_to_nat(0u);
v___x_1638_ = lean_array_get_size(v_decls_1633_);
v___x_1639_ = lean_box(0);
v___x_1640_ = lean_nat_dec_lt(v___x_1637_, v___x_1638_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
return v___x_1641_;
}
else
{
uint8_t v___x_1642_; 
v___x_1642_ = lean_nat_dec_le(v___x_1638_, v___x_1638_);
if (v___x_1642_ == 0)
{
if (v___x_1640_ == 0)
{
lean_object* v___x_1643_; 
v___x_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1639_);
return v___x_1643_;
}
else
{
size_t v___x_1644_; size_t v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = ((size_t)0ULL);
v___x_1645_ = lean_usize_of_nat(v___x_1638_);
v___x_1646_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_decls_1633_, v___x_1644_, v___x_1645_, v___x_1639_, v_a_1635_);
return v___x_1646_;
}
}
else
{
size_t v___x_1647_; size_t v___x_1648_; lean_object* v___x_1649_; 
v___x_1647_ = ((size_t)0ULL);
v___x_1648_ = lean_usize_of_nat(v___x_1638_);
v___x_1649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_decls_1633_, v___x_1647_, v___x_1648_, v___x_1639_, v_a_1635_);
return v___x_1649_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecls___boxed(lean_object* v_decls_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lean_IR_addDecls(v_decls_1650_, v_a_1651_, v_a_1652_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
lean_dec_ref(v_decls_1650_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0(lean_object* v_as_1655_, size_t v_i_1656_, size_t v_stop_1657_, lean_object* v_b_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_as_1655_, v_i_1656_, v_stop_1657_, v_b_1658_, v___y_1660_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___boxed(lean_object* v_as_1663_, lean_object* v_i_1664_, lean_object* v_stop_1665_, lean_object* v_b_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
size_t v_i_boxed_1670_; size_t v_stop_boxed_1671_; lean_object* v_res_1672_; 
v_i_boxed_1670_ = lean_unbox_usize(v_i_1664_);
lean_dec(v_i_1664_);
v_stop_boxed_1671_ = lean_unbox_usize(v_stop_1665_);
lean_dec(v_stop_1665_);
v_res_1672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0(v_as_1663_, v_i_boxed_1670_, v_stop_boxed_1671_, v_b_1666_, v___y_1667_, v___y_1668_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec_ref(v_as_1663_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(lean_object* v_n_1676_, lean_object* v_as_1677_, size_t v_sz_1678_, size_t v_i_1679_, lean_object* v_b_1680_){
_start:
{
uint8_t v___x_1681_; 
v___x_1681_ = lean_usize_dec_lt(v_i_1679_, v_sz_1678_);
if (v___x_1681_ == 0)
{
lean_inc_ref(v_b_1680_);
return v_b_1680_;
}
else
{
lean_object* v___x_1682_; lean_object* v_a_1683_; lean_object* v___x_1684_; uint8_t v___x_1685_; 
v___x_1682_ = lean_box(0);
v_a_1683_ = lean_array_uget_borrowed(v_as_1677_, v_i_1679_);
v___x_1684_ = l_Lean_IR_Decl_name(v_a_1683_);
v___x_1685_ = lean_name_eq(v___x_1684_, v_n_1676_);
lean_dec(v___x_1684_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1686_; size_t v___x_1687_; size_t v___x_1688_; 
v___x_1686_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0));
v___x_1687_ = ((size_t)1ULL);
v___x_1688_ = lean_usize_add(v_i_1679_, v___x_1687_);
v_i_1679_ = v___x_1688_;
v_b_1680_ = v___x_1686_;
goto _start;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_inc(v_a_1683_);
v___x_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1690_, 0, v_a_1683_);
v___x_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
lean_ctor_set(v___x_1692_, 1, v___x_1682_);
return v___x_1692_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___boxed(lean_object* v_n_1693_, lean_object* v_as_1694_, lean_object* v_sz_1695_, lean_object* v_i_1696_, lean_object* v_b_1697_){
_start:
{
size_t v_sz_boxed_1698_; size_t v_i_boxed_1699_; lean_object* v_res_1700_; 
v_sz_boxed_1698_ = lean_unbox_usize(v_sz_1695_);
lean_dec(v_sz_1695_);
v_i_boxed_1699_ = lean_unbox_usize(v_i_1696_);
lean_dec(v_i_1696_);
v_res_1700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(v_n_1693_, v_as_1694_, v_sz_boxed_1698_, v_i_boxed_1699_, v_b_1697_);
lean_dec_ref(v_b_1697_);
lean_dec_ref(v_as_1694_);
lean_dec(v_n_1693_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27(lean_object* v_env_1701_, lean_object* v_n_1702_, lean_object* v_decls_1703_){
_start:
{
lean_object* v___x_1704_; size_t v_sz_1705_; size_t v___x_1706_; lean_object* v___x_1707_; lean_object* v_fst_1708_; 
v___x_1704_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0));
v_sz_1705_ = lean_array_size(v_decls_1703_);
v___x_1706_ = ((size_t)0ULL);
v___x_1707_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(v_n_1702_, v_decls_1703_, v_sz_1705_, v___x_1706_, v___x_1704_);
v_fst_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_fst_1708_);
lean_dec_ref(v___x_1707_);
if (lean_obj_tag(v_fst_1708_) == 0)
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_IR_findEnvDecl(v_env_1701_, v_n_1702_);
return v___x_1709_;
}
else
{
lean_object* v_val_1710_; 
v_val_1710_ = lean_ctor_get(v_fst_1708_, 0);
lean_inc(v_val_1710_);
lean_dec_ref_known(v_fst_1708_, 1);
if (lean_obj_tag(v_val_1710_) == 0)
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Lean_IR_findEnvDecl(v_env_1701_, v_n_1702_);
return v___x_1711_;
}
else
{
lean_dec(v_n_1702_);
lean_dec_ref(v_env_1701_);
return v_val_1710_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27___boxed(lean_object* v_env_1712_, lean_object* v_n_1713_, lean_object* v_decls_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l_Lean_IR_findEnvDecl_x27(v_env_1712_, v_n_1713_, v_decls_1714_);
lean_dec_ref(v_decls_1714_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg(lean_object* v_n_1716_, lean_object* v_decls_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v___x_1720_; lean_object* v_env_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1720_ = lean_st_ref_get(v_a_1718_);
v_env_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc_ref(v_env_1721_);
lean_dec(v___x_1720_);
v___x_1722_ = l_Lean_IR_findEnvDecl_x27(v_env_1721_, v_n_1716_, v_decls_1717_);
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg___boxed(lean_object* v_n_1724_, lean_object* v_decls_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lean_IR_findDecl_x27___redArg(v_n_1724_, v_decls_1725_, v_a_1726_);
lean_dec(v_a_1726_);
lean_dec_ref(v_decls_1725_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27(lean_object* v_n_1729_, lean_object* v_decls_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_IR_findDecl_x27___redArg(v_n_1729_, v_decls_1730_, v_a_1732_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___boxed(lean_object* v_n_1735_, lean_object* v_decls_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_IR_findDecl_x27(v_n_1735_, v_decls_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec_ref(v_decls_1736_);
return v_res_1740_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(lean_object* v_n_1741_, lean_object* v_as_1742_, size_t v_i_1743_, size_t v_stop_1744_){
_start:
{
uint8_t v___x_1745_; 
v___x_1745_ = lean_usize_dec_eq(v_i_1743_, v_stop_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; 
v___x_1746_ = lean_array_uget_borrowed(v_as_1742_, v_i_1743_);
v___x_1747_ = l_Lean_IR_Decl_name(v___x_1746_);
v___x_1748_ = lean_name_eq(v___x_1747_, v_n_1741_);
lean_dec(v___x_1747_);
if (v___x_1748_ == 0)
{
size_t v___x_1749_; size_t v___x_1750_; 
v___x_1749_ = ((size_t)1ULL);
v___x_1750_ = lean_usize_add(v_i_1743_, v___x_1749_);
v_i_1743_ = v___x_1750_;
goto _start;
}
else
{
return v___x_1748_;
}
}
else
{
uint8_t v___x_1752_; 
v___x_1752_ = 0;
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0___boxed(lean_object* v_n_1753_, lean_object* v_as_1754_, lean_object* v_i_1755_, lean_object* v_stop_1756_){
_start:
{
size_t v_i_boxed_1757_; size_t v_stop_boxed_1758_; uint8_t v_res_1759_; lean_object* v_r_1760_; 
v_i_boxed_1757_ = lean_unbox_usize(v_i_1755_);
lean_dec(v_i_1755_);
v_stop_boxed_1758_ = lean_unbox_usize(v_stop_1756_);
lean_dec(v_stop_1756_);
v_res_1759_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(v_n_1753_, v_as_1754_, v_i_boxed_1757_, v_stop_boxed_1758_);
lean_dec_ref(v_as_1754_);
lean_dec(v_n_1753_);
v_r_1760_ = lean_box(v_res_1759_);
return v_r_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg(lean_object* v_n_1761_, lean_object* v_decls_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1765_ = lean_unsigned_to_nat(0u);
v___x_1766_ = lean_array_get_size(v_decls_1762_);
v___x_1767_ = lean_nat_dec_lt(v___x_1765_, v___x_1766_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lean_IR_containsDecl___redArg(v_n_1761_, v_a_1763_);
return v___x_1768_;
}
else
{
if (v___x_1767_ == 0)
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_IR_containsDecl___redArg(v_n_1761_, v_a_1763_);
return v___x_1769_;
}
else
{
size_t v___x_1770_; size_t v___x_1771_; uint8_t v___x_1772_; 
v___x_1770_ = ((size_t)0ULL);
v___x_1771_ = lean_usize_of_nat(v___x_1766_);
v___x_1772_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(v_n_1761_, v_decls_1762_, v___x_1770_, v___x_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Lean_IR_containsDecl___redArg(v_n_1761_, v_a_1763_);
return v___x_1773_;
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
lean_dec(v_n_1761_);
v___x_1774_ = lean_box(v___x_1767_);
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
return v___x_1775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg___boxed(lean_object* v_n_1776_, lean_object* v_decls_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_IR_containsDecl_x27___redArg(v_n_1776_, v_decls_1777_, v_a_1778_);
lean_dec(v_a_1778_);
lean_dec_ref(v_decls_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27(lean_object* v_n_1781_, lean_object* v_decls_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_IR_containsDecl_x27___redArg(v_n_1781_, v_decls_1782_, v_a_1784_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___boxed(lean_object* v_n_1787_, lean_object* v_decls_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lean_IR_containsDecl_x27(v_n_1787_, v_decls_1788_, v_a_1789_, v_a_1790_);
lean_dec(v_a_1790_);
lean_dec_ref(v_a_1789_);
lean_dec_ref(v_decls_1788_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27(lean_object* v_n_1793_, lean_object* v_decls_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_){
_start:
{
lean_object* v___x_1798_; lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1816_; 
lean_inc(v_n_1793_);
v___x_1798_ = l_Lean_IR_findDecl_x27___redArg(v_n_1793_, v_decls_1794_, v_a_1796_);
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1801_ = v___x_1798_;
v_isShared_1802_ = v_isSharedCheck_1816_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1798_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1816_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
if (lean_obj_tag(v_a_1799_) == 1)
{
lean_object* v_val_1803_; lean_object* v___x_1805_; 
lean_dec(v_n_1793_);
v_val_1803_ = lean_ctor_get(v_a_1799_, 0);
lean_inc(v_val_1803_);
lean_dec_ref_known(v_a_1799_, 1);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v_val_1803_);
v___x_1805_ = v___x_1801_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_val_1803_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
else
{
lean_object* v___x_1807_; uint8_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_del_object(v___x_1801_);
lean_dec(v_a_1799_);
v___x_1807_ = ((lean_object*)(l_Lean_IR_getDecl___closed__0));
v___x_1808_ = 1;
v___x_1809_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_1793_, v___x_1808_);
v___x_1810_ = lean_string_append(v___x_1807_, v___x_1809_);
lean_dec_ref(v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lean_IR_getDecl___closed__1));
v___x_1812_ = lean_string_append(v___x_1810_, v___x_1811_);
v___x_1813_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1812_);
v___x_1814_ = l_Lean_MessageData_ofFormat(v___x_1813_);
v___x_1815_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v___x_1814_, v_a_1795_, v_a_1796_);
return v___x_1815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27___boxed(lean_object* v_n_1817_, lean_object* v_decls_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_IR_getDecl_x27(v_n_1817_, v_decls_1818_, v_a_1819_, v_a_1820_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec_ref(v_decls_1818_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* lean_decl_get_sorry_dep(lean_object* v_env_1823_, lean_object* v_declName_1824_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = l_Lean_IR_findEnvDecl(v_env_1823_, v_declName_1824_);
if (lean_obj_tag(v___x_1825_) == 1)
{
lean_object* v_val_1826_; 
v_val_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_val_1826_);
lean_dec_ref_known(v___x_1825_, 1);
if (lean_obj_tag(v_val_1826_) == 0)
{
lean_object* v_info_1827_; 
v_info_1827_ = lean_ctor_get(v_val_1826_, 4);
lean_inc(v_info_1827_);
lean_dec_ref_known(v_val_1826_, 5);
return v_info_1827_;
}
else
{
lean_object* v___x_1828_; 
lean_dec(v_val_1826_);
v___x_1828_ = lean_box(0);
return v___x_1828_;
}
}
else
{
lean_object* v___x_1829_; 
lean_dec(v___x_1825_);
v___x_1829_ = lean_box(0);
return v___x_1829_;
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___closed__0(void){
_start:
{
uint8_t v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = 2;
v___x_1831_ = l_Lean_OLeanLevel_ctorIdx(v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(uint8_t v_level_1832_, lean_object* v_env_1833_, uint8_t v_includeDecls_1834_, lean_object* v_as_1835_, size_t v_i_1836_, size_t v_stop_1837_, lean_object* v_b_1838_){
_start:
{
lean_object* v___y_1840_; uint8_t v___x_1844_; 
v___x_1844_ = lean_usize_dec_eq(v_i_1836_, v_stop_1837_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; uint8_t v___y_1847_; 
v___x_1845_ = lean_array_uget_borrowed(v_as_1835_, v_i_1836_);
if (v_includeDecls_1834_ == 0)
{
uint8_t v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = 1;
lean_inc(v___x_1845_);
lean_inc_ref(v_env_1833_);
v___x_1857_ = l_Lean_Environment_contains(v_env_1833_, v___x_1845_, v___x_1856_);
if (v___x_1857_ == 0)
{
goto v___jp_1849_;
}
else
{
v___y_1840_ = v_b_1838_;
goto v___jp_1839_;
}
}
else
{
goto v___jp_1849_;
}
v___jp_1846_:
{
if (v___y_1847_ == 0)
{
v___y_1840_ = v_b_1838_;
goto v___jp_1839_;
}
else
{
lean_object* v___x_1848_; 
lean_inc(v___x_1845_);
v___x_1848_ = lean_array_push(v_b_1838_, v___x_1845_);
v___y_1840_ = v___x_1848_;
goto v___jp_1839_;
}
}
v___jp_1849_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1850_ = l_Lean_OLeanLevel_ctorIdx(v_level_1832_);
v___x_1851_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___closed__0);
v___x_1852_ = lean_nat_dec_eq(v___x_1850_, v___x_1851_);
lean_dec(v___x_1850_);
if (v___x_1852_ == 0)
{
uint8_t v___x_1853_; 
lean_inc_ref(v_env_1833_);
v___x_1853_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_1833_, v___x_1845_);
if (v___x_1853_ == 0)
{
uint8_t v___x_1854_; 
lean_inc_ref(v_env_1833_);
v___x_1854_ = l_Lean_isDeclMeta(v_env_1833_, v___x_1845_);
v___y_1847_ = v___x_1854_;
goto v___jp_1846_;
}
else
{
v___y_1847_ = v___x_1853_;
goto v___jp_1846_;
}
}
else
{
lean_object* v___x_1855_; 
lean_inc(v___x_1845_);
v___x_1855_ = lean_array_push(v_b_1838_, v___x_1845_);
v___y_1840_ = v___x_1855_;
goto v___jp_1839_;
}
}
}
else
{
lean_dec_ref(v_env_1833_);
return v_b_1838_;
}
v___jp_1839_:
{
size_t v___x_1841_; size_t v___x_1842_; 
v___x_1841_ = ((size_t)1ULL);
v___x_1842_ = lean_usize_add(v_i_1836_, v___x_1841_);
v_i_1836_ = v___x_1842_;
v_b_1838_ = v___y_1840_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___boxed(lean_object* v_level_1858_, lean_object* v_env_1859_, lean_object* v_includeDecls_1860_, lean_object* v_as_1861_, lean_object* v_i_1862_, lean_object* v_stop_1863_, lean_object* v_b_1864_){
_start:
{
uint8_t v_level_boxed_1865_; uint8_t v_includeDecls_boxed_1866_; size_t v_i_boxed_1867_; size_t v_stop_boxed_1868_; lean_object* v_res_1869_; 
v_level_boxed_1865_ = lean_unbox(v_level_1858_);
v_includeDecls_boxed_1866_ = lean_unbox(v_includeDecls_1860_);
v_i_boxed_1867_ = lean_unbox_usize(v_i_1862_);
lean_dec(v_i_1862_);
v_stop_boxed_1868_ = lean_unbox_usize(v_stop_1863_);
lean_dec(v_stop_1863_);
v_res_1869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(v_level_boxed_1865_, v_env_1859_, v_includeDecls_boxed_1866_, v_as_1861_, v_i_boxed_1867_, v_stop_boxed_1868_, v_b_1864_);
lean_dec_ref(v_as_1861_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(size_t v_sz_1870_, size_t v_i_1871_, lean_object* v_bs_1872_){
_start:
{
uint8_t v___x_1873_; 
v___x_1873_ = lean_usize_dec_lt(v_i_1871_, v_sz_1870_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; 
v___x_1874_ = l_unsafeCast___redArg(v_bs_1872_);
lean_dec_ref(v_bs_1872_);
return v___x_1874_;
}
else
{
lean_object* v_v_1875_; lean_object* v___x_1876_; lean_object* v_bs_x27_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; size_t v___x_1880_; size_t v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v_v_1875_ = lean_array_uget(v_bs_1872_, v_i_1871_);
v___x_1876_ = lean_unsigned_to_nat(0u);
v_bs_x27_1877_ = lean_array_uset(v_bs_1872_, v_i_1871_, v___x_1876_);
v___x_1878_ = l_unsafeCast___redArg(v_v_1875_);
lean_dec(v_v_1875_);
v___x_1879_ = l_Lean_IR_Decl_name(v___x_1878_);
lean_dec(v___x_1878_);
v___x_1880_ = ((size_t)1ULL);
v___x_1881_ = lean_usize_add(v_i_1871_, v___x_1880_);
v___x_1882_ = l_unsafeCast___redArg(v___x_1879_);
lean_dec(v___x_1879_);
v___x_1883_ = lean_array_uset(v_bs_x27_1877_, v_i_1871_, v___x_1882_);
v_i_1871_ = v___x_1881_;
v_bs_1872_ = v___x_1883_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0___boxed(lean_object* v_sz_1885_, lean_object* v_i_1886_, lean_object* v_bs_1887_){
_start:
{
size_t v_sz_boxed_1888_; size_t v_i_boxed_1889_; lean_object* v_res_1890_; 
v_sz_boxed_1888_ = lean_unbox_usize(v_sz_1885_);
lean_dec(v_sz_1885_);
v_i_boxed_1889_ = lean_unbox_usize(v_i_1886_);
lean_dec(v_i_1886_);
v_res_1890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(v_sz_boxed_1888_, v_i_boxed_1889_, v_bs_1887_);
return v_res_1890_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0(void){
_start:
{
uint8_t v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = 0;
v___x_1892_ = l_Lean_OLeanLevel_ctorIdx(v___x_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* lean_get_ir_extra_const_names(lean_object* v_env_1895_, uint8_t v_level_1896_, uint8_t v_includeDecls_1897_){
_start:
{
lean_object* v___x_1898_; lean_object* v_toEnvExtension_1899_; lean_object* v_asyncMode_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; uint8_t v___x_1904_; lean_object* v_env_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; size_t v_sz_1908_; size_t v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1898_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1899_ = lean_ctor_get(v___x_1898_, 0);
v_asyncMode_1900_ = lean_ctor_get(v_toEnvExtension_1899_, 2);
v___x_1901_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1902_ = l_Lean_OLeanLevel_ctorIdx(v_level_1896_);
v___x_1903_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0);
v___x_1904_ = lean_nat_dec_eq(v___x_1902_, v___x_1903_);
lean_dec(v___x_1902_);
v_env_1905_ = l_Lean_Environment_setExporting(v_env_1895_, v___x_1904_);
lean_inc_ref(v_env_1905_);
v___x_1906_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1901_, v___x_1898_, v_env_1905_, v_asyncMode_1900_);
v___x_1907_ = lean_array_mk(v___x_1906_);
v_sz_1908_ = lean_array_size(v___x_1907_);
v___x_1909_ = ((size_t)0ULL);
v___x_1910_ = l_unsafeCast___redArg(v___x_1907_);
lean_dec_ref(v___x_1907_);
v___x_1911_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(v_sz_1908_, v___x_1909_, v___x_1910_);
v___x_1912_ = l_unsafeCast___redArg(v___x_1911_);
lean_dec_ref(v___x_1911_);
v___x_1913_ = lean_unsigned_to_nat(0u);
v___x_1914_ = lean_array_get_size(v___x_1912_);
v___x_1915_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__1));
v___x_1916_ = lean_nat_dec_lt(v___x_1913_, v___x_1914_);
if (v___x_1916_ == 0)
{
lean_dec(v___x_1912_);
lean_dec_ref(v_env_1905_);
return v___x_1915_;
}
else
{
uint8_t v___x_1917_; 
v___x_1917_ = lean_nat_dec_le(v___x_1914_, v___x_1914_);
if (v___x_1917_ == 0)
{
if (v___x_1916_ == 0)
{
lean_dec(v___x_1912_);
lean_dec_ref(v_env_1905_);
return v___x_1915_;
}
else
{
size_t v___x_1918_; lean_object* v___x_1919_; 
v___x_1918_ = lean_usize_of_nat(v___x_1914_);
v___x_1919_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(v_level_1896_, v_env_1905_, v_includeDecls_1897_, v___x_1912_, v___x_1909_, v___x_1918_, v___x_1915_);
lean_dec(v___x_1912_);
return v___x_1919_;
}
}
else
{
size_t v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_usize_of_nat(v___x_1914_);
v___x_1921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(v_level_1896_, v_env_1905_, v_includeDecls_1897_, v___x_1912_, v___x_1909_, v___x_1920_, v___x_1915_);
lean_dec(v___x_1912_);
return v___x_1921_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___boxed(lean_object* v_env_1922_, lean_object* v_level_1923_, lean_object* v_includeDecls_1924_){
_start:
{
uint8_t v_level_boxed_1925_; uint8_t v_includeDecls_boxed_1926_; lean_object* v_res_1927_; 
v_level_boxed_1925_ = lean_unbox(v_level_1923_);
v_includeDecls_boxed_1926_ = lean_unbox(v_includeDecls_1924_);
v_res_1927_ = lean_get_ir_extra_const_names(v_env_1922_, v_level_boxed_1925_, v_includeDecls_boxed_1926_);
return v_res_1927_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_Format(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_IR_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_IR_declMapExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_IR_declMapExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_Format(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_CompilerM(builtin);
}
#ifdef __cplusplus
}
#endif

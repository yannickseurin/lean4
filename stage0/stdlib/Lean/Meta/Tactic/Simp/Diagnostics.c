// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Diagnostics
// Imports: public import Lean.Meta.Diagnostics public import Lean.Meta.Tactic.Simp.Types
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedOrigin_default;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Origin_key(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_keysAsPattern(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_Origin_lt___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics_threshold;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_crossEmoji;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDiagSummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_appendSection(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Meta_DiagSummary_isEmpty(lean_object*);
lean_object* l_Lean_isDiagnosticsEnabled___redArg(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (builtin simproc)"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_mkSimpDiagSummary___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___closed__0 = (const lean_object*)&l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 61, 75, 186, 44, 210, 52, 194)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ↦ "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", succeeded: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Simp_mkSimpDiagSummary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Origin_lt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_mkSimpDiagSummary___closed__0_value;
static const lean_closure_object l_Lean_Meta_Simp_mkSimpDiagSummary___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkSimpDiagSummary___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_mkSimpDiagSummary___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimpDiagSummary___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___closed__2;
static const lean_ctor_object l_Lean_Meta_Simp_mkSimpDiagSummary___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_mkSimpDiagSummary___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ", key: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_mkDiagMessages___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkDiagMessages___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Simp_mkDiagMessages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkDiagMessages___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__0_value;
static const lean_string_object l_Lean_Meta_Simp_mkDiagMessages___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "used theorems"};
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__1_value;
static const lean_string_object l_Lean_Meta_Simp_mkDiagMessages___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "tried theorems"};
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__2_value;
static const lean_string_object l_Lean_Meta_Simp_mkDiagMessages___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "tried congruence theorems"};
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__3_value;
static const lean_string_object l_Lean_Meta_Simp_mkDiagMessages___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "theorems with bad keys"};
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__4 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__4_value;
static const lean_string_object l_Lean_Meta_Simp_mkDiagMessages___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "use `set_option diagnostics.threshold <num>` to control threshold for reporting counters"};
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__5 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Simp_mkDiagMessages___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__5_value)}};
static const lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__6 = (const lean_object*)&l_Lean_Meta_Simp_mkDiagMessages___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Simp_mkDiagMessages___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkDiagMessages___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkDiagMessages(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkDiagMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_reportDiag___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Diagnostics"};
static const lean_object* l_Lean_Meta_Simp_reportDiag___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_reportDiag___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Simp_reportDiag___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_reportDiag___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Simp_reportDiag___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_reportDiag___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Simp_reportDiag___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_reportDiag___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(lean_object* v_thmId_4_, lean_object* v_a_5_){
_start:
{
switch(lean_obj_tag(v_thmId_4_))
{
case 0:
{
lean_object* v_declName_7_; lean_object* v___x_8_; lean_object* v_env_9_; uint8_t v___x_10_; uint8_t v___x_11_; 
v_declName_7_ = lean_ctor_get(v_thmId_4_, 0);
lean_inc_n(v_declName_7_, 2);
lean_dec_ref_known(v_thmId_4_, 1);
v___x_8_ = lean_st_ref_get(v_a_5_);
v_env_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref(v_env_9_);
lean_dec(v___x_8_);
v___x_10_ = 1;
v___x_11_ = l_Lean_Environment_contains(v_env_9_, v_declName_7_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = l_Lean_MessageData_ofName(v_declName_7_);
v___x_13_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__1, &l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___closed__1);
v___x_14_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_12_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
else
{
uint8_t v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = 0;
v___x_17_ = l_Lean_MessageData_ofConstName(v_declName_7_, v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
case 1:
{
lean_object* v_fvarId_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_28_; 
v_fvarId_19_ = lean_ctor_get(v_thmId_4_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_thmId_4_);
if (v_isSharedCheck_28_ == 0)
{
v___x_21_ = v_thmId_4_;
v_isShared_22_ = v_isSharedCheck_28_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_fvarId_19_);
lean_dec(v_thmId_4_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_28_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_23_ = l_Lean_mkFVar(v_fvarId_19_);
v___x_24_ = l_Lean_MessageData_ofExpr(v___x_23_);
if (v_isShared_22_ == 0)
{
lean_ctor_set_tag(v___x_21_, 0);
lean_ctor_set(v___x_21_, 0, v___x_24_);
v___x_26_ = v___x_21_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_24_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
default: 
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = l_Lean_Meta_Origin_key(v_thmId_4_);
lean_dec_ref(v_thmId_4_);
v___x_30_ = l_Lean_MessageData_ofName(v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg___boxed(lean_object* v_thmId_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_thmId_32_, v_a_33_);
lean_dec(v_a_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey(lean_object* v_thmId_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_thmId_36_, v_a_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___boxed(lean_object* v_thmId_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey(v_thmId_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
lean_dec_ref(v_a_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__0(lean_object* v_opts_50_, lean_object* v_opt_51_){
_start:
{
lean_object* v_name_52_; lean_object* v_defValue_53_; lean_object* v_map_54_; lean_object* v___x_55_; 
v_name_52_ = lean_ctor_get(v_opt_51_, 0);
v_defValue_53_ = lean_ctor_get(v_opt_51_, 1);
v_map_54_ = lean_ctor_get(v_opts_50_, 0);
v___x_55_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_54_, v_name_52_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_inc(v_defValue_53_);
return v_defValue_53_;
}
else
{
lean_object* v_val_56_; 
v_val_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_val_56_);
lean_dec_ref_known(v___x_55_, 1);
if (lean_obj_tag(v_val_56_) == 3)
{
lean_object* v_v_57_; 
v_v_57_ = lean_ctor_get(v_val_56_, 0);
lean_inc(v_v_57_);
lean_dec_ref_known(v_val_56_, 1);
return v_v_57_;
}
else
{
lean_dec(v_val_56_);
lean_inc(v_defValue_53_);
return v_defValue_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__0___boxed(lean_object* v_opts_58_, lean_object* v_opt_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_Option_get___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__0(v_opts_58_, v_opt_59_);
lean_dec_ref(v_opt_59_);
lean_dec_ref(v_opts_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_mkSimpDiagSummary___lam__0(lean_object* v_x_61_){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 1;
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___lam__0___boxed(lean_object* v_x_63_){
_start:
{
uint8_t v_res_64_; lean_object* v_r_65_; 
v_res_64_ = l_Lean_Meta_Simp_mkSimpDiagSummary___lam__0(v_x_63_);
lean_dec_ref(v_x_63_);
v_r_65_ = lean_box(v_res_64_);
return v_r_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg___lam__0(lean_object* v_f_66_, lean_object* v_s_67_, lean_object* v_a_68_, lean_object* v_b_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_70_, 0, v_a_68_);
lean_ctor_set(v___x_70_, 1, v_b_69_);
v___x_71_ = lean_apply_2(v_f_66_, v___x_70_, v_s_67_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_79_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_79_ == 0)
{
v___x_74_ = v___x_71_;
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_a_72_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
else
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
v_a_80_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_87_ == 0)
{
v___x_82_ = v___x_71_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v___x_71_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_a_80_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object* v_f_88_, lean_object* v_keys_89_, lean_object* v_vals_90_, lean_object* v_i_91_, lean_object* v_acc_92_){
_start:
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_array_get_size(v_keys_89_);
v___x_94_ = lean_nat_dec_lt(v_i_91_, v___x_93_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
lean_dec(v_i_91_);
lean_dec_ref(v_f_88_);
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v_acc_92_);
return v___x_95_;
}
else
{
lean_object* v_k_96_; lean_object* v_v_97_; lean_object* v___x_98_; 
v_k_96_ = lean_array_fget_borrowed(v_keys_89_, v_i_91_);
v_v_97_ = lean_array_fget_borrowed(v_vals_90_, v_i_91_);
lean_inc_ref(v_f_88_);
lean_inc(v_v_97_);
lean_inc(v_k_96_);
v___x_98_ = lean_apply_3(v_f_88_, v_acc_92_, v_k_96_, v_v_97_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_dec(v_i_91_);
lean_dec_ref(v_f_88_);
return v___x_98_;
}
else
{
lean_object* v_a_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref_known(v___x_98_, 1);
v___x_100_ = lean_unsigned_to_nat(1u);
v___x_101_ = lean_nat_add(v_i_91_, v___x_100_);
lean_dec(v_i_91_);
v_i_91_ = v___x_101_;
v_acc_92_ = v_a_99_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_f_103_, lean_object* v_keys_104_, lean_object* v_vals_105_, lean_object* v_i_106_, lean_object* v_acc_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v_f_103_, v_keys_104_, v_vals_105_, v_i_106_, v_acc_107_);
lean_dec_ref(v_vals_105_);
lean_dec_ref(v_keys_104_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_f_109_, lean_object* v_as_110_, size_t v_i_111_, size_t v_stop_112_, lean_object* v_b_113_){
_start:
{
lean_object* v_a_115_; lean_object* v___y_120_; uint8_t v___x_122_; 
v___x_122_ = lean_usize_dec_eq(v_i_111_, v_stop_112_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_array_uget_borrowed(v_as_110_, v_i_111_);
switch(lean_obj_tag(v___x_123_))
{
case 0:
{
lean_object* v_key_124_; lean_object* v_val_125_; lean_object* v___x_126_; 
v_key_124_ = lean_ctor_get(v___x_123_, 0);
v_val_125_ = lean_ctor_get(v___x_123_, 1);
lean_inc_ref(v_f_109_);
lean_inc(v_val_125_);
lean_inc(v_key_124_);
v___x_126_ = lean_apply_3(v_f_109_, v_b_113_, v_key_124_, v_val_125_);
v___y_120_ = v___x_126_;
goto v___jp_119_;
}
case 1:
{
lean_object* v_node_127_; lean_object* v___x_128_; 
v_node_127_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_node_127_);
lean_inc_ref(v_f_109_);
v___x_128_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(v_f_109_, v_node_127_, v_b_113_);
v___y_120_ = v___x_128_;
goto v___jp_119_;
}
default: 
{
v_a_115_ = v_b_113_;
goto v___jp_114_;
}
}
}
else
{
lean_object* v___x_129_; 
lean_dec_ref(v_f_109_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v_b_113_);
return v___x_129_;
}
v___jp_114_:
{
size_t v___x_116_; size_t v___x_117_; 
v___x_116_ = ((size_t)1ULL);
v___x_117_ = lean_usize_add(v_i_111_, v___x_116_);
v_i_111_ = v___x_117_;
v_b_113_ = v_a_115_;
goto _start;
}
v___jp_119_:
{
if (lean_obj_tag(v___y_120_) == 0)
{
lean_dec_ref(v_f_109_);
return v___y_120_;
}
else
{
lean_object* v_a_121_; 
v_a_121_ = lean_ctor_get(v___y_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref_known(v___y_120_, 1);
v_a_115_ = v_a_121_;
goto v___jp_114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(lean_object* v_f_130_, lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
if (lean_obj_tag(v_x_131_) == 0)
{
lean_object* v_es_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_146_; 
v_es_133_ = lean_ctor_get(v_x_131_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v_x_131_);
if (v_isSharedCheck_146_ == 0)
{
v___x_135_ = v_x_131_;
v_isShared_136_ = v_isSharedCheck_146_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_es_133_);
lean_dec(v_x_131_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_146_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = lean_array_get_size(v_es_133_);
v___x_139_ = lean_nat_dec_lt(v___x_137_, v___x_138_);
if (v___x_139_ == 0)
{
lean_object* v___x_141_; 
lean_dec_ref(v_es_133_);
lean_dec_ref(v_f_130_);
if (v_isShared_136_ == 0)
{
lean_ctor_set_tag(v___x_135_, 1);
lean_ctor_set(v___x_135_, 0, v_x_132_);
v___x_141_ = v___x_135_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_x_132_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
else
{
size_t v___x_143_; size_t v___x_144_; lean_object* v___x_145_; 
lean_del_object(v___x_135_);
v___x_143_ = ((size_t)0ULL);
v___x_144_ = lean_usize_of_nat(v___x_138_);
v___x_145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_f_130_, v_es_133_, v___x_143_, v___x_144_, v_x_132_);
lean_dec_ref(v_es_133_);
return v___x_145_;
}
}
}
else
{
lean_object* v_ks_147_; lean_object* v_vs_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_ks_147_ = lean_ctor_get(v_x_131_, 0);
lean_inc_ref(v_ks_147_);
v_vs_148_ = lean_ctor_get(v_x_131_, 1);
lean_inc_ref(v_vs_148_);
lean_dec_ref_known(v_x_131_, 2);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v_f_130_, v_ks_147_, v_vs_148_, v___x_149_, v_x_132_);
lean_dec_ref(v_vs_148_);
lean_dec_ref(v_ks_147_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_f_151_, lean_object* v_as_152_, lean_object* v_i_153_, lean_object* v_stop_154_, lean_object* v_b_155_){
_start:
{
size_t v_i_boxed_156_; size_t v_stop_boxed_157_; lean_object* v_res_158_; 
v_i_boxed_156_ = lean_unbox_usize(v_i_153_);
lean_dec(v_i_153_);
v_stop_boxed_157_ = lean_unbox_usize(v_stop_154_);
lean_dec(v_stop_154_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_f_151_, v_as_152_, v_i_boxed_156_, v_stop_boxed_157_, v_b_155_);
lean_dec_ref(v_as_152_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg(lean_object* v_map_159_, lean_object* v_init_160_, lean_object* v_f_161_){
_start:
{
lean_object* v___f_162_; lean_object* v___x_163_; lean_object* v_a_164_; 
v___f_162_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_162_, 0, v_f_161_);
lean_inc_ref(v_map_159_);
v___x_163_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(v___f_162_, v_map_159_, v_init_160_);
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref(v___x_163_);
return v_a_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg___boxed(lean_object* v_map_165_, lean_object* v_init_166_, lean_object* v_f_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg(v_map_165_, v_init_166_, v_f_167_);
lean_dec_ref(v_map_165_);
return v_res_168_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0(lean_object* v_lt_169_, lean_object* v_x_170_, lean_object* v_x_171_){
_start:
{
lean_object* v_fst_172_; lean_object* v_snd_173_; lean_object* v_fst_174_; lean_object* v_snd_175_; uint8_t v___x_176_; 
v_fst_172_ = lean_ctor_get(v_x_170_, 0);
lean_inc(v_fst_172_);
v_snd_173_ = lean_ctor_get(v_x_170_, 1);
lean_inc(v_snd_173_);
lean_dec_ref(v_x_170_);
v_fst_174_ = lean_ctor_get(v_x_171_, 0);
lean_inc(v_fst_174_);
v_snd_175_ = lean_ctor_get(v_x_171_, 1);
lean_inc(v_snd_175_);
lean_dec_ref(v_x_171_);
v___x_176_ = lean_nat_dec_eq(v_snd_173_, v_snd_175_);
if (v___x_176_ == 0)
{
uint8_t v___x_177_; 
lean_dec(v_fst_174_);
lean_dec(v_fst_172_);
lean_dec_ref(v_lt_169_);
v___x_177_ = lean_nat_dec_lt(v_snd_175_, v_snd_173_);
lean_dec(v_snd_173_);
lean_dec(v_snd_175_);
return v___x_177_;
}
else
{
lean_object* v___x_178_; uint8_t v___x_179_; 
lean_dec(v_snd_175_);
lean_dec(v_snd_173_);
v___x_178_ = lean_apply_2(v_lt_169_, v_fst_172_, v_fst_174_);
v___x_179_ = lean_unbox(v___x_178_);
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_lt_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
uint8_t v_res_183_; lean_object* v_r_184_; 
v_res_183_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0(v_lt_180_, v_x_181_, v_x_182_);
v_r_184_ = lean_box(v_res_183_);
return v_r_184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg(lean_object* v_lt_185_, lean_object* v_hi_186_, lean_object* v_pivot_187_, lean_object* v_as_188_, lean_object* v_i_189_, lean_object* v_k_190_){
_start:
{
uint8_t v___y_192_; uint8_t v___x_201_; 
v___x_201_ = lean_nat_dec_lt(v_k_190_, v_hi_186_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec(v_k_190_);
lean_dec_ref(v_pivot_187_);
lean_dec_ref(v_lt_185_);
v___x_202_ = lean_array_fswap(v_as_188_, v_i_189_, v_hi_186_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v_i_189_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; lean_object* v_fst_205_; lean_object* v_snd_206_; lean_object* v_fst_207_; lean_object* v_snd_208_; uint8_t v___x_209_; 
v___x_204_ = lean_array_fget_borrowed(v_as_188_, v_k_190_);
v_fst_205_ = lean_ctor_get(v___x_204_, 0);
v_snd_206_ = lean_ctor_get(v___x_204_, 1);
v_fst_207_ = lean_ctor_get(v_pivot_187_, 0);
v_snd_208_ = lean_ctor_get(v_pivot_187_, 1);
v___x_209_ = lean_nat_dec_eq(v_snd_206_, v_snd_208_);
if (v___x_209_ == 0)
{
uint8_t v___x_210_; 
v___x_210_ = lean_nat_dec_lt(v_snd_208_, v_snd_206_);
v___y_192_ = v___x_210_;
goto v___jp_191_;
}
else
{
lean_object* v___x_211_; uint8_t v___x_212_; 
lean_inc_ref(v_lt_185_);
lean_inc(v_fst_207_);
lean_inc(v_fst_205_);
v___x_211_ = lean_apply_2(v_lt_185_, v_fst_205_, v_fst_207_);
v___x_212_ = lean_unbox(v___x_211_);
v___y_192_ = v___x_212_;
goto v___jp_191_;
}
}
v___jp_191_:
{
if (v___y_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(1u);
v___x_194_ = lean_nat_add(v_k_190_, v___x_193_);
lean_dec(v_k_190_);
v_k_190_ = v___x_194_;
goto _start;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_196_ = lean_array_fswap(v_as_188_, v_i_189_, v_k_190_);
v___x_197_ = lean_unsigned_to_nat(1u);
v___x_198_ = lean_nat_add(v_i_189_, v___x_197_);
lean_dec(v_i_189_);
v___x_199_ = lean_nat_add(v_k_190_, v___x_197_);
lean_dec(v_k_190_);
v_as_188_ = v___x_196_;
v_i_189_ = v___x_198_;
v_k_190_ = v___x_199_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_lt_213_, lean_object* v_hi_214_, lean_object* v_pivot_215_, lean_object* v_as_216_, lean_object* v_i_217_, lean_object* v_k_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg(v_lt_213_, v_hi_214_, v_pivot_215_, v_as_216_, v_i_217_, v_k_218_);
lean_dec(v_hi_214_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(lean_object* v_lt_220_, lean_object* v_n_221_, lean_object* v_as_222_, lean_object* v_lo_223_, lean_object* v_hi_224_){
_start:
{
lean_object* v___y_226_; uint8_t v___x_236_; 
v___x_236_ = lean_nat_dec_lt(v_lo_223_, v_hi_224_);
if (v___x_236_ == 0)
{
lean_dec(v_lo_223_);
lean_dec_ref(v_lt_220_);
return v_as_222_;
}
else
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v_mid_239_; lean_object* v___y_241_; lean_object* v___y_247_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_237_ = lean_nat_add(v_lo_223_, v_hi_224_);
v___x_238_ = lean_unsigned_to_nat(1u);
v_mid_239_ = lean_nat_shiftr(v___x_237_, v___x_238_);
lean_dec(v___x_237_);
v___x_252_ = lean_array_fget_borrowed(v_as_222_, v_mid_239_);
v___x_253_ = lean_array_fget_borrowed(v_as_222_, v_lo_223_);
lean_inc(v___x_253_);
lean_inc(v___x_252_);
lean_inc_ref(v_lt_220_);
v___x_254_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0(v_lt_220_, v___x_252_, v___x_253_);
if (v___x_254_ == 0)
{
v___y_247_ = v_as_222_;
goto v___jp_246_;
}
else
{
lean_object* v___x_255_; 
v___x_255_ = lean_array_fswap(v_as_222_, v_lo_223_, v_mid_239_);
v___y_247_ = v___x_255_;
goto v___jp_246_;
}
v___jp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_242_ = lean_array_fget_borrowed(v___y_241_, v_mid_239_);
v___x_243_ = lean_array_fget_borrowed(v___y_241_, v_hi_224_);
lean_inc(v___x_243_);
lean_inc(v___x_242_);
lean_inc_ref(v_lt_220_);
v___x_244_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0(v_lt_220_, v___x_242_, v___x_243_);
if (v___x_244_ == 0)
{
lean_dec(v_mid_239_);
v___y_226_ = v___y_241_;
goto v___jp_225_;
}
else
{
lean_object* v___x_245_; 
v___x_245_ = lean_array_fswap(v___y_241_, v_mid_239_, v_hi_224_);
lean_dec(v_mid_239_);
v___y_226_ = v___x_245_;
goto v___jp_225_;
}
}
v___jp_246_:
{
lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_248_ = lean_array_fget_borrowed(v___y_247_, v_hi_224_);
v___x_249_ = lean_array_fget_borrowed(v___y_247_, v_lo_223_);
lean_inc(v___x_249_);
lean_inc(v___x_248_);
lean_inc_ref(v_lt_220_);
v___x_250_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___lam__0(v_lt_220_, v___x_248_, v___x_249_);
if (v___x_250_ == 0)
{
v___y_241_ = v___y_247_;
goto v___jp_240_;
}
else
{
lean_object* v___x_251_; 
v___x_251_ = lean_array_fswap(v___y_247_, v_lo_223_, v_hi_224_);
v___y_241_ = v___x_251_;
goto v___jp_240_;
}
}
}
v___jp_225_:
{
lean_object* v_pivot_227_; lean_object* v___x_228_; lean_object* v_fst_229_; lean_object* v_snd_230_; uint8_t v___x_231_; 
v_pivot_227_ = lean_array_fget(v___y_226_, v_hi_224_);
lean_inc_n(v_lo_223_, 2);
lean_inc_ref(v_lt_220_);
v___x_228_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg(v_lt_220_, v_hi_224_, v_pivot_227_, v___y_226_, v_lo_223_, v_lo_223_);
v_fst_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_fst_229_);
v_snd_230_ = lean_ctor_get(v___x_228_, 1);
lean_inc(v_snd_230_);
lean_dec_ref(v___x_228_);
v___x_231_ = lean_nat_dec_le(v_hi_224_, v_fst_229_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
lean_inc_ref(v_lt_220_);
v___x_232_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(v_lt_220_, v_n_221_, v_snd_230_, v_lo_223_, v_fst_229_);
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_nat_add(v_fst_229_, v___x_233_);
lean_dec(v_fst_229_);
v_as_222_ = v___x_232_;
v_lo_223_ = v___x_234_;
goto _start;
}
else
{
lean_dec(v_fst_229_);
lean_dec(v_lo_223_);
lean_dec_ref(v_lt_220_);
return v_snd_230_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg___boxed(lean_object* v_lt_256_, lean_object* v_n_257_, lean_object* v_as_258_, lean_object* v_lo_259_, lean_object* v_hi_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(v_lt_256_, v_n_257_, v_as_258_, v_lo_259_, v_hi_260_);
lean_dec(v_hi_260_);
lean_dec(v_n_257_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___lam__0(lean_object* v_threshold_262_, lean_object* v_p_263_, lean_object* v_x_264_, lean_object* v_____s_265_){
_start:
{
lean_object* v_fst_266_; lean_object* v_snd_267_; uint8_t v___x_268_; 
v_fst_266_ = lean_ctor_get(v_x_264_, 0);
v_snd_267_ = lean_ctor_get(v_x_264_, 1);
v___x_268_ = lean_nat_dec_lt(v_threshold_262_, v_snd_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
lean_dec_ref(v_x_264_);
lean_dec_ref(v_p_263_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v_____s_265_);
return v___x_269_;
}
else
{
lean_object* v___x_270_; uint8_t v___x_271_; 
lean_inc(v_fst_266_);
v___x_270_ = lean_apply_1(v_p_263_, v_fst_266_);
v___x_271_ = lean_unbox(v___x_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; 
lean_dec_ref(v_x_264_);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v_____s_265_);
return v___x_272_;
}
else
{
lean_object* v_r_273_; lean_object* v___x_274_; 
v_r_273_ = lean_array_push(v_____s_265_, v_x_264_);
v___x_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_274_, 0, v_r_273_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___lam__0___boxed(lean_object* v_threshold_275_, lean_object* v_p_276_, lean_object* v_x_277_, lean_object* v_____s_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___lam__0(v_threshold_275_, v_p_276_, v_x_277_, v_____s_278_);
lean_dec(v_threshold_275_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1(lean_object* v_counters_282_, lean_object* v_threshold_283_, lean_object* v_p_284_, lean_object* v_lt_285_){
_start:
{
lean_object* v___f_286_; lean_object* v___x_287_; lean_object* v_r_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___f_286_ = lean_alloc_closure((void*)(l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___lam__0___boxed), 4, 2);
lean_closure_set(v___f_286_, 0, v_threshold_283_);
lean_closure_set(v___f_286_, 1, v_p_284_);
v___x_287_ = lean_unsigned_to_nat(0u);
v_r_288_ = ((lean_object*)(l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___closed__0));
v___x_289_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg(v_counters_282_, v_r_288_, v___f_286_);
v___x_290_ = lean_array_get_size(v___x_289_);
v___x_291_ = lean_nat_dec_eq(v___x_290_, v___x_287_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___y_295_; uint8_t v___x_299_; 
v___x_292_ = lean_unsigned_to_nat(1u);
v___x_293_ = lean_nat_sub(v___x_290_, v___x_292_);
v___x_299_ = lean_nat_dec_le(v___x_287_, v___x_293_);
if (v___x_299_ == 0)
{
lean_inc(v___x_293_);
v___y_295_ = v___x_293_;
goto v___jp_294_;
}
else
{
v___y_295_ = v___x_287_;
goto v___jp_294_;
}
v___jp_294_:
{
uint8_t v___x_296_; 
v___x_296_ = lean_nat_dec_le(v___y_295_, v___x_293_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; 
lean_dec(v___x_293_);
lean_inc(v___y_295_);
v___x_297_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(v_lt_285_, v___x_290_, v___x_289_, v___y_295_, v___y_295_);
lean_dec(v___y_295_);
return v___x_297_;
}
else
{
lean_object* v___x_298_; 
v___x_298_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(v_lt_285_, v___x_290_, v___x_289_, v___y_295_, v___x_293_);
lean_dec(v___x_293_);
return v___x_298_;
}
}
}
else
{
lean_dec_ref(v_lt_285_);
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1___boxed(lean_object* v_counters_300_, lean_object* v_threshold_301_, lean_object* v_p_302_, lean_object* v_lt_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1(v_counters_300_, v_threshold_301_, v_p_302_, v_lt_303_);
lean_dec_ref(v_counters_300_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg(lean_object* v_keys_305_, lean_object* v_vals_306_, lean_object* v_i_307_, lean_object* v_k_308_){
_start:
{
uint8_t v___y_314_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_array_get_size(v_keys_305_);
v___x_318_ = lean_nat_dec_lt(v_i_307_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; 
lean_dec(v_i_307_);
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
lean_object* v_k_x27_320_; 
v_k_x27_320_ = lean_array_fget_borrowed(v_keys_305_, v_i_307_);
if (lean_obj_tag(v_k_308_) == 0)
{
if (lean_obj_tag(v_k_x27_320_) == 0)
{
lean_object* v_declName_321_; uint8_t v_inv_322_; lean_object* v_declName_323_; uint8_t v_inv_324_; uint8_t v___x_325_; 
v_declName_321_ = lean_ctor_get(v_k_308_, 0);
v_inv_322_ = lean_ctor_get_uint8(v_k_308_, sizeof(void*)*1 + 1);
v_declName_323_ = lean_ctor_get(v_k_x27_320_, 0);
v_inv_324_ = lean_ctor_get_uint8(v_k_x27_320_, sizeof(void*)*1 + 1);
v___x_325_ = lean_name_eq(v_declName_321_, v_declName_323_);
if (v___x_325_ == 0)
{
v___y_314_ = v___x_325_;
goto v___jp_313_;
}
else
{
if (v_inv_324_ == 0)
{
if (v_inv_322_ == 0)
{
v___y_314_ = v___x_325_;
goto v___jp_313_;
}
else
{
goto v___jp_309_;
}
}
else
{
v___y_314_ = v_inv_322_;
goto v___jp_313_;
}
}
}
else
{
goto v___jp_309_;
}
}
else
{
if (lean_obj_tag(v_k_x27_320_) == 0)
{
goto v___jp_309_;
}
else
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_326_ = l_Lean_Meta_Origin_key(v_k_308_);
v___x_327_ = l_Lean_Meta_Origin_key(v_k_x27_320_);
v___x_328_ = lean_name_eq(v___x_326_, v___x_327_);
lean_dec(v___x_327_);
lean_dec(v___x_326_);
v___y_314_ = v___x_328_;
goto v___jp_313_;
}
}
}
v___jp_309_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_unsigned_to_nat(1u);
v___x_311_ = lean_nat_add(v_i_307_, v___x_310_);
lean_dec(v_i_307_);
v_i_307_ = v___x_311_;
goto _start;
}
v___jp_313_:
{
if (v___y_314_ == 0)
{
goto v___jp_309_;
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_array_fget_borrowed(v_vals_306_, v_i_307_);
lean_dec(v_i_307_);
lean_inc(v___x_315_);
v___x_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_keys_329_, lean_object* v_vals_330_, lean_object* v_i_331_, lean_object* v_k_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg(v_keys_329_, v_vals_330_, v_i_331_, v_k_332_);
lean_dec_ref(v_k_332_);
lean_dec_ref(v_vals_330_);
lean_dec_ref(v_keys_329_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg(lean_object* v_x_334_, size_t v_x_335_, lean_object* v_x_336_){
_start:
{
if (lean_obj_tag(v_x_334_) == 0)
{
lean_object* v_es_337_; lean_object* v___x_338_; size_t v___x_339_; size_t v___x_340_; lean_object* v_j_341_; lean_object* v___x_342_; 
v_es_337_ = lean_ctor_get(v_x_334_, 0);
v___x_338_ = lean_box(2);
v___x_339_ = ((size_t)31ULL);
v___x_340_ = lean_usize_land(v_x_335_, v___x_339_);
v_j_341_ = lean_usize_to_nat(v___x_340_);
v___x_342_ = lean_array_get_borrowed(v___x_338_, v_es_337_, v_j_341_);
lean_dec(v_j_341_);
switch(lean_obj_tag(v___x_342_))
{
case 0:
{
lean_object* v_key_343_; lean_object* v_val_344_; uint8_t v___y_346_; 
v_key_343_ = lean_ctor_get(v___x_342_, 0);
v_val_344_ = lean_ctor_get(v___x_342_, 1);
if (lean_obj_tag(v_x_336_) == 0)
{
if (lean_obj_tag(v_key_343_) == 0)
{
lean_object* v_declName_349_; uint8_t v_inv_350_; lean_object* v_declName_351_; uint8_t v_inv_352_; uint8_t v___x_353_; 
v_declName_349_ = lean_ctor_get(v_x_336_, 0);
v_inv_350_ = lean_ctor_get_uint8(v_x_336_, sizeof(void*)*1 + 1);
v_declName_351_ = lean_ctor_get(v_key_343_, 0);
v_inv_352_ = lean_ctor_get_uint8(v_key_343_, sizeof(void*)*1 + 1);
v___x_353_ = lean_name_eq(v_declName_349_, v_declName_351_);
if (v___x_353_ == 0)
{
v___y_346_ = v___x_353_;
goto v___jp_345_;
}
else
{
if (v_inv_352_ == 0)
{
if (v_inv_350_ == 0)
{
v___y_346_ = v___x_353_;
goto v___jp_345_;
}
else
{
lean_object* v___x_354_; 
v___x_354_ = lean_box(0);
return v___x_354_;
}
}
else
{
v___y_346_ = v_inv_350_;
goto v___jp_345_;
}
}
}
else
{
lean_object* v___x_355_; 
v___x_355_ = lean_box(0);
return v___x_355_;
}
}
else
{
if (lean_obj_tag(v_key_343_) == 0)
{
lean_object* v___x_356_; 
v___x_356_ = lean_box(0);
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_357_ = l_Lean_Meta_Origin_key(v_x_336_);
v___x_358_ = l_Lean_Meta_Origin_key(v_key_343_);
v___x_359_ = lean_name_eq(v___x_357_, v___x_358_);
lean_dec(v___x_358_);
lean_dec(v___x_357_);
v___y_346_ = v___x_359_;
goto v___jp_345_;
}
}
v___jp_345_:
{
if (v___y_346_ == 0)
{
lean_object* v___x_347_; 
v___x_347_ = lean_box(0);
return v___x_347_;
}
else
{
lean_object* v___x_348_; 
lean_inc(v_val_344_);
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v_val_344_);
return v___x_348_;
}
}
}
case 1:
{
lean_object* v_node_360_; size_t v___x_361_; size_t v___x_362_; 
v_node_360_ = lean_ctor_get(v___x_342_, 0);
v___x_361_ = ((size_t)5ULL);
v___x_362_ = lean_usize_shift_right(v_x_335_, v___x_361_);
v_x_334_ = v_node_360_;
v_x_335_ = v___x_362_;
goto _start;
}
default: 
{
lean_object* v___x_364_; 
v___x_364_ = lean_box(0);
return v___x_364_;
}
}
}
else
{
lean_object* v_ks_365_; lean_object* v_vs_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v_ks_365_ = lean_ctor_get(v_x_334_, 0);
v_vs_366_ = lean_ctor_get(v_x_334_, 1);
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg(v_ks_365_, v_vs_366_, v___x_367_, v_x_336_);
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg___boxed(lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
size_t v_x_4299__boxed_372_; lean_object* v_res_373_; 
v_x_4299__boxed_372_ = lean_unbox_usize(v_x_370_);
lean_dec(v_x_370_);
v_res_373_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg(v_x_369_, v_x_4299__boxed_372_, v_x_371_);
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_369_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg(lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
uint64_t v___y_377_; uint64_t v___y_381_; uint64_t v___y_385_; 
if (lean_obj_tag(v_x_375_) == 0)
{
uint8_t v_inv_388_; 
v_inv_388_ = lean_ctor_get_uint8(v_x_375_, sizeof(void*)*1 + 1);
if (v_inv_388_ == 0)
{
lean_object* v_declName_389_; lean_object* v___x_390_; 
v_declName_389_ = lean_ctor_get(v_x_375_, 0);
v___x_390_ = l_unsafeCast___redArg(v_declName_389_);
if (lean_obj_tag(v___x_390_) == 0)
{
uint64_t v___x_391_; 
v___x_391_ = 1723ULL;
v___y_381_ = v___x_391_;
goto v___jp_380_;
}
else
{
uint64_t v_hash_392_; 
v_hash_392_ = lean_ctor_get_uint64(v___x_390_, sizeof(void*)*2);
lean_dec(v___x_390_);
v___y_381_ = v_hash_392_;
goto v___jp_380_;
}
}
else
{
lean_object* v_declName_393_; lean_object* v___x_394_; 
v_declName_393_ = lean_ctor_get(v_x_375_, 0);
v___x_394_ = l_unsafeCast___redArg(v_declName_393_);
if (lean_obj_tag(v___x_394_) == 0)
{
uint64_t v___x_395_; 
v___x_395_ = 1723ULL;
v___y_385_ = v___x_395_;
goto v___jp_384_;
}
else
{
uint64_t v_hash_396_; 
v_hash_396_ = lean_ctor_get_uint64(v___x_394_, sizeof(void*)*2);
lean_dec(v___x_394_);
v___y_385_ = v_hash_396_;
goto v___jp_384_;
}
}
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = l_Lean_Meta_Origin_key(v_x_375_);
v___x_398_ = l_unsafeCast___redArg(v___x_397_);
lean_dec(v___x_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
uint64_t v___x_399_; 
v___x_399_ = 1723ULL;
v___y_377_ = v___x_399_;
goto v___jp_376_;
}
else
{
uint64_t v_hash_400_; 
v_hash_400_ = lean_ctor_get_uint64(v___x_398_, sizeof(void*)*2);
lean_dec(v___x_398_);
v___y_377_ = v_hash_400_;
goto v___jp_376_;
}
}
v___jp_376_:
{
size_t v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_uint64_to_usize(v___y_377_);
v___x_379_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg(v_x_374_, v___x_378_, v_x_375_);
return v___x_379_;
}
v___jp_380_:
{
uint64_t v___x_382_; uint64_t v___x_383_; 
v___x_382_ = 13ULL;
v___x_383_ = lean_uint64_mix_hash(v___y_381_, v___x_382_);
v___y_377_ = v___x_383_;
goto v___jp_376_;
}
v___jp_384_:
{
uint64_t v___x_386_; uint64_t v___x_387_; 
v___x_386_ = 11ULL;
v___x_387_ = lean_uint64_mix_hash(v___y_385_, v___x_386_);
v___y_377_ = v___x_387_;
goto v___jp_376_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg___boxed(lean_object* v_x_401_, lean_object* v_x_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg(v_x_401_, v_x_402_);
lean_dec_ref(v_x_402_);
lean_dec_ref(v_x_401_);
return v_res_403_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_409_; double v___x_410_; 
v___x_409_ = lean_unsigned_to_nat(0u);
v___x_410_ = lean_float_of_nat(v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__6(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__5));
v___x_414_ = l_Lean_stringToMessageData(v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__9(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = l_Lean_crossEmoji;
v___x_418_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__8));
v___x_419_ = lean_string_append(v___x_418_, v___x_417_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg(lean_object* v_usedCounters_x3f_420_, lean_object* v_as_421_, size_t v_sz_422_, size_t v_i_423_, lean_object* v_b_424_, lean_object* v___y_425_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = lean_usize_dec_lt(v_i_423_, v_sz_422_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v_b_424_);
return v___x_428_;
}
else
{
lean_object* v_a_429_; lean_object* v_fst_430_; lean_object* v_snd_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_476_; 
v_a_429_ = lean_array_uget(v_as_421_, v_i_423_);
v_fst_430_ = lean_ctor_get(v_a_429_, 0);
v_snd_431_ = lean_ctor_get(v_a_429_, 1);
v_isSharedCheck_476_ = !lean_is_exclusive(v_a_429_);
if (v_isSharedCheck_476_ == 0)
{
v___x_433_ = v_a_429_;
v_isShared_434_ = v_isSharedCheck_476_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_snd_431_);
lean_inc(v_fst_430_);
lean_dec(v_a_429_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_476_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
lean_inc(v_fst_430_);
v___x_436_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_fst_430_, v___y_425_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v_usedMsg_439_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___x_436_, 1);
if (lean_obj_tag(v_usedCounters_x3f_420_) == 1)
{
lean_object* v_val_460_; lean_object* v___x_461_; 
v_val_460_ = lean_ctor_get(v_usedCounters_x3f_420_, 0);
v___x_461_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg(v_val_460_, v_fst_430_);
lean_dec(v_fst_430_);
if (lean_obj_tag(v___x_461_) == 1)
{
lean_object* v_val_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_val_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v___x_461_, 1);
v___x_463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__7));
v___x_464_ = l_Nat_reprFast(v_val_462_);
v___x_465_ = lean_string_append(v___x_463_, v___x_464_);
lean_dec_ref(v___x_464_);
v_usedMsg_439_ = v___x_465_;
goto v___jp_438_;
}
else
{
lean_object* v___x_466_; 
lean_dec(v___x_461_);
v___x_466_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__9);
v_usedMsg_439_ = v___x_466_;
goto v___jp_438_;
}
}
else
{
lean_object* v___x_467_; 
lean_dec(v_fst_430_);
v___x_467_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v_usedMsg_439_ = v___x_467_;
goto v___jp_438_;
}
v___jp_438_:
{
lean_object* v___x_440_; lean_object* v___x_441_; double v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_440_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_441_ = lean_box(0);
v___x_442_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3);
v___x_443_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v___x_444_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_444_, 0, v___x_440_);
lean_ctor_set(v___x_444_, 1, v___x_441_);
lean_ctor_set(v___x_444_, 2, v___x_443_);
lean_ctor_set_float(v___x_444_, sizeof(void*)*3, v___x_442_);
lean_ctor_set_float(v___x_444_, sizeof(void*)*3 + 8, v___x_442_);
lean_ctor_set_uint8(v___x_444_, sizeof(void*)*3 + 16, v___x_427_);
v___x_445_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__6);
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 7);
lean_ctor_set(v___x_433_, 1, v___x_445_);
lean_ctor_set(v___x_433_, 0, v_a_437_);
v___x_447_ = v___x_433_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_437_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v___x_445_);
v___x_447_ = v_reuseFailAlloc_459_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; size_t v___x_456_; size_t v___x_457_; 
v___x_448_ = l_Nat_reprFast(v_snd_431_);
v___x_449_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
v___x_450_ = l_Lean_MessageData_ofFormat(v___x_449_);
v___x_451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_447_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = l_Lean_stringToMessageData(v_usedMsg_439_);
v___x_453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_451_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_454_, 0, v___x_444_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
lean_ctor_set(v___x_454_, 2, v___x_435_);
v___x_455_ = lean_array_push(v_b_424_, v___x_454_);
v___x_456_ = ((size_t)1ULL);
v___x_457_ = lean_usize_add(v_i_423_, v___x_456_);
v_i_423_ = v___x_457_;
v_b_424_ = v___x_455_;
goto _start;
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_del_object(v___x_433_);
lean_dec(v_snd_431_);
lean_dec(v_fst_430_);
lean_dec_ref(v_b_424_);
v_a_468_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_436_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_436_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___boxed(lean_object* v_usedCounters_x3f_477_, lean_object* v_as_478_, lean_object* v_sz_479_, lean_object* v_i_480_, lean_object* v_b_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
size_t v_sz_boxed_484_; size_t v_i_boxed_485_; lean_object* v_res_486_; 
v_sz_boxed_484_ = lean_unbox_usize(v_sz_479_);
lean_dec(v_sz_479_);
v_i_boxed_485_ = lean_unbox_usize(v_i_480_);
lean_dec(v_i_480_);
v_res_486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg(v_usedCounters_x3f_477_, v_as_478_, v_sz_boxed_484_, v_i_boxed_485_, v_b_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v_as_478_);
lean_dec(v_usedCounters_x3f_477_);
return v_res_486_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimpDiagSummary___closed__2(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = l_Lean_Meta_instInhabitedOrigin_default;
v___x_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary(lean_object* v_counters_495_, lean_object* v_usedCounters_x3f_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_){
_start:
{
lean_object* v_toCold_502_; lean_object* v_options_503_; lean_object* v___f_504_; lean_object* v___f_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v_toCold_502_ = lean_ctor_get(v_a_499_, 0);
v_options_503_ = lean_ctor_get(v_toCold_502_, 2);
v___f_504_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimpDiagSummary___closed__0));
v___f_505_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimpDiagSummary___closed__1));
v___x_506_ = l_Lean_diagnostics_threshold;
v___x_507_ = l_Lean_Option_get___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__0(v_options_503_, v___x_506_);
v___x_508_ = l_Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1(v_counters_495_, v___x_507_, v___f_505_, v___f_504_);
v___x_509_ = lean_array_get_size(v___x_508_);
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = lean_nat_dec_eq(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; size_t v_sz_514_; size_t v___x_515_; lean_object* v___x_516_; 
v___x_512_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimpDiagSummary___closed__2, &l_Lean_Meta_Simp_mkSimpDiagSummary___closed__2_once, _init_l_Lean_Meta_Simp_mkSimpDiagSummary___closed__2);
v___x_513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v_sz_514_ = lean_array_size(v___x_508_);
v___x_515_ = ((size_t)0ULL);
v___x_516_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg(v_usedCounters_x3f_496_, v___x_508_, v_sz_514_, v___x_515_, v___x_513_, v_a_500_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_534_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_534_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_534_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_534_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v_snd_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_532_; 
v___x_521_ = lean_array_get(v___x_512_, v___x_508_, v___x_510_);
lean_dec_ref(v___x_508_);
v_snd_522_ = lean_ctor_get(v___x_521_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v___x_521_, 0);
lean_dec(v_unused_533_);
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_532_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_snd_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_532_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v_a_517_);
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_517_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_snd_522_);
v___x_527_ = v_reuseFailAlloc_531_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_529_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_527_);
v___x_529_ = v___x_519_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec_ref(v___x_508_);
v_a_535_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_516_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_516_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
else
{
lean_object* v___x_543_; lean_object* v___x_544_; 
lean_dec_ref(v___x_508_);
v___x_543_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimpDiagSummary___closed__3));
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimpDiagSummary___boxed(lean_object* v_counters_545_, lean_object* v_usedCounters_x3f_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Simp_mkSimpDiagSummary(v_counters_545_, v_usedCounters_x3f_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_usedCounters_x3f_546_);
lean_dec_ref(v_counters_545_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2(lean_object* v_00_u03b2_553_, lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___redArg(v_x_554_, v_x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2___boxed(lean_object* v_00_u03b2_557_, lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2(v_00_u03b2_557_, v_x_558_, v_x_559_);
lean_dec_ref(v_x_559_);
lean_dec_ref(v_x_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3(lean_object* v_usedCounters_x3f_561_, lean_object* v_as_562_, size_t v_sz_563_, size_t v_i_564_, lean_object* v_b_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg(v_usedCounters_x3f_561_, v_as_562_, v_sz_563_, v_i_564_, v_b_565_, v___y_569_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___boxed(lean_object* v_usedCounters_x3f_572_, lean_object* v_as_573_, lean_object* v_sz_574_, lean_object* v_i_575_, lean_object* v_b_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
size_t v_sz_boxed_582_; size_t v_i_boxed_583_; lean_object* v_res_584_; 
v_sz_boxed_582_ = lean_unbox_usize(v_sz_574_);
lean_dec(v_sz_574_);
v_i_boxed_583_ = lean_unbox_usize(v_i_575_);
lean_dec(v_i_575_);
v_res_584_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3(v_usedCounters_x3f_572_, v_as_573_, v_sz_boxed_582_, v_i_boxed_583_, v_b_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec_ref(v_as_573_);
lean_dec(v_usedCounters_x3f_572_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1(lean_object* v_00_u03c3_585_, lean_object* v_00_u03b2_586_, lean_object* v_map_587_, lean_object* v_init_588_, lean_object* v_f_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___redArg(v_map_587_, v_init_588_, v_f_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1___boxed(lean_object* v_00_u03c3_591_, lean_object* v_00_u03b2_592_, lean_object* v_map_593_, lean_object* v_init_594_, lean_object* v_f_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1(v_00_u03c3_591_, v_00_u03b2_592_, v_map_593_, v_init_594_, v_f_595_);
lean_dec_ref(v_map_593_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2(lean_object* v_lt_597_, lean_object* v_n_598_, lean_object* v_as_599_, lean_object* v_lo_600_, lean_object* v_hi_601_, lean_object* v_w_602_, lean_object* v_hlo_603_, lean_object* v_hhi_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___redArg(v_lt_597_, v_n_598_, v_as_599_, v_lo_600_, v_hi_601_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2___boxed(lean_object* v_lt_606_, lean_object* v_n_607_, lean_object* v_as_608_, lean_object* v_lo_609_, lean_object* v_hi_610_, lean_object* v_w_611_, lean_object* v_hlo_612_, lean_object* v_hhi_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2(v_lt_606_, v_n_607_, v_as_608_, v_lo_609_, v_hi_610_, v_w_611_, v_hlo_612_, v_hhi_613_);
lean_dec(v_hi_610_);
lean_dec(v_n_607_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4(lean_object* v_00_u03b2_615_, lean_object* v_x_616_, size_t v_x_617_, lean_object* v_x_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___redArg(v_x_616_, v_x_617_, v_x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4___boxed(lean_object* v_00_u03b2_620_, lean_object* v_x_621_, lean_object* v_x_622_, lean_object* v_x_623_){
_start:
{
size_t v_x_4713__boxed_624_; lean_object* v_res_625_; 
v_x_4713__boxed_624_ = lean_unbox_usize(v_x_622_);
lean_dec(v_x_622_);
v_res_625_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4(v_00_u03b2_620_, v_x_621_, v_x_4713__boxed_624_, v_x_623_);
lean_dec_ref(v_x_623_);
lean_dec_ref(v_x_621_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2___redArg(lean_object* v_map_626_, lean_object* v_f_627_, lean_object* v_init_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(v_f_627_, v_map_626_, v_init_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2(lean_object* v_00_u03c3_630_, lean_object* v_00_u03c3_631_, lean_object* v_00_u03b2_632_, lean_object* v_map_633_, lean_object* v_f_634_, lean_object* v_init_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(v_f_634_, v_map_633_, v_init_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4(lean_object* v_lt_637_, lean_object* v_n_638_, lean_object* v_lo_639_, lean_object* v_hi_640_, lean_object* v_hhi_641_, lean_object* v_pivot_642_, lean_object* v_as_643_, lean_object* v_i_644_, lean_object* v_k_645_, lean_object* v_ilo_646_, lean_object* v_ik_647_, lean_object* v_w_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___redArg(v_lt_637_, v_hi_640_, v_pivot_642_, v_as_643_, v_i_644_, v_k_645_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4___boxed(lean_object* v_lt_650_, lean_object* v_n_651_, lean_object* v_lo_652_, lean_object* v_hi_653_, lean_object* v_hhi_654_, lean_object* v_pivot_655_, lean_object* v_as_656_, lean_object* v_i_657_, lean_object* v_k_658_, lean_object* v_ilo_659_, lean_object* v_ik_660_, lean_object* v_w_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__2_spec__4(v_lt_650_, v_n_651_, v_lo_652_, v_hi_653_, v_hhi_654_, v_pivot_655_, v_as_656_, v_i_657_, v_k_658_, v_ilo_659_, v_ik_660_, v_w_661_);
lean_dec(v_hi_653_);
lean_dec(v_lo_652_);
lean_dec(v_n_651_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_663_, lean_object* v_keys_664_, lean_object* v_vals_665_, lean_object* v_heq_666_, lean_object* v_i_667_, lean_object* v_k_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___redArg(v_keys_664_, v_vals_665_, v_i_667_, v_k_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_670_, lean_object* v_keys_671_, lean_object* v_vals_672_, lean_object* v_heq_673_, lean_object* v_i_674_, lean_object* v_k_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__2_spec__4_spec__7(v_00_u03b2_670_, v_keys_671_, v_vals_672_, v_heq_673_, v_i_674_, v_k_675_);
lean_dec_ref(v_k_675_);
lean_dec_ref(v_vals_672_);
lean_dec_ref(v_keys_671_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03c3_677_, lean_object* v_00_u03c3_678_, lean_object* v_00_u03b1_679_, lean_object* v_00_u03b2_680_, lean_object* v_f_681_, lean_object* v_x_682_, lean_object* v_x_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5___redArg(v_f_681_, v_x_682_, v_x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b1_685_, lean_object* v_00_u03b2_686_, lean_object* v_00_u03c3_687_, lean_object* v_00_u03c3_688_, lean_object* v_f_689_, lean_object* v_as_690_, size_t v_i_691_, size_t v_stop_692_, lean_object* v_b_693_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_f_689_, v_as_690_, v_i_691_, v_stop_692_, v_b_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b1_695_, lean_object* v_00_u03b2_696_, lean_object* v_00_u03c3_697_, lean_object* v_00_u03c3_698_, lean_object* v_f_699_, lean_object* v_as_700_, lean_object* v_i_701_, lean_object* v_stop_702_, lean_object* v_b_703_){
_start:
{
size_t v_i_boxed_704_; size_t v_stop_boxed_705_; lean_object* v_res_706_; 
v_i_boxed_704_ = lean_unbox_usize(v_i_701_);
lean_dec(v_i_701_);
v_stop_boxed_705_ = lean_unbox_usize(v_stop_702_);
lean_dec(v_stop_702_);
v_res_706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__8(v_00_u03b1_695_, v_00_u03b2_696_, v_00_u03c3_697_, v_00_u03c3_698_, v_f_699_, v_as_700_, v_i_boxed_704_, v_stop_boxed_705_, v_b_703_);
lean_dec_ref(v_as_700_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object* v_00_u03c3_707_, lean_object* v_00_u03c3_708_, lean_object* v_00_u03b1_709_, lean_object* v_00_u03b2_710_, lean_object* v_f_711_, lean_object* v_keys_712_, lean_object* v_vals_713_, lean_object* v_heq_714_, lean_object* v_i_715_, lean_object* v_acc_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v_f_711_, v_keys_712_, v_vals_713_, v_i_715_, v_acc_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03c3_718_, lean_object* v_00_u03c3_719_, lean_object* v_00_u03b1_720_, lean_object* v_00_u03b2_721_, lean_object* v_f_722_, lean_object* v_keys_723_, lean_object* v_vals_724_, lean_object* v_heq_725_, lean_object* v_i_726_, lean_object* v_acc_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_collectAboveThreshold___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__1_spec__1_spec__2_spec__5_spec__9(v_00_u03c3_718_, v_00_u03c3_719_, v_00_u03b1_720_, v_00_u03b2_721_, v_f_722_, v_keys_723_, v_vals_724_, v_heq_725_, v_i_726_, v_acc_727_);
lean_dec_ref(v_vals_724_);
lean_dec_ref(v_keys_723_);
return v_res_728_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__0));
v___x_731_ = l_Lean_stringToMessageData(v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_as_732_, size_t v_sz_733_, size_t v_i_734_, lean_object* v_b_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = lean_usize_dec_lt(v_i_734_, v_sz_733_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_b_735_);
return v___x_740_;
}
else
{
lean_object* v_snd_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_785_; 
v_snd_741_ = lean_ctor_get(v_b_735_, 1);
v_isSharedCheck_785_ = !lean_is_exclusive(v_b_735_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; 
v_unused_786_ = lean_ctor_get(v_b_735_, 0);
lean_dec(v_unused_786_);
v___x_743_ = v_b_735_;
v_isShared_744_ = v_isSharedCheck_785_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_snd_741_);
lean_dec(v_b_735_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_785_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v_a_745_; lean_object* v_keys_746_; lean_object* v_origin_747_; lean_object* v_data_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_a_745_ = lean_array_uget_borrowed(v_as_732_, v_i_734_);
v_keys_746_ = lean_ctor_get(v_a_745_, 0);
v_origin_747_ = lean_ctor_get(v_a_745_, 4);
v_data_748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v___x_749_ = lean_box(0);
lean_inc_ref(v_origin_747_);
v___x_750_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_origin_747_, v___y_737_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_750_, 1);
lean_inc_ref(v_keys_746_);
v___x_752_ = l_Lean_Meta_DiscrTree_keysAsPattern(v_keys_746_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_754_; double v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_a_753_);
lean_dec_ref_known(v___x_752_, 1);
v___x_754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_755_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3);
v___x_756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v___x_757_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_757_, 0, v___x_754_);
lean_ctor_set(v___x_757_, 1, v___x_749_);
lean_ctor_set(v___x_757_, 2, v___x_756_);
lean_ctor_set_float(v___x_757_, sizeof(void*)*3, v___x_755_);
lean_ctor_set_float(v___x_757_, sizeof(void*)*3 + 8, v___x_755_);
lean_ctor_set_uint8(v___x_757_, sizeof(void*)*3 + 16, v___x_739_);
v___x_758_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1);
v___x_759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_759_, 0, v_a_751_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
lean_ctor_set(v___x_760_, 1, v_a_753_);
v___x_761_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_761_, 0, v___x_757_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
lean_ctor_set(v___x_761_, 2, v_data_748_);
v___x_762_ = lean_array_push(v_snd_741_, v___x_761_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_762_);
lean_ctor_set(v___x_743_, 0, v___x_749_);
v___x_764_ = v___x_743_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_749_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v___x_762_);
v___x_764_ = v_reuseFailAlloc_768_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
size_t v___x_765_; size_t v___x_766_; 
v___x_765_ = ((size_t)1ULL);
v___x_766_ = lean_usize_add(v_i_734_, v___x_765_);
v_i_734_ = v___x_766_;
v_b_735_ = v___x_764_;
goto _start;
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_751_);
lean_del_object(v___x_743_);
lean_dec(v_snd_741_);
v_a_769_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_752_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_752_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_del_object(v___x_743_);
lean_dec(v_snd_741_);
v_a_777_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_750_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_750_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_as_787_, lean_object* v_sz_788_, lean_object* v_i_789_, lean_object* v_b_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
size_t v_sz_boxed_794_; size_t v_i_boxed_795_; lean_object* v_res_796_; 
v_sz_boxed_794_ = lean_unbox_usize(v_sz_788_);
lean_dec(v_sz_788_);
v_i_boxed_795_ = lean_unbox_usize(v_i_789_);
lean_dec(v_i_789_);
v_res_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg(v_as_787_, v_sz_boxed_794_, v_i_boxed_795_, v_b_790_, v___y_791_, v___y_792_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec_ref(v_as_787_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2(lean_object* v_as_797_, size_t v_sz_798_, size_t v_i_799_, lean_object* v_b_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
uint8_t v___x_806_; 
v___x_806_ = lean_usize_dec_lt(v_i_799_, v_sz_798_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; 
v___x_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_807_, 0, v_b_800_);
return v___x_807_;
}
else
{
lean_object* v_snd_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_852_; 
v_snd_808_ = lean_ctor_get(v_b_800_, 1);
v_isSharedCheck_852_ = !lean_is_exclusive(v_b_800_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; 
v_unused_853_ = lean_ctor_get(v_b_800_, 0);
lean_dec(v_unused_853_);
v___x_810_ = v_b_800_;
v_isShared_811_ = v_isSharedCheck_852_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_snd_808_);
lean_dec(v_b_800_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_852_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_a_812_; lean_object* v_keys_813_; lean_object* v_origin_814_; lean_object* v_data_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_a_812_ = lean_array_uget_borrowed(v_as_797_, v_i_799_);
v_keys_813_ = lean_ctor_get(v_a_812_, 0);
v_origin_814_ = lean_ctor_get(v_a_812_, 4);
v_data_815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v___x_816_ = lean_box(0);
lean_inc_ref(v_origin_814_);
v___x_817_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_origin_814_, v___y_804_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_819_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_817_, 1);
lean_inc_ref(v_keys_813_);
v___x_819_ = l_Lean_Meta_DiscrTree_keysAsPattern(v_keys_813_, v___y_803_, v___y_804_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_821_; double v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_831_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref_known(v___x_819_, 1);
v___x_821_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_822_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3);
v___x_823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v___x_824_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_824_, 0, v___x_821_);
lean_ctor_set(v___x_824_, 1, v___x_816_);
lean_ctor_set(v___x_824_, 2, v___x_823_);
lean_ctor_set_float(v___x_824_, sizeof(void*)*3, v___x_822_);
lean_ctor_set_float(v___x_824_, sizeof(void*)*3 + 8, v___x_822_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*3 + 16, v___x_806_);
v___x_825_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1);
v___x_826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_826_, 0, v_a_818_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
v___x_827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
lean_ctor_set(v___x_827_, 1, v_a_820_);
v___x_828_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_828_, 0, v___x_824_);
lean_ctor_set(v___x_828_, 1, v___x_827_);
lean_ctor_set(v___x_828_, 2, v_data_815_);
v___x_829_ = lean_array_push(v_snd_808_, v___x_828_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___x_829_);
lean_ctor_set(v___x_810_, 0, v___x_816_);
v___x_831_ = v___x_810_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_816_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v___x_829_);
v___x_831_ = v_reuseFailAlloc_835_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
size_t v___x_832_; size_t v___x_833_; lean_object* v___x_834_; 
v___x_832_ = ((size_t)1ULL);
v___x_833_ = lean_usize_add(v_i_799_, v___x_832_);
v___x_834_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg(v_as_797_, v_sz_798_, v___x_833_, v___x_831_, v___y_803_, v___y_804_);
return v___x_834_;
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_dec(v_a_818_);
lean_del_object(v___x_810_);
lean_dec(v_snd_808_);
v_a_836_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_819_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_819_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_del_object(v___x_810_);
lean_dec(v_snd_808_);
v_a_844_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_817_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_817_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2___boxed(lean_object* v_as_854_, lean_object* v_sz_855_, lean_object* v_i_856_, lean_object* v_b_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
size_t v_sz_boxed_863_; size_t v_i_boxed_864_; lean_object* v_res_865_; 
v_sz_boxed_863_ = lean_unbox_usize(v_sz_855_);
lean_dec(v_sz_855_);
v_i_boxed_864_ = lean_unbox_usize(v_i_856_);
lean_dec(v_i_856_);
v_res_865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2(v_as_854_, v_sz_boxed_863_, v_i_boxed_864_, v_b_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec_ref(v_as_854_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0(lean_object* v_init_866_, lean_object* v_n_867_, lean_object* v_b_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
if (lean_obj_tag(v_n_867_) == 0)
{
lean_object* v_cs_874_; lean_object* v___x_875_; lean_object* v___x_876_; size_t v_sz_877_; size_t v___x_878_; lean_object* v___x_879_; 
v_cs_874_ = lean_ctor_get(v_n_867_, 0);
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v_b_868_);
v_sz_877_ = lean_array_size(v_cs_874_);
v___x_878_ = ((size_t)0ULL);
v___x_879_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__1(v_init_866_, v_cs_874_, v_sz_877_, v___x_878_, v___x_876_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_894_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_894_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_894_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_894_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_fst_884_; 
v_fst_884_ = lean_ctor_get(v_a_880_, 0);
if (lean_obj_tag(v_fst_884_) == 0)
{
lean_object* v_snd_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v_snd_885_ = lean_ctor_get(v_a_880_, 1);
lean_inc(v_snd_885_);
lean_dec(v_a_880_);
v___x_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_886_, 0, v_snd_885_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_886_);
v___x_888_ = v___x_882_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
else
{
lean_object* v_val_890_; lean_object* v___x_892_; 
lean_inc_ref(v_fst_884_);
lean_dec(v_a_880_);
v_val_890_ = lean_ctor_get(v_fst_884_, 0);
lean_inc(v_val_890_);
lean_dec_ref_known(v_fst_884_, 1);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v_val_890_);
v___x_892_ = v___x_882_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_val_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
v_a_895_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_879_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_879_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
else
{
lean_object* v_vs_903_; lean_object* v___x_904_; lean_object* v___x_905_; size_t v_sz_906_; size_t v___x_907_; lean_object* v___x_908_; 
v_vs_903_ = lean_ctor_get(v_n_867_, 0);
v___x_904_ = lean_box(0);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
lean_ctor_set(v___x_905_, 1, v_b_868_);
v_sz_906_ = lean_array_size(v_vs_903_);
v___x_907_ = ((size_t)0ULL);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2(v_vs_903_, v_sz_906_, v___x_907_, v___x_905_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_923_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_923_ == 0)
{
v___x_911_ = v___x_908_;
v_isShared_912_ = v_isSharedCheck_923_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_923_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v_fst_913_; 
v_fst_913_ = lean_ctor_get(v_a_909_, 0);
if (lean_obj_tag(v_fst_913_) == 0)
{
lean_object* v_snd_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
v_snd_914_ = lean_ctor_get(v_a_909_, 1);
lean_inc(v_snd_914_);
lean_dec(v_a_909_);
v___x_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_915_, 0, v_snd_914_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v___x_915_);
v___x_917_ = v___x_911_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_915_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
else
{
lean_object* v_val_919_; lean_object* v___x_921_; 
lean_inc_ref(v_fst_913_);
lean_dec(v_a_909_);
v_val_919_ = lean_ctor_get(v_fst_913_, 0);
lean_inc(v_val_919_);
lean_dec_ref_known(v_fst_913_, 1);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v_val_919_);
v___x_921_ = v___x_911_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_val_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
v_a_924_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_908_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_908_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__1(lean_object* v_init_932_, lean_object* v_as_933_, size_t v_sz_934_, size_t v_i_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
uint8_t v___x_942_; 
v___x_942_ = lean_usize_dec_lt(v_i_935_, v_sz_934_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; 
v___x_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_943_, 0, v_b_936_);
return v___x_943_;
}
else
{
lean_object* v_snd_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_978_; 
v_snd_944_ = lean_ctor_get(v_b_936_, 1);
v_isSharedCheck_978_ = !lean_is_exclusive(v_b_936_);
if (v_isSharedCheck_978_ == 0)
{
lean_object* v_unused_979_; 
v_unused_979_ = lean_ctor_get(v_b_936_, 0);
lean_dec(v_unused_979_);
v___x_946_ = v_b_936_;
v_isShared_947_ = v_isSharedCheck_978_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_snd_944_);
lean_dec(v_b_936_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_978_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v_a_949_; lean_object* v___x_950_; 
v___x_948_ = lean_box(0);
v_a_949_ = lean_array_uget_borrowed(v_as_933_, v_i_935_);
lean_inc(v_snd_944_);
v___x_950_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0(v_init_932_, v_a_949_, v_snd_944_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_969_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_969_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_969_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_969_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
if (lean_obj_tag(v_a_951_) == 0)
{
lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v_a_951_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_955_);
v___x_957_ = v___x_946_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_snd_944_);
v___x_957_ = v_reuseFailAlloc_961_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_959_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_957_);
v___x_959_ = v___x_953_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; 
lean_del_object(v___x_953_);
lean_dec(v_snd_944_);
v_a_962_ = lean_ctor_get(v_a_951_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v_a_951_, 1);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 1, v_a_962_);
lean_ctor_set(v___x_946_, 0, v___x_948_);
v___x_964_ = v___x_946_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_a_962_);
v___x_964_ = v_reuseFailAlloc_968_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
size_t v___x_965_; size_t v___x_966_; 
v___x_965_ = ((size_t)1ULL);
v___x_966_ = lean_usize_add(v_i_935_, v___x_965_);
v_i_935_ = v___x_966_;
v_b_936_ = v___x_964_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_del_object(v___x_946_);
lean_dec(v_snd_944_);
v_a_970_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_950_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_950_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__1___boxed(lean_object* v_init_980_, lean_object* v_as_981_, lean_object* v_sz_982_, lean_object* v_i_983_, lean_object* v_b_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
size_t v_sz_boxed_990_; size_t v_i_boxed_991_; lean_object* v_res_992_; 
v_sz_boxed_990_ = lean_unbox_usize(v_sz_982_);
lean_dec(v_sz_982_);
v_i_boxed_991_ = lean_unbox_usize(v_i_983_);
lean_dec(v_i_983_);
v_res_992_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__1(v_init_980_, v_as_981_, v_sz_boxed_990_, v_i_boxed_991_, v_b_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec_ref(v_as_981_);
lean_dec_ref(v_init_980_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0___boxed(lean_object* v_init_993_, lean_object* v_n_994_, lean_object* v_b_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0(v_init_993_, v_n_994_, v_b_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec_ref(v_n_994_);
lean_dec_ref(v_init_993_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg(lean_object* v_as_1002_, size_t v_sz_1003_, size_t v_i_1004_, lean_object* v_b_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
uint8_t v___x_1009_; 
v___x_1009_ = lean_usize_dec_lt(v_i_1004_, v_sz_1003_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1010_, 0, v_b_1005_);
return v___x_1010_;
}
else
{
lean_object* v_snd_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1055_; 
v_snd_1011_ = lean_ctor_get(v_b_1005_, 1);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_b_1005_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; 
v_unused_1056_ = lean_ctor_get(v_b_1005_, 0);
lean_dec(v_unused_1056_);
v___x_1013_ = v_b_1005_;
v_isShared_1014_ = v_isSharedCheck_1055_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_snd_1011_);
lean_dec(v_b_1005_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1055_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v_a_1015_; lean_object* v_keys_1016_; lean_object* v_origin_1017_; lean_object* v_data_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v_a_1015_ = lean_array_uget_borrowed(v_as_1002_, v_i_1004_);
v_keys_1016_ = lean_ctor_get(v_a_1015_, 0);
v_origin_1017_ = lean_ctor_get(v_a_1015_, 4);
v_data_1018_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v___x_1019_ = lean_box(0);
lean_inc_ref(v_origin_1017_);
v___x_1020_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_origin_1017_, v___y_1007_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1022_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
lean_inc_ref(v_keys_1016_);
v___x_1022_ = l_Lean_Meta_DiscrTree_keysAsPattern(v_keys_1016_, v___y_1006_, v___y_1007_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1024_; double v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_a_1023_);
lean_dec_ref_known(v___x_1022_, 1);
v___x_1024_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_1025_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3);
v___x_1026_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v___x_1027_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1027_, 0, v___x_1024_);
lean_ctor_set(v___x_1027_, 1, v___x_1019_);
lean_ctor_set(v___x_1027_, 2, v___x_1026_);
lean_ctor_set_float(v___x_1027_, sizeof(void*)*3, v___x_1025_);
lean_ctor_set_float(v___x_1027_, sizeof(void*)*3 + 8, v___x_1025_);
lean_ctor_set_uint8(v___x_1027_, sizeof(void*)*3 + 16, v___x_1009_);
v___x_1028_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_a_1021_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
lean_ctor_set(v___x_1030_, 1, v_a_1023_);
v___x_1031_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1027_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
lean_ctor_set(v___x_1031_, 2, v_data_1018_);
v___x_1032_ = lean_array_push(v_snd_1011_, v___x_1031_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 1, v___x_1032_);
lean_ctor_set(v___x_1013_, 0, v___x_1019_);
v___x_1034_ = v___x_1013_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
size_t v___x_1035_; size_t v___x_1036_; 
v___x_1035_ = ((size_t)1ULL);
v___x_1036_ = lean_usize_add(v_i_1004_, v___x_1035_);
v_i_1004_ = v___x_1036_;
v_b_1005_ = v___x_1034_;
goto _start;
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v_a_1021_);
lean_del_object(v___x_1013_);
lean_dec(v_snd_1011_);
v_a_1039_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1022_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1022_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_del_object(v___x_1013_);
lean_dec(v_snd_1011_);
v_a_1047_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1020_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1020_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_as_1057_, lean_object* v_sz_1058_, lean_object* v_i_1059_, lean_object* v_b_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
size_t v_sz_boxed_1064_; size_t v_i_boxed_1065_; lean_object* v_res_1066_; 
v_sz_boxed_1064_ = lean_unbox_usize(v_sz_1058_);
lean_dec(v_sz_1058_);
v_i_boxed_1065_ = lean_unbox_usize(v_i_1059_);
lean_dec(v_i_1059_);
v_res_1066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg(v_as_1057_, v_sz_boxed_1064_, v_i_boxed_1065_, v_b_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec_ref(v_as_1057_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1(lean_object* v_as_1067_, size_t v_sz_1068_, size_t v_i_1069_, lean_object* v_b_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
uint8_t v___x_1076_; 
v___x_1076_ = lean_usize_dec_lt(v_i_1069_, v_sz_1068_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; 
v___x_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1077_, 0, v_b_1070_);
return v___x_1077_;
}
else
{
lean_object* v_snd_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1122_; 
v_snd_1078_ = lean_ctor_get(v_b_1070_, 1);
v_isSharedCheck_1122_ = !lean_is_exclusive(v_b_1070_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; 
v_unused_1123_ = lean_ctor_get(v_b_1070_, 0);
lean_dec(v_unused_1123_);
v___x_1080_ = v_b_1070_;
v_isShared_1081_ = v_isSharedCheck_1122_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_snd_1078_);
lean_dec(v_b_1070_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1122_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v_a_1082_; lean_object* v_keys_1083_; lean_object* v_origin_1084_; lean_object* v_data_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v_a_1082_ = lean_array_uget_borrowed(v_as_1067_, v_i_1069_);
v_keys_1083_ = lean_ctor_get(v_a_1082_, 0);
v_origin_1084_ = lean_ctor_get(v_a_1082_, 4);
v_data_1085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v___x_1086_ = lean_box(0);
lean_inc_ref(v_origin_1084_);
v___x_1087_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_originToKey___redArg(v_origin_1084_, v___y_1074_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
lean_inc_ref(v_keys_1083_);
v___x_1089_ = l_Lean_Meta_DiscrTree_keysAsPattern(v_keys_1083_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1091_; double v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1101_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
v___x_1091_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_1092_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3);
v___x_1093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v___x_1094_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1094_, 0, v___x_1091_);
lean_ctor_set(v___x_1094_, 1, v___x_1086_);
lean_ctor_set(v___x_1094_, 2, v___x_1093_);
lean_ctor_set_float(v___x_1094_, sizeof(void*)*3, v___x_1092_);
lean_ctor_set_float(v___x_1094_, sizeof(void*)*3 + 8, v___x_1092_);
lean_ctor_set_uint8(v___x_1094_, sizeof(void*)*3 + 16, v___x_1076_);
v___x_1095_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg___closed__1);
v___x_1096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_a_1088_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v_a_1090_);
v___x_1098_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1094_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
lean_ctor_set(v___x_1098_, 2, v_data_1085_);
v___x_1099_ = lean_array_push(v_snd_1078_, v___x_1098_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 1, v___x_1099_);
lean_ctor_set(v___x_1080_, 0, v___x_1086_);
v___x_1101_ = v___x_1080_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
size_t v___x_1102_; size_t v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = ((size_t)1ULL);
v___x_1103_ = lean_usize_add(v_i_1069_, v___x_1102_);
v___x_1104_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg(v_as_1067_, v_sz_1068_, v___x_1103_, v___x_1101_, v___y_1073_, v___y_1074_);
return v___x_1104_;
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec(v_a_1088_);
lean_del_object(v___x_1080_);
lean_dec(v_snd_1078_);
v_a_1106_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1089_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1089_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_del_object(v___x_1080_);
lean_dec(v_snd_1078_);
v_a_1114_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1087_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1087_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1___boxed(lean_object* v_as_1124_, lean_object* v_sz_1125_, lean_object* v_i_1126_, lean_object* v_b_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
size_t v_sz_boxed_1133_; size_t v_i_boxed_1134_; lean_object* v_res_1135_; 
v_sz_boxed_1133_ = lean_unbox_usize(v_sz_1125_);
lean_dec(v_sz_1125_);
v_i_boxed_1134_ = lean_unbox_usize(v_i_1126_);
lean_dec(v_i_1126_);
v_res_1135_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1(v_as_1124_, v_sz_boxed_1133_, v_i_boxed_1134_, v_b_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec_ref(v_as_1124_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0(lean_object* v_t_1136_, lean_object* v_init_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_root_1143_; lean_object* v_tail_1144_; lean_object* v___x_1145_; 
v_root_1143_ = lean_ctor_get(v_t_1136_, 0);
v_tail_1144_ = lean_ctor_get(v_t_1136_, 1);
lean_inc_ref(v_init_1137_);
v___x_1145_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0(v_init_1137_, v_root_1143_, v_init_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec_ref(v_init_1137_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1182_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1182_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1182_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
if (lean_obj_tag(v_a_1146_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1152_; 
v_a_1150_ = lean_ctor_get(v_a_1146_, 0);
lean_inc(v_a_1150_);
lean_dec_ref_known(v_a_1146_, 1);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v_a_1150_);
v___x_1152_ = v___x_1148_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; size_t v_sz_1157_; size_t v___x_1158_; lean_object* v___x_1159_; 
lean_del_object(v___x_1148_);
v_a_1154_ = lean_ctor_get(v_a_1146_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v_a_1146_, 1);
v___x_1155_ = lean_box(0);
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v_a_1154_);
v_sz_1157_ = lean_array_size(v_tail_1144_);
v___x_1158_ = ((size_t)0ULL);
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1(v_tail_1144_, v_sz_1157_, v___x_1158_, v___x_1156_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1173_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1173_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1173_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v_fst_1164_; 
v_fst_1164_ = lean_ctor_get(v_a_1160_, 0);
if (lean_obj_tag(v_fst_1164_) == 0)
{
lean_object* v_snd_1165_; lean_object* v___x_1167_; 
v_snd_1165_ = lean_ctor_get(v_a_1160_, 1);
lean_inc(v_snd_1165_);
lean_dec(v_a_1160_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_snd_1165_);
v___x_1167_ = v___x_1162_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_snd_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
else
{
lean_object* v_val_1169_; lean_object* v___x_1171_; 
lean_inc_ref(v_fst_1164_);
lean_dec(v_a_1160_);
v_val_1169_ = lean_ctor_get(v_fst_1164_, 0);
lean_inc(v_val_1169_);
lean_dec_ref_known(v_fst_1164_, 1);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_val_1169_);
v___x_1171_ = v___x_1162_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_val_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
v_a_1174_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1159_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1159_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
v_a_1183_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1145_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1145_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0___boxed(lean_object* v_t_1191_, lean_object* v_init_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0(v_t_1191_, v_init_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec_ref(v_t_1191_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary(lean_object* v_thms_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
uint8_t v___x_1205_; 
v___x_1205_ = l_Lean_PersistentArray_isEmpty___redArg(v_thms_1199_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v_data_1207_; lean_object* v___x_1208_; 
v___x_1206_ = lean_unsigned_to_nat(0u);
v_data_1207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v___x_1208_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0(v_thms_1199_, v_data_1207_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1217_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1217_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1217_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v_a_1209_);
lean_ctor_set(v___x_1213_, 1, v___x_1206_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1213_);
v___x_1215_ = v___x_1211_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1213_);
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
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
v_a_1218_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1208_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1208_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimpDiagSummary___closed__3));
v___x_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary___boxed(lean_object* v_thms_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary(v_thms_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec_ref(v_thms_1228_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4(lean_object* v_as_1235_, size_t v_sz_1236_, size_t v_i_1237_, lean_object* v_b_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___redArg(v_as_1235_, v_sz_1236_, v_i_1237_, v_b_1238_, v___y_1241_, v___y_1242_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4___boxed(lean_object* v_as_1245_, lean_object* v_sz_1246_, lean_object* v_i_1247_, lean_object* v_b_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
size_t v_sz_boxed_1254_; size_t v_i_boxed_1255_; lean_object* v_res_1256_; 
v_sz_boxed_1254_ = lean_unbox_usize(v_sz_1246_);
lean_dec(v_sz_1246_);
v_i_boxed_1255_ = lean_unbox_usize(v_i_1247_);
lean_dec(v_i_1247_);
v_res_1256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__1_spec__4(v_as_1245_, v_sz_boxed_1254_, v_i_boxed_1255_, v_b_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec_ref(v_as_1245_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_1257_, size_t v_sz_1258_, size_t v_i_1259_, lean_object* v_b_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v___x_1266_; 
v___x_1266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___redArg(v_as_1257_, v_sz_1258_, v_i_1259_, v_b_1260_, v___y_1263_, v___y_1264_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_1267_, lean_object* v_sz_1268_, lean_object* v_i_1269_, lean_object* v_b_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
size_t v_sz_boxed_1276_; size_t v_i_boxed_1277_; lean_object* v_res_1278_; 
v_sz_boxed_1276_ = lean_unbox_usize(v_sz_1268_);
lean_dec(v_sz_1268_);
v_i_boxed_1277_ = lean_unbox_usize(v_i_1269_);
lean_dec(v_i_1269_);
v_res_1278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary_spec__0_spec__0_spec__2_spec__3(v_as_1267_, v_sz_boxed_1276_, v_i_boxed_1277_, v_b_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec_ref(v_as_1267_);
return v_res_1278_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_mkDiagMessages___lam__0(lean_object* v_x_1279_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = 1;
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkDiagMessages___lam__0___boxed(lean_object* v_x_1281_){
_start:
{
uint8_t v_res_1282_; lean_object* v_r_1283_; 
v_res_1282_ = l_Lean_Meta_Simp_mkDiagMessages___lam__0(v_x_1281_);
lean_dec(v_x_1281_);
v_r_1283_ = lean_box(v_res_1282_);
return v_r_1283_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkDiagMessages___closed__7(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l_Lean_Meta_Simp_mkDiagMessages___closed__6));
v___x_1293_ = l_Lean_MessageData_ofFormat(v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkDiagMessages(lean_object* v_diag_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_){
_start:
{
lean_object* v_usedThmCounter_1300_; lean_object* v_triedThmCounter_1301_; lean_object* v_congrThmCounter_1302_; lean_object* v_thmsWithBadKeys_1303_; lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_usedThmCounter_1300_ = lean_ctor_get(v_diag_1294_, 0);
v_triedThmCounter_1301_ = lean_ctor_get(v_diag_1294_, 1);
v_congrThmCounter_1302_ = lean_ctor_get(v_diag_1294_, 2);
v_thmsWithBadKeys_1303_ = lean_ctor_get(v_diag_1294_, 3);
v___f_1304_ = ((lean_object*)(l_Lean_Meta_Simp_mkDiagMessages___closed__0));
v___x_1305_ = lean_box(0);
v___x_1306_ = l_Lean_Meta_Simp_mkSimpDiagSummary(v_usedThmCounter_1300_, v___x_1305_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
lean_inc_ref(v_usedThmCounter_1300_);
v___x_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1308_, 0, v_usedThmCounter_1300_);
v___x_1309_ = l_Lean_Meta_Simp_mkSimpDiagSummary(v_triedThmCounter_1301_, v___x_1308_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
lean_dec_ref_known(v___x_1308_, 1);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 1);
v___x_1311_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_1312_ = l_Lean_Meta_mkDiagSummary(v___x_1311_, v_congrThmCounter_1302_, v___f_1304_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1358_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1315_ = v___x_1312_;
v_isShared_1316_ = v_isSharedCheck_1358_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1312_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1358_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; 
v___x_1317_ = l___private_Lean_Meta_Tactic_Simp_Diagnostics_0__Lean_Meta_Simp_mkTheoremsWithBadKeySummary(v_thmsWithBadKeys_1303_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1349_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1349_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1349_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
uint8_t v___y_1323_; uint8_t v___y_1340_; uint8_t v___x_1347_; 
v___x_1347_ = l_Lean_Meta_DiagSummary_isEmpty(v_a_1307_);
if (v___x_1347_ == 0)
{
v___y_1340_ = v___x_1347_;
goto v___jp_1339_;
}
else
{
uint8_t v___x_1348_; 
v___x_1348_ = l_Lean_Meta_DiagSummary_isEmpty(v_a_1310_);
v___y_1340_ = v___x_1348_;
goto v___jp_1339_;
}
v___jp_1322_:
{
uint8_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1324_ = 1;
v___x_1325_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
v___x_1326_ = ((lean_object*)(l_Lean_Meta_Simp_mkDiagMessages___closed__1));
v___x_1327_ = l_Lean_Meta_appendSection(v___x_1325_, v___x_1311_, v___x_1326_, v_a_1307_, v___x_1324_);
v___x_1328_ = ((lean_object*)(l_Lean_Meta_Simp_mkDiagMessages___closed__2));
v___x_1329_ = l_Lean_Meta_appendSection(v___x_1327_, v___x_1311_, v___x_1328_, v_a_1310_, v___x_1324_);
v___x_1330_ = ((lean_object*)(l_Lean_Meta_Simp_mkDiagMessages___closed__3));
v___x_1331_ = l_Lean_Meta_appendSection(v___x_1329_, v___x_1311_, v___x_1330_, v_a_1313_, v___x_1324_);
v___x_1332_ = ((lean_object*)(l_Lean_Meta_Simp_mkDiagMessages___closed__4));
v___x_1333_ = l_Lean_Meta_appendSection(v___x_1331_, v___x_1311_, v___x_1332_, v_a_1318_, v___y_1323_);
v___x_1334_ = lean_obj_once(&l_Lean_Meta_Simp_mkDiagMessages___closed__7, &l_Lean_Meta_Simp_mkDiagMessages___closed__7_once, _init_l_Lean_Meta_Simp_mkDiagMessages___closed__7);
v___x_1335_ = lean_array_push(v___x_1333_, v___x_1334_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1335_);
v___x_1337_ = v___x_1320_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
v___jp_1339_:
{
if (v___y_1340_ == 0)
{
lean_del_object(v___x_1315_);
v___y_1323_ = v___y_1340_;
goto v___jp_1322_;
}
else
{
uint8_t v___x_1341_; 
v___x_1341_ = l_Lean_Meta_DiagSummary_isEmpty(v_a_1313_);
if (v___x_1341_ == 0)
{
lean_del_object(v___x_1315_);
v___y_1323_ = v___x_1341_;
goto v___jp_1322_;
}
else
{
uint8_t v___x_1342_; 
v___x_1342_ = l_Lean_Meta_DiagSummary_isEmpty(v_a_1318_);
if (v___x_1342_ == 0)
{
lean_del_object(v___x_1315_);
v___y_1323_ = v___x_1342_;
goto v___jp_1322_;
}
else
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
lean_del_object(v___x_1320_);
lean_dec(v_a_1318_);
lean_dec(v_a_1313_);
lean_dec(v_a_1310_);
lean_dec(v_a_1307_);
v___x_1343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__0));
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1343_);
v___x_1345_ = v___x_1315_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
lean_del_object(v___x_1315_);
lean_dec(v_a_1313_);
lean_dec(v_a_1310_);
lean_dec(v_a_1307_);
v_a_1350_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1352_ = v___x_1317_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1317_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1350_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec(v_a_1310_);
lean_dec(v_a_1307_);
v_a_1359_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1312_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1312_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec(v_a_1307_);
v_a_1367_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1309_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1309_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1306_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1306_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkDiagMessages___boxed(lean_object* v_diag_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lean_Meta_Simp_mkDiagMessages(v_diag_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec_ref(v_diag_1383_);
return v_res_1389_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_1398_, uint8_t v___y_1399_, lean_object* v_x_1400_){
_start:
{
if (lean_obj_tag(v_x_1400_) == 1)
{
lean_object* v_pre_1401_; 
v_pre_1401_ = lean_ctor_get(v_x_1400_, 0);
switch(lean_obj_tag(v_pre_1401_))
{
case 1:
{
lean_object* v_pre_1402_; 
v_pre_1402_ = lean_ctor_get(v_pre_1401_, 0);
switch(lean_obj_tag(v_pre_1402_))
{
case 0:
{
lean_object* v_str_1403_; lean_object* v_str_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v_str_1403_ = lean_ctor_get(v_x_1400_, 1);
v_str_1404_ = lean_ctor_get(v_pre_1401_, 1);
v___x_1405_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_1406_ = lean_string_dec_eq(v_str_1404_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_1408_ = lean_string_dec_eq(v_str_1404_, v___x_1407_);
if (v___x_1408_ == 0)
{
return v___x_1408_;
}
else
{
lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_1410_ = lean_string_dec_eq(v_str_1403_, v___x_1409_);
if (v___x_1410_ == 0)
{
return v___x_1410_;
}
else
{
return v_suppressElabErrors_1398_;
}
}
}
else
{
lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_1412_ = lean_string_dec_eq(v_str_1403_, v___x_1411_);
if (v___x_1412_ == 0)
{
return v___x_1412_;
}
else
{
return v_suppressElabErrors_1398_;
}
}
}
case 1:
{
lean_object* v_pre_1413_; 
v_pre_1413_ = lean_ctor_get(v_pre_1402_, 0);
if (lean_obj_tag(v_pre_1413_) == 0)
{
lean_object* v_str_1414_; lean_object* v_str_1415_; lean_object* v_str_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v_str_1414_ = lean_ctor_get(v_x_1400_, 1);
v_str_1415_ = lean_ctor_get(v_pre_1401_, 1);
v_str_1416_ = lean_ctor_get(v_pre_1402_, 1);
v___x_1417_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_1418_ = lean_string_dec_eq(v_str_1416_, v___x_1417_);
if (v___x_1418_ == 0)
{
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1419_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_1420_ = lean_string_dec_eq(v_str_1415_, v___x_1419_);
if (v___x_1420_ == 0)
{
return v___x_1420_;
}
else
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_1422_ = lean_string_dec_eq(v_str_1414_, v___x_1421_);
if (v___x_1422_ == 0)
{
return v___x_1422_;
}
else
{
return v_suppressElabErrors_1398_;
}
}
}
}
else
{
return v___y_1399_;
}
}
default: 
{
return v___y_1399_;
}
}
}
case 0:
{
lean_object* v_str_1423_; lean_object* v___x_1424_; uint8_t v___x_1425_; 
v_str_1423_ = lean_ctor_get(v_x_1400_, 1);
v___x_1424_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_1425_ = lean_string_dec_eq(v_str_1423_, v___x_1424_);
if (v___x_1425_ == 0)
{
return v___x_1425_;
}
else
{
return v_suppressElabErrors_1398_;
}
}
default: 
{
return v___y_1399_;
}
}
}
else
{
return v___y_1399_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_1426_, lean_object* v___y_1427_, lean_object* v_x_1428_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1429_; uint8_t v___y_6601__boxed_1430_; uint8_t v_res_1431_; lean_object* v_r_1432_; 
v_suppressElabErrors_boxed_1429_ = lean_unbox(v_suppressElabErrors_1426_);
v___y_6601__boxed_1430_ = lean_unbox(v___y_1427_);
v_res_1431_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_1429_, v___y_6601__boxed_1430_, v_x_1428_);
lean_dec(v_x_1428_);
v_r_1432_ = lean_box(v_res_1431_);
return v_r_1432_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_1433_, lean_object* v_opt_1434_){
_start:
{
lean_object* v_name_1435_; lean_object* v_defValue_1436_; lean_object* v_map_1437_; lean_object* v___x_1438_; 
v_name_1435_ = lean_ctor_get(v_opt_1434_, 0);
v_defValue_1436_ = lean_ctor_get(v_opt_1434_, 1);
v_map_1437_ = lean_ctor_get(v_opts_1433_, 0);
v___x_1438_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1437_, v_name_1435_);
if (lean_obj_tag(v___x_1438_) == 0)
{
uint8_t v___x_1439_; 
v___x_1439_ = lean_unbox(v_defValue_1436_);
return v___x_1439_;
}
else
{
lean_object* v_val_1440_; 
v_val_1440_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_val_1440_);
lean_dec_ref_known(v___x_1438_, 1);
if (lean_obj_tag(v_val_1440_) == 1)
{
uint8_t v_v_1441_; 
v_v_1441_ = lean_ctor_get_uint8(v_val_1440_, 0);
lean_dec_ref_known(v_val_1440_, 0);
return v_v_1441_;
}
else
{
uint8_t v___x_1442_; 
lean_dec(v_val_1440_);
v___x_1442_ = lean_unbox(v_defValue_1436_);
return v___x_1442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_1443_, lean_object* v_opt_1444_){
_start:
{
uint8_t v_res_1445_; lean_object* v_r_1446_; 
v_res_1445_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__5(v_opts_1443_, v_opt_1444_);
lean_dec_ref(v_opt_1444_);
lean_dec_ref(v_opts_1443_);
v_r_1446_ = lean_box(v_res_1445_);
return v_r_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__4(lean_object* v_msgData_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v___x_1453_; lean_object* v_env_1454_; lean_object* v___x_1455_; lean_object* v_toCold_1456_; lean_object* v_mctx_1457_; lean_object* v_lctx_1458_; lean_object* v_options_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1453_ = lean_st_ref_get(v___y_1451_);
v_env_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc_ref(v_env_1454_);
lean_dec(v___x_1453_);
v___x_1455_ = lean_st_ref_get(v___y_1449_);
v_toCold_1456_ = lean_ctor_get(v___y_1450_, 0);
v_mctx_1457_ = lean_ctor_get(v___x_1455_, 0);
lean_inc_ref(v_mctx_1457_);
lean_dec(v___x_1455_);
v_lctx_1458_ = lean_ctor_get(v___y_1448_, 2);
v_options_1459_ = lean_ctor_get(v_toCold_1456_, 2);
lean_inc_ref(v_options_1459_);
lean_inc_ref(v_lctx_1458_);
v___x_1460_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1460_, 0, v_env_1454_);
lean_ctor_set(v___x_1460_, 1, v_mctx_1457_);
lean_ctor_set(v___x_1460_, 2, v_lctx_1458_);
lean_ctor_set(v___x_1460_, 3, v_options_1459_);
v___x_1461_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
lean_ctor_set(v___x_1461_, 1, v_msgData_1447_);
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_msgData_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__4(v_msgData_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1(lean_object* v_ref_1470_, lean_object* v_msgData_1471_, uint8_t v_severity_1472_, uint8_t v_isSilent_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
uint8_t v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; uint8_t v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v_currNamespace_1487_; lean_object* v_openDecls_1488_; lean_object* v___y_1489_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; uint8_t v___y_1520_; uint8_t v___y_1521_; lean_object* v___y_1522_; uint8_t v___y_1523_; lean_object* v___y_1524_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; uint8_t v___y_1546_; lean_object* v___y_1547_; uint8_t v___y_1548_; uint8_t v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___y_1560_; uint8_t v___y_1561_; uint8_t v___y_1562_; uint8_t v___y_1563_; uint8_t v___x_1568_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; uint8_t v___y_1576_; uint8_t v___y_1577_; uint8_t v___y_1578_; uint8_t v___y_1580_; uint8_t v___x_1598_; 
v___x_1568_ = 2;
v___x_1598_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1472_, v___x_1568_);
if (v___x_1598_ == 0)
{
v___y_1580_ = v___x_1598_;
goto v___jp_1579_;
}
else
{
uint8_t v___x_1599_; 
lean_inc_ref(v_msgData_1471_);
v___x_1599_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1471_);
v___y_1580_ = v___x_1599_;
goto v___jp_1579_;
}
v___jp_1479_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v_env_1494_; lean_object* v_nextMacroScope_1495_; lean_object* v_ngen_1496_; lean_object* v_auxDeclNGen_1497_; lean_object* v_traceState_1498_; lean_object* v_cache_1499_; lean_object* v_messages_1500_; lean_object* v_infoState_1501_; lean_object* v_snapshotTasks_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1513_; 
lean_inc(v_openDecls_1488_);
lean_inc(v_currNamespace_1487_);
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v_currNamespace_1487_);
lean_ctor_set(v___x_1490_, 1, v_openDecls_1488_);
v___x_1491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
lean_ctor_set(v___x_1491_, 1, v___y_1482_);
lean_inc_ref(v___y_1485_);
lean_inc_ref(v___y_1481_);
v___x_1492_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1492_, 0, v___y_1481_);
lean_ctor_set(v___x_1492_, 1, v___y_1484_);
lean_ctor_set(v___x_1492_, 2, v___y_1486_);
lean_ctor_set(v___x_1492_, 3, v___y_1485_);
lean_ctor_set(v___x_1492_, 4, v___x_1491_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*5, v___y_1480_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*5 + 1, v___y_1483_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*5 + 2, v_isSilent_1473_);
v___x_1493_ = lean_st_ref_take(v___y_1489_);
v_env_1494_ = lean_ctor_get(v___x_1493_, 0);
v_nextMacroScope_1495_ = lean_ctor_get(v___x_1493_, 1);
v_ngen_1496_ = lean_ctor_get(v___x_1493_, 2);
v_auxDeclNGen_1497_ = lean_ctor_get(v___x_1493_, 3);
v_traceState_1498_ = lean_ctor_get(v___x_1493_, 4);
v_cache_1499_ = lean_ctor_get(v___x_1493_, 5);
v_messages_1500_ = lean_ctor_get(v___x_1493_, 6);
v_infoState_1501_ = lean_ctor_get(v___x_1493_, 7);
v_snapshotTasks_1502_ = lean_ctor_get(v___x_1493_, 8);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1504_ = v___x_1493_;
v_isShared_1505_ = v_isSharedCheck_1513_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_snapshotTasks_1502_);
lean_inc(v_infoState_1501_);
lean_inc(v_messages_1500_);
lean_inc(v_cache_1499_);
lean_inc(v_traceState_1498_);
lean_inc(v_auxDeclNGen_1497_);
lean_inc(v_ngen_1496_);
lean_inc(v_nextMacroScope_1495_);
lean_inc(v_env_1494_);
lean_dec(v___x_1493_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1513_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1506_ = lean_box(0);
v___x_1507_ = l_Lean_MessageLog_add(v___x_1492_, v_messages_1500_);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 6, v___x_1507_);
v___x_1509_ = v___x_1504_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_env_1494_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_nextMacroScope_1495_);
lean_ctor_set(v_reuseFailAlloc_1512_, 2, v_ngen_1496_);
lean_ctor_set(v_reuseFailAlloc_1512_, 3, v_auxDeclNGen_1497_);
lean_ctor_set(v_reuseFailAlloc_1512_, 4, v_traceState_1498_);
lean_ctor_set(v_reuseFailAlloc_1512_, 5, v_cache_1499_);
lean_ctor_set(v_reuseFailAlloc_1512_, 6, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1512_, 7, v_infoState_1501_);
lean_ctor_set(v_reuseFailAlloc_1512_, 8, v_snapshotTasks_1502_);
v___x_1509_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_st_ref_put(v___y_1489_, v___x_1509_);
v___x_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1506_);
return v___x_1511_;
}
}
}
v___jp_1514_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1540_; 
v___x_1525_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1471_);
v___x_1526_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__4(v___x_1525_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1540_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1540_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_inc_ref_n(v___y_1518_, 2);
v___x_1531_ = l_Lean_FileMap_toPosition(v___y_1518_, v___y_1522_);
lean_dec(v___y_1522_);
v___x_1532_ = l_Lean_FileMap_toPosition(v___y_1518_, v___y_1524_);
lean_dec(v___y_1524_);
v___x_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
v___x_1534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
if (v___y_1523_ == 0)
{
lean_del_object(v___x_1529_);
lean_dec_ref(v___y_1516_);
v___y_1480_ = v___y_1520_;
v___y_1481_ = v___y_1519_;
v___y_1482_ = v_a_1527_;
v___y_1483_ = v___y_1521_;
v___y_1484_ = v___x_1531_;
v___y_1485_ = v___x_1534_;
v___y_1486_ = v___x_1533_;
v_currNamespace_1487_ = v___y_1517_;
v_openDecls_1488_ = v___y_1515_;
v___y_1489_ = v___y_1477_;
goto v___jp_1479_;
}
else
{
uint8_t v___x_1535_; 
lean_inc(v_a_1527_);
v___x_1535_ = l_Lean_MessageData_hasTag(v___y_1516_, v_a_1527_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
lean_dec_ref_known(v___x_1533_, 1);
lean_dec_ref(v___x_1531_);
lean_dec(v_a_1527_);
v___x_1536_ = lean_box(0);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1536_);
v___x_1538_ = v___x_1529_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
else
{
lean_del_object(v___x_1529_);
v___y_1480_ = v___y_1520_;
v___y_1481_ = v___y_1519_;
v___y_1482_ = v_a_1527_;
v___y_1483_ = v___y_1521_;
v___y_1484_ = v___x_1531_;
v___y_1485_ = v___x_1534_;
v___y_1486_ = v___x_1533_;
v_currNamespace_1487_ = v___y_1517_;
v_openDecls_1488_ = v___y_1515_;
v___y_1489_ = v___y_1477_;
goto v___jp_1479_;
}
}
}
}
v___jp_1541_:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lean_Syntax_getTailPos_x3f(v___y_1550_, v___y_1546_);
lean_dec(v___y_1550_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_inc(v___y_1551_);
v___y_1515_ = v___y_1542_;
v___y_1516_ = v___y_1543_;
v___y_1517_ = v___y_1544_;
v___y_1518_ = v___y_1545_;
v___y_1519_ = v___y_1547_;
v___y_1520_ = v___y_1546_;
v___y_1521_ = v___y_1548_;
v___y_1522_ = v___y_1551_;
v___y_1523_ = v___y_1549_;
v___y_1524_ = v___y_1551_;
goto v___jp_1514_;
}
else
{
lean_object* v_val_1553_; 
v_val_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_val_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___y_1515_ = v___y_1542_;
v___y_1516_ = v___y_1543_;
v___y_1517_ = v___y_1544_;
v___y_1518_ = v___y_1545_;
v___y_1519_ = v___y_1547_;
v___y_1520_ = v___y_1546_;
v___y_1521_ = v___y_1548_;
v___y_1522_ = v___y_1551_;
v___y_1523_ = v___y_1549_;
v___y_1524_ = v_val_1553_;
goto v___jp_1514_;
}
}
v___jp_1554_:
{
lean_object* v_ref_1564_; lean_object* v___x_1565_; 
v_ref_1564_ = l_Lean_replaceRef(v_ref_1470_, v___y_1559_);
v___x_1565_ = l_Lean_Syntax_getPos_x3f(v_ref_1564_, v___y_1561_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_unsigned_to_nat(0u);
v___y_1542_ = v___y_1555_;
v___y_1543_ = v___y_1556_;
v___y_1544_ = v___y_1557_;
v___y_1545_ = v___y_1558_;
v___y_1546_ = v___y_1561_;
v___y_1547_ = v___y_1560_;
v___y_1548_ = v___y_1563_;
v___y_1549_ = v___y_1562_;
v___y_1550_ = v_ref_1564_;
v___y_1551_ = v___x_1566_;
goto v___jp_1541_;
}
else
{
lean_object* v_val_1567_; 
v_val_1567_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_val_1567_);
lean_dec_ref_known(v___x_1565_, 1);
v___y_1542_ = v___y_1555_;
v___y_1543_ = v___y_1556_;
v___y_1544_ = v___y_1557_;
v___y_1545_ = v___y_1558_;
v___y_1546_ = v___y_1561_;
v___y_1547_ = v___y_1560_;
v___y_1548_ = v___y_1563_;
v___y_1549_ = v___y_1562_;
v___y_1550_ = v_ref_1564_;
v___y_1551_ = v_val_1567_;
goto v___jp_1541_;
}
}
v___jp_1569_:
{
if (v___y_1578_ == 0)
{
v___y_1555_ = v___y_1570_;
v___y_1556_ = v___y_1573_;
v___y_1557_ = v___y_1574_;
v___y_1558_ = v___y_1571_;
v___y_1559_ = v___y_1575_;
v___y_1560_ = v___y_1572_;
v___y_1561_ = v___y_1576_;
v___y_1562_ = v___y_1577_;
v___y_1563_ = v_severity_1472_;
goto v___jp_1554_;
}
else
{
v___y_1555_ = v___y_1570_;
v___y_1556_ = v___y_1573_;
v___y_1557_ = v___y_1574_;
v___y_1558_ = v___y_1571_;
v___y_1559_ = v___y_1575_;
v___y_1560_ = v___y_1572_;
v___y_1561_ = v___y_1576_;
v___y_1562_ = v___y_1577_;
v___y_1563_ = v___x_1568_;
goto v___jp_1554_;
}
}
v___jp_1579_:
{
if (v___y_1580_ == 0)
{
lean_object* v_toCold_1581_; lean_object* v_ref_1582_; uint8_t v_suppressElabErrors_1583_; lean_object* v_fileName_1584_; lean_object* v_fileMap_1585_; lean_object* v_options_1586_; lean_object* v_currNamespace_1587_; lean_object* v_openDecls_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___f_1591_; uint8_t v___x_1592_; uint8_t v___x_1593_; 
v_toCold_1581_ = lean_ctor_get(v___y_1476_, 0);
v_ref_1582_ = lean_ctor_get(v___y_1476_, 2);
v_suppressElabErrors_1583_ = lean_ctor_get_uint8(v___y_1476_, sizeof(void*)*3 + 1);
v_fileName_1584_ = lean_ctor_get(v_toCold_1581_, 0);
v_fileMap_1585_ = lean_ctor_get(v_toCold_1581_, 1);
v_options_1586_ = lean_ctor_get(v_toCold_1581_, 2);
v_currNamespace_1587_ = lean_ctor_get(v_toCold_1581_, 4);
v_openDecls_1588_ = lean_ctor_get(v_toCold_1581_, 5);
v___x_1589_ = lean_box(v_suppressElabErrors_1583_);
v___x_1590_ = lean_box(v___y_1580_);
v___f_1591_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1591_, 0, v___x_1589_);
lean_closure_set(v___f_1591_, 1, v___x_1590_);
v___x_1592_ = 1;
v___x_1593_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1472_, v___x_1592_);
if (v___x_1593_ == 0)
{
v___y_1570_ = v_openDecls_1588_;
v___y_1571_ = v_fileMap_1585_;
v___y_1572_ = v_fileName_1584_;
v___y_1573_ = v___f_1591_;
v___y_1574_ = v_currNamespace_1587_;
v___y_1575_ = v_ref_1582_;
v___y_1576_ = v___y_1580_;
v___y_1577_ = v_suppressElabErrors_1583_;
v___y_1578_ = v___x_1593_;
goto v___jp_1569_;
}
else
{
lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1594_ = l_Lean_warningAsError;
v___x_1595_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1_spec__5(v_options_1586_, v___x_1594_);
v___y_1570_ = v_openDecls_1588_;
v___y_1571_ = v_fileMap_1585_;
v___y_1572_ = v_fileName_1584_;
v___y_1573_ = v___f_1591_;
v___y_1574_ = v_currNamespace_1587_;
v___y_1575_ = v_ref_1582_;
v___y_1576_ = v___y_1580_;
v___y_1577_ = v_suppressElabErrors_1583_;
v___y_1578_ = v___x_1595_;
goto v___jp_1569_;
}
}
else
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec_ref(v_msgData_1471_);
v___x_1596_ = lean_box(0);
v___x_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
return v___x_1597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_1600_, lean_object* v_msgData_1601_, lean_object* v_severity_1602_, lean_object* v_isSilent_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
uint8_t v_severity_boxed_1609_; uint8_t v_isSilent_boxed_1610_; lean_object* v_res_1611_; 
v_severity_boxed_1609_ = lean_unbox(v_severity_1602_);
v_isSilent_boxed_1610_ = lean_unbox(v_isSilent_1603_);
v_res_1611_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1(v_ref_1600_, v_msgData_1601_, v_severity_boxed_1609_, v_isSilent_boxed_1610_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v_ref_1600_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0(lean_object* v_msgData_1612_, uint8_t v_severity_1613_, uint8_t v_isSilent_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_ref_1620_; lean_object* v___x_1621_; 
v_ref_1620_ = lean_ctor_get(v___y_1617_, 2);
v___x_1621_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0_spec__1(v_ref_1620_, v_msgData_1612_, v_severity_1613_, v_isSilent_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0___boxed(lean_object* v_msgData_1622_, lean_object* v_severity_1623_, lean_object* v_isSilent_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
uint8_t v_severity_boxed_1630_; uint8_t v_isSilent_boxed_1631_; lean_object* v_res_1632_; 
v_severity_boxed_1630_ = lean_unbox(v_severity_1623_);
v_isSilent_boxed_1631_ = lean_unbox(v_isSilent_1624_);
v_res_1632_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0(v_msgData_1622_, v_severity_boxed_1630_, v_isSilent_boxed_1631_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0(lean_object* v_msgData_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
uint8_t v___x_1639_; uint8_t v___x_1640_; lean_object* v___x_1641_; 
v___x_1639_ = 0;
v___x_1640_ = 0;
v___x_1641_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0_spec__0(v_msgData_1633_, v___x_1639_, v___x_1640_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0___boxed(lean_object* v_msgData_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0(v_msgData_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
return v_res_1648_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_reportDiag___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = ((lean_object*)(l_Lean_Meta_Simp_reportDiag___lam__0___closed__1));
v___x_1653_ = l_Lean_MessageData_ofFormat(v___x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag___lam__0(lean_object* v_diag_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lean_Meta_Simp_mkDiagMessages(v_diag_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1680_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1663_ = v___x_1660_;
v_isShared_1664_ = v_isSharedCheck_1680_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1660_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1680_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; 
v___x_1665_ = lean_array_get_size(v_a_1661_);
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = lean_nat_dec_eq(v___x_1665_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; lean_object* v___x_1669_; double v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
lean_del_object(v___x_1663_);
v___x_1668_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__2));
v___x_1669_ = lean_box(0);
v___x_1670_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__3);
v___x_1671_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_mkSimpDiagSummary_spec__3___redArg___closed__4));
v___x_1672_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1672_, 0, v___x_1668_);
lean_ctor_set(v___x_1672_, 1, v___x_1669_);
lean_ctor_set(v___x_1672_, 2, v___x_1671_);
lean_ctor_set_float(v___x_1672_, sizeof(void*)*3, v___x_1670_);
lean_ctor_set_float(v___x_1672_, sizeof(void*)*3 + 8, v___x_1670_);
lean_ctor_set_uint8(v___x_1672_, sizeof(void*)*3 + 16, v___x_1667_);
v___x_1673_ = lean_obj_once(&l_Lean_Meta_Simp_reportDiag___lam__0___closed__2, &l_Lean_Meta_Simp_reportDiag___lam__0___closed__2_once, _init_l_Lean_Meta_Simp_reportDiag___lam__0___closed__2);
v___x_1674_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
lean_ctor_set(v___x_1674_, 2, v_a_1661_);
v___x_1675_ = l_Lean_logInfo___at___00Lean_Meta_Simp_reportDiag_spec__0(v___x_1674_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
return v___x_1675_;
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1678_; 
lean_dec(v_a_1661_);
v___x_1676_ = lean_box(0);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v___x_1676_);
v___x_1678_ = v___x_1663_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v___x_1676_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1688_; 
v_a_1681_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1683_ = v___x_1660_;
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1660_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1686_; 
if (v_isShared_1684_ == 0)
{
v___x_1686_ = v___x_1683_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_a_1681_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag___lam__0___boxed(lean_object* v_diag_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lean_Meta_Simp_reportDiag___lam__0(v_diag_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec_ref(v_diag_1689_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0(lean_object* v___y_1696_, uint8_t v_isExporting_1697_, lean_object* v___x_1698_, lean_object* v___y_1699_, lean_object* v___x_1700_, lean_object* v_a_x3f_1701_){
_start:
{
lean_object* v___x_1703_; lean_object* v_env_1704_; lean_object* v_nextMacroScope_1705_; lean_object* v_ngen_1706_; lean_object* v_auxDeclNGen_1707_; lean_object* v_traceState_1708_; lean_object* v_messages_1709_; lean_object* v_infoState_1710_; lean_object* v_snapshotTasks_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1736_; 
v___x_1703_ = lean_st_ref_take(v___y_1696_);
v_env_1704_ = lean_ctor_get(v___x_1703_, 0);
v_nextMacroScope_1705_ = lean_ctor_get(v___x_1703_, 1);
v_ngen_1706_ = lean_ctor_get(v___x_1703_, 2);
v_auxDeclNGen_1707_ = lean_ctor_get(v___x_1703_, 3);
v_traceState_1708_ = lean_ctor_get(v___x_1703_, 4);
v_messages_1709_ = lean_ctor_get(v___x_1703_, 6);
v_infoState_1710_ = lean_ctor_get(v___x_1703_, 7);
v_snapshotTasks_1711_ = lean_ctor_get(v___x_1703_, 8);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1736_ == 0)
{
lean_object* v_unused_1737_; 
v_unused_1737_ = lean_ctor_get(v___x_1703_, 5);
lean_dec(v_unused_1737_);
v___x_1713_ = v___x_1703_;
v_isShared_1714_ = v_isSharedCheck_1736_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_snapshotTasks_1711_);
lean_inc(v_infoState_1710_);
lean_inc(v_messages_1709_);
lean_inc(v_traceState_1708_);
lean_inc(v_auxDeclNGen_1707_);
lean_inc(v_ngen_1706_);
lean_inc(v_nextMacroScope_1705_);
lean_inc(v_env_1704_);
lean_dec(v___x_1703_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1736_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1715_; lean_object* v___x_1717_; 
v___x_1715_ = l_Lean_Environment_setExporting(v_env_1704_, v_isExporting_1697_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 5, v___x_1698_);
lean_ctor_set(v___x_1713_, 0, v___x_1715_);
v___x_1717_ = v___x_1713_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1715_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v_nextMacroScope_1705_);
lean_ctor_set(v_reuseFailAlloc_1735_, 2, v_ngen_1706_);
lean_ctor_set(v_reuseFailAlloc_1735_, 3, v_auxDeclNGen_1707_);
lean_ctor_set(v_reuseFailAlloc_1735_, 4, v_traceState_1708_);
lean_ctor_set(v_reuseFailAlloc_1735_, 5, v___x_1698_);
lean_ctor_set(v_reuseFailAlloc_1735_, 6, v_messages_1709_);
lean_ctor_set(v_reuseFailAlloc_1735_, 7, v_infoState_1710_);
lean_ctor_set(v_reuseFailAlloc_1735_, 8, v_snapshotTasks_1711_);
v___x_1717_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v_mctx_1720_; lean_object* v_zetaDeltaFVarIds_1721_; lean_object* v_postponed_1722_; lean_object* v_diag_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1733_; 
v___x_1718_ = lean_st_ref_put(v___y_1696_, v___x_1717_);
v___x_1719_ = lean_st_ref_take(v___y_1699_);
v_mctx_1720_ = lean_ctor_get(v___x_1719_, 0);
v_zetaDeltaFVarIds_1721_ = lean_ctor_get(v___x_1719_, 2);
v_postponed_1722_ = lean_ctor_get(v___x_1719_, 3);
v_diag_1723_ = lean_ctor_get(v___x_1719_, 4);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1733_ == 0)
{
lean_object* v_unused_1734_; 
v_unused_1734_ = lean_ctor_get(v___x_1719_, 1);
lean_dec(v_unused_1734_);
v___x_1725_ = v___x_1719_;
v_isShared_1726_ = v_isSharedCheck_1733_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_diag_1723_);
lean_inc(v_postponed_1722_);
lean_inc(v_zetaDeltaFVarIds_1721_);
lean_inc(v_mctx_1720_);
lean_dec(v___x_1719_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1733_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1727_ = lean_box(0);
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 1, v___x_1700_);
v___x_1729_ = v___x_1725_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_mctx_1720_);
lean_ctor_set(v_reuseFailAlloc_1732_, 1, v___x_1700_);
lean_ctor_set(v_reuseFailAlloc_1732_, 2, v_zetaDeltaFVarIds_1721_);
lean_ctor_set(v_reuseFailAlloc_1732_, 3, v_postponed_1722_);
lean_ctor_set(v_reuseFailAlloc_1732_, 4, v_diag_1723_);
v___x_1729_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_st_ref_put(v___y_1699_, v___x_1729_);
v___x_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1727_);
return v___x_1731_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v___y_1738_, lean_object* v_isExporting_1739_, lean_object* v___x_1740_, lean_object* v___y_1741_, lean_object* v___x_1742_, lean_object* v_a_x3f_1743_, lean_object* v___y_1744_){
_start:
{
uint8_t v_isExporting_boxed_1745_; lean_object* v_res_1746_; 
v_isExporting_boxed_1745_ = lean_unbox(v_isExporting_1739_);
v_res_1746_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0(v___y_1738_, v_isExporting_boxed_1745_, v___x_1740_, v___y_1741_, v___x_1742_, v_a_x3f_1743_);
lean_dec(v_a_x3f_1743_);
lean_dec(v___y_1741_);
lean_dec(v___y_1738_);
return v_res_1746_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1747_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__0);
v___x_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
return v___x_1749_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1750_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1);
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
return v___x_1751_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__1);
v___x_1753_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
lean_ctor_set(v___x_1753_, 2, v___x_1752_);
lean_ctor_set(v___x_1753_, 3, v___x_1752_);
lean_ctor_set(v___x_1753_, 4, v___x_1752_);
lean_ctor_set(v___x_1753_, 5, v___x_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg(lean_object* v_x_1754_, uint8_t v_isExporting_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v___x_1761_; lean_object* v_env_1762_; lean_object* v___x_1763_; uint8_t v_isModule_1764_; 
v___x_1761_ = lean_st_ref_get(v___y_1759_);
v_env_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc_ref(v_env_1762_);
lean_dec(v___x_1761_);
v___x_1763_ = l_Lean_Environment_header(v_env_1762_);
v_isModule_1764_ = lean_ctor_get_uint8(v___x_1763_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1763_);
if (v_isModule_1764_ == 0)
{
lean_object* v___x_1765_; 
lean_dec_ref(v_env_1762_);
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
lean_inc(v___y_1757_);
lean_inc_ref(v___y_1756_);
v___x_1765_ = lean_apply_5(v_x_1754_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, lean_box(0));
return v___x_1765_;
}
else
{
uint8_t v_isExporting_1766_; 
v_isExporting_1766_ = lean_ctor_get_uint8(v_env_1762_, sizeof(void*)*8);
lean_dec_ref(v_env_1762_);
if (v_isExporting_1755_ == 0)
{
if (v_isExporting_1766_ == 0)
{
lean_object* v___x_1832_; 
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
lean_inc(v___y_1757_);
lean_inc_ref(v___y_1756_);
v___x_1832_ = lean_apply_5(v_x_1754_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, lean_box(0));
return v___x_1832_;
}
else
{
goto v___jp_1767_;
}
}
else
{
if (v_isExporting_1766_ == 0)
{
goto v___jp_1767_;
}
else
{
lean_object* v___x_1833_; 
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
lean_inc(v___y_1757_);
lean_inc_ref(v___y_1756_);
v___x_1833_ = lean_apply_5(v_x_1754_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, lean_box(0));
return v___x_1833_;
}
}
v___jp_1767_:
{
lean_object* v___x_1768_; lean_object* v_env_1769_; lean_object* v_nextMacroScope_1770_; lean_object* v_ngen_1771_; lean_object* v_auxDeclNGen_1772_; lean_object* v_traceState_1773_; lean_object* v_messages_1774_; lean_object* v_infoState_1775_; lean_object* v_snapshotTasks_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1830_; 
v___x_1768_ = lean_st_ref_take(v___y_1759_);
v_env_1769_ = lean_ctor_get(v___x_1768_, 0);
v_nextMacroScope_1770_ = lean_ctor_get(v___x_1768_, 1);
v_ngen_1771_ = lean_ctor_get(v___x_1768_, 2);
v_auxDeclNGen_1772_ = lean_ctor_get(v___x_1768_, 3);
v_traceState_1773_ = lean_ctor_get(v___x_1768_, 4);
v_messages_1774_ = lean_ctor_get(v___x_1768_, 6);
v_infoState_1775_ = lean_ctor_get(v___x_1768_, 7);
v_snapshotTasks_1776_ = lean_ctor_get(v___x_1768_, 8);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1830_ == 0)
{
lean_object* v_unused_1831_; 
v_unused_1831_ = lean_ctor_get(v___x_1768_, 5);
lean_dec(v_unused_1831_);
v___x_1778_ = v___x_1768_;
v_isShared_1779_ = v_isSharedCheck_1830_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_snapshotTasks_1776_);
lean_inc(v_infoState_1775_);
lean_inc(v_messages_1774_);
lean_inc(v_traceState_1773_);
lean_inc(v_auxDeclNGen_1772_);
lean_inc(v_ngen_1771_);
lean_inc(v_nextMacroScope_1770_);
lean_inc(v_env_1769_);
lean_dec(v___x_1768_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1830_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1780_ = l_Lean_Environment_setExporting(v_env_1769_, v_isExporting_1755_);
v___x_1781_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__2);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 5, v___x_1781_);
lean_ctor_set(v___x_1778_, 0, v___x_1780_);
v___x_1783_ = v___x_1778_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v___x_1780_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v_nextMacroScope_1770_);
lean_ctor_set(v_reuseFailAlloc_1829_, 2, v_ngen_1771_);
lean_ctor_set(v_reuseFailAlloc_1829_, 3, v_auxDeclNGen_1772_);
lean_ctor_set(v_reuseFailAlloc_1829_, 4, v_traceState_1773_);
lean_ctor_set(v_reuseFailAlloc_1829_, 5, v___x_1781_);
lean_ctor_set(v_reuseFailAlloc_1829_, 6, v_messages_1774_);
lean_ctor_set(v_reuseFailAlloc_1829_, 7, v_infoState_1775_);
lean_ctor_set(v_reuseFailAlloc_1829_, 8, v_snapshotTasks_1776_);
v___x_1783_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v_mctx_1786_; lean_object* v_zetaDeltaFVarIds_1787_; lean_object* v_postponed_1788_; lean_object* v_diag_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1827_; 
v___x_1784_ = lean_st_ref_put(v___y_1759_, v___x_1783_);
v___x_1785_ = lean_st_ref_take(v___y_1757_);
v_mctx_1786_ = lean_ctor_get(v___x_1785_, 0);
v_zetaDeltaFVarIds_1787_ = lean_ctor_get(v___x_1785_, 2);
v_postponed_1788_ = lean_ctor_get(v___x_1785_, 3);
v_diag_1789_ = lean_ctor_get(v___x_1785_, 4);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1827_ == 0)
{
lean_object* v_unused_1828_; 
v_unused_1828_ = lean_ctor_get(v___x_1785_, 1);
lean_dec(v_unused_1828_);
v___x_1791_ = v___x_1785_;
v_isShared_1792_ = v_isSharedCheck_1827_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_diag_1789_);
lean_inc(v_postponed_1788_);
lean_inc(v_zetaDeltaFVarIds_1787_);
lean_inc(v_mctx_1786_);
lean_dec(v___x_1785_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1827_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1793_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___closed__3);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 1, v___x_1793_);
v___x_1795_ = v___x_1791_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_mctx_1786_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v___x_1793_);
lean_ctor_set(v_reuseFailAlloc_1826_, 2, v_zetaDeltaFVarIds_1787_);
lean_ctor_set(v_reuseFailAlloc_1826_, 3, v_postponed_1788_);
lean_ctor_set(v_reuseFailAlloc_1826_, 4, v_diag_1789_);
v___x_1795_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
lean_object* v___x_1796_; lean_object* v_r_1797_; 
v___x_1796_ = lean_st_ref_put(v___y_1757_, v___x_1795_);
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
lean_inc(v___y_1757_);
lean_inc_ref(v___y_1756_);
v_r_1797_ = lean_apply_5(v_x_1754_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, lean_box(0));
if (lean_obj_tag(v_r_1797_) == 0)
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1814_; 
v_a_1798_ = lean_ctor_get(v_r_1797_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_r_1797_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1800_ = v_r_1797_;
v_isShared_1801_ = v_isSharedCheck_1814_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v_r_1797_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1814_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
lean_inc(v_a_1798_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set_tag(v___x_1800_, 1);
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
v___x_1804_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0(v___y_1759_, v_isExporting_1766_, v___x_1781_, v___y_1757_, v___x_1793_, v___x_1803_);
lean_dec_ref(v___x_1803_);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1811_ == 0)
{
lean_object* v_unused_1812_; 
v_unused_1812_ = lean_ctor_get(v___x_1804_, 0);
lean_dec(v_unused_1812_);
v___x_1806_ = v___x_1804_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_dec(v___x_1804_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v_a_1798_);
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1798_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1824_; 
v_a_1815_ = lean_ctor_get(v_r_1797_, 0);
lean_inc(v_a_1815_);
lean_dec_ref_known(v_r_1797_, 1);
v___x_1816_ = lean_box(0);
v___x_1817_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___lam__0(v___y_1759_, v_isExporting_1766_, v___x_1781_, v___y_1757_, v___x_1793_, v___x_1816_);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1824_ == 0)
{
lean_object* v_unused_1825_; 
v_unused_1825_ = lean_ctor_get(v___x_1817_, 0);
lean_dec(v_unused_1825_);
v___x_1819_ = v___x_1817_;
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
else
{
lean_dec(v___x_1817_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set_tag(v___x_1819_, 1);
lean_ctor_set(v___x_1819_, 0, v_a_1815_);
v___x_1822_ = v___x_1819_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_a_1815_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg___boxed(lean_object* v_x_1834_, lean_object* v_isExporting_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
uint8_t v_isExporting_boxed_1841_; lean_object* v_res_1842_; 
v_isExporting_boxed_1841_ = lean_unbox(v_isExporting_1835_);
v_res_1842_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg(v_x_1834_, v_isExporting_boxed_1841_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg(lean_object* v_x_1843_, uint8_t v_when_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
if (v_when_1844_ == 0)
{
lean_object* v___x_1850_; 
lean_inc(v___y_1848_);
lean_inc_ref(v___y_1847_);
lean_inc(v___y_1846_);
lean_inc_ref(v___y_1845_);
v___x_1850_ = lean_apply_5(v_x_1843_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, lean_box(0));
return v___x_1850_;
}
else
{
uint8_t v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = 0;
v___x_1852_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg(v_x_1843_, v___x_1851_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
return v___x_1852_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg___boxed(lean_object* v_x_1853_, lean_object* v_when_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
uint8_t v_when_boxed_1860_; lean_object* v_res_1861_; 
v_when_boxed_1860_ = lean_unbox(v_when_1854_);
v_res_1861_ = l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg(v_x_1853_, v_when_boxed_1860_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag(lean_object* v_diag_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v___f_1868_; lean_object* v___x_1869_; 
v___f_1868_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_reportDiag___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1868_, 0, v_diag_1862_);
v___x_1869_ = l_Lean_isDiagnosticsEnabled___redArg(v_a_1865_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1881_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1872_ = v___x_1869_;
v_isShared_1873_ = v_isSharedCheck_1881_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1869_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1881_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
uint8_t v___x_1874_; 
v___x_1874_ = lean_unbox(v_a_1870_);
if (v___x_1874_ == 0)
{
lean_object* v___x_1875_; lean_object* v___x_1877_; 
lean_dec(v_a_1870_);
lean_dec_ref(v___f_1868_);
v___x_1875_ = lean_box(0);
if (v_isShared_1873_ == 0)
{
lean_ctor_set(v___x_1872_, 0, v___x_1875_);
v___x_1877_ = v___x_1872_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
else
{
uint8_t v___x_1879_; lean_object* v___x_1880_; 
lean_del_object(v___x_1872_);
v___x_1879_ = lean_unbox(v_a_1870_);
lean_dec(v_a_1870_);
v___x_1880_ = l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg(v___f_1868_, v___x_1879_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_);
return v___x_1880_;
}
}
}
else
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
lean_dec_ref(v___f_1868_);
v_a_1882_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1869_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1869_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_reportDiag___boxed(lean_object* v_diag_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lean_Meta_Simp_reportDiag(v_diag_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec_ref(v_a_1891_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2(lean_object* v_00_u03b1_1897_, lean_object* v_x_1898_, uint8_t v_isExporting_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___redArg(v_x_1898_, v_isExporting_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1906_, lean_object* v_x_1907_, lean_object* v_isExporting_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
uint8_t v_isExporting_boxed_1914_; lean_object* v_res_1915_; 
v_isExporting_boxed_1914_ = lean_unbox(v_isExporting_1908_);
v_res_1915_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1_spec__2(v_00_u03b1_1906_, v_x_1907_, v_isExporting_boxed_1914_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1(lean_object* v_00_u03b1_1916_, lean_object* v_x_1917_, uint8_t v_when_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___redArg(v_x_1917_, v_when_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1___boxed(lean_object* v_00_u03b1_1925_, lean_object* v_x_1926_, lean_object* v_when_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
uint8_t v_when_boxed_1933_; lean_object* v_res_1934_; 
v_when_boxed_1933_ = lean_unbox(v_when_1927_);
v_res_1934_ = l_Lean_withoutExporting___at___00Lean_Meta_Simp_reportDiag_spec__1(v_00_u03b1_1925_, v_x_1926_, v_when_boxed_1933_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
return v_res_1934_;
}
}
lean_object* runtime_initialize_Lean_Meta_Diagnostics(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Diagnostics(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_Diagnostics(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Diagnostics(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_Diagnostics(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_Diagnostics(builtin);
}
#ifdef __cplusplus
}
#endif

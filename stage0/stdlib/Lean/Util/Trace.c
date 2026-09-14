// Lean compiler output
// Module: Lean.Util.Trace
// Imports: public import Lean.Elab.Exception public import Lean.Log
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
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_MonadExcept_ofExcept___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_KVMap_instValueNat;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_div(double, double);
lean_object* l_IO_monoNanosNow___boxed(lean_object*);
lean_object* l_IO_getNumHeartbeats___boxed(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_instHashableRaw_hash___boxed(lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg();
lean_object* l_Lean_MessageData_format___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_BaseIO_toIO___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueString;
lean_object* l_Lean_Option_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringFormat___lam__0(lean_object*);
lean_object* l_IO_println___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_instDecidableEqRaw___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonadExceptOf___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedTraceElem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceElem_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceElem_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceElem;
static lean_once_cell_t l_Lean_instInhabitedTraceState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceState_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedTraceState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceState_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedTraceState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceState_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceState_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceState;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_inheritedTraceOptions;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value;
static const lean_array_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "inheritedTraceOptions.get"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14_value;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "inheritedTraceOptions"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value),LEAN_SCALAR_PTR_LITERAL(111, 221, 127, 62, 213, 113, 62, 253)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value),LEAN_SCALAR_PTR_LITERAL(249, 53, 178, 254, 160, 90, 192, 243)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam;
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_printTraces___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringFormat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_printTraces___redArg___closed__0 = (const lean_object*)&l_Lean_printTraces___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_resetTraceState___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resetTraceState___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resetTraceState___redArg___closed__0 = (const lean_object*)&l_Lean_resetTraceState___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resetTraceState(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkTraceOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_checkTraceOption___closed__0 = (const lean_object*)&l_Lean_checkTraceOption___closed__0_value;
static const lean_ctor_object l_Lean_checkTraceOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_checkTraceOption___closed__1 = (const lean_object*)&l_Lean_checkTraceOption___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkTraceOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_is_trace_class_enabled(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_isTracingEnabledForExport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modifyTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___redArg___lam__0___closed__0;
static const lean_string_object l_Lean_addTrace___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_addTrace___redArg___lam__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_addTrace___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "profiler"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "activate nested traces with execution time above `trace.profiler.threshold` and annotate with time"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "threshold"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(184, 9, 42, 114, 12, 38, 11, 42)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 130, .m_capacity = 130, .m_length = 129, .m_data = "threshold in milliseconds (or heartbeats if `trace.profiler.useHeartbeats` is true), traces below threshold will not be activated"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(145, 45, 177, 27, 189, 220, 1, 137)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "useHeartbeats"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(224, 182, 122, 179, 202, 46, 182, 49)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "if true, measure and report heartbeats instead of seconds"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(89, 248, 181, 172, 128, 194, 123, 56)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_useHeartbeats;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "output"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 45, 221, 139, 23, 193, 130, 68)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "output `trace.profiler` data in Firefox Profiler-compatible format to given file path"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addTrace___redArg___lam__0___closed__1_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(58, 195, 204, 148, 25, 40, 60, 227)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_output;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "serve"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(178, 232, 14, 81, 31, 251, 216, 133)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "serve the `trace.profiler` data over HTTP and open it in `https://profiler.firefox.com`; blocks until interrupted with Ctrl+C"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 90, 16, 252, 133, 113, 145, 70)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_serve;
LEAN_EXPORT uint8_t l_Lean_trace_profiler_isExporting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_isExporting___boxed(lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 45, 221, 139, 23, 193, 130, 68)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(193, 225, 100, 102, 84, 233, 134, 170)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 232, .m_capacity = 232, .m_length = 231, .m_data = "if false, limit text in exported trace nodes to trace class name and `TraceData.tag`, if any\n\nThis is useful when we are interested in the time taken by specific subsystems instead of specific invocations, which is the common case."};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(58, 195, 204, 148, 25, 40, 60, 227)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(228, 86, 200, 244, 100, 192, 149, 216)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_output_pp;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_monoNanosNow___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_getNumHeartbeats___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_trace_profiler_threshold_unitAdjusted___closed__0;
LEAN_EXPORT double l_Lean_trace_profiler_threshold_unitAdjusted(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold_unitAdjusted___boxed(lean_object*);
static lean_once_cell_t l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg();
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_bombEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 2, .m_data = "💥️"};
static const lean_object* l_Lean_bombEmoji___closed__0 = (const lean_object*)&l_Lean_bombEmoji___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_bombEmoji = (const lean_object*)&l_Lean_bombEmoji___closed__0_value;
static const lean_string_object l_Lean_checkEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "✅️"};
static const lean_object* l_Lean_checkEmoji___closed__0 = (const lean_object*)&l_Lean_checkEmoji___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_checkEmoji = (const lean_object*)&l_Lean_checkEmoji___closed__0_value;
static const lean_string_object l_Lean_crossEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "❌️"};
static const lean_object* l_Lean_crossEmoji___closed__0 = (const lean_object*)&l_Lean_crossEmoji___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_crossEmoji = (const lean_object*)&l_Lean_crossEmoji___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultBool___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResultBool___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResultBool___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResultBool___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultOption___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResultOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResultOption___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResultOption___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultExpr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResultExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResultExpr___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResultExpr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResult___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResult___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResult___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, double, double, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, double, double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13___boxed(lean_object**);
static const lean_closure_object l_Lean_withTraceNode_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withTraceNode_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_withTraceNode_x27___redArg___closed__0 = (const lean_object*)&l_Lean_withTraceNode_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerTraceClass___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__0 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value;
static const lean_string_object l_Lean_registerTraceClass___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__1 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__2 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value;
static const lean_string_object l_Lean_registerTraceClass___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__3 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__3_value;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__4;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__5;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__6;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__7;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__8;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__9;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__10;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__11;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__12;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__13;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__14;
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___auto__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_registerTraceClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_registerTraceClass___closed__0 = (const lean_object*)&l_Lean_registerTraceClass___closed__0_value;
static const lean_string_object l_Lean_registerTraceClass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "enable/disable tracing for the given module and submodules"};
static const lean_object* l_Lean_registerTraceClass___closed__1 = (const lean_object*)&l_Lean_registerTraceClass___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIfProp"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.isTracingEnabledFor"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "isTracingEnabledFor"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.addTrace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "addTrace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cls"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value),LEAN_SCALAR_PTR_LITERAL(28, 113, 141, 155, 240, 79, 69, 244)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doElemTrace[_]__"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__0 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__0_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value_aux_0),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 144, 171, 160, 60, 151, 54, 39)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__1 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__2 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__2_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__3 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "trace["};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__4 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__4_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__4_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__5 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__5_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__6 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__6_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__7 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__7_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__7_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__8 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__8_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__5_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__8_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__9 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__9_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__10 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__10_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__10_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__11 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__11_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__9_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__11_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__12 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__12_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__13 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__13_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__13_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__14 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__14_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__15 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__15_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__15_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__16 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__16_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__17 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__17_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__17_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__18 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__18_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__19 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__16_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__20 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__20_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__14_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__20_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__21 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__21_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__12_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__21_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__22 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__22_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__22_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__23 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__23_value;
LEAN_EXPORT const lean_object* l_Lean_doElemTrace_x5b___x5d____ = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__23_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_addTraceAsMessages___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__1;
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__2;
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instHashableRaw_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__0 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__0_value;
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableProd___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__0_value),((lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__0_value)} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__1 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__1_value;
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addTraceAsMessages___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__2 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__2_value;
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addTraceAsMessages___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__3 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Trace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_instInhabitedTraceElem_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = l_Lean_instInhabitedMessageData_default;
v___x_2_ = lean_box(0);
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceElem_default(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_instInhabitedTraceElem_default___closed__0, &l_Lean_instInhabitedTraceElem_default___closed__0_once, _init_l_Lean_instInhabitedTraceElem_default___closed__0);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceElem(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_instInhabitedTraceElem_default;
return v___x_5_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default___closed__0(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_unsigned_to_nat(32u);
v___x_7_ = lean_mk_empty_array_with_capacity(v___x_6_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default___closed__1(void){
_start:
{
size_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = ((size_t)5ULL);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_unsigned_to_nat(32u);
v___x_12_ = lean_mk_empty_array_with_capacity(v___x_11_);
v___x_13_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__0, &l_Lean_instInhabitedTraceState_default___closed__0_once, _init_l_Lean_instInhabitedTraceState_default___closed__0);
v___x_14_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_10_);
lean_ctor_set(v___x_14_, 3, v___x_10_);
lean_ctor_set_usize(v___x_14_, 4, v___x_9_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default___closed__2(void){
_start:
{
lean_object* v___x_15_; uint64_t v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__1, &l_Lean_instInhabitedTraceState_default___closed__1_once, _init_l_Lean_instInhabitedTraceState_default___closed__1);
v___x_16_ = 0ULL;
v___x_17_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set_uint64(v___x_17_, sizeof(void*)*1, v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__2, &l_Lean_instInhabitedTraceState_default___closed__2_once, _init_l_Lean_instInhabitedTraceState_default___closed__2);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_instInhabitedTraceState_default;
return v___x_19_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_box(0);
v___x_21_ = lean_unsigned_to_nat(16u);
v___x_22_ = lean_mk_array(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_);
v___x_24_ = lean_unsigned_to_nat(0u);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_);
v___x_28_ = lean_st_mk_ref(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2____boxed(lean_object* v_a_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_();
return v_res_31_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10));
v___x_59_ = l_Lean_mkAtom(v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12);
v___x_61_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_62_ = lean_array_push(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14));
v___x_65_ = lean_string_utf8_byte_size(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14));
v___x_69_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_75_ = lean_box(0);
v___x_76_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19));
v___x_77_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16);
v___x_78_ = lean_box(2);
v___x_79_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_76_);
lean_ctor_set(v___x_79_, 3, v___x_75_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20);
v___x_81_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_82_ = lean_array_push(v___x_81_, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21);
v___x_84_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_85_ = lean_box(2);
v___x_86_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22);
v___x_88_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_89_ = lean_array_push(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_90_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23);
v___x_91_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_92_ = lean_box(2);
v___x_93_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_91_);
lean_ctor_set(v___x_93_, 2, v___x_90_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24);
v___x_95_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_96_ = lean_array_push(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25);
v___x_98_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_99_ = lean_box(2);
v___x_100_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_98_);
lean_ctor_set(v___x_100_, 2, v___x_97_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26);
v___x_102_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_103_ = lean_array_push(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27);
v___x_105_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_106_ = lean_box(2);
v___x_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
lean_ctor_set(v___x_107_, 2, v___x_104_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg___lam__0(lean_object* v_modifyTraceState_109_, lean_object* v_inst_110_, lean_object* v_f_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_apply_1(v_modifyTraceState_109_, v_f_111_);
v___x_113_ = lean_apply_2(v_inst_110_, lean_box(0), v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object* v_inst_114_, lean_object* v_inst_115_){
_start:
{
lean_object* v_modifyTraceState_116_; lean_object* v_getTraceState_117_; lean_object* v_getInheritedTraceOptions_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_128_; 
v_modifyTraceState_116_ = lean_ctor_get(v_inst_115_, 0);
v_getTraceState_117_ = lean_ctor_get(v_inst_115_, 1);
v_getInheritedTraceOptions_118_ = lean_ctor_get(v_inst_115_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_inst_115_);
if (v_isSharedCheck_128_ == 0)
{
v___x_120_ = v_inst_115_;
v_isShared_121_ = v_isSharedCheck_128_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_getInheritedTraceOptions_118_);
lean_inc(v_getTraceState_117_);
lean_inc(v_modifyTraceState_116_);
lean_dec(v_inst_115_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_128_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___f_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
lean_inc_n(v_inst_114_, 2);
v___f_122_ = lean_alloc_closure((void*)(l_Lean_instMonadTraceOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_122_, 0, v_modifyTraceState_116_);
lean_closure_set(v___f_122_, 1, v_inst_114_);
v___x_123_ = lean_apply_2(v_inst_114_, lean_box(0), v_getTraceState_117_);
v___x_124_ = lean_apply_2(v_inst_114_, lean_box(0), v_getInheritedTraceOptions_118_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 2, v___x_124_);
lean_ctor_set(v___x_120_, 1, v___x_123_);
lean_ctor_set(v___x_120_, 0, v___f_122_);
v___x_126_ = v___x_120_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___f_122_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v___x_124_);
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
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift(lean_object* v_m_129_, lean_object* v_n_130_, lean_object* v_inst_131_, lean_object* v_inst_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_instMonadTraceOfMonadLift___redArg(v_inst_131_, v_inst_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__0(lean_object* v_toPure_134_, lean_object* v_____s_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_2(v_toPure_134_, lean_box(0), v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__1(lean_object* v___x_138_, lean_object* v_toPure_139_, lean_object* v_r_140_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_138_);
v___x_142_ = lean_apply_2(v_toPure_139_, lean_box(0), v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__2(lean_object* v___f_143_, lean_object* v_inst_144_, lean_object* v_toBind_145_, lean_object* v___f_146_, lean_object* v_____do__lift_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_alloc_closure((void*)(l_IO_println___boxed), 4, 3);
lean_closure_set(v___x_148_, 0, lean_box(0));
lean_closure_set(v___x_148_, 1, v___f_143_);
lean_closure_set(v___x_148_, 2, v_____do__lift_147_);
v___x_149_ = lean_apply_2(v_inst_144_, lean_box(0), v___x_148_);
v___x_150_ = lean_apply_4(v_toBind_145_, lean_box(0), lean_box(0), v___x_149_, v___f_146_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__3(lean_object* v_inst_151_, lean_object* v_toBind_152_, lean_object* v___f_153_, lean_object* v_x_154_, lean_object* v_____s_155_){
_start:
{
lean_object* v_msg_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_msg_156_ = lean_ctor_get(v_x_154_, 1);
lean_inc_ref(v_msg_156_);
lean_dec_ref(v_x_154_);
v___x_157_ = lean_box(0);
v___x_158_ = lean_alloc_closure((void*)(l_Lean_MessageData_format___boxed), 3, 2);
lean_closure_set(v___x_158_, 0, v_msg_156_);
lean_closure_set(v___x_158_, 1, v___x_157_);
v___x_159_ = lean_alloc_closure((void*)(l_BaseIO_toIO___boxed), 3, 2);
lean_closure_set(v___x_159_, 0, lean_box(0));
lean_closure_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_apply_2(v_inst_151_, lean_box(0), v___x_159_);
v___x_161_ = lean_apply_4(v_toBind_152_, lean_box(0), lean_box(0), v___x_160_, v___f_153_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4(lean_object* v_toPure_162_, lean_object* v___f_163_, lean_object* v_inst_164_, lean_object* v_toBind_165_, lean_object* v_inst_166_, lean_object* v___f_167_, lean_object* v_____do__lift_168_){
_start:
{
lean_object* v_traces_169_; lean_object* v___x_170_; lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_traces_169_ = lean_ctor_get(v_____do__lift_168_, 0);
v___x_170_ = lean_box(0);
v___f_171_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_171_, 0, v___x_170_);
lean_closure_set(v___f_171_, 1, v_toPure_162_);
lean_inc_n(v_toBind_165_, 2);
lean_inc(v_inst_164_);
v___f_172_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__2), 5, 4);
lean_closure_set(v___f_172_, 0, v___f_163_);
lean_closure_set(v___f_172_, 1, v_inst_164_);
lean_closure_set(v___f_172_, 2, v_toBind_165_);
lean_closure_set(v___f_172_, 3, v___f_171_);
v___f_173_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__3), 5, 3);
lean_closure_set(v___f_173_, 0, v_inst_164_);
lean_closure_set(v___f_173_, 1, v_toBind_165_);
lean_closure_set(v___f_173_, 2, v___f_172_);
v___x_174_ = l_Lean_PersistentArray_forIn___redArg(v_inst_166_, v_traces_169_, v___x_170_, v___f_173_);
v___x_175_ = lean_apply_4(v_toBind_165_, lean_box(0), lean_box(0), v___x_174_, v___f_167_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4___boxed(lean_object* v_toPure_176_, lean_object* v___f_177_, lean_object* v_inst_178_, lean_object* v_toBind_179_, lean_object* v_inst_180_, lean_object* v___f_181_, lean_object* v_____do__lift_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_printTraces___redArg___lam__4(v_toPure_176_, v___f_177_, v_inst_178_, v_toBind_179_, v_inst_180_, v___f_181_, v_____do__lift_182_);
lean_dec_ref(v_____do__lift_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg(lean_object* v_inst_185_, lean_object* v_inst_186_, lean_object* v_inst_187_){
_start:
{
lean_object* v_toApplicative_188_; lean_object* v_toBind_189_; lean_object* v_getTraceState_190_; lean_object* v_toPure_191_; lean_object* v___f_192_; lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___x_195_; 
v_toApplicative_188_ = lean_ctor_get(v_inst_185_, 0);
v_toBind_189_ = lean_ctor_get(v_inst_185_, 1);
lean_inc_n(v_toBind_189_, 2);
v_getTraceState_190_ = lean_ctor_get(v_inst_186_, 1);
lean_inc(v_getTraceState_190_);
lean_dec_ref(v_inst_186_);
v_toPure_191_ = lean_ctor_get(v_toApplicative_188_, 1);
lean_inc_n(v_toPure_191_, 2);
v___f_192_ = ((lean_object*)(l_Lean_printTraces___redArg___closed__0));
v___f_193_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_193_, 0, v_toPure_191_);
v___f_194_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__4___boxed), 7, 6);
lean_closure_set(v___f_194_, 0, v_toPure_191_);
lean_closure_set(v___f_194_, 1, v___f_192_);
lean_closure_set(v___f_194_, 2, v_inst_187_);
lean_closure_set(v___f_194_, 3, v_toBind_189_);
lean_closure_set(v___f_194_, 4, v_inst_185_);
lean_closure_set(v___f_194_, 5, v___f_193_);
v___x_195_ = lean_apply_4(v_toBind_189_, lean_box(0), lean_box(0), v_getTraceState_190_, v___f_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces(lean_object* v_m_196_, lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_inst_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_printTraces___redArg(v_inst_197_, v_inst_198_, v_inst_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0(lean_object* v_x_201_){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = lean_unsigned_to_nat(32u);
v___x_203_ = lean_mk_empty_array_with_capacity(v___x_202_);
lean_dec_ref(v___x_203_);
v___x_204_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__2, &l_Lean_instInhabitedTraceState_default___closed__2_once, _init_l_Lean_instInhabitedTraceState_default___closed__2);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0___boxed(lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_resetTraceState___redArg___lam__0(v_x_205_);
lean_dec_ref(v_x_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg(lean_object* v_inst_208_){
_start:
{
lean_object* v_modifyTraceState_209_; lean_object* v___f_210_; lean_object* v___x_211_; 
v_modifyTraceState_209_ = lean_ctor_get(v_inst_208_, 0);
lean_inc(v_modifyTraceState_209_);
lean_dec_ref(v_inst_208_);
v___f_210_ = ((lean_object*)(l_Lean_resetTraceState___redArg___closed__0));
v___x_211_ = lean_apply_1(v_modifyTraceState_209_, v___f_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState(lean_object* v_m_212_, lean_object* v_inst_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_resetTraceState___redArg(v_inst_213_);
return v___x_214_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(lean_object* v_a_215_, lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
uint8_t v___x_217_; 
v___x_217_ = 0;
return v___x_217_;
}
else
{
lean_object* v_key_218_; lean_object* v_tail_219_; uint8_t v___x_220_; 
v_key_218_ = lean_ctor_get(v_x_216_, 0);
v_tail_219_ = lean_ctor_get(v_x_216_, 2);
v___x_220_ = lean_name_eq(v_key_218_, v_a_215_);
if (v___x_220_ == 0)
{
v_x_216_ = v_tail_219_;
goto _start;
}
else
{
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_222_, lean_object* v_x_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_222_, v_x_223_);
lean_dec(v_x_223_);
lean_dec(v_a_222_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(lean_object* v_m_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_buckets_228_; lean_object* v___x_229_; uint64_t v___y_231_; lean_object* v___x_245_; 
v_buckets_228_ = lean_ctor_get(v_m_226_, 1);
v___x_229_ = lean_array_get_size(v_buckets_228_);
v___x_245_ = l_unsafeCast___redArg(v_a_227_);
if (lean_obj_tag(v___x_245_) == 0)
{
uint64_t v___x_246_; 
v___x_246_ = 1723ULL;
v___y_231_ = v___x_246_;
goto v___jp_230_;
}
else
{
uint64_t v_hash_247_; 
v_hash_247_ = lean_ctor_get_uint64(v___x_245_, sizeof(void*)*2);
lean_dec(v___x_245_);
v___y_231_ = v_hash_247_;
goto v___jp_230_;
}
v___jp_230_:
{
uint64_t v___x_232_; uint64_t v___x_233_; uint64_t v_fold_234_; uint64_t v___x_235_; uint64_t v___x_236_; uint64_t v___x_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; size_t v___x_241_; size_t v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_232_ = 32ULL;
v___x_233_ = lean_uint64_shift_right(v___y_231_, v___x_232_);
v_fold_234_ = lean_uint64_xor(v___y_231_, v___x_233_);
v___x_235_ = 16ULL;
v___x_236_ = lean_uint64_shift_right(v_fold_234_, v___x_235_);
v___x_237_ = lean_uint64_xor(v_fold_234_, v___x_236_);
v___x_238_ = lean_uint64_to_usize(v___x_237_);
v___x_239_ = lean_usize_of_nat(v___x_229_);
v___x_240_ = ((size_t)1ULL);
v___x_241_ = lean_usize_sub(v___x_239_, v___x_240_);
v___x_242_ = lean_usize_land(v___x_238_, v___x_241_);
v___x_243_ = lean_array_uget_borrowed(v_buckets_228_, v___x_242_);
v___x_244_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_227_, v___x_243_);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg___boxed(lean_object* v_m_248_, lean_object* v_a_249_){
_start:
{
uint8_t v_res_250_; lean_object* v_r_251_; 
v_res_250_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_m_248_, v_a_249_);
lean_dec(v_a_249_);
lean_dec_ref(v_m_248_);
v_r_251_ = lean_box(v_res_250_);
return v_r_251_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object* v_inherited_252_, lean_object* v_opts_253_, lean_object* v_opt_254_){
_start:
{
lean_object* v_map_260_; lean_object* v___x_261_; 
v_map_260_ = lean_ctor_get(v_opts_253_, 0);
v___x_261_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_260_, v_opt_254_);
if (lean_obj_tag(v___x_261_) == 0)
{
goto v___jp_255_;
}
else
{
lean_object* v_val_262_; 
v_val_262_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_val_262_);
lean_dec_ref_known(v___x_261_, 1);
if (lean_obj_tag(v_val_262_) == 1)
{
uint8_t v_v_263_; 
v_v_263_ = lean_ctor_get_uint8(v_val_262_, 0);
lean_dec_ref_known(v_val_262_, 0);
return v_v_263_;
}
else
{
lean_dec(v_val_262_);
goto v___jp_255_;
}
}
v___jp_255_:
{
if (lean_obj_tag(v_opt_254_) == 1)
{
lean_object* v_pre_256_; uint8_t v___x_257_; 
v_pre_256_ = lean_ctor_get(v_opt_254_, 0);
v___x_257_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_inherited_252_, v_opt_254_);
if (v___x_257_ == 0)
{
return v___x_257_;
}
else
{
v_opt_254_ = v_pre_256_;
goto _start;
}
}
else
{
uint8_t v___x_259_; 
v___x_259_ = 0;
return v___x_259_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go___boxed(lean_object* v_inherited_264_, lean_object* v_opts_265_, lean_object* v_opt_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inherited_264_, v_opts_265_, v_opt_266_);
lean_dec(v_opt_266_);
lean_dec_ref(v_opts_265_);
lean_dec_ref(v_inherited_264_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(lean_object* v_00_u03b2_269_, lean_object* v_m_270_, lean_object* v_a_271_){
_start:
{
uint8_t v___x_272_; 
v___x_272_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_m_270_, v_a_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___boxed(lean_object* v_00_u03b2_273_, lean_object* v_m_274_, lean_object* v_a_275_){
_start:
{
uint8_t v_res_276_; lean_object* v_r_277_; 
v_res_276_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(v_00_u03b2_273_, v_m_274_, v_a_275_);
lean_dec(v_a_275_);
lean_dec_ref(v_m_274_);
v_r_277_ = lean_box(v_res_276_);
return v_r_277_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(lean_object* v_00_u03b2_278_, lean_object* v_a_279_, lean_object* v_x_280_){
_start:
{
uint8_t v___x_281_; 
v___x_281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_279_, v_x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_282_, lean_object* v_a_283_, lean_object* v_x_284_){
_start:
{
uint8_t v_res_285_; lean_object* v_r_286_; 
v_res_285_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(v_00_u03b2_282_, v_a_283_, v_x_284_);
lean_dec(v_x_284_);
lean_dec(v_a_283_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT uint8_t l_Lean_checkTraceOption(lean_object* v_inherited_290_, lean_object* v_opts_291_, lean_object* v_cls_292_){
_start:
{
uint8_t v_hasTrace_293_; 
v_hasTrace_293_ = lean_ctor_get_uint8(v_opts_291_, sizeof(void*)*1);
if (v_hasTrace_293_ == 0)
{
lean_dec(v_cls_292_);
return v_hasTrace_293_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_294_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_295_ = l_Lean_Name_append(v___x_294_, v_cls_292_);
v___x_296_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inherited_290_, v_opts_291_, v___x_295_);
lean_dec(v___x_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkTraceOption___boxed(lean_object* v_inherited_297_, lean_object* v_opts_298_, lean_object* v_cls_299_){
_start:
{
uint8_t v_res_300_; lean_object* v_r_301_; 
v_res_300_ = l_Lean_checkTraceOption(v_inherited_297_, v_opts_298_, v_cls_299_);
lean_dec_ref(v_opts_298_);
lean_dec_ref(v_inherited_297_);
v_r_301_ = lean_box(v_res_300_);
return v_r_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0(lean_object* v_toPure_302_, lean_object* v_cls_303_, lean_object* v_____do__lift_304_, lean_object* v_____do__lift_305_){
_start:
{
uint8_t v_hasTrace_306_; 
v_hasTrace_306_ = lean_ctor_get_uint8(v_____do__lift_305_, sizeof(void*)*1);
if (v_hasTrace_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec(v_cls_303_);
v___x_307_ = lean_box(v_hasTrace_306_);
v___x_308_ = lean_apply_2(v_toPure_302_, lean_box(0), v___x_307_);
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_309_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_310_ = l_Lean_Name_append(v___x_309_, v_cls_303_);
v___x_311_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_304_, v_____do__lift_305_, v___x_310_);
lean_dec(v___x_310_);
v___x_312_ = lean_box(v___x_311_);
v___x_313_ = lean_apply_2(v_toPure_302_, lean_box(0), v___x_312_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0___boxed(lean_object* v_toPure_314_, lean_object* v_cls_315_, lean_object* v_____do__lift_316_, lean_object* v_____do__lift_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_isTracingEnabledFor___redArg___lam__0(v_toPure_314_, v_cls_315_, v_____do__lift_316_, v_____do__lift_317_);
lean_dec_ref(v_____do__lift_317_);
lean_dec_ref(v_____do__lift_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__1(lean_object* v_toPure_319_, lean_object* v_cls_320_, lean_object* v_toBind_321_, lean_object* v_inst_322_, lean_object* v_____do__lift_323_){
_start:
{
lean_object* v___f_324_; lean_object* v___x_325_; 
v___f_324_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_324_, 0, v_toPure_319_);
lean_closure_set(v___f_324_, 1, v_cls_320_);
lean_closure_set(v___f_324_, 2, v_____do__lift_323_);
v___x_325_ = lean_apply_4(v_toBind_321_, lean_box(0), lean_box(0), v_inst_322_, v___f_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object* v_inst_326_, lean_object* v_inst_327_, lean_object* v_inst_328_, lean_object* v_cls_329_){
_start:
{
lean_object* v_toApplicative_330_; lean_object* v_toBind_331_; lean_object* v_getInheritedTraceOptions_332_; lean_object* v_toPure_333_; lean_object* v___f_334_; lean_object* v___x_335_; 
v_toApplicative_330_ = lean_ctor_get(v_inst_326_, 0);
lean_inc_ref(v_toApplicative_330_);
v_toBind_331_ = lean_ctor_get(v_inst_326_, 1);
lean_inc_n(v_toBind_331_, 2);
lean_dec_ref(v_inst_326_);
v_getInheritedTraceOptions_332_ = lean_ctor_get(v_inst_327_, 2);
lean_inc(v_getInheritedTraceOptions_332_);
lean_dec_ref(v_inst_327_);
v_toPure_333_ = lean_ctor_get(v_toApplicative_330_, 1);
lean_inc(v_toPure_333_);
lean_dec_ref(v_toApplicative_330_);
v___f_334_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_334_, 0, v_toPure_333_);
lean_closure_set(v___f_334_, 1, v_cls_329_);
lean_closure_set(v___f_334_, 2, v_toBind_331_);
lean_closure_set(v___f_334_, 3, v_inst_328_);
v___x_335_ = lean_apply_4(v_toBind_331_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_332_, v___f_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor(lean_object* v_m_336_, lean_object* v_inst_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_cls_340_){
_start:
{
lean_object* v_toApplicative_341_; lean_object* v_toBind_342_; lean_object* v_getInheritedTraceOptions_343_; lean_object* v_toPure_344_; lean_object* v___f_345_; lean_object* v___x_346_; 
v_toApplicative_341_ = lean_ctor_get(v_inst_337_, 0);
lean_inc_ref(v_toApplicative_341_);
v_toBind_342_ = lean_ctor_get(v_inst_337_, 1);
lean_inc_n(v_toBind_342_, 2);
lean_dec_ref(v_inst_337_);
v_getInheritedTraceOptions_343_ = lean_ctor_get(v_inst_338_, 2);
lean_inc(v_getInheritedTraceOptions_343_);
lean_dec_ref(v_inst_338_);
v_toPure_344_ = lean_ctor_get(v_toApplicative_341_, 1);
lean_inc(v_toPure_344_);
lean_dec_ref(v_toApplicative_341_);
v___f_345_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_345_, 0, v_toPure_344_);
lean_closure_set(v___f_345_, 1, v_cls_340_);
lean_closure_set(v___f_345_, 2, v_toBind_342_);
lean_closure_set(v___f_345_, 3, v_inst_339_);
v___x_346_ = lean_apply_4(v_toBind_342_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_343_, v___f_345_);
return v___x_346_;
}
}
LEAN_EXPORT uint8_t lean_is_trace_class_enabled(lean_object* v_opts_347_, lean_object* v_cls_348_){
_start:
{
uint8_t v_hasTrace_350_; 
v_hasTrace_350_ = lean_ctor_get_uint8(v_opts_347_, sizeof(void*)*1);
if (v_hasTrace_350_ == 0)
{
lean_dec(v_cls_348_);
lean_dec_ref(v_opts_347_);
return v_hasTrace_350_;
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_351_ = l_Lean_inheritedTraceOptions;
v___x_352_ = lean_st_ref_get(v___x_351_);
v___x_353_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_354_ = l_Lean_Name_append(v___x_353_, v_cls_348_);
v___x_355_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_352_, v_opts_347_, v___x_354_);
lean_dec(v___x_354_);
lean_dec_ref(v_opts_347_);
lean_dec(v___x_352_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_isTracingEnabledForExport___boxed(lean_object* v_opts_356_, lean_object* v_cls_357_, lean_object* v_a_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = lean_is_trace_class_enabled(v_opts_356_, v_cls_357_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg___lam__0(lean_object* v_toPure_361_, lean_object* v_s_362_){
_start:
{
lean_object* v_traces_363_; lean_object* v___x_364_; 
v_traces_363_ = lean_ctor_get(v_s_362_, 0);
lean_inc_ref(v_traces_363_);
lean_dec_ref(v_s_362_);
v___x_364_ = lean_apply_2(v_toPure_361_, lean_box(0), v_traces_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg(lean_object* v_inst_365_, lean_object* v_inst_366_){
_start:
{
lean_object* v_toApplicative_367_; lean_object* v_toBind_368_; lean_object* v_getTraceState_369_; lean_object* v_toPure_370_; lean_object* v___f_371_; lean_object* v___x_372_; 
v_toApplicative_367_ = lean_ctor_get(v_inst_365_, 0);
lean_inc_ref(v_toApplicative_367_);
v_toBind_368_ = lean_ctor_get(v_inst_365_, 1);
lean_inc(v_toBind_368_);
lean_dec_ref(v_inst_365_);
v_getTraceState_369_ = lean_ctor_get(v_inst_366_, 1);
lean_inc(v_getTraceState_369_);
lean_dec_ref(v_inst_366_);
v_toPure_370_ = lean_ctor_get(v_toApplicative_367_, 1);
lean_inc(v_toPure_370_);
lean_dec_ref(v_toApplicative_367_);
v___f_371_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_371_, 0, v_toPure_370_);
v___x_372_ = lean_apply_4(v_toBind_368_, lean_box(0), lean_box(0), v_getTraceState_369_, v___f_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces(lean_object* v_m_373_, lean_object* v_inst_374_, lean_object* v_inst_375_){
_start:
{
lean_object* v_toApplicative_376_; lean_object* v_toBind_377_; lean_object* v_getTraceState_378_; lean_object* v_toPure_379_; lean_object* v___f_380_; lean_object* v___x_381_; 
v_toApplicative_376_ = lean_ctor_get(v_inst_374_, 0);
lean_inc_ref(v_toApplicative_376_);
v_toBind_377_ = lean_ctor_get(v_inst_374_, 1);
lean_inc(v_toBind_377_);
lean_dec_ref(v_inst_374_);
v_getTraceState_378_ = lean_ctor_get(v_inst_375_, 1);
lean_inc(v_getTraceState_378_);
lean_dec_ref(v_inst_375_);
v_toPure_379_ = lean_ctor_get(v_toApplicative_376_, 1);
lean_inc(v_toPure_379_);
lean_dec_ref(v_toApplicative_376_);
v___f_380_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_380_, 0, v_toPure_379_);
v___x_381_ = lean_apply_4(v_toBind_377_, lean_box(0), lean_box(0), v_getTraceState_378_, v___f_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg___lam__0(lean_object* v_f_382_, lean_object* v_s_383_){
_start:
{
uint64_t v_tid_384_; lean_object* v_traces_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_393_; 
v_tid_384_ = lean_ctor_get_uint64(v_s_383_, sizeof(void*)*1);
v_traces_385_ = lean_ctor_get(v_s_383_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v_s_383_);
if (v_isSharedCheck_393_ == 0)
{
v___x_387_ = v_s_383_;
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_traces_385_);
lean_dec(v_s_383_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lean_apply_1(v_f_382_, v_traces_385_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_389_);
v___x_391_ = v___x_387_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
lean_ctor_set_uint64(v_reuseFailAlloc_392_, sizeof(void*)*1, v_tid_384_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg(lean_object* v_inst_394_, lean_object* v_f_395_){
_start:
{
lean_object* v_modifyTraceState_396_; lean_object* v___f_397_; lean_object* v___x_398_; 
v_modifyTraceState_396_ = lean_ctor_get(v_inst_394_, 0);
lean_inc(v_modifyTraceState_396_);
lean_dec_ref(v_inst_394_);
v___f_397_ = lean_alloc_closure((void*)(l_Lean_modifyTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_397_, 0, v_f_395_);
v___x_398_ = lean_apply_1(v_modifyTraceState_396_, v___f_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces(lean_object* v_m_399_, lean_object* v_inst_400_, lean_object* v_f_401_){
_start:
{
lean_object* v_modifyTraceState_402_; lean_object* v___f_403_; lean_object* v___x_404_; 
v_modifyTraceState_402_ = lean_ctor_get(v_inst_400_, 0);
lean_inc(v_modifyTraceState_402_);
lean_dec_ref(v_inst_400_);
v___f_403_ = lean_alloc_closure((void*)(l_Lean_modifyTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_403_, 0, v_f_401_);
v___x_404_ = lean_apply_1(v_modifyTraceState_402_, v___f_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0(lean_object* v_s_405_, lean_object* v_x_406_){
_start:
{
lean_inc_ref(v_s_405_);
return v_s_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0___boxed(lean_object* v_s_407_, lean_object* v_x_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_setTraceState___redArg___lam__0(v_s_407_, v_x_408_);
lean_dec_ref(v_x_408_);
lean_dec_ref(v_s_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg(lean_object* v_inst_410_, lean_object* v_s_411_){
_start:
{
lean_object* v_modifyTraceState_412_; lean_object* v___f_413_; lean_object* v___x_414_; 
v_modifyTraceState_412_ = lean_ctor_get(v_inst_410_, 0);
lean_inc(v_modifyTraceState_412_);
lean_dec_ref(v_inst_410_);
v___f_413_ = lean_alloc_closure((void*)(l_Lean_setTraceState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_413_, 0, v_s_411_);
v___x_414_ = lean_apply_1(v_modifyTraceState_412_, v___f_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState(lean_object* v_m_415_, lean_object* v_inst_416_, lean_object* v_s_417_){
_start:
{
lean_object* v_modifyTraceState_418_; lean_object* v___f_419_; lean_object* v___x_420_; 
v_modifyTraceState_418_ = lean_ctor_get(v_inst_416_, 0);
lean_inc(v_modifyTraceState_418_);
lean_dec_ref(v_inst_416_);
v___f_419_ = lean_alloc_closure((void*)(l_Lean_setTraceState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_419_, 0, v_s_417_);
v___x_420_ = lean_apply_1(v_modifyTraceState_418_, v___f_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0(lean_object* v_s_421_){
_start:
{
uint64_t v_tid_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_432_; 
v_tid_422_ = lean_ctor_get_uint64(v_s_421_, sizeof(void*)*1);
v_isSharedCheck_432_ = !lean_is_exclusive(v_s_421_);
if (v_isSharedCheck_432_ == 0)
{
lean_object* v_unused_433_; 
v_unused_433_ = lean_ctor_get(v_s_421_, 0);
lean_dec(v_unused_433_);
v___x_424_ = v_s_421_;
v_isShared_425_ = v_isSharedCheck_432_;
goto v_resetjp_423_;
}
else
{
lean_dec(v_s_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_432_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_426_ = lean_unsigned_to_nat(32u);
v___x_427_ = lean_mk_empty_array_with_capacity(v___x_426_);
lean_dec_ref(v___x_427_);
v___x_428_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__1, &l_Lean_instInhabitedTraceState_default___closed__1_once, _init_l_Lean_instInhabitedTraceState_default___closed__1);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_428_);
v___x_430_ = v___x_424_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_428_);
lean_ctor_set_uint64(v_reuseFailAlloc_431_, sizeof(void*)*1, v_tid_422_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1(lean_object* v_toPure_434_, lean_object* v_oldTraces_435_, lean_object* v_____r_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = lean_apply_2(v_toPure_434_, lean_box(0), v_oldTraces_435_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2(lean_object* v_toPure_438_, lean_object* v_modifyTraceState_439_, lean_object* v___f_440_, lean_object* v_toBind_441_, lean_object* v_oldTraces_442_){
_start:
{
lean_object* v___f_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___f_443_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_443_, 0, v_toPure_438_);
lean_closure_set(v___f_443_, 1, v_oldTraces_442_);
v___x_444_ = lean_apply_1(v_modifyTraceState_439_, v___f_440_);
v___x_445_ = lean_apply_4(v_toBind_441_, lean_box(0), lean_box(0), v___x_444_, v___f_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(lean_object* v_inst_447_, lean_object* v_inst_448_){
_start:
{
lean_object* v_toApplicative_449_; lean_object* v_toBind_450_; lean_object* v_modifyTraceState_451_; lean_object* v_getTraceState_452_; lean_object* v_toPure_453_; lean_object* v___f_454_; lean_object* v___f_455_; lean_object* v___f_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_toApplicative_449_ = lean_ctor_get(v_inst_447_, 0);
lean_inc_ref(v_toApplicative_449_);
v_toBind_450_ = lean_ctor_get(v_inst_447_, 1);
lean_inc_n(v_toBind_450_, 3);
lean_dec_ref(v_inst_447_);
v_modifyTraceState_451_ = lean_ctor_get(v_inst_448_, 0);
lean_inc(v_modifyTraceState_451_);
v_getTraceState_452_ = lean_ctor_get(v_inst_448_, 1);
lean_inc(v_getTraceState_452_);
lean_dec_ref(v_inst_448_);
v_toPure_453_ = lean_ctor_get(v_toApplicative_449_, 1);
lean_inc_n(v_toPure_453_, 2);
lean_dec_ref(v_toApplicative_449_);
v___f_454_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0));
v___f_455_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2), 5, 4);
lean_closure_set(v___f_455_, 0, v_toPure_453_);
lean_closure_set(v___f_455_, 1, v_modifyTraceState_451_);
lean_closure_set(v___f_455_, 2, v___f_454_);
lean_closure_set(v___f_455_, 3, v_toBind_450_);
v___f_456_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_456_, 0, v_toPure_453_);
v___x_457_ = lean_apply_4(v_toBind_450_, lean_box(0), lean_box(0), v_getTraceState_452_, v___f_456_);
v___x_458_ = lean_apply_4(v_toBind_450_, lean_box(0), lean_box(0), v___x_457_, v___f_455_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object* v_m_459_, lean_object* v_inst_460_, lean_object* v_inst_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_460_, v_inst_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__0(lean_object* v_ref_463_, lean_object* v_msg_464_, lean_object* v_s_465_){
_start:
{
uint64_t v_tid_466_; lean_object* v_traces_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_476_; 
v_tid_466_ = lean_ctor_get_uint64(v_s_465_, sizeof(void*)*1);
v_traces_467_ = lean_ctor_get(v_s_465_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v_s_465_);
if (v_isSharedCheck_476_ == 0)
{
v___x_469_ = v_s_465_;
v_isShared_470_ = v_isSharedCheck_476_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_traces_467_);
lean_dec(v_s_465_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_476_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v_ref_463_);
lean_ctor_set(v___x_471_, 1, v_msg_464_);
v___x_472_ = l_Lean_PersistentArray_push___redArg(v_traces_467_, v___x_471_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 0, v___x_472_);
v___x_474_ = v___x_469_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
lean_ctor_set_uint64(v_reuseFailAlloc_475_, sizeof(void*)*1, v_tid_466_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__1(lean_object* v_inst_477_, lean_object* v_ref_478_, lean_object* v_msg_479_){
_start:
{
lean_object* v_modifyTraceState_480_; lean_object* v___f_481_; lean_object* v___x_482_; 
v_modifyTraceState_480_ = lean_ctor_get(v_inst_477_, 0);
lean_inc(v_modifyTraceState_480_);
lean_dec_ref(v_inst_477_);
v___f_481_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__0), 3, 2);
lean_closure_set(v___f_481_, 0, v_ref_478_);
lean_closure_set(v___f_481_, 1, v_msg_479_);
v___x_482_ = lean_apply_1(v_modifyTraceState_480_, v___f_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__2(lean_object* v_inst_483_, lean_object* v_inst_484_, lean_object* v_msg_485_, lean_object* v_toBind_486_, lean_object* v_ref_487_){
_start:
{
lean_object* v___f_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___f_488_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__1), 3, 2);
lean_closure_set(v___f_488_, 0, v_inst_483_);
lean_closure_set(v___f_488_, 1, v_ref_487_);
v___x_489_ = lean_apply_1(v_inst_484_, v_msg_485_);
v___x_490_ = lean_apply_4(v_toBind_486_, lean_box(0), lean_box(0), v___x_489_, v___f_488_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg(lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_inst_493_, lean_object* v_inst_494_, lean_object* v_msg_495_){
_start:
{
lean_object* v_toBind_496_; lean_object* v_getRef_497_; lean_object* v___f_498_; lean_object* v___x_499_; 
v_toBind_496_ = lean_ctor_get(v_inst_491_, 1);
lean_inc_n(v_toBind_496_, 2);
lean_dec_ref(v_inst_491_);
v_getRef_497_ = lean_ctor_get(v_inst_493_, 0);
lean_inc(v_getRef_497_);
lean_dec_ref(v_inst_493_);
v___f_498_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__2), 5, 4);
lean_closure_set(v___f_498_, 0, v_inst_492_);
lean_closure_set(v___f_498_, 1, v_inst_494_);
lean_closure_set(v___f_498_, 2, v_msg_495_);
lean_closure_set(v___f_498_, 3, v_toBind_496_);
v___x_499_ = lean_apply_4(v_toBind_496_, lean_box(0), lean_box(0), v_getRef_497_, v___f_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace(lean_object* v_m_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_inst_503_, lean_object* v_inst_504_, lean_object* v_msg_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_addRawTrace___redArg(v_inst_501_, v_inst_502_, v_inst_503_, v_inst_504_, v_msg_505_);
return v___x_506_;
}
}
static double _init_l_Lean_addTrace___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_507_; double v___x_508_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_float_of_nat(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__0(lean_object* v_cls_512_, lean_object* v_msg_513_, lean_object* v_ref_514_, lean_object* v_s_515_){
_start:
{
uint64_t v_tid_516_; lean_object* v_traces_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_533_; 
v_tid_516_ = lean_ctor_get_uint64(v_s_515_, sizeof(void*)*1);
v_traces_517_ = lean_ctor_get(v_s_515_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v_s_515_);
if (v_isSharedCheck_533_ == 0)
{
v___x_519_ = v_s_515_;
v_isShared_520_ = v_isSharedCheck_533_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_traces_517_);
lean_dec(v_s_515_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_533_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; double v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_521_ = lean_box(0);
v___x_522_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
v___x_523_ = 0;
v___x_524_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_525_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_525_, 0, v_cls_512_);
lean_ctor_set(v___x_525_, 1, v___x_521_);
lean_ctor_set(v___x_525_, 2, v___x_524_);
lean_ctor_set_float(v___x_525_, sizeof(void*)*3, v___x_522_);
lean_ctor_set_float(v___x_525_, sizeof(void*)*3 + 8, v___x_522_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*3 + 16, v___x_523_);
v___x_526_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
v___x_527_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_527_, 0, v___x_525_);
lean_ctor_set(v___x_527_, 1, v_msg_513_);
lean_ctor_set(v___x_527_, 2, v___x_526_);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v_ref_514_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = l_Lean_PersistentArray_push___redArg(v_traces_517_, v___x_528_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_529_);
v___x_531_ = v___x_519_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
lean_ctor_set_uint64(v_reuseFailAlloc_532_, sizeof(void*)*1, v_tid_516_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__1(lean_object* v_inst_534_, lean_object* v_cls_535_, lean_object* v_ref_536_, lean_object* v_msg_537_){
_start:
{
lean_object* v_modifyTraceState_538_; lean_object* v___f_539_; lean_object* v___x_540_; 
v_modifyTraceState_538_ = lean_ctor_get(v_inst_534_, 0);
lean_inc(v_modifyTraceState_538_);
lean_dec_ref(v_inst_534_);
v___f_539_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__0), 4, 3);
lean_closure_set(v___f_539_, 0, v_cls_535_);
lean_closure_set(v___f_539_, 1, v_msg_537_);
lean_closure_set(v___f_539_, 2, v_ref_536_);
v___x_540_ = lean_apply_1(v_modifyTraceState_538_, v___f_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__2(lean_object* v_inst_541_, lean_object* v_cls_542_, lean_object* v_inst_543_, lean_object* v_msg_544_, lean_object* v_toBind_545_, lean_object* v_ref_546_){
_start:
{
lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___f_547_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__1), 4, 3);
lean_closure_set(v___f_547_, 0, v_inst_541_);
lean_closure_set(v___f_547_, 1, v_cls_542_);
lean_closure_set(v___f_547_, 2, v_ref_546_);
v___x_548_ = lean_apply_1(v_inst_543_, v_msg_544_);
v___x_549_ = lean_apply_4(v_toBind_545_, lean_box(0), lean_box(0), v___x_548_, v___f_547_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg(lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_inst_553_, lean_object* v_cls_554_, lean_object* v_msg_555_){
_start:
{
lean_object* v_toBind_556_; lean_object* v_getRef_557_; lean_object* v___f_558_; lean_object* v___x_559_; 
v_toBind_556_ = lean_ctor_get(v_inst_550_, 1);
lean_inc_n(v_toBind_556_, 2);
lean_dec_ref(v_inst_550_);
v_getRef_557_ = lean_ctor_get(v_inst_552_, 0);
lean_inc(v_getRef_557_);
lean_dec_ref(v_inst_552_);
v___f_558_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__2), 6, 5);
lean_closure_set(v___f_558_, 0, v_inst_551_);
lean_closure_set(v___f_558_, 1, v_cls_554_);
lean_closure_set(v___f_558_, 2, v_inst_553_);
lean_closure_set(v___f_558_, 3, v_msg_555_);
lean_closure_set(v___f_558_, 4, v_toBind_556_);
v___x_559_ = lean_apply_4(v_toBind_556_, lean_box(0), lean_box(0), v_getRef_557_, v___f_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace(lean_object* v_m_560_, lean_object* v_inst_561_, lean_object* v_inst_562_, lean_object* v_inst_563_, lean_object* v_inst_564_, lean_object* v_cls_565_, lean_object* v_msg_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_Lean_addTrace___redArg(v_inst_561_, v_inst_562_, v_inst_563_, v_inst_564_, v_cls_565_, v_msg_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0(lean_object* v_toPure_568_, lean_object* v_msg_569_, lean_object* v_inst_570_, lean_object* v_inst_571_, lean_object* v_inst_572_, lean_object* v_inst_573_, lean_object* v_cls_574_, uint8_t v_____do__lift_575_){
_start:
{
if (v_____do__lift_575_ == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec(v_cls_574_);
lean_dec(v_inst_573_);
lean_dec_ref(v_inst_572_);
lean_dec_ref(v_inst_571_);
lean_dec_ref(v_inst_570_);
lean_dec_ref(v_msg_569_);
v___x_576_ = lean_box(0);
v___x_577_ = lean_apply_2(v_toPure_568_, lean_box(0), v___x_576_);
return v___x_577_;
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec(v_toPure_568_);
v___x_578_ = lean_box(0);
v___x_579_ = lean_apply_1(v_msg_569_, v___x_578_);
v___x_580_ = l_Lean_addTrace___redArg(v_inst_570_, v_inst_571_, v_inst_572_, v_inst_573_, v_cls_574_, v___x_579_);
return v___x_580_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0___boxed(lean_object* v_toPure_581_, lean_object* v_msg_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_inst_585_, lean_object* v_inst_586_, lean_object* v_cls_587_, lean_object* v_____do__lift_588_){
_start:
{
uint8_t v_____do__lift_126__boxed_589_; lean_object* v_res_590_; 
v_____do__lift_126__boxed_589_ = lean_unbox(v_____do__lift_588_);
v_res_590_ = l_Lean_trace___redArg___lam__0(v_toPure_581_, v_msg_582_, v_inst_583_, v_inst_584_, v_inst_585_, v_inst_586_, v_cls_587_, v_____do__lift_126__boxed_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg(lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_inst_594_, lean_object* v_inst_595_, lean_object* v_cls_596_, lean_object* v_msg_597_){
_start:
{
lean_object* v_toApplicative_598_; lean_object* v_toBind_599_; lean_object* v_getInheritedTraceOptions_600_; lean_object* v_toPure_601_; lean_object* v___f_602_; lean_object* v___f_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_toApplicative_598_ = lean_ctor_get(v_inst_591_, 0);
v_toBind_599_ = lean_ctor_get(v_inst_591_, 1);
lean_inc_n(v_toBind_599_, 3);
v_getInheritedTraceOptions_600_ = lean_ctor_get(v_inst_592_, 2);
lean_inc(v_getInheritedTraceOptions_600_);
v_toPure_601_ = lean_ctor_get(v_toApplicative_598_, 1);
lean_inc_n(v_toPure_601_, 2);
lean_inc(v_cls_596_);
v___f_602_ = lean_alloc_closure((void*)(l_Lean_trace___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_602_, 0, v_toPure_601_);
lean_closure_set(v___f_602_, 1, v_msg_597_);
lean_closure_set(v___f_602_, 2, v_inst_591_);
lean_closure_set(v___f_602_, 3, v_inst_592_);
lean_closure_set(v___f_602_, 4, v_inst_593_);
lean_closure_set(v___f_602_, 5, v_inst_594_);
lean_closure_set(v___f_602_, 6, v_cls_596_);
v___f_603_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_603_, 0, v_toPure_601_);
lean_closure_set(v___f_603_, 1, v_cls_596_);
lean_closure_set(v___f_603_, 2, v_toBind_599_);
lean_closure_set(v___f_603_, 3, v_inst_595_);
v___x_604_ = lean_apply_4(v_toBind_599_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_600_, v___f_603_);
v___x_605_ = lean_apply_4(v_toBind_599_, lean_box(0), lean_box(0), v___x_604_, v___f_602_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace(lean_object* v_m_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_cls_612_, lean_object* v_msg_613_){
_start:
{
lean_object* v_toApplicative_614_; lean_object* v_toBind_615_; lean_object* v_getInheritedTraceOptions_616_; lean_object* v_toPure_617_; lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_toApplicative_614_ = lean_ctor_get(v_inst_607_, 0);
v_toBind_615_ = lean_ctor_get(v_inst_607_, 1);
lean_inc_n(v_toBind_615_, 3);
v_getInheritedTraceOptions_616_ = lean_ctor_get(v_inst_608_, 2);
lean_inc(v_getInheritedTraceOptions_616_);
v_toPure_617_ = lean_ctor_get(v_toApplicative_614_, 1);
lean_inc_n(v_toPure_617_, 2);
lean_inc(v_cls_612_);
v___f_618_ = lean_alloc_closure((void*)(l_Lean_trace___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_618_, 0, v_toPure_617_);
lean_closure_set(v___f_618_, 1, v_msg_613_);
lean_closure_set(v___f_618_, 2, v_inst_607_);
lean_closure_set(v___f_618_, 3, v_inst_608_);
lean_closure_set(v___f_618_, 4, v_inst_609_);
lean_closure_set(v___f_618_, 5, v_inst_610_);
lean_closure_set(v___f_618_, 6, v_cls_612_);
v___f_619_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_619_, 0, v_toPure_617_);
lean_closure_set(v___f_619_, 1, v_cls_612_);
lean_closure_set(v___f_619_, 2, v_toBind_615_);
lean_closure_set(v___f_619_, 3, v_inst_611_);
v___x_620_ = lean_apply_4(v_toBind_615_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_616_, v___f_619_);
v___x_621_ = lean_apply_4(v_toBind_615_, lean_box(0), lean_box(0), v___x_620_, v___f_618_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__0(lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_cls_626_, lean_object* v_msg_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_addTrace___redArg(v_inst_622_, v_inst_623_, v_inst_624_, v_inst_625_, v_cls_626_, v_msg_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1(lean_object* v_toPure_629_, lean_object* v_toBind_630_, lean_object* v_mkMsg_631_, lean_object* v___f_632_, uint8_t v_____do__lift_633_){
_start:
{
if (v_____do__lift_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec(v___f_632_);
lean_dec(v_mkMsg_631_);
lean_dec(v_toBind_630_);
v___x_634_ = lean_box(0);
v___x_635_ = lean_apply_2(v_toPure_629_, lean_box(0), v___x_634_);
return v___x_635_;
}
else
{
lean_object* v___x_636_; 
lean_dec(v_toPure_629_);
v___x_636_ = lean_apply_4(v_toBind_630_, lean_box(0), lean_box(0), v_mkMsg_631_, v___f_632_);
return v___x_636_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1___boxed(lean_object* v_toPure_637_, lean_object* v_toBind_638_, lean_object* v_mkMsg_639_, lean_object* v___f_640_, lean_object* v_____do__lift_641_){
_start:
{
uint8_t v_____do__lift_132__boxed_642_; lean_object* v_res_643_; 
v_____do__lift_132__boxed_642_ = lean_unbox(v_____do__lift_641_);
v_res_643_ = l_Lean_traceM___redArg___lam__1(v_toPure_637_, v_toBind_638_, v_mkMsg_639_, v___f_640_, v_____do__lift_132__boxed_642_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg(lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_inst_646_, lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v_cls_649_, lean_object* v_mkMsg_650_){
_start:
{
lean_object* v_toApplicative_651_; lean_object* v_toBind_652_; lean_object* v_getInheritedTraceOptions_653_; lean_object* v_toPure_654_; lean_object* v___f_655_; lean_object* v___f_656_; lean_object* v___f_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_toApplicative_651_ = lean_ctor_get(v_inst_644_, 0);
v_toBind_652_ = lean_ctor_get(v_inst_644_, 1);
lean_inc_n(v_toBind_652_, 4);
v_getInheritedTraceOptions_653_ = lean_ctor_get(v_inst_645_, 2);
lean_inc(v_getInheritedTraceOptions_653_);
v_toPure_654_ = lean_ctor_get(v_toApplicative_651_, 1);
lean_inc_n(v_toPure_654_, 2);
lean_inc(v_cls_649_);
v___f_655_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__0), 6, 5);
lean_closure_set(v___f_655_, 0, v_inst_644_);
lean_closure_set(v___f_655_, 1, v_inst_645_);
lean_closure_set(v___f_655_, 2, v_inst_646_);
lean_closure_set(v___f_655_, 3, v_inst_647_);
lean_closure_set(v___f_655_, 4, v_cls_649_);
v___f_656_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_656_, 0, v_toPure_654_);
lean_closure_set(v___f_656_, 1, v_toBind_652_);
lean_closure_set(v___f_656_, 2, v_mkMsg_650_);
lean_closure_set(v___f_656_, 3, v___f_655_);
v___f_657_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_657_, 0, v_toPure_654_);
lean_closure_set(v___f_657_, 1, v_cls_649_);
lean_closure_set(v___f_657_, 2, v_toBind_652_);
lean_closure_set(v___f_657_, 3, v_inst_648_);
v___x_658_ = lean_apply_4(v_toBind_652_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_653_, v___f_657_);
v___x_659_ = lean_apply_4(v_toBind_652_, lean_box(0), lean_box(0), v___x_658_, v___f_656_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM(lean_object* v_m_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_inst_664_, lean_object* v_inst_665_, lean_object* v_cls_666_, lean_object* v_mkMsg_667_){
_start:
{
lean_object* v_toApplicative_668_; lean_object* v_toBind_669_; lean_object* v_getInheritedTraceOptions_670_; lean_object* v_toPure_671_; lean_object* v___f_672_; lean_object* v___f_673_; lean_object* v___f_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_toApplicative_668_ = lean_ctor_get(v_inst_661_, 0);
v_toBind_669_ = lean_ctor_get(v_inst_661_, 1);
lean_inc_n(v_toBind_669_, 4);
v_getInheritedTraceOptions_670_ = lean_ctor_get(v_inst_662_, 2);
lean_inc(v_getInheritedTraceOptions_670_);
v_toPure_671_ = lean_ctor_get(v_toApplicative_668_, 1);
lean_inc_n(v_toPure_671_, 2);
lean_inc(v_cls_666_);
v___f_672_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__0), 6, 5);
lean_closure_set(v___f_672_, 0, v_inst_661_);
lean_closure_set(v___f_672_, 1, v_inst_662_);
lean_closure_set(v___f_672_, 2, v_inst_663_);
lean_closure_set(v___f_672_, 3, v_inst_664_);
lean_closure_set(v___f_672_, 4, v_cls_666_);
v___f_673_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_673_, 0, v_toPure_671_);
lean_closure_set(v___f_673_, 1, v_toBind_669_);
lean_closure_set(v___f_673_, 2, v_mkMsg_667_);
lean_closure_set(v___f_673_, 3, v___f_672_);
v___f_674_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_674_, 0, v_toPure_671_);
lean_closure_set(v___f_674_, 1, v_cls_666_);
lean_closure_set(v___f_674_, 2, v_toBind_669_);
lean_closure_set(v___f_674_, 3, v_inst_665_);
v___x_675_ = lean_apply_4(v_toBind_669_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_670_, v___f_674_);
v___x_676_ = lean_apply_4(v_toBind_669_, lean_box(0), lean_box(0), v___x_675_, v___f_673_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(lean_object* v_x_677_){
_start:
{
lean_object* v_msg_678_; 
v_msg_678_ = lean_ctor_get(v_x_677_, 1);
lean_inc_ref(v_msg_678_);
return v_msg_678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed(lean_object* v_x_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(v_x_679_);
lean_dec_ref(v_x_679_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0(lean_object* v_ref_681_, lean_object* v_msg_682_, lean_object* v_oldTraces_683_, lean_object* v_s_684_){
_start:
{
uint64_t v_tid_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_694_; 
v_tid_685_ = lean_ctor_get_uint64(v_s_684_, sizeof(void*)*1);
v_isSharedCheck_694_ = !lean_is_exclusive(v_s_684_);
if (v_isSharedCheck_694_ == 0)
{
lean_object* v_unused_695_; 
v_unused_695_ = lean_ctor_get(v_s_684_, 0);
lean_dec(v_unused_695_);
v___x_687_ = v_s_684_;
v_isShared_688_ = v_isSharedCheck_694_;
goto v_resetjp_686_;
}
else
{
lean_dec(v_s_684_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_694_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v_ref_681_);
lean_ctor_set(v___x_689_, 1, v_msg_682_);
v___x_690_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_683_, v___x_689_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_690_);
v___x_692_ = v___x_687_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
lean_ctor_set_uint64(v_reuseFailAlloc_693_, sizeof(void*)*1, v_tid_685_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2(lean_object* v_ref_696_, lean_object* v_oldTraces_697_, lean_object* v_modifyTraceState_698_, lean_object* v_msg_699_){
_start:
{
lean_object* v___f_700_; lean_object* v___x_701_; 
v___f_700_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0), 4, 3);
lean_closure_set(v___f_700_, 0, v_ref_696_);
lean_closure_set(v___f_700_, 1, v_msg_699_);
lean_closure_set(v___f_700_, 2, v_oldTraces_697_);
v___x_701_ = lean_apply_1(v_modifyTraceState_698_, v___f_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(lean_object* v___f_721_, lean_object* v_data_722_, lean_object* v_msg_723_, lean_object* v_inst_724_, lean_object* v_toBind_725_, lean_object* v___f_726_, lean_object* v_____do__lift_727_){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; size_t v_sz_730_; size_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_msg_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_728_ = l_Lean_PersistentArray_toArray___redArg(v_____do__lift_727_);
v___x_729_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v_sz_730_ = lean_array_size(v___x_728_);
v___x_731_ = ((size_t)0ULL);
v___x_732_ = l_unsafeCast___redArg(v___x_728_);
lean_dec_ref(v___x_728_);
v___x_733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_729_, v___f_721_, v_sz_730_, v___x_731_, v___x_732_);
v___x_734_ = l_unsafeCast___redArg(v___x_733_);
lean_dec(v___x_733_);
v_msg_735_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_735_, 0, v_data_722_);
lean_ctor_set(v_msg_735_, 1, v_msg_723_);
lean_ctor_set(v_msg_735_, 2, v___x_734_);
v___x_736_ = lean_apply_1(v_inst_724_, v_msg_735_);
v___x_737_ = lean_apply_4(v_toBind_725_, lean_box(0), lean_box(0), v___x_736_, v___f_726_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed(lean_object* v___f_738_, lean_object* v_data_739_, lean_object* v_msg_740_, lean_object* v_inst_741_, lean_object* v_toBind_742_, lean_object* v___f_743_, lean_object* v_____do__lift_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(v___f_738_, v_data_739_, v_msg_740_, v_inst_741_, v_toBind_742_, v___f_743_, v_____do__lift_744_);
lean_dec_ref(v_____do__lift_744_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(lean_object* v_ref_746_, lean_object* v_withRef_747_, lean_object* v___x_748_, lean_object* v_oldRef_749_){
_start:
{
lean_object* v_ref_750_; lean_object* v___x_751_; 
v_ref_750_ = l_Lean_replaceRef(v_ref_746_, v_oldRef_749_);
v___x_751_ = lean_apply_3(v_withRef_747_, lean_box(0), v_ref_750_, v___x_748_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed(lean_object* v_ref_752_, lean_object* v_withRef_753_, lean_object* v___x_754_, lean_object* v_oldRef_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(v_ref_752_, v_withRef_753_, v___x_754_, v_oldRef_755_);
lean_dec(v_oldRef_755_);
lean_dec(v_ref_752_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(lean_object* v_inst_758_, lean_object* v_inst_759_, lean_object* v_inst_760_, lean_object* v_inst_761_, lean_object* v_oldTraces_762_, lean_object* v_data_763_, lean_object* v_ref_764_, lean_object* v_msg_765_){
_start:
{
lean_object* v_toApplicative_766_; lean_object* v_toBind_767_; lean_object* v_modifyTraceState_768_; lean_object* v_getTraceState_769_; lean_object* v_toPure_770_; lean_object* v_getRef_771_; lean_object* v_withRef_772_; lean_object* v___f_773_; lean_object* v___x_774_; lean_object* v___f_775_; lean_object* v___f_776_; lean_object* v___f_777_; lean_object* v___x_778_; lean_object* v___f_779_; lean_object* v___x_780_; 
v_toApplicative_766_ = lean_ctor_get(v_inst_758_, 0);
lean_inc_ref(v_toApplicative_766_);
v_toBind_767_ = lean_ctor_get(v_inst_758_, 1);
lean_inc_n(v_toBind_767_, 4);
lean_dec_ref(v_inst_758_);
v_modifyTraceState_768_ = lean_ctor_get(v_inst_759_, 0);
lean_inc(v_modifyTraceState_768_);
v_getTraceState_769_ = lean_ctor_get(v_inst_759_, 1);
lean_inc(v_getTraceState_769_);
lean_dec_ref(v_inst_759_);
v_toPure_770_ = lean_ctor_get(v_toApplicative_766_, 1);
lean_inc(v_toPure_770_);
lean_dec_ref(v_toApplicative_766_);
v_getRef_771_ = lean_ctor_get(v_inst_760_, 0);
lean_inc(v_getRef_771_);
v_withRef_772_ = lean_ctor_get(v_inst_760_, 1);
lean_inc(v_withRef_772_);
lean_dec_ref(v_inst_760_);
v___f_773_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_773_, 0, v_toPure_770_);
v___x_774_ = lean_apply_4(v_toBind_767_, lean_box(0), lean_box(0), v_getTraceState_769_, v___f_773_);
v___f_775_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0));
lean_inc(v_ref_764_);
v___f_776_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2), 4, 3);
lean_closure_set(v___f_776_, 0, v_ref_764_);
lean_closure_set(v___f_776_, 1, v_oldTraces_762_);
lean_closure_set(v___f_776_, 2, v_modifyTraceState_768_);
v___f_777_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_777_, 0, v___f_775_);
lean_closure_set(v___f_777_, 1, v_data_763_);
lean_closure_set(v___f_777_, 2, v_msg_765_);
lean_closure_set(v___f_777_, 3, v_inst_761_);
lean_closure_set(v___f_777_, 4, v_toBind_767_);
lean_closure_set(v___f_777_, 5, v___f_776_);
v___x_778_ = lean_apply_4(v_toBind_767_, lean_box(0), lean_box(0), v___x_774_, v___f_777_);
v___f_779_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_779_, 0, v_ref_764_);
lean_closure_set(v___f_779_, 1, v_withRef_772_);
lean_closure_set(v___f_779_, 2, v___x_778_);
v___x_780_ = lean_apply_4(v_toBind_767_, lean_box(0), lean_box(0), v_getRef_771_, v___f_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode(lean_object* v_m_781_, lean_object* v_inst_782_, lean_object* v_inst_783_, lean_object* v_inst_784_, lean_object* v_inst_785_, lean_object* v_oldTraces_786_, lean_object* v_data_787_, lean_object* v_ref_788_, lean_object* v_msg_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_782_, v_inst_783_, v_inst_784_, v_inst_785_, v_oldTraces_786_, v_data_787_, v_ref_788_, v_msg_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(lean_object* v_name_791_, lean_object* v_decl_792_, lean_object* v_ref_793_){
_start:
{
lean_object* v_defValue_795_; lean_object* v_descr_796_; lean_object* v_deprecation_x3f_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_defValue_795_ = lean_ctor_get(v_decl_792_, 0);
v_descr_796_ = lean_ctor_get(v_decl_792_, 1);
v_deprecation_x3f_797_ = lean_ctor_get(v_decl_792_, 2);
v___x_798_ = lean_alloc_ctor(1, 0, 1);
v___x_799_ = lean_unbox(v_defValue_795_);
lean_ctor_set_uint8(v___x_798_, 0, v___x_799_);
lean_inc(v_deprecation_x3f_797_);
lean_inc_ref(v_descr_796_);
lean_inc_n(v_name_791_, 2);
v___x_800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_800_, 0, v_name_791_);
lean_ctor_set(v___x_800_, 1, v_ref_793_);
lean_ctor_set(v___x_800_, 2, v___x_798_);
lean_ctor_set(v___x_800_, 3, v_descr_796_);
lean_ctor_set(v___x_800_, 4, v_deprecation_x3f_797_);
v___x_801_ = lean_register_option(v_name_791_, v___x_800_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_809_; 
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v___x_801_, 0);
lean_dec(v_unused_810_);
v___x_803_ = v___x_801_;
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
else
{
lean_dec(v___x_801_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_807_; 
lean_inc(v_defValue_795_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v_name_791_);
lean_ctor_set(v___x_805_, 1, v_defValue_795_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v___x_805_);
v___x_807_ = v___x_803_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_name_791_);
v_a_811_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_801_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_801_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_819_, lean_object* v_decl_820_, lean_object* v_ref_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v_name_819_, v_decl_820_, v_ref_821_);
lean_dec_ref(v_decl_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_839_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_840_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_841_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_842_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_839_, v___x_840_, v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4____boxed(lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(lean_object* v_name_845_, lean_object* v_decl_846_, lean_object* v_ref_847_){
_start:
{
lean_object* v_defValue_849_; lean_object* v_descr_850_; lean_object* v_deprecation_x3f_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_defValue_849_ = lean_ctor_get(v_decl_846_, 0);
v_descr_850_ = lean_ctor_get(v_decl_846_, 1);
v_deprecation_x3f_851_ = lean_ctor_get(v_decl_846_, 2);
lean_inc(v_defValue_849_);
v___x_852_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_852_, 0, v_defValue_849_);
lean_inc(v_deprecation_x3f_851_);
lean_inc_ref(v_descr_850_);
lean_inc_n(v_name_845_, 2);
v___x_853_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_853_, 0, v_name_845_);
lean_ctor_set(v___x_853_, 1, v_ref_847_);
lean_ctor_set(v___x_853_, 2, v___x_852_);
lean_ctor_set(v___x_853_, 3, v_descr_850_);
lean_ctor_set(v___x_853_, 4, v_deprecation_x3f_851_);
v___x_854_ = lean_register_option(v_name_845_, v___x_853_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_862_; 
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_862_ == 0)
{
lean_object* v_unused_863_; 
v_unused_863_ = lean_ctor_get(v___x_854_, 0);
lean_dec(v_unused_863_);
v___x_856_ = v___x_854_;
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
else
{
lean_dec(v___x_854_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_860_; 
lean_inc(v_defValue_849_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v_name_845_);
lean_ctor_set(v___x_858_, 1, v_defValue_849_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 0, v___x_858_);
v___x_860_ = v___x_856_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_858_);
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
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec(v_name_845_);
v_a_864_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_854_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_854_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_872_, lean_object* v_decl_873_, lean_object* v_ref_874_, lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(v_name_872_, v_decl_873_, v_ref_874_);
lean_dec_ref(v_decl_873_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_893_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_894_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_895_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_896_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(v___x_893_, v___x_894_, v___x_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4____boxed(lean_object* v_a_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_916_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_917_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_918_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_919_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_916_, v___x_917_, v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4____boxed(lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(lean_object* v_name_922_, lean_object* v_decl_923_, lean_object* v_ref_924_){
_start:
{
lean_object* v_defValue_926_; lean_object* v_descr_927_; lean_object* v_deprecation_x3f_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_defValue_926_ = lean_ctor_get(v_decl_923_, 0);
v_descr_927_ = lean_ctor_get(v_decl_923_, 1);
v_deprecation_x3f_928_ = lean_ctor_get(v_decl_923_, 2);
lean_inc(v_defValue_926_);
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v_defValue_926_);
lean_inc(v_deprecation_x3f_928_);
lean_inc_ref(v_descr_927_);
lean_inc_n(v_name_922_, 2);
v___x_930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_930_, 0, v_name_922_);
lean_ctor_set(v___x_930_, 1, v_ref_924_);
lean_ctor_set(v___x_930_, 2, v___x_929_);
lean_ctor_set(v___x_930_, 3, v_descr_927_);
lean_ctor_set(v___x_930_, 4, v_deprecation_x3f_928_);
v___x_931_ = lean_register_option(v_name_922_, v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_939_ == 0)
{
lean_object* v_unused_940_; 
v_unused_940_ = lean_ctor_get(v___x_931_, 0);
lean_dec(v_unused_940_);
v___x_933_ = v___x_931_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_dec(v___x_931_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
lean_inc(v_defValue_926_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v_name_922_);
lean_ctor_set(v___x_935_, 1, v_defValue_926_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec(v_name_922_);
v_a_941_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_931_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_931_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_949_, lean_object* v_decl_950_, lean_object* v_ref_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(v_name_949_, v_decl_950_, v_ref_951_);
lean_dec_ref(v_decl_950_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_970_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_971_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_972_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_973_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(v___x_970_, v___x_971_, v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4____boxed(lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_993_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_994_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_995_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_996_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_993_, v___x_994_, v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4____boxed(lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
return v_res_998_;
}
}
LEAN_EXPORT uint8_t l_Lean_trace_profiler_isExporting(lean_object* v_opts_999_){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1000_ = l_Lean_KVMap_instValueBool;
v___x_1001_ = l_Lean_KVMap_instValueString;
v___x_1002_ = l_Lean_trace_profiler_output;
v___x_1003_ = l_Lean_Option_get_x3f___redArg(v___x_1001_, v_opts_999_, v___x_1002_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v___x_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1004_ = l_Lean_trace_profiler_serve;
v___x_1005_ = l_Lean_Option_get___redArg(v___x_1000_, v_opts_999_, v___x_1004_);
v___x_1006_ = lean_unbox(v___x_1005_);
lean_dec(v___x_1005_);
return v___x_1006_;
}
else
{
uint8_t v___x_1007_; 
lean_dec_ref_known(v___x_1003_, 1);
v___x_1007_ = 1;
return v___x_1007_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace_profiler_isExporting___boxed(lean_object* v_opts_1008_){
_start:
{
uint8_t v_res_1009_; lean_object* v_r_1010_; 
v_res_1009_ = l_Lean_trace_profiler_isExporting(v_opts_1008_);
lean_dec_ref(v_opts_1008_);
v_r_1010_ = lean_box(v_res_1009_);
return v_r_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1030_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1031_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1032_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1033_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_1030_, v___x_1031_, v___x_1032_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4____boxed(lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
return v_res_1035_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1036_; double v___x_1037_; 
v___x_1036_ = lean_unsigned_to_nat(1000000000u);
v___x_1037_ = lean_float_of_nat(v___x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0(lean_object* v_start_1038_, lean_object* v_a_1039_, lean_object* v_toPure_1040_, lean_object* v_stop_1041_){
_start:
{
double v___x_1042_; double v___x_1043_; double v___x_1044_; double v___x_1045_; double v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1042_ = lean_float_of_nat(v_start_1038_);
v___x_1043_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1044_ = lean_float_div(v___x_1042_, v___x_1043_);
v___x_1045_ = lean_float_of_nat(v_stop_1041_);
v___x_1046_ = lean_float_div(v___x_1045_, v___x_1043_);
v___x_1047_ = lean_box_float(v___x_1044_);
v___x_1048_ = lean_box_float(v___x_1046_);
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v_a_1039_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_apply_2(v_toPure_1040_, lean_box(0), v___x_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1(lean_object* v_start_1052_, lean_object* v_toPure_1053_, lean_object* v_toBind_1054_, lean_object* v___x_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v___f_1057_; lean_object* v___x_1058_; 
v___f_1057_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1057_, 0, v_start_1052_);
lean_closure_set(v___f_1057_, 1, v_a_1056_);
lean_closure_set(v___f_1057_, 2, v_toPure_1053_);
v___x_1058_ = lean_apply_4(v_toBind_1054_, lean_box(0), lean_box(0), v___x_1055_, v___f_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2(lean_object* v_toPure_1059_, lean_object* v_toBind_1060_, lean_object* v___x_1061_, lean_object* v_act_1062_, lean_object* v_start_1063_){
_start:
{
lean_object* v___f_1064_; lean_object* v___x_1065_; 
lean_inc(v_toBind_1060_);
v___f_1064_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1064_, 0, v_start_1063_);
lean_closure_set(v___f_1064_, 1, v_toPure_1059_);
lean_closure_set(v___f_1064_, 2, v_toBind_1060_);
lean_closure_set(v___f_1064_, 3, v___x_1061_);
v___x_1065_ = lean_apply_4(v_toBind_1060_, lean_box(0), lean_box(0), v_act_1062_, v___f_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3(lean_object* v_start_1066_, lean_object* v_a_1067_, lean_object* v_toPure_1068_, lean_object* v_stop_1069_){
_start:
{
double v___x_1070_; double v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1070_ = lean_float_of_nat(v_start_1066_);
v___x_1071_ = lean_float_of_nat(v_stop_1069_);
v___x_1072_ = lean_box_float(v___x_1070_);
v___x_1073_ = lean_box_float(v___x_1071_);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_a_1067_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lean_apply_2(v_toPure_1068_, lean_box(0), v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4(lean_object* v_start_1077_, lean_object* v_toPure_1078_, lean_object* v_toBind_1079_, lean_object* v___x_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v___f_1082_; lean_object* v___x_1083_; 
v___f_1082_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1082_, 0, v_start_1077_);
lean_closure_set(v___f_1082_, 1, v_a_1081_);
lean_closure_set(v___f_1082_, 2, v_toPure_1078_);
v___x_1083_ = lean_apply_4(v_toBind_1079_, lean_box(0), lean_box(0), v___x_1080_, v___f_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5(lean_object* v_toPure_1084_, lean_object* v_toBind_1085_, lean_object* v___x_1086_, lean_object* v_act_1087_, lean_object* v_start_1088_){
_start:
{
lean_object* v___f_1089_; lean_object* v___x_1090_; 
lean_inc(v_toBind_1085_);
v___f_1089_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1089_, 0, v_start_1088_);
lean_closure_set(v___f_1089_, 1, v_toPure_1084_);
lean_closure_set(v___f_1089_, 2, v_toBind_1085_);
lean_closure_set(v___f_1089_, 3, v___x_1086_);
v___x_1090_ = lean_apply_4(v_toBind_1085_, lean_box(0), lean_box(0), v_act_1087_, v___f_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(lean_object* v_inst_1093_, lean_object* v_inst_1094_, lean_object* v_opts_1095_, lean_object* v_act_1096_){
_start:
{
lean_object* v___x_1097_; lean_object* v_toApplicative_1098_; lean_object* v_toBind_1099_; lean_object* v_toPure_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; 
v___x_1097_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1098_ = lean_ctor_get(v_inst_1093_, 0);
lean_inc_ref(v_toApplicative_1098_);
v_toBind_1099_ = lean_ctor_get(v_inst_1093_, 1);
lean_inc(v_toBind_1099_);
lean_dec_ref(v_inst_1093_);
v_toPure_1100_ = lean_ctor_get(v_toApplicative_1098_, 1);
lean_inc(v_toPure_1100_);
lean_dec_ref(v_toApplicative_1098_);
v___x_1101_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1102_ = l_Lean_Option_get___redArg(v___x_1097_, v_opts_1095_, v___x_1101_);
v___x_1103_ = lean_unbox(v___x_1102_);
lean_dec(v___x_1102_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___f_1106_; lean_object* v___x_1107_; 
v___x_1104_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1105_ = lean_apply_2(v_inst_1094_, lean_box(0), v___x_1104_);
lean_inc(v___x_1105_);
lean_inc(v_toBind_1099_);
v___f_1106_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1106_, 0, v_toPure_1100_);
lean_closure_set(v___f_1106_, 1, v_toBind_1099_);
lean_closure_set(v___f_1106_, 2, v___x_1105_);
lean_closure_set(v___f_1106_, 3, v_act_1096_);
v___x_1107_ = lean_apply_4(v_toBind_1099_, lean_box(0), lean_box(0), v___x_1105_, v___f_1106_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___f_1110_; lean_object* v___x_1111_; 
v___x_1108_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1109_ = lean_apply_2(v_inst_1094_, lean_box(0), v___x_1108_);
lean_inc(v___x_1109_);
lean_inc(v_toBind_1099_);
v___f_1110_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1110_, 0, v_toPure_1100_);
lean_closure_set(v___f_1110_, 1, v_toBind_1099_);
lean_closure_set(v___f_1110_, 2, v___x_1109_);
lean_closure_set(v___f_1110_, 3, v_act_1096_);
v___x_1111_ = lean_apply_4(v_toBind_1099_, lean_box(0), lean_box(0), v___x_1109_, v___f_1110_);
return v___x_1111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___boxed(lean_object* v_inst_1112_, lean_object* v_inst_1113_, lean_object* v_opts_1114_, lean_object* v_act_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(v_inst_1112_, v_inst_1113_, v_opts_1114_, v_act_1115_);
lean_dec_ref(v_opts_1114_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop(lean_object* v_00_u03b1_1117_, lean_object* v_m_1118_, lean_object* v_inst_1119_, lean_object* v_inst_1120_, lean_object* v_opts_1121_, lean_object* v_act_1122_){
_start:
{
lean_object* v___x_1123_; lean_object* v_toApplicative_1124_; lean_object* v_toBind_1125_; lean_object* v_toPure_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1123_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1124_ = lean_ctor_get(v_inst_1119_, 0);
lean_inc_ref(v_toApplicative_1124_);
v_toBind_1125_ = lean_ctor_get(v_inst_1119_, 1);
lean_inc(v_toBind_1125_);
lean_dec_ref(v_inst_1119_);
v_toPure_1126_ = lean_ctor_get(v_toApplicative_1124_, 1);
lean_inc(v_toPure_1126_);
lean_dec_ref(v_toApplicative_1124_);
v___x_1127_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1128_ = l_Lean_Option_get___redArg(v___x_1123_, v_opts_1121_, v___x_1127_);
v___x_1129_ = lean_unbox(v___x_1128_);
lean_dec(v___x_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___f_1132_; lean_object* v___x_1133_; 
v___x_1130_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1131_ = lean_apply_2(v_inst_1120_, lean_box(0), v___x_1130_);
lean_inc(v___x_1131_);
lean_inc(v_toBind_1125_);
v___f_1132_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1132_, 0, v_toPure_1126_);
lean_closure_set(v___f_1132_, 1, v_toBind_1125_);
lean_closure_set(v___f_1132_, 2, v___x_1131_);
lean_closure_set(v___f_1132_, 3, v_act_1122_);
v___x_1133_ = lean_apply_4(v_toBind_1125_, lean_box(0), lean_box(0), v___x_1131_, v___f_1132_);
return v___x_1133_;
}
else
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___f_1136_; lean_object* v___x_1137_; 
v___x_1134_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1135_ = lean_apply_2(v_inst_1120_, lean_box(0), v___x_1134_);
lean_inc(v___x_1135_);
lean_inc(v_toBind_1125_);
v___f_1136_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1136_, 0, v_toPure_1126_);
lean_closure_set(v___f_1136_, 1, v_toBind_1125_);
lean_closure_set(v___f_1136_, 2, v___x_1135_);
lean_closure_set(v___f_1136_, 3, v_act_1122_);
v___x_1137_ = lean_apply_4(v_toBind_1125_, lean_box(0), lean_box(0), v___x_1135_, v___f_1136_);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___boxed(lean_object* v_00_u03b1_1138_, lean_object* v_m_1139_, lean_object* v_inst_1140_, lean_object* v_inst_1141_, lean_object* v_opts_1142_, lean_object* v_act_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l___private_Lean_Util_Trace_0__Lean_withStartStop(v_00_u03b1_1138_, v_m_1139_, v_inst_1140_, v_inst_1141_, v_opts_1142_, v_act_1143_);
lean_dec_ref(v_opts_1142_);
return v_res_1144_;
}
}
static double _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0(void){
_start:
{
lean_object* v___x_1145_; double v___x_1146_; 
v___x_1145_ = lean_unsigned_to_nat(1000u);
v___x_1146_ = lean_float_of_nat(v___x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT double l_Lean_trace_profiler_threshold_unitAdjusted(lean_object* v_o_1147_){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; 
v___x_1148_ = l_Lean_KVMap_instValueBool;
v___x_1149_ = l_Lean_KVMap_instValueNat;
v___x_1150_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1151_ = l_Lean_Option_get___redArg(v___x_1148_, v_o_1147_, v___x_1150_);
v___x_1152_ = lean_unbox(v___x_1151_);
lean_dec(v___x_1151_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1153_; lean_object* v___x_1154_; double v___x_1155_; double v___x_1156_; double v___x_1157_; 
v___x_1153_ = l_Lean_trace_profiler_threshold;
v___x_1154_ = l_Lean_Option_get___redArg(v___x_1149_, v_o_1147_, v___x_1153_);
v___x_1155_ = lean_float_of_nat(v___x_1154_);
v___x_1156_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1157_ = lean_float_div(v___x_1155_, v___x_1156_);
return v___x_1157_;
}
else
{
lean_object* v___x_1158_; lean_object* v___x_1159_; double v___x_1160_; 
v___x_1158_ = l_Lean_trace_profiler_threshold;
v___x_1159_ = l_Lean_Option_get___redArg(v___x_1149_, v_o_1147_, v___x_1158_);
v___x_1160_ = lean_float_of_nat(v___x_1159_);
return v___x_1160_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold_unitAdjusted___boxed(lean_object* v_o_1161_){
_start:
{
double v_res_1162_; lean_object* v_r_1163_; 
v_res_1162_ = l_Lean_trace_profiler_threshold_unitAdjusted(v_o_1161_);
lean_dec_ref(v_o_1161_);
v_r_1163_ = lean_box_float(v_res_1162_);
return v_r_1163_;
}
}
static lean_object* _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0(void){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_instMonadExceptOfEIO___redArg();
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg(){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0, &l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object* v___dummy_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_instMonadAlwaysExceptEIO___redArg();
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO(lean_object* v_00_u03b5_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0, &l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT___redArg(lean_object* v_inst_1171_, lean_object* v_always_1172_){
_start:
{
lean_object* v___f_1173_; lean_object* v___f_1174_; lean_object* v___x_1175_; 
lean_inc_ref(v_always_1172_);
v___f_1173_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1173_, 0, v_always_1172_);
lean_closure_set(v___f_1173_, 1, v_inst_1171_);
v___f_1174_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__3), 5, 1);
lean_closure_set(v___f_1174_, 0, v_always_1172_);
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___f_1173_);
lean_ctor_set(v___x_1175_, 1, v___f_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT(lean_object* v_m_1176_, lean_object* v_inst_1177_, lean_object* v_00_u03b5_1178_, lean_object* v_00_u03c3_1179_, lean_object* v_always_1180_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lean_instMonadAlwaysExceptStateT___redArg(v_inst_1177_, v_always_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object* v_always_1182_){
_start:
{
lean_object* v___f_1183_; lean_object* v___f_1184_; lean_object* v___x_1185_; 
lean_inc_ref(v_always_1182_);
v___f_1183_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1183_, 0, v_always_1182_);
v___f_1184_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1184_, 0, v_always_1182_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___f_1183_);
lean_ctor_set(v___x_1185_, 1, v___f_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27(lean_object* v_m_1186_, lean_object* v_00_u03b5_1187_, lean_object* v_00_u03c9_1188_, lean_object* v_00_u03c3_1189_, lean_object* v_always_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v_always_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object* v_always_1192_){
_start:
{
lean_object* v___f_1193_; lean_object* v___f_1194_; lean_object* v___x_1195_; 
lean_inc_ref(v_always_1192_);
v___f_1193_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1193_, 0, v_always_1192_);
v___f_1194_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1194_, 0, v_always_1192_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___f_1193_);
lean_ctor_set(v___x_1195_, 1, v___f_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT(lean_object* v_m_1196_, lean_object* v_00_u03b5_1197_, lean_object* v_00_u03c1_1198_, lean_object* v_always_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v_always_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object* v_always_1201_, lean_object* v_inst_1202_, lean_object* v_inst_1203_, lean_object* v_inst_1204_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_1202_, v_inst_1203_, v_inst_1204_, v_always_1201_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object* v_00_u03b1_1206_, lean_object* v_m_1207_, lean_object* v_00_u03b5_1208_, lean_object* v_00_u03c9_1209_, lean_object* v_00_u03b2_1210_, lean_object* v_always_1211_, lean_object* v_inst_1212_, lean_object* v_inst_1213_, lean_object* v_inst_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_1212_, v_inst_1213_, v_inst_1214_, v_always_1211_);
return v___x_1215_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultBool___redArg___lam__0(lean_object* v_x_1222_){
_start:
{
if (lean_obj_tag(v_x_1222_) == 0)
{
uint8_t v___x_1223_; 
v___x_1223_ = 2;
return v___x_1223_;
}
else
{
lean_object* v_a_1224_; uint8_t v___x_1225_; 
v_a_1224_ = lean_ctor_get(v_x_1222_, 0);
v___x_1225_ = lean_unbox(v_a_1224_);
if (v___x_1225_ == 0)
{
uint8_t v___x_1226_; 
v___x_1226_ = 1;
return v___x_1226_;
}
else
{
uint8_t v___x_1227_; 
v___x_1227_ = 0;
return v___x_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object* v_x_1228_){
_start:
{
uint8_t v_res_1229_; lean_object* v_r_1230_; 
v_res_1229_ = l_Lean_instExceptToTraceResultBool___redArg___lam__0(v_x_1228_);
lean_dec_ref(v_x_1228_);
v_r_1230_ = lean_box(v_res_1229_);
return v_r_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg(){
_start:
{
lean_object* v___f_1233_; 
v___f_1233_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___boxed(lean_object* v___dummy_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_instExceptToTraceResultBool___redArg();
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool(lean_object* v_00_u03b5_1236_){
_start:
{
lean_object* v___f_1237_; 
v___f_1237_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1237_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultOption___redArg___lam__0(lean_object* v_x_1238_){
_start:
{
if (lean_obj_tag(v_x_1238_) == 0)
{
uint8_t v___x_1239_; 
v___x_1239_ = 2;
return v___x_1239_;
}
else
{
lean_object* v_a_1240_; 
v_a_1240_ = lean_ctor_get(v_x_1238_, 0);
if (lean_obj_tag(v_a_1240_) == 0)
{
uint8_t v___x_1241_; 
v___x_1241_ = 1;
return v___x_1241_;
}
else
{
uint8_t v___x_1242_; 
v___x_1242_ = 0;
return v___x_1242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed(lean_object* v_x_1243_){
_start:
{
uint8_t v_res_1244_; lean_object* v_r_1245_; 
v_res_1244_ = l_Lean_instExceptToTraceResultOption___redArg___lam__0(v_x_1243_);
lean_dec_ref(v_x_1243_);
v_r_1245_ = lean_box(v_res_1244_);
return v_r_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg(){
_start:
{
lean_object* v___f_1248_; 
v___f_1248_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___boxed(lean_object* v___dummy_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lean_instExceptToTraceResultOption___redArg();
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption(lean_object* v_00_u03b1_1251_, lean_object* v_00_u03b5_1252_){
_start:
{
lean_object* v___f_1253_; 
v___f_1253_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1253_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultExpr___redArg___lam__0(lean_object* v_x_1254_){
_start:
{
if (lean_obj_tag(v_x_1254_) == 0)
{
uint8_t v___x_1255_; 
v___x_1255_ = 2;
return v___x_1255_;
}
else
{
lean_object* v_a_1256_; uint8_t v___x_1257_; 
v_a_1256_ = lean_ctor_get(v_x_1254_, 0);
v___x_1257_ = l_Lean_Expr_hasSyntheticSorry(v_a_1256_);
if (v___x_1257_ == 0)
{
uint8_t v___x_1258_; 
v___x_1258_ = 0;
return v___x_1258_;
}
else
{
uint8_t v___x_1259_; 
v___x_1259_ = 1;
return v___x_1259_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object* v_x_1260_){
_start:
{
uint8_t v_res_1261_; lean_object* v_r_1262_; 
v_res_1261_ = l_Lean_instExceptToTraceResultExpr___redArg___lam__0(v_x_1260_);
lean_dec_ref(v_x_1260_);
v_r_1262_ = lean_box(v_res_1261_);
return v_r_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg(){
_start:
{
lean_object* v___f_1265_; 
v___f_1265_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___boxed(lean_object* v___dummy_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_instExceptToTraceResultExpr___redArg();
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr(lean_object* v_00_u03b5_1268_){
_start:
{
lean_object* v___f_1269_; 
v___f_1269_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1269_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResult___redArg___lam__0(lean_object* v_x_1270_){
_start:
{
if (lean_obj_tag(v_x_1270_) == 0)
{
uint8_t v___x_1271_; 
v___x_1271_ = 2;
return v___x_1271_;
}
else
{
uint8_t v___x_1272_; 
v___x_1272_ = 0;
return v___x_1272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___lam__0___boxed(lean_object* v_x_1273_){
_start:
{
uint8_t v_res_1274_; lean_object* v_r_1275_; 
v_res_1274_ = l_Lean_instExceptToTraceResult___redArg___lam__0(v_x_1273_);
lean_dec_ref(v_x_1273_);
v_r_1275_ = lean_box(v_res_1274_);
return v_r_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg(){
_start:
{
lean_object* v___f_1278_; 
v___f_1278_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___boxed(lean_object* v___dummy_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_instExceptToTraceResult___redArg();
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult(lean_object* v_00_u03b1_1281_, lean_object* v_00_u03b5_1282_){
_start:
{
lean_object* v___f_1283_; 
v___f_1283_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1283_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___redArg(lean_object* v_inst_1284_, lean_object* v_e_1285_){
_start:
{
lean_object* v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = lean_apply_1(v_inst_1284_, v_e_1285_);
v___x_1287_ = lean_unbox(v___x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___redArg___boxed(lean_object* v_inst_1288_, lean_object* v_e_1289_){
_start:
{
uint8_t v_res_1290_; lean_object* v_r_1291_; 
v_res_1290_ = l_Lean_Except_toTraceResult___redArg(v_inst_1288_, v_e_1289_);
v_r_1291_ = lean_box(v_res_1290_);
return v_r_1291_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult(lean_object* v_00_u03b1_1292_, lean_object* v_00_u03b5_1293_, lean_object* v_inst_1294_, lean_object* v_e_1295_){
_start:
{
lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = lean_apply_1(v_inst_1294_, v_e_1295_);
v___x_1297_ = lean_unbox(v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___boxed(lean_object* v_00_u03b1_1298_, lean_object* v_00_u03b5_1299_, lean_object* v_inst_1300_, lean_object* v_e_1301_){
_start:
{
uint8_t v_res_1302_; lean_object* v_r_1303_; 
v_res_1302_ = l_Lean_Except_toTraceResult(v_00_u03b1_1298_, v_00_u03b5_1299_, v_inst_1300_, v_e_1301_);
v_r_1303_ = lean_box(v_res_1302_);
return v_r_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0(lean_object* v_oldTraces_1304_, lean_object* v_s_1305_){
_start:
{
uint64_t v_tid_1306_; lean_object* v_traces_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1315_; 
v_tid_1306_ = lean_ctor_get_uint64(v_s_1305_, sizeof(void*)*1);
v_traces_1307_ = lean_ctor_get(v_s_1305_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_s_1305_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1309_ = v_s_1305_;
v_isShared_1310_ = v_isSharedCheck_1315_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_traces_1307_);
lean_dec(v_s_1305_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1315_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1311_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1304_, v_traces_1307_);
lean_dec_ref(v_traces_1307_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 0, v___x_1311_);
v___x_1313_ = v___x_1309_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1311_);
lean_ctor_set_uint64(v_reuseFailAlloc_1314_, sizeof(void*)*1, v_tid_1306_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0));
v___x_1318_ = l_Lean_stringToMessageData(v___x_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(lean_object* v_toPure_1319_, lean_object* v_x_1320_){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1);
v___x_1322_ = lean_apply_2(v_toPure_1319_, lean_box(0), v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed(lean_object* v_toPure_1323_, lean_object* v_x_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(v_toPure_1323_, v_x_1324_);
lean_dec(v_x_1324_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2(lean_object* v_inst_1326_, lean_object* v___x_1327_, lean_object* v_fst_1328_, lean_object* v_____r_1329_){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_MonadExcept_ofExcept___redArg(v_inst_1326_, v___x_1327_, v_fst_1328_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(lean_object* v_inst_1331_, lean_object* v_inst_1332_, lean_object* v_inst_1333_, lean_object* v_inst_1334_, lean_object* v_oldTraces_1335_, lean_object* v_ref_1336_, lean_object* v_toBind_1337_, lean_object* v___f_1338_, lean_object* v_inst_1339_, lean_object* v_fst_1340_, lean_object* v_cls_1341_, uint8_t v_collapsed_1342_, lean_object* v_tag_1343_, lean_object* v___x_1344_, double v_fst_1345_, double v_snd_1346_, lean_object* v_m_1347_){
_start:
{
lean_object* v_data_1349_; lean_object* v_result_1352_; lean_object* v___x_1353_; double v___x_1354_; lean_object* v_data_1355_; uint8_t v___x_1356_; 
v_result_1352_ = lean_apply_1(v_inst_1339_, v_fst_1340_);
v___x_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_result_1352_);
v___x_1354_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_1343_);
lean_inc_ref(v___x_1353_);
lean_inc(v_cls_1341_);
v_data_1355_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1355_, 0, v_cls_1341_);
lean_ctor_set(v_data_1355_, 1, v___x_1353_);
lean_ctor_set(v_data_1355_, 2, v_tag_1343_);
lean_ctor_set_float(v_data_1355_, sizeof(void*)*3, v___x_1354_);
lean_ctor_set_float(v_data_1355_, sizeof(void*)*3 + 8, v___x_1354_);
lean_ctor_set_uint8(v_data_1355_, sizeof(void*)*3 + 16, v_collapsed_1342_);
v___x_1356_ = lean_unbox(v___x_1344_);
if (v___x_1356_ == 0)
{
lean_dec_ref_known(v___x_1353_, 1);
lean_dec_ref(v_tag_1343_);
lean_dec(v_cls_1341_);
v_data_1349_ = v_data_1355_;
goto v___jp_1348_;
}
else
{
lean_object* v_data_1357_; 
lean_dec_ref_known(v_data_1355_, 3);
v_data_1357_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1357_, 0, v_cls_1341_);
lean_ctor_set(v_data_1357_, 1, v___x_1353_);
lean_ctor_set(v_data_1357_, 2, v_tag_1343_);
lean_ctor_set_float(v_data_1357_, sizeof(void*)*3, v_fst_1345_);
lean_ctor_set_float(v_data_1357_, sizeof(void*)*3 + 8, v_snd_1346_);
lean_ctor_set_uint8(v_data_1357_, sizeof(void*)*3 + 16, v_collapsed_1342_);
v_data_1349_ = v_data_1357_;
goto v___jp_1348_;
}
v___jp_1348_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_1331_, v_inst_1332_, v_inst_1333_, v_inst_1334_, v_oldTraces_1335_, v_data_1349_, v_ref_1336_, v_m_1347_);
v___x_1351_ = lean_apply_4(v_toBind_1337_, lean_box(0), lean_box(0), v___x_1350_, v___f_1338_);
return v___x_1351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_1358_ = _args[0];
lean_object* v_inst_1359_ = _args[1];
lean_object* v_inst_1360_ = _args[2];
lean_object* v_inst_1361_ = _args[3];
lean_object* v_oldTraces_1362_ = _args[4];
lean_object* v_ref_1363_ = _args[5];
lean_object* v_toBind_1364_ = _args[6];
lean_object* v___f_1365_ = _args[7];
lean_object* v_inst_1366_ = _args[8];
lean_object* v_fst_1367_ = _args[9];
lean_object* v_cls_1368_ = _args[10];
lean_object* v_collapsed_1369_ = _args[11];
lean_object* v_tag_1370_ = _args[12];
lean_object* v___x_1371_ = _args[13];
lean_object* v_fst_1372_ = _args[14];
lean_object* v_snd_1373_ = _args[15];
lean_object* v_m_1374_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1375_; double v_fst_453__boxed_1376_; double v_snd_454__boxed_1377_; lean_object* v_res_1378_; 
v_collapsed_boxed_1375_ = lean_unbox(v_collapsed_1369_);
v_fst_453__boxed_1376_ = lean_unbox_float(v_fst_1372_);
lean_dec_ref(v_fst_1372_);
v_snd_454__boxed_1377_ = lean_unbox_float(v_snd_1373_);
lean_dec_ref(v_snd_1373_);
v_res_1378_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(v_inst_1358_, v_inst_1359_, v_inst_1360_, v_inst_1361_, v_oldTraces_1362_, v_ref_1363_, v_toBind_1364_, v___f_1365_, v_inst_1366_, v_fst_1367_, v_cls_1368_, v_collapsed_boxed_1375_, v_tag_1370_, v___x_1371_, v_fst_453__boxed_1376_, v_snd_454__boxed_1377_, v_m_1374_);
lean_dec(v___x_1371_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(lean_object* v_always_1379_, lean_object* v_inst_1380_, lean_object* v_inst_1381_, lean_object* v_inst_1382_, lean_object* v_inst_1383_, lean_object* v_oldTraces_1384_, lean_object* v_toBind_1385_, lean_object* v___f_1386_, lean_object* v_inst_1387_, lean_object* v_fst_1388_, lean_object* v_cls_1389_, uint8_t v_collapsed_1390_, lean_object* v_tag_1391_, lean_object* v___x_1392_, double v_fst_1393_, double v_snd_1394_, lean_object* v_msg_1395_, lean_object* v___f_1396_, lean_object* v_ref_1397_){
_start:
{
lean_object* v_tryCatch_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___f_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_tryCatch_1398_ = lean_ctor_get(v_always_1379_, 1);
lean_inc(v_tryCatch_1398_);
lean_dec_ref(v_always_1379_);
v___x_1399_ = lean_box(v_collapsed_1390_);
v___x_1400_ = lean_box_float(v_fst_1393_);
v___x_1401_ = lean_box_float(v_snd_1394_);
lean_inc_ref(v_fst_1388_);
lean_inc(v_toBind_1385_);
v___f_1402_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed), 17, 16);
lean_closure_set(v___f_1402_, 0, v_inst_1380_);
lean_closure_set(v___f_1402_, 1, v_inst_1381_);
lean_closure_set(v___f_1402_, 2, v_inst_1382_);
lean_closure_set(v___f_1402_, 3, v_inst_1383_);
lean_closure_set(v___f_1402_, 4, v_oldTraces_1384_);
lean_closure_set(v___f_1402_, 5, v_ref_1397_);
lean_closure_set(v___f_1402_, 6, v_toBind_1385_);
lean_closure_set(v___f_1402_, 7, v___f_1386_);
lean_closure_set(v___f_1402_, 8, v_inst_1387_);
lean_closure_set(v___f_1402_, 9, v_fst_1388_);
lean_closure_set(v___f_1402_, 10, v_cls_1389_);
lean_closure_set(v___f_1402_, 11, v___x_1399_);
lean_closure_set(v___f_1402_, 12, v_tag_1391_);
lean_closure_set(v___f_1402_, 13, v___x_1392_);
lean_closure_set(v___f_1402_, 14, v___x_1400_);
lean_closure_set(v___f_1402_, 15, v___x_1401_);
v___x_1403_ = lean_apply_1(v_msg_1395_, v_fst_1388_);
v___x_1404_ = lean_apply_3(v_tryCatch_1398_, lean_box(0), v___x_1403_, v___f_1396_);
v___x_1405_ = lean_apply_4(v_toBind_1385_, lean_box(0), lean_box(0), v___x_1404_, v___f_1402_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_1406_ = _args[0];
lean_object* v_inst_1407_ = _args[1];
lean_object* v_inst_1408_ = _args[2];
lean_object* v_inst_1409_ = _args[3];
lean_object* v_inst_1410_ = _args[4];
lean_object* v_oldTraces_1411_ = _args[5];
lean_object* v_toBind_1412_ = _args[6];
lean_object* v___f_1413_ = _args[7];
lean_object* v_inst_1414_ = _args[8];
lean_object* v_fst_1415_ = _args[9];
lean_object* v_cls_1416_ = _args[10];
lean_object* v_collapsed_1417_ = _args[11];
lean_object* v_tag_1418_ = _args[12];
lean_object* v___x_1419_ = _args[13];
lean_object* v_fst_1420_ = _args[14];
lean_object* v_snd_1421_ = _args[15];
lean_object* v_msg_1422_ = _args[16];
lean_object* v___f_1423_ = _args[17];
lean_object* v_ref_1424_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_1425_; double v_fst_496__boxed_1426_; double v_snd_497__boxed_1427_; lean_object* v_res_1428_; 
v_collapsed_boxed_1425_ = lean_unbox(v_collapsed_1417_);
v_fst_496__boxed_1426_ = lean_unbox_float(v_fst_1420_);
lean_dec_ref(v_fst_1420_);
v_snd_497__boxed_1427_ = lean_unbox_float(v_snd_1421_);
lean_dec_ref(v_snd_1421_);
v_res_1428_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(v_always_1406_, v_inst_1407_, v_inst_1408_, v_inst_1409_, v_inst_1410_, v_oldTraces_1411_, v_toBind_1412_, v___f_1413_, v_inst_1414_, v_fst_1415_, v_cls_1416_, v_collapsed_boxed_1425_, v_tag_1418_, v___x_1419_, v_fst_496__boxed_1426_, v_snd_497__boxed_1427_, v_msg_1422_, v___f_1423_, v_ref_1424_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(lean_object* v_inst_1429_, lean_object* v_inst_1430_, lean_object* v_inst_1431_, lean_object* v_inst_1432_, lean_object* v_always_1433_, lean_object* v_inst_1434_, lean_object* v_cls_1435_, uint8_t v_collapsed_1436_, lean_object* v_tag_1437_, lean_object* v_opts_1438_, uint8_t v_clsEnabled_1439_, lean_object* v_oldTraces_1440_, lean_object* v_msg_1441_, lean_object* v_resStartStop_1442_){
_start:
{
lean_object* v___x_1443_; lean_object* v_toApplicative_1444_; lean_object* v_toBind_1445_; lean_object* v___x_1446_; lean_object* v_snd_1447_; lean_object* v_toPure_1448_; lean_object* v_fst_1449_; lean_object* v_fst_1450_; lean_object* v_snd_1451_; lean_object* v___f_1452_; lean_object* v___f_1453_; lean_object* v___f_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___f_1458_; uint8_t v___y_1463_; double v___y_1468_; uint8_t v___x_1473_; 
v___x_1443_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1444_ = lean_ctor_get(v_inst_1429_, 0);
v_toBind_1445_ = lean_ctor_get(v_inst_1429_, 1);
lean_inc_n(v_toBind_1445_, 2);
lean_inc_ref(v_always_1433_);
v___x_1446_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_1433_);
v_snd_1447_ = lean_ctor_get(v_resStartStop_1442_, 1);
lean_inc(v_snd_1447_);
v_toPure_1448_ = lean_ctor_get(v_toApplicative_1444_, 1);
v_fst_1449_ = lean_ctor_get(v_resStartStop_1442_, 0);
lean_inc_n(v_fst_1449_, 2);
lean_dec_ref(v_resStartStop_1442_);
v_fst_1450_ = lean_ctor_get(v_snd_1447_, 0);
lean_inc_n(v_fst_1450_, 2);
v_snd_1451_ = lean_ctor_get(v_snd_1447_, 1);
lean_inc_n(v_snd_1451_, 2);
lean_dec(v_snd_1447_);
lean_inc_ref(v_oldTraces_1440_);
v___f_1452_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1452_, 0, v_oldTraces_1440_);
lean_inc(v_toPure_1448_);
v___f_1453_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1453_, 0, v_toPure_1448_);
lean_inc_ref(v_inst_1429_);
v___f_1454_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1454_, 0, v_inst_1429_);
lean_closure_set(v___f_1454_, 1, v___x_1446_);
lean_closure_set(v___f_1454_, 2, v_fst_1449_);
v___x_1455_ = l_Lean_trace_profiler;
v___x_1456_ = l_Lean_Option_get___redArg(v___x_1443_, v_opts_1438_, v___x_1455_);
v___x_1457_ = lean_box(v_collapsed_1436_);
lean_inc(v___x_1456_);
lean_inc_ref(v___f_1454_);
lean_inc_ref(v_inst_1431_);
lean_inc_ref(v_inst_1430_);
v___f_1458_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed), 19, 18);
lean_closure_set(v___f_1458_, 0, v_always_1433_);
lean_closure_set(v___f_1458_, 1, v_inst_1429_);
lean_closure_set(v___f_1458_, 2, v_inst_1430_);
lean_closure_set(v___f_1458_, 3, v_inst_1431_);
lean_closure_set(v___f_1458_, 4, v_inst_1432_);
lean_closure_set(v___f_1458_, 5, v_oldTraces_1440_);
lean_closure_set(v___f_1458_, 6, v_toBind_1445_);
lean_closure_set(v___f_1458_, 7, v___f_1454_);
lean_closure_set(v___f_1458_, 8, v_inst_1434_);
lean_closure_set(v___f_1458_, 9, v_fst_1449_);
lean_closure_set(v___f_1458_, 10, v_cls_1435_);
lean_closure_set(v___f_1458_, 11, v___x_1457_);
lean_closure_set(v___f_1458_, 12, v_tag_1437_);
lean_closure_set(v___f_1458_, 13, v___x_1456_);
lean_closure_set(v___f_1458_, 14, v_fst_1450_);
lean_closure_set(v___f_1458_, 15, v_snd_1451_);
lean_closure_set(v___f_1458_, 16, v_msg_1441_);
lean_closure_set(v___f_1458_, 17, v___f_1453_);
v___x_1473_ = lean_unbox(v___x_1456_);
if (v___x_1473_ == 0)
{
uint8_t v___x_1474_; 
lean_dec(v_snd_1451_);
lean_dec(v_fst_1450_);
v___x_1474_ = lean_unbox(v___x_1456_);
lean_dec(v___x_1456_);
v___y_1463_ = v___x_1474_;
goto v___jp_1462_;
}
else
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
lean_dec(v___x_1456_);
v___x_1475_ = l_Lean_KVMap_instValueNat;
v___x_1476_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1477_ = l_Lean_Option_get___redArg(v___x_1443_, v_opts_1438_, v___x_1476_);
v___x_1478_ = lean_unbox(v___x_1477_);
lean_dec(v___x_1477_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; lean_object* v___x_1480_; double v___x_1481_; double v___x_1482_; double v___x_1483_; 
v___x_1479_ = l_Lean_trace_profiler_threshold;
v___x_1480_ = l_Lean_Option_get___redArg(v___x_1475_, v_opts_1438_, v___x_1479_);
v___x_1481_ = lean_float_of_nat(v___x_1480_);
v___x_1482_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1483_ = lean_float_div(v___x_1481_, v___x_1482_);
v___y_1468_ = v___x_1483_;
goto v___jp_1467_;
}
else
{
lean_object* v___x_1484_; lean_object* v___x_1485_; double v___x_1486_; 
v___x_1484_ = l_Lean_trace_profiler_threshold;
v___x_1485_ = l_Lean_Option_get___redArg(v___x_1475_, v_opts_1438_, v___x_1484_);
v___x_1486_ = lean_float_of_nat(v___x_1485_);
v___y_1468_ = v___x_1486_;
goto v___jp_1467_;
}
}
v___jp_1459_:
{
lean_object* v_getRef_1460_; lean_object* v___x_1461_; 
v_getRef_1460_ = lean_ctor_get(v_inst_1431_, 0);
lean_inc(v_getRef_1460_);
lean_dec_ref(v_inst_1431_);
v___x_1461_ = lean_apply_4(v_toBind_1445_, lean_box(0), lean_box(0), v_getRef_1460_, v___f_1458_);
return v___x_1461_;
}
v___jp_1462_:
{
if (v_clsEnabled_1439_ == 0)
{
if (v___y_1463_ == 0)
{
lean_object* v_modifyTraceState_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_dec_ref(v___f_1458_);
lean_dec_ref(v_inst_1431_);
v_modifyTraceState_1464_ = lean_ctor_get(v_inst_1430_, 0);
lean_inc(v_modifyTraceState_1464_);
lean_dec_ref(v_inst_1430_);
v___x_1465_ = lean_apply_1(v_modifyTraceState_1464_, v___f_1452_);
v___x_1466_ = lean_apply_4(v_toBind_1445_, lean_box(0), lean_box(0), v___x_1465_, v___f_1454_);
return v___x_1466_;
}
else
{
lean_dec_ref(v___f_1454_);
lean_dec_ref(v___f_1452_);
lean_dec_ref(v_inst_1430_);
goto v___jp_1459_;
}
}
else
{
lean_dec_ref(v___f_1454_);
lean_dec_ref(v___f_1452_);
lean_dec_ref(v_inst_1430_);
goto v___jp_1459_;
}
}
v___jp_1467_:
{
double v___x_1469_; double v___x_1470_; double v___x_1471_; uint8_t v___x_1472_; 
v___x_1469_ = lean_unbox_float(v_snd_1451_);
lean_dec(v_snd_1451_);
v___x_1470_ = lean_unbox_float(v_fst_1450_);
lean_dec(v_fst_1450_);
v___x_1471_ = lean_float_sub(v___x_1469_, v___x_1470_);
v___x_1472_ = lean_float_decLt(v___y_1468_, v___x_1471_);
v___y_1463_ = v___x_1472_;
goto v___jp_1462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___boxed(lean_object* v_inst_1487_, lean_object* v_inst_1488_, lean_object* v_inst_1489_, lean_object* v_inst_1490_, lean_object* v_always_1491_, lean_object* v_inst_1492_, lean_object* v_cls_1493_, lean_object* v_collapsed_1494_, lean_object* v_tag_1495_, lean_object* v_opts_1496_, lean_object* v_clsEnabled_1497_, lean_object* v_oldTraces_1498_, lean_object* v_msg_1499_, lean_object* v_resStartStop_1500_){
_start:
{
uint8_t v_collapsed_boxed_1501_; uint8_t v_clsEnabled_boxed_1502_; lean_object* v_res_1503_; 
v_collapsed_boxed_1501_ = lean_unbox(v_collapsed_1494_);
v_clsEnabled_boxed_1502_ = lean_unbox(v_clsEnabled_1497_);
v_res_1503_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1487_, v_inst_1488_, v_inst_1489_, v_inst_1490_, v_always_1491_, v_inst_1492_, v_cls_1493_, v_collapsed_boxed_1501_, v_tag_1495_, v_opts_1496_, v_clsEnabled_boxed_1502_, v_oldTraces_1498_, v_msg_1499_, v_resStartStop_1500_);
lean_dec_ref(v_opts_1496_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object* v_00_u03b1_1504_, lean_object* v_m_1505_, lean_object* v_inst_1506_, lean_object* v_inst_1507_, lean_object* v_inst_1508_, lean_object* v_inst_1509_, lean_object* v_00_u03b5_1510_, lean_object* v_always_1511_, lean_object* v_inst_1512_, lean_object* v_cls_1513_, uint8_t v_collapsed_1514_, lean_object* v_tag_1515_, lean_object* v_opts_1516_, uint8_t v_clsEnabled_1517_, lean_object* v_oldTraces_1518_, lean_object* v_msg_1519_, lean_object* v_resStartStop_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1506_, v_inst_1507_, v_inst_1508_, v_inst_1509_, v_always_1511_, v_inst_1512_, v_cls_1513_, v_collapsed_1514_, v_tag_1515_, v_opts_1516_, v_clsEnabled_1517_, v_oldTraces_1518_, v_msg_1519_, v_resStartStop_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_1522_ = _args[0];
lean_object* v_m_1523_ = _args[1];
lean_object* v_inst_1524_ = _args[2];
lean_object* v_inst_1525_ = _args[3];
lean_object* v_inst_1526_ = _args[4];
lean_object* v_inst_1527_ = _args[5];
lean_object* v_00_u03b5_1528_ = _args[6];
lean_object* v_always_1529_ = _args[7];
lean_object* v_inst_1530_ = _args[8];
lean_object* v_cls_1531_ = _args[9];
lean_object* v_collapsed_1532_ = _args[10];
lean_object* v_tag_1533_ = _args[11];
lean_object* v_opts_1534_ = _args[12];
lean_object* v_clsEnabled_1535_ = _args[13];
lean_object* v_oldTraces_1536_ = _args[14];
lean_object* v_msg_1537_ = _args[15];
lean_object* v_resStartStop_1538_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1539_; uint8_t v_clsEnabled_boxed_1540_; lean_object* v_res_1541_; 
v_collapsed_boxed_1539_ = lean_unbox(v_collapsed_1532_);
v_clsEnabled_boxed_1540_ = lean_unbox(v_clsEnabled_1535_);
v_res_1541_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(v_00_u03b1_1522_, v_m_1523_, v_inst_1524_, v_inst_1525_, v_inst_1526_, v_inst_1527_, v_00_u03b5_1528_, v_always_1529_, v_inst_1530_, v_cls_1531_, v_collapsed_boxed_1539_, v_tag_1533_, v_opts_1534_, v_clsEnabled_boxed_1540_, v_oldTraces_1536_, v_msg_1537_, v_resStartStop_1538_);
lean_dec_ref(v_opts_1534_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0(lean_object* v_inst_1542_, lean_object* v_inst_1543_, lean_object* v_inst_1544_, lean_object* v_inst_1545_, lean_object* v_always_1546_, lean_object* v_inst_1547_, lean_object* v_cls_1548_, uint8_t v_collapsed_1549_, lean_object* v_tag_1550_, lean_object* v_opts_1551_, uint8_t v_clsEnabled_1552_, lean_object* v_oldTraces_1553_, lean_object* v_msg_1554_, lean_object* v_resStartStop_1555_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1542_, v_inst_1543_, v_inst_1544_, v_inst_1545_, v_always_1546_, v_inst_1547_, v_cls_1548_, v_collapsed_1549_, v_tag_1550_, v_opts_1551_, v_clsEnabled_1552_, v_oldTraces_1553_, v_msg_1554_, v_resStartStop_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0___boxed(lean_object* v_inst_1557_, lean_object* v_inst_1558_, lean_object* v_inst_1559_, lean_object* v_inst_1560_, lean_object* v_always_1561_, lean_object* v_inst_1562_, lean_object* v_cls_1563_, lean_object* v_collapsed_1564_, lean_object* v_tag_1565_, lean_object* v_opts_1566_, lean_object* v_clsEnabled_1567_, lean_object* v_oldTraces_1568_, lean_object* v_msg_1569_, lean_object* v_resStartStop_1570_){
_start:
{
uint8_t v_collapsed_boxed_1571_; uint8_t v_clsEnabled_boxed_1572_; lean_object* v_res_1573_; 
v_collapsed_boxed_1571_ = lean_unbox(v_collapsed_1564_);
v_clsEnabled_boxed_1572_ = lean_unbox(v_clsEnabled_1567_);
v_res_1573_ = l_Lean_withTraceNode___redArg___lam__0(v_inst_1557_, v_inst_1558_, v_inst_1559_, v_inst_1560_, v_always_1561_, v_inst_1562_, v_cls_1563_, v_collapsed_boxed_1571_, v_tag_1565_, v_opts_1566_, v_clsEnabled_boxed_1572_, v_oldTraces_1568_, v_msg_1569_, v_resStartStop_1570_);
lean_dec_ref(v_opts_1566_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__1(lean_object* v_toPure_1574_, lean_object* v_ex_1575_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v_ex_1575_);
v___x_1577_ = lean_apply_2(v_toPure_1574_, lean_box(0), v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__2(lean_object* v_toPure_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1580_, 0, v_a_1579_);
v___x_1581_ = lean_apply_2(v_toPure_1578_, lean_box(0), v___x_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__3(lean_object* v_start_1582_, lean_object* v_a_1583_, lean_object* v_toPure_1584_, lean_object* v_stop_1585_){
_start:
{
double v___x_1586_; double v___x_1587_; double v___x_1588_; double v___x_1589_; double v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1586_ = lean_float_of_nat(v_start_1582_);
v___x_1587_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1588_ = lean_float_div(v___x_1586_, v___x_1587_);
v___x_1589_ = lean_float_of_nat(v_stop_1585_);
v___x_1590_ = lean_float_div(v___x_1589_, v___x_1587_);
v___x_1591_ = lean_box_float(v___x_1588_);
v___x_1592_ = lean_box_float(v___x_1590_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1594_, 0, v_a_1583_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
v___x_1595_ = lean_apply_2(v_toPure_1584_, lean_box(0), v___x_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__4(lean_object* v_start_1596_, lean_object* v_toPure_1597_, lean_object* v_toBind_1598_, lean_object* v___x_1599_, lean_object* v_a_1600_){
_start:
{
lean_object* v___f_1601_; lean_object* v___x_1602_; 
v___f_1601_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1601_, 0, v_start_1596_);
lean_closure_set(v___f_1601_, 1, v_a_1600_);
lean_closure_set(v___f_1601_, 2, v_toPure_1597_);
v___x_1602_ = lean_apply_4(v_toBind_1598_, lean_box(0), lean_box(0), v___x_1599_, v___f_1601_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__5(lean_object* v_toPure_1603_, lean_object* v_toBind_1604_, lean_object* v___x_1605_, lean_object* v___x_1606_, lean_object* v_start_1607_){
_start:
{
lean_object* v___f_1608_; lean_object* v___x_1609_; 
lean_inc(v_toBind_1604_);
v___f_1608_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1608_, 0, v_start_1607_);
lean_closure_set(v___f_1608_, 1, v_toPure_1603_);
lean_closure_set(v___f_1608_, 2, v_toBind_1604_);
lean_closure_set(v___f_1608_, 3, v___x_1605_);
v___x_1609_ = lean_apply_4(v_toBind_1604_, lean_box(0), lean_box(0), v___x_1606_, v___f_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__6(lean_object* v_start_1610_, lean_object* v_a_1611_, lean_object* v_toPure_1612_, lean_object* v_stop_1613_){
_start:
{
double v___x_1614_; double v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1614_ = lean_float_of_nat(v_start_1610_);
v___x_1615_ = lean_float_of_nat(v_stop_1613_);
v___x_1616_ = lean_box_float(v___x_1614_);
v___x_1617_ = lean_box_float(v___x_1615_);
v___x_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1616_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v_a_1611_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = lean_apply_2(v_toPure_1612_, lean_box(0), v___x_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__7(lean_object* v_start_1621_, lean_object* v_toPure_1622_, lean_object* v_toBind_1623_, lean_object* v___x_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v___f_1626_; lean_object* v___x_1627_; 
v___f_1626_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__6), 4, 3);
lean_closure_set(v___f_1626_, 0, v_start_1621_);
lean_closure_set(v___f_1626_, 1, v_a_1625_);
lean_closure_set(v___f_1626_, 2, v_toPure_1622_);
v___x_1627_ = lean_apply_4(v_toBind_1623_, lean_box(0), lean_box(0), v___x_1624_, v___f_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__8(lean_object* v_toPure_1628_, lean_object* v_toBind_1629_, lean_object* v___x_1630_, lean_object* v___x_1631_, lean_object* v_start_1632_){
_start:
{
lean_object* v___f_1633_; lean_object* v___x_1634_; 
lean_inc(v_toBind_1629_);
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__7), 5, 4);
lean_closure_set(v___f_1633_, 0, v_start_1632_);
lean_closure_set(v___f_1633_, 1, v_toPure_1628_);
lean_closure_set(v___f_1633_, 2, v_toBind_1629_);
lean_closure_set(v___f_1633_, 3, v___x_1630_);
v___x_1634_ = lean_apply_4(v_toBind_1629_, lean_box(0), lean_box(0), v___x_1631_, v___f_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9(lean_object* v_always_1635_, lean_object* v_inst_1636_, lean_object* v_inst_1637_, lean_object* v_inst_1638_, lean_object* v_inst_1639_, lean_object* v_inst_1640_, lean_object* v_cls_1641_, uint8_t v_collapsed_1642_, lean_object* v_tag_1643_, lean_object* v_opts_1644_, uint8_t v_clsEnabled_1645_, lean_object* v_msg_1646_, lean_object* v_toPure_1647_, lean_object* v_toBind_1648_, lean_object* v_k_1649_, lean_object* v___x_1650_, lean_object* v_inst_1651_, lean_object* v_oldTraces_1652_){
_start:
{
lean_object* v_tryCatch_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___f_1656_; lean_object* v___f_1657_; lean_object* v___f_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; uint8_t v___x_1663_; 
v_tryCatch_1653_ = lean_ctor_get(v_always_1635_, 1);
lean_inc(v_tryCatch_1653_);
v___x_1654_ = lean_box(v_collapsed_1642_);
v___x_1655_ = lean_box(v_clsEnabled_1645_);
lean_inc_ref(v_opts_1644_);
v___f_1656_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_1656_, 0, v_inst_1636_);
lean_closure_set(v___f_1656_, 1, v_inst_1637_);
lean_closure_set(v___f_1656_, 2, v_inst_1638_);
lean_closure_set(v___f_1656_, 3, v_inst_1639_);
lean_closure_set(v___f_1656_, 4, v_always_1635_);
lean_closure_set(v___f_1656_, 5, v_inst_1640_);
lean_closure_set(v___f_1656_, 6, v_cls_1641_);
lean_closure_set(v___f_1656_, 7, v___x_1654_);
lean_closure_set(v___f_1656_, 8, v_tag_1643_);
lean_closure_set(v___f_1656_, 9, v_opts_1644_);
lean_closure_set(v___f_1656_, 10, v___x_1655_);
lean_closure_set(v___f_1656_, 11, v_oldTraces_1652_);
lean_closure_set(v___f_1656_, 12, v_msg_1646_);
lean_inc_n(v_toPure_1647_, 2);
v___f_1657_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1657_, 0, v_toPure_1647_);
v___f_1658_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1658_, 0, v_toPure_1647_);
lean_inc(v_toBind_1648_);
v___x_1659_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v_k_1649_, v___f_1658_);
v___x_1660_ = lean_apply_3(v_tryCatch_1653_, lean_box(0), v___x_1659_, v___f_1657_);
v___x_1661_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1662_ = l_Lean_Option_get___redArg(v___x_1650_, v_opts_1644_, v___x_1661_);
lean_dec_ref(v_opts_1644_);
v___x_1663_ = lean_unbox(v___x_1662_);
lean_dec(v___x_1662_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___f_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1664_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1665_ = lean_apply_2(v_inst_1651_, lean_box(0), v___x_1664_);
lean_inc(v___x_1665_);
lean_inc_n(v_toBind_1648_, 2);
v___f_1666_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1666_, 0, v_toPure_1647_);
lean_closure_set(v___f_1666_, 1, v_toBind_1648_);
lean_closure_set(v___f_1666_, 2, v___x_1665_);
lean_closure_set(v___f_1666_, 3, v___x_1660_);
v___x_1667_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v___x_1665_, v___f_1666_);
v___x_1668_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v___x_1667_, v___f_1656_);
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___f_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1669_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1670_ = lean_apply_2(v_inst_1651_, lean_box(0), v___x_1669_);
lean_inc(v___x_1670_);
lean_inc_n(v_toBind_1648_, 2);
v___f_1671_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_1671_, 0, v_toPure_1647_);
lean_closure_set(v___f_1671_, 1, v_toBind_1648_);
lean_closure_set(v___f_1671_, 2, v___x_1670_);
lean_closure_set(v___f_1671_, 3, v___x_1660_);
v___x_1672_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v___x_1670_, v___f_1671_);
v___x_1673_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v___x_1672_, v___f_1656_);
return v___x_1673_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_always_1674_ = _args[0];
lean_object* v_inst_1675_ = _args[1];
lean_object* v_inst_1676_ = _args[2];
lean_object* v_inst_1677_ = _args[3];
lean_object* v_inst_1678_ = _args[4];
lean_object* v_inst_1679_ = _args[5];
lean_object* v_cls_1680_ = _args[6];
lean_object* v_collapsed_1681_ = _args[7];
lean_object* v_tag_1682_ = _args[8];
lean_object* v_opts_1683_ = _args[9];
lean_object* v_clsEnabled_1684_ = _args[10];
lean_object* v_msg_1685_ = _args[11];
lean_object* v_toPure_1686_ = _args[12];
lean_object* v_toBind_1687_ = _args[13];
lean_object* v_k_1688_ = _args[14];
lean_object* v___x_1689_ = _args[15];
lean_object* v_inst_1690_ = _args[16];
lean_object* v_oldTraces_1691_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_1692_; uint8_t v_clsEnabled_boxed_1693_; lean_object* v_res_1694_; 
v_collapsed_boxed_1692_ = lean_unbox(v_collapsed_1681_);
v_clsEnabled_boxed_1693_ = lean_unbox(v_clsEnabled_1684_);
v_res_1694_ = l_Lean_withTraceNode___redArg___lam__9(v_always_1674_, v_inst_1675_, v_inst_1676_, v_inst_1677_, v_inst_1678_, v_inst_1679_, v_cls_1680_, v_collapsed_boxed_1692_, v_tag_1682_, v_opts_1683_, v_clsEnabled_boxed_1693_, v_msg_1685_, v_toPure_1686_, v_toBind_1687_, v_k_1688_, v___x_1689_, v_inst_1690_, v_oldTraces_1691_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10(lean_object* v_always_1695_, lean_object* v_inst_1696_, lean_object* v_inst_1697_, lean_object* v_inst_1698_, lean_object* v_inst_1699_, lean_object* v_inst_1700_, lean_object* v_cls_1701_, uint8_t v_collapsed_1702_, lean_object* v_tag_1703_, lean_object* v_opts_1704_, lean_object* v_msg_1705_, lean_object* v_toPure_1706_, lean_object* v_toBind_1707_, lean_object* v_k_1708_, lean_object* v___x_1709_, lean_object* v_inst_1710_, uint8_t v_clsEnabled_1711_){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___f_1714_; 
v___x_1712_ = lean_box(v_collapsed_1702_);
v___x_1713_ = lean_box(v_clsEnabled_1711_);
lean_inc_ref(v___x_1709_);
lean_inc(v_k_1708_);
lean_inc(v_toBind_1707_);
lean_inc_ref(v_opts_1704_);
lean_inc_ref(v_inst_1697_);
lean_inc_ref(v_inst_1696_);
v___f_1714_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__9___boxed), 18, 17);
lean_closure_set(v___f_1714_, 0, v_always_1695_);
lean_closure_set(v___f_1714_, 1, v_inst_1696_);
lean_closure_set(v___f_1714_, 2, v_inst_1697_);
lean_closure_set(v___f_1714_, 3, v_inst_1698_);
lean_closure_set(v___f_1714_, 4, v_inst_1699_);
lean_closure_set(v___f_1714_, 5, v_inst_1700_);
lean_closure_set(v___f_1714_, 6, v_cls_1701_);
lean_closure_set(v___f_1714_, 7, v___x_1712_);
lean_closure_set(v___f_1714_, 8, v_tag_1703_);
lean_closure_set(v___f_1714_, 9, v_opts_1704_);
lean_closure_set(v___f_1714_, 10, v___x_1713_);
lean_closure_set(v___f_1714_, 11, v_msg_1705_);
lean_closure_set(v___f_1714_, 12, v_toPure_1706_);
lean_closure_set(v___f_1714_, 13, v_toBind_1707_);
lean_closure_set(v___f_1714_, 14, v_k_1708_);
lean_closure_set(v___f_1714_, 15, v___x_1709_);
lean_closure_set(v___f_1714_, 16, v_inst_1710_);
if (v_clsEnabled_1711_ == 0)
{
lean_object* v___x_1718_; lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1718_ = l_Lean_trace_profiler;
v___x_1719_ = l_Lean_Option_get___redArg(v___x_1709_, v_opts_1704_, v___x_1718_);
lean_dec_ref(v_opts_1704_);
v___x_1720_ = lean_unbox(v___x_1719_);
lean_dec(v___x_1719_);
if (v___x_1720_ == 0)
{
lean_dec_ref(v___f_1714_);
lean_dec(v_toBind_1707_);
lean_dec_ref(v_inst_1697_);
lean_dec_ref(v_inst_1696_);
return v_k_1708_;
}
else
{
lean_dec(v_k_1708_);
goto v___jp_1715_;
}
}
else
{
lean_dec_ref(v___x_1709_);
lean_dec(v_k_1708_);
lean_dec_ref(v_opts_1704_);
goto v___jp_1715_;
}
v___jp_1715_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1716_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_1696_, v_inst_1697_);
v___x_1717_ = lean_apply_4(v_toBind_1707_, lean_box(0), lean_box(0), v___x_1716_, v___f_1714_);
return v___x_1717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_1721_ = _args[0];
lean_object* v_inst_1722_ = _args[1];
lean_object* v_inst_1723_ = _args[2];
lean_object* v_inst_1724_ = _args[3];
lean_object* v_inst_1725_ = _args[4];
lean_object* v_inst_1726_ = _args[5];
lean_object* v_cls_1727_ = _args[6];
lean_object* v_collapsed_1728_ = _args[7];
lean_object* v_tag_1729_ = _args[8];
lean_object* v_opts_1730_ = _args[9];
lean_object* v_msg_1731_ = _args[10];
lean_object* v_toPure_1732_ = _args[11];
lean_object* v_toBind_1733_ = _args[12];
lean_object* v_k_1734_ = _args[13];
lean_object* v___x_1735_ = _args[14];
lean_object* v_inst_1736_ = _args[15];
lean_object* v_clsEnabled_1737_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1738_; uint8_t v_clsEnabled_boxed_1739_; lean_object* v_res_1740_; 
v_collapsed_boxed_1738_ = lean_unbox(v_collapsed_1728_);
v_clsEnabled_boxed_1739_ = lean_unbox(v_clsEnabled_1737_);
v_res_1740_ = l_Lean_withTraceNode___redArg___lam__10(v_always_1721_, v_inst_1722_, v_inst_1723_, v_inst_1724_, v_inst_1725_, v_inst_1726_, v_cls_1727_, v_collapsed_boxed_1738_, v_tag_1729_, v_opts_1730_, v_msg_1731_, v_toPure_1732_, v_toBind_1733_, v_k_1734_, v___x_1735_, v_inst_1736_, v_clsEnabled_boxed_1739_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13(lean_object* v_k_1741_, lean_object* v_inst_1742_, lean_object* v_toApplicative_1743_, lean_object* v_always_1744_, lean_object* v_inst_1745_, lean_object* v_inst_1746_, lean_object* v_inst_1747_, lean_object* v_inst_1748_, lean_object* v_cls_1749_, uint8_t v_collapsed_1750_, lean_object* v_tag_1751_, lean_object* v_msg_1752_, lean_object* v_toBind_1753_, lean_object* v___x_1754_, lean_object* v_inst_1755_, lean_object* v_inst_1756_, lean_object* v_opts_1757_){
_start:
{
uint8_t v_hasTrace_1758_; 
v_hasTrace_1758_ = lean_ctor_get_uint8(v_opts_1757_, sizeof(void*)*1);
if (v_hasTrace_1758_ == 0)
{
lean_dec_ref(v_opts_1757_);
lean_dec(v_inst_1756_);
lean_dec(v_inst_1755_);
lean_dec_ref(v___x_1754_);
lean_dec(v_toBind_1753_);
lean_dec(v_msg_1752_);
lean_dec_ref(v_tag_1751_);
lean_dec(v_cls_1749_);
lean_dec_ref(v_inst_1748_);
lean_dec(v_inst_1747_);
lean_dec_ref(v_inst_1746_);
lean_dec_ref(v_inst_1745_);
lean_dec_ref(v_always_1744_);
lean_dec_ref(v_toApplicative_1743_);
lean_dec_ref(v_inst_1742_);
return v_k_1741_;
}
else
{
lean_object* v_getInheritedTraceOptions_1759_; lean_object* v_toPure_1760_; lean_object* v___x_1761_; lean_object* v___f_1762_; lean_object* v___f_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_getInheritedTraceOptions_1759_ = lean_ctor_get(v_inst_1742_, 2);
lean_inc(v_getInheritedTraceOptions_1759_);
v_toPure_1760_ = lean_ctor_get(v_toApplicative_1743_, 1);
lean_inc_n(v_toPure_1760_, 2);
lean_dec_ref(v_toApplicative_1743_);
v___x_1761_ = lean_box(v_collapsed_1750_);
lean_inc_n(v_toBind_1753_, 3);
lean_inc(v_cls_1749_);
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__10___boxed), 17, 16);
lean_closure_set(v___f_1762_, 0, v_always_1744_);
lean_closure_set(v___f_1762_, 1, v_inst_1745_);
lean_closure_set(v___f_1762_, 2, v_inst_1742_);
lean_closure_set(v___f_1762_, 3, v_inst_1746_);
lean_closure_set(v___f_1762_, 4, v_inst_1747_);
lean_closure_set(v___f_1762_, 5, v_inst_1748_);
lean_closure_set(v___f_1762_, 6, v_cls_1749_);
lean_closure_set(v___f_1762_, 7, v___x_1761_);
lean_closure_set(v___f_1762_, 8, v_tag_1751_);
lean_closure_set(v___f_1762_, 9, v_opts_1757_);
lean_closure_set(v___f_1762_, 10, v_msg_1752_);
lean_closure_set(v___f_1762_, 11, v_toPure_1760_);
lean_closure_set(v___f_1762_, 12, v_toBind_1753_);
lean_closure_set(v___f_1762_, 13, v_k_1741_);
lean_closure_set(v___f_1762_, 14, v___x_1754_);
lean_closure_set(v___f_1762_, 15, v_inst_1755_);
v___f_1763_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1763_, 0, v_toPure_1760_);
lean_closure_set(v___f_1763_, 1, v_cls_1749_);
lean_closure_set(v___f_1763_, 2, v_toBind_1753_);
lean_closure_set(v___f_1763_, 3, v_inst_1756_);
v___x_1764_ = lean_apply_4(v_toBind_1753_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1759_, v___f_1763_);
v___x_1765_ = lean_apply_4(v_toBind_1753_, lean_box(0), lean_box(0), v___x_1764_, v___f_1762_);
return v___x_1765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_1766_ = _args[0];
lean_object* v_inst_1767_ = _args[1];
lean_object* v_toApplicative_1768_ = _args[2];
lean_object* v_always_1769_ = _args[3];
lean_object* v_inst_1770_ = _args[4];
lean_object* v_inst_1771_ = _args[5];
lean_object* v_inst_1772_ = _args[6];
lean_object* v_inst_1773_ = _args[7];
lean_object* v_cls_1774_ = _args[8];
lean_object* v_collapsed_1775_ = _args[9];
lean_object* v_tag_1776_ = _args[10];
lean_object* v_msg_1777_ = _args[11];
lean_object* v_toBind_1778_ = _args[12];
lean_object* v___x_1779_ = _args[13];
lean_object* v_inst_1780_ = _args[14];
lean_object* v_inst_1781_ = _args[15];
lean_object* v_opts_1782_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1783_; lean_object* v_res_1784_; 
v_collapsed_boxed_1783_ = lean_unbox(v_collapsed_1775_);
v_res_1784_ = l_Lean_withTraceNode___redArg___lam__13(v_k_1766_, v_inst_1767_, v_toApplicative_1768_, v_always_1769_, v_inst_1770_, v_inst_1771_, v_inst_1772_, v_inst_1773_, v_cls_1774_, v_collapsed_boxed_1783_, v_tag_1776_, v_msg_1777_, v_toBind_1778_, v___x_1779_, v_inst_1780_, v_inst_1781_, v_opts_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object* v_inst_1785_, lean_object* v_inst_1786_, lean_object* v_inst_1787_, lean_object* v_inst_1788_, lean_object* v_inst_1789_, lean_object* v_always_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_cls_1793_, lean_object* v_msg_1794_, lean_object* v_k_1795_, uint8_t v_collapsed_1796_, lean_object* v_tag_1797_){
_start:
{
lean_object* v___x_1798_; lean_object* v_toApplicative_1799_; lean_object* v_toBind_1800_; lean_object* v___x_1801_; lean_object* v___f_1802_; lean_object* v___x_1803_; 
v___x_1798_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1799_ = lean_ctor_get(v_inst_1785_, 0);
lean_inc_ref(v_toApplicative_1799_);
v_toBind_1800_ = lean_ctor_get(v_inst_1785_, 1);
lean_inc_n(v_toBind_1800_, 2);
v___x_1801_ = lean_box(v_collapsed_1796_);
lean_inc(v_inst_1789_);
v___f_1802_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_1802_, 0, v_k_1795_);
lean_closure_set(v___f_1802_, 1, v_inst_1786_);
lean_closure_set(v___f_1802_, 2, v_toApplicative_1799_);
lean_closure_set(v___f_1802_, 3, v_always_1790_);
lean_closure_set(v___f_1802_, 4, v_inst_1785_);
lean_closure_set(v___f_1802_, 5, v_inst_1787_);
lean_closure_set(v___f_1802_, 6, v_inst_1788_);
lean_closure_set(v___f_1802_, 7, v_inst_1792_);
lean_closure_set(v___f_1802_, 8, v_cls_1793_);
lean_closure_set(v___f_1802_, 9, v___x_1801_);
lean_closure_set(v___f_1802_, 10, v_tag_1797_);
lean_closure_set(v___f_1802_, 11, v_msg_1794_);
lean_closure_set(v___f_1802_, 12, v_toBind_1800_);
lean_closure_set(v___f_1802_, 13, v___x_1798_);
lean_closure_set(v___f_1802_, 14, v_inst_1791_);
lean_closure_set(v___f_1802_, 15, v_inst_1789_);
v___x_1803_ = lean_apply_4(v_toBind_1800_, lean_box(0), lean_box(0), v_inst_1789_, v___f_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___boxed(lean_object* v_inst_1804_, lean_object* v_inst_1805_, lean_object* v_inst_1806_, lean_object* v_inst_1807_, lean_object* v_inst_1808_, lean_object* v_always_1809_, lean_object* v_inst_1810_, lean_object* v_inst_1811_, lean_object* v_cls_1812_, lean_object* v_msg_1813_, lean_object* v_k_1814_, lean_object* v_collapsed_1815_, lean_object* v_tag_1816_){
_start:
{
uint8_t v_collapsed_boxed_1817_; lean_object* v_res_1818_; 
v_collapsed_boxed_1817_ = lean_unbox(v_collapsed_1815_);
v_res_1818_ = l_Lean_withTraceNode___redArg(v_inst_1804_, v_inst_1805_, v_inst_1806_, v_inst_1807_, v_inst_1808_, v_always_1809_, v_inst_1810_, v_inst_1811_, v_cls_1812_, v_msg_1813_, v_k_1814_, v_collapsed_boxed_1817_, v_tag_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode(lean_object* v_00_u03b1_1819_, lean_object* v_m_1820_, lean_object* v_inst_1821_, lean_object* v_inst_1822_, lean_object* v_inst_1823_, lean_object* v_inst_1824_, lean_object* v_inst_1825_, lean_object* v_00_u03b5_1826_, lean_object* v_always_1827_, lean_object* v_inst_1828_, lean_object* v_inst_1829_, lean_object* v_cls_1830_, lean_object* v_msg_1831_, lean_object* v_k_1832_, uint8_t v_collapsed_1833_, lean_object* v_tag_1834_){
_start:
{
lean_object* v___x_1835_; lean_object* v_toApplicative_1836_; lean_object* v_toBind_1837_; lean_object* v___x_1838_; lean_object* v___f_1839_; lean_object* v___x_1840_; 
v___x_1835_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1836_ = lean_ctor_get(v_inst_1821_, 0);
lean_inc_ref(v_toApplicative_1836_);
v_toBind_1837_ = lean_ctor_get(v_inst_1821_, 1);
lean_inc_n(v_toBind_1837_, 2);
v___x_1838_ = lean_box(v_collapsed_1833_);
lean_inc(v_inst_1825_);
v___f_1839_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_1839_, 0, v_k_1832_);
lean_closure_set(v___f_1839_, 1, v_inst_1822_);
lean_closure_set(v___f_1839_, 2, v_toApplicative_1836_);
lean_closure_set(v___f_1839_, 3, v_always_1827_);
lean_closure_set(v___f_1839_, 4, v_inst_1821_);
lean_closure_set(v___f_1839_, 5, v_inst_1823_);
lean_closure_set(v___f_1839_, 6, v_inst_1824_);
lean_closure_set(v___f_1839_, 7, v_inst_1829_);
lean_closure_set(v___f_1839_, 8, v_cls_1830_);
lean_closure_set(v___f_1839_, 9, v___x_1838_);
lean_closure_set(v___f_1839_, 10, v_tag_1834_);
lean_closure_set(v___f_1839_, 11, v_msg_1831_);
lean_closure_set(v___f_1839_, 12, v_toBind_1837_);
lean_closure_set(v___f_1839_, 13, v___x_1835_);
lean_closure_set(v___f_1839_, 14, v_inst_1828_);
lean_closure_set(v___f_1839_, 15, v_inst_1825_);
v___x_1840_ = lean_apply_4(v_toBind_1837_, lean_box(0), lean_box(0), v_inst_1825_, v___f_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object* v_00_u03b1_1841_, lean_object* v_m_1842_, lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_inst_1845_, lean_object* v_inst_1846_, lean_object* v_inst_1847_, lean_object* v_00_u03b5_1848_, lean_object* v_always_1849_, lean_object* v_inst_1850_, lean_object* v_inst_1851_, lean_object* v_cls_1852_, lean_object* v_msg_1853_, lean_object* v_k_1854_, lean_object* v_collapsed_1855_, lean_object* v_tag_1856_){
_start:
{
uint8_t v_collapsed_boxed_1857_; lean_object* v_res_1858_; 
v_collapsed_boxed_1857_ = lean_unbox(v_collapsed_1855_);
v_res_1858_ = l_Lean_withTraceNode(v_00_u03b1_1841_, v_m_1842_, v_inst_1843_, v_inst_1844_, v_inst_1845_, v_inst_1846_, v_inst_1847_, v_00_u03b5_1848_, v_always_1849_, v_inst_1850_, v_inst_1851_, v_cls_1852_, v_msg_1853_, v_k_1854_, v_collapsed_boxed_1857_, v_tag_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object* v_self_1859_){
_start:
{
lean_object* v_fst_1860_; 
v_fst_1860_ = lean_ctor_get(v_self_1859_, 0);
lean_inc(v_fst_1860_);
return v_fst_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object* v_self_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lean_withTraceNode_x27___redArg___lam__0(v_self_1861_);
lean_dec_ref(v_self_1861_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object* v_toPure_1863_, lean_object* v_x_1864_){
_start:
{
if (lean_obj_tag(v_x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_a_1865_ = lean_ctor_get(v_x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v_x_1864_, 1);
v___x_1866_ = l_Lean_Exception_toMessageData(v_a_1865_);
v___x_1867_ = lean_apply_2(v_toPure_1863_, lean_box(0), v___x_1866_);
return v___x_1867_;
}
else
{
lean_object* v_a_1868_; lean_object* v_snd_1869_; lean_object* v___x_1870_; 
v_a_1868_ = lean_ctor_get(v_x_1864_, 0);
lean_inc(v_a_1868_);
lean_dec_ref_known(v_x_1864_, 1);
v_snd_1869_ = lean_ctor_get(v_a_1868_, 1);
lean_inc(v_snd_1869_);
lean_dec(v_a_1868_);
v___x_1870_ = lean_apply_2(v_toPure_1863_, lean_box(0), v_snd_1869_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object* v_toPure_1871_, lean_object* v_ex_1872_){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v_ex_1872_);
v___x_1874_ = lean_apply_2(v_toPure_1871_, lean_box(0), v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object* v_toPure_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_a_1876_);
v___x_1878_ = lean_apply_2(v_toPure_1875_, lean_box(0), v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v___f_1884_, lean_object* v_cls_1885_, uint8_t v_collapsed_1886_, lean_object* v_tag_1887_, lean_object* v_opts_1888_, uint8_t v_clsEnabled_1889_, lean_object* v_oldTraces_1890_, lean_object* v_msg_1891_, lean_object* v_resStartStop_1892_){
_start:
{
lean_object* v___x_1893_; 
v___x_1893_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1879_, v_inst_1880_, v_inst_1881_, v_inst_1882_, v_inst_1883_, v___f_1884_, v_cls_1885_, v_collapsed_1886_, v_tag_1887_, v_opts_1888_, v_clsEnabled_1889_, v_oldTraces_1890_, v_msg_1891_, v_resStartStop_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3___boxed(lean_object* v_inst_1894_, lean_object* v_inst_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_, lean_object* v_inst_1898_, lean_object* v___f_1899_, lean_object* v_cls_1900_, lean_object* v_collapsed_1901_, lean_object* v_tag_1902_, lean_object* v_opts_1903_, lean_object* v_clsEnabled_1904_, lean_object* v_oldTraces_1905_, lean_object* v_msg_1906_, lean_object* v_resStartStop_1907_){
_start:
{
uint8_t v_collapsed_boxed_1908_; uint8_t v_clsEnabled_boxed_1909_; lean_object* v_res_1910_; 
v_collapsed_boxed_1908_ = lean_unbox(v_collapsed_1901_);
v_clsEnabled_boxed_1909_ = lean_unbox(v_clsEnabled_1904_);
v_res_1910_ = l_Lean_withTraceNode_x27___redArg___lam__3(v_inst_1894_, v_inst_1895_, v_inst_1896_, v_inst_1897_, v_inst_1898_, v___f_1899_, v_cls_1900_, v_collapsed_boxed_1908_, v_tag_1902_, v_opts_1903_, v_clsEnabled_boxed_1909_, v_oldTraces_1905_, v_msg_1906_, v_resStartStop_1907_);
lean_dec_ref(v_opts_1903_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object* v_start_1911_, lean_object* v_a_1912_, lean_object* v_toPure_1913_, lean_object* v_stop_1914_){
_start:
{
double v___x_1915_; double v___x_1916_; double v___x_1917_; double v___x_1918_; double v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1915_ = lean_float_of_nat(v_start_1911_);
v___x_1916_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1917_ = lean_float_div(v___x_1915_, v___x_1916_);
v___x_1918_ = lean_float_of_nat(v_stop_1914_);
v___x_1919_ = lean_float_div(v___x_1918_, v___x_1916_);
v___x_1920_ = lean_box_float(v___x_1917_);
v___x_1921_ = lean_box_float(v___x_1919_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1920_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_a_1912_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = lean_apply_2(v_toPure_1913_, lean_box(0), v___x_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object* v_start_1925_, lean_object* v_toPure_1926_, lean_object* v_toBind_1927_, lean_object* v___x_1928_, lean_object* v_a_1929_){
_start:
{
lean_object* v___f_1930_; lean_object* v___x_1931_; 
v___f_1930_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__5), 4, 3);
lean_closure_set(v___f_1930_, 0, v_start_1925_);
lean_closure_set(v___f_1930_, 1, v_a_1929_);
lean_closure_set(v___f_1930_, 2, v_toPure_1926_);
v___x_1931_ = lean_apply_4(v_toBind_1927_, lean_box(0), lean_box(0), v___x_1928_, v___f_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__7(lean_object* v_toPure_1932_, lean_object* v_toBind_1933_, lean_object* v___x_1934_, lean_object* v___x_1935_, lean_object* v_start_1936_){
_start:
{
lean_object* v___f_1937_; lean_object* v___x_1938_; 
lean_inc(v_toBind_1933_);
v___f_1937_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__6), 5, 4);
lean_closure_set(v___f_1937_, 0, v_start_1936_);
lean_closure_set(v___f_1937_, 1, v_toPure_1932_);
lean_closure_set(v___f_1937_, 2, v_toBind_1933_);
lean_closure_set(v___f_1937_, 3, v___x_1934_);
v___x_1938_ = lean_apply_4(v_toBind_1933_, lean_box(0), lean_box(0), v___x_1935_, v___f_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__8(lean_object* v_start_1939_, lean_object* v_a_1940_, lean_object* v_toPure_1941_, lean_object* v_stop_1942_){
_start:
{
double v___x_1943_; double v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1943_ = lean_float_of_nat(v_start_1939_);
v___x_1944_ = lean_float_of_nat(v_stop_1942_);
v___x_1945_ = lean_box_float(v___x_1943_);
v___x_1946_ = lean_box_float(v___x_1944_);
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1945_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v_a_1940_);
lean_ctor_set(v___x_1948_, 1, v___x_1947_);
v___x_1949_ = lean_apply_2(v_toPure_1941_, lean_box(0), v___x_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__9(lean_object* v_start_1950_, lean_object* v_toPure_1951_, lean_object* v_toBind_1952_, lean_object* v___x_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v___f_1955_; lean_object* v___x_1956_; 
v___f_1955_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1955_, 0, v_start_1950_);
lean_closure_set(v___f_1955_, 1, v_a_1954_);
lean_closure_set(v___f_1955_, 2, v_toPure_1951_);
v___x_1956_ = lean_apply_4(v_toBind_1952_, lean_box(0), lean_box(0), v___x_1953_, v___f_1955_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__10(lean_object* v_toPure_1957_, lean_object* v_toBind_1958_, lean_object* v___x_1959_, lean_object* v___x_1960_, lean_object* v_start_1961_){
_start:
{
lean_object* v___f_1962_; lean_object* v___x_1963_; 
lean_inc(v_toBind_1958_);
v___f_1962_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__9), 5, 4);
lean_closure_set(v___f_1962_, 0, v_start_1961_);
lean_closure_set(v___f_1962_, 1, v_toPure_1957_);
lean_closure_set(v___f_1962_, 2, v_toBind_1958_);
lean_closure_set(v___f_1962_, 3, v___x_1959_);
v___x_1963_ = lean_apply_4(v_toBind_1958_, lean_box(0), lean_box(0), v___x_1960_, v___f_1962_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11(lean_object* v_inst_1964_, lean_object* v_inst_1965_, lean_object* v_inst_1966_, lean_object* v_inst_1967_, lean_object* v_inst_1968_, lean_object* v___f_1969_, lean_object* v_cls_1970_, uint8_t v_collapsed_1971_, lean_object* v_tag_1972_, lean_object* v_opts_1973_, uint8_t v_clsEnabled_1974_, lean_object* v_msg_1975_, lean_object* v_toBind_1976_, lean_object* v_k_1977_, lean_object* v___f_1978_, lean_object* v___f_1979_, lean_object* v___x_1980_, lean_object* v_inst_1981_, lean_object* v_toPure_1982_, lean_object* v_oldTraces_1983_){
_start:
{
lean_object* v_tryCatch_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___f_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; 
v_tryCatch_1984_ = lean_ctor_get(v_inst_1964_, 1);
lean_inc(v_tryCatch_1984_);
v___x_1985_ = lean_box(v_collapsed_1971_);
v___x_1986_ = lean_box(v_clsEnabled_1974_);
lean_inc_ref(v_opts_1973_);
v___f_1987_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__3___boxed), 14, 13);
lean_closure_set(v___f_1987_, 0, v_inst_1965_);
lean_closure_set(v___f_1987_, 1, v_inst_1966_);
lean_closure_set(v___f_1987_, 2, v_inst_1967_);
lean_closure_set(v___f_1987_, 3, v_inst_1968_);
lean_closure_set(v___f_1987_, 4, v_inst_1964_);
lean_closure_set(v___f_1987_, 5, v___f_1969_);
lean_closure_set(v___f_1987_, 6, v_cls_1970_);
lean_closure_set(v___f_1987_, 7, v___x_1985_);
lean_closure_set(v___f_1987_, 8, v_tag_1972_);
lean_closure_set(v___f_1987_, 9, v_opts_1973_);
lean_closure_set(v___f_1987_, 10, v___x_1986_);
lean_closure_set(v___f_1987_, 11, v_oldTraces_1983_);
lean_closure_set(v___f_1987_, 12, v_msg_1975_);
lean_inc(v_toBind_1976_);
v___x_1988_ = lean_apply_4(v_toBind_1976_, lean_box(0), lean_box(0), v_k_1977_, v___f_1978_);
v___x_1989_ = lean_apply_3(v_tryCatch_1984_, lean_box(0), v___x_1988_, v___f_1979_);
v___x_1990_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1991_ = l_Lean_Option_get___redArg(v___x_1980_, v_opts_1973_, v___x_1990_);
lean_dec_ref(v_opts_1973_);
v___x_1992_ = lean_unbox(v___x_1991_);
lean_dec(v___x_1991_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___f_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1993_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1994_ = lean_apply_2(v_inst_1981_, lean_box(0), v___x_1993_);
lean_inc(v___x_1994_);
lean_inc_n(v_toBind_1976_, 2);
v___f_1995_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__7), 5, 4);
lean_closure_set(v___f_1995_, 0, v_toPure_1982_);
lean_closure_set(v___f_1995_, 1, v_toBind_1976_);
lean_closure_set(v___f_1995_, 2, v___x_1994_);
lean_closure_set(v___f_1995_, 3, v___x_1989_);
v___x_1996_ = lean_apply_4(v_toBind_1976_, lean_box(0), lean_box(0), v___x_1994_, v___f_1995_);
v___x_1997_ = lean_apply_4(v_toBind_1976_, lean_box(0), lean_box(0), v___x_1996_, v___f_1987_);
return v___x_1997_;
}
else
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___f_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_1998_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1999_ = lean_apply_2(v_inst_1981_, lean_box(0), v___x_1998_);
lean_inc(v___x_1999_);
lean_inc_n(v_toBind_1976_, 2);
v___f_2000_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__10), 5, 4);
lean_closure_set(v___f_2000_, 0, v_toPure_1982_);
lean_closure_set(v___f_2000_, 1, v_toBind_1976_);
lean_closure_set(v___f_2000_, 2, v___x_1999_);
lean_closure_set(v___f_2000_, 3, v___x_1989_);
v___x_2001_ = lean_apply_4(v_toBind_1976_, lean_box(0), lean_box(0), v___x_1999_, v___f_2000_);
v___x_2002_ = lean_apply_4(v_toBind_1976_, lean_box(0), lean_box(0), v___x_2001_, v___f_1987_);
return v___x_2002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_inst_2003_ = _args[0];
lean_object* v_inst_2004_ = _args[1];
lean_object* v_inst_2005_ = _args[2];
lean_object* v_inst_2006_ = _args[3];
lean_object* v_inst_2007_ = _args[4];
lean_object* v___f_2008_ = _args[5];
lean_object* v_cls_2009_ = _args[6];
lean_object* v_collapsed_2010_ = _args[7];
lean_object* v_tag_2011_ = _args[8];
lean_object* v_opts_2012_ = _args[9];
lean_object* v_clsEnabled_2013_ = _args[10];
lean_object* v_msg_2014_ = _args[11];
lean_object* v_toBind_2015_ = _args[12];
lean_object* v_k_2016_ = _args[13];
lean_object* v___f_2017_ = _args[14];
lean_object* v___f_2018_ = _args[15];
lean_object* v___x_2019_ = _args[16];
lean_object* v_inst_2020_ = _args[17];
lean_object* v_toPure_2021_ = _args[18];
lean_object* v_oldTraces_2022_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_2023_; uint8_t v_clsEnabled_boxed_2024_; lean_object* v_res_2025_; 
v_collapsed_boxed_2023_ = lean_unbox(v_collapsed_2010_);
v_clsEnabled_boxed_2024_ = lean_unbox(v_clsEnabled_2013_);
v_res_2025_ = l_Lean_withTraceNode_x27___redArg___lam__11(v_inst_2003_, v_inst_2004_, v_inst_2005_, v_inst_2006_, v_inst_2007_, v___f_2008_, v_cls_2009_, v_collapsed_boxed_2023_, v_tag_2011_, v_opts_2012_, v_clsEnabled_boxed_2024_, v_msg_2014_, v_toBind_2015_, v_k_2016_, v___f_2017_, v___f_2018_, v___x_2019_, v_inst_2020_, v_toPure_2021_, v_oldTraces_2022_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12(lean_object* v_inst_2026_, lean_object* v_inst_2027_, lean_object* v_inst_2028_, lean_object* v_inst_2029_, lean_object* v_inst_2030_, lean_object* v___f_2031_, lean_object* v_cls_2032_, uint8_t v_collapsed_2033_, lean_object* v_tag_2034_, lean_object* v_opts_2035_, lean_object* v_msg_2036_, lean_object* v_toBind_2037_, lean_object* v_k_2038_, lean_object* v___f_2039_, lean_object* v___f_2040_, lean_object* v___x_2041_, lean_object* v_inst_2042_, lean_object* v_toPure_2043_, uint8_t v_clsEnabled_2044_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___f_2047_; 
v___x_2045_ = lean_box(v_collapsed_2033_);
v___x_2046_ = lean_box(v_clsEnabled_2044_);
lean_inc_ref(v___x_2041_);
lean_inc(v_k_2038_);
lean_inc(v_toBind_2037_);
lean_inc_ref(v_opts_2035_);
lean_inc_ref(v_inst_2028_);
lean_inc_ref(v_inst_2027_);
v___f_2047_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__11___boxed), 20, 19);
lean_closure_set(v___f_2047_, 0, v_inst_2026_);
lean_closure_set(v___f_2047_, 1, v_inst_2027_);
lean_closure_set(v___f_2047_, 2, v_inst_2028_);
lean_closure_set(v___f_2047_, 3, v_inst_2029_);
lean_closure_set(v___f_2047_, 4, v_inst_2030_);
lean_closure_set(v___f_2047_, 5, v___f_2031_);
lean_closure_set(v___f_2047_, 6, v_cls_2032_);
lean_closure_set(v___f_2047_, 7, v___x_2045_);
lean_closure_set(v___f_2047_, 8, v_tag_2034_);
lean_closure_set(v___f_2047_, 9, v_opts_2035_);
lean_closure_set(v___f_2047_, 10, v___x_2046_);
lean_closure_set(v___f_2047_, 11, v_msg_2036_);
lean_closure_set(v___f_2047_, 12, v_toBind_2037_);
lean_closure_set(v___f_2047_, 13, v_k_2038_);
lean_closure_set(v___f_2047_, 14, v___f_2039_);
lean_closure_set(v___f_2047_, 15, v___f_2040_);
lean_closure_set(v___f_2047_, 16, v___x_2041_);
lean_closure_set(v___f_2047_, 17, v_inst_2042_);
lean_closure_set(v___f_2047_, 18, v_toPure_2043_);
if (v_clsEnabled_2044_ == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v___x_2051_ = l_Lean_trace_profiler;
v___x_2052_ = l_Lean_Option_get___redArg(v___x_2041_, v_opts_2035_, v___x_2051_);
lean_dec_ref(v_opts_2035_);
v___x_2053_ = lean_unbox(v___x_2052_);
lean_dec(v___x_2052_);
if (v___x_2053_ == 0)
{
lean_dec_ref(v___f_2047_);
lean_dec(v_toBind_2037_);
lean_dec_ref(v_inst_2028_);
lean_dec_ref(v_inst_2027_);
return v_k_2038_;
}
else
{
lean_dec(v_k_2038_);
goto v___jp_2048_;
}
}
else
{
lean_dec_ref(v___x_2041_);
lean_dec(v_k_2038_);
lean_dec_ref(v_opts_2035_);
goto v___jp_2048_;
}
v___jp_2048_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_2027_, v_inst_2028_);
v___x_2050_ = lean_apply_4(v_toBind_2037_, lean_box(0), lean_box(0), v___x_2049_, v___f_2047_);
return v___x_2050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_inst_2054_ = _args[0];
lean_object* v_inst_2055_ = _args[1];
lean_object* v_inst_2056_ = _args[2];
lean_object* v_inst_2057_ = _args[3];
lean_object* v_inst_2058_ = _args[4];
lean_object* v___f_2059_ = _args[5];
lean_object* v_cls_2060_ = _args[6];
lean_object* v_collapsed_2061_ = _args[7];
lean_object* v_tag_2062_ = _args[8];
lean_object* v_opts_2063_ = _args[9];
lean_object* v_msg_2064_ = _args[10];
lean_object* v_toBind_2065_ = _args[11];
lean_object* v_k_2066_ = _args[12];
lean_object* v___f_2067_ = _args[13];
lean_object* v___f_2068_ = _args[14];
lean_object* v___x_2069_ = _args[15];
lean_object* v_inst_2070_ = _args[16];
lean_object* v_toPure_2071_ = _args[17];
lean_object* v_clsEnabled_2072_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2073_; uint8_t v_clsEnabled_boxed_2074_; lean_object* v_res_2075_; 
v_collapsed_boxed_2073_ = lean_unbox(v_collapsed_2061_);
v_clsEnabled_boxed_2074_ = lean_unbox(v_clsEnabled_2072_);
v_res_2075_ = l_Lean_withTraceNode_x27___redArg___lam__12(v_inst_2054_, v_inst_2055_, v_inst_2056_, v_inst_2057_, v_inst_2058_, v___f_2059_, v_cls_2060_, v_collapsed_boxed_2073_, v_tag_2062_, v_opts_2063_, v_msg_2064_, v_toBind_2065_, v_k_2066_, v___f_2067_, v___f_2068_, v___x_2069_, v_inst_2070_, v_toPure_2071_, v_clsEnabled_boxed_2074_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13(lean_object* v_k_2076_, lean_object* v_inst_2077_, lean_object* v_inst_2078_, lean_object* v_inst_2079_, lean_object* v_inst_2080_, lean_object* v_inst_2081_, lean_object* v___f_2082_, lean_object* v_cls_2083_, uint8_t v_collapsed_2084_, lean_object* v_tag_2085_, lean_object* v_msg_2086_, lean_object* v_toBind_2087_, lean_object* v___f_2088_, lean_object* v___f_2089_, lean_object* v___x_2090_, lean_object* v_inst_2091_, lean_object* v_toPure_2092_, lean_object* v___f_2093_, lean_object* v_opts_2094_){
_start:
{
uint8_t v_hasTrace_2095_; 
v_hasTrace_2095_ = lean_ctor_get_uint8(v_opts_2094_, sizeof(void*)*1);
if (v_hasTrace_2095_ == 0)
{
lean_dec_ref(v_opts_2094_);
lean_dec(v___f_2093_);
lean_dec(v_toPure_2092_);
lean_dec(v_inst_2091_);
lean_dec_ref(v___x_2090_);
lean_dec(v___f_2089_);
lean_dec(v___f_2088_);
lean_dec(v_toBind_2087_);
lean_dec(v_msg_2086_);
lean_dec_ref(v_tag_2085_);
lean_dec(v_cls_2083_);
lean_dec_ref(v___f_2082_);
lean_dec(v_inst_2081_);
lean_dec_ref(v_inst_2080_);
lean_dec_ref(v_inst_2079_);
lean_dec_ref(v_inst_2078_);
lean_dec_ref(v_inst_2077_);
return v_k_2076_;
}
else
{
lean_object* v_getInheritedTraceOptions_2096_; lean_object* v___x_2097_; lean_object* v___f_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v_getInheritedTraceOptions_2096_ = lean_ctor_get(v_inst_2077_, 2);
lean_inc(v_getInheritedTraceOptions_2096_);
v___x_2097_ = lean_box(v_collapsed_2084_);
lean_inc_n(v_toBind_2087_, 2);
v___f_2098_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_2098_, 0, v_inst_2078_);
lean_closure_set(v___f_2098_, 1, v_inst_2079_);
lean_closure_set(v___f_2098_, 2, v_inst_2077_);
lean_closure_set(v___f_2098_, 3, v_inst_2080_);
lean_closure_set(v___f_2098_, 4, v_inst_2081_);
lean_closure_set(v___f_2098_, 5, v___f_2082_);
lean_closure_set(v___f_2098_, 6, v_cls_2083_);
lean_closure_set(v___f_2098_, 7, v___x_2097_);
lean_closure_set(v___f_2098_, 8, v_tag_2085_);
lean_closure_set(v___f_2098_, 9, v_opts_2094_);
lean_closure_set(v___f_2098_, 10, v_msg_2086_);
lean_closure_set(v___f_2098_, 11, v_toBind_2087_);
lean_closure_set(v___f_2098_, 12, v_k_2076_);
lean_closure_set(v___f_2098_, 13, v___f_2088_);
lean_closure_set(v___f_2098_, 14, v___f_2089_);
lean_closure_set(v___f_2098_, 15, v___x_2090_);
lean_closure_set(v___f_2098_, 16, v_inst_2091_);
lean_closure_set(v___f_2098_, 17, v_toPure_2092_);
v___x_2099_ = lean_apply_4(v_toBind_2087_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2096_, v___f_2093_);
v___x_2100_ = lean_apply_4(v_toBind_2087_, lean_box(0), lean_box(0), v___x_2099_, v___f_2098_);
return v___x_2100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_2101_ = _args[0];
lean_object* v_inst_2102_ = _args[1];
lean_object* v_inst_2103_ = _args[2];
lean_object* v_inst_2104_ = _args[3];
lean_object* v_inst_2105_ = _args[4];
lean_object* v_inst_2106_ = _args[5];
lean_object* v___f_2107_ = _args[6];
lean_object* v_cls_2108_ = _args[7];
lean_object* v_collapsed_2109_ = _args[8];
lean_object* v_tag_2110_ = _args[9];
lean_object* v_msg_2111_ = _args[10];
lean_object* v_toBind_2112_ = _args[11];
lean_object* v___f_2113_ = _args[12];
lean_object* v___f_2114_ = _args[13];
lean_object* v___x_2115_ = _args[14];
lean_object* v_inst_2116_ = _args[15];
lean_object* v_toPure_2117_ = _args[16];
lean_object* v___f_2118_ = _args[17];
lean_object* v_opts_2119_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2120_; lean_object* v_res_2121_; 
v_collapsed_boxed_2120_ = lean_unbox(v_collapsed_2109_);
v_res_2121_ = l_Lean_withTraceNode_x27___redArg___lam__13(v_k_2101_, v_inst_2102_, v_inst_2103_, v_inst_2104_, v_inst_2105_, v_inst_2106_, v___f_2107_, v_cls_2108_, v_collapsed_boxed_2120_, v_tag_2110_, v_msg_2111_, v_toBind_2112_, v___f_2113_, v___f_2114_, v___x_2115_, v_inst_2116_, v_toPure_2117_, v___f_2118_, v_opts_2119_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg(lean_object* v_inst_2123_, lean_object* v_inst_2124_, lean_object* v_inst_2125_, lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_inst_2129_, lean_object* v_cls_2130_, lean_object* v_k_2131_, uint8_t v_collapsed_2132_, lean_object* v_tag_2133_){
_start:
{
lean_object* v_toApplicative_2134_; lean_object* v_toFunctor_2135_; lean_object* v_toBind_2136_; lean_object* v_toPure_2137_; lean_object* v_map_2138_; lean_object* v___f_2139_; lean_object* v_msg_2140_; lean_object* v___f_2141_; lean_object* v___f_2142_; lean_object* v___f_2143_; lean_object* v___f_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___f_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v_toApplicative_2134_ = lean_ctor_get(v_inst_2123_, 0);
v_toFunctor_2135_ = lean_ctor_get(v_toApplicative_2134_, 0);
v_toBind_2136_ = lean_ctor_get(v_inst_2123_, 1);
lean_inc_n(v_toBind_2136_, 3);
v_toPure_2137_ = lean_ctor_get(v_toApplicative_2134_, 1);
lean_inc_n(v_toPure_2137_, 5);
v_map_2138_ = lean_ctor_get(v_toFunctor_2135_, 0);
lean_inc(v_map_2138_);
v___f_2139_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v_msg_2140_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v_msg_2140_, 0, v_toPure_2137_);
lean_inc(v_inst_2127_);
lean_inc(v_cls_2130_);
v___f_2141_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2141_, 0, v_toPure_2137_);
lean_closure_set(v___f_2141_, 1, v_cls_2130_);
lean_closure_set(v___f_2141_, 2, v_toBind_2136_);
lean_closure_set(v___f_2141_, 3, v_inst_2127_);
v___f_2142_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2142_, 0, v_toPure_2137_);
v___f_2143_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2143_, 0, v_toPure_2137_);
v___f_2144_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
v___x_2145_ = l_Lean_KVMap_instValueBool;
v___x_2146_ = lean_box(v_collapsed_2132_);
v___f_2147_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2147_, 0, v_k_2131_);
lean_closure_set(v___f_2147_, 1, v_inst_2124_);
lean_closure_set(v___f_2147_, 2, v_inst_2128_);
lean_closure_set(v___f_2147_, 3, v_inst_2123_);
lean_closure_set(v___f_2147_, 4, v_inst_2125_);
lean_closure_set(v___f_2147_, 5, v_inst_2126_);
lean_closure_set(v___f_2147_, 6, v___f_2144_);
lean_closure_set(v___f_2147_, 7, v_cls_2130_);
lean_closure_set(v___f_2147_, 8, v___x_2146_);
lean_closure_set(v___f_2147_, 9, v_tag_2133_);
lean_closure_set(v___f_2147_, 10, v_msg_2140_);
lean_closure_set(v___f_2147_, 11, v_toBind_2136_);
lean_closure_set(v___f_2147_, 12, v___f_2143_);
lean_closure_set(v___f_2147_, 13, v___f_2142_);
lean_closure_set(v___f_2147_, 14, v___x_2145_);
lean_closure_set(v___f_2147_, 15, v_inst_2129_);
lean_closure_set(v___f_2147_, 16, v_toPure_2137_);
lean_closure_set(v___f_2147_, 17, v___f_2141_);
v___x_2148_ = lean_apply_4(v_toBind_2136_, lean_box(0), lean_box(0), v_inst_2127_, v___f_2147_);
v___x_2149_ = lean_apply_4(v_map_2138_, lean_box(0), lean_box(0), v___f_2139_, v___x_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___boxed(lean_object* v_inst_2150_, lean_object* v_inst_2151_, lean_object* v_inst_2152_, lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_inst_2156_, lean_object* v_cls_2157_, lean_object* v_k_2158_, lean_object* v_collapsed_2159_, lean_object* v_tag_2160_){
_start:
{
uint8_t v_collapsed_boxed_2161_; lean_object* v_res_2162_; 
v_collapsed_boxed_2161_ = lean_unbox(v_collapsed_2159_);
v_res_2162_ = l_Lean_withTraceNode_x27___redArg(v_inst_2150_, v_inst_2151_, v_inst_2152_, v_inst_2153_, v_inst_2154_, v_inst_2155_, v_inst_2156_, v_cls_2157_, v_k_2158_, v_collapsed_boxed_2161_, v_tag_2160_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27(lean_object* v_00_u03b1_2163_, lean_object* v_m_2164_, lean_object* v_inst_2165_, lean_object* v_inst_2166_, lean_object* v_inst_2167_, lean_object* v_inst_2168_, lean_object* v_inst_2169_, lean_object* v_inst_2170_, lean_object* v_inst_2171_, lean_object* v_cls_2172_, lean_object* v_k_2173_, uint8_t v_collapsed_2174_, lean_object* v_tag_2175_){
_start:
{
lean_object* v_toApplicative_2176_; lean_object* v_toFunctor_2177_; lean_object* v_toBind_2178_; lean_object* v_toPure_2179_; lean_object* v_map_2180_; lean_object* v___f_2181_; lean_object* v_msg_2182_; lean_object* v___f_2183_; lean_object* v___f_2184_; lean_object* v___f_2185_; lean_object* v___f_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___f_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v_toApplicative_2176_ = lean_ctor_get(v_inst_2165_, 0);
v_toFunctor_2177_ = lean_ctor_get(v_toApplicative_2176_, 0);
v_toBind_2178_ = lean_ctor_get(v_inst_2165_, 1);
lean_inc_n(v_toBind_2178_, 3);
v_toPure_2179_ = lean_ctor_get(v_toApplicative_2176_, 1);
lean_inc_n(v_toPure_2179_, 5);
v_map_2180_ = lean_ctor_get(v_toFunctor_2177_, 0);
lean_inc(v_map_2180_);
v___f_2181_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v_msg_2182_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v_msg_2182_, 0, v_toPure_2179_);
lean_inc(v_inst_2169_);
lean_inc(v_cls_2172_);
v___f_2183_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2183_, 0, v_toPure_2179_);
lean_closure_set(v___f_2183_, 1, v_cls_2172_);
lean_closure_set(v___f_2183_, 2, v_toBind_2178_);
lean_closure_set(v___f_2183_, 3, v_inst_2169_);
v___f_2184_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2184_, 0, v_toPure_2179_);
v___f_2185_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2185_, 0, v_toPure_2179_);
v___f_2186_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
v___x_2187_ = l_Lean_KVMap_instValueBool;
v___x_2188_ = lean_box(v_collapsed_2174_);
v___f_2189_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2189_, 0, v_k_2173_);
lean_closure_set(v___f_2189_, 1, v_inst_2166_);
lean_closure_set(v___f_2189_, 2, v_inst_2170_);
lean_closure_set(v___f_2189_, 3, v_inst_2165_);
lean_closure_set(v___f_2189_, 4, v_inst_2167_);
lean_closure_set(v___f_2189_, 5, v_inst_2168_);
lean_closure_set(v___f_2189_, 6, v___f_2186_);
lean_closure_set(v___f_2189_, 7, v_cls_2172_);
lean_closure_set(v___f_2189_, 8, v___x_2188_);
lean_closure_set(v___f_2189_, 9, v_tag_2175_);
lean_closure_set(v___f_2189_, 10, v_msg_2182_);
lean_closure_set(v___f_2189_, 11, v_toBind_2178_);
lean_closure_set(v___f_2189_, 12, v___f_2185_);
lean_closure_set(v___f_2189_, 13, v___f_2184_);
lean_closure_set(v___f_2189_, 14, v___x_2187_);
lean_closure_set(v___f_2189_, 15, v_inst_2171_);
lean_closure_set(v___f_2189_, 16, v_toPure_2179_);
lean_closure_set(v___f_2189_, 17, v___f_2183_);
v___x_2190_ = lean_apply_4(v_toBind_2178_, lean_box(0), lean_box(0), v_inst_2169_, v___f_2189_);
v___x_2191_ = lean_apply_4(v_map_2180_, lean_box(0), lean_box(0), v___f_2181_, v___x_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___boxed(lean_object* v_00_u03b1_2192_, lean_object* v_m_2193_, lean_object* v_inst_2194_, lean_object* v_inst_2195_, lean_object* v_inst_2196_, lean_object* v_inst_2197_, lean_object* v_inst_2198_, lean_object* v_inst_2199_, lean_object* v_inst_2200_, lean_object* v_cls_2201_, lean_object* v_k_2202_, lean_object* v_collapsed_2203_, lean_object* v_tag_2204_){
_start:
{
uint8_t v_collapsed_boxed_2205_; lean_object* v_res_2206_; 
v_collapsed_boxed_2205_ = lean_unbox(v_collapsed_2203_);
v_res_2206_ = l_Lean_withTraceNode_x27(v_00_u03b1_2192_, v_m_2193_, v_inst_2194_, v_inst_2195_, v_inst_2196_, v_inst_2197_, v_inst_2198_, v_inst_2199_, v_inst_2200_, v_cls_2201_, v_k_2202_, v_collapsed_boxed_2205_, v_tag_2204_);
return v_res_2206_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__4(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__3));
v___x_2216_ = l_Lean_mkAtom(v___x_2215_);
return v___x_2216_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__5(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2217_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__4, &l_Lean_registerTraceClass___auto__1___closed__4_once, _init_l_Lean_registerTraceClass___auto__1___closed__4);
v___x_2218_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2219_ = lean_array_push(v___x_2218_, v___x_2217_);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__6(void){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2220_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__5, &l_Lean_registerTraceClass___auto__1___closed__5_once, _init_l_Lean_registerTraceClass___auto__1___closed__5);
v___x_2221_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__2));
v___x_2222_ = lean_box(2);
v___x_2223_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
lean_ctor_set(v___x_2223_, 1, v___x_2221_);
lean_ctor_set(v___x_2223_, 2, v___x_2220_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__7(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__6, &l_Lean_registerTraceClass___auto__1___closed__6_once, _init_l_Lean_registerTraceClass___auto__1___closed__6);
v___x_2225_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2224_);
return v___x_2226_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__8(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2227_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__7, &l_Lean_registerTraceClass___auto__1___closed__7_once, _init_l_Lean_registerTraceClass___auto__1___closed__7);
v___x_2228_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_2229_ = lean_box(2);
v___x_2230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___x_2228_);
lean_ctor_set(v___x_2230_, 2, v___x_2227_);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2231_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__8, &l_Lean_registerTraceClass___auto__1___closed__8_once, _init_l_Lean_registerTraceClass___auto__1___closed__8);
v___x_2232_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2233_ = lean_array_push(v___x_2232_, v___x_2231_);
return v___x_2233_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2234_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__9, &l_Lean_registerTraceClass___auto__1___closed__9_once, _init_l_Lean_registerTraceClass___auto__1___closed__9);
v___x_2235_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2236_ = lean_box(2);
v___x_2237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set(v___x_2237_, 1, v___x_2235_);
lean_ctor_set(v___x_2237_, 2, v___x_2234_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__11(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2238_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__10, &l_Lean_registerTraceClass___auto__1___closed__10_once, _init_l_Lean_registerTraceClass___auto__1___closed__10);
v___x_2239_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2240_ = lean_array_push(v___x_2239_, v___x_2238_);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2241_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__11, &l_Lean_registerTraceClass___auto__1___closed__11_once, _init_l_Lean_registerTraceClass___auto__1___closed__11);
v___x_2242_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_2243_ = lean_box(2);
v___x_2244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
lean_ctor_set(v___x_2244_, 1, v___x_2242_);
lean_ctor_set(v___x_2244_, 2, v___x_2241_);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__12, &l_Lean_registerTraceClass___auto__1___closed__12_once, _init_l_Lean_registerTraceClass___auto__1___closed__12);
v___x_2246_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2247_ = lean_array_push(v___x_2246_, v___x_2245_);
return v___x_2247_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__14(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2248_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__13, &l_Lean_registerTraceClass___auto__1___closed__13_once, _init_l_Lean_registerTraceClass___auto__1___closed__13);
v___x_2249_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_2250_ = lean_box(2);
v___x_2251_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
lean_ctor_set(v___x_2251_, 1, v___x_2249_);
lean_ctor_set(v___x_2251_, 2, v___x_2248_);
return v___x_2251_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1(void){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__14, &l_Lean_registerTraceClass___auto__1___closed__14_once, _init_l_Lean_registerTraceClass___auto__1___closed__14);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2253_, lean_object* v_x_2254_){
_start:
{
if (lean_obj_tag(v_x_2254_) == 0)
{
return v_x_2253_;
}
else
{
lean_object* v_key_2255_; lean_object* v_value_2256_; lean_object* v_tail_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2284_; 
v_key_2255_ = lean_ctor_get(v_x_2254_, 0);
v_value_2256_ = lean_ctor_get(v_x_2254_, 1);
v_tail_2257_ = lean_ctor_get(v_x_2254_, 2);
v_isSharedCheck_2284_ = !lean_is_exclusive(v_x_2254_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2259_ = v_x_2254_;
v_isShared_2260_ = v_isSharedCheck_2284_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_tail_2257_);
lean_inc(v_value_2256_);
lean_inc(v_key_2255_);
lean_dec(v_x_2254_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2284_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2261_; uint64_t v___y_2263_; lean_object* v___x_2281_; 
v___x_2261_ = lean_array_get_size(v_x_2253_);
v___x_2281_ = l_unsafeCast___redArg(v_key_2255_);
if (lean_obj_tag(v___x_2281_) == 0)
{
uint64_t v___x_2282_; 
v___x_2282_ = 1723ULL;
v___y_2263_ = v___x_2282_;
goto v___jp_2262_;
}
else
{
uint64_t v_hash_2283_; 
v_hash_2283_ = lean_ctor_get_uint64(v___x_2281_, sizeof(void*)*2);
lean_dec(v___x_2281_);
v___y_2263_ = v_hash_2283_;
goto v___jp_2262_;
}
v___jp_2262_:
{
uint64_t v___x_2264_; uint64_t v___x_2265_; uint64_t v_fold_2266_; uint64_t v___x_2267_; uint64_t v___x_2268_; uint64_t v___x_2269_; size_t v___x_2270_; size_t v___x_2271_; size_t v___x_2272_; size_t v___x_2273_; size_t v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2277_; 
v___x_2264_ = 32ULL;
v___x_2265_ = lean_uint64_shift_right(v___y_2263_, v___x_2264_);
v_fold_2266_ = lean_uint64_xor(v___y_2263_, v___x_2265_);
v___x_2267_ = 16ULL;
v___x_2268_ = lean_uint64_shift_right(v_fold_2266_, v___x_2267_);
v___x_2269_ = lean_uint64_xor(v_fold_2266_, v___x_2268_);
v___x_2270_ = lean_uint64_to_usize(v___x_2269_);
v___x_2271_ = lean_usize_of_nat(v___x_2261_);
v___x_2272_ = ((size_t)1ULL);
v___x_2273_ = lean_usize_sub(v___x_2271_, v___x_2272_);
v___x_2274_ = lean_usize_land(v___x_2270_, v___x_2273_);
v___x_2275_ = lean_array_uget_borrowed(v_x_2253_, v___x_2274_);
lean_inc(v___x_2275_);
if (v_isShared_2260_ == 0)
{
lean_ctor_set(v___x_2259_, 2, v___x_2275_);
v___x_2277_ = v___x_2259_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_key_2255_);
lean_ctor_set(v_reuseFailAlloc_2280_, 1, v_value_2256_);
lean_ctor_set(v_reuseFailAlloc_2280_, 2, v___x_2275_);
v___x_2277_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_array_uset(v_x_2253_, v___x_2274_, v___x_2277_);
v_x_2253_ = v___x_2278_;
v_x_2254_ = v_tail_2257_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(lean_object* v_i_2285_, lean_object* v_source_2286_, lean_object* v_target_2287_){
_start:
{
lean_object* v___x_2288_; uint8_t v___x_2289_; 
v___x_2288_ = lean_array_get_size(v_source_2286_);
v___x_2289_ = lean_nat_dec_lt(v_i_2285_, v___x_2288_);
if (v___x_2289_ == 0)
{
lean_dec_ref(v_source_2286_);
lean_dec(v_i_2285_);
return v_target_2287_;
}
else
{
lean_object* v_es_2290_; lean_object* v___x_2291_; lean_object* v_source_2292_; lean_object* v_target_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v_es_2290_ = lean_array_fget(v_source_2286_, v_i_2285_);
v___x_2291_ = lean_box(0);
v_source_2292_ = lean_array_fset(v_source_2286_, v_i_2285_, v___x_2291_);
v_target_2293_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_target_2287_, v_es_2290_);
v___x_2294_ = lean_unsigned_to_nat(1u);
v___x_2295_ = lean_nat_add(v_i_2285_, v___x_2294_);
lean_dec(v_i_2285_);
v_i_2285_ = v___x_2295_;
v_source_2286_ = v_source_2292_;
v_target_2287_ = v_target_2293_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(lean_object* v_data_2297_){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v_nbuckets_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2298_ = lean_array_get_size(v_data_2297_);
v___x_2299_ = lean_unsigned_to_nat(2u);
v_nbuckets_2300_ = lean_nat_mul(v___x_2298_, v___x_2299_);
v___x_2301_ = lean_unsigned_to_nat(0u);
v___x_2302_ = lean_box(0);
v___x_2303_ = lean_mk_array(v_nbuckets_2300_, v___x_2302_);
v___x_2304_ = lean_array_propagate_mark(v_data_2297_, v___x_2303_);
v___x_2305_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v___x_2301_, v_data_2297_, v___x_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(lean_object* v_m_2306_, lean_object* v_a_2307_, lean_object* v_b_2308_){
_start:
{
lean_object* v_size_2309_; lean_object* v_buckets_2310_; lean_object* v___x_2311_; uint64_t v___y_2313_; lean_object* v___x_2350_; 
v_size_2309_ = lean_ctor_get(v_m_2306_, 0);
v_buckets_2310_ = lean_ctor_get(v_m_2306_, 1);
v___x_2311_ = lean_array_get_size(v_buckets_2310_);
v___x_2350_ = l_unsafeCast___redArg(v_a_2307_);
if (lean_obj_tag(v___x_2350_) == 0)
{
uint64_t v___x_2351_; 
v___x_2351_ = 1723ULL;
v___y_2313_ = v___x_2351_;
goto v___jp_2312_;
}
else
{
uint64_t v_hash_2352_; 
v_hash_2352_ = lean_ctor_get_uint64(v___x_2350_, sizeof(void*)*2);
lean_dec(v___x_2350_);
v___y_2313_ = v_hash_2352_;
goto v___jp_2312_;
}
v___jp_2312_:
{
uint64_t v___x_2314_; uint64_t v___x_2315_; uint64_t v_fold_2316_; uint64_t v___x_2317_; uint64_t v___x_2318_; uint64_t v___x_2319_; size_t v___x_2320_; size_t v___x_2321_; size_t v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; lean_object* v_bkt_2325_; uint8_t v___x_2326_; 
v___x_2314_ = 32ULL;
v___x_2315_ = lean_uint64_shift_right(v___y_2313_, v___x_2314_);
v_fold_2316_ = lean_uint64_xor(v___y_2313_, v___x_2315_);
v___x_2317_ = 16ULL;
v___x_2318_ = lean_uint64_shift_right(v_fold_2316_, v___x_2317_);
v___x_2319_ = lean_uint64_xor(v_fold_2316_, v___x_2318_);
v___x_2320_ = lean_uint64_to_usize(v___x_2319_);
v___x_2321_ = lean_usize_of_nat(v___x_2311_);
v___x_2322_ = ((size_t)1ULL);
v___x_2323_ = lean_usize_sub(v___x_2321_, v___x_2322_);
v___x_2324_ = lean_usize_land(v___x_2320_, v___x_2323_);
v_bkt_2325_ = lean_array_uget_borrowed(v_buckets_2310_, v___x_2324_);
v___x_2326_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_2307_, v_bkt_2325_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2347_; 
lean_inc_ref(v_buckets_2310_);
lean_inc(v_size_2309_);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_m_2306_);
if (v_isSharedCheck_2347_ == 0)
{
lean_object* v_unused_2348_; lean_object* v_unused_2349_; 
v_unused_2348_ = lean_ctor_get(v_m_2306_, 1);
lean_dec(v_unused_2348_);
v_unused_2349_ = lean_ctor_get(v_m_2306_, 0);
lean_dec(v_unused_2349_);
v___x_2328_ = v_m_2306_;
v_isShared_2329_ = v_isSharedCheck_2347_;
goto v_resetjp_2327_;
}
else
{
lean_dec(v_m_2306_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2347_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2330_; lean_object* v_size_x27_2331_; lean_object* v___x_2332_; lean_object* v_buckets_x27_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; uint8_t v___x_2339_; 
v___x_2330_ = lean_unsigned_to_nat(1u);
v_size_x27_2331_ = lean_nat_add(v_size_2309_, v___x_2330_);
lean_dec(v_size_2309_);
lean_inc(v_bkt_2325_);
v___x_2332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2332_, 0, v_a_2307_);
lean_ctor_set(v___x_2332_, 1, v_b_2308_);
lean_ctor_set(v___x_2332_, 2, v_bkt_2325_);
v_buckets_x27_2333_ = lean_array_uset(v_buckets_2310_, v___x_2324_, v___x_2332_);
v___x_2334_ = lean_unsigned_to_nat(4u);
v___x_2335_ = lean_nat_mul(v_size_x27_2331_, v___x_2334_);
v___x_2336_ = lean_unsigned_to_nat(3u);
v___x_2337_ = lean_nat_div(v___x_2335_, v___x_2336_);
lean_dec(v___x_2335_);
v___x_2338_ = lean_array_get_size(v_buckets_x27_2333_);
v___x_2339_ = lean_nat_dec_le(v___x_2337_, v___x_2338_);
lean_dec(v___x_2337_);
if (v___x_2339_ == 0)
{
lean_object* v_val_2340_; lean_object* v___x_2342_; 
v_val_2340_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_buckets_x27_2333_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 1, v_val_2340_);
lean_ctor_set(v___x_2328_, 0, v_size_x27_2331_);
v___x_2342_ = v___x_2328_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_size_x27_2331_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_val_2340_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
else
{
lean_object* v___x_2345_; 
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 1, v_buckets_x27_2333_);
lean_ctor_set(v___x_2328_, 0, v_size_x27_2331_);
v___x_2345_ = v___x_2328_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_size_x27_2331_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_buckets_x27_2333_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
else
{
lean_dec(v_b_2308_);
lean_dec(v_a_2307_);
return v_m_2306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass(lean_object* v_traceClassName_2356_, uint8_t v_inherited_2357_, lean_object* v_ref_2358_){
_start:
{
lean_object* v___x_2360_; lean_object* v_optionName_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2360_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v_optionName_2361_ = l_Lean_Name_append(v___x_2360_, v_traceClassName_2356_);
v___x_2362_ = ((lean_object*)(l_Lean_registerTraceClass___closed__0));
v___x_2363_ = ((lean_object*)(l_Lean_registerTraceClass___closed__1));
v___x_2364_ = lean_box(0);
lean_inc_n(v_optionName_2361_, 2);
v___x_2365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2365_, 0, v_optionName_2361_);
lean_ctor_set(v___x_2365_, 1, v_ref_2358_);
lean_ctor_set(v___x_2365_, 2, v___x_2362_);
lean_ctor_set(v___x_2365_, 3, v___x_2363_);
lean_ctor_set(v___x_2365_, 4, v___x_2364_);
v___x_2366_ = lean_register_option(v_optionName_2361_, v___x_2365_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2382_; 
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2382_ == 0)
{
lean_object* v_unused_2383_; 
v_unused_2383_ = lean_ctor_get(v___x_2366_, 0);
lean_dec(v_unused_2383_);
v___x_2368_ = v___x_2366_;
v_isShared_2369_ = v_isSharedCheck_2382_;
goto v_resetjp_2367_;
}
else
{
lean_dec(v___x_2366_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2382_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
if (v_inherited_2357_ == 0)
{
lean_object* v___x_2370_; lean_object* v___x_2372_; 
lean_dec(v_optionName_2361_);
v___x_2370_ = lean_box(0);
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 0, v___x_2370_);
v___x_2372_ = v___x_2368_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
else
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2374_ = l_Lean_inheritedTraceOptions;
v___x_2375_ = lean_st_ref_take(v___x_2374_);
v___x_2376_ = lean_box(0);
v___x_2377_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v___x_2375_, v_optionName_2361_, v___x_2376_);
v___x_2378_ = lean_st_ref_put(v___x_2374_, v___x_2377_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 0, v___x_2378_);
v___x_2380_ = v___x_2368_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2378_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
else
{
lean_dec(v_optionName_2361_);
return v___x_2366_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___boxed(lean_object* v_traceClassName_2384_, lean_object* v_inherited_2385_, lean_object* v_ref_2386_, lean_object* v_a_2387_){
_start:
{
uint8_t v_inherited_boxed_2388_; lean_object* v_res_2389_; 
v_inherited_boxed_2388_ = lean_unbox(v_inherited_2385_);
v_res_2389_ = l_Lean_registerTraceClass(v_traceClassName_2384_, v_inherited_boxed_2388_, v_ref_2386_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0(lean_object* v_00_u03b2_2390_, lean_object* v_m_2391_, lean_object* v_a_2392_, lean_object* v_b_2393_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v_m_2391_, v_a_2392_, v_b_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0(lean_object* v_00_u03b2_2395_, lean_object* v_data_2396_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_data_2396_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2398_, lean_object* v_i_2399_, lean_object* v_source_2400_, lean_object* v_target_2401_){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v_i_2399_, v_source_2400_, v_target_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2403_, lean_object* v_x_2404_, lean_object* v_x_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2404_, v_x_2405_);
return v___x_2406_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8(void){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2416_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_2417_ = l_String_toRawSubstring_x27(v___x_2416_);
return v___x_2417_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9(void){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = lean_box(0);
v___x_2419_ = l_unsafeCast___redArg(v___x_2418_);
return v___x_2419_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14));
v___x_2426_ = l_String_toRawSubstring_x27(v___x_2425_);
return v___x_2426_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19));
v___x_2432_ = l_String_toRawSubstring_x27(v___x_2431_);
return v___x_2432_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32(void){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Array_mkArray0___redArg();
return v___x_2460_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42(void){
_start:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2486_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41));
v___x_2487_ = l_String_toRawSubstring_x27(v___x_2486_);
return v___x_2487_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58));
v___x_2523_ = l_String_toRawSubstring_x27(v___x_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(lean_object* v_id_2545_, lean_object* v_s_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v_msg_2646_; lean_object* v_quotContext_2647_; lean_object* v_currMacroScope_2648_; lean_object* v_ref_2649_; lean_object* v___y_2650_; lean_object* v___x_2696_; lean_object* v___x_2697_; uint8_t v___x_2698_; 
lean_inc(v_s_2546_);
v___x_2696_ = l_Lean_Syntax_getKind(v_s_2546_);
v___x_2697_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50));
v___x_2698_ = lean_name_eq(v___x_2696_, v___x_2697_);
lean_dec(v___x_2696_);
if (v___x_2698_ == 0)
{
lean_object* v_quotContext_2699_; lean_object* v_currMacroScope_2700_; lean_object* v_ref_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v_quotContext_2699_ = lean_ctor_get(v_a_2547_, 1);
v_currMacroScope_2700_ = lean_ctor_get(v_a_2547_, 2);
v_ref_2701_ = lean_ctor_get(v_a_2547_, 5);
v___x_2702_ = l_Lean_SourceInfo_fromRef(v_ref_2701_, v___x_2698_);
v___x_2703_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52));
v___x_2704_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53));
v___x_2705_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
lean_inc_n(v___x_2702_, 8);
v___x_2706_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2702_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2708_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8);
v___x_2709_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9);
lean_inc_n(v_currMacroScope_2700_, 3);
lean_inc_n(v_quotContext_2699_, 3);
v___x_2710_ = l_Lean_addMacroScope(v_quotContext_2699_, v___x_2709_, v_currMacroScope_2700_);
v___x_2711_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56));
v___x_2712_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2702_);
lean_ctor_set(v___x_2712_, 1, v___x_2708_);
lean_ctor_set(v___x_2712_, 2, v___x_2710_);
lean_ctor_set(v___x_2712_, 3, v___x_2711_);
v___x_2713_ = l_Lean_Syntax_node1(v___x_2702_, v___x_2707_, v___x_2712_);
v___x_2714_ = l_Lean_Syntax_node2(v___x_2702_, v___x_2704_, v___x_2706_, v___x_2713_);
v___x_2715_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57));
v___x_2716_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2702_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___x_2717_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2718_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59);
v___x_2719_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60));
v___x_2720_ = l_Lean_addMacroScope(v_quotContext_2699_, v___x_2719_, v_currMacroScope_2700_);
v___x_2721_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65));
v___x_2722_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2702_);
lean_ctor_set(v___x_2722_, 1, v___x_2718_);
lean_ctor_set(v___x_2722_, 2, v___x_2720_);
lean_ctor_set(v___x_2722_, 3, v___x_2721_);
v___x_2723_ = l_Lean_Syntax_node1(v___x_2702_, v___x_2717_, v___x_2722_);
v___x_2724_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17));
v___x_2725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2702_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = l_Lean_Syntax_node5(v___x_2702_, v___x_2703_, v___x_2714_, v_s_2546_, v___x_2716_, v___x_2723_, v___x_2725_);
v_msg_2646_ = v___x_2726_;
v_quotContext_2647_ = v_quotContext_2699_;
v_currMacroScope_2648_ = v_currMacroScope_2700_;
v_ref_2649_ = v_ref_2701_;
v___y_2650_ = v_a_2548_;
goto v___jp_2645_;
}
else
{
lean_object* v_quotContext_2727_; lean_object* v_currMacroScope_2728_; lean_object* v_ref_2729_; uint8_t v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v_quotContext_2727_ = lean_ctor_get(v_a_2547_, 1);
v_currMacroScope_2728_ = lean_ctor_get(v_a_2547_, 2);
v_ref_2729_ = lean_ctor_get(v_a_2547_, 5);
v___x_2730_ = 0;
v___x_2731_ = l_Lean_SourceInfo_fromRef(v_ref_2729_, v___x_2730_);
v___x_2732_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67));
v___x_2733_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68));
lean_inc(v___x_2731_);
v___x_2734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2731_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = l_Lean_Syntax_node2(v___x_2731_, v___x_2732_, v___x_2734_, v_s_2546_);
lean_inc(v_currMacroScope_2728_);
lean_inc(v_quotContext_2727_);
v_msg_2646_ = v___x_2735_;
v_quotContext_2647_ = v_quotContext_2727_;
v_currMacroScope_2648_ = v_currMacroScope_2728_;
v_ref_2649_ = v_ref_2729_;
v___y_2650_ = v_a_2548_;
goto v___jp_2645_;
}
v___jp_2549_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
lean_inc_n(v___y_2554_, 8);
lean_inc(v___y_2556_);
lean_inc_n(v___y_2571_, 30);
v___x_2574_ = l_Lean_Syntax_node5(v___y_2571_, v___y_2556_, v___y_2552_, v___y_2554_, v___y_2554_, v___y_2572_, v___y_2573_);
lean_inc(v___y_2560_);
v___x_2575_ = l_Lean_Syntax_node1(v___y_2571_, v___y_2560_, v___x_2574_);
lean_inc(v___y_2558_);
v___x_2576_ = l_Lean_Syntax_node4(v___y_2571_, v___y_2558_, v___y_2567_, v___y_2554_, v___y_2559_, v___x_2575_);
lean_inc_n(v___y_2569_, 3);
v___x_2577_ = l_Lean_Syntax_node2(v___y_2571_, v___y_2569_, v___x_2576_, v___y_2554_);
v___x_2578_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0));
lean_inc_ref_n(v___y_2557_, 7);
lean_inc_ref_n(v___y_2570_, 7);
lean_inc_ref_n(v___y_2562_, 10);
v___x_2579_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2578_);
v___x_2580_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1));
v___x_2581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___y_2571_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2));
v___x_2583_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2582_);
v___x_2584_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3));
v___x_2585_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2584_);
v___x_2586_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4));
v___x_2587_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2586_);
v___x_2588_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
v___x_2589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___y_2571_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2591_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8);
v___x_2592_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9);
lean_inc_n(v___y_2553_, 2);
lean_inc_n(v___y_2564_, 2);
v___x_2593_ = l_Lean_addMacroScope(v___y_2564_, v___x_2592_, v___y_2553_);
v___x_2594_ = l_Lean_Name_mkStr1(v___y_2562_);
v___x_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_inc_n(v___y_2568_, 2);
v___x_2596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
lean_ctor_set(v___x_2596_, 1, v___y_2568_);
v___x_2597_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2597_, 0, v___y_2571_);
lean_ctor_set(v___x_2597_, 1, v___x_2591_);
lean_ctor_set(v___x_2597_, 2, v___x_2593_);
lean_ctor_set(v___x_2597_, 3, v___x_2596_);
v___x_2598_ = l_Lean_Syntax_node1(v___y_2571_, v___x_2590_, v___x_2597_);
v___x_2599_ = l_Lean_Syntax_node2(v___y_2571_, v___x_2587_, v___x_2589_, v___x_2598_);
v___x_2600_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10));
v___x_2601_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2600_);
v___x_2602_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11));
v___x_2603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2603_, 0, v___y_2571_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12));
v___x_2605_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2604_);
v___x_2606_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13));
v___x_2607_ = l_Lean_Name_mkStr4(v___y_2562_, v___y_2570_, v___y_2557_, v___x_2606_);
v___x_2608_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15);
v___x_2609_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16));
v___x_2610_ = l_Lean_Name_mkStr2(v___y_2562_, v___x_2609_);
lean_inc(v___x_2610_);
v___x_2611_ = l_Lean_addMacroScope(v___y_2564_, v___x_2610_, v___y_2553_);
v___x_2612_ = lean_box(0);
v___x_2613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2610_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v___y_2568_);
v___x_2615_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2615_, 0, v___y_2571_);
lean_ctor_set(v___x_2615_, 1, v___x_2608_);
lean_ctor_set(v___x_2615_, 2, v___x_2611_);
lean_ctor_set(v___x_2615_, 3, v___x_2614_);
lean_inc(v___y_2566_);
lean_inc_n(v___y_2561_, 4);
v___x_2616_ = l_Lean_Syntax_node1(v___y_2571_, v___y_2561_, v___y_2566_);
lean_inc(v___x_2607_);
v___x_2617_ = l_Lean_Syntax_node2(v___y_2571_, v___x_2607_, v___x_2615_, v___x_2616_);
lean_inc(v___x_2605_);
v___x_2618_ = l_Lean_Syntax_node1(v___y_2571_, v___x_2605_, v___x_2617_);
v___x_2619_ = l_Lean_Syntax_node2(v___y_2571_, v___x_2601_, v___x_2603_, v___x_2618_);
v___x_2620_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17));
v___x_2621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___y_2571_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = l_Lean_Syntax_node3(v___y_2571_, v___x_2585_, v___x_2599_, v___x_2619_, v___x_2621_);
v___x_2623_ = l_Lean_Syntax_node2(v___y_2571_, v___x_2583_, v___y_2554_, v___x_2622_);
v___x_2624_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18));
v___x_2625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___y_2571_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20);
v___x_2627_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21));
v___x_2628_ = l_Lean_Name_mkStr2(v___y_2562_, v___x_2627_);
lean_inc(v___x_2628_);
v___x_2629_ = l_Lean_addMacroScope(v___y_2564_, v___x_2628_, v___y_2553_);
v___x_2630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2628_);
lean_ctor_set(v___x_2630_, 1, v___x_2612_);
v___x_2631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
lean_ctor_set(v___x_2631_, 1, v___y_2568_);
v___x_2632_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2632_, 0, v___y_2571_);
lean_ctor_set(v___x_2632_, 1, v___x_2626_);
lean_ctor_set(v___x_2632_, 2, v___x_2629_);
lean_ctor_set(v___x_2632_, 3, v___x_2631_);
v___x_2633_ = l_Lean_Syntax_node2(v___y_2571_, v___y_2561_, v___y_2566_, v___y_2563_);
v___x_2634_ = l_Lean_Syntax_node2(v___y_2571_, v___x_2607_, v___x_2632_, v___x_2633_);
v___x_2635_ = l_Lean_Syntax_node1(v___y_2571_, v___x_2605_, v___x_2634_);
v___x_2636_ = l_Lean_Syntax_node2(v___y_2571_, v___y_2569_, v___x_2635_, v___y_2554_);
v___x_2637_ = l_Lean_Syntax_node1(v___y_2571_, v___y_2561_, v___x_2636_);
lean_inc_n(v___y_2551_, 2);
v___x_2638_ = l_Lean_Syntax_node1(v___y_2571_, v___y_2551_, v___x_2637_);
v___x_2639_ = l_Lean_Syntax_node6(v___y_2571_, v___x_2579_, v___x_2581_, v___x_2623_, v___x_2625_, v___x_2638_, v___y_2554_, v___y_2554_);
v___x_2640_ = l_Lean_Syntax_node2(v___y_2571_, v___y_2569_, v___x_2639_, v___y_2554_);
v___x_2641_ = l_Lean_Syntax_node2(v___y_2571_, v___y_2561_, v___x_2577_, v___x_2640_);
v___x_2642_ = l_Lean_Syntax_node1(v___y_2571_, v___y_2551_, v___x_2641_);
lean_inc(v___y_2555_);
v___x_2643_ = l_Lean_Syntax_node2(v___y_2571_, v___y_2555_, v___y_2550_, v___x_2642_);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
lean_ctor_set(v___x_2644_, 1, v___y_2565_);
return v___x_2644_;
}
v___jp_2645_:
{
uint8_t v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2651_ = 0;
v___x_2652_ = l_Lean_SourceInfo_fromRef(v_ref_2649_, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_2654_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1));
v___x_2655_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__0));
v___x_2656_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23));
v___x_2657_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24));
lean_inc_n(v___x_2652_, 7);
v___x_2658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2652_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
v___x_2659_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26));
v___x_2660_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2661_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28));
v___x_2662_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30));
v___x_2663_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31));
v___x_2664_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2652_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32);
v___x_2666_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2652_);
lean_ctor_set(v___x_2666_, 1, v___x_2660_);
lean_ctor_set(v___x_2666_, 2, v___x_2665_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34));
lean_inc_ref(v___x_2666_);
v___x_2668_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2667_, v___x_2666_);
v___x_2669_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36));
v___x_2670_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38));
v___x_2671_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40));
v___x_2672_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42);
v___x_2673_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43));
lean_inc(v_currMacroScope_2648_);
lean_inc(v_quotContext_2647_);
v___x_2674_ = l_Lean_addMacroScope(v_quotContext_2647_, v___x_2673_, v_currMacroScope_2648_);
v___x_2675_ = lean_box(0);
v___x_2676_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2652_);
lean_ctor_set(v___x_2676_, 1, v___x_2672_);
lean_ctor_set(v___x_2676_, 2, v___x_2674_);
lean_ctor_set(v___x_2676_, 3, v___x_2675_);
lean_inc_ref(v___x_2676_);
v___x_2677_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2671_, v___x_2676_);
v___x_2678_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44));
v___x_2679_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2652_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = l_Lean_Syntax_getId(v_id_2545_);
v___x_2681_ = l_Lean_Name_eraseMacroScopes(v___x_2680_);
lean_dec(v___x_2680_);
lean_inc(v___x_2681_);
v___x_2682_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_2675_, v___x_2681_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Lean_quoteNameMk(v___x_2681_);
v___y_2550_ = v___x_2658_;
v___y_2551_ = v___x_2659_;
v___y_2552_ = v___x_2677_;
v___y_2553_ = v_currMacroScope_2648_;
v___y_2554_ = v___x_2666_;
v___y_2555_ = v___x_2656_;
v___y_2556_ = v___x_2670_;
v___y_2557_ = v___x_2655_;
v___y_2558_ = v___x_2662_;
v___y_2559_ = v___x_2668_;
v___y_2560_ = v___x_2669_;
v___y_2561_ = v___x_2660_;
v___y_2562_ = v___x_2653_;
v___y_2563_ = v_msg_2646_;
v___y_2564_ = v_quotContext_2647_;
v___y_2565_ = v___y_2650_;
v___y_2566_ = v___x_2676_;
v___y_2567_ = v___x_2664_;
v___y_2568_ = v___x_2675_;
v___y_2569_ = v___x_2661_;
v___y_2570_ = v___x_2654_;
v___y_2571_ = v___x_2652_;
v___y_2572_ = v___x_2679_;
v___y_2573_ = v___x_2683_;
goto v___jp_2549_;
}
else
{
lean_object* v_val_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
lean_dec(v___x_2681_);
v_val_2684_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_val_2684_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2685_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46));
v___x_2686_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47));
v___x_2687_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48));
v___x_2688_ = lean_string_intercalate(v___x_2687_, v_val_2684_);
v___x_2689_ = lean_string_append(v___x_2686_, v___x_2688_);
lean_dec_ref(v___x_2688_);
v___x_2690_ = lean_box(2);
v___x_2691_ = l_Lean_Syntax_mkNameLit(v___x_2689_, v___x_2690_);
v___x_2692_ = lean_unsigned_to_nat(1u);
v___x_2693_ = lean_mk_empty_array_with_capacity(v___x_2692_);
v___x_2694_ = lean_array_push(v___x_2693_, v___x_2691_);
v___x_2695_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2690_);
lean_ctor_set(v___x_2695_, 1, v___x_2685_);
lean_ctor_set(v___x_2695_, 2, v___x_2694_);
v___y_2550_ = v___x_2658_;
v___y_2551_ = v___x_2659_;
v___y_2552_ = v___x_2677_;
v___y_2553_ = v_currMacroScope_2648_;
v___y_2554_ = v___x_2666_;
v___y_2555_ = v___x_2656_;
v___y_2556_ = v___x_2670_;
v___y_2557_ = v___x_2655_;
v___y_2558_ = v___x_2662_;
v___y_2559_ = v___x_2668_;
v___y_2560_ = v___x_2669_;
v___y_2561_ = v___x_2660_;
v___y_2562_ = v___x_2653_;
v___y_2563_ = v_msg_2646_;
v___y_2564_ = v_quotContext_2647_;
v___y_2565_ = v___y_2650_;
v___y_2566_ = v___x_2676_;
v___y_2567_ = v___x_2664_;
v___y_2568_ = v___x_2675_;
v___y_2569_ = v___x_2661_;
v___y_2570_ = v___x_2654_;
v___y_2571_ = v___x_2652_;
v___y_2572_ = v___x_2679_;
v___y_2573_ = v___x_2695_;
goto v___jp_2549_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___boxed(lean_object* v_id_2736_, lean_object* v_s_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v_id_2736_, v_s_2737_, v_a_2738_, v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_id_2736_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(lean_object* v_x_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_){
_start:
{
lean_object* v___x_2798_; uint8_t v___x_2799_; 
v___x_2798_ = ((lean_object*)(l_Lean_doElemTrace_x5b___x5d_____00__closed__1));
lean_inc(v_x_2795_);
v___x_2799_ = l_Lean_Syntax_isOfKind(v_x_2795_, v___x_2798_);
if (v___x_2799_ == 0)
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
lean_dec(v_x_2795_);
v___x_2800_ = lean_box(1);
v___x_2801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2800_);
lean_ctor_set(v___x_2801_, 1, v_a_2797_);
return v___x_2801_;
}
else
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v_a_2807_; lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
v___x_2802_ = lean_unsigned_to_nat(1u);
v___x_2803_ = l_Lean_Syntax_getArg(v_x_2795_, v___x_2802_);
v___x_2804_ = lean_unsigned_to_nat(3u);
v___x_2805_ = l_Lean_Syntax_getArg(v_x_2795_, v___x_2804_);
lean_dec(v_x_2795_);
v___x_2806_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v___x_2803_, v___x_2805_, v_a_2796_, v_a_2797_);
lean_dec(v___x_2803_);
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
v_a_2808_ = lean_ctor_get(v___x_2806_, 1);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2806_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_inc(v_a_2807_);
lean_dec(v___x_2806_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2807_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1___boxed(lean_object* v_x_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(v_x_2816_, v_a_2817_, v_a_2818_);
lean_dec_ref(v_a_2817_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(lean_object* v_inst_2820_, lean_object* v_inst_2821_, lean_object* v_inst_2822_, lean_object* v_inst_2823_, lean_object* v_always_2824_, lean_object* v_inst_2825_, lean_object* v_cls_2826_, uint8_t v_collapsed_2827_, lean_object* v_tag_2828_, lean_object* v_opts_2829_, uint8_t v_clsEnabled_2830_, lean_object* v_oldTraces_2831_, lean_object* v_ref_2832_, lean_object* v_msg_2833_, lean_object* v_resStartStop_2834_){
_start:
{
lean_object* v___x_2835_; lean_object* v_toBind_2836_; lean_object* v___x_2837_; lean_object* v_snd_2838_; lean_object* v_fst_2839_; lean_object* v_fst_2840_; lean_object* v_snd_2841_; lean_object* v___f_2842_; lean_object* v___f_2843_; lean_object* v_data_2845_; lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___y_2860_; double v___y_2865_; uint8_t v___x_2870_; 
v___x_2835_ = l_Lean_KVMap_instValueBool;
v_toBind_2836_ = lean_ctor_get(v_inst_2820_, 1);
lean_inc(v_toBind_2836_);
v___x_2837_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_2824_);
v_snd_2838_ = lean_ctor_get(v_resStartStop_2834_, 1);
lean_inc(v_snd_2838_);
v_fst_2839_ = lean_ctor_get(v_resStartStop_2834_, 0);
lean_inc_n(v_fst_2839_, 2);
lean_dec_ref(v_resStartStop_2834_);
v_fst_2840_ = lean_ctor_get(v_snd_2838_, 0);
lean_inc(v_fst_2840_);
v_snd_2841_ = lean_ctor_get(v_snd_2838_, 1);
lean_inc(v_snd_2841_);
lean_dec(v_snd_2838_);
lean_inc_ref(v_oldTraces_2831_);
v___f_2842_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2842_, 0, v_oldTraces_2831_);
lean_inc_ref(v_inst_2820_);
v___f_2843_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2843_, 0, v_inst_2820_);
lean_closure_set(v___f_2843_, 1, v___x_2837_);
lean_closure_set(v___f_2843_, 2, v_fst_2839_);
v___x_2848_ = l_Lean_trace_profiler;
v___x_2849_ = l_Lean_Option_get___redArg(v___x_2835_, v_opts_2829_, v___x_2848_);
v___x_2870_ = lean_unbox(v___x_2849_);
if (v___x_2870_ == 0)
{
uint8_t v___x_2871_; 
v___x_2871_ = lean_unbox(v___x_2849_);
v___y_2860_ = v___x_2871_;
goto v___jp_2859_;
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; uint8_t v___x_2875_; 
v___x_2872_ = l_Lean_KVMap_instValueNat;
v___x_2873_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2874_ = l_Lean_Option_get___redArg(v___x_2835_, v_opts_2829_, v___x_2873_);
v___x_2875_ = lean_unbox(v___x_2874_);
lean_dec(v___x_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2877_; double v___x_2878_; double v___x_2879_; double v___x_2880_; 
v___x_2876_ = l_Lean_trace_profiler_threshold;
v___x_2877_ = l_Lean_Option_get___redArg(v___x_2872_, v_opts_2829_, v___x_2876_);
v___x_2878_ = lean_float_of_nat(v___x_2877_);
v___x_2879_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_2880_ = lean_float_div(v___x_2878_, v___x_2879_);
v___y_2865_ = v___x_2880_;
goto v___jp_2864_;
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; double v___x_2883_; 
v___x_2881_ = l_Lean_trace_profiler_threshold;
v___x_2882_ = l_Lean_Option_get___redArg(v___x_2872_, v_opts_2829_, v___x_2881_);
v___x_2883_ = lean_float_of_nat(v___x_2882_);
v___y_2865_ = v___x_2883_;
goto v___jp_2864_;
}
}
v___jp_2844_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_2820_, v_inst_2821_, v_inst_2822_, v_inst_2823_, v_oldTraces_2831_, v_data_2845_, v_ref_2832_, v_msg_2833_);
v___x_2847_ = lean_apply_4(v_toBind_2836_, lean_box(0), lean_box(0), v___x_2846_, v___f_2843_);
return v___x_2847_;
}
v___jp_2850_:
{
lean_object* v_result_2851_; lean_object* v___x_2852_; double v___x_2853_; lean_object* v_data_2854_; uint8_t v___x_2855_; 
v_result_2851_ = lean_apply_1(v_inst_2825_, v_fst_2839_);
v___x_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2852_, 0, v_result_2851_);
v___x_2853_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_2828_);
lean_inc_ref(v___x_2852_);
lean_inc(v_cls_2826_);
v_data_2854_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2854_, 0, v_cls_2826_);
lean_ctor_set(v_data_2854_, 1, v___x_2852_);
lean_ctor_set(v_data_2854_, 2, v_tag_2828_);
lean_ctor_set_float(v_data_2854_, sizeof(void*)*3, v___x_2853_);
lean_ctor_set_float(v_data_2854_, sizeof(void*)*3 + 8, v___x_2853_);
lean_ctor_set_uint8(v_data_2854_, sizeof(void*)*3 + 16, v_collapsed_2827_);
v___x_2855_ = lean_unbox(v___x_2849_);
lean_dec(v___x_2849_);
if (v___x_2855_ == 0)
{
lean_dec_ref_known(v___x_2852_, 1);
lean_dec(v_snd_2841_);
lean_dec(v_fst_2840_);
lean_dec_ref(v_tag_2828_);
lean_dec(v_cls_2826_);
v_data_2845_ = v_data_2854_;
goto v___jp_2844_;
}
else
{
lean_object* v_data_2856_; double v___x_2857_; double v___x_2858_; 
lean_dec_ref_known(v_data_2854_, 3);
v_data_2856_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2856_, 0, v_cls_2826_);
lean_ctor_set(v_data_2856_, 1, v___x_2852_);
lean_ctor_set(v_data_2856_, 2, v_tag_2828_);
v___x_2857_ = lean_unbox_float(v_fst_2840_);
lean_dec(v_fst_2840_);
lean_ctor_set_float(v_data_2856_, sizeof(void*)*3, v___x_2857_);
v___x_2858_ = lean_unbox_float(v_snd_2841_);
lean_dec(v_snd_2841_);
lean_ctor_set_float(v_data_2856_, sizeof(void*)*3 + 8, v___x_2858_);
lean_ctor_set_uint8(v_data_2856_, sizeof(void*)*3 + 16, v_collapsed_2827_);
v_data_2845_ = v_data_2856_;
goto v___jp_2844_;
}
}
v___jp_2859_:
{
if (v_clsEnabled_2830_ == 0)
{
if (v___y_2860_ == 0)
{
lean_object* v_modifyTraceState_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
lean_dec(v___x_2849_);
lean_dec(v_snd_2841_);
lean_dec(v_fst_2840_);
lean_dec(v_fst_2839_);
lean_dec_ref(v_msg_2833_);
lean_dec(v_ref_2832_);
lean_dec_ref(v_oldTraces_2831_);
lean_dec_ref(v_tag_2828_);
lean_dec(v_cls_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec(v_inst_2823_);
lean_dec_ref(v_inst_2822_);
lean_dec_ref(v_inst_2820_);
v_modifyTraceState_2861_ = lean_ctor_get(v_inst_2821_, 0);
lean_inc(v_modifyTraceState_2861_);
lean_dec_ref(v_inst_2821_);
v___x_2862_ = lean_apply_1(v_modifyTraceState_2861_, v___f_2842_);
v___x_2863_ = lean_apply_4(v_toBind_2836_, lean_box(0), lean_box(0), v___x_2862_, v___f_2843_);
return v___x_2863_;
}
else
{
lean_dec_ref(v___f_2842_);
goto v___jp_2850_;
}
}
else
{
lean_dec_ref(v___f_2842_);
goto v___jp_2850_;
}
}
v___jp_2864_:
{
double v___x_2866_; double v___x_2867_; double v___x_2868_; uint8_t v___x_2869_; 
v___x_2866_ = lean_unbox_float(v_snd_2841_);
v___x_2867_ = lean_unbox_float(v_fst_2840_);
v___x_2868_ = lean_float_sub(v___x_2866_, v___x_2867_);
v___x_2869_ = lean_float_decLt(v___y_2865_, v___x_2868_);
v___y_2860_ = v___x_2869_;
goto v___jp_2859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg___boxed(lean_object* v_inst_2884_, lean_object* v_inst_2885_, lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_always_2888_, lean_object* v_inst_2889_, lean_object* v_cls_2890_, lean_object* v_collapsed_2891_, lean_object* v_tag_2892_, lean_object* v_opts_2893_, lean_object* v_clsEnabled_2894_, lean_object* v_oldTraces_2895_, lean_object* v_ref_2896_, lean_object* v_msg_2897_, lean_object* v_resStartStop_2898_){
_start:
{
uint8_t v_collapsed_boxed_2899_; uint8_t v_clsEnabled_boxed_2900_; lean_object* v_res_2901_; 
v_collapsed_boxed_2899_ = lean_unbox(v_collapsed_2891_);
v_clsEnabled_boxed_2900_ = lean_unbox(v_clsEnabled_2894_);
v_res_2901_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2884_, v_inst_2885_, v_inst_2886_, v_inst_2887_, v_always_2888_, v_inst_2889_, v_cls_2890_, v_collapsed_boxed_2899_, v_tag_2892_, v_opts_2893_, v_clsEnabled_boxed_2900_, v_oldTraces_2895_, v_ref_2896_, v_msg_2897_, v_resStartStop_2898_);
lean_dec_ref(v_opts_2893_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(lean_object* v_00_u03b1_2902_, lean_object* v_m_2903_, lean_object* v_inst_2904_, lean_object* v_inst_2905_, lean_object* v_00_u03b5_2906_, lean_object* v_inst_2907_, lean_object* v_inst_2908_, lean_object* v_always_2909_, lean_object* v_inst_2910_, lean_object* v_cls_2911_, uint8_t v_collapsed_2912_, lean_object* v_tag_2913_, lean_object* v_opts_2914_, uint8_t v_clsEnabled_2915_, lean_object* v_oldTraces_2916_, lean_object* v_ref_2917_, lean_object* v_msg_2918_, lean_object* v_resStartStop_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2904_, v_inst_2905_, v_inst_2907_, v_inst_2908_, v_always_2909_, v_inst_2910_, v_cls_2911_, v_collapsed_2912_, v_tag_2913_, v_opts_2914_, v_clsEnabled_2915_, v_oldTraces_2916_, v_ref_2917_, v_msg_2918_, v_resStartStop_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_2921_ = _args[0];
lean_object* v_m_2922_ = _args[1];
lean_object* v_inst_2923_ = _args[2];
lean_object* v_inst_2924_ = _args[3];
lean_object* v_00_u03b5_2925_ = _args[4];
lean_object* v_inst_2926_ = _args[5];
lean_object* v_inst_2927_ = _args[6];
lean_object* v_always_2928_ = _args[7];
lean_object* v_inst_2929_ = _args[8];
lean_object* v_cls_2930_ = _args[9];
lean_object* v_collapsed_2931_ = _args[10];
lean_object* v_tag_2932_ = _args[11];
lean_object* v_opts_2933_ = _args[12];
lean_object* v_clsEnabled_2934_ = _args[13];
lean_object* v_oldTraces_2935_ = _args[14];
lean_object* v_ref_2936_ = _args[15];
lean_object* v_msg_2937_ = _args[16];
lean_object* v_resStartStop_2938_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_2939_; uint8_t v_clsEnabled_boxed_2940_; lean_object* v_res_2941_; 
v_collapsed_boxed_2939_ = lean_unbox(v_collapsed_2931_);
v_clsEnabled_boxed_2940_ = lean_unbox(v_clsEnabled_2934_);
v_res_2941_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(v_00_u03b1_2921_, v_m_2922_, v_inst_2923_, v_inst_2924_, v_00_u03b5_2925_, v_inst_2926_, v_inst_2927_, v_always_2928_, v_inst_2929_, v_cls_2930_, v_collapsed_boxed_2939_, v_tag_2932_, v_opts_2933_, v_clsEnabled_boxed_2940_, v_oldTraces_2935_, v_ref_2936_, v_msg_2937_, v_resStartStop_2938_);
lean_dec_ref(v_opts_2933_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__0(lean_object* v_inst_2942_, lean_object* v_____do__lift_2943_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_apply_1(v_inst_2942_, v_____do__lift_2943_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1(lean_object* v_inst_2945_, lean_object* v_inst_2946_, lean_object* v_inst_2947_, lean_object* v_inst_2948_, lean_object* v_always_2949_, lean_object* v_inst_2950_, lean_object* v_cls_2951_, uint8_t v_collapsed_2952_, lean_object* v_tag_2953_, lean_object* v_opts_2954_, uint8_t v_clsEnabled_2955_, lean_object* v_oldTraces_2956_, lean_object* v_ref_2957_, lean_object* v_msg_2958_, lean_object* v_resStartStop_2959_){
_start:
{
lean_object* v___x_2960_; 
v___x_2960_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2945_, v_inst_2946_, v_inst_2947_, v_inst_2948_, v_always_2949_, v_inst_2950_, v_cls_2951_, v_collapsed_2952_, v_tag_2953_, v_opts_2954_, v_clsEnabled_2955_, v_oldTraces_2956_, v_ref_2957_, v_msg_2958_, v_resStartStop_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1___boxed(lean_object* v_inst_2961_, lean_object* v_inst_2962_, lean_object* v_inst_2963_, lean_object* v_inst_2964_, lean_object* v_always_2965_, lean_object* v_inst_2966_, lean_object* v_cls_2967_, lean_object* v_collapsed_2968_, lean_object* v_tag_2969_, lean_object* v_opts_2970_, lean_object* v_clsEnabled_2971_, lean_object* v_oldTraces_2972_, lean_object* v_ref_2973_, lean_object* v_msg_2974_, lean_object* v_resStartStop_2975_){
_start:
{
uint8_t v_collapsed_boxed_2976_; uint8_t v_clsEnabled_boxed_2977_; lean_object* v_res_2978_; 
v_collapsed_boxed_2976_ = lean_unbox(v_collapsed_2968_);
v_clsEnabled_boxed_2977_ = lean_unbox(v_clsEnabled_2971_);
v_res_2978_ = l_Lean_withTraceNodeBefore___redArg___lam__1(v_inst_2961_, v_inst_2962_, v_inst_2963_, v_inst_2964_, v_always_2965_, v_inst_2966_, v_cls_2967_, v_collapsed_boxed_2976_, v_tag_2969_, v_opts_2970_, v_clsEnabled_boxed_2977_, v_oldTraces_2972_, v_ref_2973_, v_msg_2974_, v_resStartStop_2975_);
lean_dec_ref(v_opts_2970_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10(lean_object* v_always_2979_, lean_object* v_inst_2980_, lean_object* v_inst_2981_, lean_object* v_inst_2982_, lean_object* v_inst_2983_, lean_object* v_inst_2984_, lean_object* v_cls_2985_, uint8_t v_collapsed_2986_, lean_object* v_tag_2987_, lean_object* v_opts_2988_, uint8_t v_clsEnabled_2989_, lean_object* v_oldTraces_2990_, lean_object* v_ref_2991_, lean_object* v_toPure_2992_, lean_object* v_toBind_2993_, lean_object* v_k_2994_, lean_object* v___x_2995_, lean_object* v_inst_2996_, lean_object* v_msg_2997_){
_start:
{
lean_object* v_tryCatch_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___f_3001_; lean_object* v___f_3002_; lean_object* v___f_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v_tryCatch_2998_ = lean_ctor_get(v_always_2979_, 1);
lean_inc(v_tryCatch_2998_);
v___x_2999_ = lean_box(v_collapsed_2986_);
v___x_3000_ = lean_box(v_clsEnabled_2989_);
lean_inc_ref(v_opts_2988_);
v___f_3001_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__1___boxed), 15, 14);
lean_closure_set(v___f_3001_, 0, v_inst_2980_);
lean_closure_set(v___f_3001_, 1, v_inst_2981_);
lean_closure_set(v___f_3001_, 2, v_inst_2982_);
lean_closure_set(v___f_3001_, 3, v_inst_2983_);
lean_closure_set(v___f_3001_, 4, v_always_2979_);
lean_closure_set(v___f_3001_, 5, v_inst_2984_);
lean_closure_set(v___f_3001_, 6, v_cls_2985_);
lean_closure_set(v___f_3001_, 7, v___x_2999_);
lean_closure_set(v___f_3001_, 8, v_tag_2987_);
lean_closure_set(v___f_3001_, 9, v_opts_2988_);
lean_closure_set(v___f_3001_, 10, v___x_3000_);
lean_closure_set(v___f_3001_, 11, v_oldTraces_2990_);
lean_closure_set(v___f_3001_, 12, v_ref_2991_);
lean_closure_set(v___f_3001_, 13, v_msg_2997_);
lean_inc_n(v_toPure_2992_, 2);
v___f_3002_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3002_, 0, v_toPure_2992_);
v___f_3003_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3003_, 0, v_toPure_2992_);
lean_inc(v_toBind_2993_);
v___x_3004_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v_k_2994_, v___f_3003_);
v___x_3005_ = lean_apply_3(v_tryCatch_2998_, lean_box(0), v___x_3004_, v___f_3002_);
v___x_3006_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3007_ = l_Lean_Option_get___redArg(v___x_2995_, v_opts_2988_, v___x_3006_);
lean_dec_ref(v_opts_2988_);
v___x_3008_ = lean_unbox(v___x_3007_);
lean_dec(v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3009_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_3010_ = lean_apply_2(v_inst_2996_, lean_box(0), v___x_3009_);
lean_inc(v___x_3010_);
lean_inc_n(v_toBind_2993_, 2);
v___f_3011_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3011_, 0, v_toPure_2992_);
lean_closure_set(v___f_3011_, 1, v_toBind_2993_);
lean_closure_set(v___f_3011_, 2, v___x_3010_);
lean_closure_set(v___f_3011_, 3, v___x_3005_);
v___x_3012_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3010_, v___f_3011_);
v___x_3013_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3012_, v___f_3001_);
return v___x_3013_;
}
else
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3014_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_3015_ = lean_apply_2(v_inst_2996_, lean_box(0), v___x_3014_);
lean_inc(v___x_3015_);
lean_inc_n(v_toBind_2993_, 2);
v___f_3016_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_3016_, 0, v_toPure_2992_);
lean_closure_set(v___f_3016_, 1, v_toBind_2993_);
lean_closure_set(v___f_3016_, 2, v___x_3015_);
lean_closure_set(v___f_3016_, 3, v___x_3005_);
v___x_3017_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3015_, v___f_3016_);
v___x_3018_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3017_, v___f_3001_);
return v___x_3018_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_3019_ = _args[0];
lean_object* v_inst_3020_ = _args[1];
lean_object* v_inst_3021_ = _args[2];
lean_object* v_inst_3022_ = _args[3];
lean_object* v_inst_3023_ = _args[4];
lean_object* v_inst_3024_ = _args[5];
lean_object* v_cls_3025_ = _args[6];
lean_object* v_collapsed_3026_ = _args[7];
lean_object* v_tag_3027_ = _args[8];
lean_object* v_opts_3028_ = _args[9];
lean_object* v_clsEnabled_3029_ = _args[10];
lean_object* v_oldTraces_3030_ = _args[11];
lean_object* v_ref_3031_ = _args[12];
lean_object* v_toPure_3032_ = _args[13];
lean_object* v_toBind_3033_ = _args[14];
lean_object* v_k_3034_ = _args[15];
lean_object* v___x_3035_ = _args[16];
lean_object* v_inst_3036_ = _args[17];
lean_object* v_msg_3037_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3038_; uint8_t v_clsEnabled_boxed_3039_; lean_object* v_res_3040_; 
v_collapsed_boxed_3038_ = lean_unbox(v_collapsed_3026_);
v_clsEnabled_boxed_3039_ = lean_unbox(v_clsEnabled_3029_);
v_res_3040_ = l_Lean_withTraceNodeBefore___redArg___lam__10(v_always_3019_, v_inst_3020_, v_inst_3021_, v_inst_3022_, v_inst_3023_, v_inst_3024_, v_cls_3025_, v_collapsed_boxed_3038_, v_tag_3027_, v_opts_3028_, v_clsEnabled_boxed_3039_, v_oldTraces_3030_, v_ref_3031_, v_toPure_3032_, v_toBind_3033_, v_k_3034_, v___x_3035_, v_inst_3036_, v_msg_3037_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3(lean_object* v_always_3041_, lean_object* v_inst_3042_, lean_object* v_inst_3043_, lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_cls_3047_, uint8_t v_collapsed_3048_, lean_object* v_tag_3049_, lean_object* v_opts_3050_, uint8_t v_clsEnabled_3051_, lean_object* v_oldTraces_3052_, lean_object* v_toPure_3053_, lean_object* v_toBind_3054_, lean_object* v_k_3055_, lean_object* v___x_3056_, lean_object* v_inst_3057_, lean_object* v_msg_3058_, lean_object* v___f_3059_, lean_object* v_withRef_3060_, lean_object* v_getRef_3061_, lean_object* v_ref_3062_){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___f_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___f_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3063_ = lean_box(v_collapsed_3048_);
v___x_3064_ = lean_box(v_clsEnabled_3051_);
lean_inc_n(v_toBind_3054_, 3);
lean_inc(v_ref_3062_);
v___f_3065_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__10___boxed), 19, 18);
lean_closure_set(v___f_3065_, 0, v_always_3041_);
lean_closure_set(v___f_3065_, 1, v_inst_3042_);
lean_closure_set(v___f_3065_, 2, v_inst_3043_);
lean_closure_set(v___f_3065_, 3, v_inst_3044_);
lean_closure_set(v___f_3065_, 4, v_inst_3045_);
lean_closure_set(v___f_3065_, 5, v_inst_3046_);
lean_closure_set(v___f_3065_, 6, v_cls_3047_);
lean_closure_set(v___f_3065_, 7, v___x_3063_);
lean_closure_set(v___f_3065_, 8, v_tag_3049_);
lean_closure_set(v___f_3065_, 9, v_opts_3050_);
lean_closure_set(v___f_3065_, 10, v___x_3064_);
lean_closure_set(v___f_3065_, 11, v_oldTraces_3052_);
lean_closure_set(v___f_3065_, 12, v_ref_3062_);
lean_closure_set(v___f_3065_, 13, v_toPure_3053_);
lean_closure_set(v___f_3065_, 14, v_toBind_3054_);
lean_closure_set(v___f_3065_, 15, v_k_3055_);
lean_closure_set(v___f_3065_, 16, v___x_3056_);
lean_closure_set(v___f_3065_, 17, v_inst_3057_);
v___x_3066_ = lean_box(0);
v___x_3067_ = lean_apply_1(v_msg_3058_, v___x_3066_);
v___x_3068_ = lean_apply_4(v_toBind_3054_, lean_box(0), lean_box(0), v___x_3067_, v___f_3059_);
v___f_3069_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3069_, 0, v_ref_3062_);
lean_closure_set(v___f_3069_, 1, v_withRef_3060_);
lean_closure_set(v___f_3069_, 2, v___x_3068_);
v___x_3070_ = lean_apply_4(v_toBind_3054_, lean_box(0), lean_box(0), v_getRef_3061_, v___f_3069_);
v___x_3071_ = lean_apply_4(v_toBind_3054_, lean_box(0), lean_box(0), v___x_3070_, v___f_3065_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_3072_ = _args[0];
lean_object* v_inst_3073_ = _args[1];
lean_object* v_inst_3074_ = _args[2];
lean_object* v_inst_3075_ = _args[3];
lean_object* v_inst_3076_ = _args[4];
lean_object* v_inst_3077_ = _args[5];
lean_object* v_cls_3078_ = _args[6];
lean_object* v_collapsed_3079_ = _args[7];
lean_object* v_tag_3080_ = _args[8];
lean_object* v_opts_3081_ = _args[9];
lean_object* v_clsEnabled_3082_ = _args[10];
lean_object* v_oldTraces_3083_ = _args[11];
lean_object* v_toPure_3084_ = _args[12];
lean_object* v_toBind_3085_ = _args[13];
lean_object* v_k_3086_ = _args[14];
lean_object* v___x_3087_ = _args[15];
lean_object* v_inst_3088_ = _args[16];
lean_object* v_msg_3089_ = _args[17];
lean_object* v___f_3090_ = _args[18];
lean_object* v_withRef_3091_ = _args[19];
lean_object* v_getRef_3092_ = _args[20];
lean_object* v_ref_3093_ = _args[21];
_start:
{
uint8_t v_collapsed_boxed_3094_; uint8_t v_clsEnabled_boxed_3095_; lean_object* v_res_3096_; 
v_collapsed_boxed_3094_ = lean_unbox(v_collapsed_3079_);
v_clsEnabled_boxed_3095_ = lean_unbox(v_clsEnabled_3082_);
v_res_3096_ = l_Lean_withTraceNodeBefore___redArg___lam__3(v_always_3072_, v_inst_3073_, v_inst_3074_, v_inst_3075_, v_inst_3076_, v_inst_3077_, v_cls_3078_, v_collapsed_boxed_3094_, v_tag_3080_, v_opts_3081_, v_clsEnabled_boxed_3095_, v_oldTraces_3083_, v_toPure_3084_, v_toBind_3085_, v_k_3086_, v___x_3087_, v_inst_3088_, v_msg_3089_, v___f_3090_, v_withRef_3091_, v_getRef_3092_, v_ref_3093_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2(lean_object* v_inst_3097_, lean_object* v_always_3098_, lean_object* v_inst_3099_, lean_object* v_inst_3100_, lean_object* v_inst_3101_, lean_object* v_inst_3102_, lean_object* v_cls_3103_, uint8_t v_collapsed_3104_, lean_object* v_tag_3105_, lean_object* v_opts_3106_, uint8_t v_clsEnabled_3107_, lean_object* v_toPure_3108_, lean_object* v_toBind_3109_, lean_object* v_k_3110_, lean_object* v___x_3111_, lean_object* v_inst_3112_, lean_object* v_msg_3113_, lean_object* v___f_3114_, lean_object* v_oldTraces_3115_){
_start:
{
lean_object* v_getRef_3116_; lean_object* v_withRef_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___f_3120_; lean_object* v___x_3121_; 
v_getRef_3116_ = lean_ctor_get(v_inst_3097_, 0);
lean_inc_n(v_getRef_3116_, 2);
v_withRef_3117_ = lean_ctor_get(v_inst_3097_, 1);
lean_inc(v_withRef_3117_);
v___x_3118_ = lean_box(v_collapsed_3104_);
v___x_3119_ = lean_box(v_clsEnabled_3107_);
lean_inc(v_toBind_3109_);
v___f_3120_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__3___boxed), 22, 21);
lean_closure_set(v___f_3120_, 0, v_always_3098_);
lean_closure_set(v___f_3120_, 1, v_inst_3099_);
lean_closure_set(v___f_3120_, 2, v_inst_3100_);
lean_closure_set(v___f_3120_, 3, v_inst_3097_);
lean_closure_set(v___f_3120_, 4, v_inst_3101_);
lean_closure_set(v___f_3120_, 5, v_inst_3102_);
lean_closure_set(v___f_3120_, 6, v_cls_3103_);
lean_closure_set(v___f_3120_, 7, v___x_3118_);
lean_closure_set(v___f_3120_, 8, v_tag_3105_);
lean_closure_set(v___f_3120_, 9, v_opts_3106_);
lean_closure_set(v___f_3120_, 10, v___x_3119_);
lean_closure_set(v___f_3120_, 11, v_oldTraces_3115_);
lean_closure_set(v___f_3120_, 12, v_toPure_3108_);
lean_closure_set(v___f_3120_, 13, v_toBind_3109_);
lean_closure_set(v___f_3120_, 14, v_k_3110_);
lean_closure_set(v___f_3120_, 15, v___x_3111_);
lean_closure_set(v___f_3120_, 16, v_inst_3112_);
lean_closure_set(v___f_3120_, 17, v_msg_3113_);
lean_closure_set(v___f_3120_, 18, v___f_3114_);
lean_closure_set(v___f_3120_, 19, v_withRef_3117_);
lean_closure_set(v___f_3120_, 20, v_getRef_3116_);
v___x_3121_ = lean_apply_4(v_toBind_3109_, lean_box(0), lean_box(0), v_getRef_3116_, v___f_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2___boxed(lean_object** _args){
lean_object* v_inst_3122_ = _args[0];
lean_object* v_always_3123_ = _args[1];
lean_object* v_inst_3124_ = _args[2];
lean_object* v_inst_3125_ = _args[3];
lean_object* v_inst_3126_ = _args[4];
lean_object* v_inst_3127_ = _args[5];
lean_object* v_cls_3128_ = _args[6];
lean_object* v_collapsed_3129_ = _args[7];
lean_object* v_tag_3130_ = _args[8];
lean_object* v_opts_3131_ = _args[9];
lean_object* v_clsEnabled_3132_ = _args[10];
lean_object* v_toPure_3133_ = _args[11];
lean_object* v_toBind_3134_ = _args[12];
lean_object* v_k_3135_ = _args[13];
lean_object* v___x_3136_ = _args[14];
lean_object* v_inst_3137_ = _args[15];
lean_object* v_msg_3138_ = _args[16];
lean_object* v___f_3139_ = _args[17];
lean_object* v_oldTraces_3140_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3141_; uint8_t v_clsEnabled_boxed_3142_; lean_object* v_res_3143_; 
v_collapsed_boxed_3141_ = lean_unbox(v_collapsed_3129_);
v_clsEnabled_boxed_3142_ = lean_unbox(v_clsEnabled_3132_);
v_res_3143_ = l_Lean_withTraceNodeBefore___redArg___lam__2(v_inst_3122_, v_always_3123_, v_inst_3124_, v_inst_3125_, v_inst_3126_, v_inst_3127_, v_cls_3128_, v_collapsed_boxed_3141_, v_tag_3130_, v_opts_3131_, v_clsEnabled_boxed_3142_, v_toPure_3133_, v_toBind_3134_, v_k_3135_, v___x_3136_, v_inst_3137_, v_msg_3138_, v___f_3139_, v_oldTraces_3140_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4(lean_object* v_inst_3144_, lean_object* v_always_3145_, lean_object* v_inst_3146_, lean_object* v_inst_3147_, lean_object* v_inst_3148_, lean_object* v_inst_3149_, lean_object* v_cls_3150_, uint8_t v_collapsed_3151_, lean_object* v_tag_3152_, lean_object* v_opts_3153_, lean_object* v_toPure_3154_, lean_object* v_toBind_3155_, lean_object* v_k_3156_, lean_object* v___x_3157_, lean_object* v_inst_3158_, lean_object* v_msg_3159_, lean_object* v___f_3160_, uint8_t v_clsEnabled_3161_){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___f_3164_; 
v___x_3162_ = lean_box(v_collapsed_3151_);
v___x_3163_ = lean_box(v_clsEnabled_3161_);
lean_inc_ref(v___x_3157_);
lean_inc(v_k_3156_);
lean_inc(v_toBind_3155_);
lean_inc_ref(v_opts_3153_);
lean_inc_ref(v_inst_3147_);
lean_inc_ref(v_inst_3146_);
v___f_3164_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__2___boxed), 19, 18);
lean_closure_set(v___f_3164_, 0, v_inst_3144_);
lean_closure_set(v___f_3164_, 1, v_always_3145_);
lean_closure_set(v___f_3164_, 2, v_inst_3146_);
lean_closure_set(v___f_3164_, 3, v_inst_3147_);
lean_closure_set(v___f_3164_, 4, v_inst_3148_);
lean_closure_set(v___f_3164_, 5, v_inst_3149_);
lean_closure_set(v___f_3164_, 6, v_cls_3150_);
lean_closure_set(v___f_3164_, 7, v___x_3162_);
lean_closure_set(v___f_3164_, 8, v_tag_3152_);
lean_closure_set(v___f_3164_, 9, v_opts_3153_);
lean_closure_set(v___f_3164_, 10, v___x_3163_);
lean_closure_set(v___f_3164_, 11, v_toPure_3154_);
lean_closure_set(v___f_3164_, 12, v_toBind_3155_);
lean_closure_set(v___f_3164_, 13, v_k_3156_);
lean_closure_set(v___f_3164_, 14, v___x_3157_);
lean_closure_set(v___f_3164_, 15, v_inst_3158_);
lean_closure_set(v___f_3164_, 16, v_msg_3159_);
lean_closure_set(v___f_3164_, 17, v___f_3160_);
if (v_clsEnabled_3161_ == 0)
{
lean_object* v___x_3168_; lean_object* v___x_3169_; uint8_t v___x_3170_; 
v___x_3168_ = l_Lean_trace_profiler;
v___x_3169_ = l_Lean_Option_get___redArg(v___x_3157_, v_opts_3153_, v___x_3168_);
lean_dec_ref(v_opts_3153_);
v___x_3170_ = lean_unbox(v___x_3169_);
lean_dec(v___x_3169_);
if (v___x_3170_ == 0)
{
lean_dec_ref(v___f_3164_);
lean_dec(v_toBind_3155_);
lean_dec_ref(v_inst_3147_);
lean_dec_ref(v_inst_3146_);
return v_k_3156_;
}
else
{
lean_dec(v_k_3156_);
goto v___jp_3165_;
}
}
else
{
lean_dec_ref(v___x_3157_);
lean_dec(v_k_3156_);
lean_dec_ref(v_opts_3153_);
goto v___jp_3165_;
}
v___jp_3165_:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3146_, v_inst_3147_);
v___x_3167_ = lean_apply_4(v_toBind_3155_, lean_box(0), lean_box(0), v___x_3166_, v___f_3164_);
return v___x_3167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_3171_ = _args[0];
lean_object* v_always_3172_ = _args[1];
lean_object* v_inst_3173_ = _args[2];
lean_object* v_inst_3174_ = _args[3];
lean_object* v_inst_3175_ = _args[4];
lean_object* v_inst_3176_ = _args[5];
lean_object* v_cls_3177_ = _args[6];
lean_object* v_collapsed_3178_ = _args[7];
lean_object* v_tag_3179_ = _args[8];
lean_object* v_opts_3180_ = _args[9];
lean_object* v_toPure_3181_ = _args[10];
lean_object* v_toBind_3182_ = _args[11];
lean_object* v_k_3183_ = _args[12];
lean_object* v___x_3184_ = _args[13];
lean_object* v_inst_3185_ = _args[14];
lean_object* v_msg_3186_ = _args[15];
lean_object* v___f_3187_ = _args[16];
lean_object* v_clsEnabled_3188_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3189_; uint8_t v_clsEnabled_boxed_3190_; lean_object* v_res_3191_; 
v_collapsed_boxed_3189_ = lean_unbox(v_collapsed_3178_);
v_clsEnabled_boxed_3190_ = lean_unbox(v_clsEnabled_3188_);
v_res_3191_ = l_Lean_withTraceNodeBefore___redArg___lam__4(v_inst_3171_, v_always_3172_, v_inst_3173_, v_inst_3174_, v_inst_3175_, v_inst_3176_, v_cls_3177_, v_collapsed_boxed_3189_, v_tag_3179_, v_opts_3180_, v_toPure_3181_, v_toBind_3182_, v_k_3183_, v___x_3184_, v_inst_3185_, v_msg_3186_, v___f_3187_, v_clsEnabled_boxed_3190_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7(lean_object* v_k_3192_, lean_object* v_inst_3193_, lean_object* v_toApplicative_3194_, lean_object* v_inst_3195_, lean_object* v_always_3196_, lean_object* v_inst_3197_, lean_object* v_inst_3198_, lean_object* v_inst_3199_, lean_object* v_cls_3200_, uint8_t v_collapsed_3201_, lean_object* v_tag_3202_, lean_object* v_toBind_3203_, lean_object* v___x_3204_, lean_object* v_inst_3205_, lean_object* v_msg_3206_, lean_object* v___f_3207_, lean_object* v_inst_3208_, lean_object* v_opts_3209_){
_start:
{
uint8_t v_hasTrace_3210_; 
v_hasTrace_3210_ = lean_ctor_get_uint8(v_opts_3209_, sizeof(void*)*1);
if (v_hasTrace_3210_ == 0)
{
lean_dec_ref(v_opts_3209_);
lean_dec(v_inst_3208_);
lean_dec(v___f_3207_);
lean_dec(v_msg_3206_);
lean_dec(v_inst_3205_);
lean_dec_ref(v___x_3204_);
lean_dec(v_toBind_3203_);
lean_dec_ref(v_tag_3202_);
lean_dec(v_cls_3200_);
lean_dec_ref(v_inst_3199_);
lean_dec(v_inst_3198_);
lean_dec_ref(v_inst_3197_);
lean_dec_ref(v_always_3196_);
lean_dec_ref(v_inst_3195_);
lean_dec_ref(v_toApplicative_3194_);
lean_dec_ref(v_inst_3193_);
return v_k_3192_;
}
else
{
lean_object* v_getInheritedTraceOptions_3211_; lean_object* v_toPure_3212_; lean_object* v___x_3213_; lean_object* v___f_3214_; lean_object* v___f_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v_getInheritedTraceOptions_3211_ = lean_ctor_get(v_inst_3193_, 2);
lean_inc(v_getInheritedTraceOptions_3211_);
v_toPure_3212_ = lean_ctor_get(v_toApplicative_3194_, 1);
lean_inc_n(v_toPure_3212_, 2);
lean_dec_ref(v_toApplicative_3194_);
v___x_3213_ = lean_box(v_collapsed_3201_);
lean_inc_n(v_toBind_3203_, 3);
lean_inc(v_cls_3200_);
v___f_3214_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__4___boxed), 18, 17);
lean_closure_set(v___f_3214_, 0, v_inst_3195_);
lean_closure_set(v___f_3214_, 1, v_always_3196_);
lean_closure_set(v___f_3214_, 2, v_inst_3197_);
lean_closure_set(v___f_3214_, 3, v_inst_3193_);
lean_closure_set(v___f_3214_, 4, v_inst_3198_);
lean_closure_set(v___f_3214_, 5, v_inst_3199_);
lean_closure_set(v___f_3214_, 6, v_cls_3200_);
lean_closure_set(v___f_3214_, 7, v___x_3213_);
lean_closure_set(v___f_3214_, 8, v_tag_3202_);
lean_closure_set(v___f_3214_, 9, v_opts_3209_);
lean_closure_set(v___f_3214_, 10, v_toPure_3212_);
lean_closure_set(v___f_3214_, 11, v_toBind_3203_);
lean_closure_set(v___f_3214_, 12, v_k_3192_);
lean_closure_set(v___f_3214_, 13, v___x_3204_);
lean_closure_set(v___f_3214_, 14, v_inst_3205_);
lean_closure_set(v___f_3214_, 15, v_msg_3206_);
lean_closure_set(v___f_3214_, 16, v___f_3207_);
v___f_3215_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3215_, 0, v_toPure_3212_);
lean_closure_set(v___f_3215_, 1, v_cls_3200_);
lean_closure_set(v___f_3215_, 2, v_toBind_3203_);
lean_closure_set(v___f_3215_, 3, v_inst_3208_);
v___x_3216_ = lean_apply_4(v_toBind_3203_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3211_, v___f_3215_);
v___x_3217_ = lean_apply_4(v_toBind_3203_, lean_box(0), lean_box(0), v___x_3216_, v___f_3214_);
return v___x_3217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_k_3218_ = _args[0];
lean_object* v_inst_3219_ = _args[1];
lean_object* v_toApplicative_3220_ = _args[2];
lean_object* v_inst_3221_ = _args[3];
lean_object* v_always_3222_ = _args[4];
lean_object* v_inst_3223_ = _args[5];
lean_object* v_inst_3224_ = _args[6];
lean_object* v_inst_3225_ = _args[7];
lean_object* v_cls_3226_ = _args[8];
lean_object* v_collapsed_3227_ = _args[9];
lean_object* v_tag_3228_ = _args[10];
lean_object* v_toBind_3229_ = _args[11];
lean_object* v___x_3230_ = _args[12];
lean_object* v_inst_3231_ = _args[13];
lean_object* v_msg_3232_ = _args[14];
lean_object* v___f_3233_ = _args[15];
lean_object* v_inst_3234_ = _args[16];
lean_object* v_opts_3235_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3236_; lean_object* v_res_3237_; 
v_collapsed_boxed_3236_ = lean_unbox(v_collapsed_3227_);
v_res_3237_ = l_Lean_withTraceNodeBefore___redArg___lam__7(v_k_3218_, v_inst_3219_, v_toApplicative_3220_, v_inst_3221_, v_always_3222_, v_inst_3223_, v_inst_3224_, v_inst_3225_, v_cls_3226_, v_collapsed_boxed_3236_, v_tag_3228_, v_toBind_3229_, v___x_3230_, v_inst_3231_, v_msg_3232_, v___f_3233_, v_inst_3234_, v_opts_3235_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg(lean_object* v_inst_3238_, lean_object* v_inst_3239_, lean_object* v_inst_3240_, lean_object* v_inst_3241_, lean_object* v_inst_3242_, lean_object* v_always_3243_, lean_object* v_inst_3244_, lean_object* v_inst_3245_, lean_object* v_cls_3246_, lean_object* v_msg_3247_, lean_object* v_k_3248_, uint8_t v_collapsed_3249_, lean_object* v_tag_3250_){
_start:
{
lean_object* v___x_3251_; lean_object* v_toApplicative_3252_; lean_object* v_toBind_3253_; lean_object* v___f_3254_; lean_object* v___x_3255_; lean_object* v___f_3256_; lean_object* v___x_3257_; 
v___x_3251_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3252_ = lean_ctor_get(v_inst_3238_, 0);
lean_inc_ref(v_toApplicative_3252_);
v_toBind_3253_ = lean_ctor_get(v_inst_3238_, 1);
lean_inc_n(v_toBind_3253_, 2);
lean_inc(v_inst_3241_);
v___f_3254_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3254_, 0, v_inst_3241_);
v___x_3255_ = lean_box(v_collapsed_3249_);
lean_inc(v_inst_3242_);
v___f_3256_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3256_, 0, v_k_3248_);
lean_closure_set(v___f_3256_, 1, v_inst_3239_);
lean_closure_set(v___f_3256_, 2, v_toApplicative_3252_);
lean_closure_set(v___f_3256_, 3, v_inst_3240_);
lean_closure_set(v___f_3256_, 4, v_always_3243_);
lean_closure_set(v___f_3256_, 5, v_inst_3238_);
lean_closure_set(v___f_3256_, 6, v_inst_3241_);
lean_closure_set(v___f_3256_, 7, v_inst_3245_);
lean_closure_set(v___f_3256_, 8, v_cls_3246_);
lean_closure_set(v___f_3256_, 9, v___x_3255_);
lean_closure_set(v___f_3256_, 10, v_tag_3250_);
lean_closure_set(v___f_3256_, 11, v_toBind_3253_);
lean_closure_set(v___f_3256_, 12, v___x_3251_);
lean_closure_set(v___f_3256_, 13, v_inst_3244_);
lean_closure_set(v___f_3256_, 14, v_msg_3247_);
lean_closure_set(v___f_3256_, 15, v___f_3254_);
lean_closure_set(v___f_3256_, 16, v_inst_3242_);
v___x_3257_ = lean_apply_4(v_toBind_3253_, lean_box(0), lean_box(0), v_inst_3242_, v___f_3256_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___boxed(lean_object* v_inst_3258_, lean_object* v_inst_3259_, lean_object* v_inst_3260_, lean_object* v_inst_3261_, lean_object* v_inst_3262_, lean_object* v_always_3263_, lean_object* v_inst_3264_, lean_object* v_inst_3265_, lean_object* v_cls_3266_, lean_object* v_msg_3267_, lean_object* v_k_3268_, lean_object* v_collapsed_3269_, lean_object* v_tag_3270_){
_start:
{
uint8_t v_collapsed_boxed_3271_; lean_object* v_res_3272_; 
v_collapsed_boxed_3271_ = lean_unbox(v_collapsed_3269_);
v_res_3272_ = l_Lean_withTraceNodeBefore___redArg(v_inst_3258_, v_inst_3259_, v_inst_3260_, v_inst_3261_, v_inst_3262_, v_always_3263_, v_inst_3264_, v_inst_3265_, v_cls_3266_, v_msg_3267_, v_k_3268_, v_collapsed_boxed_3271_, v_tag_3270_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore(lean_object* v_00_u03b1_3273_, lean_object* v_m_3274_, lean_object* v_inst_3275_, lean_object* v_inst_3276_, lean_object* v_00_u03b5_3277_, lean_object* v_inst_3278_, lean_object* v_inst_3279_, lean_object* v_inst_3280_, lean_object* v_always_3281_, lean_object* v_inst_3282_, lean_object* v_inst_3283_, lean_object* v_cls_3284_, lean_object* v_msg_3285_, lean_object* v_k_3286_, uint8_t v_collapsed_3287_, lean_object* v_tag_3288_){
_start:
{
lean_object* v___x_3289_; lean_object* v_toApplicative_3290_; lean_object* v_toBind_3291_; lean_object* v___f_3292_; lean_object* v___x_3293_; lean_object* v___f_3294_; lean_object* v___x_3295_; 
v___x_3289_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3290_ = lean_ctor_get(v_inst_3275_, 0);
lean_inc_ref(v_toApplicative_3290_);
v_toBind_3291_ = lean_ctor_get(v_inst_3275_, 1);
lean_inc_n(v_toBind_3291_, 2);
lean_inc(v_inst_3279_);
v___f_3292_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3292_, 0, v_inst_3279_);
v___x_3293_ = lean_box(v_collapsed_3287_);
lean_inc(v_inst_3280_);
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3294_, 0, v_k_3286_);
lean_closure_set(v___f_3294_, 1, v_inst_3276_);
lean_closure_set(v___f_3294_, 2, v_toApplicative_3290_);
lean_closure_set(v___f_3294_, 3, v_inst_3278_);
lean_closure_set(v___f_3294_, 4, v_always_3281_);
lean_closure_set(v___f_3294_, 5, v_inst_3275_);
lean_closure_set(v___f_3294_, 6, v_inst_3279_);
lean_closure_set(v___f_3294_, 7, v_inst_3283_);
lean_closure_set(v___f_3294_, 8, v_cls_3284_);
lean_closure_set(v___f_3294_, 9, v___x_3293_);
lean_closure_set(v___f_3294_, 10, v_tag_3288_);
lean_closure_set(v___f_3294_, 11, v_toBind_3291_);
lean_closure_set(v___f_3294_, 12, v___x_3289_);
lean_closure_set(v___f_3294_, 13, v_inst_3282_);
lean_closure_set(v___f_3294_, 14, v_msg_3285_);
lean_closure_set(v___f_3294_, 15, v___f_3292_);
lean_closure_set(v___f_3294_, 16, v_inst_3280_);
v___x_3295_ = lean_apply_4(v_toBind_3291_, lean_box(0), lean_box(0), v_inst_3280_, v___f_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___boxed(lean_object* v_00_u03b1_3296_, lean_object* v_m_3297_, lean_object* v_inst_3298_, lean_object* v_inst_3299_, lean_object* v_00_u03b5_3300_, lean_object* v_inst_3301_, lean_object* v_inst_3302_, lean_object* v_inst_3303_, lean_object* v_always_3304_, lean_object* v_inst_3305_, lean_object* v_inst_3306_, lean_object* v_cls_3307_, lean_object* v_msg_3308_, lean_object* v_k_3309_, lean_object* v_collapsed_3310_, lean_object* v_tag_3311_){
_start:
{
uint8_t v_collapsed_boxed_3312_; lean_object* v_res_3313_; 
v_collapsed_boxed_3312_ = lean_unbox(v_collapsed_3310_);
v_res_3313_ = l_Lean_withTraceNodeBefore(v_00_u03b1_3296_, v_m_3297_, v_inst_3298_, v_inst_3299_, v_00_u03b5_3300_, v_inst_3301_, v_inst_3302_, v_inst_3303_, v_always_3304_, v_inst_3305_, v_inst_3306_, v_cls_3307_, v_msg_3308_, v_k_3309_, v_collapsed_boxed_3312_, v_tag_3311_);
return v_res_3313_;
}
}
LEAN_EXPORT uint8_t l_Lean_addTraceAsMessages___redArg___lam__0(lean_object* v_x_3314_, lean_object* v_x_3315_){
_start:
{
lean_object* v_fst_3316_; lean_object* v_fst_3317_; lean_object* v_fst_3318_; lean_object* v_fst_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v_fst_3316_ = lean_ctor_get(v_x_3314_, 0);
v_fst_3317_ = lean_ctor_get(v_x_3315_, 0);
v_fst_3318_ = lean_ctor_get(v_fst_3316_, 0);
v_fst_3319_ = lean_ctor_get(v_fst_3317_, 0);
v___x_3320_ = lean_unsigned_to_nat(1u);
v___x_3321_ = lean_nat_add(v_fst_3318_, v___x_3320_);
v___x_3322_ = lean_nat_dec_le(v___x_3321_, v_fst_3319_);
lean_dec(v___x_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__0___boxed(lean_object* v_x_3323_, lean_object* v_x_3324_){
_start:
{
uint8_t v_res_3325_; lean_object* v_r_3326_; 
v_res_3325_ = l_Lean_addTraceAsMessages___redArg___lam__0(v_x_3323_, v_x_3324_);
lean_dec_ref(v_x_3324_);
lean_dec_ref(v_x_3323_);
v_r_3326_ = lean_box(v_res_3325_);
return v_r_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__1(lean_object* v_x1_3327_, lean_object* v_x2_3328_, lean_object* v_x3_3329_){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3330_, 0, v_x2_3328_);
lean_ctor_set(v___x_3330_, 1, v_x3_3329_);
v___x_3331_ = lean_array_push(v_x1_3327_, v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4(lean_object* v_____do__lift_3332_, lean_object* v___x_3333_, lean_object* v_fst_3334_, lean_object* v_snd_3335_, lean_object* v_logMessage_3336_, lean_object* v_toBind_3337_, lean_object* v___f_3338_, lean_object* v_____do__lift_3339_){
_start:
{
uint8_t v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3340_ = 0;
v___x_3341_ = l_Lean_Elab_mkMessageCore(v_____do__lift_3332_, v_____do__lift_3339_, v___x_3333_, v___x_3340_, v_fst_3334_, v_snd_3335_);
v___x_3342_ = lean_apply_1(v_logMessage_3336_, v___x_3341_);
v___x_3343_ = lean_apply_4(v_toBind_3337_, lean_box(0), lean_box(0), v___x_3342_, v___f_3338_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4___boxed(lean_object* v_____do__lift_3344_, lean_object* v___x_3345_, lean_object* v_fst_3346_, lean_object* v_snd_3347_, lean_object* v_logMessage_3348_, lean_object* v_toBind_3349_, lean_object* v___f_3350_, lean_object* v_____do__lift_3351_){
_start:
{
lean_object* v_res_3352_; 
v_res_3352_ = l_Lean_addTraceAsMessages___redArg___lam__4(v_____do__lift_3344_, v___x_3345_, v_fst_3346_, v_snd_3347_, v_logMessage_3348_, v_toBind_3349_, v___f_3350_, v_____do__lift_3351_);
lean_dec(v_snd_3347_);
lean_dec(v_fst_3346_);
return v_res_3352_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__2(lean_object* v___x_3353_, lean_object* v_fst_3354_, lean_object* v_snd_3355_, lean_object* v_logMessage_3356_, lean_object* v_toBind_3357_, lean_object* v___f_3358_, lean_object* v_toMonadFileMap_3359_, lean_object* v_____do__lift_3360_){
_start:
{
lean_object* v___f_3361_; lean_object* v___x_3362_; 
lean_inc(v_toBind_3357_);
v___f_3361_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_3361_, 0, v_____do__lift_3360_);
lean_closure_set(v___f_3361_, 1, v___x_3353_);
lean_closure_set(v___f_3361_, 2, v_fst_3354_);
lean_closure_set(v___f_3361_, 3, v_snd_3355_);
lean_closure_set(v___f_3361_, 4, v_logMessage_3356_);
lean_closure_set(v___f_3361_, 5, v_toBind_3357_);
lean_closure_set(v___f_3361_, 6, v___f_3358_);
v___x_3362_ = lean_apply_4(v_toBind_3357_, lean_box(0), lean_box(0), v_toMonadFileMap_3359_, v___f_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3(lean_object* v___x_3363_, uint8_t v___x_3364_, lean_object* v_logMessage_3365_, lean_object* v_toBind_3366_, lean_object* v___f_3367_, lean_object* v_toMonadFileMap_3368_, lean_object* v_getFileName_3369_, lean_object* v_a_3370_, lean_object* v_x_3371_, lean_object* v___y_3372_){
_start:
{
lean_object* v_fst_3373_; lean_object* v_snd_3374_; lean_object* v_fst_3375_; lean_object* v_snd_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3393_; 
v_fst_3373_ = lean_ctor_get(v_a_3370_, 0);
lean_inc(v_fst_3373_);
v_snd_3374_ = lean_ctor_get(v_a_3370_, 1);
lean_inc(v_snd_3374_);
lean_dec_ref(v_a_3370_);
v_fst_3375_ = lean_ctor_get(v_fst_3373_, 0);
v_snd_3376_ = lean_ctor_get(v_fst_3373_, 1);
v_isSharedCheck_3393_ = !lean_is_exclusive(v_fst_3373_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3378_ = v_fst_3373_;
v_isShared_3379_ = v_isSharedCheck_3393_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_snd_3376_);
lean_inc(v_fst_3375_);
lean_dec(v_fst_3373_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3393_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; double v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3380_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_3381_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9);
v___x_3382_ = lean_box(0);
v___x_3383_ = lean_float_of_nat(v___x_3363_);
v___x_3384_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_3385_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3385_, 0, v___x_3381_);
lean_ctor_set(v___x_3385_, 1, v___x_3382_);
lean_ctor_set(v___x_3385_, 2, v___x_3384_);
lean_ctor_set_float(v___x_3385_, sizeof(void*)*3, v___x_3383_);
lean_ctor_set_float(v___x_3385_, sizeof(void*)*3 + 8, v___x_3383_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*3 + 16, v___x_3364_);
v___x_3386_ = l_Lean_MessageData_nil;
v___x_3387_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3385_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
lean_ctor_set(v___x_3387_, 2, v_snd_3374_);
if (v_isShared_3379_ == 0)
{
lean_ctor_set_tag(v___x_3378_, 8);
lean_ctor_set(v___x_3378_, 1, v___x_3387_);
lean_ctor_set(v___x_3378_, 0, v___x_3380_);
v___x_3389_ = v___x_3378_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3380_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v___x_3387_);
v___x_3389_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___f_3390_; lean_object* v___x_3391_; 
lean_inc(v_toBind_3366_);
v___f_3390_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__2), 8, 7);
lean_closure_set(v___f_3390_, 0, v___x_3389_);
lean_closure_set(v___f_3390_, 1, v_fst_3375_);
lean_closure_set(v___f_3390_, 2, v_snd_3376_);
lean_closure_set(v___f_3390_, 3, v_logMessage_3365_);
lean_closure_set(v___f_3390_, 4, v_toBind_3366_);
lean_closure_set(v___f_3390_, 5, v___f_3367_);
lean_closure_set(v___f_3390_, 6, v_toMonadFileMap_3368_);
v___x_3391_ = lean_apply_4(v_toBind_3366_, lean_box(0), lean_box(0), v_getFileName_3369_, v___f_3390_);
return v___x_3391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3___boxed(lean_object* v___x_3394_, lean_object* v___x_3395_, lean_object* v_logMessage_3396_, lean_object* v_toBind_3397_, lean_object* v___f_3398_, lean_object* v_toMonadFileMap_3399_, lean_object* v_getFileName_3400_, lean_object* v_a_3401_, lean_object* v_x_3402_, lean_object* v___y_3403_){
_start:
{
uint8_t v___x_908__boxed_3404_; lean_object* v_res_3405_; 
v___x_908__boxed_3404_ = lean_unbox(v___x_3395_);
v_res_3405_ = l_Lean_addTraceAsMessages___redArg___lam__3(v___x_3394_, v___x_908__boxed_3404_, v_logMessage_3396_, v_toBind_3397_, v___f_3398_, v_toMonadFileMap_3399_, v_getFileName_3400_, v_a_3401_, v_x_3402_, v___y_3403_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__5(lean_object* v___x_3406_, lean_object* v___f_3407_, lean_object* v_acc_3408_, lean_object* v_l_3409_){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_3406_, v___f_3407_, v_acc_3408_, v_l_3409_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6(lean_object* v_toPure_3411_, uint8_t v___x_3412_, lean_object* v_logMessage_3413_, lean_object* v_toBind_3414_, lean_object* v_toMonadFileMap_3415_, lean_object* v_getFileName_3416_, lean_object* v_inst_3417_, lean_object* v___f_3418_, lean_object* v___f_3419_, lean_object* v___f_3420_, lean_object* v_____s_3421_){
_start:
{
lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3434_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3448_; lean_object* v_size_3455_; lean_object* v_buckets_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v_size_3455_ = lean_ctor_get(v_____s_3421_, 0);
lean_inc(v_size_3455_);
v_buckets_3456_ = lean_ctor_get(v_____s_3421_, 1);
lean_inc_ref(v_buckets_3456_);
lean_dec_ref(v_____s_3421_);
v___x_3457_ = lean_mk_empty_array_with_capacity(v_size_3455_);
lean_dec(v_size_3455_);
v___x_3458_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v___x_3459_ = lean_unsigned_to_nat(0u);
v___x_3460_ = lean_array_get_size(v_buckets_3456_);
v___x_3461_ = lean_nat_dec_lt(v___x_3459_, v___x_3460_);
if (v___x_3461_ == 0)
{
lean_dec_ref(v_buckets_3456_);
lean_dec_ref(v___f_3420_);
v___y_3448_ = v___x_3457_;
goto v___jp_3447_;
}
else
{
lean_object* v___f_3462_; size_t v___x_3463_; size_t v___x_3464_; lean_object* v___x_3465_; 
v___f_3462_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__5), 4, 2);
lean_closure_set(v___f_3462_, 0, v___x_3458_);
lean_closure_set(v___f_3462_, 1, v___f_3420_);
v___x_3463_ = ((size_t)0ULL);
v___x_3464_ = lean_usize_of_nat(v___x_3460_);
v___x_3465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3458_, v___f_3462_, v_buckets_3456_, v___x_3463_, v___x_3464_, v___x_3457_);
v___y_3448_ = v___x_3465_;
goto v___jp_3447_;
}
v___jp_3422_:
{
lean_object* v___x_3425_; lean_object* v___f_3426_; lean_object* v___x_3427_; lean_object* v___f_3428_; size_t v_sz_3429_; size_t v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3425_ = lean_box(0);
v___f_3426_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3426_, 0, v___x_3425_);
lean_closure_set(v___f_3426_, 1, v_toPure_3411_);
v___x_3427_ = lean_box(v___x_3412_);
lean_inc(v_toBind_3414_);
v___f_3428_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__3___boxed), 10, 7);
lean_closure_set(v___f_3428_, 0, v___y_3423_);
lean_closure_set(v___f_3428_, 1, v___x_3427_);
lean_closure_set(v___f_3428_, 2, v_logMessage_3413_);
lean_closure_set(v___f_3428_, 3, v_toBind_3414_);
lean_closure_set(v___f_3428_, 4, v___f_3426_);
lean_closure_set(v___f_3428_, 5, v_toMonadFileMap_3415_);
lean_closure_set(v___f_3428_, 6, v_getFileName_3416_);
v_sz_3429_ = lean_array_size(v___y_3424_);
v___x_3430_ = ((size_t)0ULL);
v___x_3431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3417_, v___y_3424_, v___f_3428_, v_sz_3429_, v___x_3430_, v___x_3425_);
v___x_3432_ = lean_apply_4(v_toBind_3414_, lean_box(0), lean_box(0), v___x_3431_, v___f_3418_);
return v___x_3432_;
}
v___jp_3433_:
{
lean_object* v___x_3439_; 
v___x_3439_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3419_, v___y_3436_, v___y_3437_, v___y_3435_, v___y_3438_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3438_);
lean_dec(v___y_3436_);
v___y_3423_ = v___y_3434_;
v___y_3424_ = v___x_3439_;
goto v___jp_3422_;
}
v___jp_3440_:
{
uint8_t v___x_3446_; 
v___x_3446_ = lean_nat_dec_le(v___y_3445_, v___y_3442_);
if (v___x_3446_ == 0)
{
lean_dec(v___y_3442_);
lean_inc(v___y_3445_);
v___y_3434_ = v___y_3441_;
v___y_3435_ = v___y_3445_;
v___y_3436_ = v___y_3443_;
v___y_3437_ = v___y_3444_;
v___y_3438_ = v___y_3445_;
goto v___jp_3433_;
}
else
{
v___y_3434_ = v___y_3441_;
v___y_3435_ = v___y_3445_;
v___y_3436_ = v___y_3443_;
v___y_3437_ = v___y_3444_;
v___y_3438_ = v___y_3442_;
goto v___jp_3433_;
}
}
v___jp_3447_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; uint8_t v___x_3451_; 
v___x_3449_ = lean_unsigned_to_nat(0u);
v___x_3450_ = lean_array_get_size(v___y_3448_);
v___x_3451_ = lean_nat_dec_eq(v___x_3450_, v___x_3449_);
if (v___x_3451_ == 0)
{
lean_object* v___x_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; 
v___x_3452_ = lean_unsigned_to_nat(1u);
v___x_3453_ = lean_nat_sub(v___x_3450_, v___x_3452_);
v___x_3454_ = lean_nat_dec_le(v___x_3449_, v___x_3453_);
if (v___x_3454_ == 0)
{
lean_inc(v___x_3453_);
v___y_3441_ = v___x_3449_;
v___y_3442_ = v___x_3453_;
v___y_3443_ = v___x_3450_;
v___y_3444_ = v___y_3448_;
v___y_3445_ = v___x_3453_;
goto v___jp_3440_;
}
else
{
v___y_3441_ = v___x_3449_;
v___y_3442_ = v___x_3453_;
v___y_3443_ = v___x_3450_;
v___y_3444_ = v___y_3448_;
v___y_3445_ = v___x_3449_;
goto v___jp_3440_;
}
}
else
{
lean_dec_ref(v___f_3419_);
v___y_3423_ = v___x_3449_;
v___y_3424_ = v___y_3448_;
goto v___jp_3422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6___boxed(lean_object* v_toPure_3466_, lean_object* v___x_3467_, lean_object* v_logMessage_3468_, lean_object* v_toBind_3469_, lean_object* v_toMonadFileMap_3470_, lean_object* v_getFileName_3471_, lean_object* v_inst_3472_, lean_object* v___f_3473_, lean_object* v___f_3474_, lean_object* v___f_3475_, lean_object* v_____s_3476_){
_start:
{
uint8_t v___x_994__boxed_3477_; lean_object* v_res_3478_; 
v___x_994__boxed_3477_ = lean_unbox(v___x_3467_);
v_res_3478_ = l_Lean_addTraceAsMessages___redArg___lam__6(v_toPure_3466_, v___x_994__boxed_3477_, v_logMessage_3468_, v_toBind_3469_, v_toMonadFileMap_3470_, v_getFileName_3471_, v_inst_3472_, v___f_3473_, v___f_3474_, v___f_3475_, v_____s_3476_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7(lean_object* v_traceElem_3479_, lean_object* v___f_3480_, lean_object* v___f_3481_, lean_object* v_____s_3482_, lean_object* v_toPure_3483_, uint8_t v___x_3484_, lean_object* v_____do__lift_3485_){
_start:
{
lean_object* v_ref_3486_; lean_object* v_msg_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3511_; 
v_ref_3486_ = lean_ctor_get(v_traceElem_3479_, 0);
v_msg_3487_ = lean_ctor_get(v_traceElem_3479_, 1);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_traceElem_3479_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3489_ = v_traceElem_3479_;
v_isShared_3490_ = v_isSharedCheck_3511_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_msg_3487_);
lean_inc(v_ref_3486_);
lean_dec(v_traceElem_3479_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3511_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v_ref_3503_; lean_object* v___y_3505_; lean_object* v___x_3508_; 
v_ref_3503_ = l_Lean_replaceRef(v_ref_3486_, v_____do__lift_3485_);
lean_dec(v_ref_3486_);
v___x_3508_ = l_Lean_Syntax_getPos_x3f(v_ref_3503_, v___x_3484_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v___x_3509_; 
v___x_3509_ = lean_unsigned_to_nat(0u);
v___y_3505_ = v___x_3509_;
goto v___jp_3504_;
}
else
{
lean_object* v_val_3510_; 
v_val_3510_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_val_3510_);
lean_dec_ref_known(v___x_3508_, 1);
v___y_3505_ = v_val_3510_;
goto v___jp_3504_;
}
v___jp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v___y_3493_);
lean_ctor_set(v___x_3489_, 0, v___y_3492_);
v___x_3495_ = v___x_3489_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___y_3492_);
lean_ctor_set(v_reuseFailAlloc_3502_, 1, v___y_3493_);
v___x_3495_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v_pos2traces_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3496_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
lean_inc_ref(v___x_3495_);
lean_inc_ref(v___f_3481_);
lean_inc_ref(v___f_3480_);
v___x_3497_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___f_3480_, v___f_3481_, v_____s_3482_, v___x_3495_, v___x_3496_);
v___x_3498_ = lean_array_push(v___x_3497_, v_msg_3487_);
v_pos2traces_3499_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3480_, v___f_3481_, v_____s_3482_, v___x_3495_, v___x_3498_);
v___x_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_pos2traces_3499_);
v___x_3501_ = lean_apply_2(v_toPure_3483_, lean_box(0), v___x_3500_);
return v___x_3501_;
}
}
v___jp_3504_:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_Lean_Syntax_getTailPos_x3f(v_ref_3503_, v___x_3484_);
lean_dec(v_ref_3503_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_inc(v___y_3505_);
v___y_3492_ = v___y_3505_;
v___y_3493_ = v___y_3505_;
goto v___jp_3491_;
}
else
{
lean_object* v_val_3507_; 
v_val_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_val_3507_);
lean_dec_ref_known(v___x_3506_, 1);
v___y_3492_ = v___y_3505_;
v___y_3493_ = v_val_3507_;
goto v___jp_3491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7___boxed(lean_object* v_traceElem_3512_, lean_object* v___f_3513_, lean_object* v___f_3514_, lean_object* v_____s_3515_, lean_object* v_toPure_3516_, lean_object* v___x_3517_, lean_object* v_____do__lift_3518_){
_start:
{
uint8_t v___x_1108__boxed_3519_; lean_object* v_res_3520_; 
v___x_1108__boxed_3519_ = lean_unbox(v___x_3517_);
v_res_3520_ = l_Lean_addTraceAsMessages___redArg___lam__7(v_traceElem_3512_, v___f_3513_, v___f_3514_, v_____s_3515_, v_toPure_3516_, v___x_1108__boxed_3519_, v_____do__lift_3518_);
lean_dec(v_____do__lift_3518_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8(lean_object* v_inst_3521_, lean_object* v___f_3522_, lean_object* v___f_3523_, lean_object* v_toPure_3524_, uint8_t v___x_3525_, lean_object* v_toBind_3526_, lean_object* v_traceElem_3527_, lean_object* v_____s_3528_){
_start:
{
lean_object* v_getRef_3529_; lean_object* v___x_3530_; lean_object* v___f_3531_; lean_object* v___x_3532_; 
v_getRef_3529_ = lean_ctor_get(v_inst_3521_, 0);
lean_inc(v_getRef_3529_);
lean_dec_ref(v_inst_3521_);
v___x_3530_ = lean_box(v___x_3525_);
v___f_3531_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_3531_, 0, v_traceElem_3527_);
lean_closure_set(v___f_3531_, 1, v___f_3522_);
lean_closure_set(v___f_3531_, 2, v___f_3523_);
lean_closure_set(v___f_3531_, 3, v_____s_3528_);
lean_closure_set(v___f_3531_, 4, v_toPure_3524_);
lean_closure_set(v___f_3531_, 5, v___x_3530_);
v___x_3532_ = lean_apply_4(v_toBind_3526_, lean_box(0), lean_box(0), v_getRef_3529_, v___f_3531_);
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8___boxed(lean_object* v_inst_3533_, lean_object* v___f_3534_, lean_object* v___f_3535_, lean_object* v_toPure_3536_, lean_object* v___x_3537_, lean_object* v_toBind_3538_, lean_object* v_traceElem_3539_, lean_object* v_____s_3540_){
_start:
{
uint8_t v___x_1168__boxed_3541_; lean_object* v_res_3542_; 
v___x_1168__boxed_3541_ = lean_unbox(v___x_3537_);
v_res_3542_ = l_Lean_addTraceAsMessages___redArg___lam__8(v_inst_3533_, v___f_3534_, v___f_3535_, v_toPure_3536_, v___x_1168__boxed_3541_, v_toBind_3538_, v_traceElem_3539_, v_____s_3540_);
return v_res_3542_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_3543_; lean_object* v___f_3544_; 
v___x_3543_ = lean_alloc_closure((void*)(l_instDecidableEqRaw___boxed), 2, 0);
v___f_3544_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3544_, 0, v___x_3543_);
return v___f_3544_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___f_3545_; lean_object* v___f_3546_; 
v___f_3545_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__0, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__0_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0);
v___f_3546_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3546_, 0, v___f_3545_);
lean_closure_set(v___f_3546_, 1, v___f_3545_);
return v___f_3546_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3547_ = lean_box(0);
v___x_3548_ = lean_unsigned_to_nat(16u);
v___x_3549_ = lean_mk_array(v___x_3548_, v___x_3547_);
return v___x_3549_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v_pos2traces_3552_; 
v___x_3550_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__2, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__2_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2);
v___x_3551_ = lean_unsigned_to_nat(0u);
v_pos2traces_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_3552_, 0, v___x_3551_);
lean_ctor_set(v_pos2traces_3552_, 1, v___x_3550_);
return v_pos2traces_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9(lean_object* v_inst_3553_, lean_object* v___f_3554_, lean_object* v_toPure_3555_, lean_object* v_toBind_3556_, lean_object* v_inst_3557_, lean_object* v___f_3558_, lean_object* v_traces_3559_){
_start:
{
uint8_t v___x_3560_; 
v___x_3560_ = l_Lean_PersistentArray_isEmpty___redArg(v_traces_3559_);
if (v___x_3560_ == 0)
{
lean_object* v___f_3561_; lean_object* v___x_3562_; lean_object* v___f_3563_; lean_object* v_pos2traces_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___f_3561_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__1, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__1_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1);
v___x_3562_ = lean_box(v___x_3560_);
lean_inc(v_toBind_3556_);
v___f_3563_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__8___boxed), 8, 6);
lean_closure_set(v___f_3563_, 0, v_inst_3553_);
lean_closure_set(v___f_3563_, 1, v___f_3561_);
lean_closure_set(v___f_3563_, 2, v___f_3554_);
lean_closure_set(v___f_3563_, 3, v_toPure_3555_);
lean_closure_set(v___f_3563_, 4, v___x_3562_);
lean_closure_set(v___f_3563_, 5, v_toBind_3556_);
v_pos2traces_3564_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__3, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__3_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3);
v___x_3565_ = l_Lean_PersistentArray_forIn___redArg(v_inst_3557_, v_traces_3559_, v_pos2traces_3564_, v___f_3563_);
v___x_3566_ = lean_apply_4(v_toBind_3556_, lean_box(0), lean_box(0), v___x_3565_, v___f_3558_);
return v___x_3566_;
}
else
{
lean_object* v___x_3567_; lean_object* v___x_3568_; 
lean_dec(v___f_3558_);
lean_dec_ref(v_inst_3557_);
lean_dec(v_toBind_3556_);
lean_dec_ref(v___f_3554_);
lean_dec_ref(v_inst_3553_);
v___x_3567_ = lean_box(0);
v___x_3568_ = lean_apply_2(v_toPure_3555_, lean_box(0), v___x_3567_);
return v___x_3568_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___boxed(lean_object* v_inst_3569_, lean_object* v___f_3570_, lean_object* v_toPure_3571_, lean_object* v_toBind_3572_, lean_object* v_inst_3573_, lean_object* v___f_3574_, lean_object* v_traces_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lean_addTraceAsMessages___redArg___lam__9(v_inst_3569_, v___f_3570_, v_toPure_3571_, v_toBind_3572_, v_inst_3573_, v___f_3574_, v_traces_3575_);
lean_dec_ref(v_traces_3575_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10(lean_object* v_toPure_3577_, lean_object* v_logMessage_3578_, lean_object* v_toBind_3579_, lean_object* v_toMonadFileMap_3580_, lean_object* v_getFileName_3581_, lean_object* v_inst_3582_, lean_object* v___f_3583_, lean_object* v___f_3584_, lean_object* v___f_3585_, lean_object* v_inst_3586_, lean_object* v___f_3587_, lean_object* v_inst_3588_, lean_object* v_____do__lift_3589_){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3593_ = l_Lean_KVMap_instValueBool;
v___x_3594_ = l_Lean_KVMap_instValueString;
v___x_3595_ = l_Lean_trace_profiler_output;
v___x_3596_ = l_Lean_Option_get_x3f___redArg(v___x_3594_, v_____do__lift_3589_, v___x_3595_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; 
v___x_3597_ = l_Lean_trace_profiler_serve;
v___x_3598_ = l_Lean_Option_get___redArg(v___x_3593_, v_____do__lift_3589_, v___x_3597_);
v___x_3599_ = lean_unbox(v___x_3598_);
lean_dec(v___x_3598_);
if (v___x_3599_ == 0)
{
uint8_t v___x_3600_; lean_object* v___x_3601_; lean_object* v___f_3602_; lean_object* v___f_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3600_ = 1;
v___x_3601_ = lean_box(v___x_3600_);
lean_inc_ref_n(v_inst_3582_, 2);
lean_inc_n(v_toBind_3579_, 2);
lean_inc(v_toPure_3577_);
v___f_3602_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_3602_, 0, v_toPure_3577_);
lean_closure_set(v___f_3602_, 1, v___x_3601_);
lean_closure_set(v___f_3602_, 2, v_logMessage_3578_);
lean_closure_set(v___f_3602_, 3, v_toBind_3579_);
lean_closure_set(v___f_3602_, 4, v_toMonadFileMap_3580_);
lean_closure_set(v___f_3602_, 5, v_getFileName_3581_);
lean_closure_set(v___f_3602_, 6, v_inst_3582_);
lean_closure_set(v___f_3602_, 7, v___f_3583_);
lean_closure_set(v___f_3602_, 8, v___f_3584_);
lean_closure_set(v___f_3602_, 9, v___f_3585_);
v___f_3603_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__9___boxed), 7, 6);
lean_closure_set(v___f_3603_, 0, v_inst_3586_);
lean_closure_set(v___f_3603_, 1, v___f_3587_);
lean_closure_set(v___f_3603_, 2, v_toPure_3577_);
lean_closure_set(v___f_3603_, 3, v_toBind_3579_);
lean_closure_set(v___f_3603_, 4, v_inst_3582_);
lean_closure_set(v___f_3603_, 5, v___f_3602_);
v___x_3604_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3582_, v_inst_3588_);
v___x_3605_ = lean_apply_4(v_toBind_3579_, lean_box(0), lean_box(0), v___x_3604_, v___f_3603_);
return v___x_3605_;
}
else
{
lean_dec_ref(v_inst_3588_);
lean_dec_ref(v___f_3587_);
lean_dec_ref(v_inst_3586_);
lean_dec_ref(v___f_3585_);
lean_dec_ref(v___f_3584_);
lean_dec(v___f_3583_);
lean_dec_ref(v_inst_3582_);
lean_dec(v_getFileName_3581_);
lean_dec(v_toMonadFileMap_3580_);
lean_dec(v_toBind_3579_);
lean_dec(v_logMessage_3578_);
goto v___jp_3590_;
}
}
else
{
lean_dec_ref_known(v___x_3596_, 1);
lean_dec_ref(v_inst_3588_);
lean_dec_ref(v___f_3587_);
lean_dec_ref(v_inst_3586_);
lean_dec_ref(v___f_3585_);
lean_dec_ref(v___f_3584_);
lean_dec(v___f_3583_);
lean_dec_ref(v_inst_3582_);
lean_dec(v_getFileName_3581_);
lean_dec(v_toMonadFileMap_3580_);
lean_dec(v_toBind_3579_);
lean_dec(v_logMessage_3578_);
goto v___jp_3590_;
}
v___jp_3590_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = lean_box(0);
v___x_3592_ = lean_apply_2(v_toPure_3577_, lean_box(0), v___x_3591_);
return v___x_3592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10___boxed(lean_object* v_toPure_3606_, lean_object* v_logMessage_3607_, lean_object* v_toBind_3608_, lean_object* v_toMonadFileMap_3609_, lean_object* v_getFileName_3610_, lean_object* v_inst_3611_, lean_object* v___f_3612_, lean_object* v___f_3613_, lean_object* v___f_3614_, lean_object* v_inst_3615_, lean_object* v___f_3616_, lean_object* v_inst_3617_, lean_object* v_____do__lift_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_addTraceAsMessages___redArg___lam__10(v_toPure_3606_, v_logMessage_3607_, v_toBind_3608_, v_toMonadFileMap_3609_, v_getFileName_3610_, v_inst_3611_, v___f_3612_, v___f_3613_, v___f_3614_, v_inst_3615_, v___f_3616_, v_inst_3617_, v_____do__lift_3618_);
lean_dec_ref(v_____do__lift_3618_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg(lean_object* v_inst_3625_, lean_object* v_inst_3626_, lean_object* v_inst_3627_, lean_object* v_inst_3628_, lean_object* v_inst_3629_){
_start:
{
lean_object* v___f_3630_; lean_object* v_toApplicative_3631_; lean_object* v_toBind_3632_; lean_object* v_toPure_3633_; lean_object* v_toMonadFileMap_3634_; lean_object* v_getFileName_3635_; lean_object* v_logMessage_3636_; lean_object* v___f_3637_; lean_object* v___f_3638_; lean_object* v___f_3639_; lean_object* v___f_3640_; lean_object* v___x_3641_; 
v___f_3630_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__1));
v_toApplicative_3631_ = lean_ctor_get(v_inst_3626_, 0);
v_toBind_3632_ = lean_ctor_get(v_inst_3626_, 1);
lean_inc_n(v_toBind_3632_, 2);
v_toPure_3633_ = lean_ctor_get(v_toApplicative_3631_, 1);
lean_inc_n(v_toPure_3633_, 2);
v_toMonadFileMap_3634_ = lean_ctor_get(v_inst_3628_, 0);
lean_inc(v_toMonadFileMap_3634_);
v_getFileName_3635_ = lean_ctor_get(v_inst_3628_, 2);
lean_inc(v_getFileName_3635_);
v_logMessage_3636_ = lean_ctor_get(v_inst_3628_, 4);
lean_inc(v_logMessage_3636_);
lean_dec_ref(v_inst_3628_);
v___f_3637_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__2));
v___f_3638_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__3));
v___f_3639_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3639_, 0, v_toPure_3633_);
v___f_3640_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__10___boxed), 13, 12);
lean_closure_set(v___f_3640_, 0, v_toPure_3633_);
lean_closure_set(v___f_3640_, 1, v_logMessage_3636_);
lean_closure_set(v___f_3640_, 2, v_toBind_3632_);
lean_closure_set(v___f_3640_, 3, v_toMonadFileMap_3634_);
lean_closure_set(v___f_3640_, 4, v_getFileName_3635_);
lean_closure_set(v___f_3640_, 5, v_inst_3626_);
lean_closure_set(v___f_3640_, 6, v___f_3639_);
lean_closure_set(v___f_3640_, 7, v___f_3637_);
lean_closure_set(v___f_3640_, 8, v___f_3638_);
lean_closure_set(v___f_3640_, 9, v_inst_3627_);
lean_closure_set(v___f_3640_, 10, v___f_3630_);
lean_closure_set(v___f_3640_, 11, v_inst_3629_);
v___x_3641_ = lean_apply_4(v_toBind_3632_, lean_box(0), lean_box(0), v_inst_3625_, v___f_3640_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages(lean_object* v_m_3642_, lean_object* v_inst_3643_, lean_object* v_inst_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_){
_start:
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lean_addTraceAsMessages___redArg(v_inst_3643_, v_inst_3644_, v_inst_3645_, v_inst_3646_, v_inst_3647_);
return v___x_3648_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3653_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3654_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9);
v___x_3655_ = l_Lean_Name_str___override(v___x_3654_, v___x_3653_);
return v___x_3655_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3656_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_3657_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3658_ = l_Lean_Name_str___override(v___x_3657_, v___x_3656_);
return v___x_3658_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; 
v___x_3660_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3661_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3662_ = l_Lean_Name_str___override(v___x_3661_, v___x_3660_);
return v___x_3662_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3664_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3665_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3666_ = l_Lean_Name_str___override(v___x_3665_, v___x_3664_);
return v___x_3666_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3667_ = lean_unsigned_to_nat(0u);
v___x_3668_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3669_ = l_Lean_Name_num___override(v___x_3668_, v___x_3667_);
return v___x_3669_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3670_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_3671_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3672_ = l_Lean_Name_str___override(v___x_3671_, v___x_3670_);
return v___x_3672_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3674_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3675_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3676_ = l_Lean_Name_str___override(v___x_3675_, v___x_3674_);
return v___x_3676_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3678_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3679_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3680_ = l_Lean_Name_str___override(v___x_3679_, v___x_3678_);
return v___x_3680_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_3682_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3683_ = l_Lean_Name_str___override(v___x_3682_, v___x_3681_);
return v___x_3683_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3685_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3686_ = l_Lean_Name_str___override(v___x_3685_, v___x_3684_);
return v___x_3686_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
v___x_3687_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3688_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3689_ = l_Lean_Name_str___override(v___x_3688_, v___x_3687_);
return v___x_3689_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3690_ = lean_unsigned_to_nat(2826257906u);
v___x_3691_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3692_ = l_Lean_Name_num___override(v___x_3691_, v___x_3690_);
return v___x_3692_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3695_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3696_ = l_Lean_Name_str___override(v___x_3695_, v___x_3694_);
return v___x_3696_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3698_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3699_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3700_ = l_Lean_Name_str___override(v___x_3699_, v___x_3698_);
return v___x_3700_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3701_ = lean_unsigned_to_nat(2u);
v___x_3702_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3703_ = l_Lean_Name_num___override(v___x_3702_, v___x_3701_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3705_; uint8_t v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3705_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3706_ = 0;
v___x_3707_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3708_ = l_Lean_registerTraceClass(v___x_3705_, v___x_3706_, v___x_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2____boxed(lean_object* v_a_3709_){
_start:
{
lean_object* v_res_3710_; 
v_res_3710_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
return v_res_3710_;
}
}
lean_object* runtime_initialize_Lean_Elab_Exception(uint8_t builtin);
lean_object* runtime_initialize_Lean_Log(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_Trace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTraceElem_default = _init_l_Lean_instInhabitedTraceElem_default();
lean_mark_persistent(l_Lean_instInhabitedTraceElem_default);
l_Lean_instInhabitedTraceElem = _init_l_Lean_instInhabitedTraceElem();
lean_mark_persistent(l_Lean_instInhabitedTraceElem);
l_Lean_instInhabitedTraceState_default = _init_l_Lean_instInhabitedTraceState_default();
lean_mark_persistent(l_Lean_instInhabitedTraceState_default);
l_Lean_instInhabitedTraceState = _init_l_Lean_instInhabitedTraceState();
lean_mark_persistent(l_Lean_instInhabitedTraceState);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_inheritedTraceOptions = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_inheritedTraceOptions);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_threshold = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_threshold);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_useHeartbeats = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_useHeartbeats);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_output = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_output);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_serve = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_serve);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_output_pp = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_output_pp);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_Trace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_MonadTrace_getInheritedTraceOptions___autoParam = _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam();
lean_mark_persistent(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam);
l_Lean_registerTraceClass___auto__1 = _init_l_Lean_registerTraceClass___auto__1();
lean_mark_persistent(l_Lean_registerTraceClass___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Exception(uint8_t builtin);
lean_object* initialize_Lean_Log(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_Trace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_Trace(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Compiler.LCNF.ElimDeadBranches
// Imports: public import Lean.Compiler.LCNF.InferType
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
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_join(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
lean_object* l_String_decidableLT___boxed(lean_object*, lean_object*);
uint8_t l_Prod_lexLtDec___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedDecl_default___redArg();
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊥"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊤"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.ElimDeadBranches"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Lean.Compiler.LCNF.UnreachableBranches.Value.inductValOfCtor"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.merge.cleanup"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lean.Compiler.LCNF.UnreachableBranches.Value.addChoice"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid addChoice "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " into "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2_value;
static const lean_array_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 117, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.getLiteral.getNatConstant"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Not a well formed Nat constant Value"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___boxed(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.getLiteral.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed__const__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "UnreachableBranches"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "functionSummariesExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 130, 135, 69, 155, 14, 96, 131)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 217, 249, 17, 195, 152, 212, 89)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Analyzing "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elimDeadBranches"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 80, 110, 205, 32, 43, 118, 213)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Termination after "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " steps"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Threw away cases "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " branch "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2;
static const lean_ctor_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Eliminating "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " with "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Analyzing block: "};
static const lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_decLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decidableLT___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 204, 232, 255, 130, 130, 66, 205)}};
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ElimDeadBranches"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx(v_x_6_);
lean_dec(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
switch(lean_obj_tag(v_t_8_))
{
case 2:
{
lean_object* v_i_10_; lean_object* v_vs_11_; lean_object* v___x_12_; 
v_i_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_i_10_);
v_vs_11_ = lean_ctor_get(v_t_8_, 1);
lean_inc_ref(v_vs_11_);
lean_dec_ref_known(v_t_8_, 2);
v___x_12_ = lean_apply_2(v_k_9_, v_i_10_, v_vs_11_);
return v___x_12_;
}
case 3:
{
lean_object* v_vs_13_; lean_object* v___x_14_; 
v_vs_13_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_vs_13_);
lean_dec_ref_known(v_t_8_, 1);
v___x_14_ = lean_apply_1(v_k_9_, v_vs_13_);
return v___x_14_;
}
default: 
{
lean_dec(v_t_8_);
return v_k_9_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(lean_object* v_motive__1_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___boxed(lean_object* v_motive__1_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(v_motive__1_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim___redArg(lean_object* v_t_27_, lean_object* v_bot_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_27_, v_bot_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim(lean_object* v_motive__1_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_bot_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_31_, v_bot_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim___redArg(lean_object* v_t_35_, lean_object* v_top_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_35_, v_top_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim(lean_object* v_motive__1_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_top_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_39_, v_top_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim___redArg(lean_object* v_t_43_, lean_object* v_ctor_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_43_, v_ctor_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim(lean_object* v_motive__1_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_ctor_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_47_, v_ctor_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim___redArg(lean_object* v_t_51_, lean_object* v_choice_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_51_, v_choice_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim(lean_object* v_motive__1_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_choice_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_55_, v_choice_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_box(0);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_box(0);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_unsigned_to_nat(8u);
return v___x_61_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(lean_object* v_xs_62_, lean_object* v_ys_63_, lean_object* v_x_64_){
_start:
{
lean_object* v_zero_65_; uint8_t v_isZero_66_; 
v_zero_65_ = lean_unsigned_to_nat(0u);
v_isZero_66_ = lean_nat_dec_eq(v_x_64_, v_zero_65_);
if (v_isZero_66_ == 1)
{
lean_dec(v_x_64_);
return v_isZero_66_;
}
else
{
lean_object* v_one_67_; lean_object* v_n_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v_one_67_ = lean_unsigned_to_nat(1u);
v_n_68_ = lean_nat_sub(v_x_64_, v_one_67_);
lean_dec(v_x_64_);
v___x_69_ = lean_array_fget_borrowed(v_xs_62_, v_n_68_);
v___x_70_ = lean_array_fget_borrowed(v_ys_63_, v_n_68_);
v___x_71_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
lean_dec(v_n_68_);
return v___x_71_;
}
else
{
v_x_64_ = v_n_68_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(lean_object* v_x_73_, lean_object* v_x_74_){
_start:
{
switch(lean_obj_tag(v_x_73_))
{
case 0:
{
if (lean_obj_tag(v_x_74_) == 0)
{
uint8_t v___x_75_; 
v___x_75_ = 1;
return v___x_75_;
}
else
{
uint8_t v___x_76_; 
v___x_76_ = 0;
return v___x_76_;
}
}
case 1:
{
if (lean_obj_tag(v_x_74_) == 1)
{
uint8_t v___x_77_; 
v___x_77_ = 1;
return v___x_77_;
}
else
{
uint8_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
case 2:
{
if (lean_obj_tag(v_x_74_) == 2)
{
lean_object* v_i_79_; lean_object* v_vs_80_; lean_object* v_i_81_; lean_object* v_vs_82_; uint8_t v___x_83_; 
v_i_79_ = lean_ctor_get(v_x_73_, 0);
v_vs_80_ = lean_ctor_get(v_x_73_, 1);
v_i_81_ = lean_ctor_get(v_x_74_, 0);
v_vs_82_ = lean_ctor_get(v_x_74_, 1);
v___x_83_ = lean_name_eq(v_i_79_, v_i_81_);
if (v___x_83_ == 0)
{
return v___x_83_;
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_84_ = lean_array_get_size(v_vs_80_);
v___x_85_ = lean_array_get_size(v_vs_82_);
v___x_86_ = lean_nat_dec_eq(v___x_84_, v___x_85_);
if (v___x_86_ == 0)
{
return v___x_86_;
}
else
{
uint8_t v___x_87_; 
v___x_87_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(v_vs_80_, v_vs_82_, v___x_84_);
return v___x_87_;
}
}
}
else
{
uint8_t v___x_88_; 
v___x_88_ = 0;
return v___x_88_;
}
}
default: 
{
if (lean_obj_tag(v_x_74_) == 3)
{
lean_object* v_vs_89_; lean_object* v_vs_90_; uint8_t v___x_91_; 
v_vs_89_ = lean_ctor_get(v_x_73_, 0);
v_vs_90_ = lean_ctor_get(v_x_74_, 0);
v___x_91_ = l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(v_vs_90_, v_vs_89_);
if (v___x_91_ == 0)
{
return v___x_91_;
}
else
{
uint8_t v___x_92_; 
v___x_92_ = l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(v_vs_89_, v_vs_90_);
return v___x_92_;
}
}
else
{
uint8_t v___x_93_; 
v___x_93_ = 0;
return v___x_93_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(lean_object* v_a_94_, lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
else
{
lean_object* v_head_97_; lean_object* v_tail_98_; uint8_t v___x_99_; 
v_head_97_ = lean_ctor_get(v_x_95_, 0);
v_tail_98_ = lean_ctor_get(v_x_95_, 1);
v___x_99_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_94_, v_head_97_);
if (v___x_99_ == 0)
{
v_x_95_ = v_tail_98_;
goto _start;
}
else
{
return v___x_99_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(lean_object* v_bs_101_, lean_object* v_x_102_){
_start:
{
if (lean_obj_tag(v_x_102_) == 0)
{
uint8_t v___x_103_; 
v___x_103_ = 1;
return v___x_103_;
}
else
{
lean_object* v_head_104_; lean_object* v_tail_105_; uint8_t v___x_106_; 
v_head_104_ = lean_ctor_get(v_x_102_, 0);
v_tail_105_ = lean_ctor_get(v_x_102_, 1);
v___x_106_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(v_head_104_, v_bs_101_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
v_x_102_ = v_tail_105_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1___boxed(lean_object* v_bs_108_, lean_object* v_x_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(v_bs_108_, v_x_109_);
lean_dec(v_x_109_);
lean_dec(v_bs_108_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___boxed(lean_object* v_a_112_, lean_object* v_x_113_){
_start:
{
uint8_t v_res_114_; lean_object* v_r_115_; 
v_res_114_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(v_a_112_, v_x_113_);
lean_dec(v_x_113_);
lean_dec(v_a_112_);
v_r_115_ = lean_box(v_res_114_);
return v_r_115_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg___boxed(lean_object* v_xs_116_, lean_object* v_ys_117_, lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(v_xs_116_, v_ys_117_, v_x_118_);
lean_dec_ref(v_ys_117_);
lean_dec_ref(v_xs_116_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
uint8_t v_res_123_; lean_object* v_r_124_; 
v_res_123_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_x_121_, v_x_122_);
lean_dec(v_x_122_);
lean_dec(v_x_121_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2(lean_object* v_xs_125_, lean_object* v_ys_126_, lean_object* v_hsz_127_, lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v___x_130_; 
v___x_130_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(v_xs_125_, v_ys_126_, v_x_128_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___boxed(lean_object* v_xs_131_, lean_object* v_ys_132_, lean_object* v_hsz_133_, lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2(v_xs_131_, v_ys_132_, v_hsz_133_, v_x_134_, v_x_135_);
lean_dec_ref(v_ys_132_);
lean_dec_ref(v_xs_131_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__1(lean_object* v_a_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_nat_to_int(v_a_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(lean_object* v_x_142_, lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
if (lean_obj_tag(v_x_144_) == 0)
{
lean_dec(v_x_142_);
return v_x_143_;
}
else
{
lean_object* v_head_145_; lean_object* v_tail_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_155_; 
v_head_145_ = lean_ctor_get(v_x_144_, 0);
v_tail_146_ = lean_ctor_get(v_x_144_, 1);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_144_);
if (v_isSharedCheck_155_ == 0)
{
v___x_148_ = v_x_144_;
v_isShared_149_ = v_isSharedCheck_155_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_tail_146_);
lean_inc(v_head_145_);
lean_dec(v_x_144_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_155_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
lean_inc(v_x_142_);
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 5);
lean_ctor_set(v___x_148_, 1, v_x_142_);
lean_ctor_set(v___x_148_, 0, v_x_143_);
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_x_143_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_x_142_);
v___x_151_ = v_reuseFailAlloc_154_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_152_; 
v___x_152_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v_head_145_);
v_x_143_ = v___x_152_;
v_x_144_ = v_tail_146_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(lean_object* v_x_156_, lean_object* v_x_157_){
_start:
{
if (lean_obj_tag(v_x_156_) == 0)
{
lean_object* v___x_158_; 
lean_dec(v_x_157_);
v___x_158_ = lean_box(0);
return v___x_158_;
}
else
{
lean_object* v_tail_159_; 
v_tail_159_ = lean_ctor_get(v_x_156_, 1);
if (lean_obj_tag(v_tail_159_) == 0)
{
lean_object* v_head_160_; 
lean_dec(v_x_157_);
v_head_160_ = lean_ctor_get(v_x_156_, 0);
lean_inc(v_head_160_);
lean_dec_ref_known(v_x_156_, 2);
return v_head_160_;
}
else
{
lean_object* v_head_161_; lean_object* v___x_162_; 
lean_inc(v_tail_159_);
v_head_161_ = lean_ctor_get(v_x_156_, 0);
lean_inc(v_head_161_);
lean_dec_ref_known(v_x_156_, 2);
v___x_162_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(v_x_157_, v_head_161_, v_tail_159_);
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
if (lean_obj_tag(v_a_172_) == 0)
{
lean_object* v___x_174_; 
v___x_174_ = l_List_reverse___redArg(v_a_173_);
return v___x_174_;
}
else
{
lean_object* v_head_175_; lean_object* v_tail_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_187_; 
v_head_175_ = lean_ctor_get(v_a_172_, 0);
v_tail_176_ = lean_ctor_get(v_a_172_, 1);
v_isSharedCheck_187_ = !lean_is_exclusive(v_a_172_);
if (v_isSharedCheck_187_ == 0)
{
v___x_178_ = v_a_172_;
v_isShared_179_ = v_isSharedCheck_187_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_tail_176_);
lean_inc(v_head_175_);
lean_dec(v_a_172_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_187_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_180_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1));
v___x_181_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_175_);
v___x_182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_a_173_);
lean_ctor_set(v___x_178_, 0, v___x_182_);
v___x_184_ = v___x_178_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_182_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v_a_173_);
v___x_184_ = v_reuseFailAlloc_186_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
v_a_172_ = v_tail_176_;
v_a_173_ = v___x_184_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4));
v___x_190_ = lean_string_length(v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6);
v___x_192_ = lean_nat_to_int(v___x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(lean_object* v_x_201_){
_start:
{
switch(lean_obj_tag(v_x_201_))
{
case 0:
{
lean_object* v___x_202_; 
v___x_202_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1));
return v___x_202_;
}
case 1:
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3));
return v___x_203_;
}
case 2:
{
lean_object* v_i_204_; lean_object* v_vs_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_232_; 
v_i_204_ = lean_ctor_get(v_x_201_, 0);
v_vs_205_ = lean_ctor_get(v_x_201_, 1);
v_isSharedCheck_232_ = !lean_is_exclusive(v_x_201_);
if (v_isSharedCheck_232_ == 0)
{
v___x_207_ = v_x_201_;
v_isShared_208_ = v_isSharedCheck_232_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_vs_205_);
lean_inc(v_i_204_);
lean_dec(v_x_201_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_232_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_209_ = lean_array_get_size(v_vs_205_);
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_nat_dec_eq(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_212_ = 1;
v___x_213_ = l_Lean_Name_toString(v_i_204_, v___x_212_);
v___x_214_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = lean_array_to_list(v_vs_205_);
v___x_216_ = lean_box(0);
v___x_217_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(v___x_215_, v___x_216_);
v___x_218_ = l_Std_Format_join(v___x_217_);
if (v_isShared_208_ == 0)
{
lean_ctor_set_tag(v___x_207_, 5);
lean_ctor_set(v___x_207_, 1, v___x_218_);
lean_ctor_set(v___x_207_, 0, v___x_214_);
v___x_220_ = v___x_207_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_214_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v___x_218_);
v___x_220_ = v_reuseFailAlloc_229_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; lean_object* v___x_228_; 
v___x_221_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_222_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_220_);
v___x_224_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_225_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_221_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = 0;
v___x_228_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set_uint8(v___x_228_, sizeof(void*)*1, v___x_227_);
return v___x_228_;
}
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_del_object(v___x_207_);
lean_dec_ref(v_vs_205_);
v___x_230_ = l_Lean_Name_toString(v_i_204_, v___x_211_);
v___x_231_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
}
}
default: 
{
lean_object* v_vs_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; lean_object* v___x_245_; 
v_vs_233_ = lean_ctor_get(v_x_201_, 0);
lean_inc(v_vs_233_);
lean_dec_ref_known(v_x_201_, 1);
v___x_234_ = lean_box(0);
v___x_235_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(v_vs_233_, v___x_234_);
v___x_236_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11));
v___x_237_ = l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(v___x_235_, v___x_236_);
v___x_238_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_239_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___x_237_);
v___x_241_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_238_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = 0;
v___x_245_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set_uint8(v___x_245_, sizeof(void*)*1, v___x_244_);
return v___x_245_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
if (lean_obj_tag(v_a_246_) == 0)
{
lean_object* v___x_248_; 
v___x_248_ = l_List_reverse___redArg(v_a_247_);
return v___x_248_;
}
else
{
lean_object* v_head_249_; lean_object* v_tail_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_259_; 
v_head_249_ = lean_ctor_get(v_a_246_, 0);
v_tail_250_ = lean_ctor_get(v_a_246_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_a_246_);
if (v_isSharedCheck_259_ == 0)
{
v___x_252_ = v_a_246_;
v_isShared_253_ = v_isSharedCheck_259_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_tail_250_);
lean_inc(v_head_249_);
lean_dec(v_a_246_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_259_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_254_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_249_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v_a_247_);
lean_ctor_set(v___x_252_, 0, v___x_254_);
v___x_256_ = v___x_252_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_a_247_);
v___x_256_ = v_reuseFailAlloc_258_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
v_a_246_ = v_tail_250_;
v_a_247_ = v___x_256_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(lean_object* v_v_260_, lean_object* v_x_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_v_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed(lean_object* v_v_263_, lean_object* v_x_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(v_v_263_, v_x_264_);
lean_dec(v_x_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(lean_object* v_msg_275_){
_start:
{
lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___f_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___f_276_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_277_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_278_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_279_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_280_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_281_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_282_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___f_276_);
lean_ctor_set(v___x_283_, 1, v___f_277_);
v___x_284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v___f_278_);
lean_ctor_set(v___x_284_, 2, v___f_279_);
lean_ctor_set(v___x_284_, 3, v___f_280_);
lean_ctor_set(v___x_284_, 4, v___f_281_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___f_282_);
v___x_286_ = l_Lean_instInhabitedInductiveVal_default;
v___x_287_ = l_instInhabitedOfMonad___redArg(v___x_285_, v___x_286_);
v___x_288_ = lean_panic_fn_borrowed(v___x_287_, v_msg_275_);
lean_dec(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_292_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_293_ = lean_unsigned_to_nat(51u);
v___x_294_ = lean_unsigned_to_nat(72u);
v___x_295_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1));
v___x_296_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_297_ = l_mkPanicMessageWithDecl(v___x_296_, v___x_295_, v___x_294_, v___x_293_, v___x_292_);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_298_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_299_ = lean_unsigned_to_nat(56u);
v___x_300_ = lean_unsigned_to_nat(73u);
v___x_301_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1));
v___x_302_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_303_ = l_mkPanicMessageWithDecl(v___x_302_, v___x_301_, v___x_300_, v___x_299_, v___x_298_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(lean_object* v_ctorName_304_, lean_object* v_env_305_){
_start:
{
uint8_t v___x_312_; lean_object* v___x_313_; 
v___x_312_ = 0;
lean_inc_ref(v_env_305_);
v___x_313_ = l_Lean_Environment_find_x3f(v_env_305_, v_ctorName_304_, v___x_312_);
if (lean_obj_tag(v___x_313_) == 1)
{
lean_object* v_val_314_; 
v_val_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_val_314_);
lean_dec_ref_known(v___x_313_, 1);
if (lean_obj_tag(v_val_314_) == 6)
{
lean_object* v_val_315_; lean_object* v_induct_316_; lean_object* v___x_317_; 
v_val_315_ = lean_ctor_get(v_val_314_, 0);
lean_inc_ref(v_val_315_);
lean_dec_ref_known(v_val_314_, 1);
v_induct_316_ = lean_ctor_get(v_val_315_, 1);
lean_inc(v_induct_316_);
lean_dec_ref(v_val_315_);
v___x_317_ = l_Lean_Environment_find_x3f(v_env_305_, v_induct_316_, v___x_312_);
if (lean_obj_tag(v___x_317_) == 1)
{
lean_object* v_val_318_; 
v_val_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_val_318_);
lean_dec_ref_known(v___x_317_, 1);
if (lean_obj_tag(v_val_318_) == 5)
{
lean_object* v_val_319_; 
v_val_319_ = lean_ctor_get(v_val_318_, 0);
lean_inc_ref(v_val_319_);
lean_dec_ref_known(v_val_318_, 1);
return v_val_319_;
}
else
{
lean_dec(v_val_318_);
goto v___jp_309_;
}
}
else
{
lean_dec(v___x_317_);
goto v___jp_309_;
}
}
else
{
lean_dec(v_val_314_);
lean_dec_ref(v_env_305_);
goto v___jp_306_;
}
}
else
{
lean_dec(v___x_313_);
lean_dec_ref(v_env_305_);
goto v___jp_306_;
}
v___jp_306_:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3);
v___x_308_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(v___x_307_);
return v___x_308_;
}
v___jp_309_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4);
v___x_311_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(v___x_310_);
return v___x_311_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(lean_object* v_ctorName_320_, lean_object* v_env_321_, lean_object* v_n_322_){
_start:
{
lean_object* v_induct_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v_induct_323_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(v_ctorName_320_, v_env_321_);
v___x_324_ = l_Lean_InductiveVal_numCtors(v_induct_323_);
lean_dec_ref(v_induct_323_);
v___x_325_ = lean_nat_dec_eq(v_n_322_, v___x_324_);
lean_dec(v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors___boxed(lean_object* v_ctorName_326_, lean_object* v_env_327_, lean_object* v_n_328_){
_start:
{
uint8_t v_res_329_; lean_object* v_r_330_; 
v_res_329_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v_ctorName_326_, v_env_327_, v_n_328_);
lean_dec(v_n_328_);
v_r_330_ = lean_box(v_res_329_);
return v_r_330_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(uint8_t v___x_331_, lean_object* v_v_332_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_box(1);
v___x_334_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_v_332_, v___x_333_);
if (v___x_334_ == 0)
{
return v___x_331_;
}
else
{
uint8_t v___x_335_; 
v___x_335_ = 0;
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed(lean_object* v___x_336_, lean_object* v_v_337_){
_start:
{
uint8_t v___x_150__boxed_338_; uint8_t v_res_339_; lean_object* v_r_340_; 
v___x_150__boxed_338_ = lean_unbox(v___x_336_);
v_res_339_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(v___x_150__boxed_338_, v_v_337_);
lean_dec(v_v_337_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(lean_object* v_value_341_){
_start:
{
if (lean_obj_tag(v_value_341_) == 2)
{
lean_object* v_vs_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_369_; 
v_vs_342_ = lean_ctor_get(v_value_341_, 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_value_341_);
if (v_isSharedCheck_369_ == 0)
{
lean_object* v_unused_370_; 
v_unused_370_ = lean_ctor_get(v_value_341_, 0);
lean_dec(v_unused_370_);
v___x_344_ = v_value_341_;
v_isShared_345_ = v_isSharedCheck_369_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_vs_342_);
lean_dec(v_value_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_369_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___f_348_; lean_object* v___f_349_; lean_object* v___f_350_; lean_object* v___f_351_; lean_object* v___f_352_; lean_object* v___f_353_; lean_object* v___f_354_; lean_object* v___x_356_; 
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_array_get_size(v_vs_342_);
v___f_348_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_349_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_350_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_351_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_352_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_353_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_354_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
if (v_isShared_345_ == 0)
{
lean_ctor_set_tag(v___x_344_, 0);
lean_ctor_set(v___x_344_, 1, v___f_349_);
lean_ctor_set(v___x_344_, 0, v___f_348_);
v___x_356_ = v___x_344_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___f_348_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v___f_349_);
v___x_356_ = v_reuseFailAlloc_368_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v___f_350_);
lean_ctor_set(v___x_357_, 2, v___f_351_);
lean_ctor_set(v___x_357_, 3, v___f_352_);
lean_ctor_set(v___x_357_, 4, v___f_353_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
lean_ctor_set(v___x_358_, 1, v___f_354_);
v___x_359_ = lean_nat_dec_lt(v___x_346_, v___x_347_);
if (v___x_359_ == 0)
{
uint8_t v___x_360_; 
lean_dec_ref_known(v___x_358_, 2);
lean_dec_ref(v_vs_342_);
v___x_360_ = 1;
return v___x_360_;
}
else
{
if (v___x_359_ == 0)
{
lean_dec_ref_known(v___x_358_, 2);
lean_dec_ref(v_vs_342_);
return v___x_359_;
}
else
{
lean_object* v___x_361_; lean_object* v___f_362_; size_t v___x_363_; size_t v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_361_ = lean_box(v___x_359_);
v___f_362_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed), 2, 1);
lean_closure_set(v___f_362_, 0, v___x_361_);
v___x_363_ = ((size_t)0ULL);
v___x_364_ = lean_usize_of_nat(v___x_347_);
v___x_365_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_358_, v___f_362_, v_vs_342_, v___x_363_, v___x_364_);
v___x_366_ = lean_unbox(v___x_365_);
lean_dec(v___x_365_);
if (v___x_366_ == 0)
{
return v___x_359_;
}
else
{
uint8_t v___x_367_; 
v___x_367_ = 0;
return v___x_367_;
}
}
}
}
}
}
else
{
uint8_t v___x_371_; 
lean_dec(v_value_341_);
v___x_371_ = 0;
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___boxed(lean_object* v_value_372_){
_start:
{
uint8_t v_res_373_; lean_object* v_r_374_; 
v_res_373_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(v_value_372_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__2(lean_object* v_msg_375_){
_start:
{
lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___f_381_; lean_object* v___f_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___f_376_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_377_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_378_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_379_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_380_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_381_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_382_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___f_376_);
lean_ctor_set(v___x_383_, 1, v___f_377_);
v___x_384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___f_378_);
lean_ctor_set(v___x_384_, 2, v___f_379_);
lean_ctor_set(v___x_384_, 3, v___f_380_);
lean_ctor_set(v___x_384_, 4, v___f_381_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___f_382_);
v___x_386_ = lean_box(0);
v___x_387_ = l_instInhabitedOfMonad___redArg(v___x_385_, v___x_386_);
v___x_388_ = lean_panic_fn_borrowed(v___x_387_, v_msg_375_);
lean_dec(v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(lean_object* v_as_389_, size_t v_i_390_, size_t v_stop_391_){
_start:
{
uint8_t v___x_392_; 
v___x_392_ = lean_usize_dec_eq(v_i_390_, v_stop_391_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_393_ = lean_array_uget_borrowed(v_as_389_, v_i_390_);
v___x_394_ = lean_box(1);
v___x_395_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_393_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; 
v___x_396_ = 1;
return v___x_396_;
}
else
{
size_t v___x_397_; size_t v___x_398_; 
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_add(v_i_390_, v___x_397_);
v_i_390_ = v___x_398_;
goto _start;
}
}
else
{
uint8_t v___x_400_; 
v___x_400_ = 0;
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0___boxed(lean_object* v_as_401_, lean_object* v_i_402_, lean_object* v_stop_403_){
_start:
{
size_t v_i_boxed_404_; size_t v_stop_boxed_405_; uint8_t v_res_406_; lean_object* v_r_407_; 
v_i_boxed_404_ = lean_unbox_usize(v_i_402_);
lean_dec(v_i_402_);
v_stop_boxed_405_ = lean_unbox_usize(v_stop_403_);
lean_dec(v_stop_403_);
v_res_406_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_as_401_, v_i_boxed_404_, v_stop_boxed_405_);
lean_dec_ref(v_as_401_);
v_r_407_ = lean_box(v_res_406_);
return v_r_407_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(lean_object* v_x_408_){
_start:
{
if (lean_obj_tag(v_x_408_) == 0)
{
uint8_t v___x_409_; 
v___x_409_ = 1;
return v___x_409_;
}
else
{
lean_object* v_head_410_; 
v_head_410_ = lean_ctor_get(v_x_408_, 0);
if (lean_obj_tag(v_head_410_) == 2)
{
lean_object* v_tail_411_; lean_object* v_vs_412_; lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v_tail_411_ = lean_ctor_get(v_x_408_, 1);
v_vs_412_ = lean_ctor_get(v_head_410_, 1);
v___x_413_ = lean_unsigned_to_nat(0u);
v___x_414_ = lean_array_get_size(v_vs_412_);
v___x_415_ = lean_nat_dec_lt(v___x_413_, v___x_414_);
if (v___x_415_ == 0)
{
v_x_408_ = v_tail_411_;
goto _start;
}
else
{
if (v___x_415_ == 0)
{
v_x_408_ = v_tail_411_;
goto _start;
}
else
{
size_t v___x_418_; size_t v___x_419_; uint8_t v___x_420_; 
v___x_418_ = ((size_t)0ULL);
v___x_419_ = lean_usize_of_nat(v___x_414_);
v___x_420_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_vs_412_, v___x_418_, v___x_419_);
if (v___x_420_ == 0)
{
v_x_408_ = v_tail_411_;
goto _start;
}
else
{
uint8_t v___x_422_; 
v___x_422_ = 0;
return v___x_422_;
}
}
}
}
else
{
uint8_t v___x_423_; 
v___x_423_ = 0;
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1___boxed(lean_object* v_x_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(v_x_424_);
lean_dec(v_x_424_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_428_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_429_ = lean_unsigned_to_nat(42u);
v___x_430_ = lean_unsigned_to_nat(122u);
v___x_431_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0));
v___x_432_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_433_ = l_mkPanicMessageWithDecl(v___x_432_, v___x_431_, v___x_430_, v___x_429_, v___x_428_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(lean_object* v_env_434_, lean_object* v_vs_435_){
_start:
{
uint8_t v___x_436_; 
v___x_436_ = l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(v_vs_435_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; 
lean_dec_ref(v_env_434_);
v___x_437_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_437_, 0, v_vs_435_);
return v___x_437_;
}
else
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_box(0);
v___x_439_ = l_List_head_x21___redArg(v___x_438_, v_vs_435_);
if (lean_obj_tag(v___x_439_) == 2)
{
lean_object* v_i_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v_i_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_i_440_);
lean_dec_ref_known(v___x_439_, 2);
v___x_441_ = l_List_lengthTR___redArg(v_vs_435_);
v___x_442_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v_i_440_, v_env_434_, v___x_441_);
lean_dec(v___x_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; 
v___x_443_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_443_, 0, v_vs_435_);
return v___x_443_;
}
else
{
lean_object* v___x_444_; 
lean_dec(v_vs_435_);
v___x_444_ = lean_box(1);
return v___x_444_;
}
}
else
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec(v___x_439_);
lean_dec(v_vs_435_);
lean_dec_ref(v_env_434_);
v___x_445_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1);
v___x_446_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__2(v___x_445_);
return v___x_446_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(lean_object* v_msg_447_){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_box(0);
v___x_449_ = lean_panic_fn_borrowed(v___x_448_, v_msg_447_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(lean_object* v_x_450_, lean_object* v_x_451_, lean_object* v_x_452_){
_start:
{
if (lean_obj_tag(v_x_452_) == 0)
{
lean_dec(v_x_450_);
return v_x_451_;
}
else
{
lean_object* v_head_453_; lean_object* v_tail_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_464_; 
v_head_453_ = lean_ctor_get(v_x_452_, 0);
v_tail_454_ = lean_ctor_get(v_x_452_, 1);
v_isSharedCheck_464_ = !lean_is_exclusive(v_x_452_);
if (v_isSharedCheck_464_ == 0)
{
v___x_456_ = v_x_452_;
v_isShared_457_ = v_isSharedCheck_464_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_tail_454_);
lean_inc(v_head_453_);
lean_dec(v_x_452_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_464_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
lean_inc(v_x_450_);
if (v_isShared_457_ == 0)
{
lean_ctor_set_tag(v___x_456_, 5);
lean_ctor_set(v___x_456_, 1, v_x_450_);
lean_ctor_set(v___x_456_, 0, v_x_451_);
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_x_451_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v_x_450_);
v___x_459_ = v_reuseFailAlloc_463_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_453_);
v___x_461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v_x_451_ = v___x_461_;
v_x_452_ = v_tail_454_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
lean_object* v___x_467_; 
lean_dec(v_x_466_);
v___x_467_ = lean_box(0);
return v___x_467_;
}
else
{
lean_object* v_tail_468_; 
v_tail_468_ = lean_ctor_get(v_x_465_, 1);
if (lean_obj_tag(v_tail_468_) == 0)
{
lean_object* v_head_469_; lean_object* v___x_470_; 
lean_dec(v_x_466_);
v_head_469_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_head_469_);
lean_dec_ref_known(v_x_465_, 2);
v___x_470_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_469_);
return v___x_470_;
}
else
{
lean_object* v_head_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_inc(v_tail_468_);
v_head_471_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_head_471_);
lean_dec_ref_known(v_x_465_, 2);
v___x_472_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_471_);
v___x_473_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(v_x_466_, v___x_472_, v_tail_468_);
return v___x_473_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2));
v___x_486_ = lean_string_length(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_obj_once(&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7, &l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7);
v___x_488_ = lean_nat_to_int(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(lean_object* v_a_493_){
_start:
{
if (lean_obj_tag(v_a_493_) == 0)
{
lean_object* v___x_494_; 
v___x_494_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1));
return v___x_494_;
}
else
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; lean_object* v___x_504_; 
v___x_495_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_496_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(v_a_493_, v___x_495_);
v___x_497_ = lean_obj_once(&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8, &l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8);
v___x_498_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9));
v___x_499_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
lean_ctor_set(v___x_499_, 1, v___x_496_);
v___x_500_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10));
v___x_501_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_497_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = 0;
v___x_504_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_504_, 0, v___x_502_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*1, v___x_503_);
return v___x_504_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(lean_object* v_env_510_, lean_object* v_v1_511_, lean_object* v_v2_512_){
_start:
{
lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_520_; lean_object* v_i_521_; lean_object* v_vs_522_; 
switch(lean_obj_tag(v_v1_511_))
{
case 0:
{
switch(lean_obj_tag(v_v2_512_))
{
case 2:
{
lean_object* v_i_529_; lean_object* v_vs_530_; 
v_i_529_ = lean_ctor_get(v_v2_512_, 0);
lean_inc(v_i_529_);
v_vs_530_ = lean_ctor_get(v_v2_512_, 1);
lean_inc_ref(v_vs_530_);
v___y_520_ = v_v2_512_;
v_i_521_ = v_i_529_;
v_vs_522_ = v_vs_530_;
goto v___jp_519_;
}
case 3:
{
lean_object* v_vs_531_; lean_object* v___x_532_; 
v_vs_531_ = lean_ctor_get(v_v2_512_, 0);
lean_inc(v_vs_531_);
lean_dec_ref_known(v_v2_512_, 1);
v___x_532_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_510_, v_vs_531_);
return v___x_532_;
}
default: 
{
lean_dec_ref(v_env_510_);
return v_v2_512_;
}
}
}
case 1:
{
lean_dec_ref(v_env_510_);
switch(lean_obj_tag(v_v2_512_))
{
case 0:
{
return v_v1_511_;
}
case 1:
{
return v_v2_512_;
}
case 3:
{
lean_dec_ref_known(v_v2_512_, 1);
return v_v1_511_;
}
default: 
{
lean_dec(v_v2_512_);
return v_v1_511_;
}
}
}
case 2:
{
switch(lean_obj_tag(v_v2_512_))
{
case 0:
{
lean_object* v_i_533_; lean_object* v_vs_534_; 
v_i_533_ = lean_ctor_get(v_v1_511_, 0);
lean_inc(v_i_533_);
v_vs_534_ = lean_ctor_get(v_v1_511_, 1);
lean_inc_ref(v_vs_534_);
v___y_520_ = v_v1_511_;
v_i_521_ = v_i_533_;
v_vs_522_ = v_vs_534_;
goto v___jp_519_;
}
case 1:
{
lean_dec_ref_known(v_v1_511_, 2);
lean_dec_ref(v_env_510_);
return v_v2_512_;
}
case 2:
{
lean_object* v_i_535_; lean_object* v_vs_536_; lean_object* v_i_537_; lean_object* v_vs_538_; uint8_t v___x_539_; 
v_i_535_ = lean_ctor_get(v_v1_511_, 0);
v_vs_536_ = lean_ctor_get(v_v1_511_, 1);
v_i_537_ = lean_ctor_get(v_v2_512_, 0);
v_vs_538_ = lean_ctor_get(v_v2_512_, 1);
v___x_539_ = lean_name_eq(v_i_535_, v_i_537_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_540_ = lean_box(0);
v___x_541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_541_, 0, v_v2_512_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_542_, 0, v_v1_511_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_510_, v___x_542_);
return v___x_543_;
}
else
{
lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_553_; 
lean_inc_ref(v_vs_538_);
lean_inc_ref(v_vs_536_);
lean_inc(v_i_535_);
lean_dec_ref_known(v_v1_511_, 2);
v_isSharedCheck_553_ = !lean_is_exclusive(v_v2_512_);
if (v_isSharedCheck_553_ == 0)
{
lean_object* v_unused_554_; lean_object* v_unused_555_; 
v_unused_554_ = lean_ctor_get(v_v2_512_, 1);
lean_dec(v_unused_554_);
v_unused_555_ = lean_ctor_get(v_v2_512_, 0);
lean_dec(v_unused_555_);
v___x_545_ = v_v2_512_;
v_isShared_546_ = v_isSharedCheck_553_;
goto v_resetjp_544_;
}
else
{
lean_dec(v_v2_512_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_553_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3));
lean_inc_ref(v_env_510_);
v___x_549_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_510_, v_vs_536_, v_vs_538_, v___x_547_, v___x_548_);
lean_dec_ref(v_vs_538_);
lean_dec_ref(v_vs_536_);
lean_inc_ref(v___x_549_);
lean_inc(v_i_535_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 1, v___x_549_);
lean_ctor_set(v___x_545_, 0, v_i_535_);
v___x_551_ = v___x_545_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_i_535_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
v___y_520_ = v___x_551_;
v_i_521_ = v_i_535_;
v_vs_522_ = v___x_549_;
goto v___jp_519_;
}
}
}
}
default: 
{
lean_object* v_vs_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_vs_556_ = lean_ctor_get(v_v2_512_, 0);
lean_inc(v_vs_556_);
lean_dec_ref_known(v_v2_512_, 1);
lean_inc_ref(v_env_510_);
v___x_557_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_510_, v_vs_556_, v_v1_511_);
v___x_558_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_510_, v___x_557_);
return v___x_558_;
}
}
}
default: 
{
switch(lean_obj_tag(v_v2_512_))
{
case 0:
{
lean_object* v_vs_559_; lean_object* v___x_560_; 
v_vs_559_ = lean_ctor_get(v_v1_511_, 0);
lean_inc(v_vs_559_);
lean_dec_ref_known(v_v1_511_, 1);
v___x_560_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_510_, v_vs_559_);
return v___x_560_;
}
case 1:
{
lean_dec_ref_known(v_v1_511_, 1);
lean_dec_ref(v_env_510_);
return v_v2_512_;
}
case 3:
{
lean_object* v_vs_561_; lean_object* v_vs_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_vs_561_ = lean_ctor_get(v_v1_511_, 0);
lean_inc(v_vs_561_);
lean_dec_ref_known(v_v1_511_, 1);
v_vs_562_ = lean_ctor_get(v_v2_512_, 0);
lean_inc(v_vs_562_);
lean_dec_ref_known(v_v2_512_, 1);
lean_inc_ref(v_env_510_);
v___x_563_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(v_env_510_, v_vs_562_, v_vs_561_);
v___x_564_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_510_, v___x_563_);
return v___x_564_;
}
default: 
{
lean_object* v_vs_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_vs_565_ = lean_ctor_get(v_v1_511_, 0);
lean_inc(v_vs_565_);
lean_dec_ref_known(v_v1_511_, 1);
lean_inc_ref(v_env_510_);
v___x_566_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_510_, v_vs_565_, v_v2_512_);
v___x_567_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_510_, v___x_566_);
return v___x_567_;
}
}
}
}
v___jp_513_:
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = lean_unsigned_to_nat(1u);
v___x_517_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v___y_514_, v_env_510_, v___x_516_);
if (v___x_517_ == 0)
{
return v___y_515_;
}
else
{
lean_object* v___x_518_; 
lean_dec(v___y_515_);
v___x_518_ = lean_box(1);
return v___x_518_;
}
}
v___jp_519_:
{
lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v___x_524_ = lean_array_get_size(v_vs_522_);
v___x_525_ = lean_nat_dec_lt(v___x_523_, v___x_524_);
if (v___x_525_ == 0)
{
lean_dec_ref(v_vs_522_);
v___y_514_ = v_i_521_;
v___y_515_ = v___y_520_;
goto v___jp_513_;
}
else
{
if (v___x_525_ == 0)
{
lean_dec_ref(v_vs_522_);
v___y_514_ = v_i_521_;
v___y_515_ = v___y_520_;
goto v___jp_513_;
}
else
{
size_t v___x_526_; size_t v___x_527_; uint8_t v___x_528_; 
v___x_526_ = ((size_t)0ULL);
v___x_527_ = lean_usize_of_nat(v___x_524_);
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_vs_522_, v___x_526_, v___x_527_);
lean_dec_ref(v_vs_522_);
if (v___x_528_ == 0)
{
v___y_514_ = v_i_521_;
v___y_515_ = v___y_520_;
goto v___jp_513_;
}
else
{
lean_dec(v_i_521_);
lean_dec_ref(v_env_510_);
return v___y_520_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(lean_object* v_env_568_, lean_object* v_as_569_, lean_object* v_bs_570_, lean_object* v_i_571_, lean_object* v_cs_572_){
_start:
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_array_get_size(v_as_569_);
v___x_574_ = lean_nat_dec_lt(v_i_571_, v___x_573_);
if (v___x_574_ == 0)
{
lean_dec(v_i_571_);
lean_dec_ref(v_env_568_);
return v_cs_572_;
}
else
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_array_get_size(v_bs_570_);
v___x_576_ = lean_nat_dec_lt(v_i_571_, v___x_575_);
if (v___x_576_ == 0)
{
lean_dec(v_i_571_);
lean_dec_ref(v_env_568_);
return v_cs_572_;
}
else
{
lean_object* v_a_577_; lean_object* v_b_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_a_577_ = lean_array_fget_borrowed(v_as_569_, v_i_571_);
v_b_578_ = lean_array_fget_borrowed(v_bs_570_, v_i_571_);
lean_inc(v_b_578_);
lean_inc(v_a_577_);
lean_inc_ref(v_env_568_);
v___x_579_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(v_env_568_, v_a_577_, v_b_578_);
v___x_580_ = lean_unsigned_to_nat(1u);
v___x_581_ = lean_nat_add(v_i_571_, v___x_580_);
lean_dec(v_i_571_);
v___x_582_ = lean_array_push(v_cs_572_, v___x_579_);
v_i_571_ = v___x_581_;
v_cs_572_ = v___x_582_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(lean_object* v_env_584_, lean_object* v_vs_585_, lean_object* v_v_586_){
_start:
{
if (lean_obj_tag(v_vs_585_) == 0)
{
lean_object* v___x_605_; 
lean_dec_ref(v_env_584_);
v___x_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_605_, 0, v_v_586_);
lean_ctor_set(v___x_605_, 1, v_vs_585_);
return v___x_605_;
}
else
{
lean_object* v_head_606_; 
v_head_606_ = lean_ctor_get(v_vs_585_, 0);
if (lean_obj_tag(v_head_606_) == 2)
{
if (lean_obj_tag(v_v_586_) == 2)
{
lean_object* v_tail_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_635_; 
lean_inc_ref(v_head_606_);
v_tail_607_ = lean_ctor_get(v_vs_585_, 1);
v_isSharedCheck_635_ = !lean_is_exclusive(v_vs_585_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; 
v_unused_636_ = lean_ctor_get(v_vs_585_, 0);
lean_dec(v_unused_636_);
v___x_609_ = v_vs_585_;
v_isShared_610_ = v_isSharedCheck_635_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_tail_607_);
lean_dec(v_vs_585_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_635_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v_i_611_; lean_object* v_vs_612_; lean_object* v_i_613_; lean_object* v_vs_614_; uint8_t v___x_615_; 
v_i_611_ = lean_ctor_get(v_head_606_, 0);
v_vs_612_ = lean_ctor_get(v_head_606_, 1);
v_i_613_ = lean_ctor_get(v_v_586_, 0);
v_vs_614_ = lean_ctor_get(v_v_586_, 1);
v___x_615_ = lean_name_eq(v_i_611_, v_i_613_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; lean_object* v___x_618_; 
v___x_616_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_584_, v_tail_607_, v_v_586_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___x_616_);
v___x_618_ = v___x_609_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_head_606_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
else
{
lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_632_; 
lean_inc_ref(v_vs_614_);
lean_inc_ref(v_vs_612_);
lean_inc(v_i_611_);
lean_dec_ref_known(v_head_606_, 2);
v_isSharedCheck_632_ = !lean_is_exclusive(v_v_586_);
if (v_isSharedCheck_632_ == 0)
{
lean_object* v_unused_633_; lean_object* v_unused_634_; 
v_unused_633_ = lean_ctor_get(v_v_586_, 1);
lean_dec(v_unused_633_);
v_unused_634_ = lean_ctor_get(v_v_586_, 0);
lean_dec(v_unused_634_);
v___x_621_ = v_v_586_;
v_isShared_622_ = v_isSharedCheck_632_;
goto v_resetjp_620_;
}
else
{
lean_dec(v_v_586_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_632_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3));
v___x_625_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_584_, v_vs_612_, v_vs_614_, v___x_623_, v___x_624_);
lean_dec_ref(v_vs_614_);
lean_dec_ref(v_vs_612_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 1, v___x_625_);
lean_ctor_set(v___x_621_, 0, v_i_611_);
v___x_627_ = v___x_621_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_i_611_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_625_);
v___x_627_ = v_reuseFailAlloc_631_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_629_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v___x_627_);
v___x_629_ = v___x_609_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_tail_607_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_env_584_);
goto v___jp_587_;
}
}
else
{
lean_dec_ref(v_env_584_);
goto v___jp_587_;
}
}
v___jp_587_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_588_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_589_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0));
v___x_590_ = lean_unsigned_to_nat(92u);
v___x_591_ = lean_unsigned_to_nat(12u);
v___x_592_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1));
v___x_593_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_v_586_);
v___x_594_ = l_Std_Format_defWidth;
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = l_Std_Format_pretty(v___x_593_, v___x_594_, v___x_595_, v___x_595_);
v___x_597_ = lean_string_append(v___x_592_, v___x_596_);
lean_dec_ref(v___x_596_);
v___x_598_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2));
v___x_599_ = lean_string_append(v___x_597_, v___x_598_);
v___x_600_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(v_vs_585_);
v___x_601_ = l_Std_Format_pretty(v___x_600_, v___x_594_, v___x_595_, v___x_595_);
v___x_602_ = lean_string_append(v___x_599_, v___x_601_);
lean_dec_ref(v___x_601_);
v___x_603_ = l_mkPanicMessageWithDecl(v___x_588_, v___x_589_, v___x_590_, v___x_591_, v___x_602_);
lean_dec_ref(v___x_602_);
v___x_604_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(v___x_603_);
return v___x_604_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(lean_object* v_env_637_, lean_object* v_x_638_, lean_object* v_x_639_){
_start:
{
if (lean_obj_tag(v_x_639_) == 0)
{
lean_dec_ref(v_env_637_);
return v_x_638_;
}
else
{
lean_object* v_head_640_; lean_object* v_tail_641_; lean_object* v___x_642_; 
v_head_640_ = lean_ctor_get(v_x_639_, 0);
lean_inc(v_head_640_);
v_tail_641_ = lean_ctor_get(v_x_639_, 1);
lean_inc(v_tail_641_);
lean_dec_ref_known(v_x_639_, 2);
lean_inc_ref(v_env_637_);
v___x_642_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_637_, v_x_638_, v_head_640_);
v_x_638_ = v___x_642_;
v_x_639_ = v_tail_641_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2___boxed(lean_object* v_env_644_, lean_object* v_as_645_, lean_object* v_bs_646_, lean_object* v_i_647_, lean_object* v_cs_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_644_, v_as_645_, v_bs_646_, v_i_647_, v_cs_648_);
lean_dec_ref(v_bs_646_);
lean_dec_ref(v_as_645_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(lean_object* v_a_650_, lean_object* v_n_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(v_a_650_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___boxed(lean_object* v_a_653_, lean_object* v_n_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(v_a_653_, v_n_654_);
lean_dec(v_n_654_);
return v_res_655_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(lean_object* v_a_656_, lean_object* v_x_657_){
_start:
{
if (lean_obj_tag(v_x_657_) == 0)
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
else
{
lean_object* v_head_659_; lean_object* v_tail_660_; uint8_t v___x_661_; 
v_head_659_ = lean_ctor_get(v_x_657_, 0);
v_tail_660_ = lean_ctor_get(v_x_657_, 1);
v___x_661_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_656_, v_head_659_);
if (v___x_661_ == 0)
{
v_x_657_ = v_tail_660_;
goto _start;
}
else
{
return v___x_661_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2___boxed(lean_object* v_a_663_, lean_object* v_x_664_){
_start:
{
uint8_t v_res_665_; lean_object* v_r_666_; 
v_res_665_ = l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(v_a_663_, v_x_664_);
lean_dec(v_x_664_);
lean_dec(v_a_663_);
v_r_666_ = lean_box(v_res_665_);
return v_r_666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(lean_object* v_env_667_, lean_object* v_forbiddenTypes_x27_668_, lean_object* v_n_669_, size_t v_sz_670_, size_t v_i_671_, lean_object* v_bs_672_){
_start:
{
uint8_t v___x_673_; 
v___x_673_ = lean_usize_dec_lt(v_i_671_, v_sz_670_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; 
lean_dec(v_forbiddenTypes_x27_668_);
lean_dec_ref(v_env_667_);
v___x_674_ = l_unsafeCast___redArg(v_bs_672_);
lean_dec_ref(v_bs_672_);
return v___x_674_;
}
else
{
lean_object* v_v_675_; lean_object* v___x_676_; lean_object* v_bs_x27_677_; lean_object* v___x_678_; lean_object* v___x_679_; size_t v___x_680_; size_t v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_v_675_ = lean_array_uget(v_bs_672_, v_i_671_);
v___x_676_ = lean_unsigned_to_nat(0u);
v_bs_x27_677_ = lean_array_uset(v_bs_672_, v_i_671_, v___x_676_);
v___x_678_ = l_unsafeCast___redArg(v_v_675_);
lean_dec(v_v_675_);
lean_inc(v_forbiddenTypes_x27_668_);
lean_inc_ref(v_env_667_);
v___x_679_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_667_, v___x_678_, v_forbiddenTypes_x27_668_, v_n_669_);
v___x_680_ = ((size_t)1ULL);
v___x_681_ = lean_usize_add(v_i_671_, v___x_680_);
v___x_682_ = l_unsafeCast___redArg(v___x_679_);
lean_dec(v___x_679_);
v___x_683_ = lean_array_uset(v_bs_x27_677_, v_i_671_, v___x_682_);
v_i_671_ = v___x_681_;
v_bs_672_ = v___x_683_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(lean_object* v_env_685_, lean_object* v_v_686_, lean_object* v_forbiddenTypes_687_, lean_object* v_remainingDepth_688_){
_start:
{
lean_object* v_zero_689_; uint8_t v_isZero_690_; 
v_zero_689_ = lean_unsigned_to_nat(0u);
v_isZero_690_ = lean_nat_dec_eq(v_remainingDepth_688_, v_zero_689_);
if (v_isZero_690_ == 1)
{
lean_object* v___x_691_; 
lean_dec(v_forbiddenTypes_687_);
lean_dec(v_v_686_);
lean_dec_ref(v_env_685_);
v___x_691_ = lean_box(1);
return v___x_691_;
}
else
{
lean_object* v_one_692_; lean_object* v_n_693_; 
v_one_692_ = lean_unsigned_to_nat(1u);
v_n_693_ = lean_nat_sub(v_remainingDepth_688_, v_one_692_);
switch(lean_obj_tag(v_v_686_))
{
case 2:
{
lean_object* v_i_694_; lean_object* v_vs_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_716_; 
v_i_694_ = lean_ctor_get(v_v_686_, 0);
v_vs_695_ = lean_ctor_get(v_v_686_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_v_686_);
if (v_isSharedCheck_716_ == 0)
{
v___x_697_ = v_v_686_;
v_isShared_698_ = v_isSharedCheck_716_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_vs_695_);
lean_inc(v_i_694_);
lean_dec(v_v_686_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_716_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_forbiddenTypes_x27_700_; lean_object* v_induct_709_; lean_object* v_toConstantVal_710_; uint8_t v_isRec_711_; lean_object* v_name_712_; uint8_t v___x_713_; 
lean_inc_ref(v_env_685_);
lean_inc(v_i_694_);
v_induct_709_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(v_i_694_, v_env_685_);
v_toConstantVal_710_ = lean_ctor_get(v_induct_709_, 0);
lean_inc_ref(v_toConstantVal_710_);
v_isRec_711_ = lean_ctor_get_uint8(v_induct_709_, sizeof(void*)*6);
lean_dec_ref(v_induct_709_);
v_name_712_ = lean_ctor_get(v_toConstantVal_710_, 0);
lean_inc(v_name_712_);
lean_dec_ref(v_toConstantVal_710_);
v___x_713_ = l_Lean_NameSet_contains(v_forbiddenTypes_687_, v_name_712_);
if (v___x_713_ == 0)
{
if (v_isRec_711_ == 0)
{
lean_dec(v_name_712_);
v_forbiddenTypes_x27_700_ = v_forbiddenTypes_687_;
goto v___jp_699_;
}
else
{
lean_object* v___x_714_; 
v___x_714_ = l_Lean_NameSet_insert(v_forbiddenTypes_687_, v_name_712_);
v_forbiddenTypes_x27_700_ = v___x_714_;
goto v___jp_699_;
}
}
else
{
lean_object* v___x_715_; 
lean_dec(v_name_712_);
lean_del_object(v___x_697_);
lean_dec_ref(v_vs_695_);
lean_dec(v_i_694_);
lean_dec(v_n_693_);
lean_dec(v_forbiddenTypes_687_);
lean_dec_ref(v_env_685_);
v___x_715_ = lean_box(1);
return v___x_715_;
}
v___jp_699_:
{
size_t v_sz_701_; size_t v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v_sz_701_ = lean_array_size(v_vs_695_);
v___x_702_ = ((size_t)0ULL);
v___x_703_ = l_unsafeCast___redArg(v_vs_695_);
lean_dec_ref(v_vs_695_);
v___x_704_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(v_env_685_, v_forbiddenTypes_x27_700_, v_n_693_, v_sz_701_, v___x_702_, v___x_703_);
lean_dec(v_n_693_);
v___x_705_ = l_unsafeCast___redArg(v___x_704_);
lean_dec_ref(v___x_704_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 1, v___x_705_);
v___x_707_ = v___x_697_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_i_694_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
case 3:
{
lean_object* v_vs_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_728_; 
v_vs_717_ = lean_ctor_get(v_v_686_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v_v_686_);
if (v_isSharedCheck_728_ == 0)
{
v___x_719_ = v_v_686_;
v_isShared_720_ = v_isSharedCheck_728_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_vs_717_);
lean_dec(v_v_686_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_728_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; lean_object* v_vs_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_721_ = lean_box(0);
v_vs_722_ = l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(v_env_685_, v_forbiddenTypes_687_, v_n_693_, v_vs_717_, v___x_721_);
lean_dec(v_n_693_);
v___x_723_ = lean_box(1);
v___x_724_ = l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(v___x_723_, v_vs_722_);
if (v___x_724_ == 0)
{
lean_object* v___x_726_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v_vs_722_);
v___x_726_ = v___x_719_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_vs_722_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
else
{
lean_dec(v_vs_722_);
lean_del_object(v___x_719_);
return v___x_723_;
}
}
}
default: 
{
lean_dec(v_n_693_);
lean_dec(v_forbiddenTypes_687_);
lean_dec_ref(v_env_685_);
return v_v_686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(lean_object* v_env_729_, lean_object* v_forbiddenTypes_730_, lean_object* v_n_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
if (lean_obj_tag(v_a_732_) == 0)
{
lean_object* v___x_734_; 
lean_dec(v_forbiddenTypes_730_);
lean_dec_ref(v_env_729_);
v___x_734_ = l_List_reverse___redArg(v_a_733_);
return v___x_734_;
}
else
{
lean_object* v_head_735_; lean_object* v_tail_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_745_; 
v_head_735_ = lean_ctor_get(v_a_732_, 0);
v_tail_736_ = lean_ctor_get(v_a_732_, 1);
v_isSharedCheck_745_ = !lean_is_exclusive(v_a_732_);
if (v_isSharedCheck_745_ == 0)
{
v___x_738_ = v_a_732_;
v_isShared_739_ = v_isSharedCheck_745_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_tail_736_);
lean_inc(v_head_735_);
lean_dec(v_a_732_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_745_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_740_; lean_object* v___x_742_; 
lean_inc(v_forbiddenTypes_730_);
lean_inc_ref(v_env_729_);
v___x_740_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_729_, v_head_735_, v_forbiddenTypes_730_, v_n_731_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 1, v_a_733_);
lean_ctor_set(v___x_738_, 0, v___x_740_);
v___x_742_ = v___x_738_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_740_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_a_733_);
v___x_742_ = v_reuseFailAlloc_744_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
v_a_732_ = v_tail_736_;
v_a_733_ = v___x_742_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1___boxed(lean_object* v_env_746_, lean_object* v_forbiddenTypes_747_, lean_object* v_n_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(v_env_746_, v_forbiddenTypes_747_, v_n_748_, v_a_749_, v_a_750_);
lean_dec(v_n_748_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0___boxed(lean_object* v_env_752_, lean_object* v_forbiddenTypes_x27_753_, lean_object* v_n_754_, lean_object* v_sz_755_, lean_object* v_i_756_, lean_object* v_bs_757_){
_start:
{
size_t v_sz_boxed_758_; size_t v_i_boxed_759_; lean_object* v_res_760_; 
v_sz_boxed_758_ = lean_unbox_usize(v_sz_755_);
lean_dec(v_sz_755_);
v_i_boxed_759_ = lean_unbox_usize(v_i_756_);
lean_dec(v_i_756_);
v_res_760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(v_env_752_, v_forbiddenTypes_x27_753_, v_n_754_, v_sz_boxed_758_, v_i_boxed_759_, v_bs_757_);
lean_dec(v_n_754_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go___boxed(lean_object* v_env_761_, lean_object* v_v_762_, lean_object* v_forbiddenTypes_763_, lean_object* v_remainingDepth_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_761_, v_v_762_, v_forbiddenTypes_763_, v_remainingDepth_764_);
lean_dec(v_remainingDepth_764_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(lean_object* v_env_766_, lean_object* v_v_767_){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = l_Lean_NameSet_empty;
v___x_769_ = lean_unsigned_to_nat(8u);
v___x_770_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_766_, v_v_767_, v___x_768_, v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(lean_object* v_env_771_, lean_object* v_v1_772_, lean_object* v_v2_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
lean_inc_ref(v_env_771_);
v___x_774_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(v_env_771_, v_v1_772_, v_v2_773_);
v___x_775_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(v_env_771_, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(lean_object* v_x_776_, lean_object* v_x_777_){
_start:
{
if (lean_obj_tag(v_x_777_) == 0)
{
uint8_t v___x_778_; 
v___x_778_ = 0;
return v___x_778_;
}
else
{
lean_object* v_head_779_; lean_object* v_tail_780_; uint8_t v___x_781_; 
v_head_779_ = lean_ctor_get(v_x_777_, 0);
v_tail_780_ = lean_ctor_get(v_x_777_, 1);
v___x_781_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_head_779_, v_x_776_);
if (v___x_781_ == 0)
{
v_x_777_ = v_tail_780_;
goto _start;
}
else
{
return v___x_781_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(lean_object* v_x_783_, lean_object* v_x_784_){
_start:
{
switch(lean_obj_tag(v_x_783_))
{
case 2:
{
lean_object* v_i_785_; uint8_t v___x_786_; 
v_i_785_ = lean_ctor_get(v_x_783_, 0);
v___x_786_ = lean_name_eq(v_i_785_, v_x_784_);
return v___x_786_;
}
case 3:
{
lean_object* v_vs_787_; uint8_t v___x_788_; 
v_vs_787_ = lean_ctor_get(v_x_783_, 0);
v___x_788_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(v_x_784_, v_vs_787_);
return v___x_788_;
}
default: 
{
uint8_t v___x_789_; 
v___x_789_ = 1;
return v___x_789_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___boxed(lean_object* v_x_790_, lean_object* v_x_791_){
_start:
{
uint8_t v_res_792_; lean_object* v_r_793_; 
v_res_792_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_x_790_, v_x_791_);
lean_dec(v_x_791_);
lean_dec(v_x_790_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0___boxed(lean_object* v_x_794_, lean_object* v_x_795_){
_start:
{
uint8_t v_res_796_; lean_object* v_r_797_; 
v_res_796_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(v_x_794_, v_x_795_);
lean_dec(v_x_795_);
lean_dec(v_x_794_);
v_r_797_ = lean_box(v_res_796_);
return v_r_797_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(lean_object* v_x_801_, lean_object* v_as_x27_802_, lean_object* v_b_803_){
_start:
{
if (lean_obj_tag(v_as_x27_802_) == 0)
{
lean_object* v___x_804_; 
v___x_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_804_, 0, v_b_803_);
return v___x_804_;
}
else
{
lean_object* v_head_805_; lean_object* v_tail_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
lean_dec_ref(v_b_803_);
v_head_805_ = lean_ctor_get(v_as_x27_802_, 0);
v_tail_806_ = lean_ctor_get(v_as_x27_802_, 1);
v___x_807_ = lean_box(0);
v___x_808_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0));
if (lean_obj_tag(v_head_805_) == 2)
{
lean_object* v_i_809_; lean_object* v_vs_810_; uint8_t v___x_811_; 
v_i_809_ = lean_ctor_get(v_head_805_, 0);
v_vs_810_ = lean_ctor_get(v_head_805_, 1);
v___x_811_ = lean_name_eq(v_i_809_, v_x_801_);
if (v___x_811_ == 0)
{
v_as_x27_802_ = v_tail_806_;
v_b_803_ = v___x_808_;
goto _start;
}
else
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
lean_inc_ref(v_vs_810_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v_vs_810_);
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
lean_ctor_set(v___x_814_, 1, v___x_807_);
v___x_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
else
{
v_as_x27_802_ = v_tail_806_;
v_b_803_ = v___x_808_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___boxed(lean_object* v_x_817_, lean_object* v_as_x27_818_, lean_object* v_b_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_817_, v_as_x27_818_, v_b_819_);
lean_dec(v_as_x27_818_);
lean_dec(v_x_817_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(lean_object* v_x_821_, lean_object* v_x_822_){
_start:
{
switch(lean_obj_tag(v_x_821_))
{
case 2:
{
lean_object* v_i_823_; lean_object* v_vs_824_; uint8_t v___x_825_; 
v_i_823_ = lean_ctor_get(v_x_821_, 0);
v_vs_824_ = lean_ctor_get(v_x_821_, 1);
v___x_825_ = lean_name_eq(v_i_823_, v_x_822_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_box(0);
return v___x_826_;
}
else
{
lean_object* v___x_827_; 
lean_inc_ref(v_vs_824_);
v___x_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_827_, 0, v_vs_824_);
return v___x_827_;
}
}
case 3:
{
lean_object* v_vs_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v_val_832_; lean_object* v_fst_833_; 
v_vs_828_ = lean_ctor_get(v_x_821_, 0);
v___x_829_ = lean_box(0);
v___x_830_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0));
v___x_831_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_822_, v_vs_828_, v___x_830_);
v_val_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_val_832_);
lean_dec(v___x_831_);
v_fst_833_ = lean_ctor_get(v_val_832_, 0);
lean_inc(v_fst_833_);
lean_dec(v_val_832_);
if (lean_obj_tag(v_fst_833_) == 0)
{
return v___x_829_;
}
else
{
return v_fst_833_;
}
}
default: 
{
lean_object* v___x_834_; 
v___x_834_ = lean_box(0);
return v___x_834_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs___boxed(lean_object* v_x_835_, lean_object* v_x_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(v_x_835_, v_x_836_);
lean_dec(v_x_836_);
lean_dec(v_x_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(lean_object* v_x_838_, lean_object* v_as_839_, lean_object* v_as_x27_840_, lean_object* v_b_841_, lean_object* v_a_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_838_, v_as_x27_840_, v_b_841_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___boxed(lean_object* v_x_844_, lean_object* v_as_845_, lean_object* v_as_x27_846_, lean_object* v_b_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(v_x_844_, v_as_845_, v_as_x27_846_, v_b_847_, v_a_848_);
lean_dec(v_as_x27_846_);
lean_dec(v_as_845_);
lean_dec(v_x_844_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(lean_object* v_a_862_){
_start:
{
lean_object* v_zero_863_; uint8_t v_isZero_864_; 
v_zero_863_ = lean_unsigned_to_nat(0u);
v_isZero_864_ = lean_nat_dec_eq(v_a_862_, v_zero_863_);
if (v_isZero_864_ == 1)
{
lean_object* v___x_865_; 
v___x_865_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3));
return v___x_865_;
}
else
{
lean_object* v_one_866_; lean_object* v_n_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_one_866_ = lean_unsigned_to_nat(1u);
v_n_867_ = lean_nat_sub(v_a_862_, v_one_866_);
v___x_868_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5));
v___x_869_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_n_867_);
lean_dec(v_n_867_);
v___x_870_ = lean_mk_empty_array_with_capacity(v_one_866_);
v___x_871_ = lean_array_push(v___x_870_, v___x_869_);
v___x_872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_868_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___boxed(lean_object* v_a_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_a_873_);
lean_dec(v_a_873_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(lean_object* v_n_875_){
_start:
{
lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_876_ = lean_unsigned_to_nat(8u);
v___x_877_ = lean_nat_dec_lt(v___x_876_, v_n_875_);
if (v___x_877_ == 0)
{
lean_object* v___x_878_; 
v___x_878_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_n_875_);
return v___x_878_;
}
else
{
lean_object* v___x_879_; 
v___x_879_ = lean_box(1);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat___boxed(lean_object* v_n_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(v_n_880_);
lean_dec(v_n_880_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(lean_object* v_x_882_){
_start:
{
if (lean_obj_tag(v_x_882_) == 0)
{
lean_object* v_val_883_; lean_object* v___x_884_; 
v_val_883_ = lean_ctor_get(v_x_882_, 0);
v___x_884_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(v_val_883_);
return v___x_884_;
}
else
{
lean_object* v___x_885_; 
v___x_885_ = lean_box(1);
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit___boxed(lean_object* v_x_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(v_x_886_);
lean_dec_ref(v_x_886_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(lean_object* v_env_888_, lean_object* v_x_889_, lean_object* v_x_890_){
_start:
{
switch(lean_obj_tag(v_x_889_))
{
case 2:
{
lean_object* v_vs_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
lean_dec_ref(v_env_888_);
v_vs_891_ = lean_ctor_get(v_x_889_, 1);
v___x_892_ = lean_array_get_size(v_vs_891_);
v___x_893_ = lean_nat_dec_lt(v_x_890_, v___x_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; 
v___x_894_ = lean_box(0);
return v___x_894_;
}
else
{
lean_object* v___x_895_; 
v___x_895_ = lean_array_fget_borrowed(v_vs_891_, v_x_890_);
lean_inc(v___x_895_);
return v___x_895_;
}
}
case 3:
{
lean_object* v_vs_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_vs_896_ = lean_ctor_get(v_x_889_, 0);
v___x_897_ = lean_box(0);
v___x_898_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(v_env_888_, v_x_890_, v___x_897_, v_vs_896_);
return v___x_898_;
}
default: 
{
lean_dec_ref(v_env_888_);
lean_inc(v_x_889_);
return v_x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(lean_object* v_env_899_, lean_object* v_x_900_, lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
if (lean_obj_tag(v_x_902_) == 0)
{
lean_dec_ref(v_env_899_);
return v_x_901_;
}
else
{
lean_object* v_head_903_; lean_object* v_tail_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_head_903_ = lean_ctor_get(v_x_902_, 0);
v_tail_904_ = lean_ctor_get(v_x_902_, 1);
lean_inc_ref_n(v_env_899_, 2);
v___x_905_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_899_, v_head_903_, v_x_900_);
v___x_906_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_899_, v_x_901_, v___x_905_);
v_x_901_ = v___x_906_;
v_x_902_ = v_tail_904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0___boxed(lean_object* v_env_908_, lean_object* v_x_909_, lean_object* v_x_910_, lean_object* v_x_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(v_env_908_, v_x_909_, v_x_910_, v_x_911_);
lean_dec(v_x_911_);
lean_dec(v_x_909_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj___boxed(lean_object* v_env_913_, lean_object* v_x_914_, lean_object* v_x_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_913_, v_x_914_, v_x_915_);
lean_dec(v_x_915_);
lean_dec(v_x_914_);
return v_res_916_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(lean_object* v_x_917_){
_start:
{
if (lean_obj_tag(v_x_917_) == 2)
{
lean_object* v_vs_918_; lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; 
v_vs_918_ = lean_ctor_get(v_x_917_, 1);
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_920_ = lean_array_get_size(v_vs_918_);
v___x_921_ = lean_nat_dec_lt(v___x_919_, v___x_920_);
if (v___x_921_ == 0)
{
uint8_t v___x_922_; 
v___x_922_ = 1;
return v___x_922_;
}
else
{
if (v___x_921_ == 0)
{
return v___x_921_;
}
else
{
size_t v___x_923_; size_t v___x_924_; uint8_t v___x_925_; 
v___x_923_ = ((size_t)0ULL);
v___x_924_ = lean_usize_of_nat(v___x_920_);
v___x_925_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(v_vs_918_, v___x_923_, v___x_924_);
if (v___x_925_ == 0)
{
return v___x_921_;
}
else
{
uint8_t v___x_926_; 
v___x_926_ = 0;
return v___x_926_;
}
}
}
}
else
{
uint8_t v___x_927_; 
v___x_927_ = 0;
return v___x_927_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(lean_object* v_as_928_, size_t v_i_929_, size_t v_stop_930_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = lean_usize_dec_eq(v_i_929_, v_stop_930_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = lean_array_uget_borrowed(v_as_928_, v_i_929_);
v___x_933_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v___x_932_);
if (v___x_933_ == 0)
{
uint8_t v___x_934_; 
v___x_934_ = 1;
return v___x_934_;
}
else
{
size_t v___x_935_; size_t v___x_936_; 
v___x_935_ = ((size_t)1ULL);
v___x_936_ = lean_usize_add(v_i_929_, v___x_935_);
v_i_929_ = v___x_936_;
goto _start;
}
}
else
{
uint8_t v___x_938_; 
v___x_938_ = 0;
return v___x_938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0___boxed(lean_object* v_as_939_, lean_object* v_i_940_, lean_object* v_stop_941_){
_start:
{
size_t v_i_boxed_942_; size_t v_stop_boxed_943_; uint8_t v_res_944_; lean_object* v_r_945_; 
v_i_boxed_942_ = lean_unbox_usize(v_i_940_);
lean_dec(v_i_940_);
v_stop_boxed_943_ = lean_unbox_usize(v_stop_941_);
lean_dec(v_stop_941_);
v_res_944_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(v_as_939_, v_i_boxed_942_, v_stop_boxed_943_);
lean_dec_ref(v_as_939_);
v_r_945_ = lean_box(v_res_944_);
return v_r_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral___boxed(lean_object* v_x_946_){
_start:
{
uint8_t v_res_947_; lean_object* v_r_948_; 
v_res_947_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v_x_946_);
lean_dec(v_x_946_);
v_r_948_ = lean_box(v_res_947_);
return v_r_948_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(lean_object* v_msg_949_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_unsigned_to_nat(0u);
v___x_951_ = lean_panic_fn_borrowed(v___x_950_, v_msg_949_);
return v___x_951_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_954_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1));
v___x_955_ = lean_unsigned_to_nat(9u);
v___x_956_ = lean_unsigned_to_nat(271u);
v___x_957_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0));
v___x_958_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_959_ = l_mkPanicMessageWithDecl(v___x_958_, v___x_957_, v___x_956_, v___x_955_, v___x_954_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(lean_object* v_a_960_){
_start:
{
if (lean_obj_tag(v_a_960_) == 2)
{
lean_object* v_i_964_; 
v_i_964_ = lean_ctor_get(v_a_960_, 0);
if (lean_obj_tag(v_i_964_) == 1)
{
lean_object* v_pre_965_; 
v_pre_965_ = lean_ctor_get(v_i_964_, 0);
if (lean_obj_tag(v_pre_965_) == 1)
{
lean_object* v_pre_966_; 
v_pre_966_ = lean_ctor_get(v_pre_965_, 0);
if (lean_obj_tag(v_pre_966_) == 0)
{
lean_object* v_vs_967_; lean_object* v_str_968_; lean_object* v_str_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v_vs_967_ = lean_ctor_get(v_a_960_, 1);
v_str_968_ = lean_ctor_get(v_i_964_, 1);
v_str_969_ = lean_ctor_get(v_pre_965_, 1);
v___x_970_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0));
v___x_971_ = lean_string_dec_eq(v_str_969_, v___x_970_);
if (v___x_971_ == 0)
{
goto v___jp_961_;
}
else
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1));
v___x_973_ = lean_string_dec_eq(v_str_968_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_974_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4));
v___x_975_ = lean_string_dec_eq(v_str_968_, v___x_974_);
if (v___x_975_ == 0)
{
goto v___jp_961_;
}
else
{
lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_976_ = lean_array_get_size(v_vs_967_);
v___x_977_ = lean_unsigned_to_nat(1u);
v___x_978_ = lean_nat_dec_eq(v___x_976_, v___x_977_);
if (v___x_978_ == 0)
{
goto v___jp_961_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_979_ = lean_unsigned_to_nat(0u);
v___x_980_ = lean_array_fget_borrowed(v_vs_967_, v___x_979_);
v___x_981_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v___x_980_);
v___x_982_ = lean_nat_add(v___x_981_, v___x_977_);
lean_dec(v___x_981_);
return v___x_982_;
}
}
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_983_ = lean_array_get_size(v_vs_967_);
v___x_984_ = lean_unsigned_to_nat(0u);
v___x_985_ = lean_nat_dec_eq(v___x_983_, v___x_984_);
if (v___x_985_ == 0)
{
goto v___jp_961_;
}
else
{
return v___x_984_;
}
}
}
}
else
{
goto v___jp_961_;
}
}
else
{
goto v___jp_961_;
}
}
else
{
goto v___jp_961_;
}
}
else
{
goto v___jp_961_;
}
v___jp_961_:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2);
v___x_963_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(v___x_962_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___boxed(lean_object* v_a_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v_a_986_);
lean_dec(v_a_986_);
return v_res_987_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_instMonadEIO___redArg();
return v___x_988_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3(void){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Array_instInhabited___redArg();
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(lean_object* v_msg_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v_toApplicative_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1035_; 
v___x_998_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0);
v___x_999_ = l_StateRefT_x27_instMonad___redArg(v___x_998_);
v_toApplicative_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v___x_999_, 1);
lean_dec(v_unused_1036_);
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1035_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_toApplicative_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1035_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v_toFunctor_1004_; lean_object* v_toSeq_1005_; lean_object* v_toSeqLeft_1006_; lean_object* v_toSeqRight_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1033_; 
v_toFunctor_1004_ = lean_ctor_get(v_toApplicative_1000_, 0);
v_toSeq_1005_ = lean_ctor_get(v_toApplicative_1000_, 2);
v_toSeqLeft_1006_ = lean_ctor_get(v_toApplicative_1000_, 3);
v_toSeqRight_1007_ = lean_ctor_get(v_toApplicative_1000_, 4);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_toApplicative_1000_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; 
v_unused_1034_ = lean_ctor_get(v_toApplicative_1000_, 1);
lean_dec(v_unused_1034_);
v___x_1009_ = v_toApplicative_1000_;
v_isShared_1010_ = v_isSharedCheck_1033_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_toSeqRight_1007_);
lean_inc(v_toSeqLeft_1006_);
lean_inc(v_toSeq_1005_);
lean_inc(v_toFunctor_1004_);
lean_dec(v_toApplicative_1000_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1033_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___x_1020_; 
v___f_1011_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1));
v___f_1012_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1004_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toFunctor_1004_);
v___f_1014_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1014_, 0, v_toFunctor_1004_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___f_1013_);
lean_ctor_set(v___x_1015_, 1, v___f_1014_);
v___f_1016_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1016_, 0, v_toSeqRight_1007_);
v___f_1017_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1017_, 0, v_toSeqLeft_1006_);
v___f_1018_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1018_, 0, v_toSeq_1005_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 4, v___f_1016_);
lean_ctor_set(v___x_1009_, 3, v___f_1017_);
lean_ctor_set(v___x_1009_, 2, v___f_1018_);
lean_ctor_set(v___x_1009_, 1, v___f_1011_);
lean_ctor_set(v___x_1009_, 0, v___x_1015_);
v___x_1020_ = v___x_1009_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v___f_1011_);
lean_ctor_set(v_reuseFailAlloc_1032_, 2, v___f_1018_);
lean_ctor_set(v_reuseFailAlloc_1032_, 3, v___f_1017_);
lean_ctor_set(v_reuseFailAlloc_1032_, 4, v___f_1016_);
v___x_1020_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1022_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v___f_1012_);
lean_ctor_set(v___x_1002_, 0, v___x_1020_);
v___x_1022_ = v___x_1002_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v___f_1012_);
v___x_1022_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___f_1028_; lean_object* v___x_1970__overap_1029_; lean_object* v___x_1030_; 
v___x_1023_ = l_StateRefT_x27_instMonad___redArg(v___x_1022_);
v___x_1024_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3);
v___x_1025_ = l_Lean_instInhabitedFVarId_default;
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = l_instInhabitedOfMonad___redArg(v___x_1023_, v___x_1026_);
v___f_1028_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1028_, 0, v___x_1027_);
v___x_1970__overap_1029_ = lean_panic_fn_borrowed(v___f_1028_, v_msg_992_);
lean_dec_ref(v___f_1028_);
lean_inc(v___y_996_);
lean_inc_ref(v___y_995_);
lean_inc(v___y_994_);
lean_inc_ref(v___y_993_);
v___x_1030_ = lean_apply_5(v___x_1970__overap_1029_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, lean_box(0));
return v___x_1030_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___boxed(lean_object* v_msg_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v_msg_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(lean_object* v_as_1044_, size_t v_i_1045_, size_t v_stop_1046_, lean_object* v_b_1047_){
_start:
{
uint8_t v___x_1048_; 
v___x_1048_ = lean_usize_dec_eq(v_i_1045_, v_stop_1046_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v_fst_1050_; lean_object* v_snd_1051_; lean_object* v_fst_1052_; lean_object* v_snd_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1066_; 
v___x_1049_ = lean_array_uget_borrowed(v_as_1044_, v_i_1045_);
v_fst_1050_ = lean_ctor_get(v___x_1049_, 0);
v_snd_1051_ = lean_ctor_get(v___x_1049_, 1);
v_fst_1052_ = lean_ctor_get(v_b_1047_, 0);
v_snd_1053_ = lean_ctor_get(v_b_1047_, 1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_b_1047_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1055_ = v_b_1047_;
v_isShared_1056_ = v_isSharedCheck_1066_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_snd_1053_);
lean_inc(v_fst_1052_);
lean_dec(v_b_1047_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1066_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1057_ = l_Array_append___redArg(v_fst_1052_, v_fst_1050_);
lean_inc(v_snd_1051_);
v___x_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1058_, 0, v_snd_1051_);
v___x_1059_ = lean_array_push(v_snd_1053_, v___x_1058_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 1, v___x_1059_);
lean_ctor_set(v___x_1055_, 0, v___x_1057_);
v___x_1061_ = v___x_1055_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
size_t v___x_1062_; size_t v___x_1063_; 
v___x_1062_ = ((size_t)1ULL);
v___x_1063_ = lean_usize_add(v_i_1045_, v___x_1062_);
v_i_1045_ = v___x_1063_;
v_b_1047_ = v___x_1061_;
goto _start;
}
}
}
else
{
return v_b_1047_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2___boxed(lean_object* v_as_1067_, lean_object* v_i_1068_, lean_object* v_stop_1069_, lean_object* v_b_1070_){
_start:
{
size_t v_i_boxed_1071_; size_t v_stop_boxed_1072_; lean_object* v_res_1073_; 
v_i_boxed_1071_ = lean_unbox_usize(v_i_1068_);
lean_dec(v_i_1068_);
v_stop_boxed_1072_ = lean_unbox_usize(v_stop_1069_);
lean_dec(v_stop_1069_);
v_res_1073_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_as_1067_, v_i_boxed_1071_, v_stop_boxed_1072_, v_b_1070_);
lean_dec_ref(v_as_1067_);
return v_res_1073_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1078_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_1079_ = lean_unsigned_to_nat(65u);
v___x_1080_ = lean_unsigned_to_nat(258u);
v___x_1081_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2));
v___x_1082_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_1083_ = l_mkPanicMessageWithDecl(v___x_1082_, v___x_1081_, v___x_1080_, v___x_1079_, v___x_1078_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed(lean_object* v_sz_1086_, lean_object* v_i_1087_, lean_object* v_bs_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
size_t v_sz_boxed_1094_; size_t v_i_boxed_1095_; lean_object* v_res_1096_; 
v_sz_boxed_1094_ = lean_unbox_usize(v_sz_1086_);
lean_dec(v_sz_1086_);
v_i_boxed_1095_ = lean_unbox_usize(v_i_1087_);
lean_dec(v_i_1087_);
v_res_1096_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(v_sz_boxed_1094_, v_i_boxed_1095_, v_bs_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
return v_res_1096_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1103_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_1104_ = lean_unsigned_to_nat(9u);
v___x_1105_ = lean_unsigned_to_nat(266u);
v___x_1106_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2));
v___x_1107_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_1108_ = l_mkPanicMessageWithDecl(v___x_1107_, v___x_1106_, v___x_1105_, v___x_1104_, v___x_1103_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v_fst_1121_; lean_object* v_snd_1122_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; 
if (lean_obj_tag(v_a_1109_) == 2)
{
lean_object* v_i_1164_; lean_object* v_vs_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1291_; 
v_i_1164_ = lean_ctor_get(v_a_1109_, 0);
v_vs_1165_ = lean_ctor_get(v_a_1109_, 1);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_a_1109_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1167_ = v_a_1109_;
v_isShared_1168_ = v_isSharedCheck_1291_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_vs_1165_);
lean_inc(v_i_1164_);
lean_dec(v_a_1109_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1291_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v_ctorName_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; 
if (lean_obj_tag(v_i_1164_) == 1)
{
lean_object* v_pre_1213_; 
v_pre_1213_ = lean_ctor_get(v_i_1164_, 0);
if (lean_obj_tag(v_pre_1213_) == 1)
{
lean_object* v_pre_1214_; 
v_pre_1214_ = lean_ctor_get(v_pre_1213_, 0);
if (lean_obj_tag(v_pre_1214_) == 0)
{
lean_object* v_str_1215_; lean_object* v_str_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v_str_1215_ = lean_ctor_get(v_i_1164_, 1);
v_str_1216_ = lean_ctor_get(v_pre_1213_, 1);
v___x_1217_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0));
v___x_1218_ = lean_string_dec_eq(v_str_1216_, v___x_1217_);
if (v___x_1218_ == 0)
{
v_ctorName_1170_ = v_i_1164_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1219_; uint8_t v___x_1220_; 
lean_inc_ref(v_str_1215_);
lean_inc(v_pre_1214_);
lean_dec_ref_known(v_i_1164_, 2);
v___x_1219_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1));
v___x_1220_ = lean_string_dec_eq(v_str_1215_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4));
v___x_1222_ = lean_string_dec_eq(v_str_1215_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = l_Lean_Name_str___override(v_pre_1214_, v___x_1217_);
v___x_1224_ = l_Lean_Name_str___override(v___x_1223_, v_str_1215_);
v_ctorName_1170_ = v___x_1224_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
lean_dec_ref(v_str_1215_);
v___x_1225_ = lean_array_get_size(v_vs_1165_);
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_nat_dec_eq(v___x_1225_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = l_Lean_Name_str___override(v_pre_1214_, v___x_1217_);
v___x_1229_ = l_Lean_Name_str___override(v___x_1228_, v___x_1221_);
v_ctorName_1170_ = v___x_1229_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v_val_1233_; uint8_t v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_del_object(v___x_1167_);
v___x_1230_ = lean_unsigned_to_nat(0u);
v___x_1231_ = lean_array_fget(v_vs_1165_, v___x_1230_);
lean_dec_ref(v_vs_1165_);
v___x_1232_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v___x_1231_);
lean_dec(v___x_1231_);
v_val_1233_ = lean_nat_add(v___x_1232_, v___x_1226_);
lean_dec(v___x_1232_);
v___x_1234_ = 0;
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_val_1233_);
v___x_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
v___x_1237_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1238_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1234_, v___x_1236_, v___x_1237_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1251_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1241_ = v___x_1238_;
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1238_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v_fvarId_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v_fvarId_1243_ = lean_ctor_get(v_a_1239_, 0);
lean_inc(v_fvarId_1243_);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_a_1239_);
v___x_1245_ = lean_mk_empty_array_with_capacity(v___x_1226_);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1244_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
lean_ctor_set(v___x_1247_, 1, v_fvarId_1243_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1247_);
v___x_1249_ = v___x_1241_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
v_a_1252_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1238_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1238_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; 
lean_dec_ref(v_str_1215_);
v___x_1260_ = lean_array_get_size(v_vs_1165_);
v___x_1261_ = lean_unsigned_to_nat(0u);
v___x_1262_ = lean_nat_dec_eq(v___x_1260_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = l_Lean_Name_str___override(v_pre_1214_, v___x_1217_);
v___x_1264_ = l_Lean_Name_str___override(v___x_1263_, v___x_1219_);
v_ctorName_1170_ = v___x_1264_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
else
{
uint8_t v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_del_object(v___x_1167_);
lean_dec_ref(v_vs_1165_);
v___x_1265_ = 0;
v___x_1266_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6));
v___x_1267_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1268_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1265_, v___x_1266_, v___x_1267_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1282_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1282_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1282_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v_fvarId_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
v_fvarId_1273_ = lean_ctor_get(v_a_1269_, 0);
lean_inc(v_fvarId_1273_);
v___x_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1274_, 0, v_a_1269_);
v___x_1275_ = lean_unsigned_to_nat(1u);
v___x_1276_ = lean_mk_empty_array_with_capacity(v___x_1275_);
v___x_1277_ = lean_array_push(v___x_1276_, v___x_1274_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v_fvarId_1273_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1278_);
v___x_1280_ = v___x_1271_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1268_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1268_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
}
}
else
{
v_ctorName_1170_ = v_i_1164_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
}
else
{
v_ctorName_1170_ = v_i_1164_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
}
else
{
v_ctorName_1170_ = v_i_1164_;
v___y_1171_ = v_a_1110_;
v___y_1172_ = v_a_1111_;
v___y_1173_ = v_a_1112_;
v___y_1174_ = v_a_1113_;
goto v___jp_1169_;
}
v___jp_1169_:
{
lean_object* v___x_1175_; lean_object* v_env_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; 
v___x_1175_ = lean_st_ref_get(v___y_1174_);
v_env_1176_ = lean_ctor_get(v___x_1175_, 0);
lean_inc_ref(v_env_1176_);
lean_dec(v___x_1175_);
v___x_1177_ = 0;
lean_inc(v_ctorName_1170_);
v___x_1178_ = l_Lean_Environment_find_x3f(v_env_1176_, v_ctorName_1170_, v___x_1177_);
if (lean_obj_tag(v___x_1178_) == 1)
{
lean_object* v_val_1179_; 
v_val_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_val_1179_);
lean_dec_ref_known(v___x_1178_, 1);
if (lean_obj_tag(v_val_1179_) == 6)
{
lean_object* v_val_1180_; size_t v_sz_1181_; size_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_2310__overap_1187_; lean_object* v___x_1188_; 
v_val_1180_ = lean_ctor_get(v_val_1179_, 0);
lean_inc_ref(v_val_1180_);
lean_dec_ref_known(v_val_1179_, 1);
v_sz_1181_ = lean_array_size(v_vs_1165_);
v___x_1182_ = ((size_t)0ULL);
v___x_1183_ = l_unsafeCast___redArg(v_vs_1165_);
lean_dec_ref(v_vs_1165_);
v___x_1184_ = lean_box_usize(v_sz_1181_);
v___x_1185_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed__const__1));
v___x_1186_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed), 8, 3);
lean_closure_set(v___x_1186_, 0, v___x_1184_);
lean_closure_set(v___x_1186_, 1, v___x_1185_);
lean_closure_set(v___x_1186_, 2, v___x_1183_);
v___x_2310__overap_1187_ = l_unsafeCast___redArg(v___x_1186_);
lean_dec_ref(v___x_1186_);
lean_inc(v___y_1174_);
lean_inc_ref(v___y_1173_);
lean_inc(v___y_1172_);
lean_inc_ref(v___y_1171_);
v___x_1188_ = lean_apply_5(v___x_2310__overap_1187_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, lean_box(0));
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v_numParams_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; uint8_t v___x_1196_; 
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
lean_inc(v_a_1189_);
lean_dec_ref_known(v___x_1188_, 1);
v_numParams_1190_ = lean_ctor_get(v_val_1180_, 3);
lean_inc(v_numParams_1190_);
lean_dec_ref(v_val_1180_);
v___x_1191_ = lean_unsigned_to_nat(0u);
v___x_1192_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4));
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_mk_array(v_numParams_1190_, v___x_1193_);
v___x_1195_ = lean_array_get_size(v_a_1189_);
v___x_1196_ = lean_nat_dec_lt(v___x_1191_, v___x_1195_);
if (v___x_1196_ == 0)
{
lean_dec(v_a_1189_);
lean_del_object(v___x_1167_);
v___y_1116_ = v___y_1173_;
v___y_1117_ = v___y_1172_;
v___y_1118_ = v___y_1171_;
v___y_1119_ = v___y_1174_;
v___y_1120_ = v_ctorName_1170_;
v_fst_1121_ = v___x_1192_;
v_snd_1122_ = v___x_1194_;
goto v___jp_1115_;
}
else
{
lean_object* v___x_1198_; 
lean_inc_ref(v___x_1194_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 0);
lean_ctor_set(v___x_1167_, 1, v___x_1194_);
lean_ctor_set(v___x_1167_, 0, v___x_1192_);
v___x_1198_ = v___x_1167_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1192_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v___x_1194_);
v___x_1198_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
uint8_t v___x_1199_; 
v___x_1199_ = lean_nat_dec_le(v___x_1195_, v___x_1195_);
if (v___x_1199_ == 0)
{
if (v___x_1196_ == 0)
{
lean_dec_ref(v___x_1198_);
lean_dec(v_a_1189_);
v___y_1116_ = v___y_1173_;
v___y_1117_ = v___y_1172_;
v___y_1118_ = v___y_1171_;
v___y_1119_ = v___y_1174_;
v___y_1120_ = v_ctorName_1170_;
v_fst_1121_ = v___x_1192_;
v_snd_1122_ = v___x_1194_;
goto v___jp_1115_;
}
else
{
size_t v___x_1200_; lean_object* v___x_1201_; 
lean_dec_ref(v___x_1194_);
v___x_1200_ = lean_usize_of_nat(v___x_1195_);
v___x_1201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_a_1189_, v___x_1182_, v___x_1200_, v___x_1198_);
lean_dec(v_a_1189_);
v___y_1149_ = v___y_1173_;
v___y_1150_ = v___y_1172_;
v___y_1151_ = v___y_1171_;
v___y_1152_ = v___y_1174_;
v___y_1153_ = v_ctorName_1170_;
v___y_1154_ = v___x_1201_;
goto v___jp_1148_;
}
}
else
{
size_t v___x_1202_; lean_object* v___x_1203_; 
lean_dec_ref(v___x_1194_);
v___x_1202_ = lean_usize_of_nat(v___x_1195_);
v___x_1203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_a_1189_, v___x_1182_, v___x_1202_, v___x_1198_);
lean_dec(v_a_1189_);
v___y_1149_ = v___y_1173_;
v___y_1150_ = v___y_1172_;
v___y_1151_ = v___y_1171_;
v___y_1152_ = v___y_1174_;
v___y_1153_ = v_ctorName_1170_;
v___y_1154_ = v___x_1203_;
goto v___jp_1148_;
}
}
}
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v_val_1180_);
lean_dec(v_ctorName_1170_);
lean_del_object(v___x_1167_);
v_a_1205_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1188_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1188_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
else
{
lean_dec(v_val_1179_);
lean_dec(v_ctorName_1170_);
lean_del_object(v___x_1167_);
lean_dec_ref(v_vs_1165_);
v___y_1158_ = v___y_1171_;
v___y_1159_ = v___y_1172_;
v___y_1160_ = v___y_1173_;
v___y_1161_ = v___y_1174_;
goto v___jp_1157_;
}
}
else
{
lean_dec(v___x_1178_);
lean_dec(v_ctorName_1170_);
lean_del_object(v___x_1167_);
lean_dec_ref(v_vs_1165_);
v___y_1158_ = v___y_1171_;
v___y_1159_ = v___y_1172_;
v___y_1160_ = v___y_1173_;
v___y_1161_ = v___y_1174_;
goto v___jp_1157_;
}
}
}
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_dec(v_a_1109_);
v___x_1292_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7);
v___x_1293_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v___x_1292_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
return v___x_1293_;
}
v___jp_1115_:
{
uint8_t v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1123_ = 0;
v___x_1124_ = lean_box(0);
v___x_1125_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1125_, 0, v___y_1120_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
lean_ctor_set(v___x_1125_, 2, v_snd_1122_);
v___x_1126_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1127_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1123_, v___x_1125_, v___x_1126_, v___y_1118_, v___y_1117_, v___y_1116_, v___y_1119_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1139_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1130_ = v___x_1127_;
v_isShared_1131_ = v_isSharedCheck_1139_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1127_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1139_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v_fvarId_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1137_; 
v_fvarId_1132_ = lean_ctor_get(v_a_1128_, 0);
lean_inc(v_fvarId_1132_);
v___x_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1133_, 0, v_a_1128_);
v___x_1134_ = lean_array_push(v_fst_1121_, v___x_1133_);
v___x_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v_fvarId_1132_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 0, v___x_1135_);
v___x_1137_ = v___x_1130_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_dec_ref(v_fst_1121_);
v_a_1140_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1127_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1127_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
v___jp_1148_:
{
lean_object* v_fst_1155_; lean_object* v_snd_1156_; 
v_fst_1155_ = lean_ctor_get(v___y_1154_, 0);
lean_inc(v_fst_1155_);
v_snd_1156_ = lean_ctor_get(v___y_1154_, 1);
lean_inc(v_snd_1156_);
lean_dec_ref(v___y_1154_);
v___y_1116_ = v___y_1149_;
v___y_1117_ = v___y_1150_;
v___y_1118_ = v___y_1151_;
v___y_1119_ = v___y_1152_;
v___y_1120_ = v___y_1153_;
v_fst_1121_ = v_fst_1155_;
v_snd_1122_ = v_snd_1156_;
goto v___jp_1115_;
}
v___jp_1157_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3);
v___x_1163_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v___x_1162_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
return v___x_1163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(size_t v_sz_1294_, size_t v_i_1295_, lean_object* v_bs_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_usize_dec_lt(v_i_1295_, v_sz_1294_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = l_unsafeCast___redArg(v_bs_1296_);
lean_dec_ref(v_bs_1296_);
v___x_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
return v___x_1304_;
}
else
{
lean_object* v_v_1305_; lean_object* v___x_1306_; lean_object* v_bs_x27_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_v_1305_ = lean_array_uget(v_bs_1296_, v_i_1295_);
v___x_1306_ = lean_unsigned_to_nat(0u);
v_bs_x27_1307_ = lean_array_uset(v_bs_1296_, v_i_1295_, v___x_1306_);
v___x_1308_ = l_unsafeCast___redArg(v_v_1305_);
lean_dec(v_v_1305_);
v___x_1309_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v___x_1308_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; size_t v___x_1311_; size_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 1);
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_add(v_i_1295_, v___x_1311_);
v___x_1313_ = l_unsafeCast___redArg(v_a_1310_);
lean_dec(v_a_1310_);
v___x_1314_ = lean_array_uset(v_bs_x27_1307_, v_i_1295_, v___x_1313_);
v_i_1295_ = v___x_1312_;
v_bs_1296_ = v___x_1314_;
goto _start;
}
else
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v_bs_x27_1307_);
v_a_1316_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1309_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1309_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed(lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_a_1324_, v_a_1325_, v_a_1326_, v_a_1327_, v_a_1328_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec_ref(v_a_1325_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(lean_object* v_v_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_){
_start:
{
uint8_t v___x_1337_; 
v___x_1337_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v_v_1331_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
lean_dec(v_v_1331_);
v___x_1338_ = lean_box(0);
v___x_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
return v___x_1339_;
}
else
{
lean_object* v___x_1340_; 
v___x_1340_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_v_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1349_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1343_ = v___x_1340_;
v_isShared_1344_ = v_isSharedCheck_1349_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1340_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1349_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_a_1341_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1345_);
v___x_1347_ = v___x_1343_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
else
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
v_a_1350_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1352_ = v___x_1340_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1340_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral___boxed(lean_object* v_v_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(v_v_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
lean_dec(v_a_1362_);
lean_dec_ref(v_a_1361_);
lean_dec(v_a_1360_);
lean_dec_ref(v_a_1359_);
return v_res_1364_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(lean_object* v_a_1365_, lean_object* v_b_1366_){
_start:
{
lean_object* v_fst_1367_; lean_object* v_fst_1368_; uint8_t v___x_1369_; 
v_fst_1367_ = lean_ctor_get(v_a_1365_, 0);
v_fst_1368_ = lean_ctor_get(v_b_1366_, 0);
v___x_1369_ = l_Lean_Name_quickLt(v_fst_1367_, v_fst_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed(lean_object* v_a_1370_, lean_object* v_b_1371_){
_start:
{
uint8_t v_res_1372_; lean_object* v_r_1373_; 
v_res_1372_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(v_a_1370_, v_b_1371_);
lean_dec_ref(v_b_1371_);
lean_dec_ref(v_a_1370_);
v_r_1373_ = lean_box(v_res_1372_);
return v_r_1373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(lean_object* v_entries_1376_, lean_object* v_fid_1377_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = lean_unsigned_to_nat(0u);
v___x_1379_ = lean_array_get_size(v_entries_1376_);
v___x_1380_ = lean_nat_dec_lt(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; 
lean_dec(v_fid_1377_);
v___x_1381_ = lean_box(0);
return v___x_1381_;
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1382_ = lean_unsigned_to_nat(1u);
v___x_1383_ = lean_nat_sub(v___x_1379_, v___x_1382_);
v___x_1384_ = lean_nat_dec_le(v___x_1378_, v___x_1383_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; 
lean_dec(v___x_1383_);
lean_dec(v_fid_1377_);
v___x_1385_ = lean_box(0);
return v___x_1385_;
}
else
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1386_ = lean_box(0);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v_fid_1377_);
lean_ctor_set(v___x_1387_, 1, v___x_1386_);
v___x_1388_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0));
v___x_1389_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1));
v___x_1390_ = l_Array_binSearchAux___redArg(v___x_1388_, v___x_1389_, v_entries_1376_, v___x_1387_, v___x_1378_, v___x_1383_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_box(0);
return v___x_1391_;
}
else
{
lean_object* v_val_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1400_; 
v_val_1392_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1394_ = v___x_1390_;
v_isShared_1395_ = v_isSharedCheck_1400_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_val_1392_);
lean_dec(v___x_1390_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1400_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v_snd_1396_; lean_object* v___x_1398_; 
v_snd_1396_ = lean_ctor_get(v_val_1392_, 1);
lean_inc(v_snd_1396_);
lean_dec(v_val_1392_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v_snd_1396_);
v___x_1398_ = v___x_1394_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_snd_1396_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___boxed(lean_object* v_entries_1401_, lean_object* v_fid_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(v_entries_1401_, v_fid_1402_);
lean_dec_ref(v_entries_1401_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_es_1404_){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = lean_array_mk(v_es_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1406_, lean_object* v_i_1407_, lean_object* v_k_1408_){
_start:
{
lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = lean_array_get_size(v_keys_1406_);
v___x_1410_ = lean_nat_dec_lt(v_i_1407_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_dec(v_i_1407_);
return v___x_1410_;
}
else
{
lean_object* v_k_x27_1411_; uint8_t v___x_1412_; 
v_k_x27_1411_ = lean_array_fget_borrowed(v_keys_1406_, v_i_1407_);
v___x_1412_ = lean_name_eq(v_k_1408_, v_k_x27_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_unsigned_to_nat(1u);
v___x_1414_ = lean_nat_add(v_i_1407_, v___x_1413_);
lean_dec(v_i_1407_);
v_i_1407_ = v___x_1414_;
goto _start;
}
else
{
lean_dec(v_i_1407_);
return v___x_1410_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1416_, lean_object* v_i_1417_, lean_object* v_k_1418_){
_start:
{
uint8_t v_res_1419_; lean_object* v_r_1420_; 
v_res_1419_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_keys_1416_, v_i_1417_, v_k_1418_);
lean_dec(v_k_1418_);
lean_dec_ref(v_keys_1416_);
v_r_1420_ = lean_box(v_res_1419_);
return v_r_1420_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_1421_, size_t v_x_1422_, lean_object* v_x_1423_){
_start:
{
if (lean_obj_tag(v_x_1421_) == 0)
{
lean_object* v_es_1424_; lean_object* v___x_1425_; size_t v___x_1426_; size_t v___x_1427_; lean_object* v_j_1428_; lean_object* v___x_1429_; 
v_es_1424_ = lean_ctor_get(v_x_1421_, 0);
v___x_1425_ = lean_box(2);
v___x_1426_ = ((size_t)31ULL);
v___x_1427_ = lean_usize_land(v_x_1422_, v___x_1426_);
v_j_1428_ = lean_usize_to_nat(v___x_1427_);
v___x_1429_ = lean_array_get_borrowed(v___x_1425_, v_es_1424_, v_j_1428_);
lean_dec(v_j_1428_);
switch(lean_obj_tag(v___x_1429_))
{
case 0:
{
lean_object* v_key_1430_; uint8_t v___x_1431_; 
v_key_1430_ = lean_ctor_get(v___x_1429_, 0);
v___x_1431_ = lean_name_eq(v_x_1423_, v_key_1430_);
return v___x_1431_;
}
case 1:
{
lean_object* v_node_1432_; size_t v___x_1433_; size_t v___x_1434_; 
v_node_1432_ = lean_ctor_get(v___x_1429_, 0);
v___x_1433_ = ((size_t)5ULL);
v___x_1434_ = lean_usize_shift_right(v_x_1422_, v___x_1433_);
v_x_1421_ = v_node_1432_;
v_x_1422_ = v___x_1434_;
goto _start;
}
default: 
{
uint8_t v___x_1436_; 
v___x_1436_ = 0;
return v___x_1436_;
}
}
}
else
{
lean_object* v_ks_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v_ks_1437_ = lean_ctor_get(v_x_1421_, 0);
v___x_1438_ = lean_unsigned_to_nat(0u);
v___x_1439_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_ks_1437_, v___x_1438_, v_x_1423_);
return v___x_1439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_1440_, lean_object* v_x_1441_, lean_object* v_x_1442_){
_start:
{
size_t v_x_1150__boxed_1443_; uint8_t v_res_1444_; lean_object* v_r_1445_; 
v_x_1150__boxed_1443_ = lean_unbox_usize(v_x_1441_);
lean_dec(v_x_1441_);
v_res_1444_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1440_, v_x_1150__boxed_1443_, v_x_1442_);
lean_dec(v_x_1442_);
lean_dec_ref(v_x_1440_);
v_r_1445_ = lean_box(v_res_1444_);
return v_r_1445_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_1446_, lean_object* v_x_1447_){
_start:
{
uint64_t v___y_1449_; lean_object* v___x_1452_; 
v___x_1452_ = l_unsafeCast___redArg(v_x_1447_);
if (lean_obj_tag(v___x_1452_) == 0)
{
uint64_t v___x_1453_; 
v___x_1453_ = 1723ULL;
v___y_1449_ = v___x_1453_;
goto v___jp_1448_;
}
else
{
uint64_t v_hash_1454_; 
v_hash_1454_ = lean_ctor_get_uint64(v___x_1452_, sizeof(void*)*2);
lean_dec(v___x_1452_);
v___y_1449_ = v_hash_1454_;
goto v___jp_1448_;
}
v___jp_1448_:
{
size_t v___x_1450_; uint8_t v___x_1451_; 
v___x_1450_ = lean_uint64_to_usize(v___y_1449_);
v___x_1451_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1446_, v___x_1450_, v_x_1447_);
return v___x_1451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_1455_, lean_object* v_x_1456_){
_start:
{
uint8_t v_res_1457_; lean_object* v_r_1458_; 
v_res_1457_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x_1455_, v_x_1456_);
lean_dec(v_x_1456_);
lean_dec_ref(v_x_1455_);
v_r_1458_ = lean_box(v_res_1457_);
return v_r_1458_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x1_1459_, lean_object* v_x2_1460_){
_start:
{
lean_object* v_fst_1461_; uint8_t v___x_1462_; 
v_fst_1461_ = lean_ctor_get(v_x2_1460_, 0);
v___x_1462_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x1_1459_, v_fst_1461_);
if (v___x_1462_ == 0)
{
uint8_t v___x_1463_; 
v___x_1463_ = 1;
return v___x_1463_;
}
else
{
uint8_t v___x_1464_; 
v___x_1464_ = 0;
return v___x_1464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x1_1465_, lean_object* v_x2_1466_){
_start:
{
uint8_t v_res_1467_; lean_object* v_r_1468_; 
v_res_1467_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x1_1465_, v_x2_1466_);
lean_dec_ref(v_x2_1466_);
lean_dec_ref(v_x1_1465_);
v_r_1468_ = lean_box(v_res_1467_);
return v_r_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(lean_object* v_f_1469_, lean_object* v_keys_1470_, lean_object* v_vals_1471_, lean_object* v_i_1472_, lean_object* v_acc_1473_){
_start:
{
lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1474_ = lean_array_get_size(v_keys_1470_);
v___x_1475_ = lean_nat_dec_lt(v_i_1472_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_dec(v_i_1472_);
lean_dec(v_f_1469_);
return v_acc_1473_;
}
else
{
lean_object* v_k_1476_; lean_object* v_v_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v_k_1476_ = lean_array_fget_borrowed(v_keys_1470_, v_i_1472_);
v_v_1477_ = lean_array_fget_borrowed(v_vals_1471_, v_i_1472_);
lean_inc(v_f_1469_);
lean_inc(v_v_1477_);
lean_inc(v_k_1476_);
v___x_1478_ = lean_apply_3(v_f_1469_, v_acc_1473_, v_k_1476_, v_v_1477_);
v___x_1479_ = lean_unsigned_to_nat(1u);
v___x_1480_ = lean_nat_add(v_i_1472_, v___x_1479_);
lean_dec(v_i_1472_);
v_i_1472_ = v___x_1480_;
v_acc_1473_ = v___x_1478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg___boxed(lean_object* v_f_1482_, lean_object* v_keys_1483_, lean_object* v_vals_1484_, lean_object* v_i_1485_, lean_object* v_acc_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(v_f_1482_, v_keys_1483_, v_vals_1484_, v_i_1485_, v_acc_1486_);
lean_dec_ref(v_vals_1484_);
lean_dec_ref(v_keys_1483_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(lean_object* v_f_1488_, lean_object* v_as_1489_, size_t v_i_1490_, size_t v_stop_1491_, lean_object* v_b_1492_){
_start:
{
lean_object* v___y_1494_; uint8_t v___x_1498_; 
v___x_1498_ = lean_usize_dec_eq(v_i_1490_, v_stop_1491_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_array_uget_borrowed(v_as_1489_, v_i_1490_);
switch(lean_obj_tag(v___x_1499_))
{
case 0:
{
lean_object* v_key_1500_; lean_object* v_val_1501_; lean_object* v___x_1502_; 
v_key_1500_ = lean_ctor_get(v___x_1499_, 0);
v_val_1501_ = lean_ctor_get(v___x_1499_, 1);
lean_inc(v_f_1488_);
lean_inc(v_val_1501_);
lean_inc(v_key_1500_);
v___x_1502_ = lean_apply_3(v_f_1488_, v_b_1492_, v_key_1500_, v_val_1501_);
v___y_1494_ = v___x_1502_;
goto v___jp_1493_;
}
case 1:
{
lean_object* v_node_1503_; lean_object* v___x_1504_; 
v_node_1503_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_f_1488_);
v___x_1504_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1488_, v_node_1503_, v_b_1492_);
v___y_1494_ = v___x_1504_;
goto v___jp_1493_;
}
default: 
{
v___y_1494_ = v_b_1492_;
goto v___jp_1493_;
}
}
}
else
{
lean_dec(v_f_1488_);
return v_b_1492_;
}
v___jp_1493_:
{
size_t v___x_1495_; size_t v___x_1496_; 
v___x_1495_ = ((size_t)1ULL);
v___x_1496_ = lean_usize_add(v_i_1490_, v___x_1495_);
v_i_1490_ = v___x_1496_;
v_b_1492_ = v___y_1494_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_f_1505_, lean_object* v_x_1506_, lean_object* v_x_1507_){
_start:
{
if (lean_obj_tag(v_x_1506_) == 0)
{
lean_object* v_es_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v_es_1508_ = lean_ctor_get(v_x_1506_, 0);
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1510_ = lean_array_get_size(v_es_1508_);
v___x_1511_ = lean_nat_dec_lt(v___x_1509_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_dec(v_f_1505_);
return v_x_1507_;
}
else
{
size_t v___x_1512_; size_t v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = ((size_t)0ULL);
v___x_1513_ = lean_usize_of_nat(v___x_1510_);
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1505_, v_es_1508_, v___x_1512_, v___x_1513_, v_x_1507_);
return v___x_1514_;
}
}
else
{
lean_object* v_ks_1515_; lean_object* v_vs_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v_ks_1515_ = lean_ctor_get(v_x_1506_, 0);
v_vs_1516_ = lean_ctor_get(v_x_1506_, 1);
v___x_1517_ = lean_unsigned_to_nat(0u);
v___x_1518_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(v_f_1505_, v_ks_1515_, v_vs_1516_, v___x_1517_, v_x_1507_);
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_f_1519_, lean_object* v_x_1520_, lean_object* v_x_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1519_, v_x_1520_, v_x_1521_);
lean_dec_ref(v_x_1520_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_f_1523_, lean_object* v_as_1524_, lean_object* v_i_1525_, lean_object* v_stop_1526_, lean_object* v_b_1527_){
_start:
{
size_t v_i_boxed_1528_; size_t v_stop_boxed_1529_; lean_object* v_res_1530_; 
v_i_boxed_1528_ = lean_unbox_usize(v_i_1525_);
lean_dec(v_i_1525_);
v_stop_boxed_1529_ = lean_unbox_usize(v_stop_1526_);
lean_dec(v_stop_1526_);
v_res_1530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1523_, v_as_1524_, v_i_boxed_1528_, v_stop_boxed_1529_, v_b_1527_);
lean_dec_ref(v_as_1524_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0(lean_object* v_f_1531_, lean_object* v_x1_1532_, lean_object* v_x2_1533_, lean_object* v_x3_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_apply_3(v_f_1531_, v_x1_1532_, v_x2_1533_, v_x3_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_map_1536_, lean_object* v_f_1537_, lean_object* v_init_1538_){
_start:
{
lean_object* v___f_1539_; lean_object* v___x_1540_; 
v___f_1539_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1539_, 0, v_f_1537_);
v___x_1540_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v___f_1539_, v_map_1536_, v_init_1538_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_map_1541_, lean_object* v_f_1542_, lean_object* v_init_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1541_, v_f_1542_, v_init_1543_);
lean_dec_ref(v_map_1541_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_ps_1545_, lean_object* v_k_1546_, lean_object* v_v_1547_){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v_k_1546_);
lean_ctor_set(v___x_1548_, 1, v_v_1547_);
v___x_1549_ = lean_array_push(v_ps_1545_, v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_1553_){
_start:
{
lean_object* v___f_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___f_1554_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0));
v___x_1555_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1));
v___x_1556_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_m_1553_, v___f_1554_, v___x_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_m_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_m_1557_);
lean_dec_ref(v_m_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_fst_1561_; lean_object* v_fst_1562_; uint8_t v___x_1563_; 
v_fst_1561_ = lean_ctor_get(v___y_1559_, 0);
v_fst_1562_ = lean_ctor_get(v___y_1560_, 0);
v___x_1563_ = l_Lean_Name_quickLt(v_fst_1561_, v_fst_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
uint8_t v_res_1566_; lean_object* v_r_1567_; 
v_res_1566_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___y_1564_, v___y_1565_);
lean_dec_ref(v___y_1565_);
lean_dec_ref(v___y_1564_);
v_r_1567_ = lean_box(v_res_1566_);
return v_r_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(lean_object* v_hi_1568_, lean_object* v_pivot_1569_, lean_object* v_as_1570_, lean_object* v_i_1571_, lean_object* v_k_1572_){
_start:
{
uint8_t v___x_1573_; 
v___x_1573_ = lean_nat_dec_lt(v_k_1572_, v_hi_1568_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_dec(v_k_1572_);
v___x_1574_ = lean_array_fswap(v_as_1570_, v_i_1571_, v_hi_1568_);
v___x_1575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1575_, 0, v_i_1571_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
return v___x_1575_;
}
else
{
lean_object* v___x_1576_; lean_object* v_fst_1577_; lean_object* v_fst_1578_; uint8_t v___x_1579_; 
v___x_1576_ = lean_array_fget_borrowed(v_as_1570_, v_k_1572_);
v_fst_1577_ = lean_ctor_get(v___x_1576_, 0);
v_fst_1578_ = lean_ctor_get(v_pivot_1569_, 0);
v___x_1579_ = l_Lean_Name_quickLt(v_fst_1577_, v_fst_1578_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = lean_unsigned_to_nat(1u);
v___x_1581_ = lean_nat_add(v_k_1572_, v___x_1580_);
lean_dec(v_k_1572_);
v_k_1572_ = v___x_1581_;
goto _start;
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1583_ = lean_array_fswap(v_as_1570_, v_i_1571_, v_k_1572_);
v___x_1584_ = lean_unsigned_to_nat(1u);
v___x_1585_ = lean_nat_add(v_i_1571_, v___x_1584_);
lean_dec(v_i_1571_);
v___x_1586_ = lean_nat_add(v_k_1572_, v___x_1584_);
lean_dec(v_k_1572_);
v_as_1570_ = v___x_1583_;
v_i_1571_ = v___x_1585_;
v_k_1572_ = v___x_1586_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg___boxed(lean_object* v_hi_1588_, lean_object* v_pivot_1589_, lean_object* v_as_1590_, lean_object* v_i_1591_, lean_object* v_k_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(v_hi_1588_, v_pivot_1589_, v_as_1590_, v_i_1591_, v_k_1592_);
lean_dec_ref(v_pivot_1589_);
lean_dec(v_hi_1588_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_1594_, lean_object* v_as_1595_, lean_object* v_lo_1596_, lean_object* v_hi_1597_){
_start:
{
lean_object* v___y_1599_; uint8_t v___x_1609_; 
v___x_1609_ = lean_nat_dec_lt(v_lo_1596_, v_hi_1597_);
if (v___x_1609_ == 0)
{
lean_dec(v_lo_1596_);
return v_as_1595_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v_mid_1612_; lean_object* v___y_1614_; lean_object* v___y_1620_; lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1610_ = lean_nat_add(v_lo_1596_, v_hi_1597_);
v___x_1611_ = lean_unsigned_to_nat(1u);
v_mid_1612_ = lean_nat_shiftr(v___x_1610_, v___x_1611_);
lean_dec(v___x_1610_);
v___x_1625_ = lean_array_fget_borrowed(v_as_1595_, v_mid_1612_);
v___x_1626_ = lean_array_fget_borrowed(v_as_1595_, v_lo_1596_);
v___x_1627_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_1625_, v___x_1626_);
if (v___x_1627_ == 0)
{
v___y_1620_ = v_as_1595_;
goto v___jp_1619_;
}
else
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_array_fswap(v_as_1595_, v_lo_1596_, v_mid_1612_);
v___y_1620_ = v___x_1628_;
goto v___jp_1619_;
}
v___jp_1613_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1615_ = lean_array_fget_borrowed(v___y_1614_, v_mid_1612_);
v___x_1616_ = lean_array_fget_borrowed(v___y_1614_, v_hi_1597_);
v___x_1617_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_1615_, v___x_1616_);
if (v___x_1617_ == 0)
{
lean_dec(v_mid_1612_);
v___y_1599_ = v___y_1614_;
goto v___jp_1598_;
}
else
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_array_fswap(v___y_1614_, v_mid_1612_, v_hi_1597_);
lean_dec(v_mid_1612_);
v___y_1599_ = v___x_1618_;
goto v___jp_1598_;
}
}
v___jp_1619_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1621_ = lean_array_fget_borrowed(v___y_1620_, v_hi_1597_);
v___x_1622_ = lean_array_fget_borrowed(v___y_1620_, v_lo_1596_);
v___x_1623_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_1621_, v___x_1622_);
if (v___x_1623_ == 0)
{
v___y_1614_ = v___y_1620_;
goto v___jp_1613_;
}
else
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_array_fswap(v___y_1620_, v_lo_1596_, v_hi_1597_);
v___y_1614_ = v___x_1624_;
goto v___jp_1613_;
}
}
}
v___jp_1598_:
{
lean_object* v_pivot_1600_; lean_object* v___x_1601_; lean_object* v_fst_1602_; lean_object* v_snd_1603_; uint8_t v___x_1604_; 
v_pivot_1600_ = lean_array_fget(v___y_1599_, v_hi_1597_);
lean_inc_n(v_lo_1596_, 2);
v___x_1601_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(v_hi_1597_, v_pivot_1600_, v___y_1599_, v_lo_1596_, v_lo_1596_);
lean_dec(v_pivot_1600_);
v_fst_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_fst_1602_);
v_snd_1603_ = lean_ctor_get(v___x_1601_, 1);
lean_inc(v_snd_1603_);
lean_dec_ref(v___x_1601_);
v___x_1604_ = lean_nat_dec_le(v_hi_1597_, v_fst_1602_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_n_1594_, v_snd_1603_, v_lo_1596_, v_fst_1602_);
v___x_1606_ = lean_unsigned_to_nat(1u);
v___x_1607_ = lean_nat_add(v_fst_1602_, v___x_1606_);
lean_dec(v_fst_1602_);
v_as_1595_ = v___x_1605_;
v_lo_1596_ = v___x_1607_;
goto _start;
}
else
{
lean_dec(v_fst_1602_);
lean_dec(v_lo_1596_);
return v_snd_1603_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_1629_, lean_object* v_as_1630_, lean_object* v_lo_1631_, lean_object* v_hi_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_n_1629_, v_as_1630_, v_lo_1631_, v_hi_1632_);
lean_dec(v_hi_1632_);
lean_dec(v_n_1629_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x_1636_, lean_object* v_s_1637_, lean_object* v_x_1638_){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___y_1644_; lean_object* v___y_1645_; uint8_t v___x_1648_; 
v___x_1639_ = lean_unsigned_to_nat(0u);
v___x_1640_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_1641_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_s_1637_);
v___x_1642_ = lean_array_get_size(v___x_1641_);
v___x_1648_ = lean_nat_dec_eq(v___x_1642_, v___x_1639_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___y_1652_; uint8_t v___x_1654_; 
v___x_1649_ = lean_unsigned_to_nat(1u);
v___x_1650_ = lean_nat_sub(v___x_1642_, v___x_1649_);
v___x_1654_ = lean_nat_dec_le(v___x_1639_, v___x_1650_);
if (v___x_1654_ == 0)
{
lean_inc(v___x_1650_);
v___y_1652_ = v___x_1650_;
goto v___jp_1651_;
}
else
{
v___y_1652_ = v___x_1639_;
goto v___jp_1651_;
}
v___jp_1651_:
{
uint8_t v___x_1653_; 
v___x_1653_ = lean_nat_dec_le(v___y_1652_, v___x_1650_);
if (v___x_1653_ == 0)
{
lean_dec(v___x_1650_);
lean_inc(v___y_1652_);
v___y_1644_ = v___y_1652_;
v___y_1645_ = v___y_1652_;
goto v___jp_1643_;
}
else
{
v___y_1644_ = v___y_1652_;
v___y_1645_ = v___x_1650_;
goto v___jp_1643_;
}
}
}
else
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1640_);
lean_ctor_set(v___x_1655_, 1, v___x_1640_);
lean_ctor_set(v___x_1655_, 2, v___x_1641_);
return v___x_1655_;
}
v___jp_1643_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v___x_1642_, v___x_1641_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
v___x_1647_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1640_);
lean_ctor_set(v___x_1647_, 1, v___x_1640_);
lean_ctor_set(v___x_1647_, 2, v___x_1646_);
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x_1656_, lean_object* v_s_1657_, lean_object* v_x_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x_1656_, v_s_1657_, v_x_1658_);
lean_dec(v_x_1658_);
lean_dec_ref(v_s_1657_);
lean_dec_ref(v_x_1656_);
return v_res_1659_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1660_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x_1665_);
lean_dec_ref(v_x_1665_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_1667_, lean_object* v_x_1668_, lean_object* v_x_1669_, lean_object* v_x_1670_){
_start:
{
lean_object* v_ks_1671_; lean_object* v_vs_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1696_; 
v_ks_1671_ = lean_ctor_get(v_x_1667_, 0);
v_vs_1672_ = lean_ctor_get(v_x_1667_, 1);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_x_1667_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1674_ = v_x_1667_;
v_isShared_1675_ = v_isSharedCheck_1696_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_vs_1672_);
lean_inc(v_ks_1671_);
lean_dec(v_x_1667_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1696_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1676_; uint8_t v___x_1677_; 
v___x_1676_ = lean_array_get_size(v_ks_1671_);
v___x_1677_ = lean_nat_dec_lt(v_x_1668_, v___x_1676_);
if (v___x_1677_ == 0)
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
lean_dec(v_x_1668_);
v___x_1678_ = lean_array_push(v_ks_1671_, v_x_1669_);
v___x_1679_ = lean_array_push(v_vs_1672_, v_x_1670_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 1, v___x_1679_);
lean_ctor_set(v___x_1674_, 0, v___x_1678_);
v___x_1681_ = v___x_1674_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1678_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
else
{
lean_object* v_k_x27_1683_; uint8_t v___x_1684_; 
v_k_x27_1683_ = lean_array_fget_borrowed(v_ks_1671_, v_x_1668_);
v___x_1684_ = lean_name_eq(v_x_1669_, v_k_x27_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1686_; 
if (v_isShared_1675_ == 0)
{
v___x_1686_ = v___x_1674_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_ks_1671_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_vs_1672_);
v___x_1686_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_unsigned_to_nat(1u);
v___x_1688_ = lean_nat_add(v_x_1668_, v___x_1687_);
lean_dec(v_x_1668_);
v_x_1667_ = v___x_1686_;
v_x_1668_ = v___x_1688_;
goto _start;
}
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1691_ = lean_array_fset(v_ks_1671_, v_x_1668_, v_x_1669_);
v___x_1692_ = lean_array_fset(v_vs_1672_, v_x_1668_, v_x_1670_);
lean_dec(v_x_1668_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 1, v___x_1692_);
lean_ctor_set(v___x_1674_, 0, v___x_1691_);
v___x_1694_ = v___x_1674_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(lean_object* v_n_1697_, lean_object* v_k_1698_, lean_object* v_v_1699_){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_unsigned_to_nat(0u);
v___x_1701_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(v_n_1697_, v___x_1700_, v_k_1698_, v_v_1699_);
return v___x_1701_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_box(0);
v___x_1703_ = l_unsafeCast___redArg(v___x_1702_);
return v___x_1703_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(lean_object* v_x_1705_, size_t v_x_1706_, size_t v_x_1707_, lean_object* v_x_1708_, lean_object* v_x_1709_){
_start:
{
if (lean_obj_tag(v_x_1705_) == 0)
{
lean_object* v_es_1710_; size_t v___x_1711_; size_t v___x_1712_; lean_object* v_j_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v_es_1710_ = lean_ctor_get(v_x_1705_, 0);
v___x_1711_ = ((size_t)31ULL);
v___x_1712_ = lean_usize_land(v_x_1706_, v___x_1711_);
v_j_1713_ = lean_usize_to_nat(v___x_1712_);
v___x_1714_ = lean_array_get_size(v_es_1710_);
v___x_1715_ = lean_nat_dec_lt(v_j_1713_, v___x_1714_);
if (v___x_1715_ == 0)
{
lean_dec(v_j_1713_);
lean_dec(v_x_1709_);
lean_dec(v_x_1708_);
return v_x_1705_;
}
else
{
lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1754_; 
lean_inc_ref(v_es_1710_);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_x_1705_);
if (v_isSharedCheck_1754_ == 0)
{
lean_object* v_unused_1755_; 
v_unused_1755_ = lean_ctor_get(v_x_1705_, 0);
lean_dec(v_unused_1755_);
v___x_1717_ = v_x_1705_;
v_isShared_1718_ = v_isSharedCheck_1754_;
goto v_resetjp_1716_;
}
else
{
lean_dec(v_x_1705_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1754_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v_v_1719_; lean_object* v___x_1720_; lean_object* v_xs_x27_1721_; lean_object* v___y_1723_; 
v_v_1719_ = lean_array_fget(v_es_1710_, v_j_1713_);
v___x_1720_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0);
v_xs_x27_1721_ = lean_array_fset(v_es_1710_, v_j_1713_, v___x_1720_);
switch(lean_obj_tag(v_v_1719_))
{
case 0:
{
lean_object* v_key_1728_; lean_object* v_val_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1739_; 
v_key_1728_ = lean_ctor_get(v_v_1719_, 0);
v_val_1729_ = lean_ctor_get(v_v_1719_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_v_1719_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1731_ = v_v_1719_;
v_isShared_1732_ = v_isSharedCheck_1739_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_val_1729_);
lean_inc(v_key_1728_);
lean_dec(v_v_1719_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1739_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
uint8_t v___x_1733_; 
v___x_1733_ = lean_name_eq(v_x_1708_, v_key_1728_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_del_object(v___x_1731_);
v___x_1734_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1728_, v_val_1729_, v_x_1708_, v_x_1709_);
v___x_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
v___y_1723_ = v___x_1735_;
goto v___jp_1722_;
}
else
{
lean_object* v___x_1737_; 
lean_dec(v_val_1729_);
lean_dec(v_key_1728_);
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 1, v_x_1709_);
lean_ctor_set(v___x_1731_, 0, v_x_1708_);
v___x_1737_ = v___x_1731_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_x_1708_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_x_1709_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
v___y_1723_ = v___x_1737_;
goto v___jp_1722_;
}
}
}
}
case 1:
{
lean_object* v_node_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1752_; 
v_node_1740_ = lean_ctor_get(v_v_1719_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_v_1719_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1742_ = v_v_1719_;
v_isShared_1743_ = v_isSharedCheck_1752_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_node_1740_);
lean_dec(v_v_1719_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1752_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
size_t v___x_1744_; size_t v___x_1745_; size_t v___x_1746_; size_t v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1750_; 
v___x_1744_ = ((size_t)5ULL);
v___x_1745_ = lean_usize_shift_right(v_x_1706_, v___x_1744_);
v___x_1746_ = ((size_t)1ULL);
v___x_1747_ = lean_usize_add(v_x_1707_, v___x_1746_);
v___x_1748_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_node_1740_, v___x_1745_, v___x_1747_, v_x_1708_, v_x_1709_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1748_);
v___x_1750_ = v___x_1742_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
v___y_1723_ = v___x_1750_;
goto v___jp_1722_;
}
}
}
default: 
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v_x_1708_);
lean_ctor_set(v___x_1753_, 1, v_x_1709_);
v___y_1723_ = v___x_1753_;
goto v___jp_1722_;
}
}
v___jp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1726_; 
v___x_1724_ = lean_array_fset(v_xs_x27_1721_, v_j_1713_, v___y_1723_);
lean_dec(v_j_1713_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 0, v___x_1724_);
v___x_1726_ = v___x_1717_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1724_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
else
{
lean_object* v_ks_1756_; lean_object* v_vs_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1775_; 
v_ks_1756_ = lean_ctor_get(v_x_1705_, 0);
v_vs_1757_ = lean_ctor_get(v_x_1705_, 1);
v_isSharedCheck_1775_ = !lean_is_exclusive(v_x_1705_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1759_ = v_x_1705_;
v_isShared_1760_ = v_isSharedCheck_1775_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_vs_1757_);
lean_inc(v_ks_1756_);
lean_dec(v_x_1705_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1775_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_ks_1756_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v_vs_1757_);
v___x_1762_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v_newNode_1763_; size_t v___x_1764_; uint8_t v___x_1765_; 
v_newNode_1763_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v___x_1762_, v_x_1708_, v_x_1709_);
v___x_1764_ = ((size_t)7ULL);
v___x_1765_ = lean_usize_dec_le(v___x_1764_, v_x_1707_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1766_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1763_);
v___x_1767_ = lean_unsigned_to_nat(4u);
v___x_1768_ = lean_nat_dec_lt(v___x_1766_, v___x_1767_);
lean_dec(v___x_1766_);
if (v___x_1768_ == 0)
{
lean_object* v_ks_1769_; lean_object* v_vs_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_ks_1769_ = lean_ctor_get(v_newNode_1763_, 0);
lean_inc_ref(v_ks_1769_);
v_vs_1770_ = lean_ctor_get(v_newNode_1763_, 1);
lean_inc_ref(v_vs_1770_);
lean_dec_ref(v_newNode_1763_);
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__1);
v___x_1773_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(v_x_1707_, v_ks_1769_, v_vs_1770_, v___x_1771_, v___x_1772_);
lean_dec_ref(v_vs_1770_);
lean_dec_ref(v_ks_1769_);
return v___x_1773_;
}
else
{
return v_newNode_1763_;
}
}
else
{
return v_newNode_1763_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(size_t v_depth_1776_, lean_object* v_keys_1777_, lean_object* v_vals_1778_, lean_object* v_i_1779_, lean_object* v_entries_1780_){
_start:
{
lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = lean_array_get_size(v_keys_1777_);
v___x_1782_ = lean_nat_dec_lt(v_i_1779_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_dec(v_i_1779_);
return v_entries_1780_;
}
else
{
lean_object* v_k_1783_; lean_object* v_v_1784_; uint64_t v___y_1786_; lean_object* v___x_1797_; 
v_k_1783_ = lean_array_fget_borrowed(v_keys_1777_, v_i_1779_);
v_v_1784_ = lean_array_fget_borrowed(v_vals_1778_, v_i_1779_);
v___x_1797_ = l_unsafeCast___redArg(v_k_1783_);
if (lean_obj_tag(v___x_1797_) == 0)
{
uint64_t v___x_1798_; 
v___x_1798_ = 1723ULL;
v___y_1786_ = v___x_1798_;
goto v___jp_1785_;
}
else
{
uint64_t v_hash_1799_; 
v_hash_1799_ = lean_ctor_get_uint64(v___x_1797_, sizeof(void*)*2);
lean_dec(v___x_1797_);
v___y_1786_ = v_hash_1799_;
goto v___jp_1785_;
}
v___jp_1785_:
{
size_t v_h_1787_; size_t v___x_1788_; lean_object* v___x_1789_; size_t v___x_1790_; size_t v___x_1791_; size_t v___x_1792_; size_t v_h_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v_h_1787_ = lean_uint64_to_usize(v___y_1786_);
v___x_1788_ = ((size_t)5ULL);
v___x_1789_ = lean_unsigned_to_nat(1u);
v___x_1790_ = ((size_t)1ULL);
v___x_1791_ = lean_usize_sub(v_depth_1776_, v___x_1790_);
v___x_1792_ = lean_usize_mul(v___x_1788_, v___x_1791_);
v_h_1793_ = lean_usize_shift_right(v_h_1787_, v___x_1792_);
v___x_1794_ = lean_nat_add(v_i_1779_, v___x_1789_);
lean_dec(v_i_1779_);
lean_inc(v_v_1784_);
lean_inc(v_k_1783_);
v___x_1795_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_entries_1780_, v_h_1793_, v_depth_1776_, v_k_1783_, v_v_1784_);
v_i_1779_ = v___x_1794_;
v_entries_1780_ = v___x_1795_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_1800_, lean_object* v_keys_1801_, lean_object* v_vals_1802_, lean_object* v_i_1803_, lean_object* v_entries_1804_){
_start:
{
size_t v_depth_boxed_1805_; lean_object* v_res_1806_; 
v_depth_boxed_1805_ = lean_unbox_usize(v_depth_1800_);
lean_dec(v_depth_1800_);
v_res_1806_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(v_depth_boxed_1805_, v_keys_1801_, v_vals_1802_, v_i_1803_, v_entries_1804_);
lean_dec_ref(v_vals_1802_);
lean_dec_ref(v_keys_1801_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___boxed(lean_object* v_x_1807_, lean_object* v_x_1808_, lean_object* v_x_1809_, lean_object* v_x_1810_, lean_object* v_x_1811_){
_start:
{
size_t v_x_1551__boxed_1812_; size_t v_x_1552__boxed_1813_; lean_object* v_res_1814_; 
v_x_1551__boxed_1812_ = lean_unbox_usize(v_x_1808_);
lean_dec(v_x_1808_);
v_x_1552__boxed_1813_ = lean_unbox_usize(v_x_1809_);
lean_dec(v_x_1809_);
v_res_1814_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_x_1807_, v_x_1551__boxed_1812_, v_x_1552__boxed_1813_, v_x_1810_, v_x_1811_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(lean_object* v_x_1815_, lean_object* v_x_1816_, lean_object* v_x_1817_){
_start:
{
uint64_t v___y_1819_; lean_object* v___x_1823_; 
v___x_1823_ = l_unsafeCast___redArg(v_x_1816_);
if (lean_obj_tag(v___x_1823_) == 0)
{
uint64_t v___x_1824_; 
v___x_1824_ = 1723ULL;
v___y_1819_ = v___x_1824_;
goto v___jp_1818_;
}
else
{
uint64_t v_hash_1825_; 
v_hash_1825_ = lean_ctor_get_uint64(v___x_1823_, sizeof(void*)*2);
lean_dec(v___x_1823_);
v___y_1819_ = v_hash_1825_;
goto v___jp_1818_;
}
v___jp_1818_:
{
size_t v___x_1820_; size_t v___x_1821_; lean_object* v___x_1822_; 
v___x_1820_ = lean_uint64_to_usize(v___y_1819_);
v___x_1821_ = ((size_t)1ULL);
v___x_1822_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_x_1815_, v___x_1820_, v___x_1821_, v_x_1816_, v_x_1817_);
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_s_1826_, lean_object* v_x_1827_){
_start:
{
lean_object* v_fst_1828_; lean_object* v_snd_1829_; lean_object* v___x_1830_; 
v_fst_1828_ = lean_ctor_get(v_x_1827_, 0);
lean_inc(v_fst_1828_);
v_snd_1829_ = lean_ctor_get(v_x_1827_, 1);
lean_inc(v_snd_1829_);
lean_dec_ref(v_x_1827_);
v___x_1830_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(v_s_1826_, v_fst_1828_, v_snd_1829_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_1864_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_a_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
return v_res_1866_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_){
_start:
{
uint8_t v___x_1870_; 
v___x_1870_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x_1868_, v_x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b2_1871_, lean_object* v_x_1872_, lean_object* v_x_1873_){
_start:
{
uint8_t v_res_1874_; lean_object* v_r_1875_; 
v_res_1874_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(v_00_u03b2_1871_, v_x_1872_, v_x_1873_);
lean_dec(v_x_1873_);
lean_dec_ref(v_x_1872_);
v_r_1875_ = lean_box(v_res_1874_);
return v_r_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_1876_, lean_object* v_m_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_m_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b2_1879_, lean_object* v_m_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(v_00_u03b2_1879_, v_m_1880_);
lean_dec_ref(v_m_1880_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(lean_object* v_n_1882_, lean_object* v_as_1883_, lean_object* v_lo_1884_, lean_object* v_hi_1885_, lean_object* v_w_1886_, lean_object* v_hlo_1887_, lean_object* v_hhi_1888_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_n_1882_, v_as_1883_, v_lo_1884_, v_hi_1885_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_1890_, lean_object* v_as_1891_, lean_object* v_lo_1892_, lean_object* v_hi_1893_, lean_object* v_w_1894_, lean_object* v_hlo_1895_, lean_object* v_hhi_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(v_n_1890_, v_as_1891_, v_lo_1892_, v_hi_1893_, v_w_1894_, v_hlo_1895_, v_hhi_1896_);
lean_dec(v_hi_1893_);
lean_dec(v_n_1890_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b2_1898_, lean_object* v_x_1899_, lean_object* v_x_1900_, lean_object* v_x_1901_){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(v_x_1899_, v_x_1900_, v_x_1901_);
return v___x_1902_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_1903_, lean_object* v_x_1904_, size_t v_x_1905_, lean_object* v_x_1906_){
_start:
{
uint8_t v___x_1907_; 
v___x_1907_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1904_, v_x_1905_, v_x_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_1908_, lean_object* v_x_1909_, lean_object* v_x_1910_, lean_object* v_x_1911_){
_start:
{
size_t v_x_1856__boxed_1912_; uint8_t v_res_1913_; lean_object* v_r_1914_; 
v_x_1856__boxed_1912_ = lean_unbox_usize(v_x_1910_);
lean_dec(v_x_1910_);
v_res_1913_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_1908_, v_x_1909_, v_x_1856__boxed_1912_, v_x_1911_);
lean_dec(v_x_1911_);
lean_dec_ref(v_x_1909_);
v_r_1914_ = lean_box(v_res_1913_);
return v_r_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03c3_1915_, lean_object* v_00_u03b2_1916_, lean_object* v_map_1917_, lean_object* v_f_1918_, lean_object* v_init_1919_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1917_, v_f_1918_, v_init_1919_);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03c3_1921_, lean_object* v_00_u03b2_1922_, lean_object* v_map_1923_, lean_object* v_f_1924_, lean_object* v_init_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(v_00_u03c3_1921_, v_00_u03b2_1922_, v_map_1923_, v_f_1924_, v_init_1925_);
lean_dec_ref(v_map_1923_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4(lean_object* v_n_1927_, lean_object* v_lo_1928_, lean_object* v_hi_1929_, lean_object* v_hhi_1930_, lean_object* v_pivot_1931_, lean_object* v_as_1932_, lean_object* v_i_1933_, lean_object* v_k_1934_, lean_object* v_ilo_1935_, lean_object* v_ik_1936_, lean_object* v_w_1937_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(v_hi_1929_, v_pivot_1931_, v_as_1932_, v_i_1933_, v_k_1934_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object* v_n_1939_, lean_object* v_lo_1940_, lean_object* v_hi_1941_, lean_object* v_hhi_1942_, lean_object* v_pivot_1943_, lean_object* v_as_1944_, lean_object* v_i_1945_, lean_object* v_k_1946_, lean_object* v_ilo_1947_, lean_object* v_ik_1948_, lean_object* v_w_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4(v_n_1939_, v_lo_1940_, v_hi_1941_, v_hhi_1942_, v_pivot_1943_, v_as_1944_, v_i_1945_, v_k_1946_, v_ilo_1947_, v_ik_1948_, v_w_1949_);
lean_dec_ref(v_pivot_1943_);
lean_dec(v_hi_1941_);
lean_dec(v_lo_1940_);
lean_dec(v_n_1939_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6(lean_object* v_00_u03b2_1951_, lean_object* v_x_1952_, size_t v_x_1953_, size_t v_x_1954_, lean_object* v_x_1955_, lean_object* v_x_1956_){
_start:
{
lean_object* v___x_1957_; 
v___x_1957_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_x_1952_, v_x_1953_, v_x_1954_, v_x_1955_, v_x_1956_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object* v_00_u03b2_1958_, lean_object* v_x_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_, lean_object* v_x_1962_, lean_object* v_x_1963_){
_start:
{
size_t v_x_1871__boxed_1964_; size_t v_x_1872__boxed_1965_; lean_object* v_res_1966_; 
v_x_1871__boxed_1964_ = lean_unbox_usize(v_x_1960_);
lean_dec(v_x_1960_);
v_x_1872__boxed_1965_ = lean_unbox_usize(v_x_1961_);
lean_dec(v_x_1961_);
v_res_1966_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6(v_00_u03b2_1958_, v_x_1959_, v_x_1871__boxed_1964_, v_x_1872__boxed_1965_, v_x_1962_, v_x_1963_);
return v_res_1966_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1967_, lean_object* v_keys_1968_, lean_object* v_vals_1969_, lean_object* v_heq_1970_, lean_object* v_i_1971_, lean_object* v_k_1972_){
_start:
{
uint8_t v___x_1973_; 
v___x_1973_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_keys_1968_, v_i_1971_, v_k_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1974_, lean_object* v_keys_1975_, lean_object* v_vals_1976_, lean_object* v_heq_1977_, lean_object* v_i_1978_, lean_object* v_k_1979_){
_start:
{
uint8_t v_res_1980_; lean_object* v_r_1981_; 
v_res_1980_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_1974_, v_keys_1975_, v_vals_1976_, v_heq_1977_, v_i_1978_, v_k_1979_);
lean_dec(v_k_1979_);
lean_dec_ref(v_vals_1976_);
lean_dec_ref(v_keys_1975_);
v_r_1981_ = lean_box(v_res_1980_);
return v_r_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object* v_map_1982_, lean_object* v_f_1983_, lean_object* v_init_1984_){
_start:
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1983_, v_map_1982_, v_init_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_map_1986_, lean_object* v_f_1987_, lean_object* v_init_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_map_1986_, v_f_1987_, v_init_1988_);
lean_dec_ref(v_map_1986_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object* v_00_u03c3_1990_, lean_object* v_00_u03b2_1991_, lean_object* v_map_1992_, lean_object* v_f_1993_, lean_object* v_init_1994_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1993_, v_map_1992_, v_init_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03c3_1996_, lean_object* v_00_u03b2_1997_, lean_object* v_map_1998_, lean_object* v_f_1999_, lean_object* v_init_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(v_00_u03c3_1996_, v_00_u03b2_1997_, v_map_1998_, v_f_1999_, v_init_2000_);
lean_dec_ref(v_map_1998_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9(lean_object* v_00_u03b2_2002_, lean_object* v_n_2003_, lean_object* v_k_2004_, lean_object* v_v_2005_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v_n_2003_, v_k_2004_, v_v_2005_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10(lean_object* v_00_u03b2_2007_, size_t v_depth_2008_, lean_object* v_keys_2009_, lean_object* v_vals_2010_, lean_object* v_heq_2011_, lean_object* v_i_2012_, lean_object* v_entries_2013_){
_start:
{
lean_object* v___x_2014_; 
v___x_2014_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(v_depth_2008_, v_keys_2009_, v_vals_2010_, v_i_2012_, v_entries_2013_);
return v___x_2014_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_2015_, lean_object* v_depth_2016_, lean_object* v_keys_2017_, lean_object* v_vals_2018_, lean_object* v_heq_2019_, lean_object* v_i_2020_, lean_object* v_entries_2021_){
_start:
{
size_t v_depth_boxed_2022_; lean_object* v_res_2023_; 
v_depth_boxed_2022_ = lean_unbox_usize(v_depth_2016_);
lean_dec(v_depth_2016_);
v_res_2023_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10(v_00_u03b2_2015_, v_depth_boxed_2022_, v_keys_2017_, v_vals_2018_, v_heq_2019_, v_i_2020_, v_entries_2021_);
lean_dec_ref(v_vals_2018_);
lean_dec_ref(v_keys_2017_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03c3_2024_, lean_object* v_00_u03b1_2025_, lean_object* v_00_u03b2_2026_, lean_object* v_f_2027_, lean_object* v_x_2028_, lean_object* v_x_2029_){
_start:
{
lean_object* v___x_2030_; 
v___x_2030_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_2027_, v_x_2028_, v_x_2029_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03c3_2031_, lean_object* v_00_u03b1_2032_, lean_object* v_00_u03b2_2033_, lean_object* v_f_2034_, lean_object* v_x_2035_, lean_object* v_x_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(v_00_u03c3_2031_, v_00_u03b1_2032_, v_00_u03b2_2033_, v_f_2034_, v_x_2035_, v_x_2036_);
lean_dec_ref(v_x_2035_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_2038_, lean_object* v_x_2039_, lean_object* v_x_2040_, lean_object* v_x_2041_, lean_object* v_x_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(v_x_2039_, v_x_2040_, v_x_2041_, v_x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(lean_object* v_00_u03b1_2044_, lean_object* v_00_u03b2_2045_, lean_object* v_00_u03c3_2046_, lean_object* v_f_2047_, lean_object* v_as_2048_, size_t v_i_2049_, size_t v_stop_2050_, lean_object* v_b_2051_){
_start:
{
lean_object* v___x_2052_; 
v___x_2052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_2047_, v_as_2048_, v_i_2049_, v_stop_2050_, v_b_2051_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b1_2053_, lean_object* v_00_u03b2_2054_, lean_object* v_00_u03c3_2055_, lean_object* v_f_2056_, lean_object* v_as_2057_, lean_object* v_i_2058_, lean_object* v_stop_2059_, lean_object* v_b_2060_){
_start:
{
size_t v_i_boxed_2061_; size_t v_stop_boxed_2062_; lean_object* v_res_2063_; 
v_i_boxed_2061_ = lean_unbox_usize(v_i_2058_);
lean_dec(v_i_2058_);
v_stop_boxed_2062_ = lean_unbox_usize(v_stop_2059_);
lean_dec(v_stop_2059_);
v_res_2063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(v_00_u03b1_2053_, v_00_u03b2_2054_, v_00_u03c3_2055_, v_f_2056_, v_as_2057_, v_i_boxed_2061_, v_stop_boxed_2062_, v_b_2060_);
lean_dec_ref(v_as_2057_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11(lean_object* v_00_u03c3_2064_, lean_object* v_00_u03b1_2065_, lean_object* v_00_u03b2_2066_, lean_object* v_f_2067_, lean_object* v_keys_2068_, lean_object* v_vals_2069_, lean_object* v_heq_2070_, lean_object* v_i_2071_, lean_object* v_acc_2072_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(v_f_2067_, v_keys_2068_, v_vals_2069_, v_i_2071_, v_acc_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___boxed(lean_object* v_00_u03c3_2074_, lean_object* v_00_u03b1_2075_, lean_object* v_00_u03b2_2076_, lean_object* v_f_2077_, lean_object* v_keys_2078_, lean_object* v_vals_2079_, lean_object* v_heq_2080_, lean_object* v_i_2081_, lean_object* v_acc_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11(v_00_u03c3_2074_, v_00_u03b1_2075_, v_00_u03b2_2076_, v_f_2077_, v_keys_2078_, v_vals_2079_, v_heq_2080_, v_i_2081_, v_acc_2082_);
lean_dec_ref(v_vals_2079_);
lean_dec_ref(v_keys_2078_);
return v_res_2083_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0(void){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = lean_box(0);
v___x_2085_ = l_unsafeCast___redArg(v___x_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(lean_object* v_env_2086_, lean_object* v_fid_2087_, lean_object* v_v_2088_){
_start:
{
lean_object* v___x_2089_; lean_object* v_toEnvExtension_2090_; lean_object* v_asyncMode_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2089_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v_toEnvExtension_2090_ = lean_ctor_get(v___x_2089_, 0);
v_asyncMode_2091_ = lean_ctor_get(v_toEnvExtension_2090_, 2);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v_fid_2087_);
lean_ctor_set(v___x_2092_, 1, v_v_2088_);
v___x_2093_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0);
v___x_2094_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2089_, v_env_2086_, v___x_2092_, v_asyncMode_2091_, v___x_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2095_, lean_object* v_vals_2096_, lean_object* v_i_2097_, lean_object* v_k_2098_){
_start:
{
lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2099_ = lean_array_get_size(v_keys_2095_);
v___x_2100_ = lean_nat_dec_lt(v_i_2097_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; 
lean_dec(v_i_2097_);
v___x_2101_ = lean_box(0);
return v___x_2101_;
}
else
{
lean_object* v_k_x27_2102_; uint8_t v___x_2103_; 
v_k_x27_2102_ = lean_array_fget_borrowed(v_keys_2095_, v_i_2097_);
v___x_2103_ = lean_name_eq(v_k_2098_, v_k_x27_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_unsigned_to_nat(1u);
v___x_2105_ = lean_nat_add(v_i_2097_, v___x_2104_);
lean_dec(v_i_2097_);
v_i_2097_ = v___x_2105_;
goto _start;
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = lean_array_fget_borrowed(v_vals_2096_, v_i_2097_);
lean_dec(v_i_2097_);
lean_inc(v___x_2107_);
v___x_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2109_, lean_object* v_vals_2110_, lean_object* v_i_2111_, lean_object* v_k_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2109_, v_vals_2110_, v_i_2111_, v_k_2112_);
lean_dec(v_k_2112_);
lean_dec_ref(v_vals_2110_);
lean_dec_ref(v_keys_2109_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(lean_object* v_x_2114_, size_t v_x_2115_, lean_object* v_x_2116_){
_start:
{
if (lean_obj_tag(v_x_2114_) == 0)
{
lean_object* v_es_2117_; lean_object* v___x_2118_; size_t v___x_2119_; size_t v___x_2120_; lean_object* v_j_2121_; lean_object* v___x_2122_; 
v_es_2117_ = lean_ctor_get(v_x_2114_, 0);
v___x_2118_ = lean_box(2);
v___x_2119_ = ((size_t)31ULL);
v___x_2120_ = lean_usize_land(v_x_2115_, v___x_2119_);
v_j_2121_ = lean_usize_to_nat(v___x_2120_);
v___x_2122_ = lean_array_get_borrowed(v___x_2118_, v_es_2117_, v_j_2121_);
lean_dec(v_j_2121_);
switch(lean_obj_tag(v___x_2122_))
{
case 0:
{
lean_object* v_key_2123_; lean_object* v_val_2124_; uint8_t v___x_2125_; 
v_key_2123_ = lean_ctor_get(v___x_2122_, 0);
v_val_2124_ = lean_ctor_get(v___x_2122_, 1);
v___x_2125_ = lean_name_eq(v_x_2116_, v_key_2123_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_box(0);
return v___x_2126_;
}
else
{
lean_object* v___x_2127_; 
lean_inc(v_val_2124_);
v___x_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2127_, 0, v_val_2124_);
return v___x_2127_;
}
}
case 1:
{
lean_object* v_node_2128_; size_t v___x_2129_; size_t v___x_2130_; 
v_node_2128_ = lean_ctor_get(v___x_2122_, 0);
v___x_2129_ = ((size_t)5ULL);
v___x_2130_ = lean_usize_shift_right(v_x_2115_, v___x_2129_);
v_x_2114_ = v_node_2128_;
v_x_2115_ = v___x_2130_;
goto _start;
}
default: 
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_box(0);
return v___x_2132_;
}
}
}
else
{
lean_object* v_ks_2133_; lean_object* v_vs_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v_ks_2133_ = lean_ctor_get(v_x_2114_, 0);
v_vs_2134_ = lean_ctor_get(v_x_2114_, 1);
v___x_2135_ = lean_unsigned_to_nat(0u);
v___x_2136_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_ks_2133_, v_vs_2134_, v___x_2135_, v_x_2116_);
return v___x_2136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_2137_, lean_object* v_x_2138_, lean_object* v_x_2139_){
_start:
{
size_t v_x_419__boxed_2140_; lean_object* v_res_2141_; 
v_x_419__boxed_2140_ = lean_unbox_usize(v_x_2138_);
lean_dec(v_x_2138_);
v_res_2141_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2137_, v_x_419__boxed_2140_, v_x_2139_);
lean_dec(v_x_2139_);
lean_dec_ref(v_x_2137_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(lean_object* v_x_2142_, lean_object* v_x_2143_){
_start:
{
uint64_t v___y_2145_; lean_object* v___x_2148_; 
v___x_2148_ = l_unsafeCast___redArg(v_x_2143_);
if (lean_obj_tag(v___x_2148_) == 0)
{
uint64_t v___x_2149_; 
v___x_2149_ = 1723ULL;
v___y_2145_ = v___x_2149_;
goto v___jp_2144_;
}
else
{
uint64_t v_hash_2150_; 
v_hash_2150_ = lean_ctor_get_uint64(v___x_2148_, sizeof(void*)*2);
lean_dec(v___x_2148_);
v___y_2145_ = v_hash_2150_;
goto v___jp_2144_;
}
v___jp_2144_:
{
size_t v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = lean_uint64_to_usize(v___y_2145_);
v___x_2147_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2142_, v___x_2146_, v_x_2143_);
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg___boxed(lean_object* v_x_2151_, lean_object* v_x_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_x_2151_, v_x_2152_);
lean_dec(v_x_2152_);
lean_dec_ref(v_x_2151_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(lean_object* v_as_2154_, lean_object* v_k_2155_, lean_object* v_x_2156_, lean_object* v_x_2157_){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v_m_2160_; lean_object* v_a_2161_; uint8_t v___x_2162_; 
v___x_2158_ = lean_nat_add(v_x_2156_, v_x_2157_);
v___x_2159_ = lean_unsigned_to_nat(1u);
v_m_2160_ = lean_nat_shiftr(v___x_2158_, v___x_2159_);
lean_dec(v___x_2158_);
v_a_2161_ = lean_array_fget_borrowed(v_as_2154_, v_m_2160_);
v___x_2162_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v_a_2161_, v_k_2155_);
if (v___x_2162_ == 0)
{
uint8_t v___x_2163_; 
lean_dec(v_x_2157_);
v___x_2163_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v_k_2155_, v_a_2161_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; 
lean_dec(v_m_2160_);
lean_dec(v_x_2156_);
lean_inc(v_a_2161_);
v___x_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2161_);
return v___x_2164_;
}
else
{
lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; uint8_t v___y_2169_; 
v___x_2165_ = lean_unsigned_to_nat(0u);
v___x_2166_ = lean_nat_dec_eq(v_m_2160_, v___x_2165_);
v___x_2167_ = lean_nat_sub(v_m_2160_, v___x_2159_);
lean_dec(v_m_2160_);
if (v___x_2166_ == 0)
{
uint8_t v___x_2172_; 
v___x_2172_ = lean_nat_dec_lt(v___x_2167_, v_x_2156_);
v___y_2169_ = v___x_2172_;
goto v___jp_2168_;
}
else
{
v___y_2169_ = v___x_2166_;
goto v___jp_2168_;
}
v___jp_2168_:
{
if (v___y_2169_ == 0)
{
v_x_2157_ = v___x_2167_;
goto _start;
}
else
{
lean_object* v___x_2171_; 
lean_dec(v___x_2167_);
lean_dec(v_x_2156_);
v___x_2171_ = lean_box(0);
return v___x_2171_;
}
}
}
}
else
{
lean_object* v___x_2173_; uint8_t v___x_2174_; 
lean_dec(v_x_2156_);
v___x_2173_ = lean_nat_add(v_m_2160_, v___x_2159_);
lean_dec(v_m_2160_);
v___x_2174_ = lean_nat_dec_le(v___x_2173_, v_x_2157_);
if (v___x_2174_ == 0)
{
lean_object* v___x_2175_; 
lean_dec(v___x_2173_);
lean_dec(v_x_2157_);
v___x_2175_ = lean_box(0);
return v___x_2175_;
}
else
{
v_x_2156_ = v___x_2173_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg___boxed(lean_object* v_as_2177_, lean_object* v_k_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v_as_2177_, v_k_2178_, v_x_2179_, v_x_2180_);
lean_dec_ref(v_k_2178_);
lean_dec_ref(v_as_2177_);
return v_res_2181_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0(void){
_start:
{
lean_object* v___x_2182_; 
v___x_2182_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2182_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2183_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0);
v___x_2184_ = lean_box(0);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2183_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(lean_object* v_env_2186_, lean_object* v_fid_2187_){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2197_; 
v___x_2188_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1, &l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1);
v___x_2189_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v___x_2197_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2186_, v_fid_2187_);
if (lean_obj_tag(v___x_2197_) == 0)
{
goto v___jp_2190_;
}
else
{
lean_object* v_val_2198_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v_val_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_val_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2220_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_2188_, v___x_2189_, v_env_2186_, v_val_2198_);
v___x_2221_ = lean_unsigned_to_nat(0u);
v___x_2222_ = lean_array_get_size(v___x_2220_);
v___x_2223_ = lean_nat_dec_lt(v___x_2221_, v___x_2222_);
if (v___x_2223_ == 0)
{
lean_dec_ref(v___x_2220_);
goto v___jp_2199_;
}
else
{
lean_object* v___x_2224_; lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2224_ = lean_unsigned_to_nat(1u);
v___x_2225_ = lean_nat_sub(v___x_2222_, v___x_2224_);
v___x_2226_ = lean_nat_dec_le(v___x_2221_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_dec(v___x_2225_);
lean_dec_ref(v___x_2220_);
goto v___jp_2199_;
}
else
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2227_ = lean_box(0);
lean_inc(v_fid_2187_);
v___x_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2228_, 0, v_fid_2187_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v___x_2220_, v___x_2228_, v___x_2221_, v___x_2225_);
lean_dec_ref_known(v___x_2228_, 2);
lean_dec_ref(v___x_2220_);
if (lean_obj_tag(v___x_2229_) == 0)
{
goto v___jp_2199_;
}
else
{
lean_object* v_val_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2238_; 
lean_dec(v_val_2198_);
lean_dec(v_fid_2187_);
lean_dec_ref(v_env_2186_);
v_val_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_val_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v_snd_2234_; lean_object* v___x_2236_; 
v_snd_2234_ = lean_ctor_get(v_val_2230_, 1);
lean_inc(v_snd_2234_);
lean_dec(v_val_2230_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v_snd_2234_);
v___x_2236_ = v___x_2232_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_snd_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
v___jp_2199_:
{
uint8_t v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2200_ = 0;
v___x_2201_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2188_, v___x_2189_, v_env_2186_, v_val_2198_, v___x_2200_);
lean_dec(v_val_2198_);
v___x_2202_ = lean_unsigned_to_nat(0u);
v___x_2203_ = lean_array_get_size(v___x_2201_);
v___x_2204_ = lean_nat_dec_lt(v___x_2202_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_dec_ref(v___x_2201_);
goto v___jp_2190_;
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2205_ = lean_unsigned_to_nat(1u);
v___x_2206_ = lean_nat_sub(v___x_2203_, v___x_2205_);
v___x_2207_ = lean_nat_dec_le(v___x_2202_, v___x_2206_);
if (v___x_2207_ == 0)
{
lean_dec(v___x_2206_);
lean_dec_ref(v___x_2201_);
goto v___jp_2190_;
}
else
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = lean_box(0);
lean_inc(v_fid_2187_);
v___x_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2209_, 0, v_fid_2187_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v___x_2201_, v___x_2209_, v___x_2202_, v___x_2206_);
lean_dec_ref_known(v___x_2209_, 2);
lean_dec_ref(v___x_2201_);
if (lean_obj_tag(v___x_2210_) == 0)
{
goto v___jp_2190_;
}
else
{
lean_object* v_val_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2219_; 
lean_dec(v_fid_2187_);
lean_dec_ref(v_env_2186_);
v_val_2211_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2213_ = v___x_2210_;
v_isShared_2214_ = v_isSharedCheck_2219_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_val_2211_);
lean_dec(v___x_2210_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2219_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v_snd_2215_; lean_object* v___x_2217_; 
v_snd_2215_ = lean_ctor_get(v_val_2211_, 1);
lean_inc(v_snd_2215_);
lean_dec(v_val_2211_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v_snd_2215_);
v___x_2217_ = v___x_2213_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_snd_2215_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
}
}
v___jp_2190_:
{
lean_object* v_toEnvExtension_2191_; lean_object* v_asyncMode_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v_snd_2195_; lean_object* v___x_2196_; 
v_toEnvExtension_2191_ = lean_ctor_get(v___x_2189_, 0);
v_asyncMode_2192_ = lean_ctor_get(v_toEnvExtension_2191_, 2);
v___x_2193_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0);
v___x_2194_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2188_, v___x_2189_, v_env_2186_, v_asyncMode_2192_, v___x_2193_);
v_snd_2195_ = lean_ctor_get(v___x_2194_, 1);
lean_inc(v_snd_2195_);
lean_dec(v___x_2194_);
v___x_2196_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_snd_2195_, v_fid_2187_);
lean_dec(v_fid_2187_);
lean_dec(v_snd_2195_);
return v___x_2196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(lean_object* v_00_u03b2_2239_, lean_object* v_x_2240_, lean_object* v_x_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_x_2240_, v_x_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___boxed(lean_object* v_00_u03b2_2243_, lean_object* v_x_2244_, lean_object* v_x_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(v_00_u03b2_2243_, v_x_2244_, v_x_2245_);
lean_dec(v_x_2245_);
lean_dec_ref(v_x_2244_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(lean_object* v_as_2247_, lean_object* v_k_2248_, lean_object* v_x_2249_, lean_object* v_x_2250_, lean_object* v_x_2251_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v_as_2247_, v_k_2248_, v_x_2249_, v_x_2250_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___boxed(lean_object* v_as_2253_, lean_object* v_k_2254_, lean_object* v_x_2255_, lean_object* v_x_2256_, lean_object* v_x_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(v_as_2253_, v_k_2254_, v_x_2255_, v_x_2256_, v_x_2257_);
lean_dec_ref(v_k_2254_);
lean_dec_ref(v_as_2253_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2259_, lean_object* v_x_2260_, size_t v_x_2261_, lean_object* v_x_2262_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2260_, v_x_2261_, v_x_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2264_, lean_object* v_x_2265_, lean_object* v_x_2266_, lean_object* v_x_2267_){
_start:
{
size_t v_x_649__boxed_2268_; lean_object* v_res_2269_; 
v_x_649__boxed_2268_ = lean_unbox_usize(v_x_2266_);
lean_dec(v_x_2266_);
v_res_2269_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(v_00_u03b2_2264_, v_x_2265_, v_x_649__boxed_2268_, v_x_2267_);
lean_dec(v_x_2267_);
lean_dec_ref(v_x_2265_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2270_, lean_object* v_keys_2271_, lean_object* v_vals_2272_, lean_object* v_heq_2273_, lean_object* v_i_2274_, lean_object* v_k_2275_){
_start:
{
lean_object* v___x_2276_; 
v___x_2276_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2271_, v_vals_2272_, v_i_2274_, v_k_2275_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2277_, lean_object* v_keys_2278_, lean_object* v_vals_2279_, lean_object* v_heq_2280_, lean_object* v_i_2281_, lean_object* v_k_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(v_00_u03b2_2277_, v_keys_2278_, v_vals_2279_, v_heq_2280_, v_i_2281_, v_k_2282_);
lean_dec(v_k_2282_);
lean_dec_ref(v_vals_2279_);
lean_dec_ref(v_keys_2278_);
return v_res_2283_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0(void){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v_assignments_2290_; lean_object* v_currFnIdx_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2288_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0);
v___x_2289_ = lean_st_ref_get(v_a_2286_);
v_assignments_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc_ref(v_assignments_2290_);
lean_dec(v___x_2289_);
v_currFnIdx_2291_ = lean_ctor_get(v_a_2285_, 1);
v___x_2292_ = lean_array_get(v___x_2288_, v_assignments_2290_, v_currFnIdx_2291_);
lean_dec_ref(v_assignments_2290_);
v___x_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___boxed(lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2294_, v_a_2295_);
lean_dec(v_a_2295_);
lean_dec_ref(v_a_2294_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2298_, v_a_2299_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___boxed(lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
lean_dec(v_a_2311_);
lean_dec_ref(v_a_2310_);
lean_dec(v_a_2309_);
lean_dec_ref(v_a_2308_);
lean_dec(v_a_2307_);
lean_dec_ref(v_a_2306_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(lean_object* v_funIdx_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v_funVals_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2317_ = lean_box(0);
v___x_2318_ = lean_st_ref_get(v_a_2315_);
v_funVals_2319_ = lean_ctor_get(v___x_2318_, 1);
lean_inc_ref(v_funVals_2319_);
lean_dec(v___x_2318_);
v___x_2320_ = lean_array_get(v___x_2317_, v_funVals_2319_, v_funIdx_2314_);
lean_dec_ref(v_funVals_2319_);
v___x_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2320_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg___boxed(lean_object* v_funIdx_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_funIdx_2322_, v_a_2323_);
lean_dec(v_a_2323_);
lean_dec(v_funIdx_2322_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(lean_object* v_funIdx_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_funIdx_2326_, v_a_2328_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___boxed(lean_object* v_funIdx_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(v_funIdx_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
lean_dec(v_a_2341_);
lean_dec_ref(v_a_2340_);
lean_dec(v_a_2339_);
lean_dec_ref(v_a_2338_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
lean_dec(v_funIdx_2335_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(lean_object* v_declName_2344_, lean_object* v_as_2345_, lean_object* v_j_2346_){
_start:
{
lean_object* v___x_2347_; uint8_t v___x_2348_; 
v___x_2347_ = lean_array_get_size(v_as_2345_);
v___x_2348_ = lean_nat_dec_lt(v_j_2346_, v___x_2347_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; 
lean_dec(v_j_2346_);
v___x_2349_ = lean_box(0);
return v___x_2349_;
}
else
{
lean_object* v___x_2350_; lean_object* v_toSignature_2351_; lean_object* v_name_2352_; uint8_t v___x_2353_; 
v___x_2350_ = lean_array_fget_borrowed(v_as_2345_, v_j_2346_);
v_toSignature_2351_ = lean_ctor_get(v___x_2350_, 0);
v_name_2352_ = lean_ctor_get(v_toSignature_2351_, 0);
v___x_2353_ = lean_name_eq(v_name_2352_, v_declName_2344_);
if (v___x_2353_ == 0)
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = lean_unsigned_to_nat(1u);
v___x_2355_ = lean_nat_add(v_j_2346_, v___x_2354_);
lean_dec(v_j_2346_);
v_j_2346_ = v___x_2355_;
goto _start;
}
else
{
lean_object* v___x_2357_; 
v___x_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_j_2346_);
return v___x_2357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0___boxed(lean_object* v_declName_2358_, lean_object* v_as_2359_, lean_object* v_j_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(v_declName_2358_, v_as_2359_, v_j_2360_);
lean_dec_ref(v_as_2359_);
lean_dec(v_declName_2358_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(lean_object* v_declName_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_decls_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v_decls_2366_ = lean_ctor_get(v_a_2363_, 0);
v___x_2367_ = lean_unsigned_to_nat(0u);
v___x_2368_ = l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(v_declName_2362_, v_decls_2366_, v___x_2367_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = lean_box(0);
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2369_);
return v___x_2370_;
}
else
{
lean_object* v_val_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2387_; 
v_val_2371_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2373_ = v___x_2368_;
v_isShared_2374_ = v_isSharedCheck_2387_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_val_2371_);
lean_dec(v___x_2368_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2387_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2375_; lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2386_; 
v___x_2375_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_val_2371_, v_a_2364_);
lean_dec(v_val_2371_);
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2386_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2386_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v_a_2376_);
v___x_2381_ = v___x_2373_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
lean_object* v___x_2383_; 
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v___x_2381_);
v___x_2383_ = v___x_2378_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___boxed(lean_object* v_declName_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_2388_, v_a_2389_, v_a_2390_);
lean_dec(v_a_2390_);
lean_dec_ref(v_a_2389_);
lean_dec(v_declName_2388_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(lean_object* v_declName_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_2393_, v_a_2394_, v_a_2395_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___boxed(lean_object* v_declName_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(v_declName_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
lean_dec(v_a_2406_);
lean_dec_ref(v_a_2405_);
lean_dec(v_a_2404_);
lean_dec_ref(v_a_2403_);
lean_dec(v_declName_2402_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(lean_object* v_f_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_){
_start:
{
lean_object* v_currFnIdx_2415_; lean_object* v___x_2416_; lean_object* v_assignments_2417_; lean_object* v_funVals_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2437_; 
v_currFnIdx_2415_ = lean_ctor_get(v_a_2412_, 1);
v___x_2416_ = lean_st_ref_take(v_a_2413_);
v_assignments_2417_ = lean_ctor_get(v___x_2416_, 0);
v_funVals_2418_ = lean_ctor_get(v___x_2416_, 1);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2420_ = v___x_2416_;
v_isShared_2421_ = v_isSharedCheck_2437_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_funVals_2418_);
lean_inc(v_assignments_2417_);
lean_dec(v___x_2416_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2437_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___y_2424_; lean_object* v___x_2430_; uint8_t v___x_2431_; 
v___x_2422_ = lean_box(0);
v___x_2430_ = lean_array_get_size(v_assignments_2417_);
v___x_2431_ = lean_nat_dec_lt(v_currFnIdx_2415_, v___x_2430_);
if (v___x_2431_ == 0)
{
lean_dec_ref(v_f_2411_);
v___y_2424_ = v_assignments_2417_;
goto v___jp_2423_;
}
else
{
lean_object* v_v_2432_; lean_object* v___x_2433_; lean_object* v_xs_x27_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v_v_2432_ = lean_array_fget(v_assignments_2417_, v_currFnIdx_2415_);
v___x_2433_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0);
v_xs_x27_2434_ = lean_array_fset(v_assignments_2417_, v_currFnIdx_2415_, v___x_2433_);
v___x_2435_ = lean_apply_1(v_f_2411_, v_v_2432_);
v___x_2436_ = lean_array_fset(v_xs_x27_2434_, v_currFnIdx_2415_, v___x_2435_);
v___y_2424_ = v___x_2436_;
goto v___jp_2423_;
}
v___jp_2423_:
{
lean_object* v___x_2426_; 
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___y_2424_);
v___x_2426_ = v___x_2420_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___y_2424_);
lean_ctor_set(v_reuseFailAlloc_2429_, 1, v_funVals_2418_);
v___x_2426_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = lean_st_ref_put(v_a_2413_, v___x_2426_);
v___x_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2422_);
return v___x_2428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg___boxed(lean_object* v_f_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v_f_2438_, v_a_2439_, v_a_2440_);
lean_dec(v_a_2440_);
lean_dec_ref(v_a_2439_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(lean_object* v_f_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v_f_2443_, v_a_2444_, v_a_2445_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___boxed(lean_object* v_f_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(v_f_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_);
lean_dec(v_a_2458_);
lean_dec_ref(v_a_2457_);
lean_dec(v_a_2456_);
lean_dec_ref(v_a_2455_);
lean_dec(v_a_2454_);
lean_dec_ref(v_a_2453_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(lean_object* v_a_2461_, lean_object* v_fallback_2462_, lean_object* v_x_2463_){
_start:
{
if (lean_obj_tag(v_x_2463_) == 0)
{
lean_inc(v_fallback_2462_);
return v_fallback_2462_;
}
else
{
lean_object* v_key_2464_; lean_object* v_value_2465_; lean_object* v_tail_2466_; uint8_t v___x_2467_; 
v_key_2464_ = lean_ctor_get(v_x_2463_, 0);
v_value_2465_ = lean_ctor_get(v_x_2463_, 1);
v_tail_2466_ = lean_ctor_get(v_x_2463_, 2);
v___x_2467_ = l_Lean_instBEqFVarId_beq(v_key_2464_, v_a_2461_);
if (v___x_2467_ == 0)
{
v_x_2463_ = v_tail_2466_;
goto _start;
}
else
{
lean_inc(v_value_2465_);
return v_value_2465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg___boxed(lean_object* v_a_2469_, lean_object* v_fallback_2470_, lean_object* v_x_2471_){
_start:
{
lean_object* v_res_2472_; 
v_res_2472_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2469_, v_fallback_2470_, v_x_2471_);
lean_dec(v_x_2471_);
lean_dec(v_fallback_2470_);
lean_dec(v_a_2469_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(lean_object* v_m_2473_, lean_object* v_a_2474_, lean_object* v_fallback_2475_){
_start:
{
lean_object* v_buckets_2476_; lean_object* v___x_2477_; uint64_t v___x_2478_; uint64_t v___x_2479_; uint64_t v___x_2480_; uint64_t v_fold_2481_; uint64_t v___x_2482_; uint64_t v___x_2483_; uint64_t v___x_2484_; size_t v___x_2485_; size_t v___x_2486_; size_t v___x_2487_; size_t v___x_2488_; size_t v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v_buckets_2476_ = lean_ctor_get(v_m_2473_, 1);
v___x_2477_ = lean_array_get_size(v_buckets_2476_);
v___x_2478_ = l_Lean_instHashableFVarId_hash(v_a_2474_);
v___x_2479_ = 32ULL;
v___x_2480_ = lean_uint64_shift_right(v___x_2478_, v___x_2479_);
v_fold_2481_ = lean_uint64_xor(v___x_2478_, v___x_2480_);
v___x_2482_ = 16ULL;
v___x_2483_ = lean_uint64_shift_right(v_fold_2481_, v___x_2482_);
v___x_2484_ = lean_uint64_xor(v_fold_2481_, v___x_2483_);
v___x_2485_ = lean_uint64_to_usize(v___x_2484_);
v___x_2486_ = lean_usize_of_nat(v___x_2477_);
v___x_2487_ = ((size_t)1ULL);
v___x_2488_ = lean_usize_sub(v___x_2486_, v___x_2487_);
v___x_2489_ = lean_usize_land(v___x_2485_, v___x_2488_);
v___x_2490_ = lean_array_uget_borrowed(v_buckets_2476_, v___x_2489_);
v___x_2491_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2474_, v_fallback_2475_, v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg___boxed(lean_object* v_m_2492_, lean_object* v_a_2493_, lean_object* v_fallback_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_m_2492_, v_a_2493_, v_fallback_2494_);
lean_dec(v_fallback_2494_);
lean_dec(v_a_2493_);
lean_dec_ref(v_m_2492_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(lean_object* v_var_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v___x_2500_; lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2510_; 
v___x_2500_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2497_, v_a_2498_);
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2503_ = v___x_2500_;
v_isShared_2504_ = v_isSharedCheck_2510_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2510_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2508_; 
v___x_2505_ = lean_box(0);
v___x_2506_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_a_2501_, v_var_2496_, v___x_2505_);
lean_dec(v_a_2501_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v___x_2506_);
v___x_2508_ = v___x_2503_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v___x_2506_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg___boxed(lean_object* v_var_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2511_, v_a_2512_, v_a_2513_);
lean_dec(v_a_2513_);
lean_dec_ref(v_a_2512_);
lean_dec(v_var_2511_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(lean_object* v_var_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2516_, v_a_2517_, v_a_2518_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___boxed(lean_object* v_var_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(v_var_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_);
lean_dec(v_a_2531_);
lean_dec_ref(v_a_2530_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
lean_dec(v_a_2527_);
lean_dec_ref(v_a_2526_);
lean_dec(v_var_2525_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(lean_object* v_00_u03b2_2534_, lean_object* v_m_2535_, lean_object* v_a_2536_, lean_object* v_fallback_2537_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_m_2535_, v_a_2536_, v_fallback_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___boxed(lean_object* v_00_u03b2_2539_, lean_object* v_m_2540_, lean_object* v_a_2541_, lean_object* v_fallback_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(v_00_u03b2_2539_, v_m_2540_, v_a_2541_, v_fallback_2542_);
lean_dec(v_fallback_2542_);
lean_dec(v_a_2541_);
lean_dec_ref(v_m_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(lean_object* v_00_u03b2_2544_, lean_object* v_a_2545_, lean_object* v_fallback_2546_, lean_object* v_x_2547_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2545_, v_fallback_2546_, v_x_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2549_, lean_object* v_a_2550_, lean_object* v_fallback_2551_, lean_object* v_x_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(v_00_u03b2_2549_, v_a_2550_, v_fallback_2551_, v_x_2552_);
lean_dec(v_x_2552_);
lean_dec(v_fallback_2551_);
lean_dec(v_a_2550_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(lean_object* v_arg_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_){
_start:
{
if (lean_obj_tag(v_arg_2554_) == 1)
{
lean_object* v_fvarId_2558_; lean_object* v___x_2559_; 
v_fvarId_2558_ = lean_ctor_get(v_arg_2554_, 0);
v___x_2559_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2558_, v_a_2555_, v_a_2556_);
return v___x_2559_;
}
else
{
lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2560_ = lean_box(1);
v___x_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2560_);
return v___x_2561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg___boxed(lean_object* v_arg_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_arg_2562_, v_a_2563_, v_a_2564_);
lean_dec(v_a_2564_);
lean_dec_ref(v_a_2563_);
lean_dec(v_arg_2562_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(lean_object* v_arg_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_arg_2567_, v_a_2568_, v_a_2569_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___boxed(lean_object* v_arg_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(v_arg_2576_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_, v_a_2582_);
lean_dec(v_a_2582_);
lean_dec_ref(v_a_2581_);
lean_dec(v_a_2580_);
lean_dec_ref(v_a_2579_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
lean_dec(v_arg_2576_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(lean_object* v_a_2585_, lean_object* v_b_2586_, lean_object* v_x_2587_){
_start:
{
if (lean_obj_tag(v_x_2587_) == 0)
{
lean_dec(v_b_2586_);
lean_dec(v_a_2585_);
return v_x_2587_;
}
else
{
lean_object* v_key_2588_; lean_object* v_value_2589_; lean_object* v_tail_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2602_; 
v_key_2588_ = lean_ctor_get(v_x_2587_, 0);
v_value_2589_ = lean_ctor_get(v_x_2587_, 1);
v_tail_2590_ = lean_ctor_get(v_x_2587_, 2);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_x_2587_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2592_ = v_x_2587_;
v_isShared_2593_ = v_isSharedCheck_2602_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_tail_2590_);
lean_inc(v_value_2589_);
lean_inc(v_key_2588_);
lean_dec(v_x_2587_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2602_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
uint8_t v___x_2594_; 
v___x_2594_ = l_Lean_instBEqFVarId_beq(v_key_2588_, v_a_2585_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; lean_object* v___x_2597_; 
v___x_2595_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2585_, v_b_2586_, v_tail_2590_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 2, v___x_2595_);
v___x_2597_ = v___x_2592_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_key_2588_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_value_2589_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
else
{
lean_object* v___x_2600_; 
lean_dec(v_value_2589_);
lean_dec(v_key_2588_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 1, v_b_2586_);
lean_ctor_set(v___x_2592_, 0, v_a_2585_);
v___x_2600_ = v___x_2592_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2585_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_b_2586_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v_tail_2590_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_2603_, lean_object* v_x_2604_){
_start:
{
if (lean_obj_tag(v_x_2604_) == 0)
{
return v_x_2603_;
}
else
{
lean_object* v_key_2605_; lean_object* v_value_2606_; lean_object* v_tail_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2630_; 
v_key_2605_ = lean_ctor_get(v_x_2604_, 0);
v_value_2606_ = lean_ctor_get(v_x_2604_, 1);
v_tail_2607_ = lean_ctor_get(v_x_2604_, 2);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_x_2604_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2609_ = v_x_2604_;
v_isShared_2610_ = v_isSharedCheck_2630_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_tail_2607_);
lean_inc(v_value_2606_);
lean_inc(v_key_2605_);
lean_dec(v_x_2604_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2630_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2611_; uint64_t v___x_2612_; uint64_t v___x_2613_; uint64_t v___x_2614_; uint64_t v_fold_2615_; uint64_t v___x_2616_; uint64_t v___x_2617_; uint64_t v___x_2618_; size_t v___x_2619_; size_t v___x_2620_; size_t v___x_2621_; size_t v___x_2622_; size_t v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2626_; 
v___x_2611_ = lean_array_get_size(v_x_2603_);
v___x_2612_ = l_Lean_instHashableFVarId_hash(v_key_2605_);
v___x_2613_ = 32ULL;
v___x_2614_ = lean_uint64_shift_right(v___x_2612_, v___x_2613_);
v_fold_2615_ = lean_uint64_xor(v___x_2612_, v___x_2614_);
v___x_2616_ = 16ULL;
v___x_2617_ = lean_uint64_shift_right(v_fold_2615_, v___x_2616_);
v___x_2618_ = lean_uint64_xor(v_fold_2615_, v___x_2617_);
v___x_2619_ = lean_uint64_to_usize(v___x_2618_);
v___x_2620_ = lean_usize_of_nat(v___x_2611_);
v___x_2621_ = ((size_t)1ULL);
v___x_2622_ = lean_usize_sub(v___x_2620_, v___x_2621_);
v___x_2623_ = lean_usize_land(v___x_2619_, v___x_2622_);
v___x_2624_ = lean_array_uget_borrowed(v_x_2603_, v___x_2623_);
lean_inc(v___x_2624_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 2, v___x_2624_);
v___x_2626_ = v___x_2609_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_key_2605_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v_value_2606_);
lean_ctor_set(v_reuseFailAlloc_2629_, 2, v___x_2624_);
v___x_2626_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2627_; 
v___x_2627_ = lean_array_uset(v_x_2603_, v___x_2623_, v___x_2626_);
v_x_2603_ = v___x_2627_;
v_x_2604_ = v_tail_2607_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2631_, lean_object* v_source_2632_, lean_object* v_target_2633_){
_start:
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = lean_array_get_size(v_source_2632_);
v___x_2635_ = lean_nat_dec_lt(v_i_2631_, v___x_2634_);
if (v___x_2635_ == 0)
{
lean_dec_ref(v_source_2632_);
lean_dec(v_i_2631_);
return v_target_2633_;
}
else
{
lean_object* v_es_2636_; lean_object* v___x_2637_; lean_object* v_source_2638_; lean_object* v_target_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v_es_2636_ = lean_array_fget(v_source_2632_, v_i_2631_);
v___x_2637_ = lean_box(0);
v_source_2638_ = lean_array_fset(v_source_2632_, v_i_2631_, v___x_2637_);
v_target_2639_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(v_target_2633_, v_es_2636_);
v___x_2640_ = lean_unsigned_to_nat(1u);
v___x_2641_ = lean_nat_add(v_i_2631_, v___x_2640_);
lean_dec(v_i_2631_);
v_i_2631_ = v___x_2641_;
v_source_2632_ = v_source_2638_;
v_target_2633_ = v_target_2639_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(lean_object* v_data_2643_){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v_nbuckets_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2644_ = lean_array_get_size(v_data_2643_);
v___x_2645_ = lean_unsigned_to_nat(2u);
v_nbuckets_2646_ = lean_nat_mul(v___x_2644_, v___x_2645_);
v___x_2647_ = lean_unsigned_to_nat(0u);
v___x_2648_ = lean_box(0);
v___x_2649_ = lean_mk_array(v_nbuckets_2646_, v___x_2648_);
v___x_2650_ = lean_array_propagate_mark(v_data_2643_, v___x_2649_);
v___x_2651_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(v___x_2647_, v_data_2643_, v___x_2650_);
return v___x_2651_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(lean_object* v_a_2652_, lean_object* v_x_2653_){
_start:
{
if (lean_obj_tag(v_x_2653_) == 0)
{
uint8_t v___x_2654_; 
v___x_2654_ = 0;
return v___x_2654_;
}
else
{
lean_object* v_key_2655_; lean_object* v_tail_2656_; uint8_t v___x_2657_; 
v_key_2655_ = lean_ctor_get(v_x_2653_, 0);
v_tail_2656_ = lean_ctor_get(v_x_2653_, 2);
v___x_2657_ = l_Lean_instBEqFVarId_beq(v_key_2655_, v_a_2652_);
if (v___x_2657_ == 0)
{
v_x_2653_ = v_tail_2656_;
goto _start;
}
else
{
return v___x_2657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg___boxed(lean_object* v_a_2659_, lean_object* v_x_2660_){
_start:
{
uint8_t v_res_2661_; lean_object* v_r_2662_; 
v_res_2661_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2659_, v_x_2660_);
lean_dec(v_x_2660_);
lean_dec(v_a_2659_);
v_r_2662_ = lean_box(v_res_2661_);
return v_r_2662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(lean_object* v_m_2663_, lean_object* v_a_2664_, lean_object* v_b_2665_){
_start:
{
lean_object* v_size_2666_; lean_object* v_buckets_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2710_; 
v_size_2666_ = lean_ctor_get(v_m_2663_, 0);
v_buckets_2667_ = lean_ctor_get(v_m_2663_, 1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_m_2663_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2669_ = v_m_2663_;
v_isShared_2670_ = v_isSharedCheck_2710_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_buckets_2667_);
lean_inc(v_size_2666_);
lean_dec(v_m_2663_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2710_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2671_; uint64_t v___x_2672_; uint64_t v___x_2673_; uint64_t v___x_2674_; uint64_t v_fold_2675_; uint64_t v___x_2676_; uint64_t v___x_2677_; uint64_t v___x_2678_; size_t v___x_2679_; size_t v___x_2680_; size_t v___x_2681_; size_t v___x_2682_; size_t v___x_2683_; lean_object* v_bkt_2684_; uint8_t v___x_2685_; 
v___x_2671_ = lean_array_get_size(v_buckets_2667_);
v___x_2672_ = l_Lean_instHashableFVarId_hash(v_a_2664_);
v___x_2673_ = 32ULL;
v___x_2674_ = lean_uint64_shift_right(v___x_2672_, v___x_2673_);
v_fold_2675_ = lean_uint64_xor(v___x_2672_, v___x_2674_);
v___x_2676_ = 16ULL;
v___x_2677_ = lean_uint64_shift_right(v_fold_2675_, v___x_2676_);
v___x_2678_ = lean_uint64_xor(v_fold_2675_, v___x_2677_);
v___x_2679_ = lean_uint64_to_usize(v___x_2678_);
v___x_2680_ = lean_usize_of_nat(v___x_2671_);
v___x_2681_ = ((size_t)1ULL);
v___x_2682_ = lean_usize_sub(v___x_2680_, v___x_2681_);
v___x_2683_ = lean_usize_land(v___x_2679_, v___x_2682_);
v_bkt_2684_ = lean_array_uget_borrowed(v_buckets_2667_, v___x_2683_);
v___x_2685_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2664_, v_bkt_2684_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2686_; lean_object* v_size_x27_2687_; lean_object* v___x_2688_; lean_object* v_buckets_x27_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; uint8_t v___x_2695_; 
v___x_2686_ = lean_unsigned_to_nat(1u);
v_size_x27_2687_ = lean_nat_add(v_size_2666_, v___x_2686_);
lean_dec(v_size_2666_);
lean_inc(v_bkt_2684_);
v___x_2688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2688_, 0, v_a_2664_);
lean_ctor_set(v___x_2688_, 1, v_b_2665_);
lean_ctor_set(v___x_2688_, 2, v_bkt_2684_);
v_buckets_x27_2689_ = lean_array_uset(v_buckets_2667_, v___x_2683_, v___x_2688_);
v___x_2690_ = lean_unsigned_to_nat(4u);
v___x_2691_ = lean_nat_mul(v_size_x27_2687_, v___x_2690_);
v___x_2692_ = lean_unsigned_to_nat(3u);
v___x_2693_ = lean_nat_div(v___x_2691_, v___x_2692_);
lean_dec(v___x_2691_);
v___x_2694_ = lean_array_get_size(v_buckets_x27_2689_);
v___x_2695_ = lean_nat_dec_le(v___x_2693_, v___x_2694_);
lean_dec(v___x_2693_);
if (v___x_2695_ == 0)
{
lean_object* v_val_2696_; lean_object* v___x_2698_; 
v_val_2696_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(v_buckets_x27_2689_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 1, v_val_2696_);
lean_ctor_set(v___x_2669_, 0, v_size_x27_2687_);
v___x_2698_ = v___x_2669_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_size_x27_2687_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v_val_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
else
{
lean_object* v___x_2701_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 1, v_buckets_x27_2689_);
lean_ctor_set(v___x_2669_, 0, v_size_x27_2687_);
v___x_2701_ = v___x_2669_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_size_x27_2687_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_buckets_x27_2689_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
else
{
lean_object* v___x_2703_; lean_object* v_buckets_x27_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
lean_inc(v_bkt_2684_);
v___x_2703_ = lean_box(0);
v_buckets_x27_2704_ = lean_array_uset(v_buckets_2667_, v___x_2683_, v___x_2703_);
v___x_2705_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2664_, v_b_2665_, v_bkt_2684_);
v___x_2706_ = lean_array_uset(v_buckets_x27_2704_, v___x_2683_, v___x_2705_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 1, v___x_2706_);
v___x_2708_ = v___x_2669_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_size_2666_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0(lean_object* v_var_2711_, lean_object* v___x_2712_, lean_object* v_x_2713_){
_start:
{
lean_object* v___x_2714_; 
v___x_2714_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2713_, v_var_2711_, v___x_2712_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(lean_object* v_var_2715_, lean_object* v_newVal_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_){
_start:
{
lean_object* v___x_2721_; lean_object* v_env_2722_; lean_object* v___x_2723_; 
v___x_2721_ = lean_st_ref_get(v_a_2719_);
v_env_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc_ref(v_env_2722_);
lean_dec(v___x_2721_);
v___x_2723_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2715_, v_a_2717_, v_a_2718_);
if (lean_obj_tag(v___x_2723_) == 0)
{
lean_object* v_a_2724_; lean_object* v___x_2725_; lean_object* v___f_2726_; lean_object* v___x_2727_; 
v_a_2724_ = lean_ctor_get(v___x_2723_, 0);
lean_inc(v_a_2724_);
lean_dec_ref_known(v___x_2723_, 1);
v___x_2725_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_2722_, v_a_2724_, v_newVal_2716_);
v___f_2726_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2726_, 0, v_var_2715_);
lean_closure_set(v___f_2726_, 1, v___x_2725_);
v___x_2727_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2726_, v_a_2717_, v_a_2718_);
return v___x_2727_;
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec_ref(v_env_2722_);
lean_dec(v_newVal_2716_);
lean_dec(v_var_2715_);
v_a_2728_ = lean_ctor_get(v___x_2723_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2723_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2723_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___boxed(lean_object* v_var_2736_, lean_object* v_newVal_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_var_2736_, v_newVal_2737_, v_a_2738_, v_a_2739_, v_a_2740_);
lean_dec(v_a_2740_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(lean_object* v_var_2743_, lean_object* v_newVal_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_var_2743_, v_newVal_2744_, v_a_2745_, v_a_2746_, v_a_2750_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___boxed(lean_object* v_var_2753_, lean_object* v_newVal_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(v_var_2753_, v_newVal_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
lean_dec(v_a_2756_);
lean_dec_ref(v_a_2755_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0(lean_object* v_00_u03b2_2763_, lean_object* v_m_2764_, lean_object* v_a_2765_, lean_object* v_b_2766_){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_m_2764_, v_a_2765_, v_b_2766_);
return v___x_2767_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(lean_object* v_00_u03b2_2768_, lean_object* v_a_2769_, lean_object* v_x_2770_){
_start:
{
uint8_t v___x_2771_; 
v___x_2771_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2769_, v_x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2772_, lean_object* v_a_2773_, lean_object* v_x_2774_){
_start:
{
uint8_t v_res_2775_; lean_object* v_r_2776_; 
v_res_2775_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(v_00_u03b2_2772_, v_a_2773_, v_x_2774_);
lean_dec(v_x_2774_);
lean_dec(v_a_2773_);
v_r_2776_ = lean_box(v_res_2775_);
return v_r_2776_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1(lean_object* v_00_u03b2_2777_, lean_object* v_data_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(v_data_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2(lean_object* v_00_u03b2_2780_, lean_object* v_a_2781_, lean_object* v_b_2782_, lean_object* v_x_2783_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2781_, v_b_2782_, v_x_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2785_, lean_object* v_i_2786_, lean_object* v_source_2787_, lean_object* v_target_2788_){
_start:
{
lean_object* v___x_2789_; 
v___x_2789_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(v_i_2786_, v_source_2787_, v_target_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2790_, lean_object* v_x_2791_, lean_object* v_x_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2791_, v_x_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0(lean_object* v_var_2794_, lean_object* v_x_2795_){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; 
v___x_2796_ = lean_box(0);
v___x_2797_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2795_, v_var_2794_, v___x_2796_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(lean_object* v_var_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_){
_start:
{
lean_object* v___f_2802_; lean_object* v___x_2803_; 
v___f_2802_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2802_, 0, v_var_2798_);
v___x_2803_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2802_, v_a_2799_, v_a_2800_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___boxed(lean_object* v_var_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_var_2804_, v_a_2805_, v_a_2806_);
lean_dec(v_a_2806_);
lean_dec_ref(v_a_2805_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(lean_object* v_var_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v___x_2817_; 
v___x_2817_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_var_2809_, v_a_2810_, v_a_2811_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___boxed(lean_object* v_var_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(v_var_2818_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
lean_dec(v_a_2820_);
lean_dec_ref(v_a_2819_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(lean_object* v_v_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_){
_start:
{
lean_object* v___x_2832_; lean_object* v_env_2833_; lean_object* v_currFnIdx_2834_; lean_object* v___x_2835_; lean_object* v_fst_2837_; lean_object* v_snd_2838_; lean_object* v_assignments_2841_; lean_object* v_funVals_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v___x_2832_ = lean_st_ref_get(v_a_2830_);
v_env_2833_ = lean_ctor_get(v___x_2832_, 0);
lean_inc_ref(v_env_2833_);
lean_dec(v___x_2832_);
v_currFnIdx_2834_ = lean_ctor_get(v_a_2828_, 1);
v___x_2835_ = lean_st_ref_take(v_a_2829_);
v_assignments_2841_ = lean_ctor_get(v___x_2835_, 0);
lean_inc_ref(v_assignments_2841_);
v_funVals_2842_ = lean_ctor_get(v___x_2835_, 1);
lean_inc_ref(v_funVals_2842_);
v___x_2843_ = lean_box(0);
v___x_2844_ = lean_array_get_size(v_funVals_2842_);
v___x_2845_ = lean_nat_dec_lt(v_currFnIdx_2834_, v___x_2844_);
if (v___x_2845_ == 0)
{
lean_dec_ref(v_funVals_2842_);
lean_dec_ref(v_assignments_2841_);
lean_dec_ref(v_env_2833_);
lean_dec(v_v_2827_);
v_fst_2837_ = v___x_2843_;
v_snd_2838_ = v___x_2835_;
goto v___jp_2836_;
}
else
{
lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2857_; 
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2857_ == 0)
{
lean_object* v_unused_2858_; lean_object* v_unused_2859_; 
v_unused_2858_ = lean_ctor_get(v___x_2835_, 1);
lean_dec(v_unused_2858_);
v_unused_2859_ = lean_ctor_get(v___x_2835_, 0);
lean_dec(v_unused_2859_);
v___x_2847_ = v___x_2835_;
v_isShared_2848_ = v_isSharedCheck_2857_;
goto v_resetjp_2846_;
}
else
{
lean_dec(v___x_2835_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2857_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v_v_2849_; lean_object* v___x_2850_; lean_object* v_xs_x27_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2855_; 
v_v_2849_ = lean_array_fget(v_funVals_2842_, v_currFnIdx_2834_);
v___x_2850_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0);
v_xs_x27_2851_ = lean_array_fset(v_funVals_2842_, v_currFnIdx_2834_, v___x_2850_);
v___x_2852_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_2833_, v_v_2827_, v_v_2849_);
v___x_2853_ = lean_array_fset(v_xs_x27_2851_, v_currFnIdx_2834_, v___x_2852_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 1, v___x_2853_);
v___x_2855_ = v___x_2847_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_assignments_2841_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v___x_2853_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
v_fst_2837_ = v___x_2843_;
v_snd_2838_ = v___x_2855_;
goto v___jp_2836_;
}
}
}
v___jp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___x_2839_ = lean_st_ref_put(v_a_2829_, v_snd_2838_);
v___x_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2840_, 0, v_fst_2837_);
return v___x_2840_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg___boxed(lean_object* v_v_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_v_2860_, v_a_2861_, v_a_2862_, v_a_2863_);
lean_dec(v_a_2863_);
lean_dec(v_a_2862_);
lean_dec_ref(v_a_2861_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(lean_object* v_v_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_v_2866_, v_a_2867_, v_a_2868_, v_a_2872_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___boxed(lean_object* v_v_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(v_v_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_, v_a_2881_);
lean_dec(v_a_2881_);
lean_dec_ref(v_a_2880_);
lean_dec(v_a_2879_);
lean_dec_ref(v_a_2878_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(lean_object* v_a_2884_, uint8_t v_b_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v_array_2890_; lean_object* v_start_2891_; lean_object* v_stop_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2929_; 
v_array_2890_ = lean_ctor_get(v_a_2884_, 0);
v_start_2891_ = lean_ctor_get(v_a_2884_, 1);
v_stop_2892_ = lean_ctor_get(v_a_2884_, 2);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_a_2884_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2894_ = v_a_2884_;
v_isShared_2895_ = v_isSharedCheck_2929_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_stop_2892_);
lean_inc(v_start_2891_);
lean_inc(v_array_2890_);
lean_dec(v_a_2884_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2929_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
uint8_t v___x_2896_; 
v___x_2896_ = lean_nat_dec_lt(v_start_2891_, v_stop_2892_);
if (v___x_2896_ == 0)
{
lean_object* v___x_2897_; lean_object* v___x_2898_; 
lean_del_object(v___x_2894_);
lean_dec(v_stop_2892_);
lean_dec(v_start_2891_);
lean_dec_ref(v_array_2890_);
v___x_2897_ = lean_box(v_b_2885_);
v___x_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
return v___x_2898_;
}
else
{
lean_object* v___x_2899_; lean_object* v_fvarId_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2899_ = lean_array_fget_borrowed(v_array_2890_, v_start_2891_);
v_fvarId_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc(v_fvarId_2900_);
v___x_2901_ = lean_unsigned_to_nat(1u);
v___x_2902_ = lean_nat_add(v_start_2891_, v___x_2901_);
lean_dec(v_start_2891_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 1, v___x_2902_);
v___x_2904_ = v___x_2894_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_array_2890_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_2928_, 2, v_stop_2892_);
v___x_2904_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2900_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2905_, 1);
v___x_2907_ = lean_box(0);
v___x_2908_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_2906_, v___x_2907_);
lean_dec(v_a_2906_);
v___x_2909_ = lean_box(1);
v___x_2910_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_2900_, v___x_2909_, v___y_2886_, v___y_2887_, v___y_2888_);
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_dec_ref_known(v___x_2910_, 1);
v_a_2884_ = v___x_2904_;
v_b_2885_ = v___x_2908_;
goto _start;
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref(v___x_2904_);
v_a_2912_ = lean_ctor_get(v___x_2910_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2910_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2910_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec_ref(v___x_2904_);
lean_dec(v_fvarId_2900_);
v_a_2920_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2905_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2905_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg___boxed(lean_object* v_a_2930_, lean_object* v_b_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
uint8_t v_b_boxed_2936_; lean_object* v_res_2937_; 
v_b_boxed_2936_ = lean_unbox(v_b_2931_);
v_res_2937_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v_a_2930_, v_b_boxed_2936_, v___y_2932_, v___y_2933_, v___y_2934_);
lean_dec(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
return v_res_2937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0(lean_object* v_fvarId_2938_, lean_object* v___x_2939_, lean_object* v_x_2940_){
_start:
{
lean_object* v___x_2941_; 
v___x_2941_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2940_, v_fvarId_2938_, v___x_2939_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(lean_object* v___x_2942_, lean_object* v_as_2943_, size_t v_sz_2944_, size_t v_i_2945_, lean_object* v_b_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_a_2951_; uint8_t v___x_2955_; 
v___x_2955_ = lean_usize_dec_lt(v_i_2945_, v_sz_2944_);
if (v___x_2955_ == 0)
{
lean_object* v___x_2956_; 
lean_dec_ref(v___x_2942_);
v___x_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_b_2946_);
return v___x_2956_;
}
else
{
lean_object* v_snd_2957_; lean_object* v_fst_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_3024_; 
v_snd_2957_ = lean_ctor_get(v_b_2946_, 1);
v_fst_2958_ = lean_ctor_get(v_b_2946_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_b_2946_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_2960_ = v_b_2946_;
v_isShared_2961_ = v_isSharedCheck_3024_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_snd_2957_);
lean_inc(v_fst_2958_);
lean_dec(v_b_2946_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_3024_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v_array_2962_; lean_object* v_start_2963_; lean_object* v_stop_2964_; uint8_t v___x_2965_; 
v_array_2962_ = lean_ctor_get(v_snd_2957_, 0);
v_start_2963_ = lean_ctor_get(v_snd_2957_, 1);
v_stop_2964_ = lean_ctor_get(v_snd_2957_, 2);
v___x_2965_ = lean_nat_dec_lt(v_start_2963_, v_stop_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2967_; 
lean_dec_ref(v___x_2942_);
if (v_isShared_2961_ == 0)
{
v___x_2967_ = v___x_2960_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_fst_2958_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_snd_2957_);
v___x_2967_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; 
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
return v___x_2968_;
}
}
else
{
lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_3020_; 
lean_inc(v_stop_2964_);
lean_inc(v_start_2963_);
lean_inc_ref(v_array_2962_);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_snd_2957_);
if (v_isSharedCheck_3020_ == 0)
{
lean_object* v_unused_3021_; lean_object* v_unused_3022_; lean_object* v_unused_3023_; 
v_unused_3021_ = lean_ctor_get(v_snd_2957_, 2);
lean_dec(v_unused_3021_);
v_unused_3022_ = lean_ctor_get(v_snd_2957_, 1);
lean_dec(v_unused_3022_);
v_unused_3023_ = lean_ctor_get(v_snd_2957_, 0);
lean_dec(v_unused_3023_);
v___x_2971_ = v_snd_2957_;
v_isShared_2972_ = v_isSharedCheck_3020_;
goto v_resetjp_2970_;
}
else
{
lean_dec(v_snd_2957_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_3020_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v_a_2973_; lean_object* v_fvarId_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2979_; 
v_a_2973_ = lean_array_uget_borrowed(v_as_2943_, v_i_2945_);
v_fvarId_2974_ = lean_ctor_get(v_a_2973_, 0);
v___x_2975_ = lean_array_fget(v_array_2962_, v_start_2963_);
v___x_2976_ = lean_unsigned_to_nat(1u);
v___x_2977_ = lean_nat_add(v_start_2963_, v___x_2976_);
lean_dec(v_start_2963_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 1, v___x_2977_);
v___x_2979_ = v___x_2971_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_array_2962_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v___x_2977_);
lean_ctor_set(v_reuseFailAlloc_3019_, 2, v_stop_2964_);
v___x_2979_ = v_reuseFailAlloc_3019_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
lean_object* v___x_2980_; 
v___x_2980_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2974_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2982_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2980_, 1);
v___x_2982_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v___x_2975_, v___y_2947_, v___y_2948_);
lean_dec(v___x_2975_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; uint8_t v___x_2985_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref_known(v___x_2982_, 1);
lean_inc(v_a_2981_);
lean_inc_ref(v___x_2942_);
v___x_2984_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v___x_2942_, v_a_2981_, v_a_2983_);
v___x_2985_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_2984_, v_a_2981_);
lean_dec(v_a_2981_);
if (v___x_2985_ == 0)
{
lean_object* v___f_2986_; lean_object* v___x_2987_; 
lean_dec(v_fst_2958_);
lean_inc(v_fvarId_2974_);
v___f_2986_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2986_, 0, v_fvarId_2974_);
lean_closure_set(v___f_2986_, 1, v___x_2984_);
v___x_2987_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2986_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2988_; lean_object* v___x_2990_; 
lean_dec_ref_known(v___x_2987_, 1);
v___x_2988_ = lean_box(v___x_2965_);
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 1, v___x_2979_);
lean_ctor_set(v___x_2960_, 0, v___x_2988_);
v___x_2990_ = v___x_2960_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2988_);
lean_ctor_set(v_reuseFailAlloc_2991_, 1, v___x_2979_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
v_a_2951_ = v___x_2990_;
goto v___jp_2950_;
}
}
else
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_2999_; 
lean_dec_ref(v___x_2979_);
lean_del_object(v___x_2960_);
lean_dec_ref(v___x_2942_);
v_a_2992_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2994_ = v___x_2987_;
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2987_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2997_; 
if (v_isShared_2995_ == 0)
{
v___x_2997_ = v___x_2994_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_a_2992_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
}
else
{
lean_object* v___x_3001_; 
lean_dec(v___x_2984_);
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 1, v___x_2979_);
v___x_3001_ = v___x_2960_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_fst_2958_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v___x_2979_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
v_a_2951_ = v___x_3001_;
goto v___jp_2950_;
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_dec(v_a_2981_);
lean_dec_ref(v___x_2979_);
lean_del_object(v___x_2960_);
lean_dec(v_fst_2958_);
lean_dec_ref(v___x_2942_);
v_a_3003_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_2982_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2982_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
else
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3018_; 
lean_dec_ref(v___x_2979_);
lean_dec(v___x_2975_);
lean_del_object(v___x_2960_);
lean_dec(v_fst_2958_);
lean_dec_ref(v___x_2942_);
v_a_3011_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3013_ = v___x_2980_;
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_2980_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_a_3011_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
}
}
}
}
v___jp_2950_:
{
size_t v___x_2952_; size_t v___x_2953_; 
v___x_2952_ = ((size_t)1ULL);
v___x_2953_ = lean_usize_add(v_i_2945_, v___x_2952_);
v_i_2945_ = v___x_2953_;
v_b_2946_ = v_a_2951_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___boxed(lean_object* v___x_3025_, lean_object* v_as_3026_, lean_object* v_sz_3027_, lean_object* v_i_3028_, lean_object* v_b_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
size_t v_sz_boxed_3033_; size_t v_i_boxed_3034_; lean_object* v_res_3035_; 
v_sz_boxed_3033_ = lean_unbox_usize(v_sz_3027_);
lean_dec(v_sz_3027_);
v_i_boxed_3034_ = lean_unbox_usize(v_i_3028_);
lean_dec(v_i_3028_);
v_res_3035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v___x_3025_, v_as_3026_, v_sz_boxed_3033_, v_i_boxed_3034_, v_b_3029_, v___y_3030_, v___y_3031_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec_ref(v_as_3026_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(lean_object* v_params_3036_, lean_object* v_args_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
uint8_t v_ret_3045_; lean_object* v___x_3046_; lean_object* v_env_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; size_t v_sz_3053_; size_t v___x_3054_; lean_object* v___x_3055_; 
v_ret_3045_ = 0;
v___x_3046_ = lean_st_ref_get(v_a_3043_);
v_env_3047_ = lean_ctor_get(v___x_3046_, 0);
lean_inc_ref(v_env_3047_);
lean_dec(v___x_3046_);
v___x_3048_ = lean_unsigned_to_nat(0u);
v___x_3049_ = lean_array_get_size(v_args_3037_);
v___x_3050_ = l_Array_toSubarray___redArg(v_args_3037_, v___x_3048_, v___x_3049_);
v___x_3051_ = lean_box(v_ret_3045_);
v___x_3052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
lean_ctor_set(v___x_3052_, 1, v___x_3050_);
v_sz_3053_ = lean_array_size(v_params_3036_);
v___x_3054_ = ((size_t)0ULL);
v___x_3055_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v_env_3047_, v_params_3036_, v_sz_3053_, v___x_3054_, v___x_3052_, v_a_3038_, v_a_3039_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3073_; 
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3058_ = v___x_3055_;
v_isShared_3059_ = v_isSharedCheck_3073_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3055_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3073_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v_fst_3060_; lean_object* v_lower_3062_; lean_object* v_upper_3063_; lean_object* v___x_3067_; uint8_t v___x_3068_; 
v_fst_3060_ = lean_ctor_get(v_a_3056_, 0);
lean_inc(v_fst_3060_);
lean_dec(v_a_3056_);
v___x_3067_ = lean_array_get_size(v_params_3036_);
v___x_3068_ = lean_nat_dec_eq(v___x_3067_, v___x_3049_);
if (v___x_3068_ == 0)
{
uint8_t v___x_3069_; 
lean_del_object(v___x_3058_);
v___x_3069_ = lean_nat_dec_le(v___x_3049_, v___x_3048_);
if (v___x_3069_ == 0)
{
v_lower_3062_ = v___x_3049_;
v_upper_3063_ = v___x_3067_;
goto v___jp_3061_;
}
else
{
v_lower_3062_ = v___x_3048_;
v_upper_3063_ = v___x_3067_;
goto v___jp_3061_;
}
}
else
{
lean_object* v___x_3071_; 
lean_dec_ref(v_params_3036_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 0, v_fst_3060_);
v___x_3071_ = v___x_3058_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_fst_3060_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
v___jp_3061_:
{
lean_object* v___x_3064_; uint8_t v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = l_Array_toSubarray___redArg(v_params_3036_, v_lower_3062_, v_upper_3063_);
v___x_3065_ = lean_unbox(v_fst_3060_);
lean_dec(v_fst_3060_);
v___x_3066_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v___x_3064_, v___x_3065_, v_a_3038_, v_a_3039_, v_a_3043_);
return v___x_3066_;
}
}
}
else
{
lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
lean_dec_ref(v_params_3036_);
v_a_3074_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3076_ = v___x_3055_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3055_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment___boxed(lean_object* v_params_3082_, lean_object* v_args_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(v_params_3082_, v_args_3083_, v_a_3084_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_);
lean_dec(v_a_3089_);
lean_dec_ref(v_a_3088_);
lean_dec(v_a_3087_);
lean_dec_ref(v_a_3086_);
lean_dec(v_a_3085_);
lean_dec_ref(v_a_3084_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(lean_object* v___x_3092_, lean_object* v_as_3093_, size_t v_sz_3094_, size_t v_i_3095_, lean_object* v_b_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v___x_3092_, v_as_3093_, v_sz_3094_, v_i_3095_, v_b_3096_, v___y_3097_, v___y_3098_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___boxed(lean_object* v___x_3105_, lean_object* v_as_3106_, lean_object* v_sz_3107_, lean_object* v_i_3108_, lean_object* v_b_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
size_t v_sz_boxed_3117_; size_t v_i_boxed_3118_; lean_object* v_res_3119_; 
v_sz_boxed_3117_ = lean_unbox_usize(v_sz_3107_);
lean_dec(v_sz_3107_);
v_i_boxed_3118_ = lean_unbox_usize(v_i_3108_);
lean_dec(v_i_3108_);
v_res_3119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(v___x_3105_, v_as_3106_, v_sz_boxed_3117_, v_i_boxed_3118_, v_b_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
lean_dec_ref(v_as_3106_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(lean_object* v_inst_3120_, lean_object* v_R_3121_, lean_object* v_a_3122_, uint8_t v_b_3123_, lean_object* v_c_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_){
_start:
{
lean_object* v___x_3132_; 
v___x_3132_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v_a_3122_, v_b_3123_, v___y_3125_, v___y_3126_, v___y_3130_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___boxed(lean_object* v_inst_3133_, lean_object* v_R_3134_, lean_object* v_a_3135_, lean_object* v_b_3136_, lean_object* v_c_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
uint8_t v_b_boxed_3145_; lean_object* v_res_3146_; 
v_b_boxed_3145_ = lean_unbox(v_b_3136_);
v_res_3146_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(v_inst_3133_, v_R_3134_, v_a_3135_, v_b_boxed_3145_, v_c_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(lean_object* v_as_3147_, size_t v_sz_3148_, size_t v_i_3149_, uint8_t v_b_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_){
_start:
{
uint8_t v_a_3155_; uint8_t v___x_3159_; 
v___x_3159_ = lean_usize_dec_lt(v_i_3149_, v_sz_3148_);
if (v___x_3159_ == 0)
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = lean_box(v_b_3150_);
v___x_3161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
return v___x_3161_;
}
else
{
lean_object* v_a_3162_; lean_object* v_fvarId_3163_; lean_object* v___x_3164_; 
v_a_3162_ = lean_array_uget_borrowed(v_as_3147_, v_i_3149_);
v_fvarId_3163_ = lean_ctor_get(v_a_3162_, 0);
v___x_3164_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_3163_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3166_; uint8_t v___x_3167_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3164_, 1);
v___x_3166_ = lean_box(1);
v___x_3167_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_3166_, v_a_3165_);
lean_dec(v_a_3165_);
if (v___x_3167_ == 0)
{
lean_object* v___f_3168_; lean_object* v___x_3169_; 
lean_inc(v_fvarId_3163_);
v___f_3168_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3168_, 0, v_fvarId_3163_);
lean_closure_set(v___f_3168_, 1, v___x_3166_);
v___x_3169_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_3168_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_dec_ref_known(v___x_3169_, 1);
v_a_3155_ = v___x_3159_;
goto v___jp_3154_;
}
else
{
lean_object* v_a_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3177_; 
v_a_3170_ = lean_ctor_get(v___x_3169_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3172_ = v___x_3169_;
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_a_3170_);
lean_dec(v___x_3169_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3175_; 
if (v_isShared_3173_ == 0)
{
v___x_3175_ = v___x_3172_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v_a_3170_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
}
else
{
v_a_3155_ = v_b_3150_;
goto v___jp_3154_;
}
}
else
{
lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3185_; 
v_a_3178_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3180_ = v___x_3164_;
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3164_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3183_; 
if (v_isShared_3181_ == 0)
{
v___x_3183_ = v___x_3180_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_a_3178_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
}
v___jp_3154_:
{
size_t v___x_3156_; size_t v___x_3157_; 
v___x_3156_ = ((size_t)1ULL);
v___x_3157_ = lean_usize_add(v_i_3149_, v___x_3156_);
v_i_3149_ = v___x_3157_;
v_b_3150_ = v_a_3155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg___boxed(lean_object* v_as_3186_, lean_object* v_sz_3187_, lean_object* v_i_3188_, lean_object* v_b_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_){
_start:
{
size_t v_sz_boxed_3193_; size_t v_i_boxed_3194_; uint8_t v_b_boxed_3195_; lean_object* v_res_3196_; 
v_sz_boxed_3193_ = lean_unbox_usize(v_sz_3187_);
lean_dec(v_sz_3187_);
v_i_boxed_3194_ = lean_unbox_usize(v_i_3188_);
lean_dec(v_i_3188_);
v_b_boxed_3195_ = lean_unbox(v_b_3189_);
v_res_3196_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_as_3186_, v_sz_boxed_3193_, v_i_boxed_3194_, v_b_boxed_3195_, v___y_3190_, v___y_3191_);
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec_ref(v_as_3186_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(lean_object* v_params_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_){
_start:
{
uint8_t v_ret_3205_; size_t v_sz_3206_; size_t v___x_3207_; lean_object* v___x_3208_; 
v_ret_3205_ = 0;
v_sz_3206_ = lean_array_size(v_params_3197_);
v___x_3207_ = ((size_t)0ULL);
v___x_3208_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_params_3197_, v_sz_3206_, v___x_3207_, v_ret_3205_, v_a_3198_, v_a_3199_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop___boxed(lean_object* v_params_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(v_params_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_);
lean_dec(v_a_3215_);
lean_dec_ref(v_a_3214_);
lean_dec(v_a_3213_);
lean_dec_ref(v_a_3212_);
lean_dec(v_a_3211_);
lean_dec_ref(v_a_3210_);
lean_dec_ref(v_params_3209_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(lean_object* v_as_3218_, size_t v_sz_3219_, size_t v_i_3220_, uint8_t v_b_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v___x_3229_; 
v___x_3229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_as_3218_, v_sz_3219_, v_i_3220_, v_b_3221_, v___y_3222_, v___y_3223_);
return v___x_3229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___boxed(lean_object* v_as_3230_, lean_object* v_sz_3231_, lean_object* v_i_3232_, lean_object* v_b_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
size_t v_sz_boxed_3241_; size_t v_i_boxed_3242_; uint8_t v_b_boxed_3243_; lean_object* v_res_3244_; 
v_sz_boxed_3241_ = lean_unbox_usize(v_sz_3231_);
lean_dec(v_sz_3231_);
v_i_boxed_3242_ = lean_unbox_usize(v_i_3232_);
lean_dec(v_i_3232_);
v_b_boxed_3243_ = lean_unbox(v_b_3233_);
v_res_3244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(v_as_3230_, v_sz_boxed_3241_, v_i_boxed_3242_, v_b_boxed_3243_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec_ref(v_as_3230_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(lean_object* v_as_3245_, size_t v_i_3246_, size_t v_stop_3247_, lean_object* v_b_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
uint8_t v___x_3252_; 
v___x_3252_ = lean_usize_dec_eq(v_i_3246_, v_stop_3247_);
if (v___x_3252_ == 0)
{
lean_object* v___x_3253_; lean_object* v_fvarId_3254_; lean_object* v___x_3255_; 
v___x_3253_ = lean_array_uget_borrowed(v_as_3245_, v_i_3246_);
v_fvarId_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_fvarId_3254_);
v___x_3255_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_fvarId_3254_, v___y_3249_, v___y_3250_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; size_t v___x_3257_; size_t v___x_3258_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3257_ = ((size_t)1ULL);
v___x_3258_ = lean_usize_add(v_i_3246_, v___x_3257_);
v_i_3246_ = v___x_3258_;
v_b_3248_ = v_a_3256_;
goto _start;
}
else
{
return v___x_3255_;
}
}
else
{
lean_object* v___x_3260_; 
v___x_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3260_, 0, v_b_3248_);
return v___x_3260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg___boxed(lean_object* v_as_3261_, lean_object* v_i_3262_, lean_object* v_stop_3263_, lean_object* v_b_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
size_t v_i_boxed_3268_; size_t v_stop_boxed_3269_; lean_object* v_res_3270_; 
v_i_boxed_3268_ = lean_unbox_usize(v_i_3262_);
lean_dec(v_i_3262_);
v_stop_boxed_3269_ = lean_unbox_usize(v_stop_3263_);
lean_dec(v_stop_3263_);
v_res_3270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_as_3261_, v_i_boxed_3268_, v_stop_boxed_3269_, v_b_3264_, v___y_3265_, v___y_3266_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec_ref(v_as_3261_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(lean_object* v_x_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v___y_3280_; lean_object* v___y_3281_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; lean_object* v_decl_3290_; lean_object* v_k_3291_; lean_object* v___y_3292_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; 
switch(lean_obj_tag(v_x_3271_))
{
case 0:
{
lean_object* v_k_3312_; 
v_k_3312_ = lean_ctor_get(v_x_3271_, 1);
lean_inc_ref(v_k_3312_);
lean_dec_ref_known(v_x_3271_, 2);
v_x_3271_ = v_k_3312_;
goto _start;
}
case 3:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
lean_dec_ref_known(v_x_3271_, 2);
v___x_3314_ = lean_box(0);
v___x_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3314_);
return v___x_3315_;
}
case 4:
{
lean_object* v_cases_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3338_; 
v_cases_3316_ = lean_ctor_get(v_x_3271_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v_x_3271_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3318_ = v_x_3271_;
v_isShared_3319_ = v_isSharedCheck_3338_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_cases_3316_);
lean_dec(v_x_3271_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3338_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v_alts_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; uint8_t v___x_3324_; 
v_alts_3320_ = lean_ctor_get(v_cases_3316_, 3);
lean_inc_ref(v_alts_3320_);
lean_dec_ref(v_cases_3316_);
v___x_3321_ = lean_unsigned_to_nat(0u);
v___x_3322_ = lean_array_get_size(v_alts_3320_);
v___x_3323_ = lean_box(0);
v___x_3324_ = lean_nat_dec_lt(v___x_3321_, v___x_3322_);
if (v___x_3324_ == 0)
{
lean_object* v___x_3326_; 
lean_dec_ref(v_alts_3320_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set_tag(v___x_3318_, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3323_);
v___x_3326_ = v___x_3318_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v___x_3323_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
else
{
uint8_t v___x_3328_; 
v___x_3328_ = lean_nat_dec_le(v___x_3322_, v___x_3322_);
if (v___x_3328_ == 0)
{
if (v___x_3324_ == 0)
{
lean_object* v___x_3330_; 
lean_dec_ref(v_alts_3320_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set_tag(v___x_3318_, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3323_);
v___x_3330_ = v___x_3318_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v___x_3323_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
else
{
size_t v___x_3332_; size_t v___x_3333_; lean_object* v___x_3334_; 
lean_del_object(v___x_3318_);
v___x_3332_ = ((size_t)0ULL);
v___x_3333_ = lean_usize_of_nat(v___x_3322_);
v___x_3334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_alts_3320_, v___x_3332_, v___x_3333_, v___x_3323_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
lean_dec_ref(v_alts_3320_);
return v___x_3334_;
}
}
else
{
size_t v___x_3335_; size_t v___x_3336_; lean_object* v___x_3337_; 
lean_del_object(v___x_3318_);
v___x_3335_ = ((size_t)0ULL);
v___x_3336_ = lean_usize_of_nat(v___x_3322_);
v___x_3337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_alts_3320_, v___x_3335_, v___x_3336_, v___x_3323_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
lean_dec_ref(v_alts_3320_);
return v___x_3337_;
}
}
}
}
case 5:
{
lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3346_; 
v_isSharedCheck_3346_ = !lean_is_exclusive(v_x_3271_);
if (v_isSharedCheck_3346_ == 0)
{
lean_object* v_unused_3347_; 
v_unused_3347_ = lean_ctor_get(v_x_3271_, 0);
lean_dec(v_unused_3347_);
v___x_3340_ = v_x_3271_;
v_isShared_3341_ = v_isSharedCheck_3346_;
goto v_resetjp_3339_;
}
else
{
lean_dec(v_x_3271_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3346_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; lean_object* v___x_3344_; 
v___x_3342_ = lean_box(0);
if (v_isShared_3341_ == 0)
{
lean_ctor_set_tag(v___x_3340_, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3342_);
v___x_3344_ = v___x_3340_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v___x_3342_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
case 6:
{
lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3355_; 
v_isSharedCheck_3355_ = !lean_is_exclusive(v_x_3271_);
if (v_isSharedCheck_3355_ == 0)
{
lean_object* v_unused_3356_; 
v_unused_3356_ = lean_ctor_get(v_x_3271_, 0);
lean_dec(v_unused_3356_);
v___x_3349_ = v_x_3271_;
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
else
{
lean_dec(v_x_3271_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3353_; 
v___x_3351_ = lean_box(0);
if (v_isShared_3350_ == 0)
{
lean_ctor_set_tag(v___x_3349_, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3351_);
v___x_3353_ = v___x_3349_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
default: 
{
lean_object* v_decl_3357_; lean_object* v_k_3358_; 
v_decl_3357_ = lean_ctor_get(v_x_3271_, 0);
lean_inc_ref(v_decl_3357_);
v_k_3358_ = lean_ctor_get(v_x_3271_, 1);
lean_inc_ref(v_k_3358_);
lean_dec_ref(v_x_3271_);
v_decl_3290_ = v_decl_3357_;
v_k_3291_ = v_k_3358_;
v___y_3292_ = v_a_3272_;
v___y_3293_ = v_a_3273_;
v___y_3294_ = v_a_3274_;
v___y_3295_ = v_a_3275_;
v___y_3296_ = v_a_3276_;
v___y_3297_ = v_a_3277_;
goto v___jp_3289_;
}
}
v___jp_3279_:
{
if (lean_obj_tag(v___y_3287_) == 0)
{
lean_dec_ref_known(v___y_3287_, 1);
v_x_3271_ = v___y_3281_;
v_a_3272_ = v___y_3285_;
v_a_3273_ = v___y_3283_;
v_a_3274_ = v___y_3284_;
v_a_3275_ = v___y_3282_;
v_a_3276_ = v___y_3286_;
v_a_3277_ = v___y_3280_;
goto _start;
}
else
{
lean_dec_ref(v___y_3281_);
return v___y_3287_;
}
}
v___jp_3289_:
{
lean_object* v_params_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; 
v_params_3298_ = lean_ctor_get(v_decl_3290_, 2);
lean_inc_ref(v_params_3298_);
lean_dec_ref(v_decl_3290_);
v___x_3299_ = lean_unsigned_to_nat(0u);
v___x_3300_ = lean_array_get_size(v_params_3298_);
v___x_3301_ = lean_nat_dec_lt(v___x_3299_, v___x_3300_);
if (v___x_3301_ == 0)
{
lean_dec_ref(v_params_3298_);
v_x_3271_ = v_k_3291_;
v_a_3272_ = v___y_3292_;
v_a_3273_ = v___y_3293_;
v_a_3274_ = v___y_3294_;
v_a_3275_ = v___y_3295_;
v_a_3276_ = v___y_3296_;
v_a_3277_ = v___y_3297_;
goto _start;
}
else
{
lean_object* v___x_3303_; uint8_t v___x_3304_; 
v___x_3303_ = lean_box(0);
v___x_3304_ = lean_nat_dec_le(v___x_3300_, v___x_3300_);
if (v___x_3304_ == 0)
{
if (v___x_3301_ == 0)
{
lean_dec_ref(v_params_3298_);
v_x_3271_ = v_k_3291_;
v_a_3272_ = v___y_3292_;
v_a_3273_ = v___y_3293_;
v_a_3274_ = v___y_3294_;
v_a_3275_ = v___y_3295_;
v_a_3276_ = v___y_3296_;
v_a_3277_ = v___y_3297_;
goto _start;
}
else
{
size_t v___x_3306_; size_t v___x_3307_; lean_object* v___x_3308_; 
v___x_3306_ = ((size_t)0ULL);
v___x_3307_ = lean_usize_of_nat(v___x_3300_);
v___x_3308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_params_3298_, v___x_3306_, v___x_3307_, v___x_3303_, v___y_3292_, v___y_3293_);
lean_dec_ref(v_params_3298_);
v___y_3280_ = v___y_3297_;
v___y_3281_ = v_k_3291_;
v___y_3282_ = v___y_3295_;
v___y_3283_ = v___y_3293_;
v___y_3284_ = v___y_3294_;
v___y_3285_ = v___y_3292_;
v___y_3286_ = v___y_3296_;
v___y_3287_ = v___x_3308_;
goto v___jp_3279_;
}
}
else
{
size_t v___x_3309_; size_t v___x_3310_; lean_object* v___x_3311_; 
v___x_3309_ = ((size_t)0ULL);
v___x_3310_ = lean_usize_of_nat(v___x_3300_);
v___x_3311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_params_3298_, v___x_3309_, v___x_3310_, v___x_3303_, v___y_3292_, v___y_3293_);
lean_dec_ref(v_params_3298_);
v___y_3280_ = v___y_3297_;
v___y_3281_ = v_k_3291_;
v___y_3282_ = v___y_3295_;
v___y_3283_ = v___y_3293_;
v___y_3284_ = v___y_3294_;
v___y_3285_ = v___y_3292_;
v___y_3286_ = v___y_3296_;
v___y_3287_ = v___x_3311_;
goto v___jp_3279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(lean_object* v_as_3359_, size_t v_i_3360_, size_t v_stop_3361_, lean_object* v_b_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v___y_3371_; uint8_t v___x_3377_; 
v___x_3377_ = lean_usize_dec_eq(v_i_3360_, v_stop_3361_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; 
v___x_3378_ = lean_array_uget_borrowed(v_as_3359_, v_i_3360_);
switch(lean_obj_tag(v___x_3378_))
{
case 0:
{
lean_object* v_code_3379_; 
v_code_3379_ = lean_ctor_get(v___x_3378_, 2);
lean_inc_ref(v_code_3379_);
v___y_3371_ = v_code_3379_;
goto v___jp_3370_;
}
case 1:
{
lean_object* v_code_3380_; 
v_code_3380_ = lean_ctor_get(v___x_3378_, 1);
lean_inc_ref(v_code_3380_);
v___y_3371_ = v_code_3380_;
goto v___jp_3370_;
}
default: 
{
lean_object* v_code_3381_; 
v_code_3381_ = lean_ctor_get(v___x_3378_, 0);
lean_inc_ref(v_code_3381_);
v___y_3371_ = v_code_3381_;
goto v___jp_3370_;
}
}
}
else
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3382_, 0, v_b_3362_);
return v___x_3382_;
}
v___jp_3370_:
{
lean_object* v___x_3372_; 
v___x_3372_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v___y_3371_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; size_t v___x_3374_; size_t v___x_3375_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref_known(v___x_3372_, 1);
v___x_3374_ = ((size_t)1ULL);
v___x_3375_ = lean_usize_add(v_i_3360_, v___x_3374_);
v_i_3360_ = v___x_3375_;
v_b_3362_ = v_a_3373_;
goto _start;
}
else
{
return v___x_3372_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1___boxed(lean_object* v_as_3383_, lean_object* v_i_3384_, lean_object* v_stop_3385_, lean_object* v_b_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
size_t v_i_boxed_3394_; size_t v_stop_boxed_3395_; lean_object* v_res_3396_; 
v_i_boxed_3394_ = lean_unbox_usize(v_i_3384_);
lean_dec(v_i_3384_);
v_stop_boxed_3395_ = lean_unbox_usize(v_stop_3385_);
lean_dec(v_stop_3385_);
v_res_3396_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_as_3383_, v_i_boxed_3394_, v_stop_boxed_3395_, v_b_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
lean_dec_ref(v_as_3383_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams___boxed(lean_object* v_x_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_){
_start:
{
lean_object* v_res_3405_; 
v_res_3405_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_x_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_);
lean_dec(v_a_3403_);
lean_dec_ref(v_a_3402_);
lean_dec(v_a_3401_);
lean_dec_ref(v_a_3400_);
lean_dec(v_a_3399_);
lean_dec_ref(v_a_3398_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(lean_object* v_as_3406_, size_t v_i_3407_, size_t v_stop_3408_, lean_object* v_b_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v___x_3417_; 
v___x_3417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_as_3406_, v_i_3407_, v_stop_3408_, v_b_3409_, v___y_3410_, v___y_3411_);
return v___x_3417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___boxed(lean_object* v_as_3418_, lean_object* v_i_3419_, lean_object* v_stop_3420_, lean_object* v_b_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
size_t v_i_boxed_3429_; size_t v_stop_boxed_3430_; lean_object* v_res_3431_; 
v_i_boxed_3429_ = lean_unbox_usize(v_i_3419_);
lean_dec(v_i_3419_);
v_stop_boxed_3430_ = lean_unbox_usize(v_stop_3420_);
lean_dec(v_stop_3420_);
v_res_3431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(v_as_3418_, v_i_boxed_3429_, v_stop_boxed_3430_, v_b_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec_ref(v_as_3418_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(size_t v_sz_3432_, size_t v_i_3433_, lean_object* v_bs_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
uint8_t v___x_3438_; 
v___x_3438_ = lean_usize_dec_lt(v_i_3433_, v_sz_3432_);
if (v___x_3438_ == 0)
{
lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3439_ = l_unsafeCast___redArg(v_bs_3434_);
lean_dec_ref(v_bs_3434_);
v___x_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
return v___x_3440_;
}
else
{
lean_object* v_v_3441_; lean_object* v___x_3442_; lean_object* v_bs_x27_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v_v_3441_ = lean_array_uget(v_bs_3434_, v_i_3433_);
v___x_3442_ = lean_unsigned_to_nat(0u);
v_bs_x27_3443_ = lean_array_uset(v_bs_3434_, v_i_3433_, v___x_3442_);
v___x_3444_ = l_unsafeCast___redArg(v_v_3441_);
lean_dec(v_v_3441_);
v___x_3445_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v___x_3444_, v___y_3435_, v___y_3436_);
lean_dec(v___x_3444_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; size_t v___x_3447_; size_t v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
v___x_3447_ = ((size_t)1ULL);
v___x_3448_ = lean_usize_add(v_i_3433_, v___x_3447_);
v___x_3449_ = l_unsafeCast___redArg(v_a_3446_);
lean_dec(v_a_3446_);
v___x_3450_ = lean_array_uset(v_bs_x27_3443_, v_i_3433_, v___x_3449_);
v_i_3433_ = v___x_3448_;
v_bs_3434_ = v___x_3450_;
goto _start;
}
else
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3459_; 
lean_dec_ref(v_bs_x27_3443_);
v_a_3452_ = lean_ctor_get(v___x_3445_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3454_ = v___x_3445_;
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v___x_3445_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg___boxed(lean_object* v_sz_3460_, lean_object* v_i_3461_, lean_object* v_bs_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
size_t v_sz_boxed_3466_; size_t v_i_boxed_3467_; lean_object* v_res_3468_; 
v_sz_boxed_3466_ = lean_unbox_usize(v_sz_3460_);
lean_dec(v_sz_3460_);
v_i_boxed_3467_ = lean_unbox_usize(v_i_3461_);
lean_dec(v_i_3461_);
v_res_3468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_boxed_3466_, v_i_boxed_3467_, v_bs_3462_, v___y_3463_, v___y_3464_);
lean_dec(v___y_3464_);
lean_dec_ref(v___y_3463_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(size_t v_sz_3469_, size_t v_i_3470_, lean_object* v_bs_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v___x_3479_; 
v___x_3479_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_3469_, v_i_3470_, v_bs_3471_, v___y_3472_, v___y_3473_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed(lean_object* v_sz_3480_, lean_object* v_i_3481_, lean_object* v_bs_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_){
_start:
{
size_t v_sz_boxed_3490_; size_t v_i_boxed_3491_; lean_object* v_res_3492_; 
v_sz_boxed_3490_ = lean_unbox_usize(v_sz_3480_);
lean_dec(v_sz_3480_);
v_i_boxed_3491_ = lean_unbox_usize(v_i_3481_);
lean_dec(v_i_3481_);
v_res_3492_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(v_sz_boxed_3490_, v_i_boxed_3491_, v_bs_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
lean_dec(v___y_3488_);
lean_dec_ref(v___y_3487_);
lean_dec(v___y_3486_);
lean_dec_ref(v___y_3485_);
lean_dec(v___y_3484_);
lean_dec_ref(v___y_3483_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(lean_object* v_a_3493_, lean_object* v_b_3494_){
_start:
{
lean_object* v_array_3495_; lean_object* v_start_3496_; lean_object* v_stop_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3510_; 
v_array_3495_ = lean_ctor_get(v_a_3493_, 0);
v_start_3496_ = lean_ctor_get(v_a_3493_, 1);
v_stop_3497_ = lean_ctor_get(v_a_3493_, 2);
v_isSharedCheck_3510_ = !lean_is_exclusive(v_a_3493_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3499_ = v_a_3493_;
v_isShared_3500_ = v_isSharedCheck_3510_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_stop_3497_);
lean_inc(v_start_3496_);
lean_inc(v_array_3495_);
lean_dec(v_a_3493_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3510_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
uint8_t v___x_3501_; 
v___x_3501_ = lean_nat_dec_lt(v_start_3496_, v_stop_3497_);
if (v___x_3501_ == 0)
{
lean_del_object(v___x_3499_);
lean_dec(v_stop_3497_);
lean_dec(v_start_3496_);
lean_dec_ref(v_array_3495_);
return v_b_3494_;
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3505_; 
v___x_3502_ = lean_unsigned_to_nat(1u);
v___x_3503_ = lean_nat_add(v_start_3496_, v___x_3502_);
lean_inc_ref(v_array_3495_);
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 1, v___x_3503_);
v___x_3505_ = v___x_3499_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_array_3495_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v___x_3503_);
lean_ctor_set(v_reuseFailAlloc_3509_, 2, v_stop_3497_);
v___x_3505_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3506_ = lean_array_fget(v_array_3495_, v_start_3496_);
lean_dec(v_start_3496_);
lean_dec_ref(v_array_3495_);
v___x_3507_ = lean_array_push(v_b_3494_, v___x_3506_);
v_a_3493_ = v___x_3505_;
v_b_3494_ = v___x_3507_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(lean_object* v_as_3511_, size_t v_i_3512_, size_t v_stop_3513_, lean_object* v_b_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
uint8_t v___x_3519_; 
v___x_3519_ = lean_usize_dec_eq(v_i_3512_, v_stop_3513_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; lean_object* v_fvarId_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3520_ = lean_array_uget_borrowed(v_as_3511_, v_i_3512_);
v_fvarId_3521_ = lean_ctor_get(v___x_3520_, 0);
v___x_3522_ = lean_box(1);
lean_inc(v_fvarId_3521_);
v___x_3523_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3521_, v___x_3522_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v_a_3524_; size_t v___x_3525_; size_t v___x_3526_; 
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3523_, 1);
v___x_3525_ = ((size_t)1ULL);
v___x_3526_ = lean_usize_add(v_i_3512_, v___x_3525_);
v_i_3512_ = v___x_3526_;
v_b_3514_ = v_a_3524_;
goto _start;
}
else
{
return v___x_3523_;
}
}
else
{
lean_object* v___x_3528_; 
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v_b_3514_);
return v___x_3528_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg___boxed(lean_object* v_as_3529_, lean_object* v_i_3530_, lean_object* v_stop_3531_, lean_object* v_b_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
size_t v_i_boxed_3537_; size_t v_stop_boxed_3538_; lean_object* v_res_3539_; 
v_i_boxed_3537_ = lean_unbox_usize(v_i_3530_);
lean_dec(v_i_3530_);
v_stop_boxed_3538_ = lean_unbox_usize(v_stop_3531_);
lean_dec(v_stop_3531_);
v_res_3539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_as_3529_, v_i_boxed_3537_, v_stop_boxed_3538_, v_b_3532_, v___y_3533_, v___y_3534_, v___y_3535_);
lean_dec(v___y_3535_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec_ref(v_as_3529_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(lean_object* v_as_3540_, size_t v_i_3541_, size_t v_stop_3542_, lean_object* v_b_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_){
_start:
{
uint8_t v___x_3548_; 
v___x_3548_ = lean_usize_dec_eq(v_i_3541_, v_stop_3542_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; lean_object* v_fst_3550_; lean_object* v_snd_3551_; lean_object* v_fvarId_3552_; lean_object* v___x_3553_; 
v___x_3549_ = lean_array_uget_borrowed(v_as_3540_, v_i_3541_);
v_fst_3550_ = lean_ctor_get(v___x_3549_, 0);
v_snd_3551_ = lean_ctor_get(v___x_3549_, 1);
v_fvarId_3552_ = lean_ctor_get(v_fst_3550_, 0);
lean_inc(v_snd_3551_);
lean_inc(v_fvarId_3552_);
v___x_3553_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3552_, v_snd_3551_, v___y_3544_, v___y_3545_, v___y_3546_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; size_t v___x_3555_; size_t v___x_3556_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_a_3554_);
lean_dec_ref_known(v___x_3553_, 1);
v___x_3555_ = ((size_t)1ULL);
v___x_3556_ = lean_usize_add(v_i_3541_, v___x_3555_);
v_i_3541_ = v___x_3556_;
v_b_3543_ = v_a_3554_;
goto _start;
}
else
{
return v___x_3553_;
}
}
else
{
lean_object* v___x_3558_; 
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v_b_3543_);
return v___x_3558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg___boxed(lean_object* v_as_3559_, lean_object* v_i_3560_, lean_object* v_stop_3561_, lean_object* v_b_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
size_t v_i_boxed_3567_; size_t v_stop_boxed_3568_; lean_object* v_res_3569_; 
v_i_boxed_3567_ = lean_unbox_usize(v_i_3560_);
lean_dec(v_i_3560_);
v_stop_boxed_3568_ = lean_unbox_usize(v_stop_3561_);
lean_dec(v_stop_3561_);
v_res_3569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v_as_3559_, v_i_boxed_3567_, v_stop_boxed_3568_, v_b_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
lean_dec(v___y_3565_);
lean_dec(v___y_3564_);
lean_dec_ref(v___y_3563_);
lean_dec_ref(v_as_3559_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(lean_object* v_as_3572_, size_t v_i_3573_, size_t v_stop_3574_, lean_object* v_b_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
uint8_t v___x_3583_; 
v___x_3583_ = lean_usize_dec_eq(v_i_3573_, v_stop_3574_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_array_uget_borrowed(v_as_3572_, v_i_3573_);
v___x_3585_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(v___x_3584_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_, v___y_3581_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; size_t v___x_3587_; size_t v___x_3588_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3585_, 1);
v___x_3587_ = ((size_t)1ULL);
v___x_3588_ = lean_usize_add(v_i_3573_, v___x_3587_);
v_i_3573_ = v___x_3588_;
v_b_3575_ = v_a_3586_;
goto _start;
}
else
{
return v___x_3585_;
}
}
else
{
lean_object* v___x_3590_; 
v___x_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3590_, 0, v_b_3575_);
return v___x_3590_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(lean_object* v_letVal_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v___y_3606_; 
switch(lean_obj_tag(v_letVal_3591_))
{
case 0:
{
lean_object* v_value_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3623_; 
v_value_3615_ = lean_ctor_get(v_letVal_3591_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v_letVal_3591_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3617_ = v_letVal_3591_;
v_isShared_3618_ = v_isSharedCheck_3623_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_value_3615_);
lean_dec(v_letVal_3591_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3623_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3619_; lean_object* v___x_3621_; 
v___x_3619_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(v_value_3615_);
lean_dec_ref(v_value_3615_);
if (v_isShared_3618_ == 0)
{
lean_ctor_set(v___x_3617_, 0, v___x_3619_);
v___x_3621_ = v___x_3617_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v___x_3619_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
case 1:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = lean_box(1);
v___x_3625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
case 2:
{
lean_object* v_idx_3626_; lean_object* v_struct_3627_; lean_object* v___x_3628_; lean_object* v_env_3629_; lean_object* v___x_3630_; 
v_idx_3626_ = lean_ctor_get(v_letVal_3591_, 1);
lean_inc(v_idx_3626_);
v_struct_3627_ = lean_ctor_get(v_letVal_3591_, 2);
lean_inc(v_struct_3627_);
lean_dec_ref_known(v_letVal_3591_, 3);
v___x_3628_ = lean_st_ref_get(v_a_3597_);
v_env_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc_ref(v_env_3629_);
lean_dec(v___x_3628_);
v___x_3630_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_struct_3627_, v_a_3592_, v_a_3593_);
lean_dec(v_struct_3627_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3639_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3633_ = v___x_3630_;
v_isShared_3634_ = v_isSharedCheck_3639_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3630_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3639_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3635_; lean_object* v___x_3637_; 
v___x_3635_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_3629_, v_a_3631_, v_idx_3626_);
lean_dec(v_idx_3626_);
lean_dec(v_a_3631_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 0, v___x_3635_);
v___x_3637_ = v___x_3633_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3635_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
else
{
lean_dec_ref(v_env_3629_);
lean_dec(v_idx_3626_);
return v___x_3630_;
}
}
case 3:
{
lean_object* v_declName_3640_; lean_object* v_args_3641_; lean_object* v___x_3642_; lean_object* v_env_3643_; lean_object* v___x_3644_; lean_object* v_numFields_3646_; lean_object* v_lower_3647_; lean_object* v_upper_3648_; lean_object* v___x_3680_; lean_object* v___y_3749_; uint8_t v___x_3758_; 
v_declName_3640_ = lean_ctor_get(v_letVal_3591_, 0);
lean_inc(v_declName_3640_);
v_args_3641_ = lean_ctor_get(v_letVal_3591_, 2);
lean_inc_ref(v_args_3641_);
lean_dec_ref_known(v_letVal_3591_, 3);
v___x_3642_ = lean_st_ref_get(v_a_3597_);
v_env_3643_ = lean_ctor_get(v___x_3642_, 0);
lean_inc_ref(v_env_3643_);
lean_dec(v___x_3642_);
v___x_3644_ = lean_unsigned_to_nat(0u);
v___x_3680_ = lean_array_get_size(v_args_3641_);
v___x_3758_ = lean_nat_dec_lt(v___x_3644_, v___x_3680_);
if (v___x_3758_ == 0)
{
goto v___jp_3681_;
}
else
{
lean_object* v___x_3759_; uint8_t v___x_3760_; 
v___x_3759_ = lean_box(0);
v___x_3760_ = lean_nat_dec_le(v___x_3680_, v___x_3680_);
if (v___x_3760_ == 0)
{
if (v___x_3758_ == 0)
{
goto v___jp_3681_;
}
else
{
size_t v___x_3761_; size_t v___x_3762_; lean_object* v___x_3763_; 
v___x_3761_ = ((size_t)0ULL);
v___x_3762_ = lean_usize_of_nat(v___x_3680_);
v___x_3763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3641_, v___x_3761_, v___x_3762_, v___x_3759_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_);
v___y_3749_ = v___x_3763_;
goto v___jp_3748_;
}
}
else
{
size_t v___x_3764_; size_t v___x_3765_; lean_object* v___x_3766_; 
v___x_3764_ = ((size_t)0ULL);
v___x_3765_ = lean_usize_of_nat(v___x_3680_);
v___x_3766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3641_, v___x_3764_, v___x_3765_, v___x_3759_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_);
v___y_3749_ = v___x_3766_;
goto v___jp_3748_;
}
}
v___jp_3645_:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; 
v___x_3649_ = l_Array_toSubarray___redArg(v_args_3641_, v_lower_3647_, v_upper_3648_);
v___x_3650_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0));
v___x_3651_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(v___x_3649_, v___x_3650_);
v___x_3652_ = lean_array_get_size(v___x_3651_);
v___x_3653_ = lean_nat_dec_eq(v_numFields_3646_, v___x_3652_);
lean_dec(v_numFields_3646_);
if (v___x_3653_ == 0)
{
lean_object* v___x_3654_; lean_object* v___x_3655_; 
lean_dec_ref(v___x_3651_);
lean_dec(v_declName_3640_);
v___x_3654_ = lean_box(1);
v___x_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
return v___x_3655_;
}
else
{
size_t v_sz_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_22279__overap_3661_; lean_object* v___x_3662_; 
v_sz_3656_ = lean_array_size(v___x_3651_);
v___x_3657_ = l_unsafeCast___redArg(v___x_3651_);
lean_dec_ref(v___x_3651_);
v___x_3658_ = lean_box_usize(v_sz_3656_);
v___x_3659_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed__const__1));
v___x_3660_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed), 10, 3);
lean_closure_set(v___x_3660_, 0, v___x_3658_);
lean_closure_set(v___x_3660_, 1, v___x_3659_);
lean_closure_set(v___x_3660_, 2, v___x_3657_);
v___x_22279__overap_3661_ = l_unsafeCast___redArg(v___x_3660_);
lean_dec_ref(v___x_3660_);
lean_inc(v_a_3597_);
lean_inc_ref(v_a_3596_);
lean_inc(v_a_3595_);
lean_inc_ref(v_a_3594_);
lean_inc(v_a_3593_);
lean_inc_ref(v_a_3592_);
v___x_3662_ = lean_apply_7(v___x_22279__overap_3661_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, lean_box(0));
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3671_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3665_ = v___x_3662_;
v_isShared_3666_ = v_isSharedCheck_3671_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3662_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3671_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3667_; lean_object* v___x_3669_; 
v___x_3667_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3667_, 0, v_declName_3640_);
lean_ctor_set(v___x_3667_, 1, v_a_3663_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v___x_3667_);
v___x_3669_ = v___x_3665_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3667_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
else
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
lean_dec(v_declName_3640_);
v_a_3672_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3662_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3662_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
}
v___jp_3681_:
{
lean_object* v___x_3682_; 
v___x_3682_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_3594_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; uint8_t v___x_3684_; lean_object* v___x_3685_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
lean_inc(v_a_3683_);
lean_dec_ref_known(v___x_3682_, 1);
v___x_3684_ = lean_unbox(v_a_3683_);
lean_dec(v_a_3683_);
lean_inc(v_declName_3640_);
v___x_3685_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_3640_, v___x_3684_, v_a_3596_, v_a_3597_);
if (lean_obj_tag(v___x_3685_) == 0)
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3731_; 
v_a_3686_ = lean_ctor_get(v___x_3685_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3685_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3688_ = v___x_3685_;
v_isShared_3689_ = v_isSharedCheck_3731_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3685_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3731_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
if (lean_obj_tag(v_a_3686_) == 1)
{
lean_object* v_val_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; 
lean_dec_ref(v_args_3641_);
v_val_3690_ = lean_ctor_get(v_a_3686_, 0);
lean_inc(v_val_3690_);
lean_dec_ref_known(v_a_3686_, 1);
v___x_3691_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_3690_);
lean_dec(v_val_3690_);
v___x_3692_ = lean_nat_dec_eq(v___x_3691_, v___x_3680_);
lean_dec(v___x_3691_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; lean_object* v___x_3695_; 
lean_dec_ref(v_env_3643_);
lean_dec(v_declName_3640_);
v___x_3693_ = lean_box(1);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 0, v___x_3693_);
v___x_3695_ = v___x_3688_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3693_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
else
{
lean_object* v___x_3697_; 
lean_inc(v_declName_3640_);
v___x_3697_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(v_env_3643_, v_declName_3640_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v___x_3698_; 
lean_del_object(v___x_3688_);
v___x_3698_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_3640_, v_a_3592_, v_a_3593_);
lean_dec(v_declName_3640_);
if (lean_obj_tag(v___x_3698_) == 0)
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3711_; 
v_a_3699_ = lean_ctor_get(v___x_3698_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3698_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3701_ = v___x_3698_;
v_isShared_3702_ = v_isSharedCheck_3711_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3698_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3711_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
if (lean_obj_tag(v_a_3699_) == 0)
{
lean_object* v___x_3703_; lean_object* v___x_3705_; 
v___x_3703_ = lean_box(1);
if (v_isShared_3702_ == 0)
{
lean_ctor_set(v___x_3701_, 0, v___x_3703_);
v___x_3705_ = v___x_3701_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v___x_3703_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
else
{
lean_object* v_val_3707_; lean_object* v___x_3709_; 
v_val_3707_ = lean_ctor_get(v_a_3699_, 0);
lean_inc(v_val_3707_);
lean_dec_ref_known(v_a_3699_, 1);
if (v_isShared_3702_ == 0)
{
lean_ctor_set(v___x_3701_, 0, v_val_3707_);
v___x_3709_ = v___x_3701_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_val_3707_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
return v___x_3709_;
}
}
}
}
else
{
lean_object* v_a_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3719_; 
v_a_3712_ = lean_ctor_get(v___x_3698_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3698_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3714_ = v___x_3698_;
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_a_3712_);
lean_dec(v___x_3698_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___x_3717_; 
if (v_isShared_3715_ == 0)
{
v___x_3717_ = v___x_3714_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_a_3712_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
}
else
{
lean_object* v_val_3720_; lean_object* v___x_3722_; 
lean_dec(v_declName_3640_);
v_val_3720_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_val_3720_);
lean_dec_ref_known(v___x_3697_, 1);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 0, v_val_3720_);
v___x_3722_ = v___x_3688_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v_val_3720_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
else
{
uint8_t v___x_3724_; lean_object* v___x_3725_; 
lean_del_object(v___x_3688_);
lean_dec(v_a_3686_);
v___x_3724_ = 0;
lean_inc(v_declName_3640_);
v___x_3725_ = l_Lean_Environment_find_x3f(v_env_3643_, v_declName_3640_, v___x_3724_);
if (lean_obj_tag(v___x_3725_) == 1)
{
lean_object* v_val_3726_; 
v_val_3726_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_val_3726_);
lean_dec_ref_known(v___x_3725_, 1);
if (lean_obj_tag(v_val_3726_) == 6)
{
lean_object* v_val_3727_; lean_object* v_numParams_3728_; lean_object* v_numFields_3729_; uint8_t v___x_3730_; 
v_val_3727_ = lean_ctor_get(v_val_3726_, 0);
lean_inc_ref(v_val_3727_);
lean_dec_ref_known(v_val_3726_, 1);
v_numParams_3728_ = lean_ctor_get(v_val_3727_, 3);
lean_inc(v_numParams_3728_);
v_numFields_3729_ = lean_ctor_get(v_val_3727_, 4);
lean_inc(v_numFields_3729_);
lean_dec_ref(v_val_3727_);
v___x_3730_ = lean_nat_dec_le(v_numParams_3728_, v___x_3644_);
if (v___x_3730_ == 0)
{
v_numFields_3646_ = v_numFields_3729_;
v_lower_3647_ = v_numParams_3728_;
v_upper_3648_ = v___x_3680_;
goto v___jp_3645_;
}
else
{
lean_dec(v_numParams_3728_);
v_numFields_3646_ = v_numFields_3729_;
v_lower_3647_ = v___x_3644_;
v_upper_3648_ = v___x_3680_;
goto v___jp_3645_;
}
}
else
{
lean_dec(v_val_3726_);
lean_dec_ref(v_args_3641_);
lean_dec(v_declName_3640_);
goto v___jp_3599_;
}
}
else
{
lean_dec(v___x_3725_);
lean_dec_ref(v_args_3641_);
lean_dec(v_declName_3640_);
goto v___jp_3599_;
}
}
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
lean_dec_ref(v_env_3643_);
lean_dec_ref(v_args_3641_);
lean_dec(v_declName_3640_);
v_a_3732_ = lean_ctor_get(v___x_3685_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3685_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3685_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3685_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
}
else
{
lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3747_; 
lean_dec_ref(v_env_3643_);
lean_dec_ref(v_args_3641_);
lean_dec(v_declName_3640_);
v_a_3740_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3742_ = v___x_3682_;
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3682_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3745_; 
if (v_isShared_3743_ == 0)
{
v___x_3745_ = v___x_3742_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_a_3740_);
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
v___jp_3748_:
{
if (lean_obj_tag(v___y_3749_) == 0)
{
lean_dec_ref_known(v___y_3749_, 1);
goto v___jp_3681_;
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec_ref(v_env_3643_);
lean_dec_ref(v_args_3641_);
lean_dec(v_declName_3640_);
v_a_3750_ = lean_ctor_get(v___y_3749_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___y_3749_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___y_3749_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___y_3749_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
default: 
{
lean_object* v_args_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; uint8_t v___x_3770_; 
v_args_3767_ = lean_ctor_get(v_letVal_3591_, 1);
lean_inc_ref(v_args_3767_);
lean_dec_ref_known(v_letVal_3591_, 2);
v___x_3768_ = lean_unsigned_to_nat(0u);
v___x_3769_ = lean_array_get_size(v_args_3767_);
v___x_3770_ = lean_nat_dec_lt(v___x_3768_, v___x_3769_);
if (v___x_3770_ == 0)
{
lean_dec_ref(v_args_3767_);
goto v___jp_3602_;
}
else
{
lean_object* v___x_3771_; uint8_t v___x_3772_; 
v___x_3771_ = lean_box(0);
v___x_3772_ = lean_nat_dec_le(v___x_3769_, v___x_3769_);
if (v___x_3772_ == 0)
{
if (v___x_3770_ == 0)
{
lean_dec_ref(v_args_3767_);
goto v___jp_3602_;
}
else
{
size_t v___x_3773_; size_t v___x_3774_; lean_object* v___x_3775_; 
v___x_3773_ = ((size_t)0ULL);
v___x_3774_ = lean_usize_of_nat(v___x_3769_);
v___x_3775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3767_, v___x_3773_, v___x_3774_, v___x_3771_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_);
lean_dec_ref(v_args_3767_);
v___y_3606_ = v___x_3775_;
goto v___jp_3605_;
}
}
else
{
size_t v___x_3776_; size_t v___x_3777_; lean_object* v___x_3778_; 
v___x_3776_ = ((size_t)0ULL);
v___x_3777_ = lean_usize_of_nat(v___x_3769_);
v___x_3778_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3767_, v___x_3776_, v___x_3777_, v___x_3771_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_);
lean_dec_ref(v_args_3767_);
v___y_3606_ = v___x_3778_;
goto v___jp_3605_;
}
}
}
}
v___jp_3599_:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3600_ = lean_box(1);
v___x_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3600_);
return v___x_3601_;
}
v___jp_3602_:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = lean_box(1);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
return v___x_3604_;
}
v___jp_3605_:
{
if (lean_obj_tag(v___y_3606_) == 0)
{
lean_dec_ref_known(v___y_3606_, 1);
goto v___jp_3602_;
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3614_; 
v_a_3607_ = lean_ctor_get(v___y_3606_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___y_3606_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___y_3606_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___y_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(lean_object* v_funDecl_3779_, lean_object* v_args_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_){
_start:
{
lean_object* v_params_3788_; lean_object* v_value_3789_; lean_object* v___x_3790_; 
v_params_3788_ = lean_ctor_get(v_funDecl_3779_, 2);
lean_inc_ref(v_params_3788_);
v_value_3789_ = lean_ctor_get(v_funDecl_3779_, 4);
lean_inc_ref(v_value_3789_);
lean_dec_ref(v_funDecl_3779_);
v___x_3790_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(v_params_3788_, v_args_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3802_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3793_ = v___x_3790_;
v_isShared_3794_ = v_isSharedCheck_3802_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3790_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3802_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
uint8_t v___x_3795_; 
v___x_3795_ = lean_unbox(v_a_3791_);
lean_dec(v_a_3791_);
if (v___x_3795_ == 0)
{
lean_object* v___x_3796_; lean_object* v___x_3798_; 
lean_dec_ref(v_value_3789_);
v___x_3796_ = lean_box(0);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v___x_3796_);
v___x_3798_ = v___x_3793_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v___x_3796_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
return v___x_3798_;
}
}
else
{
lean_object* v___x_3800_; 
lean_del_object(v___x_3793_);
lean_inc_ref(v_value_3789_);
v___x_3800_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_value_3789_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v___x_3801_; 
lean_dec_ref_known(v___x_3800_, 1);
v___x_3801_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3789_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
return v___x_3801_;
}
else
{
lean_dec_ref(v_value_3789_);
return v___x_3800_;
}
}
}
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_dec_ref(v_value_3789_);
v_a_3803_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3790_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3790_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(lean_object* v_a_3811_, lean_object* v_as_3812_, size_t v_sz_3813_, size_t v_i_3814_, lean_object* v_b_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v_a_3824_; uint8_t v___x_3828_; 
v___x_3828_ = lean_usize_dec_lt(v_i_3814_, v_sz_3813_);
if (v___x_3828_ == 0)
{
lean_object* v___x_3829_; 
v___x_3829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3829_, 0, v_b_3815_);
return v___x_3829_;
}
else
{
lean_object* v___x_3830_; lean_object* v_a_3831_; 
v___x_3830_ = lean_box(0);
v_a_3831_ = lean_array_uget_borrowed(v_as_3812_, v_i_3814_);
if (lean_obj_tag(v_a_3831_) == 0)
{
lean_object* v_ctorName_3832_; lean_object* v_params_3833_; lean_object* v_code_3834_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3844_; lean_object* v___y_3846_; lean_object* v___x_3847_; 
v_ctorName_3832_ = lean_ctor_get(v_a_3831_, 0);
v_params_3833_ = lean_ctor_get(v_a_3831_, 1);
v_code_3834_ = lean_ctor_get(v_a_3831_, 2);
v___x_3847_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(v_a_3811_, v_ctorName_3832_);
if (lean_obj_tag(v___x_3847_) == 1)
{
lean_object* v_val_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; uint8_t v___x_3852_; 
v_val_3848_ = lean_ctor_get(v___x_3847_, 0);
lean_inc(v_val_3848_);
lean_dec_ref_known(v___x_3847_, 1);
v___x_3849_ = l_Array_zip___redArg(v_params_3833_, v_val_3848_);
lean_dec(v_val_3848_);
v___x_3850_ = lean_unsigned_to_nat(0u);
v___x_3851_ = lean_array_get_size(v___x_3849_);
v___x_3852_ = lean_nat_dec_lt(v___x_3850_, v___x_3851_);
if (v___x_3852_ == 0)
{
lean_dec_ref(v___x_3849_);
v___y_3836_ = v___y_3816_;
v___y_3837_ = v___y_3817_;
v___y_3838_ = v___y_3818_;
v___y_3839_ = v___y_3819_;
v___y_3840_ = v___y_3820_;
v___y_3841_ = v___y_3821_;
goto v___jp_3835_;
}
else
{
uint8_t v___x_3853_; 
v___x_3853_ = lean_nat_dec_le(v___x_3851_, v___x_3851_);
if (v___x_3853_ == 0)
{
if (v___x_3852_ == 0)
{
lean_dec_ref(v___x_3849_);
v___y_3836_ = v___y_3816_;
v___y_3837_ = v___y_3817_;
v___y_3838_ = v___y_3818_;
v___y_3839_ = v___y_3819_;
v___y_3840_ = v___y_3820_;
v___y_3841_ = v___y_3821_;
goto v___jp_3835_;
}
else
{
size_t v___x_3854_; size_t v___x_3855_; lean_object* v___x_3856_; 
v___x_3854_ = ((size_t)0ULL);
v___x_3855_ = lean_usize_of_nat(v___x_3851_);
v___x_3856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v___x_3849_, v___x_3854_, v___x_3855_, v___x_3830_, v___y_3816_, v___y_3817_, v___y_3821_);
lean_dec_ref(v___x_3849_);
v___y_3844_ = v___x_3856_;
goto v___jp_3843_;
}
}
else
{
size_t v___x_3857_; size_t v___x_3858_; lean_object* v___x_3859_; 
v___x_3857_ = ((size_t)0ULL);
v___x_3858_ = lean_usize_of_nat(v___x_3851_);
v___x_3859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v___x_3849_, v___x_3857_, v___x_3858_, v___x_3830_, v___y_3816_, v___y_3817_, v___y_3821_);
lean_dec_ref(v___x_3849_);
v___y_3844_ = v___x_3859_;
goto v___jp_3843_;
}
}
}
else
{
lean_object* v___x_3860_; lean_object* v___x_3861_; uint8_t v___x_3862_; 
lean_dec(v___x_3847_);
v___x_3860_ = lean_unsigned_to_nat(0u);
v___x_3861_ = lean_array_get_size(v_params_3833_);
v___x_3862_ = lean_nat_dec_lt(v___x_3860_, v___x_3861_);
if (v___x_3862_ == 0)
{
v___y_3836_ = v___y_3816_;
v___y_3837_ = v___y_3817_;
v___y_3838_ = v___y_3818_;
v___y_3839_ = v___y_3819_;
v___y_3840_ = v___y_3820_;
v___y_3841_ = v___y_3821_;
goto v___jp_3835_;
}
else
{
uint8_t v___x_3863_; 
v___x_3863_ = lean_nat_dec_le(v___x_3861_, v___x_3861_);
if (v___x_3863_ == 0)
{
if (v___x_3862_ == 0)
{
v___y_3836_ = v___y_3816_;
v___y_3837_ = v___y_3817_;
v___y_3838_ = v___y_3818_;
v___y_3839_ = v___y_3819_;
v___y_3840_ = v___y_3820_;
v___y_3841_ = v___y_3821_;
goto v___jp_3835_;
}
else
{
size_t v___x_3864_; size_t v___x_3865_; lean_object* v___x_3866_; 
v___x_3864_ = ((size_t)0ULL);
v___x_3865_ = lean_usize_of_nat(v___x_3861_);
v___x_3866_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_3833_, v___x_3864_, v___x_3865_, v___x_3830_, v___y_3816_, v___y_3817_, v___y_3821_);
v___y_3846_ = v___x_3866_;
goto v___jp_3845_;
}
}
else
{
size_t v___x_3867_; size_t v___x_3868_; lean_object* v___x_3869_; 
v___x_3867_ = ((size_t)0ULL);
v___x_3868_ = lean_usize_of_nat(v___x_3861_);
v___x_3869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_3833_, v___x_3867_, v___x_3868_, v___x_3830_, v___y_3816_, v___y_3817_, v___y_3821_);
v___y_3846_ = v___x_3869_;
goto v___jp_3845_;
}
}
}
v___jp_3835_:
{
lean_object* v___x_3842_; 
lean_inc_ref(v_code_3834_);
v___x_3842_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_3834_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
if (lean_obj_tag(v___x_3842_) == 0)
{
lean_dec_ref_known(v___x_3842_, 1);
v_a_3824_ = v___x_3830_;
goto v___jp_3823_;
}
else
{
return v___x_3842_;
}
}
v___jp_3843_:
{
if (lean_obj_tag(v___y_3844_) == 0)
{
lean_dec_ref_known(v___y_3844_, 1);
v___y_3836_ = v___y_3816_;
v___y_3837_ = v___y_3817_;
v___y_3838_ = v___y_3818_;
v___y_3839_ = v___y_3819_;
v___y_3840_ = v___y_3820_;
v___y_3841_ = v___y_3821_;
goto v___jp_3835_;
}
else
{
return v___y_3844_;
}
}
v___jp_3845_:
{
if (lean_obj_tag(v___y_3846_) == 0)
{
lean_dec_ref_known(v___y_3846_, 1);
v___y_3836_ = v___y_3816_;
v___y_3837_ = v___y_3817_;
v___y_3838_ = v___y_3818_;
v___y_3839_ = v___y_3819_;
v___y_3840_ = v___y_3820_;
v___y_3841_ = v___y_3821_;
goto v___jp_3835_;
}
else
{
return v___y_3846_;
}
}
}
else
{
lean_object* v_code_3870_; lean_object* v___x_3871_; 
v_code_3870_ = lean_ctor_get(v_a_3831_, 0);
lean_inc_ref(v_code_3870_);
v___x_3871_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_3870_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_dec_ref_known(v___x_3871_, 1);
v_a_3824_ = v___x_3830_;
goto v___jp_3823_;
}
else
{
return v___x_3871_;
}
}
}
v___jp_3823_:
{
size_t v___x_3825_; size_t v___x_3826_; 
v___x_3825_ = ((size_t)1ULL);
v___x_3826_ = lean_usize_add(v_i_3814_, v___x_3825_);
v_i_3814_ = v___x_3826_;
v_b_3815_ = v_a_3824_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(lean_object* v_x_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_){
_start:
{
lean_object* v_decl_3881_; lean_object* v_k_3882_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; lean_object* v___y_3886_; lean_object* v___y_3887_; lean_object* v___y_3888_; 
switch(lean_obj_tag(v_x_3872_))
{
case 0:
{
lean_object* v_decl_3892_; lean_object* v_k_3893_; lean_object* v_fvarId_3894_; lean_object* v_value_3895_; lean_object* v___x_3896_; 
v_decl_3892_ = lean_ctor_get(v_x_3872_, 0);
lean_inc_ref(v_decl_3892_);
v_k_3893_ = lean_ctor_get(v_x_3872_, 1);
lean_inc_ref(v_k_3893_);
lean_dec_ref_known(v_x_3872_, 2);
v_fvarId_3894_ = lean_ctor_get(v_decl_3892_, 0);
lean_inc(v_fvarId_3894_);
v_value_3895_ = lean_ctor_get(v_decl_3892_, 3);
lean_inc_n(v_value_3895_, 2);
lean_dec_ref(v_decl_3892_);
v___x_3896_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(v_value_3895_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
v___x_3898_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3894_, v_a_3897_, v_a_3873_, v_a_3874_, v_a_3878_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_dec_ref_known(v___x_3898_, 1);
if (lean_obj_tag(v_value_3895_) == 4)
{
lean_object* v_fvarId_3899_; lean_object* v_args_3900_; uint8_t v___x_3901_; lean_object* v___x_3902_; 
v_fvarId_3899_ = lean_ctor_get(v_value_3895_, 0);
lean_inc(v_fvarId_3899_);
v_args_3900_ = lean_ctor_get(v_value_3895_, 1);
lean_inc_ref(v_args_3900_);
lean_dec_ref_known(v_value_3895_, 2);
v___x_3901_ = 0;
v___x_3902_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_3901_, v_fvarId_3899_, v_a_3876_);
lean_dec(v_fvarId_3899_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_a_3903_);
lean_dec_ref_known(v___x_3902_, 1);
if (lean_obj_tag(v_a_3903_) == 1)
{
lean_object* v_val_3904_; lean_object* v___x_3905_; 
v_val_3904_ = lean_ctor_get(v_a_3903_, 0);
lean_inc(v_val_3904_);
lean_dec_ref_known(v_a_3903_, 1);
v___x_3905_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_val_3904_, v_args_3900_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
if (lean_obj_tag(v___x_3905_) == 0)
{
lean_dec_ref_known(v___x_3905_, 1);
v_x_3872_ = v_k_3893_;
goto _start;
}
else
{
lean_dec_ref(v_k_3893_);
return v___x_3905_;
}
}
else
{
lean_dec(v_a_3903_);
lean_dec_ref(v_args_3900_);
v_x_3872_ = v_k_3893_;
goto _start;
}
}
else
{
lean_object* v_a_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3915_; 
lean_dec_ref(v_args_3900_);
lean_dec_ref(v_k_3893_);
v_a_3908_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3910_ = v___x_3902_;
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_a_3908_);
lean_dec(v___x_3902_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3913_; 
if (v_isShared_3911_ == 0)
{
v___x_3913_ = v___x_3910_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3908_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
}
}
else
{
lean_dec(v_value_3895_);
v_x_3872_ = v_k_3893_;
goto _start;
}
}
else
{
lean_dec(v_value_3895_);
lean_dec_ref(v_k_3893_);
return v___x_3898_;
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
lean_dec(v_value_3895_);
lean_dec(v_fvarId_3894_);
lean_dec_ref(v_k_3893_);
v_a_3917_ = lean_ctor_get(v___x_3896_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3896_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3896_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3896_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3922_; 
if (v_isShared_3920_ == 0)
{
v___x_3922_ = v___x_3919_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3917_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3925_; lean_object* v_args_3926_; uint8_t v___x_3927_; lean_object* v___x_3928_; 
v_fvarId_3925_ = lean_ctor_get(v_x_3872_, 0);
lean_inc(v_fvarId_3925_);
v_args_3926_ = lean_ctor_get(v_x_3872_, 1);
lean_inc_ref(v_args_3926_);
lean_dec_ref_known(v_x_3872_, 2);
v___x_3927_ = 0;
v___x_3928_ = l_Lean_Compiler_LCNF_getFunDecl(v___x_3927_, v_fvarId_3925_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; lean_object* v___y_3931_; lean_object* v___x_3933_; lean_object* v___x_3934_; uint8_t v___x_3935_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3929_);
lean_dec_ref_known(v___x_3928_, 1);
v___x_3933_ = lean_unsigned_to_nat(0u);
v___x_3934_ = lean_array_get_size(v_args_3926_);
v___x_3935_ = lean_nat_dec_lt(v___x_3933_, v___x_3934_);
if (v___x_3935_ == 0)
{
lean_object* v___x_3936_; 
v___x_3936_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3929_, v_args_3926_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
return v___x_3936_;
}
else
{
lean_object* v___x_3937_; uint8_t v___x_3938_; 
v___x_3937_ = lean_box(0);
v___x_3938_ = lean_nat_dec_le(v___x_3934_, v___x_3934_);
if (v___x_3938_ == 0)
{
if (v___x_3935_ == 0)
{
lean_object* v___x_3939_; 
v___x_3939_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3929_, v_args_3926_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
return v___x_3939_;
}
else
{
size_t v___x_3940_; size_t v___x_3941_; lean_object* v___x_3942_; 
v___x_3940_ = ((size_t)0ULL);
v___x_3941_ = lean_usize_of_nat(v___x_3934_);
v___x_3942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3926_, v___x_3940_, v___x_3941_, v___x_3937_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
v___y_3931_ = v___x_3942_;
goto v___jp_3930_;
}
}
else
{
size_t v___x_3943_; size_t v___x_3944_; lean_object* v___x_3945_; 
v___x_3943_ = ((size_t)0ULL);
v___x_3944_ = lean_usize_of_nat(v___x_3934_);
v___x_3945_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3926_, v___x_3943_, v___x_3944_, v___x_3937_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
v___y_3931_ = v___x_3945_;
goto v___jp_3930_;
}
}
v___jp_3930_:
{
if (lean_obj_tag(v___y_3931_) == 0)
{
lean_object* v___x_3932_; 
lean_dec_ref_known(v___y_3931_, 1);
v___x_3932_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3929_, v_args_3926_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
return v___x_3932_;
}
else
{
lean_dec(v_a_3929_);
lean_dec_ref(v_args_3926_);
return v___y_3931_;
}
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3953_; 
lean_dec_ref(v_args_3926_);
v_a_3946_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3948_ = v___x_3928_;
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3928_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3951_; 
if (v_isShared_3949_ == 0)
{
v___x_3951_ = v___x_3948_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3946_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
case 4:
{
lean_object* v_cases_3954_; lean_object* v_discr_3955_; lean_object* v_alts_3956_; lean_object* v___x_3957_; 
v_cases_3954_ = lean_ctor_get(v_x_3872_, 0);
lean_inc_ref(v_cases_3954_);
lean_dec_ref_known(v_x_3872_, 1);
v_discr_3955_ = lean_ctor_get(v_cases_3954_, 2);
lean_inc(v_discr_3955_);
v_alts_3956_ = lean_ctor_get(v_cases_3954_, 3);
lean_inc_ref(v_alts_3956_);
lean_dec_ref(v_cases_3954_);
v___x_3957_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_discr_3955_, v_a_3873_, v_a_3874_);
lean_dec(v_discr_3955_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3959_; size_t v_sz_3960_; size_t v___x_3961_; lean_object* v___x_3962_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3958_);
lean_dec_ref_known(v___x_3957_, 1);
v___x_3959_ = lean_box(0);
v_sz_3960_ = lean_array_size(v_alts_3956_);
v___x_3961_ = ((size_t)0ULL);
v___x_3962_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(v_a_3958_, v_alts_3956_, v_sz_3960_, v___x_3961_, v___x_3959_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
lean_dec_ref(v_alts_3956_);
lean_dec(v_a_3958_);
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3969_; 
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3962_);
if (v_isSharedCheck_3969_ == 0)
{
lean_object* v_unused_3970_; 
v_unused_3970_ = lean_ctor_get(v___x_3962_, 0);
lean_dec(v_unused_3970_);
v___x_3964_ = v___x_3962_;
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
else
{
lean_dec(v___x_3962_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 0, v___x_3959_);
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v___x_3959_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
return v___x_3967_;
}
}
}
else
{
return v___x_3962_;
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3978_; 
lean_dec_ref(v_alts_3956_);
v_a_3971_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3973_ = v___x_3957_;
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3957_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_3979_; lean_object* v___x_3980_; 
v_fvarId_3979_ = lean_ctor_get(v_x_3872_, 0);
lean_inc(v_fvarId_3979_);
lean_dec_ref_known(v_x_3872_, 1);
v___x_3980_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_fvarId_3979_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v___x_3981_; 
lean_dec_ref_known(v___x_3980_, 1);
v___x_3981_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_3979_, v_a_3873_, v_a_3874_);
lean_dec(v_fvarId_3979_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v_a_3982_; lean_object* v___x_3983_; 
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
lean_inc(v_a_3982_);
lean_dec_ref_known(v___x_3981_, 1);
v___x_3983_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_a_3982_, v_a_3873_, v_a_3874_, v_a_3878_);
return v___x_3983_;
}
else
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3991_; 
v_a_3984_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3986_ = v___x_3981_;
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v___x_3981_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
return v___x_3989_;
}
}
}
}
else
{
lean_dec(v_fvarId_3979_);
return v___x_3980_;
}
}
case 6:
{
lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3999_; 
v_isSharedCheck_3999_ = !lean_is_exclusive(v_x_3872_);
if (v_isSharedCheck_3999_ == 0)
{
lean_object* v_unused_4000_; 
v_unused_4000_ = lean_ctor_get(v_x_3872_, 0);
lean_dec(v_unused_4000_);
v___x_3993_ = v_x_3872_;
v_isShared_3994_ = v_isSharedCheck_3999_;
goto v_resetjp_3992_;
}
else
{
lean_dec(v_x_3872_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3999_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3995_; lean_object* v___x_3997_; 
v___x_3995_ = lean_box(0);
if (v_isShared_3994_ == 0)
{
lean_ctor_set_tag(v___x_3993_, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3995_);
v___x_3997_ = v___x_3993_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v___x_3995_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
default: 
{
lean_object* v_decl_4001_; lean_object* v_k_4002_; 
v_decl_4001_ = lean_ctor_get(v_x_3872_, 0);
lean_inc_ref(v_decl_4001_);
v_k_4002_ = lean_ctor_get(v_x_3872_, 1);
lean_inc_ref(v_k_4002_);
lean_dec_ref(v_x_3872_);
v_decl_3881_ = v_decl_4001_;
v_k_3882_ = v_k_4002_;
v___y_3883_ = v_a_3873_;
v___y_3884_ = v_a_3874_;
v___y_3885_ = v_a_3875_;
v___y_3886_ = v_a_3876_;
v___y_3887_ = v_a_3877_;
v___y_3888_ = v_a_3878_;
goto v___jp_3880_;
}
}
v___jp_3880_:
{
lean_object* v_value_3889_; lean_object* v___x_3890_; 
v_value_3889_ = lean_ctor_get(v_decl_3881_, 4);
lean_inc_ref(v_value_3889_);
lean_dec_ref(v_decl_3881_);
v___x_3890_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3889_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_);
if (lean_obj_tag(v___x_3890_) == 0)
{
lean_dec_ref_known(v___x_3890_, 1);
v_x_3872_ = v_k_3882_;
v_a_3873_ = v___y_3883_;
v_a_3874_ = v___y_3884_;
v_a_3875_ = v___y_3885_;
v_a_3876_ = v___y_3886_;
v_a_3877_ = v___y_3887_;
v_a_3878_ = v___y_3888_;
goto _start;
}
else
{
lean_dec_ref(v_k_3882_);
return v___x_3890_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(lean_object* v_var_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
uint8_t v___x_4011_; lean_object* v___x_4012_; 
v___x_4011_ = 0;
v___x_4012_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_4011_, v_var_4003_, v_a_4007_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4045_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4045_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4045_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
if (lean_obj_tag(v_a_4013_) == 1)
{
lean_object* v_val_4017_; lean_object* v_params_4018_; lean_object* v_value_4019_; lean_object* v___x_4020_; 
lean_del_object(v___x_4015_);
v_val_4017_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_val_4017_);
lean_dec_ref_known(v_a_4013_, 1);
v_params_4018_ = lean_ctor_get(v_val_4017_, 2);
lean_inc_ref(v_params_4018_);
v_value_4019_ = lean_ctor_get(v_val_4017_, 4);
lean_inc_ref(v_value_4019_);
lean_dec(v_val_4017_);
v___x_4020_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(v_params_4018_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
lean_dec_ref(v_params_4018_);
if (lean_obj_tag(v___x_4020_) == 0)
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4032_; 
v_a_4021_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4023_ = v___x_4020_;
v_isShared_4024_ = v_isSharedCheck_4032_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_4020_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4032_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
uint8_t v___x_4025_; 
v___x_4025_ = lean_unbox(v_a_4021_);
lean_dec(v_a_4021_);
if (v___x_4025_ == 0)
{
lean_object* v___x_4026_; lean_object* v___x_4028_; 
lean_dec_ref(v_value_4019_);
v___x_4026_ = lean_box(0);
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 0, v___x_4026_);
v___x_4028_ = v___x_4023_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v___x_4026_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
else
{
lean_object* v___x_4030_; 
lean_del_object(v___x_4023_);
lean_inc_ref(v_value_4019_);
v___x_4030_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_value_4019_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4030_) == 0)
{
lean_object* v___x_4031_; 
lean_dec_ref_known(v___x_4030_, 1);
v___x_4031_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_4019_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
return v___x_4031_;
}
else
{
lean_dec_ref(v_value_4019_);
return v___x_4030_;
}
}
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec_ref(v_value_4019_);
v_a_4033_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_4020_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_4020_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
else
{
lean_object* v___x_4041_; lean_object* v___x_4043_; 
lean_dec(v_a_4013_);
v___x_4041_ = lean_box(0);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4041_);
v___x_4043_ = v___x_4015_;
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
else
{
lean_object* v_a_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4053_; 
v_a_4046_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4048_ = v___x_4012_;
v_isShared_4049_ = v_isSharedCheck_4053_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_a_4046_);
lean_dec(v___x_4012_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4053_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___x_4051_; 
if (v_isShared_4049_ == 0)
{
v___x_4051_ = v___x_4048_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v_a_4046_);
v___x_4051_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
return v___x_4051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(lean_object* v_arg_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_){
_start:
{
if (lean_obj_tag(v_arg_4054_) == 1)
{
lean_object* v_fvarId_4062_; lean_object* v___x_4063_; 
v_fvarId_4062_ = lean_ctor_get(v_arg_4054_, 0);
v___x_4063_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_fvarId_4062_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_);
return v___x_4063_;
}
else
{
lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4064_ = lean_box(0);
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
return v___x_4065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg___boxed(lean_object* v_arg_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(v_arg_4066_, v_a_4067_, v_a_4068_, v_a_4069_, v_a_4070_, v_a_4071_, v_a_4072_);
lean_dec(v_a_4072_);
lean_dec_ref(v_a_4071_);
lean_dec(v_a_4070_);
lean_dec_ref(v_a_4069_);
lean_dec(v_a_4068_);
lean_dec_ref(v_a_4067_);
lean_dec(v_arg_4066_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2___boxed(lean_object* v_as_4075_, lean_object* v_i_4076_, lean_object* v_stop_4077_, lean_object* v_b_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
size_t v_i_boxed_4086_; size_t v_stop_boxed_4087_; lean_object* v_res_4088_; 
v_i_boxed_4086_ = lean_unbox_usize(v_i_4076_);
lean_dec(v_i_4076_);
v_stop_boxed_4087_ = lean_unbox_usize(v_stop_4077_);
lean_dec(v_stop_4077_);
v_res_4088_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_as_4075_, v_i_boxed_4086_, v_stop_boxed_4087_, v_b_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v_as_4075_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall___boxed(lean_object* v_funDecl_4089_, lean_object* v_args_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_){
_start:
{
lean_object* v_res_4098_; 
v_res_4098_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_funDecl_4089_, v_args_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, v_a_4095_, v_a_4096_);
lean_dec(v_a_4096_);
lean_dec_ref(v_a_4095_);
lean_dec(v_a_4094_);
lean_dec_ref(v_a_4093_);
lean_dec(v_a_4092_);
lean_dec_ref(v_a_4091_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar___boxed(lean_object* v_var_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_){
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_var_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
lean_dec(v_a_4103_);
lean_dec_ref(v_a_4102_);
lean_dec(v_a_4101_);
lean_dec_ref(v_a_4100_);
lean_dec(v_var_4099_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8___boxed(lean_object* v_a_4108_, lean_object* v_as_4109_, lean_object* v_sz_4110_, lean_object* v_i_4111_, lean_object* v_b_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
size_t v_sz_boxed_4120_; size_t v_i_boxed_4121_; lean_object* v_res_4122_; 
v_sz_boxed_4120_ = lean_unbox_usize(v_sz_4110_);
lean_dec(v_sz_4110_);
v_i_boxed_4121_ = lean_unbox_usize(v_i_4111_);
lean_dec(v_i_4111_);
v_res_4122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(v_a_4108_, v_as_4109_, v_sz_boxed_4120_, v_i_boxed_4121_, v_b_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec_ref(v_as_4109_);
lean_dec(v_a_4108_);
return v_res_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode___boxed(lean_object* v_x_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_x_4123_, v_a_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_);
lean_dec(v_a_4129_);
lean_dec_ref(v_a_4128_);
lean_dec(v_a_4127_);
lean_dec_ref(v_a_4126_);
lean_dec(v_a_4125_);
lean_dec_ref(v_a_4124_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___boxed(lean_object* v_letVal_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v_res_4140_; 
v_res_4140_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(v_letVal_4132_, v_a_4133_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_);
lean_dec(v_a_4138_);
lean_dec_ref(v_a_4137_);
lean_dec(v_a_4136_);
lean_dec_ref(v_a_4135_);
lean_dec(v_a_4134_);
lean_dec_ref(v_a_4133_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0(lean_object* v_inst_4141_, lean_object* v_R_4142_, lean_object* v_a_4143_, lean_object* v_b_4144_){
_start:
{
lean_object* v___x_4145_; 
v___x_4145_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(v_a_4143_, v_b_4144_);
return v___x_4145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(lean_object* v_as_4146_, size_t v_i_4147_, size_t v_stop_4148_, lean_object* v_b_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v___x_4157_; 
v___x_4157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v_as_4146_, v_i_4147_, v_stop_4148_, v_b_4149_, v___y_4150_, v___y_4151_, v___y_4155_);
return v___x_4157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___boxed(lean_object* v_as_4158_, lean_object* v_i_4159_, lean_object* v_stop_4160_, lean_object* v_b_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
size_t v_i_boxed_4169_; size_t v_stop_boxed_4170_; lean_object* v_res_4171_; 
v_i_boxed_4169_ = lean_unbox_usize(v_i_4159_);
lean_dec(v_i_4159_);
v_stop_boxed_4170_ = lean_unbox_usize(v_stop_4160_);
lean_dec(v_stop_4160_);
v_res_4171_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(v_as_4158_, v_i_boxed_4169_, v_stop_boxed_4170_, v_b_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_, v___y_4167_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec_ref(v_as_4158_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(lean_object* v_as_4172_, size_t v_i_4173_, size_t v_stop_4174_, lean_object* v_b_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_){
_start:
{
lean_object* v___x_4183_; 
v___x_4183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_as_4172_, v_i_4173_, v_stop_4174_, v_b_4175_, v___y_4176_, v___y_4177_, v___y_4181_);
return v___x_4183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___boxed(lean_object* v_as_4184_, lean_object* v_i_4185_, lean_object* v_stop_4186_, lean_object* v_b_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
size_t v_i_boxed_4195_; size_t v_stop_boxed_4196_; lean_object* v_res_4197_; 
v_i_boxed_4195_ = lean_unbox_usize(v_i_4185_);
lean_dec(v_i_4185_);
v_stop_boxed_4196_ = lean_unbox_usize(v_stop_4186_);
lean_dec(v_stop_4186_);
v_res_4197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(v_as_4184_, v_i_boxed_4195_, v_stop_boxed_4196_, v_b_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
lean_dec_ref(v_as_4184_);
return v_res_4197_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; 
v___x_4198_ = lean_unsigned_to_nat(32u);
v___x_4199_ = lean_mk_empty_array_with_capacity(v___x_4198_);
v___x_4200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4200_, 0, v___x_4199_);
return v___x_4200_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4201_ = ((size_t)5ULL);
v___x_4202_ = lean_unsigned_to_nat(0u);
v___x_4203_ = lean_unsigned_to_nat(32u);
v___x_4204_ = lean_mk_empty_array_with_capacity(v___x_4203_);
v___x_4205_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0);
v___x_4206_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
lean_ctor_set(v___x_4206_, 1, v___x_4204_);
lean_ctor_set(v___x_4206_, 2, v___x_4202_);
lean_ctor_set(v___x_4206_, 3, v___x_4202_);
lean_ctor_set_usize(v___x_4206_, 4, v___x_4201_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(lean_object* v___y_4207_){
_start:
{
lean_object* v___x_4209_; lean_object* v_traceState_4210_; lean_object* v_traces_4211_; lean_object* v___x_4212_; lean_object* v_traceState_4213_; lean_object* v_env_4214_; lean_object* v_nextMacroScope_4215_; lean_object* v_ngen_4216_; lean_object* v_auxDeclNGen_4217_; lean_object* v_cache_4218_; lean_object* v_messages_4219_; lean_object* v_infoState_4220_; lean_object* v_snapshotTasks_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4240_; 
v___x_4209_ = lean_st_ref_get(v___y_4207_);
v_traceState_4210_ = lean_ctor_get(v___x_4209_, 4);
lean_inc_ref(v_traceState_4210_);
lean_dec(v___x_4209_);
v_traces_4211_ = lean_ctor_get(v_traceState_4210_, 0);
lean_inc_ref(v_traces_4211_);
lean_dec_ref(v_traceState_4210_);
v___x_4212_ = lean_st_ref_take(v___y_4207_);
v_traceState_4213_ = lean_ctor_get(v___x_4212_, 4);
v_env_4214_ = lean_ctor_get(v___x_4212_, 0);
v_nextMacroScope_4215_ = lean_ctor_get(v___x_4212_, 1);
v_ngen_4216_ = lean_ctor_get(v___x_4212_, 2);
v_auxDeclNGen_4217_ = lean_ctor_get(v___x_4212_, 3);
v_cache_4218_ = lean_ctor_get(v___x_4212_, 5);
v_messages_4219_ = lean_ctor_get(v___x_4212_, 6);
v_infoState_4220_ = lean_ctor_get(v___x_4212_, 7);
v_snapshotTasks_4221_ = lean_ctor_get(v___x_4212_, 8);
v_isSharedCheck_4240_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4240_ == 0)
{
v___x_4223_ = v___x_4212_;
v_isShared_4224_ = v_isSharedCheck_4240_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_snapshotTasks_4221_);
lean_inc(v_infoState_4220_);
lean_inc(v_messages_4219_);
lean_inc(v_cache_4218_);
lean_inc(v_traceState_4213_);
lean_inc(v_auxDeclNGen_4217_);
lean_inc(v_ngen_4216_);
lean_inc(v_nextMacroScope_4215_);
lean_inc(v_env_4214_);
lean_dec(v___x_4212_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4240_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
uint64_t v_tid_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4238_; 
v_tid_4225_ = lean_ctor_get_uint64(v_traceState_4213_, sizeof(void*)*1);
v_isSharedCheck_4238_ = !lean_is_exclusive(v_traceState_4213_);
if (v_isSharedCheck_4238_ == 0)
{
lean_object* v_unused_4239_; 
v_unused_4239_ = lean_ctor_get(v_traceState_4213_, 0);
lean_dec(v_unused_4239_);
v___x_4227_ = v_traceState_4213_;
v_isShared_4228_ = v_isSharedCheck_4238_;
goto v_resetjp_4226_;
}
else
{
lean_dec(v_traceState_4213_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4238_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4229_; lean_object* v___x_4231_; 
v___x_4229_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1);
if (v_isShared_4228_ == 0)
{
lean_ctor_set(v___x_4227_, 0, v___x_4229_);
v___x_4231_ = v___x_4227_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v___x_4229_);
lean_ctor_set_uint64(v_reuseFailAlloc_4237_, sizeof(void*)*1, v_tid_4225_);
v___x_4231_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
lean_object* v___x_4233_; 
if (v_isShared_4224_ == 0)
{
lean_ctor_set(v___x_4223_, 4, v___x_4231_);
v___x_4233_ = v___x_4223_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v_env_4214_);
lean_ctor_set(v_reuseFailAlloc_4236_, 1, v_nextMacroScope_4215_);
lean_ctor_set(v_reuseFailAlloc_4236_, 2, v_ngen_4216_);
lean_ctor_set(v_reuseFailAlloc_4236_, 3, v_auxDeclNGen_4217_);
lean_ctor_set(v_reuseFailAlloc_4236_, 4, v___x_4231_);
lean_ctor_set(v_reuseFailAlloc_4236_, 5, v_cache_4218_);
lean_ctor_set(v_reuseFailAlloc_4236_, 6, v_messages_4219_);
lean_ctor_set(v_reuseFailAlloc_4236_, 7, v_infoState_4220_);
lean_ctor_set(v_reuseFailAlloc_4236_, 8, v_snapshotTasks_4221_);
v___x_4233_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4234_ = lean_st_ref_put(v___y_4207_, v___x_4233_);
v___x_4235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4235_, 0, v_traces_4211_);
return v___x_4235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___boxed(lean_object* v___y_4241_, lean_object* v___y_4242_){
_start:
{
lean_object* v_res_4243_; 
v_res_4243_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___y_4241_);
lean_dec(v___y_4241_);
return v_res_4243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v___x_4251_; 
v___x_4251_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___y_4249_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___boxed(lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_res_4259_; 
v_res_4259_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
return v_res_4259_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(lean_object* v_opts_4260_, lean_object* v_opt_4261_){
_start:
{
lean_object* v_name_4262_; lean_object* v_defValue_4263_; lean_object* v_map_4264_; lean_object* v___x_4265_; 
v_name_4262_ = lean_ctor_get(v_opt_4261_, 0);
v_defValue_4263_ = lean_ctor_get(v_opt_4261_, 1);
v_map_4264_ = lean_ctor_get(v_opts_4260_, 0);
v___x_4265_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4264_, v_name_4262_);
if (lean_obj_tag(v___x_4265_) == 0)
{
uint8_t v___x_4266_; 
v___x_4266_ = lean_unbox(v_defValue_4263_);
return v___x_4266_;
}
else
{
lean_object* v_val_4267_; 
v_val_4267_ = lean_ctor_get(v___x_4265_, 0);
lean_inc(v_val_4267_);
lean_dec_ref_known(v___x_4265_, 1);
if (lean_obj_tag(v_val_4267_) == 1)
{
uint8_t v_v_4268_; 
v_v_4268_ = lean_ctor_get_uint8(v_val_4267_, 0);
lean_dec_ref_known(v_val_4267_, 0);
return v_v_4268_;
}
else
{
uint8_t v___x_4269_; 
lean_dec(v_val_4267_);
v___x_4269_ = lean_unbox(v_defValue_4263_);
return v___x_4269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___boxed(lean_object* v_opts_4270_, lean_object* v_opt_4271_){
_start:
{
uint8_t v_res_4272_; lean_object* v_r_4273_; 
v_res_4272_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_opts_4270_, v_opt_4271_);
lean_dec_ref(v_opt_4271_);
lean_dec_ref(v_opts_4270_);
v_r_4273_ = lean_box(v_res_4272_);
return v_r_4273_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; 
v___x_4275_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0));
v___x_4276_ = l_Lean_stringToMessageData(v___x_4275_);
return v___x_4276_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0(lean_object* v_name_4277_, lean_object* v_x_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; 
v___x_4286_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1);
v___x_4287_ = l_Lean_MessageData_ofName(v_name_4277_);
v___x_4288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4288_, 0, v___x_4286_);
lean_ctor_set(v___x_4288_, 1, v___x_4287_);
v___x_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4289_, 0, v___x_4288_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___boxed(lean_object* v_name_4290_, lean_object* v_x_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_){
_start:
{
lean_object* v_res_4299_; 
v_res_4299_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0(v_name_4290_, v_x_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_);
lean_dec(v___y_4297_);
lean_dec_ref(v___y_4296_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
lean_dec(v___y_4293_);
lean_dec_ref(v___y_4292_);
lean_dec_ref(v_x_4291_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(lean_object* v_opts_4300_, lean_object* v_opt_4301_){
_start:
{
lean_object* v_name_4302_; lean_object* v_defValue_4303_; lean_object* v_map_4304_; lean_object* v___x_4305_; 
v_name_4302_ = lean_ctor_get(v_opt_4301_, 0);
v_defValue_4303_ = lean_ctor_get(v_opt_4301_, 1);
v_map_4304_ = lean_ctor_get(v_opts_4300_, 0);
v___x_4305_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4304_, v_name_4302_);
if (lean_obj_tag(v___x_4305_) == 0)
{
lean_inc(v_defValue_4303_);
return v_defValue_4303_;
}
else
{
lean_object* v_val_4306_; 
v_val_4306_ = lean_ctor_get(v___x_4305_, 0);
lean_inc(v_val_4306_);
lean_dec_ref_known(v___x_4305_, 1);
if (lean_obj_tag(v_val_4306_) == 3)
{
lean_object* v_v_4307_; 
v_v_4307_ = lean_ctor_get(v_val_4306_, 0);
lean_inc(v_v_4307_);
lean_dec_ref_known(v_val_4306_, 1);
return v_v_4307_;
}
else
{
lean_dec(v_val_4306_);
lean_inc(v_defValue_4303_);
return v_defValue_4303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5___boxed(lean_object* v_opts_4308_, lean_object* v_opt_4309_){
_start:
{
lean_object* v_res_4310_; 
v_res_4310_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(v_opts_4308_, v_opt_4309_);
lean_dec_ref(v_opt_4309_);
lean_dec_ref(v_opts_4308_);
return v_res_4310_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(lean_object* v_e_4311_){
_start:
{
if (lean_obj_tag(v_e_4311_) == 0)
{
uint8_t v___x_4312_; 
v___x_4312_ = 2;
return v___x_4312_;
}
else
{
uint8_t v___x_4313_; 
v___x_4313_ = 0;
return v___x_4313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4___boxed(lean_object* v_e_4314_){
_start:
{
uint8_t v_res_4315_; lean_object* v_r_4316_; 
v_res_4315_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(v_e_4314_);
lean_dec_ref(v_e_4314_);
v_r_4316_ = lean_box(v_res_4315_);
return v_r_4316_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(lean_object* v_x_4317_){
_start:
{
if (lean_obj_tag(v_x_4317_) == 0)
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4326_; 
v_a_4319_ = lean_ctor_get(v_x_4317_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v_x_4317_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4321_ = v_x_4317_;
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v_x_4317_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4324_; 
if (v_isShared_4322_ == 0)
{
lean_ctor_set_tag(v___x_4321_, 1);
v___x_4324_ = v___x_4321_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_a_4319_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
else
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4334_; 
v_a_4327_ = lean_ctor_get(v_x_4317_, 0);
v_isSharedCheck_4334_ = !lean_is_exclusive(v_x_4317_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4329_ = v_x_4317_;
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v_x_4317_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
lean_ctor_set_tag(v___x_4329_, 0);
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
return v___x_4332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg___boxed(lean_object* v_x_4335_, lean_object* v___y_4336_){
_start:
{
lean_object* v_res_4337_; 
v_res_4337_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_x_4335_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(size_t v_sz_4338_, size_t v_i_4339_, lean_object* v_bs_4340_){
_start:
{
uint8_t v___x_4341_; 
v___x_4341_ = lean_usize_dec_lt(v_i_4339_, v_sz_4338_);
if (v___x_4341_ == 0)
{
lean_object* v___x_4342_; 
v___x_4342_ = l_unsafeCast___redArg(v_bs_4340_);
lean_dec_ref(v_bs_4340_);
return v___x_4342_;
}
else
{
lean_object* v_v_4343_; lean_object* v___x_4344_; lean_object* v_msg_4345_; lean_object* v___x_4346_; lean_object* v_bs_x27_4347_; size_t v___x_4348_; size_t v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v_v_4343_ = lean_array_uget_borrowed(v_bs_4340_, v_i_4339_);
v___x_4344_ = l_unsafeCast___redArg(v_v_4343_);
v_msg_4345_ = lean_ctor_get(v___x_4344_, 1);
lean_inc_ref(v_msg_4345_);
lean_dec(v___x_4344_);
v___x_4346_ = lean_unsigned_to_nat(0u);
v_bs_x27_4347_ = lean_array_uset(v_bs_4340_, v_i_4339_, v___x_4346_);
v___x_4348_ = ((size_t)1ULL);
v___x_4349_ = lean_usize_add(v_i_4339_, v___x_4348_);
v___x_4350_ = l_unsafeCast___redArg(v_msg_4345_);
lean_dec_ref(v_msg_4345_);
v___x_4351_ = lean_array_uset(v_bs_x27_4347_, v_i_4339_, v___x_4350_);
v_i_4339_ = v___x_4349_;
v_bs_4340_ = v___x_4351_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_4353_, lean_object* v_i_4354_, lean_object* v_bs_4355_){
_start:
{
size_t v_sz_boxed_4356_; size_t v_i_boxed_4357_; lean_object* v_res_4358_; 
v_sz_boxed_4356_ = lean_unbox_usize(v_sz_4353_);
lean_dec(v_sz_4353_);
v_i_boxed_4357_ = lean_unbox_usize(v_i_4354_);
lean_dec(v_i_4354_);
v_res_4358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(v_sz_boxed_4356_, v_i_boxed_4357_, v_bs_4355_);
return v_res_4358_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4359_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
return v___x_4360_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4361_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0);
v___x_4362_ = lean_unsigned_to_nat(0u);
v___x_4363_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4362_);
lean_ctor_set(v___x_4363_, 1, v___x_4362_);
lean_ctor_set(v___x_4363_, 2, v___x_4362_);
lean_ctor_set(v___x_4363_, 3, v___x_4362_);
lean_ctor_set(v___x_4363_, 4, v___x_4361_);
lean_ctor_set(v___x_4363_, 5, v___x_4361_);
lean_ctor_set(v___x_4363_, 6, v___x_4361_);
lean_ctor_set(v___x_4363_, 7, v___x_4361_);
lean_ctor_set(v___x_4363_, 8, v___x_4361_);
lean_ctor_set(v___x_4363_, 9, v___x_4361_);
lean_ctor_set(v___x_4363_, 10, v___x_4361_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(lean_object* v_oldTraces_4364_, lean_object* v_data_4365_, lean_object* v_ref_4366_, lean_object* v_msg_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_){
_start:
{
lean_object* v_toCold_4373_; lean_object* v___x_4374_; lean_object* v_traceState_4375_; lean_object* v_traces_4376_; lean_object* v___x_4377_; size_t v_sz_4378_; size_t v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v_msg_4383_; lean_object* v___x_4384_; lean_object* v_env_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; 
v_toCold_4373_ = lean_ctor_get(v___y_4370_, 0);
v___x_4374_ = lean_st_ref_get(v___y_4371_);
v_traceState_4375_ = lean_ctor_get(v___x_4374_, 4);
lean_inc_ref(v_traceState_4375_);
lean_dec(v___x_4374_);
v_traces_4376_ = lean_ctor_get(v_traceState_4375_, 0);
lean_inc_ref(v_traces_4376_);
lean_dec_ref(v_traceState_4375_);
v___x_4377_ = l_Lean_PersistentArray_toArray___redArg(v_traces_4376_);
lean_dec_ref(v_traces_4376_);
v_sz_4378_ = lean_array_size(v___x_4377_);
v___x_4379_ = ((size_t)0ULL);
v___x_4380_ = l_unsafeCast___redArg(v___x_4377_);
lean_dec_ref(v___x_4377_);
v___x_4381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(v_sz_4378_, v___x_4379_, v___x_4380_);
v___x_4382_ = l_unsafeCast___redArg(v___x_4381_);
lean_dec_ref(v___x_4381_);
v_msg_4383_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_4383_, 0, v_data_4365_);
lean_ctor_set(v_msg_4383_, 1, v_msg_4367_);
lean_ctor_set(v_msg_4383_, 2, v___x_4382_);
v___x_4384_ = lean_st_ref_get(v___y_4371_);
v_env_4385_ = lean_ctor_get(v___x_4384_, 0);
lean_inc_ref(v_env_4385_);
lean_dec(v___x_4384_);
v___x_4386_ = lean_st_ref_get(v___y_4369_);
v___x_4387_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_4368_);
if (lean_obj_tag(v___x_4387_) == 0)
{
lean_object* v_a_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4439_; 
v_a_4388_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4390_ = v___x_4387_;
v_isShared_4391_ = v_isSharedCheck_4439_;
goto v_resetjp_4389_;
}
else
{
lean_inc(v_a_4388_);
lean_dec(v___x_4387_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4439_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v_lctx_4392_; lean_object* v___x_4394_; uint8_t v_isShared_4395_; uint8_t v_isSharedCheck_4437_; 
v_lctx_4392_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4437_ == 0)
{
lean_object* v_unused_4438_; 
v_unused_4438_ = lean_ctor_get(v___x_4386_, 1);
lean_dec(v_unused_4438_);
v___x_4394_ = v___x_4386_;
v_isShared_4395_ = v_isSharedCheck_4437_;
goto v_resetjp_4393_;
}
else
{
lean_inc(v_lctx_4392_);
lean_dec(v___x_4386_);
v___x_4394_ = lean_box(0);
v_isShared_4395_ = v_isSharedCheck_4437_;
goto v_resetjp_4393_;
}
v_resetjp_4393_:
{
lean_object* v_options_4396_; uint8_t v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4402_; 
v_options_4396_ = lean_ctor_get(v_toCold_4373_, 2);
v___x_4397_ = lean_unbox(v_a_4388_);
lean_dec(v_a_4388_);
v___x_4398_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_4392_, v___x_4397_);
lean_dec_ref(v_lctx_4392_);
v___x_4399_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1);
lean_inc_ref(v_options_4396_);
v___x_4400_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4400_, 0, v_env_4385_);
lean_ctor_set(v___x_4400_, 1, v___x_4399_);
lean_ctor_set(v___x_4400_, 2, v___x_4398_);
lean_ctor_set(v___x_4400_, 3, v_options_4396_);
if (v_isShared_4395_ == 0)
{
lean_ctor_set_tag(v___x_4394_, 3);
lean_ctor_set(v___x_4394_, 1, v_msg_4383_);
lean_ctor_set(v___x_4394_, 0, v___x_4400_);
v___x_4402_ = v___x_4394_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v___x_4400_);
lean_ctor_set(v_reuseFailAlloc_4436_, 1, v_msg_4383_);
v___x_4402_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
lean_object* v___x_4403_; lean_object* v_traceState_4404_; lean_object* v_env_4405_; lean_object* v_nextMacroScope_4406_; lean_object* v_ngen_4407_; lean_object* v_auxDeclNGen_4408_; lean_object* v_cache_4409_; lean_object* v_messages_4410_; lean_object* v_infoState_4411_; lean_object* v_snapshotTasks_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4435_; 
v___x_4403_ = lean_st_ref_take(v___y_4371_);
v_traceState_4404_ = lean_ctor_get(v___x_4403_, 4);
v_env_4405_ = lean_ctor_get(v___x_4403_, 0);
v_nextMacroScope_4406_ = lean_ctor_get(v___x_4403_, 1);
v_ngen_4407_ = lean_ctor_get(v___x_4403_, 2);
v_auxDeclNGen_4408_ = lean_ctor_get(v___x_4403_, 3);
v_cache_4409_ = lean_ctor_get(v___x_4403_, 5);
v_messages_4410_ = lean_ctor_get(v___x_4403_, 6);
v_infoState_4411_ = lean_ctor_get(v___x_4403_, 7);
v_snapshotTasks_4412_ = lean_ctor_get(v___x_4403_, 8);
v_isSharedCheck_4435_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4414_ = v___x_4403_;
v_isShared_4415_ = v_isSharedCheck_4435_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_snapshotTasks_4412_);
lean_inc(v_infoState_4411_);
lean_inc(v_messages_4410_);
lean_inc(v_cache_4409_);
lean_inc(v_traceState_4404_);
lean_inc(v_auxDeclNGen_4408_);
lean_inc(v_ngen_4407_);
lean_inc(v_nextMacroScope_4406_);
lean_inc(v_env_4405_);
lean_dec(v___x_4403_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4435_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
uint64_t v_tid_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4433_; 
v_tid_4416_ = lean_ctor_get_uint64(v_traceState_4404_, sizeof(void*)*1);
v_isSharedCheck_4433_ = !lean_is_exclusive(v_traceState_4404_);
if (v_isSharedCheck_4433_ == 0)
{
lean_object* v_unused_4434_; 
v_unused_4434_ = lean_ctor_get(v_traceState_4404_, 0);
lean_dec(v_unused_4434_);
v___x_4418_ = v_traceState_4404_;
v_isShared_4419_ = v_isSharedCheck_4433_;
goto v_resetjp_4417_;
}
else
{
lean_dec(v_traceState_4404_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4433_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4424_; 
v___x_4420_ = lean_box(0);
v___x_4421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4421_, 0, v_ref_4366_);
lean_ctor_set(v___x_4421_, 1, v___x_4402_);
v___x_4422_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_4364_, v___x_4421_);
if (v_isShared_4419_ == 0)
{
lean_ctor_set(v___x_4418_, 0, v___x_4422_);
v___x_4424_ = v___x_4418_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v___x_4422_);
lean_ctor_set_uint64(v_reuseFailAlloc_4432_, sizeof(void*)*1, v_tid_4416_);
v___x_4424_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
lean_object* v___x_4426_; 
if (v_isShared_4415_ == 0)
{
lean_ctor_set(v___x_4414_, 4, v___x_4424_);
v___x_4426_ = v___x_4414_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_env_4405_);
lean_ctor_set(v_reuseFailAlloc_4431_, 1, v_nextMacroScope_4406_);
lean_ctor_set(v_reuseFailAlloc_4431_, 2, v_ngen_4407_);
lean_ctor_set(v_reuseFailAlloc_4431_, 3, v_auxDeclNGen_4408_);
lean_ctor_set(v_reuseFailAlloc_4431_, 4, v___x_4424_);
lean_ctor_set(v_reuseFailAlloc_4431_, 5, v_cache_4409_);
lean_ctor_set(v_reuseFailAlloc_4431_, 6, v_messages_4410_);
lean_ctor_set(v_reuseFailAlloc_4431_, 7, v_infoState_4411_);
lean_ctor_set(v_reuseFailAlloc_4431_, 8, v_snapshotTasks_4412_);
v___x_4426_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
lean_object* v___x_4427_; lean_object* v___x_4429_; 
v___x_4427_ = lean_st_ref_put(v___y_4371_, v___x_4426_);
if (v_isShared_4391_ == 0)
{
lean_ctor_set(v___x_4390_, 0, v___x_4420_);
v___x_4429_ = v___x_4390_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v___x_4420_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
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
lean_object* v_a_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4447_; 
lean_dec(v___x_4386_);
lean_dec_ref(v_env_4385_);
lean_dec_ref_known(v_msg_4383_, 3);
lean_dec(v_ref_4366_);
lean_dec_ref(v_oldTraces_4364_);
v_a_4440_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4447_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4442_ = v___x_4387_;
v_isShared_4443_ = v_isSharedCheck_4447_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_a_4440_);
lean_dec(v___x_4387_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4447_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4445_; 
if (v_isShared_4443_ == 0)
{
v___x_4445_ = v___x_4442_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v_a_4440_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___boxed(lean_object* v_oldTraces_4448_, lean_object* v_data_4449_, lean_object* v_ref_4450_, lean_object* v_msg_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(v_oldTraces_4448_, v_data_4449_, v_ref_4450_, v_msg_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_);
lean_dec(v___y_4455_);
lean_dec_ref(v___y_4454_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
return v_res_4457_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0(void){
_start:
{
lean_object* v___x_4458_; double v___x_4459_; 
v___x_4458_ = lean_unsigned_to_nat(0u);
v___x_4459_ = lean_float_of_nat(v___x_4458_);
return v___x_4459_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2(void){
_start:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; 
v___x_4461_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1));
v___x_4462_ = l_Lean_stringToMessageData(v___x_4461_);
return v___x_4462_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3(void){
_start:
{
lean_object* v___x_4463_; double v___x_4464_; 
v___x_4463_ = lean_unsigned_to_nat(1000u);
v___x_4464_ = lean_float_of_nat(v___x_4463_);
return v___x_4464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(lean_object* v_cls_4465_, uint8_t v_collapsed_4466_, lean_object* v_tag_4467_, lean_object* v_opts_4468_, uint8_t v_clsEnabled_4469_, lean_object* v_oldTraces_4470_, lean_object* v_msg_4471_, lean_object* v_resStartStop_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_){
_start:
{
lean_object* v_fst_4480_; lean_object* v_snd_4481_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v_data_4485_; lean_object* v_fst_4488_; lean_object* v_snd_4489_; lean_object* v___x_4490_; uint8_t v___x_4491_; lean_object* v___y_4493_; lean_object* v_a_4494_; uint8_t v___y_4509_; double v___y_4540_; 
v_fst_4480_ = lean_ctor_get(v_resStartStop_4472_, 0);
lean_inc(v_fst_4480_);
v_snd_4481_ = lean_ctor_get(v_resStartStop_4472_, 1);
lean_inc(v_snd_4481_);
lean_dec_ref(v_resStartStop_4472_);
v_fst_4488_ = lean_ctor_get(v_snd_4481_, 0);
lean_inc(v_fst_4488_);
v_snd_4489_ = lean_ctor_get(v_snd_4481_, 1);
lean_inc(v_snd_4489_);
lean_dec(v_snd_4481_);
v___x_4490_ = l_Lean_trace_profiler;
v___x_4491_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_opts_4468_, v___x_4490_);
if (v___x_4491_ == 0)
{
v___y_4509_ = v___x_4491_;
goto v___jp_4508_;
}
else
{
lean_object* v___x_4545_; uint8_t v___x_4546_; 
v___x_4545_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4546_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_opts_4468_, v___x_4545_);
if (v___x_4546_ == 0)
{
lean_object* v___x_4547_; lean_object* v___x_4548_; double v___x_4549_; double v___x_4550_; double v___x_4551_; 
v___x_4547_ = l_Lean_trace_profiler_threshold;
v___x_4548_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(v_opts_4468_, v___x_4547_);
v___x_4549_ = lean_float_of_nat(v___x_4548_);
v___x_4550_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3);
v___x_4551_ = lean_float_div(v___x_4549_, v___x_4550_);
v___y_4540_ = v___x_4551_;
goto v___jp_4539_;
}
else
{
lean_object* v___x_4552_; lean_object* v___x_4553_; double v___x_4554_; 
v___x_4552_ = l_Lean_trace_profiler_threshold;
v___x_4553_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(v_opts_4468_, v___x_4552_);
v___x_4554_ = lean_float_of_nat(v___x_4553_);
v___y_4540_ = v___x_4554_;
goto v___jp_4539_;
}
}
v___jp_4482_:
{
lean_object* v___x_4486_; 
lean_inc(v___y_4484_);
v___x_4486_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(v_oldTraces_4470_, v_data_4485_, v___y_4484_, v___y_4483_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_object* v___x_4487_; 
lean_dec_ref_known(v___x_4486_, 1);
v___x_4487_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_fst_4480_);
return v___x_4487_;
}
else
{
lean_dec(v_fst_4480_);
return v___x_4486_;
}
}
v___jp_4492_:
{
uint8_t v_result_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; double v___x_4498_; lean_object* v_data_4499_; 
v_result_4495_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(v_fst_4480_);
v___x_4496_ = lean_box(v_result_4495_);
v___x_4497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4497_, 0, v___x_4496_);
v___x_4498_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0);
lean_inc_ref(v_tag_4467_);
lean_inc_ref(v___x_4497_);
lean_inc(v_cls_4465_);
v_data_4499_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4499_, 0, v_cls_4465_);
lean_ctor_set(v_data_4499_, 1, v___x_4497_);
lean_ctor_set(v_data_4499_, 2, v_tag_4467_);
lean_ctor_set_float(v_data_4499_, sizeof(void*)*3, v___x_4498_);
lean_ctor_set_float(v_data_4499_, sizeof(void*)*3 + 8, v___x_4498_);
lean_ctor_set_uint8(v_data_4499_, sizeof(void*)*3 + 16, v_collapsed_4466_);
if (v___x_4491_ == 0)
{
lean_dec_ref_known(v___x_4497_, 1);
lean_dec(v_snd_4489_);
lean_dec(v_fst_4488_);
lean_dec_ref(v_tag_4467_);
lean_dec(v_cls_4465_);
v___y_4483_ = v_a_4494_;
v___y_4484_ = v___y_4493_;
v_data_4485_ = v_data_4499_;
goto v___jp_4482_;
}
else
{
lean_object* v_data_4500_; double v___x_4501_; double v___x_4502_; 
lean_dec_ref_known(v_data_4499_, 3);
v_data_4500_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4500_, 0, v_cls_4465_);
lean_ctor_set(v_data_4500_, 1, v___x_4497_);
lean_ctor_set(v_data_4500_, 2, v_tag_4467_);
v___x_4501_ = lean_unbox_float(v_fst_4488_);
lean_dec(v_fst_4488_);
lean_ctor_set_float(v_data_4500_, sizeof(void*)*3, v___x_4501_);
v___x_4502_ = lean_unbox_float(v_snd_4489_);
lean_dec(v_snd_4489_);
lean_ctor_set_float(v_data_4500_, sizeof(void*)*3 + 8, v___x_4502_);
lean_ctor_set_uint8(v_data_4500_, sizeof(void*)*3 + 16, v_collapsed_4466_);
v___y_4483_ = v_a_4494_;
v___y_4484_ = v___y_4493_;
v_data_4485_ = v_data_4500_;
goto v___jp_4482_;
}
}
v___jp_4503_:
{
lean_object* v_ref_4504_; lean_object* v___x_4505_; 
v_ref_4504_ = lean_ctor_get(v___y_4477_, 2);
lean_inc(v___y_4478_);
lean_inc_ref(v___y_4477_);
lean_inc(v___y_4476_);
lean_inc_ref(v___y_4475_);
lean_inc(v___y_4474_);
lean_inc_ref(v___y_4473_);
lean_inc(v_fst_4480_);
v___x_4505_ = lean_apply_8(v_msg_4471_, v_fst_4480_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_, lean_box(0));
if (lean_obj_tag(v___x_4505_) == 0)
{
lean_object* v_a_4506_; 
v_a_4506_ = lean_ctor_get(v___x_4505_, 0);
lean_inc(v_a_4506_);
lean_dec_ref_known(v___x_4505_, 1);
v___y_4493_ = v_ref_4504_;
v_a_4494_ = v_a_4506_;
goto v___jp_4492_;
}
else
{
lean_object* v___x_4507_; 
lean_dec_ref_known(v___x_4505_, 1);
v___x_4507_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2);
v___y_4493_ = v_ref_4504_;
v_a_4494_ = v___x_4507_;
goto v___jp_4492_;
}
}
v___jp_4508_:
{
if (v_clsEnabled_4469_ == 0)
{
if (v___y_4509_ == 0)
{
lean_object* v___x_4510_; lean_object* v_traceState_4511_; lean_object* v_env_4512_; lean_object* v_nextMacroScope_4513_; lean_object* v_ngen_4514_; lean_object* v_auxDeclNGen_4515_; lean_object* v_cache_4516_; lean_object* v_messages_4517_; lean_object* v_infoState_4518_; lean_object* v_snapshotTasks_4519_; lean_object* v___x_4521_; uint8_t v_isShared_4522_; uint8_t v_isSharedCheck_4538_; 
lean_dec(v_snd_4489_);
lean_dec(v_fst_4488_);
lean_dec_ref(v_msg_4471_);
lean_dec_ref(v_tag_4467_);
lean_dec(v_cls_4465_);
v___x_4510_ = lean_st_ref_take(v___y_4478_);
v_traceState_4511_ = lean_ctor_get(v___x_4510_, 4);
v_env_4512_ = lean_ctor_get(v___x_4510_, 0);
v_nextMacroScope_4513_ = lean_ctor_get(v___x_4510_, 1);
v_ngen_4514_ = lean_ctor_get(v___x_4510_, 2);
v_auxDeclNGen_4515_ = lean_ctor_get(v___x_4510_, 3);
v_cache_4516_ = lean_ctor_get(v___x_4510_, 5);
v_messages_4517_ = lean_ctor_get(v___x_4510_, 6);
v_infoState_4518_ = lean_ctor_get(v___x_4510_, 7);
v_snapshotTasks_4519_ = lean_ctor_get(v___x_4510_, 8);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4510_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4521_ = v___x_4510_;
v_isShared_4522_ = v_isSharedCheck_4538_;
goto v_resetjp_4520_;
}
else
{
lean_inc(v_snapshotTasks_4519_);
lean_inc(v_infoState_4518_);
lean_inc(v_messages_4517_);
lean_inc(v_cache_4516_);
lean_inc(v_traceState_4511_);
lean_inc(v_auxDeclNGen_4515_);
lean_inc(v_ngen_4514_);
lean_inc(v_nextMacroScope_4513_);
lean_inc(v_env_4512_);
lean_dec(v___x_4510_);
v___x_4521_ = lean_box(0);
v_isShared_4522_ = v_isSharedCheck_4538_;
goto v_resetjp_4520_;
}
v_resetjp_4520_:
{
uint64_t v_tid_4523_; lean_object* v_traces_4524_; lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4537_; 
v_tid_4523_ = lean_ctor_get_uint64(v_traceState_4511_, sizeof(void*)*1);
v_traces_4524_ = lean_ctor_get(v_traceState_4511_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_traceState_4511_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4526_ = v_traceState_4511_;
v_isShared_4527_ = v_isSharedCheck_4537_;
goto v_resetjp_4525_;
}
else
{
lean_inc(v_traces_4524_);
lean_dec(v_traceState_4511_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4537_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4528_; lean_object* v___x_4530_; 
v___x_4528_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_4470_, v_traces_4524_);
lean_dec_ref(v_traces_4524_);
if (v_isShared_4527_ == 0)
{
lean_ctor_set(v___x_4526_, 0, v___x_4528_);
v___x_4530_ = v___x_4526_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v___x_4528_);
lean_ctor_set_uint64(v_reuseFailAlloc_4536_, sizeof(void*)*1, v_tid_4523_);
v___x_4530_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
lean_object* v___x_4532_; 
if (v_isShared_4522_ == 0)
{
lean_ctor_set(v___x_4521_, 4, v___x_4530_);
v___x_4532_ = v___x_4521_;
goto v_reusejp_4531_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v_env_4512_);
lean_ctor_set(v_reuseFailAlloc_4535_, 1, v_nextMacroScope_4513_);
lean_ctor_set(v_reuseFailAlloc_4535_, 2, v_ngen_4514_);
lean_ctor_set(v_reuseFailAlloc_4535_, 3, v_auxDeclNGen_4515_);
lean_ctor_set(v_reuseFailAlloc_4535_, 4, v___x_4530_);
lean_ctor_set(v_reuseFailAlloc_4535_, 5, v_cache_4516_);
lean_ctor_set(v_reuseFailAlloc_4535_, 6, v_messages_4517_);
lean_ctor_set(v_reuseFailAlloc_4535_, 7, v_infoState_4518_);
lean_ctor_set(v_reuseFailAlloc_4535_, 8, v_snapshotTasks_4519_);
v___x_4532_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4531_;
}
v_reusejp_4531_:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4533_ = lean_st_ref_put(v___y_4478_, v___x_4532_);
v___x_4534_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_fst_4480_);
return v___x_4534_;
}
}
}
}
}
else
{
goto v___jp_4503_;
}
}
else
{
goto v___jp_4503_;
}
}
v___jp_4539_:
{
double v___x_4541_; double v___x_4542_; double v___x_4543_; uint8_t v___x_4544_; 
v___x_4541_ = lean_unbox_float(v_snd_4489_);
v___x_4542_ = lean_unbox_float(v_fst_4488_);
v___x_4543_ = lean_float_sub(v___x_4541_, v___x_4542_);
v___x_4544_ = lean_float_decLt(v___y_4540_, v___x_4543_);
v___y_4509_ = v___x_4544_;
goto v___jp_4508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___boxed(lean_object* v_cls_4555_, lean_object* v_collapsed_4556_, lean_object* v_tag_4557_, lean_object* v_opts_4558_, lean_object* v_clsEnabled_4559_, lean_object* v_oldTraces_4560_, lean_object* v_msg_4561_, lean_object* v_resStartStop_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_){
_start:
{
uint8_t v_collapsed_boxed_4570_; uint8_t v_clsEnabled_boxed_4571_; lean_object* v_res_4572_; 
v_collapsed_boxed_4570_ = lean_unbox(v_collapsed_4556_);
v_clsEnabled_boxed_4571_ = lean_unbox(v_clsEnabled_4559_);
v_res_4572_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_cls_4555_, v_collapsed_boxed_4570_, v_tag_4557_, v_opts_4558_, v_clsEnabled_boxed_4571_, v_oldTraces_4560_, v_msg_4561_, v_resStartStop_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_);
lean_dec(v___y_4568_);
lean_dec_ref(v___y_4567_);
lean_dec(v___y_4566_);
lean_dec_ref(v___y_4565_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
lean_dec_ref(v_opts_4558_);
return v_res_4572_;
}
}
static double _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_4576_; double v___x_4577_; 
v___x_4576_ = lean_unsigned_to_nat(1000000000u);
v___x_4577_ = lean_float_of_nat(v___x_4576_);
return v___x_4577_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4586_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_4587_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6));
v___x_4588_ = l_Lean_Name_append(v___x_4587_, v___x_4586_);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(lean_object* v_upperBound_4589_, lean_object* v___x_4590_, lean_object* v_a_4591_, lean_object* v_b_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_){
_start:
{
lean_object* v_a_4601_; uint8_t v___x_4605_; 
v___x_4605_ = lean_nat_dec_lt(v_a_4591_, v_upperBound_4589_);
if (v___x_4605_ == 0)
{
lean_object* v___x_4606_; 
lean_dec(v_a_4591_);
v___x_4606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4606_, 0, v_b_4592_);
return v___x_4606_;
}
else
{
lean_object* v___x_4607_; lean_object* v_toSignature_4608_; lean_object* v_value_4609_; lean_object* v_name_4610_; lean_object* v_params_4611_; uint8_t v_safe_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
lean_dec_ref(v_b_4592_);
v___x_4607_ = lean_array_fget_borrowed(v___x_4590_, v_a_4591_);
v_toSignature_4608_ = lean_ctor_get(v___x_4607_, 0);
v_value_4609_ = lean_ctor_get(v___x_4607_, 1);
v_name_4610_ = lean_ctor_get(v_toSignature_4608_, 0);
v_params_4611_ = lean_ctor_get(v_toSignature_4608_, 3);
v_safe_4612_ = lean_ctor_get_uint8(v_toSignature_4608_, sizeof(void*)*4);
v___x_4613_ = lean_box(0);
v___x_4614_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0));
if (v_safe_4612_ == 0)
{
v_a_4601_ = v___x_4614_;
goto v___jp_4600_;
}
else
{
lean_object* v___f_4615_; lean_object* v___x_4616_; 
lean_inc(v_name_4610_);
v___f_4615_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4615_, 0, v_name_4610_);
v___x_4616_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_a_4591_, v___y_4594_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_object* v_a_4617_; lean_object* v___y_4619_; lean_object* v_decls_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___y_4654_; lean_object* v___y_4655_; uint8_t v___y_4656_; lean_object* v___y_4657_; lean_object* v___y_4658_; lean_object* v___y_4659_; lean_object* v_a_4660_; lean_object* v___y_4673_; lean_object* v___y_4674_; uint8_t v___y_4675_; lean_object* v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v_a_4679_; lean_object* v___y_4689_; uint8_t v___y_4690_; lean_object* v___y_4691_; lean_object* v___y_4692_; lean_object* v___y_4693_; lean_object* v___y_4760_; uint8_t v___x_4769_; 
v_a_4617_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_a_4617_);
lean_dec_ref_known(v___x_4616_, 1);
v_decls_4649_ = lean_ctor_get(v___y_4593_, 0);
v___x_4650_ = lean_unsigned_to_nat(0u);
v___x_4651_ = lean_array_get_size(v_params_4611_);
lean_inc(v_a_4591_);
lean_inc_ref(v_decls_4649_);
v___x_4652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4652_, 0, v_decls_4649_);
lean_ctor_set(v___x_4652_, 1, v_a_4591_);
v___x_4769_ = lean_nat_dec_lt(v___x_4650_, v___x_4651_);
if (v___x_4769_ == 0)
{
goto v___jp_4742_;
}
else
{
uint8_t v___x_4770_; 
v___x_4770_ = lean_nat_dec_le(v___x_4651_, v___x_4651_);
if (v___x_4770_ == 0)
{
if (v___x_4769_ == 0)
{
goto v___jp_4742_;
}
else
{
size_t v___x_4771_; size_t v___x_4772_; lean_object* v___x_4773_; 
v___x_4771_ = ((size_t)0ULL);
v___x_4772_ = lean_usize_of_nat(v___x_4651_);
v___x_4773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_4611_, v___x_4771_, v___x_4772_, v___x_4613_, v___x_4652_, v___y_4594_, v___y_4598_);
v___y_4760_ = v___x_4773_;
goto v___jp_4759_;
}
}
else
{
size_t v___x_4774_; size_t v___x_4775_; lean_object* v___x_4776_; 
v___x_4774_ = ((size_t)0ULL);
v___x_4775_ = lean_usize_of_nat(v___x_4651_);
v___x_4776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_4611_, v___x_4774_, v___x_4775_, v___x_4613_, v___x_4652_, v___y_4594_, v___y_4598_);
v___y_4760_ = v___x_4776_;
goto v___jp_4759_;
}
}
v___jp_4618_:
{
if (lean_obj_tag(v___y_4619_) == 0)
{
lean_object* v___x_4620_; 
lean_dec_ref_known(v___y_4619_, 1);
v___x_4620_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_a_4591_, v___y_4594_);
if (lean_obj_tag(v___x_4620_) == 0)
{
lean_object* v_a_4621_; lean_object* v___x_4623_; uint8_t v_isShared_4624_; uint8_t v_isSharedCheck_4632_; 
v_a_4621_ = lean_ctor_get(v___x_4620_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4623_ = v___x_4620_;
v_isShared_4624_ = v_isSharedCheck_4632_;
goto v_resetjp_4622_;
}
else
{
lean_inc(v_a_4621_);
lean_dec(v___x_4620_);
v___x_4623_ = lean_box(0);
v_isShared_4624_ = v_isSharedCheck_4632_;
goto v_resetjp_4622_;
}
v_resetjp_4622_:
{
uint8_t v___x_4625_; 
v___x_4625_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_4617_, v_a_4621_);
lean_dec(v_a_4621_);
lean_dec(v_a_4617_);
if (v___x_4625_ == 0)
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4630_; 
lean_dec(v_a_4591_);
v___x_4626_ = lean_box(v___x_4605_);
v___x_4627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4627_, 0, v___x_4626_);
v___x_4628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4627_);
lean_ctor_set(v___x_4628_, 1, v___x_4613_);
if (v_isShared_4624_ == 0)
{
lean_ctor_set(v___x_4623_, 0, v___x_4628_);
v___x_4630_ = v___x_4623_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v___x_4628_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
else
{
lean_del_object(v___x_4623_);
v_a_4601_ = v___x_4614_;
goto v___jp_4600_;
}
}
}
else
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
lean_dec(v_a_4617_);
lean_dec(v_a_4591_);
v_a_4633_ = lean_ctor_get(v___x_4620_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4635_ = v___x_4620_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4620_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4633_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
return v___x_4638_;
}
}
}
}
else
{
lean_object* v_a_4641_; lean_object* v___x_4643_; uint8_t v_isShared_4644_; uint8_t v_isSharedCheck_4648_; 
lean_dec(v_a_4617_);
lean_dec(v_a_4591_);
v_a_4641_ = lean_ctor_get(v___y_4619_, 0);
v_isSharedCheck_4648_ = !lean_is_exclusive(v___y_4619_);
if (v_isSharedCheck_4648_ == 0)
{
v___x_4643_ = v___y_4619_;
v_isShared_4644_ = v_isSharedCheck_4648_;
goto v_resetjp_4642_;
}
else
{
lean_inc(v_a_4641_);
lean_dec(v___y_4619_);
v___x_4643_ = lean_box(0);
v_isShared_4644_ = v_isSharedCheck_4648_;
goto v_resetjp_4642_;
}
v_resetjp_4642_:
{
lean_object* v___x_4646_; 
if (v_isShared_4644_ == 0)
{
v___x_4646_ = v___x_4643_;
goto v_reusejp_4645_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v_a_4641_);
v___x_4646_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4645_;
}
v_reusejp_4645_:
{
return v___x_4646_;
}
}
}
}
v___jp_4653_:
{
lean_object* v___x_4661_; double v___x_4662_; double v___x_4663_; double v___x_4664_; double v___x_4665_; double v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4661_ = lean_io_mono_nanos_now();
v___x_4662_ = lean_float_of_nat(v___y_4655_);
v___x_4663_ = lean_float_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1);
v___x_4664_ = lean_float_div(v___x_4662_, v___x_4663_);
v___x_4665_ = lean_float_of_nat(v___x_4661_);
v___x_4666_ = lean_float_div(v___x_4665_, v___x_4663_);
v___x_4667_ = lean_box_float(v___x_4664_);
v___x_4668_ = lean_box_float(v___x_4666_);
v___x_4669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4667_);
lean_ctor_set(v___x_4669_, 1, v___x_4668_);
v___x_4670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4670_, 0, v_a_4660_);
lean_ctor_set(v___x_4670_, 1, v___x_4669_);
lean_inc_ref(v___y_4659_);
lean_inc(v___y_4654_);
v___x_4671_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_4654_, v___x_4605_, v___y_4659_, v___y_4658_, v___y_4656_, v___y_4657_, v___f_4615_, v___x_4670_, v___x_4652_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
lean_dec_ref_known(v___x_4652_, 2);
v___y_4619_ = v___x_4671_;
goto v___jp_4618_;
}
v___jp_4672_:
{
lean_object* v___x_4680_; double v___x_4681_; double v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4680_ = lean_io_get_num_heartbeats();
v___x_4681_ = lean_float_of_nat(v___y_4674_);
v___x_4682_ = lean_float_of_nat(v___x_4680_);
v___x_4683_ = lean_box_float(v___x_4681_);
v___x_4684_ = lean_box_float(v___x_4682_);
v___x_4685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4683_);
lean_ctor_set(v___x_4685_, 1, v___x_4684_);
v___x_4686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4686_, 0, v_a_4679_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
lean_inc_ref(v___y_4678_);
lean_inc(v___y_4673_);
v___x_4687_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_4673_, v___x_4605_, v___y_4678_, v___y_4677_, v___y_4675_, v___y_4676_, v___f_4615_, v___x_4686_, v___x_4652_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
lean_dec_ref_known(v___x_4652_, 2);
v___y_4619_ = v___x_4687_;
goto v___jp_4618_;
}
v___jp_4688_:
{
lean_object* v___x_4694_; 
v___x_4694_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___y_4598_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v_a_4695_; lean_object* v___x_4696_; uint8_t v___x_4697_; 
v_a_4695_ = lean_ctor_get(v___x_4694_, 0);
lean_inc(v_a_4695_);
lean_dec_ref_known(v___x_4694_, 1);
v___x_4696_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4697_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v___y_4692_, v___x_4696_);
if (v___x_4697_ == 0)
{
lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4698_ = lean_io_mono_nanos_now();
v___x_4699_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v___y_4691_, v___x_4652_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
if (lean_obj_tag(v___x_4699_) == 0)
{
lean_object* v_a_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4707_; 
v_a_4700_ = lean_ctor_get(v___x_4699_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4699_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4702_ = v___x_4699_;
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_a_4700_);
lean_dec(v___x_4699_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4705_; 
if (v_isShared_4703_ == 0)
{
lean_ctor_set_tag(v___x_4702_, 1);
v___x_4705_ = v___x_4702_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_a_4700_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
v___y_4654_ = v___y_4689_;
v___y_4655_ = v___x_4698_;
v___y_4656_ = v___y_4690_;
v___y_4657_ = v_a_4695_;
v___y_4658_ = v___y_4692_;
v___y_4659_ = v___y_4693_;
v_a_4660_ = v___x_4705_;
goto v___jp_4653_;
}
}
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4715_; 
v_a_4708_ = lean_ctor_get(v___x_4699_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4699_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4710_ = v___x_4699_;
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4699_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4713_; 
if (v_isShared_4711_ == 0)
{
lean_ctor_set_tag(v___x_4710_, 0);
v___x_4713_ = v___x_4710_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4708_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
v___y_4654_ = v___y_4689_;
v___y_4655_ = v___x_4698_;
v___y_4656_ = v___y_4690_;
v___y_4657_ = v_a_4695_;
v___y_4658_ = v___y_4692_;
v___y_4659_ = v___y_4693_;
v_a_4660_ = v___x_4713_;
goto v___jp_4653_;
}
}
}
}
else
{
lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4716_ = lean_io_get_num_heartbeats();
v___x_4717_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v___y_4691_, v___x_4652_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
if (lean_obj_tag(v___x_4717_) == 0)
{
lean_object* v_a_4718_; lean_object* v___x_4720_; uint8_t v_isShared_4721_; uint8_t v_isSharedCheck_4725_; 
v_a_4718_ = lean_ctor_get(v___x_4717_, 0);
v_isSharedCheck_4725_ = !lean_is_exclusive(v___x_4717_);
if (v_isSharedCheck_4725_ == 0)
{
v___x_4720_ = v___x_4717_;
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
else
{
lean_inc(v_a_4718_);
lean_dec(v___x_4717_);
v___x_4720_ = lean_box(0);
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
v_resetjp_4719_:
{
lean_object* v___x_4723_; 
if (v_isShared_4721_ == 0)
{
lean_ctor_set_tag(v___x_4720_, 1);
v___x_4723_ = v___x_4720_;
goto v_reusejp_4722_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v_a_4718_);
v___x_4723_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4722_;
}
v_reusejp_4722_:
{
v___y_4673_ = v___y_4689_;
v___y_4674_ = v___x_4716_;
v___y_4675_ = v___y_4690_;
v___y_4676_ = v_a_4695_;
v___y_4677_ = v___y_4692_;
v___y_4678_ = v___y_4693_;
v_a_4679_ = v___x_4723_;
goto v___jp_4672_;
}
}
}
else
{
lean_object* v_a_4726_; lean_object* v___x_4728_; uint8_t v_isShared_4729_; uint8_t v_isSharedCheck_4733_; 
v_a_4726_ = lean_ctor_get(v___x_4717_, 0);
v_isSharedCheck_4733_ = !lean_is_exclusive(v___x_4717_);
if (v_isSharedCheck_4733_ == 0)
{
v___x_4728_ = v___x_4717_;
v_isShared_4729_ = v_isSharedCheck_4733_;
goto v_resetjp_4727_;
}
else
{
lean_inc(v_a_4726_);
lean_dec(v___x_4717_);
v___x_4728_ = lean_box(0);
v_isShared_4729_ = v_isSharedCheck_4733_;
goto v_resetjp_4727_;
}
v_resetjp_4727_:
{
lean_object* v___x_4731_; 
if (v_isShared_4729_ == 0)
{
lean_ctor_set_tag(v___x_4728_, 0);
v___x_4731_ = v___x_4728_;
goto v_reusejp_4730_;
}
else
{
lean_object* v_reuseFailAlloc_4732_; 
v_reuseFailAlloc_4732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4732_, 0, v_a_4726_);
v___x_4731_ = v_reuseFailAlloc_4732_;
goto v_reusejp_4730_;
}
v_reusejp_4730_:
{
v___y_4673_ = v___y_4689_;
v___y_4674_ = v___x_4716_;
v___y_4675_ = v___y_4690_;
v___y_4676_ = v_a_4695_;
v___y_4677_ = v___y_4692_;
v___y_4678_ = v___y_4693_;
v_a_4679_ = v___x_4731_;
goto v___jp_4672_;
}
}
}
}
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
lean_dec_ref(v___y_4691_);
lean_dec_ref_known(v___x_4652_, 2);
lean_dec(v_a_4617_);
lean_dec_ref(v___f_4615_);
lean_dec(v_a_4591_);
v_a_4734_ = lean_ctor_get(v___x_4694_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4694_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4694_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
v___jp_4742_:
{
if (lean_obj_tag(v_value_4609_) == 0)
{
lean_object* v_toCold_4743_; lean_object* v_options_4744_; uint8_t v_hasTrace_4745_; 
v_toCold_4743_ = lean_ctor_get(v___y_4597_, 0);
v_options_4744_ = lean_ctor_get(v_toCold_4743_, 2);
v_hasTrace_4745_ = lean_ctor_get_uint8(v_options_4744_, sizeof(void*)*1);
if (v_hasTrace_4745_ == 0)
{
lean_object* v_code_4746_; lean_object* v___x_4747_; 
lean_dec_ref(v___f_4615_);
v_code_4746_ = lean_ctor_get(v_value_4609_, 0);
lean_inc_ref(v_code_4746_);
v___x_4747_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_4746_, v___x_4652_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
lean_dec_ref_known(v___x_4652_, 2);
v___y_4619_ = v___x_4747_;
goto v___jp_4618_;
}
else
{
lean_object* v_code_4748_; lean_object* v_inheritedTraceOptions_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; 
v_code_4748_ = lean_ctor_get(v_value_4609_, 0);
v_inheritedTraceOptions_4749_ = lean_ctor_get(v_toCold_4743_, 11);
v___x_4750_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_4751_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_4752_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_4753_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4749_, v_options_4744_, v___x_4752_);
if (v___x_4753_ == 0)
{
lean_object* v___x_4754_; uint8_t v___x_4755_; 
v___x_4754_ = l_Lean_trace_profiler;
v___x_4755_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_options_4744_, v___x_4754_);
if (v___x_4755_ == 0)
{
lean_object* v___x_4756_; 
lean_dec_ref(v___f_4615_);
lean_inc_ref(v_code_4748_);
v___x_4756_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_4748_, v___x_4652_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
lean_dec_ref_known(v___x_4652_, 2);
v___y_4619_ = v___x_4756_;
goto v___jp_4618_;
}
else
{
lean_inc_ref(v_code_4748_);
v___y_4689_ = v___x_4750_;
v___y_4690_ = v___x_4753_;
v___y_4691_ = v_code_4748_;
v___y_4692_ = v_options_4744_;
v___y_4693_ = v___x_4751_;
goto v___jp_4688_;
}
}
else
{
lean_inc_ref(v_code_4748_);
v___y_4689_ = v___x_4750_;
v___y_4690_ = v___x_4753_;
v___y_4691_ = v_code_4748_;
v___y_4692_ = v_options_4744_;
v___y_4693_ = v___x_4751_;
goto v___jp_4688_;
}
}
}
else
{
lean_object* v___x_4757_; lean_object* v___x_4758_; 
lean_dec_ref(v___f_4615_);
v___x_4757_ = lean_box(1);
v___x_4758_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v___x_4757_, v___x_4652_, v___y_4594_, v___y_4598_);
lean_dec_ref_known(v___x_4652_, 2);
v___y_4619_ = v___x_4758_;
goto v___jp_4618_;
}
}
v___jp_4759_:
{
if (lean_obj_tag(v___y_4760_) == 0)
{
lean_dec_ref_known(v___y_4760_, 1);
goto v___jp_4742_;
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4768_; 
lean_dec_ref_known(v___x_4652_, 2);
lean_dec(v_a_4617_);
lean_dec_ref(v___f_4615_);
lean_dec(v_a_4591_);
v_a_4761_ = lean_ctor_get(v___y_4760_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___y_4760_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4763_ = v___y_4760_;
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___y_4760_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4766_; 
if (v_isShared_4764_ == 0)
{
v___x_4766_ = v___x_4763_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v_a_4761_);
v___x_4766_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
return v___x_4766_;
}
}
}
}
}
else
{
lean_object* v_a_4777_; lean_object* v___x_4779_; uint8_t v_isShared_4780_; uint8_t v_isSharedCheck_4784_; 
lean_dec_ref(v___f_4615_);
lean_dec(v_a_4591_);
v_a_4777_ = lean_ctor_get(v___x_4616_, 0);
v_isSharedCheck_4784_ = !lean_is_exclusive(v___x_4616_);
if (v_isSharedCheck_4784_ == 0)
{
v___x_4779_ = v___x_4616_;
v_isShared_4780_ = v_isSharedCheck_4784_;
goto v_resetjp_4778_;
}
else
{
lean_inc(v_a_4777_);
lean_dec(v___x_4616_);
v___x_4779_ = lean_box(0);
v_isShared_4780_ = v_isSharedCheck_4784_;
goto v_resetjp_4778_;
}
v_resetjp_4778_:
{
lean_object* v___x_4782_; 
if (v_isShared_4780_ == 0)
{
v___x_4782_ = v___x_4779_;
goto v_reusejp_4781_;
}
else
{
lean_object* v_reuseFailAlloc_4783_; 
v_reuseFailAlloc_4783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4783_, 0, v_a_4777_);
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
v___jp_4600_:
{
lean_object* v___x_4602_; lean_object* v___x_4603_; 
v___x_4602_ = lean_unsigned_to_nat(1u);
v___x_4603_ = lean_nat_add(v_a_4591_, v___x_4602_);
lean_dec(v_a_4591_);
lean_inc_ref(v_a_4601_);
v_a_4591_ = v___x_4603_;
v_b_4592_ = v_a_4601_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___boxed(lean_object* v_upperBound_4785_, lean_object* v___x_4786_, lean_object* v_a_4787_, lean_object* v_b_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_){
_start:
{
lean_object* v_res_4796_; 
v_res_4796_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(v_upperBound_4785_, v___x_4786_, v_a_4787_, v_b_4788_, v___y_4789_, v___y_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
lean_dec(v___y_4792_);
lean_dec_ref(v___y_4791_);
lean_dec(v___y_4790_);
lean_dec_ref(v___y_4789_);
lean_dec_ref(v___x_4786_);
lean_dec(v_upperBound_4785_);
return v_res_4796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(lean_object* v_a_4797_, lean_object* v_a_4798_, lean_object* v_a_4799_, lean_object* v_a_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_){
_start:
{
lean_object* v_decls_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; 
v_decls_4804_ = lean_ctor_get(v_a_4797_, 0);
v___x_4805_ = lean_array_get_size(v_decls_4804_);
v___x_4806_ = lean_unsigned_to_nat(0u);
v___x_4807_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0));
v___x_4808_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(v___x_4805_, v_decls_4804_, v___x_4806_, v___x_4807_, v_a_4797_, v_a_4798_, v_a_4799_, v_a_4800_, v_a_4801_, v_a_4802_);
if (lean_obj_tag(v___x_4808_) == 0)
{
lean_object* v_a_4809_; lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4823_; 
v_a_4809_ = lean_ctor_get(v___x_4808_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4808_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4811_ = v___x_4808_;
v_isShared_4812_ = v_isSharedCheck_4823_;
goto v_resetjp_4810_;
}
else
{
lean_inc(v_a_4809_);
lean_dec(v___x_4808_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4823_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
lean_object* v_fst_4813_; 
v_fst_4813_ = lean_ctor_get(v_a_4809_, 0);
lean_inc(v_fst_4813_);
lean_dec(v_a_4809_);
if (lean_obj_tag(v_fst_4813_) == 0)
{
uint8_t v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4817_; 
v___x_4814_ = 0;
v___x_4815_ = lean_box(v___x_4814_);
if (v_isShared_4812_ == 0)
{
lean_ctor_set(v___x_4811_, 0, v___x_4815_);
v___x_4817_ = v___x_4811_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v___x_4815_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
else
{
lean_object* v_val_4819_; lean_object* v___x_4821_; 
v_val_4819_ = lean_ctor_get(v_fst_4813_, 0);
lean_inc(v_val_4819_);
lean_dec_ref_known(v_fst_4813_, 1);
if (v_isShared_4812_ == 0)
{
lean_ctor_set(v___x_4811_, 0, v_val_4819_);
v___x_4821_ = v___x_4811_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_val_4819_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
return v___x_4821_;
}
}
}
}
else
{
lean_object* v_a_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4831_; 
v_a_4824_ = lean_ctor_get(v___x_4808_, 0);
v_isSharedCheck_4831_ = !lean_is_exclusive(v___x_4808_);
if (v_isSharedCheck_4831_ == 0)
{
v___x_4826_ = v___x_4808_;
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_a_4824_);
lean_dec(v___x_4808_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
lean_object* v___x_4829_; 
if (v_isShared_4827_ == 0)
{
v___x_4829_ = v___x_4826_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4830_; 
v_reuseFailAlloc_4830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4830_, 0, v_a_4824_);
v___x_4829_ = v_reuseFailAlloc_4830_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
return v___x_4829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep___boxed(lean_object* v_a_4832_, lean_object* v_a_4833_, lean_object* v_a_4834_, lean_object* v_a_4835_, lean_object* v_a_4836_, lean_object* v_a_4837_, lean_object* v_a_4838_){
_start:
{
lean_object* v_res_4839_; 
v_res_4839_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(v_a_4832_, v_a_4833_, v_a_4834_, v_a_4835_, v_a_4836_, v_a_4837_);
lean_dec(v_a_4837_);
lean_dec_ref(v_a_4836_);
lean_dec(v_a_4835_);
lean_dec_ref(v_a_4834_);
lean_dec(v_a_4833_);
lean_dec_ref(v_a_4832_);
return v_res_4839_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3(lean_object* v_00_u03b1_4840_, lean_object* v_x_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_){
_start:
{
lean_object* v___x_4849_; 
v___x_4849_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_x_4841_);
return v___x_4849_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___boxed(lean_object* v_00_u03b1_4850_, lean_object* v_x_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v_res_4859_; 
v_res_4859_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3(v_00_u03b1_4850_, v_x_4851_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
lean_dec(v___y_4857_);
lean_dec_ref(v___y_4856_);
lean_dec(v___y_4855_);
lean_dec_ref(v___y_4854_);
lean_dec(v___y_4853_);
lean_dec_ref(v___y_4852_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(lean_object* v_upperBound_4860_, lean_object* v___x_4861_, lean_object* v_inst_4862_, lean_object* v_R_4863_, lean_object* v_a_4864_, lean_object* v_b_4865_, lean_object* v_c_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
lean_object* v___x_4874_; 
v___x_4874_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(v_upperBound_4860_, v___x_4861_, v_a_4864_, v_b_4865_, v___y_4867_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_, v___y_4872_);
return v___x_4874_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___boxed(lean_object* v_upperBound_4875_, lean_object* v___x_4876_, lean_object* v_inst_4877_, lean_object* v_R_4878_, lean_object* v_a_4879_, lean_object* v_b_4880_, lean_object* v_c_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
lean_object* v_res_4889_; 
v_res_4889_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v_upperBound_4875_, v___x_4876_, v_inst_4877_, v_R_4878_, v_a_4879_, v_b_4880_, v_c_4881_, v___y_4882_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_);
lean_dec(v___y_4887_);
lean_dec_ref(v___y_4886_);
lean_dec(v___y_4885_);
lean_dec_ref(v___y_4884_);
lean_dec(v___y_4883_);
lean_dec_ref(v___y_4882_);
lean_dec_ref(v___x_4876_);
lean_dec(v_upperBound_4875_);
return v_res_4889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2(lean_object* v_oldTraces_4890_, lean_object* v_data_4891_, lean_object* v_ref_4892_, lean_object* v_msg_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v___x_4901_; 
v___x_4901_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(v_oldTraces_4890_, v_data_4891_, v_ref_4892_, v_msg_4893_, v___y_4896_, v___y_4897_, v___y_4898_, v___y_4899_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___boxed(lean_object* v_oldTraces_4902_, lean_object* v_data_4903_, lean_object* v_ref_4904_, lean_object* v_msg_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2(v_oldTraces_4902_, v_data_4903_, v_ref_4904_, v_msg_4905_, v___y_4906_, v___y_4907_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
lean_dec(v___y_4911_);
lean_dec_ref(v___y_4910_);
lean_dec(v___y_4909_);
lean_dec_ref(v___y_4908_);
lean_dec(v___y_4907_);
lean_dec_ref(v___y_4906_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(lean_object* v_cls_4916_, lean_object* v_msg_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_){
_start:
{
lean_object* v_toCold_4923_; lean_object* v_ref_4924_; lean_object* v___x_4925_; lean_object* v_env_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v_toCold_4923_ = lean_ctor_get(v___y_4920_, 0);
v_ref_4924_ = lean_ctor_get(v___y_4920_, 2);
v___x_4925_ = lean_st_ref_get(v___y_4921_);
v_env_4926_ = lean_ctor_get(v___x_4925_, 0);
lean_inc_ref(v_env_4926_);
lean_dec(v___x_4925_);
v___x_4927_ = lean_st_ref_get(v___y_4919_);
v___x_4928_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_4918_);
if (lean_obj_tag(v___x_4928_) == 0)
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4987_; 
v_a_4929_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4987_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4931_ = v___x_4928_;
v_isShared_4932_ = v_isSharedCheck_4987_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4928_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4987_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v_lctx_4933_; lean_object* v___x_4935_; uint8_t v_isShared_4936_; uint8_t v_isSharedCheck_4985_; 
v_lctx_4933_ = lean_ctor_get(v___x_4927_, 0);
v_isSharedCheck_4985_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4985_ == 0)
{
lean_object* v_unused_4986_; 
v_unused_4986_ = lean_ctor_get(v___x_4927_, 1);
lean_dec(v_unused_4986_);
v___x_4935_ = v___x_4927_;
v_isShared_4936_ = v_isSharedCheck_4985_;
goto v_resetjp_4934_;
}
else
{
lean_inc(v_lctx_4933_);
lean_dec(v___x_4927_);
v___x_4935_ = lean_box(0);
v_isShared_4936_ = v_isSharedCheck_4985_;
goto v_resetjp_4934_;
}
v_resetjp_4934_:
{
lean_object* v_options_4937_; uint8_t v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4943_; 
v_options_4937_ = lean_ctor_get(v_toCold_4923_, 2);
v___x_4938_ = lean_unbox(v_a_4929_);
lean_dec(v_a_4929_);
v___x_4939_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_4933_, v___x_4938_);
lean_dec_ref(v_lctx_4933_);
v___x_4940_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1);
lean_inc_ref(v_options_4937_);
v___x_4941_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4941_, 0, v_env_4926_);
lean_ctor_set(v___x_4941_, 1, v___x_4940_);
lean_ctor_set(v___x_4941_, 2, v___x_4939_);
lean_ctor_set(v___x_4941_, 3, v_options_4937_);
if (v_isShared_4936_ == 0)
{
lean_ctor_set_tag(v___x_4935_, 3);
lean_ctor_set(v___x_4935_, 1, v_msg_4917_);
lean_ctor_set(v___x_4935_, 0, v___x_4941_);
v___x_4943_ = v___x_4935_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v___x_4941_);
lean_ctor_set(v_reuseFailAlloc_4984_, 1, v_msg_4917_);
v___x_4943_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
lean_object* v___x_4944_; lean_object* v_traceState_4945_; lean_object* v_env_4946_; lean_object* v_nextMacroScope_4947_; lean_object* v_ngen_4948_; lean_object* v_auxDeclNGen_4949_; lean_object* v_cache_4950_; lean_object* v_messages_4951_; lean_object* v_infoState_4952_; lean_object* v_snapshotTasks_4953_; lean_object* v___x_4955_; uint8_t v_isShared_4956_; uint8_t v_isSharedCheck_4983_; 
v___x_4944_ = lean_st_ref_take(v___y_4921_);
v_traceState_4945_ = lean_ctor_get(v___x_4944_, 4);
v_env_4946_ = lean_ctor_get(v___x_4944_, 0);
v_nextMacroScope_4947_ = lean_ctor_get(v___x_4944_, 1);
v_ngen_4948_ = lean_ctor_get(v___x_4944_, 2);
v_auxDeclNGen_4949_ = lean_ctor_get(v___x_4944_, 3);
v_cache_4950_ = lean_ctor_get(v___x_4944_, 5);
v_messages_4951_ = lean_ctor_get(v___x_4944_, 6);
v_infoState_4952_ = lean_ctor_get(v___x_4944_, 7);
v_snapshotTasks_4953_ = lean_ctor_get(v___x_4944_, 8);
v_isSharedCheck_4983_ = !lean_is_exclusive(v___x_4944_);
if (v_isSharedCheck_4983_ == 0)
{
v___x_4955_ = v___x_4944_;
v_isShared_4956_ = v_isSharedCheck_4983_;
goto v_resetjp_4954_;
}
else
{
lean_inc(v_snapshotTasks_4953_);
lean_inc(v_infoState_4952_);
lean_inc(v_messages_4951_);
lean_inc(v_cache_4950_);
lean_inc(v_traceState_4945_);
lean_inc(v_auxDeclNGen_4949_);
lean_inc(v_ngen_4948_);
lean_inc(v_nextMacroScope_4947_);
lean_inc(v_env_4946_);
lean_dec(v___x_4944_);
v___x_4955_ = lean_box(0);
v_isShared_4956_ = v_isSharedCheck_4983_;
goto v_resetjp_4954_;
}
v_resetjp_4954_:
{
uint64_t v_tid_4957_; lean_object* v_traces_4958_; lean_object* v___x_4960_; uint8_t v_isShared_4961_; uint8_t v_isSharedCheck_4982_; 
v_tid_4957_ = lean_ctor_get_uint64(v_traceState_4945_, sizeof(void*)*1);
v_traces_4958_ = lean_ctor_get(v_traceState_4945_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v_traceState_4945_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4960_ = v_traceState_4945_;
v_isShared_4961_ = v_isSharedCheck_4982_;
goto v_resetjp_4959_;
}
else
{
lean_inc(v_traces_4958_);
lean_dec(v_traceState_4945_);
v___x_4960_ = lean_box(0);
v_isShared_4961_ = v_isSharedCheck_4982_;
goto v_resetjp_4959_;
}
v_resetjp_4959_:
{
lean_object* v___x_4962_; lean_object* v___x_4963_; double v___x_4964_; uint8_t v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4973_; 
v___x_4962_ = lean_box(0);
v___x_4963_ = lean_box(0);
v___x_4964_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0);
v___x_4965_ = 0;
v___x_4966_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_4967_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4967_, 0, v_cls_4916_);
lean_ctor_set(v___x_4967_, 1, v___x_4963_);
lean_ctor_set(v___x_4967_, 2, v___x_4966_);
lean_ctor_set_float(v___x_4967_, sizeof(void*)*3, v___x_4964_);
lean_ctor_set_float(v___x_4967_, sizeof(void*)*3 + 8, v___x_4964_);
lean_ctor_set_uint8(v___x_4967_, sizeof(void*)*3 + 16, v___x_4965_);
v___x_4968_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0));
v___x_4969_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4969_, 0, v___x_4967_);
lean_ctor_set(v___x_4969_, 1, v___x_4943_);
lean_ctor_set(v___x_4969_, 2, v___x_4968_);
lean_inc(v_ref_4924_);
v___x_4970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4970_, 0, v_ref_4924_);
lean_ctor_set(v___x_4970_, 1, v___x_4969_);
v___x_4971_ = l_Lean_PersistentArray_push___redArg(v_traces_4958_, v___x_4970_);
if (v_isShared_4961_ == 0)
{
lean_ctor_set(v___x_4960_, 0, v___x_4971_);
v___x_4973_ = v___x_4960_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v___x_4971_);
lean_ctor_set_uint64(v_reuseFailAlloc_4981_, sizeof(void*)*1, v_tid_4957_);
v___x_4973_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
lean_object* v___x_4975_; 
if (v_isShared_4956_ == 0)
{
lean_ctor_set(v___x_4955_, 4, v___x_4973_);
v___x_4975_ = v___x_4955_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4980_; 
v_reuseFailAlloc_4980_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4980_, 0, v_env_4946_);
lean_ctor_set(v_reuseFailAlloc_4980_, 1, v_nextMacroScope_4947_);
lean_ctor_set(v_reuseFailAlloc_4980_, 2, v_ngen_4948_);
lean_ctor_set(v_reuseFailAlloc_4980_, 3, v_auxDeclNGen_4949_);
lean_ctor_set(v_reuseFailAlloc_4980_, 4, v___x_4973_);
lean_ctor_set(v_reuseFailAlloc_4980_, 5, v_cache_4950_);
lean_ctor_set(v_reuseFailAlloc_4980_, 6, v_messages_4951_);
lean_ctor_set(v_reuseFailAlloc_4980_, 7, v_infoState_4952_);
lean_ctor_set(v_reuseFailAlloc_4980_, 8, v_snapshotTasks_4953_);
v___x_4975_ = v_reuseFailAlloc_4980_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
lean_object* v___x_4976_; lean_object* v___x_4978_; 
v___x_4976_ = lean_st_ref_put(v___y_4921_, v___x_4975_);
if (v_isShared_4932_ == 0)
{
lean_ctor_set(v___x_4931_, 0, v___x_4962_);
v___x_4978_ = v___x_4931_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v___x_4962_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
return v___x_4978_;
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
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4995_; 
lean_dec(v___x_4927_);
lean_dec_ref(v_env_4926_);
lean_dec_ref(v_msg_4917_);
lean_dec(v_cls_4916_);
v_a_4988_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4990_ = v___x_4928_;
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4928_);
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
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___boxed(lean_object* v_cls_4996_, lean_object* v_msg_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_){
_start:
{
lean_object* v_res_5003_; 
v_res_5003_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v_cls_4996_, v_msg_4997_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_);
lean_dec(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec(v___y_4999_);
lean_dec_ref(v___y_4998_);
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(lean_object* v_cls_5004_, lean_object* v_msg_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v_cls_5004_, v_msg_5005_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_);
return v___x_5013_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___boxed(lean_object* v_cls_5014_, lean_object* v_msg_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_){
_start:
{
lean_object* v_res_5023_; 
v_res_5023_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(v_cls_5014_, v_msg_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_);
lean_dec(v___y_5021_);
lean_dec_ref(v___y_5020_);
lean_dec(v___y_5019_);
lean_dec_ref(v___y_5018_);
lean_dec(v___y_5017_);
lean_dec_ref(v___y_5016_);
return v_res_5023_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; 
v___x_5024_ = lean_box(0);
v___x_5025_ = lean_unsigned_to_nat(16u);
v___x_5026_ = lean_mk_array(v___x_5025_, v___x_5024_);
return v___x_5026_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1(void){
_start:
{
lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; 
v___x_5027_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0);
v___x_5028_ = lean_unsigned_to_nat(0u);
v___x_5029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5029_, 0, v___x_5028_);
lean_ctor_set(v___x_5029_, 1, v___x_5027_);
return v___x_5029_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__2(void){
_start:
{
lean_object* v___x_5030_; lean_object* v___x_5031_; 
v___x_5030_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1);
v___x_5031_ = l_unsafeCast___redArg(v___x_5030_);
return v___x_5031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(size_t v_sz_5032_, size_t v_i_5033_, lean_object* v_bs_5034_){
_start:
{
uint8_t v___x_5035_; 
v___x_5035_ = lean_usize_dec_lt(v_i_5033_, v_sz_5032_);
if (v___x_5035_ == 0)
{
lean_object* v___x_5036_; 
v___x_5036_ = l_unsafeCast___redArg(v_bs_5034_);
lean_dec_ref(v_bs_5034_);
return v___x_5036_;
}
else
{
lean_object* v___x_5037_; lean_object* v_bs_x27_5038_; size_t v___x_5039_; size_t v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; 
v___x_5037_ = lean_unsigned_to_nat(0u);
v_bs_x27_5038_ = lean_array_uset(v_bs_5034_, v_i_5033_, v___x_5037_);
v___x_5039_ = ((size_t)1ULL);
v___x_5040_ = lean_usize_add(v_i_5033_, v___x_5039_);
v___x_5041_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__2);
v___x_5042_ = lean_array_uset(v_bs_x27_5038_, v_i_5033_, v___x_5041_);
v_i_5033_ = v___x_5040_;
v_bs_5034_ = v___x_5042_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___boxed(lean_object* v_sz_5044_, lean_object* v_i_5045_, lean_object* v_bs_5046_){
_start:
{
size_t v_sz_boxed_5047_; size_t v_i_boxed_5048_; lean_object* v_res_5049_; 
v_sz_boxed_5047_ = lean_unbox_usize(v_sz_5044_);
lean_dec(v_sz_5044_);
v_i_boxed_5048_ = lean_unbox_usize(v_i_5045_);
lean_dec(v_i_5045_);
v_res_5049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_boxed_5047_, v_i_boxed_5048_, v_bs_5046_);
return v_res_5049_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1(void){
_start:
{
lean_object* v___x_5051_; lean_object* v___x_5052_; 
v___x_5051_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0));
v___x_5052_ = l_Lean_stringToMessageData(v___x_5051_);
return v___x_5052_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3(void){
_start:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5054_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2));
v___x_5055_ = l_Lean_stringToMessageData(v___x_5054_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(lean_object* v_n_5056_, lean_object* v_a_5057_, lean_object* v_a_5058_, lean_object* v_a_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_){
_start:
{
lean_object* v___x_5067_; lean_object* v_decls_5068_; lean_object* v_funVals_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5111_; 
v___x_5067_ = lean_st_ref_take(v_a_5058_);
v_decls_5068_ = lean_ctor_get(v_a_5057_, 0);
v_funVals_5069_ = lean_ctor_get(v___x_5067_, 1);
v_isSharedCheck_5111_ = !lean_is_exclusive(v___x_5067_);
if (v_isSharedCheck_5111_ == 0)
{
lean_object* v_unused_5112_; 
v_unused_5112_ = lean_ctor_get(v___x_5067_, 0);
lean_dec(v_unused_5112_);
v___x_5071_ = v___x_5067_;
v_isShared_5072_ = v_isSharedCheck_5111_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_funVals_5069_);
lean_dec(v___x_5067_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5111_;
goto v_resetjp_5070_;
}
v___jp_5064_:
{
lean_object* v___x_5065_; lean_object* v___x_5066_; 
v___x_5065_ = lean_box(0);
v___x_5066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5066_, 0, v___x_5065_);
return v___x_5066_;
}
v_resetjp_5070_:
{
size_t v_sz_5073_; size_t v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5079_; 
v_sz_5073_ = lean_array_size(v_decls_5068_);
v___x_5074_ = ((size_t)0ULL);
v___x_5075_ = l_unsafeCast___redArg(v_decls_5068_);
v___x_5076_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_5073_, v___x_5074_, v___x_5075_);
v___x_5077_ = l_unsafeCast___redArg(v___x_5076_);
lean_dec_ref(v___x_5076_);
if (v_isShared_5072_ == 0)
{
lean_ctor_set(v___x_5071_, 0, v___x_5077_);
v___x_5079_ = v___x_5071_;
goto v_reusejp_5078_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v___x_5077_);
lean_ctor_set(v_reuseFailAlloc_5110_, 1, v_funVals_5069_);
v___x_5079_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5078_;
}
v_reusejp_5078_:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5080_ = lean_st_ref_put(v_a_5058_, v___x_5079_);
v___x_5081_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(v_a_5057_, v_a_5058_, v_a_5059_, v_a_5060_, v_a_5061_, v_a_5062_);
if (lean_obj_tag(v___x_5081_) == 0)
{
lean_object* v_a_5082_; uint8_t v___x_5083_; 
v_a_5082_ = lean_ctor_get(v___x_5081_, 0);
lean_inc(v_a_5082_);
lean_dec_ref_known(v___x_5081_, 1);
v___x_5083_ = lean_unbox(v_a_5082_);
lean_dec(v_a_5082_);
if (v___x_5083_ == 0)
{
lean_object* v_toCold_5084_; lean_object* v_options_5085_; uint8_t v_hasTrace_5086_; 
v_toCold_5084_ = lean_ctor_get(v_a_5061_, 0);
v_options_5085_ = lean_ctor_get(v_toCold_5084_, 2);
v_hasTrace_5086_ = lean_ctor_get_uint8(v_options_5085_, sizeof(void*)*1);
if (v_hasTrace_5086_ == 0)
{
lean_dec(v_n_5056_);
goto v___jp_5064_;
}
else
{
lean_object* v_inheritedTraceOptions_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; uint8_t v___x_5090_; 
v_inheritedTraceOptions_5087_ = lean_ctor_get(v_toCold_5084_, 11);
v___x_5088_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_5089_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_5090_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5087_, v_options_5085_, v___x_5089_);
if (v___x_5090_ == 0)
{
lean_dec(v_n_5056_);
goto v___jp_5064_;
}
else
{
lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; 
v___x_5091_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1, &l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1);
v___x_5092_ = l_Nat_reprFast(v_n_5056_);
v___x_5093_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5092_);
v___x_5094_ = l_Lean_MessageData_ofFormat(v___x_5093_);
v___x_5095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5095_, 0, v___x_5091_);
lean_ctor_set(v___x_5095_, 1, v___x_5094_);
v___x_5096_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3);
v___x_5097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5097_, 0, v___x_5095_);
lean_ctor_set(v___x_5097_, 1, v___x_5096_);
v___x_5098_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v___x_5088_, v___x_5097_, v_a_5059_, v_a_5060_, v_a_5061_, v_a_5062_);
if (lean_obj_tag(v___x_5098_) == 0)
{
lean_dec_ref_known(v___x_5098_, 1);
goto v___jp_5064_;
}
else
{
return v___x_5098_;
}
}
}
}
else
{
lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5099_ = lean_unsigned_to_nat(1u);
v___x_5100_ = lean_nat_add(v_n_5056_, v___x_5099_);
lean_dec(v_n_5056_);
v_n_5056_ = v___x_5100_;
goto _start;
}
}
else
{
lean_object* v_a_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5109_; 
lean_dec(v_n_5056_);
v_a_5102_ = lean_ctor_get(v___x_5081_, 0);
v_isSharedCheck_5109_ = !lean_is_exclusive(v___x_5081_);
if (v_isSharedCheck_5109_ == 0)
{
v___x_5104_ = v___x_5081_;
v_isShared_5105_ = v_isSharedCheck_5109_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_a_5102_);
lean_dec(v___x_5081_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5109_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___x_5107_; 
if (v_isShared_5105_ == 0)
{
v___x_5107_ = v___x_5104_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v_a_5102_);
v___x_5107_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
return v___x_5107_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___boxed(lean_object* v_n_5113_, lean_object* v_a_5114_, lean_object* v_a_5115_, lean_object* v_a_5116_, lean_object* v_a_5117_, lean_object* v_a_5118_, lean_object* v_a_5119_, lean_object* v_a_5120_){
_start:
{
lean_object* v_res_5121_; 
v_res_5121_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v_n_5113_, v_a_5114_, v_a_5115_, v_a_5116_, v_a_5117_, v_a_5118_, v_a_5119_);
lean_dec(v_a_5119_);
lean_dec_ref(v_a_5118_);
lean_dec(v_a_5117_);
lean_dec_ref(v_a_5116_);
lean_dec(v_a_5115_);
lean_dec_ref(v_a_5114_);
return v_res_5121_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5122_; 
v___x_5122_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_5122_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(lean_object* v_msg_5123_){
_start:
{
lean_object* v___x_5124_; lean_object* v___x_5125_; 
v___x_5124_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0);
v___x_5125_ = lean_panic_fn_borrowed(v___x_5124_, v_msg_5123_);
return v___x_5125_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(lean_object* v_cls_5126_, lean_object* v_msg_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_){
_start:
{
lean_object* v_toCold_5133_; lean_object* v_ref_5134_; lean_object* v___x_5135_; lean_object* v_env_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
v_toCold_5133_ = lean_ctor_get(v___y_5130_, 0);
v_ref_5134_ = lean_ctor_get(v___y_5130_, 2);
v___x_5135_ = lean_st_ref_get(v___y_5131_);
v_env_5136_ = lean_ctor_get(v___x_5135_, 0);
lean_inc_ref(v_env_5136_);
lean_dec(v___x_5135_);
v___x_5137_ = lean_st_ref_get(v___y_5129_);
v___x_5138_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_5128_);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5197_; 
v_a_5139_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5197_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5197_ == 0)
{
v___x_5141_ = v___x_5138_;
v_isShared_5142_ = v_isSharedCheck_5197_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5138_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5197_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v_lctx_5143_; lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5195_; 
v_lctx_5143_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5195_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5195_ == 0)
{
lean_object* v_unused_5196_; 
v_unused_5196_ = lean_ctor_get(v___x_5137_, 1);
lean_dec(v_unused_5196_);
v___x_5145_ = v___x_5137_;
v_isShared_5146_ = v_isSharedCheck_5195_;
goto v_resetjp_5144_;
}
else
{
lean_inc(v_lctx_5143_);
lean_dec(v___x_5137_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5195_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v_options_5147_; uint8_t v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5153_; 
v_options_5147_ = lean_ctor_get(v_toCold_5133_, 2);
v___x_5148_ = lean_unbox(v_a_5139_);
lean_dec(v_a_5139_);
v___x_5149_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_5143_, v___x_5148_);
lean_dec_ref(v_lctx_5143_);
v___x_5150_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1);
lean_inc_ref(v_options_5147_);
v___x_5151_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5151_, 0, v_env_5136_);
lean_ctor_set(v___x_5151_, 1, v___x_5150_);
lean_ctor_set(v___x_5151_, 2, v___x_5149_);
lean_ctor_set(v___x_5151_, 3, v_options_5147_);
if (v_isShared_5146_ == 0)
{
lean_ctor_set_tag(v___x_5145_, 3);
lean_ctor_set(v___x_5145_, 1, v_msg_5127_);
lean_ctor_set(v___x_5145_, 0, v___x_5151_);
v___x_5153_ = v___x_5145_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5194_; 
v_reuseFailAlloc_5194_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5194_, 0, v___x_5151_);
lean_ctor_set(v_reuseFailAlloc_5194_, 1, v_msg_5127_);
v___x_5153_ = v_reuseFailAlloc_5194_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
lean_object* v___x_5154_; lean_object* v_traceState_5155_; lean_object* v_env_5156_; lean_object* v_nextMacroScope_5157_; lean_object* v_ngen_5158_; lean_object* v_auxDeclNGen_5159_; lean_object* v_cache_5160_; lean_object* v_messages_5161_; lean_object* v_infoState_5162_; lean_object* v_snapshotTasks_5163_; lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5193_; 
v___x_5154_ = lean_st_ref_take(v___y_5131_);
v_traceState_5155_ = lean_ctor_get(v___x_5154_, 4);
v_env_5156_ = lean_ctor_get(v___x_5154_, 0);
v_nextMacroScope_5157_ = lean_ctor_get(v___x_5154_, 1);
v_ngen_5158_ = lean_ctor_get(v___x_5154_, 2);
v_auxDeclNGen_5159_ = lean_ctor_get(v___x_5154_, 3);
v_cache_5160_ = lean_ctor_get(v___x_5154_, 5);
v_messages_5161_ = lean_ctor_get(v___x_5154_, 6);
v_infoState_5162_ = lean_ctor_get(v___x_5154_, 7);
v_snapshotTasks_5163_ = lean_ctor_get(v___x_5154_, 8);
v_isSharedCheck_5193_ = !lean_is_exclusive(v___x_5154_);
if (v_isSharedCheck_5193_ == 0)
{
v___x_5165_ = v___x_5154_;
v_isShared_5166_ = v_isSharedCheck_5193_;
goto v_resetjp_5164_;
}
else
{
lean_inc(v_snapshotTasks_5163_);
lean_inc(v_infoState_5162_);
lean_inc(v_messages_5161_);
lean_inc(v_cache_5160_);
lean_inc(v_traceState_5155_);
lean_inc(v_auxDeclNGen_5159_);
lean_inc(v_ngen_5158_);
lean_inc(v_nextMacroScope_5157_);
lean_inc(v_env_5156_);
lean_dec(v___x_5154_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5193_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
uint64_t v_tid_5167_; lean_object* v_traces_5168_; lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5192_; 
v_tid_5167_ = lean_ctor_get_uint64(v_traceState_5155_, sizeof(void*)*1);
v_traces_5168_ = lean_ctor_get(v_traceState_5155_, 0);
v_isSharedCheck_5192_ = !lean_is_exclusive(v_traceState_5155_);
if (v_isSharedCheck_5192_ == 0)
{
v___x_5170_ = v_traceState_5155_;
v_isShared_5171_ = v_isSharedCheck_5192_;
goto v_resetjp_5169_;
}
else
{
lean_inc(v_traces_5168_);
lean_dec(v_traceState_5155_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5192_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v___x_5172_; lean_object* v___x_5173_; double v___x_5174_; uint8_t v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5183_; 
v___x_5172_ = lean_box(0);
v___x_5173_ = lean_box(0);
v___x_5174_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0);
v___x_5175_ = 0;
v___x_5176_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_5177_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5177_, 0, v_cls_5126_);
lean_ctor_set(v___x_5177_, 1, v___x_5173_);
lean_ctor_set(v___x_5177_, 2, v___x_5176_);
lean_ctor_set_float(v___x_5177_, sizeof(void*)*3, v___x_5174_);
lean_ctor_set_float(v___x_5177_, sizeof(void*)*3 + 8, v___x_5174_);
lean_ctor_set_uint8(v___x_5177_, sizeof(void*)*3 + 16, v___x_5175_);
v___x_5178_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0));
v___x_5179_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5179_, 0, v___x_5177_);
lean_ctor_set(v___x_5179_, 1, v___x_5153_);
lean_ctor_set(v___x_5179_, 2, v___x_5178_);
lean_inc(v_ref_5134_);
v___x_5180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5180_, 0, v_ref_5134_);
lean_ctor_set(v___x_5180_, 1, v___x_5179_);
v___x_5181_ = l_Lean_PersistentArray_push___redArg(v_traces_5168_, v___x_5180_);
if (v_isShared_5171_ == 0)
{
lean_ctor_set(v___x_5170_, 0, v___x_5181_);
v___x_5183_ = v___x_5170_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5191_; 
v_reuseFailAlloc_5191_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5191_, 0, v___x_5181_);
lean_ctor_set_uint64(v_reuseFailAlloc_5191_, sizeof(void*)*1, v_tid_5167_);
v___x_5183_ = v_reuseFailAlloc_5191_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
lean_object* v___x_5185_; 
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 4, v___x_5183_);
v___x_5185_ = v___x_5165_;
goto v_reusejp_5184_;
}
else
{
lean_object* v_reuseFailAlloc_5190_; 
v_reuseFailAlloc_5190_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5190_, 0, v_env_5156_);
lean_ctor_set(v_reuseFailAlloc_5190_, 1, v_nextMacroScope_5157_);
lean_ctor_set(v_reuseFailAlloc_5190_, 2, v_ngen_5158_);
lean_ctor_set(v_reuseFailAlloc_5190_, 3, v_auxDeclNGen_5159_);
lean_ctor_set(v_reuseFailAlloc_5190_, 4, v___x_5183_);
lean_ctor_set(v_reuseFailAlloc_5190_, 5, v_cache_5160_);
lean_ctor_set(v_reuseFailAlloc_5190_, 6, v_messages_5161_);
lean_ctor_set(v_reuseFailAlloc_5190_, 7, v_infoState_5162_);
lean_ctor_set(v_reuseFailAlloc_5190_, 8, v_snapshotTasks_5163_);
v___x_5185_ = v_reuseFailAlloc_5190_;
goto v_reusejp_5184_;
}
v_reusejp_5184_:
{
lean_object* v___x_5186_; lean_object* v___x_5188_; 
v___x_5186_ = lean_st_ref_put(v___y_5131_, v___x_5185_);
if (v_isShared_5142_ == 0)
{
lean_ctor_set(v___x_5141_, 0, v___x_5172_);
v___x_5188_ = v___x_5141_;
goto v_reusejp_5187_;
}
else
{
lean_object* v_reuseFailAlloc_5189_; 
v_reuseFailAlloc_5189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5189_, 0, v___x_5172_);
v___x_5188_ = v_reuseFailAlloc_5189_;
goto v_reusejp_5187_;
}
v_reusejp_5187_:
{
return v___x_5188_;
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
lean_object* v_a_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5205_; 
lean_dec(v___x_5137_);
lean_dec_ref(v_env_5136_);
lean_dec_ref(v_msg_5127_);
lean_dec(v_cls_5126_);
v_a_5198_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5205_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5205_ == 0)
{
v___x_5200_ = v___x_5138_;
v_isShared_5201_ = v_isSharedCheck_5205_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_a_5198_);
lean_dec(v___x_5138_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5205_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5203_; 
if (v_isShared_5201_ == 0)
{
v___x_5203_ = v___x_5200_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5204_; 
v_reuseFailAlloc_5204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5204_, 0, v_a_5198_);
v___x_5203_ = v_reuseFailAlloc_5204_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
return v___x_5203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___boxed(lean_object* v_cls_5206_, lean_object* v_msg_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_5206_, v_msg_5207_, v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_);
lean_dec(v___y_5211_);
lean_dec_ref(v___y_5210_);
lean_dec(v___y_5209_);
lean_dec_ref(v___y_5208_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(lean_object* v_as_5214_, size_t v_i_5215_, size_t v_stop_5216_, lean_object* v_b_5217_){
_start:
{
uint8_t v___x_5219_; 
v___x_5219_ = lean_usize_dec_eq(v_i_5215_, v_stop_5216_);
if (v___x_5219_ == 0)
{
lean_object* v_fst_5220_; lean_object* v_snd_5221_; lean_object* v___x_5222_; lean_object* v_snd_5223_; lean_object* v_fst_5224_; lean_object* v_fst_5225_; lean_object* v_snd_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5240_; 
v_fst_5220_ = lean_ctor_get(v_b_5217_, 0);
lean_inc(v_fst_5220_);
v_snd_5221_ = lean_ctor_get(v_b_5217_, 1);
lean_inc(v_snd_5221_);
lean_dec_ref(v_b_5217_);
v___x_5222_ = lean_array_uget_borrowed(v_as_5214_, v_i_5215_);
v_snd_5223_ = lean_ctor_get(v___x_5222_, 1);
lean_inc(v_snd_5223_);
v_fst_5224_ = lean_ctor_get(v___x_5222_, 0);
v_fst_5225_ = lean_ctor_get(v_snd_5223_, 0);
v_snd_5226_ = lean_ctor_get(v_snd_5223_, 1);
v_isSharedCheck_5240_ = !lean_is_exclusive(v_snd_5223_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5228_ = v_snd_5223_;
v_isShared_5229_ = v_isSharedCheck_5240_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_snd_5226_);
lean_inc(v_fst_5225_);
lean_dec(v_snd_5223_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5240_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v_fvarId_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5235_; 
v_fvarId_5230_ = lean_ctor_get(v_fst_5224_, 0);
v___x_5231_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_fst_5225_, v_fst_5220_);
lean_dec(v_fst_5225_);
v___x_5232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5232_, 0, v_snd_5226_);
lean_inc(v_fvarId_5230_);
v___x_5233_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_snd_5221_, v_fvarId_5230_, v___x_5232_);
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 1, v___x_5233_);
lean_ctor_set(v___x_5228_, 0, v___x_5231_);
v___x_5235_ = v___x_5228_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v___x_5231_);
lean_ctor_set(v_reuseFailAlloc_5239_, 1, v___x_5233_);
v___x_5235_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
size_t v___x_5236_; size_t v___x_5237_; 
v___x_5236_ = ((size_t)1ULL);
v___x_5237_ = lean_usize_add(v_i_5215_, v___x_5236_);
v_i_5215_ = v___x_5237_;
v_b_5217_ = v___x_5235_;
goto _start;
}
}
}
else
{
lean_object* v___x_5241_; 
v___x_5241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5241_, 0, v_b_5217_);
return v___x_5241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg___boxed(lean_object* v_as_5242_, lean_object* v_i_5243_, lean_object* v_stop_5244_, lean_object* v_b_5245_, lean_object* v___y_5246_){
_start:
{
size_t v_i_boxed_5247_; size_t v_stop_boxed_5248_; lean_object* v_res_5249_; 
v_i_boxed_5247_ = lean_unbox_usize(v_i_5243_);
lean_dec(v_i_5243_);
v_stop_boxed_5248_ = lean_unbox_usize(v_stop_5244_);
lean_dec(v_stop_5244_);
v_res_5249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_as_5242_, v_i_boxed_5247_, v_stop_boxed_5248_, v_b_5245_);
lean_dec_ref(v_as_5242_);
return v_res_5249_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(lean_object* v_a_5250_, lean_object* v_x_5251_){
_start:
{
if (lean_obj_tag(v_x_5251_) == 0)
{
lean_object* v___x_5252_; 
v___x_5252_ = lean_box(0);
return v___x_5252_;
}
else
{
lean_object* v_key_5253_; lean_object* v_value_5254_; lean_object* v_tail_5255_; uint8_t v___x_5256_; 
v_key_5253_ = lean_ctor_get(v_x_5251_, 0);
v_value_5254_ = lean_ctor_get(v_x_5251_, 1);
v_tail_5255_ = lean_ctor_get(v_x_5251_, 2);
v___x_5256_ = l_Lean_instBEqFVarId_beq(v_key_5253_, v_a_5250_);
if (v___x_5256_ == 0)
{
v_x_5251_ = v_tail_5255_;
goto _start;
}
else
{
lean_object* v___x_5258_; 
lean_inc(v_value_5254_);
v___x_5258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5258_, 0, v_value_5254_);
return v___x_5258_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg___boxed(lean_object* v_a_5259_, lean_object* v_x_5260_){
_start:
{
lean_object* v_res_5261_; 
v_res_5261_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5259_, v_x_5260_);
lean_dec(v_x_5260_);
lean_dec(v_a_5259_);
return v_res_5261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(lean_object* v_m_5262_, lean_object* v_a_5263_){
_start:
{
lean_object* v_buckets_5264_; lean_object* v___x_5265_; uint64_t v___x_5266_; uint64_t v___x_5267_; uint64_t v___x_5268_; uint64_t v_fold_5269_; uint64_t v___x_5270_; uint64_t v___x_5271_; uint64_t v___x_5272_; size_t v___x_5273_; size_t v___x_5274_; size_t v___x_5275_; size_t v___x_5276_; size_t v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; 
v_buckets_5264_ = lean_ctor_get(v_m_5262_, 1);
v___x_5265_ = lean_array_get_size(v_buckets_5264_);
v___x_5266_ = l_Lean_instHashableFVarId_hash(v_a_5263_);
v___x_5267_ = 32ULL;
v___x_5268_ = lean_uint64_shift_right(v___x_5266_, v___x_5267_);
v_fold_5269_ = lean_uint64_xor(v___x_5266_, v___x_5268_);
v___x_5270_ = 16ULL;
v___x_5271_ = lean_uint64_shift_right(v_fold_5269_, v___x_5270_);
v___x_5272_ = lean_uint64_xor(v_fold_5269_, v___x_5271_);
v___x_5273_ = lean_uint64_to_usize(v___x_5272_);
v___x_5274_ = lean_usize_of_nat(v___x_5265_);
v___x_5275_ = ((size_t)1ULL);
v___x_5276_ = lean_usize_sub(v___x_5274_, v___x_5275_);
v___x_5277_ = lean_usize_land(v___x_5273_, v___x_5276_);
v___x_5278_ = lean_array_uget_borrowed(v_buckets_5264_, v___x_5277_);
v___x_5279_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5263_, v___x_5278_);
return v___x_5279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg___boxed(lean_object* v_m_5280_, lean_object* v_a_5281_){
_start:
{
lean_object* v_res_5282_; 
v_res_5282_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_m_5280_, v_a_5281_);
lean_dec(v_a_5281_);
lean_dec_ref(v_m_5280_);
return v_res_5282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(lean_object* v_assignment_5283_, lean_object* v_as_5284_, size_t v_i_5285_, size_t v_stop_5286_, lean_object* v_b_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_){
_start:
{
lean_object* v_a_5294_; uint8_t v___x_5298_; 
v___x_5298_ = lean_usize_dec_eq(v_i_5285_, v_stop_5286_);
if (v___x_5298_ == 0)
{
lean_object* v___x_5299_; lean_object* v_fvarId_5300_; lean_object* v___x_5301_; 
v___x_5299_ = lean_array_uget_borrowed(v_as_5284_, v_i_5285_);
v_fvarId_5300_ = lean_ctor_get(v___x_5299_, 0);
v___x_5301_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_assignment_5283_, v_fvarId_5300_);
if (lean_obj_tag(v___x_5301_) == 1)
{
lean_object* v_val_5302_; lean_object* v___x_5303_; 
v_val_5302_ = lean_ctor_get(v___x_5301_, 0);
lean_inc(v_val_5302_);
lean_dec_ref_known(v___x_5301_, 1);
v___x_5303_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(v_val_5302_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_);
if (lean_obj_tag(v___x_5303_) == 0)
{
lean_object* v_a_5304_; 
v_a_5304_ = lean_ctor_get(v___x_5303_, 0);
lean_inc(v_a_5304_);
lean_dec_ref_known(v___x_5303_, 1);
if (lean_obj_tag(v_a_5304_) == 1)
{
lean_object* v_val_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; 
v_val_5305_ = lean_ctor_get(v_a_5304_, 0);
lean_inc(v_val_5305_);
lean_dec_ref_known(v_a_5304_, 1);
lean_inc(v___x_5299_);
v___x_5306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5306_, 0, v___x_5299_);
lean_ctor_set(v___x_5306_, 1, v_val_5305_);
v___x_5307_ = lean_array_push(v_b_5287_, v___x_5306_);
v_a_5294_ = v___x_5307_;
goto v___jp_5293_;
}
else
{
lean_dec(v_a_5304_);
v_a_5294_ = v_b_5287_;
goto v___jp_5293_;
}
}
else
{
lean_object* v_a_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5315_; 
lean_dec_ref(v_b_5287_);
v_a_5308_ = lean_ctor_get(v___x_5303_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5303_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5310_ = v___x_5303_;
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_a_5308_);
lean_dec(v___x_5303_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
lean_object* v___x_5313_; 
if (v_isShared_5311_ == 0)
{
v___x_5313_ = v___x_5310_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5308_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
}
else
{
lean_dec(v___x_5301_);
v_a_5294_ = v_b_5287_;
goto v___jp_5293_;
}
}
else
{
lean_object* v___x_5316_; 
v___x_5316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5316_, 0, v_b_5287_);
return v___x_5316_;
}
v___jp_5293_:
{
size_t v___x_5295_; size_t v___x_5296_; 
v___x_5295_ = ((size_t)1ULL);
v___x_5296_ = lean_usize_add(v_i_5285_, v___x_5295_);
v_i_5285_ = v___x_5296_;
v_b_5287_ = v_a_5294_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4___boxed(lean_object* v_assignment_5317_, lean_object* v_as_5318_, lean_object* v_i_5319_, lean_object* v_stop_5320_, lean_object* v_b_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_){
_start:
{
size_t v_i_boxed_5327_; size_t v_stop_boxed_5328_; lean_object* v_res_5329_; 
v_i_boxed_5327_ = lean_unbox_usize(v_i_5319_);
lean_dec(v_i_5319_);
v_stop_boxed_5328_ = lean_unbox_usize(v_stop_5320_);
lean_dec(v_stop_5320_);
v_res_5329_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(v_assignment_5317_, v_as_5318_, v_i_boxed_5327_, v_stop_boxed_5328_, v_b_5321_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v___y_5323_);
lean_dec_ref(v___y_5322_);
lean_dec_ref(v_as_5318_);
lean_dec_ref(v_assignment_5317_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(lean_object* v_assignment_5332_, lean_object* v_as_5333_, lean_object* v_start_5334_, lean_object* v_stop_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_){
_start:
{
lean_object* v___x_5341_; uint8_t v___x_5342_; 
v___x_5341_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0));
v___x_5342_ = lean_nat_dec_lt(v_start_5334_, v_stop_5335_);
if (v___x_5342_ == 0)
{
lean_object* v___x_5343_; 
v___x_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5343_, 0, v___x_5341_);
return v___x_5343_;
}
else
{
lean_object* v___x_5344_; uint8_t v___x_5345_; 
v___x_5344_ = lean_array_get_size(v_as_5333_);
v___x_5345_ = lean_nat_dec_le(v_stop_5335_, v___x_5344_);
if (v___x_5345_ == 0)
{
uint8_t v___x_5346_; 
v___x_5346_ = lean_nat_dec_lt(v_start_5334_, v___x_5344_);
if (v___x_5346_ == 0)
{
lean_object* v___x_5347_; 
v___x_5347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5347_, 0, v___x_5341_);
return v___x_5347_;
}
else
{
size_t v___x_5348_; size_t v___x_5349_; lean_object* v___x_5350_; 
v___x_5348_ = lean_usize_of_nat(v_start_5334_);
v___x_5349_ = lean_usize_of_nat(v___x_5344_);
v___x_5350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(v_assignment_5332_, v_as_5333_, v___x_5348_, v___x_5349_, v___x_5341_, v___y_5336_, v___y_5337_, v___y_5338_, v___y_5339_);
return v___x_5350_;
}
}
else
{
size_t v___x_5351_; size_t v___x_5352_; lean_object* v___x_5353_; 
v___x_5351_ = lean_usize_of_nat(v_start_5334_);
v___x_5352_ = lean_usize_of_nat(v_stop_5335_);
v___x_5353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(v_assignment_5332_, v_as_5333_, v___x_5351_, v___x_5352_, v___x_5341_, v___y_5336_, v___y_5337_, v___y_5338_, v___y_5339_);
return v___x_5353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___boxed(lean_object* v_assignment_5354_, lean_object* v_as_5355_, lean_object* v_start_5356_, lean_object* v_stop_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_assignment_5354_, v_as_5355_, v_start_5356_, v_stop_5357_, v___y_5358_, v___y_5359_, v___y_5360_, v___y_5361_);
lean_dec(v___y_5361_);
lean_dec_ref(v___y_5360_);
lean_dec(v___y_5359_);
lean_dec_ref(v___y_5358_);
lean_dec(v_stop_5357_);
lean_dec(v_start_5356_);
lean_dec_ref(v_as_5355_);
lean_dec_ref(v_assignment_5354_);
return v_res_5363_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2(void){
_start:
{
lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; 
v___x_5366_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_5367_ = lean_unsigned_to_nat(9u);
v___x_5368_ = lean_unsigned_to_nat(650u);
v___x_5369_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1));
v___x_5370_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0));
v___x_5371_ = l_mkPanicMessageWithDecl(v___x_5370_, v___x_5369_, v___x_5368_, v___x_5367_, v___x_5366_);
return v___x_5371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(lean_object* v_resultType_5374_, lean_object* v_discrVal_5375_, lean_object* v_discr_5376_, lean_object* v_assignment_5377_, lean_object* v_i_5378_, lean_object* v_as_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_){
_start:
{
lean_object* v___x_5385_; uint8_t v___x_5386_; 
v___x_5385_ = lean_array_get_size(v_as_5379_);
v___x_5386_ = lean_nat_dec_lt(v_i_5378_, v___x_5385_);
if (v___x_5386_ == 0)
{
lean_object* v___x_5387_; 
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v___x_5387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5387_, 0, v_as_5379_);
return v___x_5387_;
}
else
{
lean_object* v_a_5388_; lean_object* v_a_5390_; 
v_a_5388_ = lean_array_fget_borrowed(v_as_5379_, v_i_5378_);
if (lean_obj_tag(v_a_5388_) == 0)
{
lean_object* v_ctorName_5401_; lean_object* v_params_5402_; lean_object* v_code_5403_; uint8_t v___x_5404_; lean_object* v___y_5406_; lean_object* v___y_5407_; lean_object* v___y_5420_; uint8_t v___x_5424_; 
v_ctorName_5401_ = lean_ctor_get(v_a_5388_, 0);
v_params_5402_ = lean_ctor_get(v_a_5388_, 1);
v_code_5403_ = lean_ctor_get(v_a_5388_, 2);
v___x_5404_ = 0;
v___x_5424_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_discrVal_5375_, v_ctorName_5401_);
if (v___x_5424_ == 0)
{
lean_object* v_toCold_5425_; lean_object* v_options_5426_; uint8_t v_hasTrace_5427_; 
v_toCold_5425_ = lean_ctor_get(v___y_5382_, 0);
v_options_5426_ = lean_ctor_get(v_toCold_5425_, 2);
v_hasTrace_5427_ = lean_ctor_get_uint8(v_options_5426_, sizeof(void*)*1);
if (v_hasTrace_5427_ == 0)
{
v___y_5420_ = v___y_5381_;
goto v___jp_5419_;
}
else
{
lean_object* v_inheritedTraceOptions_5428_; lean_object* v_cls_5429_; lean_object* v___x_5430_; uint8_t v___x_5431_; 
v_inheritedTraceOptions_5428_ = lean_ctor_get(v_toCold_5425_, 11);
v_cls_5429_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_5430_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_5431_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5428_, v_options_5426_, v___x_5430_);
if (v___x_5431_ == 0)
{
v___y_5420_ = v___y_5381_;
goto v___jp_5419_;
}
else
{
lean_object* v___x_5432_; 
lean_inc(v_discr_5376_);
v___x_5432_ = l_Lean_Compiler_LCNF_getBinderName(v_discr_5376_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
if (lean_obj_tag(v___x_5432_) == 0)
{
lean_object* v_a_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; 
v_a_5433_ = lean_ctor_get(v___x_5432_, 0);
lean_inc(v_a_5433_);
lean_dec_ref_known(v___x_5432_, 1);
v___x_5434_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0));
v___x_5435_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_5433_, v___x_5431_);
v___x_5436_ = lean_string_append(v___x_5434_, v___x_5435_);
lean_dec_ref(v___x_5435_);
v___x_5437_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1));
v___x_5438_ = lean_string_append(v___x_5436_, v___x_5437_);
lean_inc(v_ctorName_5401_);
v___x_5439_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_ctorName_5401_, v___x_5431_);
v___x_5440_ = lean_string_append(v___x_5438_, v___x_5439_);
lean_dec_ref(v___x_5439_);
v___x_5441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5440_);
v___x_5442_ = l_Lean_MessageData_ofFormat(v___x_5441_);
v___x_5443_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_5429_, v___x_5442_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
if (lean_obj_tag(v___x_5443_) == 0)
{
lean_dec_ref_known(v___x_5443_, 1);
v___y_5420_ = v___y_5381_;
goto v___jp_5419_;
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5446_; uint8_t v_isShared_5447_; uint8_t v_isSharedCheck_5451_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5444_ = lean_ctor_get(v___x_5443_, 0);
v_isSharedCheck_5451_ = !lean_is_exclusive(v___x_5443_);
if (v_isSharedCheck_5451_ == 0)
{
v___x_5446_ = v___x_5443_;
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
else
{
lean_inc(v_a_5444_);
lean_dec(v___x_5443_);
v___x_5446_ = lean_box(0);
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
v_resetjp_5445_:
{
lean_object* v___x_5449_; 
if (v_isShared_5447_ == 0)
{
v___x_5449_ = v___x_5446_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v_a_5444_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
return v___x_5449_;
}
}
}
}
else
{
lean_object* v_a_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5459_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5452_ = lean_ctor_get(v___x_5432_, 0);
v_isSharedCheck_5459_ = !lean_is_exclusive(v___x_5432_);
if (v_isSharedCheck_5459_ == 0)
{
v___x_5454_ = v___x_5432_;
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_a_5452_);
lean_dec(v___x_5432_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v___x_5457_; 
if (v_isShared_5455_ == 0)
{
v___x_5457_ = v___x_5454_;
goto v_reusejp_5456_;
}
else
{
lean_object* v_reuseFailAlloc_5458_; 
v_reuseFailAlloc_5458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5458_, 0, v_a_5452_);
v___x_5457_ = v_reuseFailAlloc_5458_;
goto v_reusejp_5456_;
}
v_reusejp_5456_:
{
return v___x_5457_;
}
}
}
}
}
}
else
{
lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; 
v___x_5460_ = lean_unsigned_to_nat(0u);
v___x_5461_ = lean_array_get_size(v_params_5402_);
v___x_5462_ = l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_assignment_5377_, v_params_5402_, v___x_5460_, v___x_5461_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
if (lean_obj_tag(v___x_5462_) == 0)
{
lean_object* v_a_5463_; lean_object* v___x_5476_; uint8_t v___x_5477_; lean_object* v_fst_5479_; lean_object* v_snd_5480_; lean_object* v___y_5493_; 
v_a_5463_ = lean_ctor_get(v___x_5462_, 0);
lean_inc(v_a_5463_);
lean_dec_ref_known(v___x_5462_, 1);
v___x_5476_ = lean_array_get_size(v_a_5463_);
v___x_5477_ = lean_nat_dec_eq(v___x_5476_, v___x_5460_);
if (v___x_5477_ == 0)
{
if (v___x_5424_ == 0)
{
lean_dec(v_a_5463_);
goto v___jp_5464_;
}
else
{
lean_object* v___x_5505_; 
lean_inc_ref(v_code_5403_);
v___x_5505_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5377_, v_code_5403_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
if (lean_obj_tag(v___x_5505_) == 0)
{
lean_object* v_a_5506_; lean_object* v___x_5507_; uint8_t v___x_5508_; 
v_a_5506_ = lean_ctor_get(v___x_5505_, 0);
lean_inc(v_a_5506_);
lean_dec_ref_known(v___x_5505_, 1);
v___x_5507_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1);
v___x_5508_ = lean_nat_dec_lt(v___x_5460_, v___x_5476_);
if (v___x_5508_ == 0)
{
lean_dec(v_a_5463_);
v_fst_5479_ = v_a_5506_;
v_snd_5480_ = v___x_5507_;
goto v___jp_5478_;
}
else
{
lean_object* v___x_5509_; uint8_t v___x_5510_; 
lean_inc(v_a_5506_);
v___x_5509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5509_, 0, v_a_5506_);
lean_ctor_set(v___x_5509_, 1, v___x_5507_);
v___x_5510_ = lean_nat_dec_le(v___x_5476_, v___x_5476_);
if (v___x_5510_ == 0)
{
if (v___x_5508_ == 0)
{
lean_dec_ref_known(v___x_5509_, 2);
lean_dec(v_a_5463_);
v_fst_5479_ = v_a_5506_;
v_snd_5480_ = v___x_5507_;
goto v___jp_5478_;
}
else
{
size_t v___x_5511_; size_t v___x_5512_; lean_object* v___x_5513_; 
lean_dec(v_a_5506_);
v___x_5511_ = ((size_t)0ULL);
v___x_5512_ = lean_usize_of_nat(v___x_5476_);
v___x_5513_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_a_5463_, v___x_5511_, v___x_5512_, v___x_5509_);
lean_dec(v_a_5463_);
v___y_5493_ = v___x_5513_;
goto v___jp_5492_;
}
}
else
{
size_t v___x_5514_; size_t v___x_5515_; lean_object* v___x_5516_; 
lean_dec(v_a_5506_);
v___x_5514_ = ((size_t)0ULL);
v___x_5515_ = lean_usize_of_nat(v___x_5476_);
v___x_5516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_a_5463_, v___x_5514_, v___x_5515_, v___x_5509_);
lean_dec(v_a_5463_);
v___y_5493_ = v___x_5516_;
goto v___jp_5492_;
}
}
}
else
{
lean_object* v_a_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5524_; 
lean_dec(v_a_5463_);
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5517_ = lean_ctor_get(v___x_5505_, 0);
v_isSharedCheck_5524_ = !lean_is_exclusive(v___x_5505_);
if (v_isSharedCheck_5524_ == 0)
{
v___x_5519_ = v___x_5505_;
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_a_5517_);
lean_dec(v___x_5505_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
lean_object* v___x_5522_; 
if (v_isShared_5520_ == 0)
{
v___x_5522_ = v___x_5519_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_a_5517_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
}
}
else
{
lean_dec(v_a_5463_);
goto v___jp_5464_;
}
v___jp_5464_:
{
lean_object* v___x_5465_; 
lean_inc_ref(v_code_5403_);
v___x_5465_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5377_, v_code_5403_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
if (lean_obj_tag(v___x_5465_) == 0)
{
lean_object* v_a_5466_; lean_object* v___x_5467_; 
v_a_5466_ = lean_ctor_get(v___x_5465_, 0);
lean_inc(v_a_5466_);
lean_dec_ref_known(v___x_5465_, 1);
lean_inc_ref(v_a_5388_);
v___x_5467_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5388_, v_a_5466_);
v_a_5390_ = v___x_5467_;
goto v___jp_5389_;
}
else
{
lean_object* v_a_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5475_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5468_ = lean_ctor_get(v___x_5465_, 0);
v_isSharedCheck_5475_ = !lean_is_exclusive(v___x_5465_);
if (v_isSharedCheck_5475_ == 0)
{
v___x_5470_ = v___x_5465_;
v_isShared_5471_ = v_isSharedCheck_5475_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_a_5468_);
lean_dec(v___x_5465_);
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
v___jp_5478_:
{
lean_object* v___x_5481_; 
v___x_5481_ = l_Lean_Compiler_LCNF_replaceFVars(v___x_5404_, v_fst_5479_, v_snd_5480_, v___x_5477_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
lean_dec_ref(v_snd_5480_);
if (lean_obj_tag(v___x_5481_) == 0)
{
lean_object* v_a_5482_; lean_object* v___x_5483_; 
v_a_5482_ = lean_ctor_get(v___x_5481_, 0);
lean_inc(v_a_5482_);
lean_dec_ref_known(v___x_5481_, 1);
lean_inc_ref(v_a_5388_);
v___x_5483_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5388_, v_a_5482_);
v_a_5390_ = v___x_5483_;
goto v___jp_5389_;
}
else
{
lean_object* v_a_5484_; lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5491_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5484_ = lean_ctor_get(v___x_5481_, 0);
v_isSharedCheck_5491_ = !lean_is_exclusive(v___x_5481_);
if (v_isSharedCheck_5491_ == 0)
{
v___x_5486_ = v___x_5481_;
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
else
{
lean_inc(v_a_5484_);
lean_dec(v___x_5481_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v___x_5489_; 
if (v_isShared_5487_ == 0)
{
v___x_5489_ = v___x_5486_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5490_; 
v_reuseFailAlloc_5490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5490_, 0, v_a_5484_);
v___x_5489_ = v_reuseFailAlloc_5490_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
return v___x_5489_;
}
}
}
}
v___jp_5492_:
{
if (lean_obj_tag(v___y_5493_) == 0)
{
lean_object* v_a_5494_; lean_object* v_fst_5495_; lean_object* v_snd_5496_; 
v_a_5494_ = lean_ctor_get(v___y_5493_, 0);
lean_inc(v_a_5494_);
lean_dec_ref_known(v___y_5493_, 1);
v_fst_5495_ = lean_ctor_get(v_a_5494_, 0);
lean_inc(v_fst_5495_);
v_snd_5496_ = lean_ctor_get(v_a_5494_, 1);
lean_inc(v_snd_5496_);
lean_dec(v_a_5494_);
v_fst_5479_ = v_fst_5495_;
v_snd_5480_ = v_snd_5496_;
goto v___jp_5478_;
}
else
{
lean_object* v_a_5497_; lean_object* v___x_5499_; uint8_t v_isShared_5500_; uint8_t v_isSharedCheck_5504_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5497_ = lean_ctor_get(v___y_5493_, 0);
v_isSharedCheck_5504_ = !lean_is_exclusive(v___y_5493_);
if (v_isSharedCheck_5504_ == 0)
{
v___x_5499_ = v___y_5493_;
v_isShared_5500_ = v_isSharedCheck_5504_;
goto v_resetjp_5498_;
}
else
{
lean_inc(v_a_5497_);
lean_dec(v___y_5493_);
v___x_5499_ = lean_box(0);
v_isShared_5500_ = v_isSharedCheck_5504_;
goto v_resetjp_5498_;
}
v_resetjp_5498_:
{
lean_object* v___x_5502_; 
if (v_isShared_5500_ == 0)
{
v___x_5502_ = v___x_5499_;
goto v_reusejp_5501_;
}
else
{
lean_object* v_reuseFailAlloc_5503_; 
v_reuseFailAlloc_5503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5503_, 0, v_a_5497_);
v___x_5502_ = v_reuseFailAlloc_5503_;
goto v_reusejp_5501_;
}
v_reusejp_5501_:
{
return v___x_5502_;
}
}
}
}
}
else
{
lean_object* v_a_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5532_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5525_ = lean_ctor_get(v___x_5462_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5462_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5527_ = v___x_5462_;
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_a_5525_);
lean_dec(v___x_5462_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5530_; 
if (v_isShared_5528_ == 0)
{
v___x_5530_ = v___x_5527_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_a_5525_);
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
v___jp_5405_:
{
lean_object* v___x_5408_; 
v___x_5408_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_5404_, v___y_5407_, v___y_5406_);
lean_dec_ref(v___y_5407_);
if (lean_obj_tag(v___x_5408_) == 0)
{
lean_object* v___x_5409_; lean_object* v___x_5410_; 
lean_dec_ref_known(v___x_5408_, 1);
lean_inc_ref(v_resultType_5374_);
v___x_5409_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5409_, 0, v_resultType_5374_);
lean_inc_ref(v_a_5388_);
v___x_5410_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5388_, v___x_5409_);
v_a_5390_ = v___x_5410_;
goto v___jp_5389_;
}
else
{
lean_object* v_a_5411_; lean_object* v___x_5413_; uint8_t v_isShared_5414_; uint8_t v_isSharedCheck_5418_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5411_ = lean_ctor_get(v___x_5408_, 0);
v_isSharedCheck_5418_ = !lean_is_exclusive(v___x_5408_);
if (v_isSharedCheck_5418_ == 0)
{
v___x_5413_ = v___x_5408_;
v_isShared_5414_ = v_isSharedCheck_5418_;
goto v_resetjp_5412_;
}
else
{
lean_inc(v_a_5411_);
lean_dec(v___x_5408_);
v___x_5413_ = lean_box(0);
v_isShared_5414_ = v_isSharedCheck_5418_;
goto v_resetjp_5412_;
}
v_resetjp_5412_:
{
lean_object* v___x_5416_; 
if (v_isShared_5414_ == 0)
{
v___x_5416_ = v___x_5413_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v_a_5411_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
}
}
}
}
v___jp_5419_:
{
switch(lean_obj_tag(v_a_5388_))
{
case 0:
{
lean_object* v_code_5421_; 
v_code_5421_ = lean_ctor_get(v_a_5388_, 2);
lean_inc_ref(v_code_5421_);
v___y_5406_ = v___y_5420_;
v___y_5407_ = v_code_5421_;
goto v___jp_5405_;
}
case 1:
{
lean_object* v_code_5422_; 
v_code_5422_ = lean_ctor_get(v_a_5388_, 1);
lean_inc_ref(v_code_5422_);
v___y_5406_ = v___y_5420_;
v___y_5407_ = v_code_5422_;
goto v___jp_5405_;
}
default: 
{
lean_object* v_code_5423_; 
v_code_5423_ = lean_ctor_get(v_a_5388_, 0);
lean_inc_ref(v_code_5423_);
v___y_5406_ = v___y_5420_;
v___y_5407_ = v_code_5423_;
goto v___jp_5405_;
}
}
}
}
else
{
lean_object* v_code_5533_; lean_object* v___x_5534_; 
v_code_5533_ = lean_ctor_get(v_a_5388_, 0);
lean_inc_ref(v_code_5533_);
v___x_5534_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5377_, v_code_5533_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
if (lean_obj_tag(v___x_5534_) == 0)
{
lean_object* v_a_5535_; lean_object* v___x_5536_; 
v_a_5535_ = lean_ctor_get(v___x_5534_, 0);
lean_inc(v_a_5535_);
lean_dec_ref_known(v___x_5534_, 1);
lean_inc_ref(v_a_5388_);
v___x_5536_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5388_, v_a_5535_);
v_a_5390_ = v___x_5536_;
goto v___jp_5389_;
}
else
{
lean_object* v_a_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5544_; 
lean_dec_ref(v_as_5379_);
lean_dec(v_i_5378_);
lean_dec(v_discr_5376_);
lean_dec_ref(v_resultType_5374_);
v_a_5537_ = lean_ctor_get(v___x_5534_, 0);
v_isSharedCheck_5544_ = !lean_is_exclusive(v___x_5534_);
if (v_isSharedCheck_5544_ == 0)
{
v___x_5539_ = v___x_5534_;
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_a_5537_);
lean_dec(v___x_5534_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5542_; 
if (v_isShared_5540_ == 0)
{
v___x_5542_ = v___x_5539_;
goto v_reusejp_5541_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v_a_5537_);
v___x_5542_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5541_;
}
v_reusejp_5541_:
{
return v___x_5542_;
}
}
}
}
v___jp_5389_:
{
size_t v___x_5391_; size_t v___x_5392_; uint8_t v___x_5393_; 
v___x_5391_ = lean_ptr_addr(v_a_5388_);
v___x_5392_ = lean_ptr_addr(v_a_5390_);
v___x_5393_ = lean_usize_dec_eq(v___x_5391_, v___x_5392_);
if (v___x_5393_ == 0)
{
lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; 
v___x_5394_ = lean_unsigned_to_nat(1u);
v___x_5395_ = lean_nat_add(v_i_5378_, v___x_5394_);
v___x_5396_ = lean_array_fset(v_as_5379_, v_i_5378_, v_a_5390_);
lean_dec(v_i_5378_);
v_i_5378_ = v___x_5395_;
v_as_5379_ = v___x_5396_;
goto _start;
}
else
{
lean_object* v___x_5398_; lean_object* v___x_5399_; 
lean_dec_ref(v_a_5390_);
v___x_5398_ = lean_unsigned_to_nat(1u);
v___x_5399_ = lean_nat_add(v_i_5378_, v___x_5398_);
lean_dec(v_i_5378_);
v_i_5378_ = v___x_5399_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(lean_object* v_assignment_5545_, lean_object* v_code_5546_, lean_object* v_a_5547_, lean_object* v_a_5548_, lean_object* v_a_5549_, lean_object* v_a_5550_){
_start:
{
lean_object* v_decl_5553_; lean_object* v_k_5554_; lean_object* v___y_5555_; lean_object* v___y_5556_; lean_object* v___y_5557_; lean_object* v___y_5558_; 
switch(lean_obj_tag(v_code_5546_))
{
case 0:
{
lean_object* v_decl_5666_; lean_object* v_k_5667_; lean_object* v___x_5668_; 
v_decl_5666_ = lean_ctor_get(v_code_5546_, 0);
v_k_5667_ = lean_ctor_get(v_code_5546_, 1);
lean_inc_ref(v_k_5667_);
v___x_5668_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5545_, v_k_5667_, v_a_5547_, v_a_5548_, v_a_5549_, v_a_5550_);
if (lean_obj_tag(v___x_5668_) == 0)
{
lean_object* v_a_5669_; lean_object* v___x_5671_; uint8_t v_isShared_5672_; uint8_t v_isSharedCheck_5705_; 
v_a_5669_ = lean_ctor_get(v___x_5668_, 0);
v_isSharedCheck_5705_ = !lean_is_exclusive(v___x_5668_);
if (v_isSharedCheck_5705_ == 0)
{
v___x_5671_ = v___x_5668_;
v_isShared_5672_ = v_isSharedCheck_5705_;
goto v_resetjp_5670_;
}
else
{
lean_inc(v_a_5669_);
lean_dec(v___x_5668_);
v___x_5671_ = lean_box(0);
v_isShared_5672_ = v_isSharedCheck_5705_;
goto v_resetjp_5670_;
}
v_resetjp_5670_:
{
size_t v___x_5673_; size_t v___x_5674_; uint8_t v___x_5675_; 
v___x_5673_ = lean_ptr_addr(v_k_5667_);
v___x_5674_ = lean_ptr_addr(v_a_5669_);
v___x_5675_ = lean_usize_dec_eq(v___x_5673_, v___x_5674_);
if (v___x_5675_ == 0)
{
lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5685_; 
lean_inc_ref(v_decl_5666_);
v_isSharedCheck_5685_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5685_ == 0)
{
lean_object* v_unused_5686_; lean_object* v_unused_5687_; 
v_unused_5686_ = lean_ctor_get(v_code_5546_, 1);
lean_dec(v_unused_5686_);
v_unused_5687_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5687_);
v___x_5677_ = v_code_5546_;
v_isShared_5678_ = v_isSharedCheck_5685_;
goto v_resetjp_5676_;
}
else
{
lean_dec(v_code_5546_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5685_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v___x_5680_; 
if (v_isShared_5678_ == 0)
{
lean_ctor_set(v___x_5677_, 1, v_a_5669_);
v___x_5680_ = v___x_5677_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v_decl_5666_);
lean_ctor_set(v_reuseFailAlloc_5684_, 1, v_a_5669_);
v___x_5680_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
lean_object* v___x_5682_; 
if (v_isShared_5672_ == 0)
{
lean_ctor_set(v___x_5671_, 0, v___x_5680_);
v___x_5682_ = v___x_5671_;
goto v_reusejp_5681_;
}
else
{
lean_object* v_reuseFailAlloc_5683_; 
v_reuseFailAlloc_5683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5683_, 0, v___x_5680_);
v___x_5682_ = v_reuseFailAlloc_5683_;
goto v_reusejp_5681_;
}
v_reusejp_5681_:
{
return v___x_5682_;
}
}
}
}
else
{
size_t v___x_5688_; uint8_t v___x_5689_; 
v___x_5688_ = lean_ptr_addr(v_decl_5666_);
v___x_5689_ = lean_usize_dec_eq(v___x_5688_, v___x_5688_);
if (v___x_5689_ == 0)
{
lean_object* v___x_5691_; uint8_t v_isShared_5692_; uint8_t v_isSharedCheck_5699_; 
lean_inc_ref(v_decl_5666_);
v_isSharedCheck_5699_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5699_ == 0)
{
lean_object* v_unused_5700_; lean_object* v_unused_5701_; 
v_unused_5700_ = lean_ctor_get(v_code_5546_, 1);
lean_dec(v_unused_5700_);
v_unused_5701_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5701_);
v___x_5691_ = v_code_5546_;
v_isShared_5692_ = v_isSharedCheck_5699_;
goto v_resetjp_5690_;
}
else
{
lean_dec(v_code_5546_);
v___x_5691_ = lean_box(0);
v_isShared_5692_ = v_isSharedCheck_5699_;
goto v_resetjp_5690_;
}
v_resetjp_5690_:
{
lean_object* v___x_5694_; 
if (v_isShared_5692_ == 0)
{
lean_ctor_set(v___x_5691_, 1, v_a_5669_);
v___x_5694_ = v___x_5691_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5698_; 
v_reuseFailAlloc_5698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5698_, 0, v_decl_5666_);
lean_ctor_set(v_reuseFailAlloc_5698_, 1, v_a_5669_);
v___x_5694_ = v_reuseFailAlloc_5698_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
lean_object* v___x_5696_; 
if (v_isShared_5672_ == 0)
{
lean_ctor_set(v___x_5671_, 0, v___x_5694_);
v___x_5696_ = v___x_5671_;
goto v_reusejp_5695_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v___x_5694_);
v___x_5696_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5695_;
}
v_reusejp_5695_:
{
return v___x_5696_;
}
}
}
}
else
{
lean_object* v___x_5703_; 
lean_dec(v_a_5669_);
if (v_isShared_5672_ == 0)
{
lean_ctor_set(v___x_5671_, 0, v_code_5546_);
v___x_5703_ = v___x_5671_;
goto v_reusejp_5702_;
}
else
{
lean_object* v_reuseFailAlloc_5704_; 
v_reuseFailAlloc_5704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5704_, 0, v_code_5546_);
v___x_5703_ = v_reuseFailAlloc_5704_;
goto v_reusejp_5702_;
}
v_reusejp_5702_:
{
return v___x_5703_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_5546_, 2);
return v___x_5668_;
}
}
case 1:
{
lean_object* v_decl_5706_; lean_object* v_k_5707_; 
v_decl_5706_ = lean_ctor_get(v_code_5546_, 0);
v_k_5707_ = lean_ctor_get(v_code_5546_, 1);
lean_inc_ref(v_k_5707_);
lean_inc_ref(v_decl_5706_);
v_decl_5553_ = v_decl_5706_;
v_k_5554_ = v_k_5707_;
v___y_5555_ = v_a_5547_;
v___y_5556_ = v_a_5548_;
v___y_5557_ = v_a_5549_;
v___y_5558_ = v_a_5550_;
goto v___jp_5552_;
}
case 2:
{
lean_object* v_decl_5708_; lean_object* v_k_5709_; 
v_decl_5708_ = lean_ctor_get(v_code_5546_, 0);
v_k_5709_ = lean_ctor_get(v_code_5546_, 1);
lean_inc_ref(v_k_5709_);
lean_inc_ref(v_decl_5708_);
v_decl_5553_ = v_decl_5708_;
v_k_5554_ = v_k_5709_;
v___y_5555_ = v_a_5547_;
v___y_5556_ = v_a_5548_;
v___y_5557_ = v_a_5549_;
v___y_5558_ = v_a_5550_;
goto v___jp_5552_;
}
case 4:
{
lean_object* v_cases_5710_; lean_object* v_typeName_5711_; lean_object* v_resultType_5712_; lean_object* v_discr_5713_; lean_object* v_alts_5714_; lean_object* v___x_5716_; uint8_t v_isShared_5717_; uint8_t v_isSharedCheck_5755_; 
v_cases_5710_ = lean_ctor_get(v_code_5546_, 0);
lean_inc_ref(v_cases_5710_);
v_typeName_5711_ = lean_ctor_get(v_cases_5710_, 0);
v_resultType_5712_ = lean_ctor_get(v_cases_5710_, 1);
v_discr_5713_ = lean_ctor_get(v_cases_5710_, 2);
v_alts_5714_ = lean_ctor_get(v_cases_5710_, 3);
v_isSharedCheck_5755_ = !lean_is_exclusive(v_cases_5710_);
if (v_isSharedCheck_5755_ == 0)
{
v___x_5716_ = v_cases_5710_;
v_isShared_5717_ = v_isSharedCheck_5755_;
goto v_resetjp_5715_;
}
else
{
lean_inc(v_alts_5714_);
lean_inc(v_discr_5713_);
lean_inc(v_resultType_5712_);
lean_inc(v_typeName_5711_);
lean_dec(v_cases_5710_);
v___x_5716_ = lean_box(0);
v_isShared_5717_ = v_isSharedCheck_5755_;
goto v_resetjp_5715_;
}
v_resetjp_5715_:
{
lean_object* v___x_5718_; lean_object* v_discrVal_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; 
v___x_5718_ = lean_box(0);
v_discrVal_5719_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_assignment_5545_, v_discr_5713_, v___x_5718_);
v___x_5720_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_5714_);
lean_inc(v_discr_5713_);
lean_inc_ref(v_resultType_5712_);
v___x_5721_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(v_resultType_5712_, v_discrVal_5719_, v_discr_5713_, v_assignment_5545_, v___x_5720_, v_alts_5714_, v_a_5547_, v_a_5548_, v_a_5549_, v_a_5550_);
lean_dec(v_discrVal_5719_);
if (lean_obj_tag(v___x_5721_) == 0)
{
lean_object* v_a_5722_; lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5746_; 
v_a_5722_ = lean_ctor_get(v___x_5721_, 0);
v_isSharedCheck_5746_ = !lean_is_exclusive(v___x_5721_);
if (v_isSharedCheck_5746_ == 0)
{
v___x_5724_ = v___x_5721_;
v_isShared_5725_ = v_isSharedCheck_5746_;
goto v_resetjp_5723_;
}
else
{
lean_inc(v_a_5722_);
lean_dec(v___x_5721_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5746_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
size_t v___x_5726_; size_t v___x_5727_; uint8_t v___x_5728_; 
v___x_5726_ = lean_ptr_addr(v_alts_5714_);
lean_dec_ref(v_alts_5714_);
v___x_5727_ = lean_ptr_addr(v_a_5722_);
v___x_5728_ = lean_usize_dec_eq(v___x_5726_, v___x_5727_);
if (v___x_5728_ == 0)
{
lean_object* v___x_5730_; uint8_t v_isShared_5731_; uint8_t v_isSharedCheck_5741_; 
v_isSharedCheck_5741_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5741_ == 0)
{
lean_object* v_unused_5742_; 
v_unused_5742_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5742_);
v___x_5730_ = v_code_5546_;
v_isShared_5731_ = v_isSharedCheck_5741_;
goto v_resetjp_5729_;
}
else
{
lean_dec(v_code_5546_);
v___x_5730_ = lean_box(0);
v_isShared_5731_ = v_isSharedCheck_5741_;
goto v_resetjp_5729_;
}
v_resetjp_5729_:
{
lean_object* v___x_5733_; 
if (v_isShared_5717_ == 0)
{
lean_ctor_set(v___x_5716_, 3, v_a_5722_);
v___x_5733_ = v___x_5716_;
goto v_reusejp_5732_;
}
else
{
lean_object* v_reuseFailAlloc_5740_; 
v_reuseFailAlloc_5740_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5740_, 0, v_typeName_5711_);
lean_ctor_set(v_reuseFailAlloc_5740_, 1, v_resultType_5712_);
lean_ctor_set(v_reuseFailAlloc_5740_, 2, v_discr_5713_);
lean_ctor_set(v_reuseFailAlloc_5740_, 3, v_a_5722_);
v___x_5733_ = v_reuseFailAlloc_5740_;
goto v_reusejp_5732_;
}
v_reusejp_5732_:
{
lean_object* v___x_5735_; 
if (v_isShared_5731_ == 0)
{
lean_ctor_set(v___x_5730_, 0, v___x_5733_);
v___x_5735_ = v___x_5730_;
goto v_reusejp_5734_;
}
else
{
lean_object* v_reuseFailAlloc_5739_; 
v_reuseFailAlloc_5739_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5739_, 0, v___x_5733_);
v___x_5735_ = v_reuseFailAlloc_5739_;
goto v_reusejp_5734_;
}
v_reusejp_5734_:
{
lean_object* v___x_5737_; 
if (v_isShared_5725_ == 0)
{
lean_ctor_set(v___x_5724_, 0, v___x_5735_);
v___x_5737_ = v___x_5724_;
goto v_reusejp_5736_;
}
else
{
lean_object* v_reuseFailAlloc_5738_; 
v_reuseFailAlloc_5738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5738_, 0, v___x_5735_);
v___x_5737_ = v_reuseFailAlloc_5738_;
goto v_reusejp_5736_;
}
v_reusejp_5736_:
{
return v___x_5737_;
}
}
}
}
}
else
{
lean_object* v___x_5744_; 
lean_dec(v_a_5722_);
lean_del_object(v___x_5716_);
lean_dec(v_discr_5713_);
lean_dec_ref(v_resultType_5712_);
lean_dec(v_typeName_5711_);
if (v_isShared_5725_ == 0)
{
lean_ctor_set(v___x_5724_, 0, v_code_5546_);
v___x_5744_ = v___x_5724_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v_code_5546_);
v___x_5744_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
return v___x_5744_;
}
}
}
}
else
{
lean_object* v_a_5747_; lean_object* v___x_5749_; uint8_t v_isShared_5750_; uint8_t v_isSharedCheck_5754_; 
lean_del_object(v___x_5716_);
lean_dec_ref(v_alts_5714_);
lean_dec(v_discr_5713_);
lean_dec_ref(v_resultType_5712_);
lean_dec(v_typeName_5711_);
lean_dec_ref_known(v_code_5546_, 1);
v_a_5747_ = lean_ctor_get(v___x_5721_, 0);
v_isSharedCheck_5754_ = !lean_is_exclusive(v___x_5721_);
if (v_isSharedCheck_5754_ == 0)
{
v___x_5749_ = v___x_5721_;
v_isShared_5750_ = v_isSharedCheck_5754_;
goto v_resetjp_5748_;
}
else
{
lean_inc(v_a_5747_);
lean_dec(v___x_5721_);
v___x_5749_ = lean_box(0);
v_isShared_5750_ = v_isSharedCheck_5754_;
goto v_resetjp_5748_;
}
v_resetjp_5748_:
{
lean_object* v___x_5752_; 
if (v_isShared_5750_ == 0)
{
v___x_5752_ = v___x_5749_;
goto v_reusejp_5751_;
}
else
{
lean_object* v_reuseFailAlloc_5753_; 
v_reuseFailAlloc_5753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5753_, 0, v_a_5747_);
v___x_5752_ = v_reuseFailAlloc_5753_;
goto v_reusejp_5751_;
}
v_reusejp_5751_:
{
return v___x_5752_;
}
}
}
}
}
default: 
{
lean_object* v___x_5756_; 
v___x_5756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5756_, 0, v_code_5546_);
return v___x_5756_;
}
}
v___jp_5552_:
{
lean_object* v_params_5559_; lean_object* v_type_5560_; lean_object* v_value_5561_; uint8_t v___x_5562_; lean_object* v___x_5563_; 
v_params_5559_ = lean_ctor_get(v_decl_5553_, 2);
lean_inc_ref(v_params_5559_);
v_type_5560_ = lean_ctor_get(v_decl_5553_, 3);
lean_inc_ref(v_type_5560_);
v_value_5561_ = lean_ctor_get(v_decl_5553_, 4);
v___x_5562_ = 0;
lean_inc_ref(v_value_5561_);
v___x_5563_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5545_, v_value_5561_, v___y_5555_, v___y_5556_, v___y_5557_, v___y_5558_);
if (lean_obj_tag(v___x_5563_) == 0)
{
lean_object* v_a_5564_; lean_object* v___x_5565_; 
v_a_5564_ = lean_ctor_get(v___x_5563_, 0);
lean_inc(v_a_5564_);
lean_dec_ref_known(v___x_5563_, 1);
v___x_5565_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5562_, v_decl_5553_, v_type_5560_, v_params_5559_, v_a_5564_, v___y_5556_);
if (lean_obj_tag(v___x_5565_) == 0)
{
lean_object* v_a_5566_; lean_object* v___x_5567_; 
v_a_5566_ = lean_ctor_get(v___x_5565_, 0);
lean_inc(v_a_5566_);
lean_dec_ref_known(v___x_5565_, 1);
v___x_5567_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5545_, v_k_5554_, v___y_5555_, v___y_5556_, v___y_5557_, v___y_5558_);
if (lean_obj_tag(v___x_5567_) == 0)
{
switch(lean_obj_tag(v_code_5546_))
{
case 1:
{
lean_object* v_a_5568_; lean_object* v___x_5570_; uint8_t v_isShared_5571_; uint8_t v_isSharedCheck_5607_; 
v_a_5568_ = lean_ctor_get(v___x_5567_, 0);
v_isSharedCheck_5607_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5607_ == 0)
{
v___x_5570_ = v___x_5567_;
v_isShared_5571_ = v_isSharedCheck_5607_;
goto v_resetjp_5569_;
}
else
{
lean_inc(v_a_5568_);
lean_dec(v___x_5567_);
v___x_5570_ = lean_box(0);
v_isShared_5571_ = v_isSharedCheck_5607_;
goto v_resetjp_5569_;
}
v_resetjp_5569_:
{
lean_object* v_decl_5572_; lean_object* v_k_5573_; size_t v___x_5574_; size_t v___x_5575_; uint8_t v___x_5576_; 
v_decl_5572_ = lean_ctor_get(v_code_5546_, 0);
v_k_5573_ = lean_ctor_get(v_code_5546_, 1);
v___x_5574_ = lean_ptr_addr(v_k_5573_);
v___x_5575_ = lean_ptr_addr(v_a_5568_);
v___x_5576_ = lean_usize_dec_eq(v___x_5574_, v___x_5575_);
if (v___x_5576_ == 0)
{
lean_object* v___x_5578_; uint8_t v_isShared_5579_; uint8_t v_isSharedCheck_5586_; 
v_isSharedCheck_5586_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5586_ == 0)
{
lean_object* v_unused_5587_; lean_object* v_unused_5588_; 
v_unused_5587_ = lean_ctor_get(v_code_5546_, 1);
lean_dec(v_unused_5587_);
v_unused_5588_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5588_);
v___x_5578_ = v_code_5546_;
v_isShared_5579_ = v_isSharedCheck_5586_;
goto v_resetjp_5577_;
}
else
{
lean_dec(v_code_5546_);
v___x_5578_ = lean_box(0);
v_isShared_5579_ = v_isSharedCheck_5586_;
goto v_resetjp_5577_;
}
v_resetjp_5577_:
{
lean_object* v___x_5581_; 
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 1, v_a_5568_);
lean_ctor_set(v___x_5578_, 0, v_a_5566_);
v___x_5581_ = v___x_5578_;
goto v_reusejp_5580_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v_a_5566_);
lean_ctor_set(v_reuseFailAlloc_5585_, 1, v_a_5568_);
v___x_5581_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5580_;
}
v_reusejp_5580_:
{
lean_object* v___x_5583_; 
if (v_isShared_5571_ == 0)
{
lean_ctor_set(v___x_5570_, 0, v___x_5581_);
v___x_5583_ = v___x_5570_;
goto v_reusejp_5582_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v___x_5581_);
v___x_5583_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5582_;
}
v_reusejp_5582_:
{
return v___x_5583_;
}
}
}
}
else
{
size_t v___x_5589_; size_t v___x_5590_; uint8_t v___x_5591_; 
v___x_5589_ = lean_ptr_addr(v_decl_5572_);
v___x_5590_ = lean_ptr_addr(v_a_5566_);
v___x_5591_ = lean_usize_dec_eq(v___x_5589_, v___x_5590_);
if (v___x_5591_ == 0)
{
lean_object* v___x_5593_; uint8_t v_isShared_5594_; uint8_t v_isSharedCheck_5601_; 
v_isSharedCheck_5601_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5601_ == 0)
{
lean_object* v_unused_5602_; lean_object* v_unused_5603_; 
v_unused_5602_ = lean_ctor_get(v_code_5546_, 1);
lean_dec(v_unused_5602_);
v_unused_5603_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5603_);
v___x_5593_ = v_code_5546_;
v_isShared_5594_ = v_isSharedCheck_5601_;
goto v_resetjp_5592_;
}
else
{
lean_dec(v_code_5546_);
v___x_5593_ = lean_box(0);
v_isShared_5594_ = v_isSharedCheck_5601_;
goto v_resetjp_5592_;
}
v_resetjp_5592_:
{
lean_object* v___x_5596_; 
if (v_isShared_5594_ == 0)
{
lean_ctor_set(v___x_5593_, 1, v_a_5568_);
lean_ctor_set(v___x_5593_, 0, v_a_5566_);
v___x_5596_ = v___x_5593_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5600_; 
v_reuseFailAlloc_5600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5600_, 0, v_a_5566_);
lean_ctor_set(v_reuseFailAlloc_5600_, 1, v_a_5568_);
v___x_5596_ = v_reuseFailAlloc_5600_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
lean_object* v___x_5598_; 
if (v_isShared_5571_ == 0)
{
lean_ctor_set(v___x_5570_, 0, v___x_5596_);
v___x_5598_ = v___x_5570_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v___x_5596_);
v___x_5598_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
return v___x_5598_;
}
}
}
}
else
{
lean_object* v___x_5605_; 
lean_dec(v_a_5568_);
lean_dec(v_a_5566_);
if (v_isShared_5571_ == 0)
{
lean_ctor_set(v___x_5570_, 0, v_code_5546_);
v___x_5605_ = v___x_5570_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v_code_5546_);
v___x_5605_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
return v___x_5605_;
}
}
}
}
}
case 2:
{
lean_object* v_a_5608_; lean_object* v___x_5610_; uint8_t v_isShared_5611_; uint8_t v_isSharedCheck_5647_; 
v_a_5608_ = lean_ctor_get(v___x_5567_, 0);
v_isSharedCheck_5647_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5647_ == 0)
{
v___x_5610_ = v___x_5567_;
v_isShared_5611_ = v_isSharedCheck_5647_;
goto v_resetjp_5609_;
}
else
{
lean_inc(v_a_5608_);
lean_dec(v___x_5567_);
v___x_5610_ = lean_box(0);
v_isShared_5611_ = v_isSharedCheck_5647_;
goto v_resetjp_5609_;
}
v_resetjp_5609_:
{
lean_object* v_decl_5612_; lean_object* v_k_5613_; size_t v___x_5614_; size_t v___x_5615_; uint8_t v___x_5616_; 
v_decl_5612_ = lean_ctor_get(v_code_5546_, 0);
v_k_5613_ = lean_ctor_get(v_code_5546_, 1);
v___x_5614_ = lean_ptr_addr(v_k_5613_);
v___x_5615_ = lean_ptr_addr(v_a_5608_);
v___x_5616_ = lean_usize_dec_eq(v___x_5614_, v___x_5615_);
if (v___x_5616_ == 0)
{
lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5626_; 
v_isSharedCheck_5626_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5626_ == 0)
{
lean_object* v_unused_5627_; lean_object* v_unused_5628_; 
v_unused_5627_ = lean_ctor_get(v_code_5546_, 1);
lean_dec(v_unused_5627_);
v_unused_5628_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5628_);
v___x_5618_ = v_code_5546_;
v_isShared_5619_ = v_isSharedCheck_5626_;
goto v_resetjp_5617_;
}
else
{
lean_dec(v_code_5546_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5626_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v___x_5621_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 1, v_a_5608_);
lean_ctor_set(v___x_5618_, 0, v_a_5566_);
v___x_5621_ = v___x_5618_;
goto v_reusejp_5620_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_a_5566_);
lean_ctor_set(v_reuseFailAlloc_5625_, 1, v_a_5608_);
v___x_5621_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5620_;
}
v_reusejp_5620_:
{
lean_object* v___x_5623_; 
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 0, v___x_5621_);
v___x_5623_ = v___x_5610_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v___x_5621_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
}
}
else
{
size_t v___x_5629_; size_t v___x_5630_; uint8_t v___x_5631_; 
v___x_5629_ = lean_ptr_addr(v_decl_5612_);
v___x_5630_ = lean_ptr_addr(v_a_5566_);
v___x_5631_ = lean_usize_dec_eq(v___x_5629_, v___x_5630_);
if (v___x_5631_ == 0)
{
lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5641_; 
v_isSharedCheck_5641_ = !lean_is_exclusive(v_code_5546_);
if (v_isSharedCheck_5641_ == 0)
{
lean_object* v_unused_5642_; lean_object* v_unused_5643_; 
v_unused_5642_ = lean_ctor_get(v_code_5546_, 1);
lean_dec(v_unused_5642_);
v_unused_5643_ = lean_ctor_get(v_code_5546_, 0);
lean_dec(v_unused_5643_);
v___x_5633_ = v_code_5546_;
v_isShared_5634_ = v_isSharedCheck_5641_;
goto v_resetjp_5632_;
}
else
{
lean_dec(v_code_5546_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5641_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___x_5636_; 
if (v_isShared_5634_ == 0)
{
lean_ctor_set(v___x_5633_, 1, v_a_5608_);
lean_ctor_set(v___x_5633_, 0, v_a_5566_);
v___x_5636_ = v___x_5633_;
goto v_reusejp_5635_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_a_5566_);
lean_ctor_set(v_reuseFailAlloc_5640_, 1, v_a_5608_);
v___x_5636_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5635_;
}
v_reusejp_5635_:
{
lean_object* v___x_5638_; 
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 0, v___x_5636_);
v___x_5638_ = v___x_5610_;
goto v_reusejp_5637_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v___x_5636_);
v___x_5638_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5637_;
}
v_reusejp_5637_:
{
return v___x_5638_;
}
}
}
}
else
{
lean_object* v___x_5645_; 
lean_dec(v_a_5608_);
lean_dec(v_a_5566_);
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 0, v_code_5546_);
v___x_5645_ = v___x_5610_;
goto v_reusejp_5644_;
}
else
{
lean_object* v_reuseFailAlloc_5646_; 
v_reuseFailAlloc_5646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5646_, 0, v_code_5546_);
v___x_5645_ = v_reuseFailAlloc_5646_;
goto v_reusejp_5644_;
}
v_reusejp_5644_:
{
return v___x_5645_;
}
}
}
}
}
default: 
{
lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5656_; 
lean_dec(v_a_5566_);
lean_dec_ref(v_code_5546_);
v_isSharedCheck_5656_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5656_ == 0)
{
lean_object* v_unused_5657_; 
v_unused_5657_ = lean_ctor_get(v___x_5567_, 0);
lean_dec(v_unused_5657_);
v___x_5649_ = v___x_5567_;
v_isShared_5650_ = v_isSharedCheck_5656_;
goto v_resetjp_5648_;
}
else
{
lean_dec(v___x_5567_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5656_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5654_; 
v___x_5651_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2);
v___x_5652_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(v___x_5651_);
if (v_isShared_5650_ == 0)
{
lean_ctor_set(v___x_5649_, 0, v___x_5652_);
v___x_5654_ = v___x_5649_;
goto v_reusejp_5653_;
}
else
{
lean_object* v_reuseFailAlloc_5655_; 
v_reuseFailAlloc_5655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5655_, 0, v___x_5652_);
v___x_5654_ = v_reuseFailAlloc_5655_;
goto v_reusejp_5653_;
}
v_reusejp_5653_:
{
return v___x_5654_;
}
}
}
}
}
else
{
lean_dec(v_a_5566_);
lean_dec_ref(v_code_5546_);
return v___x_5567_;
}
}
else
{
lean_object* v_a_5658_; lean_object* v___x_5660_; uint8_t v_isShared_5661_; uint8_t v_isSharedCheck_5665_; 
lean_dec_ref(v_k_5554_);
lean_dec_ref(v_code_5546_);
v_a_5658_ = lean_ctor_get(v___x_5565_, 0);
v_isSharedCheck_5665_ = !lean_is_exclusive(v___x_5565_);
if (v_isSharedCheck_5665_ == 0)
{
v___x_5660_ = v___x_5565_;
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
else
{
lean_inc(v_a_5658_);
lean_dec(v___x_5565_);
v___x_5660_ = lean_box(0);
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
v_resetjp_5659_:
{
lean_object* v___x_5663_; 
if (v_isShared_5661_ == 0)
{
v___x_5663_ = v___x_5660_;
goto v_reusejp_5662_;
}
else
{
lean_object* v_reuseFailAlloc_5664_; 
v_reuseFailAlloc_5664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5664_, 0, v_a_5658_);
v___x_5663_ = v_reuseFailAlloc_5664_;
goto v_reusejp_5662_;
}
v_reusejp_5662_:
{
return v___x_5663_;
}
}
}
}
else
{
lean_dec_ref(v_type_5560_);
lean_dec_ref(v_params_5559_);
lean_dec_ref(v_k_5554_);
lean_dec_ref(v_decl_5553_);
lean_dec_ref(v_code_5546_);
return v___x_5563_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed(lean_object* v_assignment_5757_, lean_object* v_code_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_, lean_object* v_a_5763_){
_start:
{
lean_object* v_res_5764_; 
v_res_5764_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5757_, v_code_5758_, v_a_5759_, v_a_5760_, v_a_5761_, v_a_5762_);
lean_dec(v_a_5762_);
lean_dec_ref(v_a_5761_);
lean_dec(v_a_5760_);
lean_dec_ref(v_a_5759_);
lean_dec_ref(v_assignment_5757_);
return v_res_5764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___boxed(lean_object* v_resultType_5765_, lean_object* v_discrVal_5766_, lean_object* v_discr_5767_, lean_object* v_assignment_5768_, lean_object* v_i_5769_, lean_object* v_as_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_){
_start:
{
lean_object* v_res_5776_; 
v_res_5776_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(v_resultType_5765_, v_discrVal_5766_, v_discr_5767_, v_assignment_5768_, v_i_5769_, v_as_5770_, v___y_5771_, v___y_5772_, v___y_5773_, v___y_5774_);
lean_dec(v___y_5774_);
lean_dec_ref(v___y_5773_);
lean_dec(v___y_5772_);
lean_dec_ref(v___y_5771_);
lean_dec_ref(v_assignment_5768_);
lean_dec(v_discrVal_5766_);
return v_res_5776_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(lean_object* v_00_u03b2_5777_, lean_object* v_m_5778_, lean_object* v_a_5779_){
_start:
{
lean_object* v___x_5780_; 
v___x_5780_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_m_5778_, v_a_5779_);
return v___x_5780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___boxed(lean_object* v_00_u03b2_5781_, lean_object* v_m_5782_, lean_object* v_a_5783_){
_start:
{
lean_object* v_res_5784_; 
v_res_5784_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(v_00_u03b2_5781_, v_m_5782_, v_a_5783_);
lean_dec(v_a_5783_);
lean_dec_ref(v_m_5782_);
return v_res_5784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(lean_object* v_as_5785_, size_t v_i_5786_, size_t v_stop_5787_, lean_object* v_b_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_){
_start:
{
lean_object* v___x_5794_; 
v___x_5794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_as_5785_, v_i_5786_, v_stop_5787_, v_b_5788_);
return v___x_5794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___boxed(lean_object* v_as_5795_, lean_object* v_i_5796_, lean_object* v_stop_5797_, lean_object* v_b_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_){
_start:
{
size_t v_i_boxed_5804_; size_t v_stop_boxed_5805_; lean_object* v_res_5806_; 
v_i_boxed_5804_ = lean_unbox_usize(v_i_5796_);
lean_dec(v_i_5796_);
v_stop_boxed_5805_ = lean_unbox_usize(v_stop_5797_);
lean_dec(v_stop_5797_);
v_res_5806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(v_as_5795_, v_i_boxed_5804_, v_stop_boxed_5805_, v_b_5798_, v___y_5799_, v___y_5800_, v___y_5801_, v___y_5802_);
lean_dec(v___y_5802_);
lean_dec_ref(v___y_5801_);
lean_dec(v___y_5800_);
lean_dec_ref(v___y_5799_);
lean_dec_ref(v_as_5795_);
return v_res_5806_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(lean_object* v_00_u03b2_5807_, lean_object* v_a_5808_, lean_object* v_x_5809_){
_start:
{
lean_object* v___x_5810_; 
v___x_5810_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5808_, v_x_5809_);
return v___x_5810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___boxed(lean_object* v_00_u03b2_5811_, lean_object* v_a_5812_, lean_object* v_x_5813_){
_start:
{
lean_object* v_res_5814_; 
v_res_5814_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(v_00_u03b2_5811_, v_a_5812_, v_x_5813_);
lean_dec(v_x_5813_);
lean_dec(v_a_5812_);
return v_res_5814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(lean_object* v_f_5815_, lean_object* v_v_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_, lean_object* v___y_5819_, lean_object* v___y_5820_){
_start:
{
if (lean_obj_tag(v_v_5816_) == 0)
{
lean_object* v_code_5822_; lean_object* v___x_5824_; uint8_t v_isShared_5825_; uint8_t v_isSharedCheck_5846_; 
v_code_5822_ = lean_ctor_get(v_v_5816_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v_v_5816_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5824_ = v_v_5816_;
v_isShared_5825_ = v_isSharedCheck_5846_;
goto v_resetjp_5823_;
}
else
{
lean_inc(v_code_5822_);
lean_dec(v_v_5816_);
v___x_5824_ = lean_box(0);
v_isShared_5825_ = v_isSharedCheck_5846_;
goto v_resetjp_5823_;
}
v_resetjp_5823_:
{
lean_object* v___x_5826_; 
lean_inc(v___y_5820_);
lean_inc_ref(v___y_5819_);
lean_inc(v___y_5818_);
lean_inc_ref(v___y_5817_);
v___x_5826_ = lean_apply_6(v_f_5815_, v_code_5822_, v___y_5817_, v___y_5818_, v___y_5819_, v___y_5820_, lean_box(0));
if (lean_obj_tag(v___x_5826_) == 0)
{
lean_object* v_a_5827_; lean_object* v___x_5829_; uint8_t v_isShared_5830_; uint8_t v_isSharedCheck_5837_; 
v_a_5827_ = lean_ctor_get(v___x_5826_, 0);
v_isSharedCheck_5837_ = !lean_is_exclusive(v___x_5826_);
if (v_isSharedCheck_5837_ == 0)
{
v___x_5829_ = v___x_5826_;
v_isShared_5830_ = v_isSharedCheck_5837_;
goto v_resetjp_5828_;
}
else
{
lean_inc(v_a_5827_);
lean_dec(v___x_5826_);
v___x_5829_ = lean_box(0);
v_isShared_5830_ = v_isSharedCheck_5837_;
goto v_resetjp_5828_;
}
v_resetjp_5828_:
{
lean_object* v___x_5832_; 
if (v_isShared_5825_ == 0)
{
lean_ctor_set(v___x_5824_, 0, v_a_5827_);
v___x_5832_ = v___x_5824_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5836_; 
v_reuseFailAlloc_5836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5836_, 0, v_a_5827_);
v___x_5832_ = v_reuseFailAlloc_5836_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
lean_object* v___x_5834_; 
if (v_isShared_5830_ == 0)
{
lean_ctor_set(v___x_5829_, 0, v___x_5832_);
v___x_5834_ = v___x_5829_;
goto v_reusejp_5833_;
}
else
{
lean_object* v_reuseFailAlloc_5835_; 
v_reuseFailAlloc_5835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5835_, 0, v___x_5832_);
v___x_5834_ = v_reuseFailAlloc_5835_;
goto v_reusejp_5833_;
}
v_reusejp_5833_:
{
return v___x_5834_;
}
}
}
}
else
{
lean_object* v_a_5838_; lean_object* v___x_5840_; uint8_t v_isShared_5841_; uint8_t v_isSharedCheck_5845_; 
lean_del_object(v___x_5824_);
v_a_5838_ = lean_ctor_get(v___x_5826_, 0);
v_isSharedCheck_5845_ = !lean_is_exclusive(v___x_5826_);
if (v_isSharedCheck_5845_ == 0)
{
v___x_5840_ = v___x_5826_;
v_isShared_5841_ = v_isSharedCheck_5845_;
goto v_resetjp_5839_;
}
else
{
lean_inc(v_a_5838_);
lean_dec(v___x_5826_);
v___x_5840_ = lean_box(0);
v_isShared_5841_ = v_isSharedCheck_5845_;
goto v_resetjp_5839_;
}
v_resetjp_5839_:
{
lean_object* v___x_5843_; 
if (v_isShared_5841_ == 0)
{
v___x_5843_ = v___x_5840_;
goto v_reusejp_5842_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v_a_5838_);
v___x_5843_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5842_;
}
v_reusejp_5842_:
{
return v___x_5843_;
}
}
}
}
}
else
{
lean_object* v___x_5847_; 
lean_dec_ref(v_f_5815_);
v___x_5847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5847_, 0, v_v_5816_);
return v___x_5847_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg___boxed(lean_object* v_f_5848_, lean_object* v_v_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_){
_start:
{
lean_object* v_res_5855_; 
v_res_5855_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v_f_5848_, v_v_5849_, v___y_5850_, v___y_5851_, v___y_5852_, v___y_5853_);
lean_dec(v___y_5853_);
lean_dec_ref(v___y_5852_);
lean_dec(v___y_5851_);
lean_dec_ref(v___y_5850_);
return v_res_5855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(uint8_t v_pu_5856_, lean_object* v_f_5857_, lean_object* v_v_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_){
_start:
{
lean_object* v___x_5864_; 
v___x_5864_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v_f_5857_, v_v_5858_, v___y_5859_, v___y_5860_, v___y_5861_, v___y_5862_);
return v___x_5864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___boxed(lean_object* v_pu_5865_, lean_object* v_f_5866_, lean_object* v_v_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_, lean_object* v___y_5872_){
_start:
{
uint8_t v_pu_boxed_5873_; lean_object* v_res_5874_; 
v_pu_boxed_5873_ = lean_unbox(v_pu_5865_);
v_res_5874_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(v_pu_boxed_5873_, v_f_5866_, v_v_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_);
lean_dec(v___y_5871_);
lean_dec_ref(v___y_5870_);
lean_dec(v___y_5869_);
lean_dec_ref(v___y_5868_);
return v_res_5874_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(lean_object* v_x_5875_, lean_object* v_x_5876_){
_start:
{
if (lean_obj_tag(v_x_5876_) == 0)
{
return v_x_5875_;
}
else
{
lean_object* v_key_5877_; lean_object* v_value_5878_; lean_object* v_tail_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; 
v_key_5877_ = lean_ctor_get(v_x_5876_, 0);
v_value_5878_ = lean_ctor_get(v_x_5876_, 1);
v_tail_5879_ = lean_ctor_get(v_x_5876_, 2);
lean_inc(v_value_5878_);
lean_inc(v_key_5877_);
v___x_5880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5880_, 0, v_key_5877_);
lean_ctor_set(v___x_5880_, 1, v_value_5878_);
v___x_5881_ = lean_array_push(v_x_5875_, v___x_5880_);
v_x_5875_ = v___x_5881_;
v_x_5876_ = v_tail_5879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3___boxed(lean_object* v_x_5883_, lean_object* v_x_5884_){
_start:
{
lean_object* v_res_5885_; 
v_res_5885_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(v_x_5883_, v_x_5884_);
lean_dec(v_x_5884_);
return v_res_5885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(lean_object* v_as_5886_, size_t v_i_5887_, size_t v_stop_5888_, lean_object* v_b_5889_){
_start:
{
uint8_t v___x_5890_; 
v___x_5890_ = lean_usize_dec_eq(v_i_5887_, v_stop_5888_);
if (v___x_5890_ == 0)
{
lean_object* v___x_5891_; lean_object* v___x_5892_; size_t v___x_5893_; size_t v___x_5894_; 
v___x_5891_ = lean_array_uget_borrowed(v_as_5886_, v_i_5887_);
v___x_5892_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(v_b_5889_, v___x_5891_);
v___x_5893_ = ((size_t)1ULL);
v___x_5894_ = lean_usize_add(v_i_5887_, v___x_5893_);
v_i_5887_ = v___x_5894_;
v_b_5889_ = v___x_5892_;
goto _start;
}
else
{
return v_b_5889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4___boxed(lean_object* v_as_5896_, lean_object* v_i_5897_, lean_object* v_stop_5898_, lean_object* v_b_5899_){
_start:
{
size_t v_i_boxed_5900_; size_t v_stop_boxed_5901_; lean_object* v_res_5902_; 
v_i_boxed_5900_ = lean_unbox_usize(v_i_5897_);
lean_dec(v_i_5897_);
v_stop_boxed_5901_ = lean_unbox_usize(v_stop_5898_);
lean_dec(v_stop_5898_);
v_res_5902_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_as_5896_, v_i_boxed_5900_, v_stop_boxed_5901_, v_b_5899_);
lean_dec_ref(v_as_5896_);
return v_res_5902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(uint8_t v_a_5903_, size_t v_sz_5904_, size_t v_i_5905_, lean_object* v_bs_5906_, lean_object* v___y_5907_, lean_object* v___y_5908_, lean_object* v___y_5909_, lean_object* v___y_5910_){
_start:
{
uint8_t v___x_5912_; 
v___x_5912_ = lean_usize_dec_lt(v_i_5905_, v_sz_5904_);
if (v___x_5912_ == 0)
{
lean_object* v___x_5913_; lean_object* v___x_5914_; 
v___x_5913_ = l_unsafeCast___redArg(v_bs_5906_);
lean_dec_ref(v_bs_5906_);
v___x_5914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5914_, 0, v___x_5913_);
return v___x_5914_;
}
else
{
lean_object* v_v_5915_; lean_object* v___x_5916_; lean_object* v_fst_5917_; lean_object* v_snd_5918_; lean_object* v___x_5920_; uint8_t v_isShared_5921_; uint8_t v_isSharedCheck_5943_; 
v_v_5915_ = lean_array_uget_borrowed(v_bs_5906_, v_i_5905_);
v___x_5916_ = l_unsafeCast___redArg(v_v_5915_);
v_fst_5917_ = lean_ctor_get(v___x_5916_, 0);
v_snd_5918_ = lean_ctor_get(v___x_5916_, 1);
v_isSharedCheck_5943_ = !lean_is_exclusive(v___x_5916_);
if (v_isSharedCheck_5943_ == 0)
{
v___x_5920_ = v___x_5916_;
v_isShared_5921_ = v_isSharedCheck_5943_;
goto v_resetjp_5919_;
}
else
{
lean_inc(v_snd_5918_);
lean_inc(v_fst_5917_);
lean_dec(v___x_5916_);
v___x_5920_ = lean_box(0);
v_isShared_5921_ = v_isSharedCheck_5943_;
goto v_resetjp_5919_;
}
v_resetjp_5919_:
{
lean_object* v___x_5922_; lean_object* v_bs_x27_5923_; lean_object* v___x_5924_; 
v___x_5922_ = lean_unsigned_to_nat(0u);
v_bs_x27_5923_ = lean_array_uset(v_bs_5906_, v_i_5905_, v___x_5922_);
v___x_5924_ = l_Lean_Compiler_LCNF_getBinderName(v_fst_5917_, v___y_5907_, v___y_5908_, v___y_5909_, v___y_5910_);
if (lean_obj_tag(v___x_5924_) == 0)
{
lean_object* v_a_5925_; lean_object* v___x_5926_; lean_object* v___x_5928_; 
v_a_5925_ = lean_ctor_get(v___x_5924_, 0);
lean_inc(v_a_5925_);
lean_dec_ref_known(v___x_5924_, 1);
v___x_5926_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_5925_, v_a_5903_);
if (v_isShared_5921_ == 0)
{
lean_ctor_set(v___x_5920_, 0, v___x_5926_);
v___x_5928_ = v___x_5920_;
goto v_reusejp_5927_;
}
else
{
lean_object* v_reuseFailAlloc_5934_; 
v_reuseFailAlloc_5934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5934_, 0, v___x_5926_);
lean_ctor_set(v_reuseFailAlloc_5934_, 1, v_snd_5918_);
v___x_5928_ = v_reuseFailAlloc_5934_;
goto v_reusejp_5927_;
}
v_reusejp_5927_:
{
size_t v___x_5929_; size_t v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; 
v___x_5929_ = ((size_t)1ULL);
v___x_5930_ = lean_usize_add(v_i_5905_, v___x_5929_);
v___x_5931_ = l_unsafeCast___redArg(v___x_5928_);
lean_dec_ref(v___x_5928_);
v___x_5932_ = lean_array_uset(v_bs_x27_5923_, v_i_5905_, v___x_5931_);
v_i_5905_ = v___x_5930_;
v_bs_5906_ = v___x_5932_;
goto _start;
}
}
else
{
lean_object* v_a_5935_; lean_object* v___x_5937_; uint8_t v_isShared_5938_; uint8_t v_isSharedCheck_5942_; 
lean_dec_ref(v_bs_x27_5923_);
lean_del_object(v___x_5920_);
lean_dec(v_snd_5918_);
v_a_5935_ = lean_ctor_get(v___x_5924_, 0);
v_isSharedCheck_5942_ = !lean_is_exclusive(v___x_5924_);
if (v_isSharedCheck_5942_ == 0)
{
v___x_5937_ = v___x_5924_;
v_isShared_5938_ = v_isSharedCheck_5942_;
goto v_resetjp_5936_;
}
else
{
lean_inc(v_a_5935_);
lean_dec(v___x_5924_);
v___x_5937_ = lean_box(0);
v_isShared_5938_ = v_isSharedCheck_5942_;
goto v_resetjp_5936_;
}
v_resetjp_5936_:
{
lean_object* v___x_5940_; 
if (v_isShared_5938_ == 0)
{
v___x_5940_ = v___x_5937_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_a_5935_);
v___x_5940_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
return v___x_5940_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed(lean_object* v_a_5944_, lean_object* v_sz_5945_, lean_object* v_i_5946_, lean_object* v_bs_5947_, lean_object* v___y_5948_, lean_object* v___y_5949_, lean_object* v___y_5950_, lean_object* v___y_5951_, lean_object* v___y_5952_){
_start:
{
uint8_t v_a_2419__boxed_5953_; size_t v_sz_boxed_5954_; size_t v_i_boxed_5955_; lean_object* v_res_5956_; 
v_a_2419__boxed_5953_ = lean_unbox(v_a_5944_);
v_sz_boxed_5954_ = lean_unbox_usize(v_sz_5945_);
lean_dec(v_sz_5945_);
v_i_boxed_5955_ = lean_unbox_usize(v_i_5946_);
lean_dec(v_i_5946_);
v_res_5956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(v_a_2419__boxed_5953_, v_sz_boxed_5954_, v_i_boxed_5955_, v_bs_5947_, v___y_5948_, v___y_5949_, v___y_5950_, v___y_5951_);
lean_dec(v___y_5951_);
lean_dec_ref(v___y_5950_);
lean_dec(v___y_5949_);
lean_dec_ref(v___y_5948_);
return v_res_5956_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(lean_object* v_x_5957_){
_start:
{
lean_object* v_fst_5958_; lean_object* v_snd_5959_; lean_object* v___x_5961_; uint8_t v_isShared_5962_; uint8_t v_isSharedCheck_5982_; 
v_fst_5958_ = lean_ctor_get(v_x_5957_, 0);
v_snd_5959_ = lean_ctor_get(v_x_5957_, 1);
v_isSharedCheck_5982_ = !lean_is_exclusive(v_x_5957_);
if (v_isSharedCheck_5982_ == 0)
{
v___x_5961_ = v_x_5957_;
v_isShared_5962_ = v_isSharedCheck_5982_;
goto v_resetjp_5960_;
}
else
{
lean_inc(v_snd_5959_);
lean_inc(v_fst_5958_);
lean_dec(v_x_5957_);
v___x_5961_ = lean_box(0);
v_isShared_5962_ = v_isSharedCheck_5982_;
goto v_resetjp_5960_;
}
v_resetjp_5960_:
{
lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5967_; 
v___x_5963_ = l_String_quote(v_fst_5958_);
v___x_5964_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5964_, 0, v___x_5963_);
v___x_5965_ = lean_box(0);
if (v_isShared_5962_ == 0)
{
lean_ctor_set_tag(v___x_5961_, 1);
lean_ctor_set(v___x_5961_, 1, v___x_5965_);
lean_ctor_set(v___x_5961_, 0, v___x_5964_);
v___x_5967_ = v___x_5961_;
goto v_reusejp_5966_;
}
else
{
lean_object* v_reuseFailAlloc_5981_; 
v_reuseFailAlloc_5981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5981_, 0, v___x_5964_);
lean_ctor_set(v_reuseFailAlloc_5981_, 1, v___x_5965_);
v___x_5967_ = v_reuseFailAlloc_5981_;
goto v_reusejp_5966_;
}
v_reusejp_5966_:
{
lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; uint8_t v___x_5979_; lean_object* v___x_5980_; 
v___x_5968_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_snd_5959_);
v___x_5969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5968_);
lean_ctor_set(v___x_5969_, 1, v___x_5967_);
v___x_5970_ = l_List_reverse___redArg(v___x_5969_);
v___x_5971_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_5972_ = l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(v___x_5970_, v___x_5971_);
v___x_5973_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_5974_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_5975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5975_, 0, v___x_5974_);
lean_ctor_set(v___x_5975_, 1, v___x_5972_);
v___x_5976_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_5977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5977_, 0, v___x_5975_);
lean_ctor_set(v___x_5977_, 1, v___x_5976_);
v___x_5978_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5978_, 0, v___x_5973_);
lean_ctor_set(v___x_5978_, 1, v___x_5977_);
v___x_5979_ = 0;
v___x_5980_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5980_, 0, v___x_5978_);
lean_ctor_set_uint8(v___x_5980_, sizeof(void*)*1, v___x_5979_);
return v___x_5980_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(lean_object* v_x_5983_, lean_object* v_x_5984_, lean_object* v_x_5985_){
_start:
{
if (lean_obj_tag(v_x_5985_) == 0)
{
lean_dec(v_x_5983_);
return v_x_5984_;
}
else
{
lean_object* v_head_5986_; lean_object* v_tail_5987_; lean_object* v___x_5989_; uint8_t v_isShared_5990_; uint8_t v_isSharedCheck_5997_; 
v_head_5986_ = lean_ctor_get(v_x_5985_, 0);
v_tail_5987_ = lean_ctor_get(v_x_5985_, 1);
v_isSharedCheck_5997_ = !lean_is_exclusive(v_x_5985_);
if (v_isSharedCheck_5997_ == 0)
{
v___x_5989_ = v_x_5985_;
v_isShared_5990_ = v_isSharedCheck_5997_;
goto v_resetjp_5988_;
}
else
{
lean_inc(v_tail_5987_);
lean_inc(v_head_5986_);
lean_dec(v_x_5985_);
v___x_5989_ = lean_box(0);
v_isShared_5990_ = v_isSharedCheck_5997_;
goto v_resetjp_5988_;
}
v_resetjp_5988_:
{
lean_object* v___x_5992_; 
lean_inc(v_x_5983_);
if (v_isShared_5990_ == 0)
{
lean_ctor_set_tag(v___x_5989_, 5);
lean_ctor_set(v___x_5989_, 1, v_x_5983_);
lean_ctor_set(v___x_5989_, 0, v_x_5984_);
v___x_5992_ = v___x_5989_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5996_; 
v_reuseFailAlloc_5996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5996_, 0, v_x_5984_);
lean_ctor_set(v_reuseFailAlloc_5996_, 1, v_x_5983_);
v___x_5992_ = v_reuseFailAlloc_5996_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
lean_object* v___x_5993_; lean_object* v___x_5994_; 
v___x_5993_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5986_);
v___x_5994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5994_, 0, v___x_5992_);
lean_ctor_set(v___x_5994_, 1, v___x_5993_);
v_x_5984_ = v___x_5994_;
v_x_5985_ = v_tail_5987_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(lean_object* v_x_5998_, lean_object* v_x_5999_, lean_object* v_x_6000_){
_start:
{
if (lean_obj_tag(v_x_6000_) == 0)
{
lean_dec(v_x_5998_);
return v_x_5999_;
}
else
{
lean_object* v_head_6001_; lean_object* v_tail_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6012_; 
v_head_6001_ = lean_ctor_get(v_x_6000_, 0);
v_tail_6002_ = lean_ctor_get(v_x_6000_, 1);
v_isSharedCheck_6012_ = !lean_is_exclusive(v_x_6000_);
if (v_isSharedCheck_6012_ == 0)
{
v___x_6004_ = v_x_6000_;
v_isShared_6005_ = v_isSharedCheck_6012_;
goto v_resetjp_6003_;
}
else
{
lean_inc(v_tail_6002_);
lean_inc(v_head_6001_);
lean_dec(v_x_6000_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6012_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v___x_6007_; 
lean_inc(v_x_5998_);
if (v_isShared_6005_ == 0)
{
lean_ctor_set_tag(v___x_6004_, 5);
lean_ctor_set(v___x_6004_, 1, v_x_5998_);
lean_ctor_set(v___x_6004_, 0, v_x_5999_);
v___x_6007_ = v___x_6004_;
goto v_reusejp_6006_;
}
else
{
lean_object* v_reuseFailAlloc_6011_; 
v_reuseFailAlloc_6011_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6011_, 0, v_x_5999_);
lean_ctor_set(v_reuseFailAlloc_6011_, 1, v_x_5998_);
v___x_6007_ = v_reuseFailAlloc_6011_;
goto v_reusejp_6006_;
}
v_reusejp_6006_:
{
lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; 
v___x_6008_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_6001_);
v___x_6009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6009_, 0, v___x_6007_);
lean_ctor_set(v___x_6009_, 1, v___x_6008_);
v___x_6010_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(v_x_5998_, v___x_6009_, v_tail_6002_);
return v___x_6010_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(lean_object* v_x_6013_, lean_object* v_x_6014_){
_start:
{
if (lean_obj_tag(v_x_6013_) == 0)
{
lean_object* v___x_6015_; 
lean_dec(v_x_6014_);
v___x_6015_ = lean_box(0);
return v___x_6015_;
}
else
{
lean_object* v_tail_6016_; 
v_tail_6016_ = lean_ctor_get(v_x_6013_, 1);
if (lean_obj_tag(v_tail_6016_) == 0)
{
lean_object* v_head_6017_; lean_object* v___x_6018_; 
lean_dec(v_x_6014_);
v_head_6017_ = lean_ctor_get(v_x_6013_, 0);
lean_inc(v_head_6017_);
lean_dec_ref_known(v_x_6013_, 2);
v___x_6018_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_6017_);
return v___x_6018_;
}
else
{
lean_object* v_head_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; 
lean_inc(v_tail_6016_);
v_head_6019_ = lean_ctor_get(v_x_6013_, 0);
lean_inc(v_head_6019_);
lean_dec_ref_known(v_x_6013_, 2);
v___x_6020_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_6019_);
v___x_6021_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(v_x_6014_, v___x_6020_, v_tail_6016_);
return v___x_6021_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1(void){
_start:
{
lean_object* v___x_6023_; lean_object* v___x_6024_; 
v___x_6023_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0));
v___x_6024_ = lean_string_length(v___x_6023_);
return v___x_6024_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2(void){
_start:
{
lean_object* v___x_6025_; lean_object* v___x_6026_; 
v___x_6025_ = lean_obj_once(&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1, &l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1_once, _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1);
v___x_6026_ = lean_nat_to_int(v___x_6025_);
return v___x_6026_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(lean_object* v_xs_6032_){
_start:
{
lean_object* v___x_6033_; lean_object* v___x_6034_; uint8_t v___x_6035_; 
v___x_6033_ = lean_array_get_size(v_xs_6032_);
v___x_6034_ = lean_unsigned_to_nat(0u);
v___x_6035_ = lean_nat_dec_eq(v___x_6033_, v___x_6034_);
if (v___x_6035_ == 0)
{
lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; 
v___x_6036_ = lean_array_to_list(v_xs_6032_);
v___x_6037_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_6038_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(v___x_6036_, v___x_6037_);
v___x_6039_ = lean_obj_once(&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2, &l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2_once, _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2);
v___x_6040_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3));
v___x_6041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6041_, 0, v___x_6040_);
lean_ctor_set(v___x_6041_, 1, v___x_6038_);
v___x_6042_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10));
v___x_6043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6043_, 0, v___x_6041_);
lean_ctor_set(v___x_6043_, 1, v___x_6042_);
v___x_6044_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6044_, 0, v___x_6039_);
lean_ctor_set(v___x_6044_, 1, v___x_6043_);
v___x_6045_ = l_Std_Format_fill(v___x_6044_);
return v___x_6045_;
}
else
{
lean_object* v___x_6046_; 
lean_dec_ref(v_xs_6032_);
v___x_6046_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5));
return v___x_6046_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(lean_object* v_assignment_6049_, lean_object* v_decl_6050_, lean_object* v_a_6051_, lean_object* v_a_6052_, lean_object* v_a_6053_, lean_object* v_a_6054_){
_start:
{
lean_object* v___y_6057_; lean_object* v___y_6058_; lean_object* v___y_6059_; lean_object* v___y_6060_; lean_object* v_toCold_6090_; lean_object* v_options_6091_; uint8_t v_hasTrace_6092_; 
v_toCold_6090_ = lean_ctor_get(v_a_6053_, 0);
v_options_6091_ = lean_ctor_get(v_toCold_6090_, 2);
v_hasTrace_6092_ = lean_ctor_get_uint8(v_options_6091_, sizeof(void*)*1);
if (v_hasTrace_6092_ == 0)
{
v___y_6057_ = v_a_6051_;
v___y_6058_ = v_a_6052_;
v___y_6059_ = v_a_6053_;
v___y_6060_ = v_a_6054_;
goto v___jp_6056_;
}
else
{
lean_object* v_inheritedTraceOptions_6093_; lean_object* v_cls_6094_; uint8_t v___y_6096_; lean_object* v___y_6097_; lean_object* v___x_6138_; uint8_t v___x_6139_; 
v_inheritedTraceOptions_6093_ = lean_ctor_get(v_toCold_6090_, 11);
v_cls_6094_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_6138_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_6139_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6093_, v_options_6091_, v___x_6138_);
if (v___x_6139_ == 0)
{
v___y_6057_ = v_a_6051_;
v___y_6058_ = v_a_6052_;
v___y_6059_ = v_a_6053_;
v___y_6060_ = v_a_6054_;
goto v___jp_6056_;
}
else
{
lean_object* v_size_6140_; lean_object* v_buckets_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; uint8_t v___x_6145_; 
v_size_6140_ = lean_ctor_get(v_assignment_6049_, 0);
v_buckets_6141_ = lean_ctor_get(v_assignment_6049_, 1);
v___x_6142_ = lean_mk_empty_array_with_capacity(v_size_6140_);
v___x_6143_ = lean_unsigned_to_nat(0u);
v___x_6144_ = lean_array_get_size(v_buckets_6141_);
v___x_6145_ = lean_nat_dec_lt(v___x_6143_, v___x_6144_);
if (v___x_6145_ == 0)
{
v___y_6096_ = v___x_6139_;
v___y_6097_ = v___x_6142_;
goto v___jp_6095_;
}
else
{
size_t v___x_6146_; size_t v___x_6147_; lean_object* v___x_6148_; 
v___x_6146_ = ((size_t)0ULL);
v___x_6147_ = lean_usize_of_nat(v___x_6144_);
v___x_6148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_buckets_6141_, v___x_6146_, v___x_6147_, v___x_6142_);
v___y_6096_ = v___x_6139_;
v___y_6097_ = v___x_6148_;
goto v___jp_6095_;
}
}
v___jp_6095_:
{
size_t v_sz_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_2270__overap_6104_; lean_object* v___x_6105_; 
v_sz_6098_ = lean_array_size(v___y_6097_);
v___x_6099_ = l_unsafeCast___redArg(v___y_6097_);
lean_dec_ref(v___y_6097_);
v___x_6100_ = lean_box(v___y_6096_);
v___x_6101_ = lean_box_usize(v_sz_6098_);
v___x_6102_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed__const__1));
v___x_6103_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed), 9, 4);
lean_closure_set(v___x_6103_, 0, v___x_6100_);
lean_closure_set(v___x_6103_, 1, v___x_6101_);
lean_closure_set(v___x_6103_, 2, v___x_6102_);
lean_closure_set(v___x_6103_, 3, v___x_6099_);
v___x_2270__overap_6104_ = l_unsafeCast___redArg(v___x_6103_);
lean_dec_ref(v___x_6103_);
lean_inc(v_a_6054_);
lean_inc_ref(v_a_6053_);
lean_inc(v_a_6052_);
lean_inc_ref(v_a_6051_);
v___x_6105_ = lean_apply_5(v___x_2270__overap_6104_, v_a_6051_, v_a_6052_, v_a_6053_, v_a_6054_, lean_box(0));
if (lean_obj_tag(v___x_6105_) == 0)
{
lean_object* v_toSignature_6106_; lean_object* v_a_6107_; lean_object* v_name_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; 
v_toSignature_6106_ = lean_ctor_get(v_decl_6050_, 0);
v_a_6107_ = lean_ctor_get(v___x_6105_, 0);
lean_inc(v_a_6107_);
lean_dec_ref_known(v___x_6105_, 1);
v_name_6108_ = lean_ctor_get(v_toSignature_6106_, 0);
v___x_6109_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0));
lean_inc(v_name_6108_);
v___x_6110_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_6108_, v___y_6096_);
v___x_6111_ = lean_string_append(v___x_6109_, v___x_6110_);
lean_dec_ref(v___x_6110_);
v___x_6112_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1));
v___x_6113_ = lean_string_append(v___x_6111_, v___x_6112_);
v___x_6114_ = l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(v_a_6107_);
v___x_6115_ = l_Std_Format_defWidth;
v___x_6116_ = lean_unsigned_to_nat(0u);
v___x_6117_ = l_Std_Format_pretty(v___x_6114_, v___x_6115_, v___x_6116_, v___x_6116_);
v___x_6118_ = lean_string_append(v___x_6113_, v___x_6117_);
lean_dec_ref(v___x_6117_);
v___x_6119_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6119_, 0, v___x_6118_);
v___x_6120_ = l_Lean_MessageData_ofFormat(v___x_6119_);
v___x_6121_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_6094_, v___x_6120_, v_a_6051_, v_a_6052_, v_a_6053_, v_a_6054_);
if (lean_obj_tag(v___x_6121_) == 0)
{
lean_dec_ref_known(v___x_6121_, 1);
v___y_6057_ = v_a_6051_;
v___y_6058_ = v_a_6052_;
v___y_6059_ = v_a_6053_;
v___y_6060_ = v_a_6054_;
goto v___jp_6056_;
}
else
{
lean_object* v_a_6122_; lean_object* v___x_6124_; uint8_t v_isShared_6125_; uint8_t v_isSharedCheck_6129_; 
lean_dec_ref(v_decl_6050_);
lean_dec_ref(v_assignment_6049_);
v_a_6122_ = lean_ctor_get(v___x_6121_, 0);
v_isSharedCheck_6129_ = !lean_is_exclusive(v___x_6121_);
if (v_isSharedCheck_6129_ == 0)
{
v___x_6124_ = v___x_6121_;
v_isShared_6125_ = v_isSharedCheck_6129_;
goto v_resetjp_6123_;
}
else
{
lean_inc(v_a_6122_);
lean_dec(v___x_6121_);
v___x_6124_ = lean_box(0);
v_isShared_6125_ = v_isSharedCheck_6129_;
goto v_resetjp_6123_;
}
v_resetjp_6123_:
{
lean_object* v___x_6127_; 
if (v_isShared_6125_ == 0)
{
v___x_6127_ = v___x_6124_;
goto v_reusejp_6126_;
}
else
{
lean_object* v_reuseFailAlloc_6128_; 
v_reuseFailAlloc_6128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6128_, 0, v_a_6122_);
v___x_6127_ = v_reuseFailAlloc_6128_;
goto v_reusejp_6126_;
}
v_reusejp_6126_:
{
return v___x_6127_;
}
}
}
}
else
{
lean_object* v_a_6130_; lean_object* v___x_6132_; uint8_t v_isShared_6133_; uint8_t v_isSharedCheck_6137_; 
lean_dec_ref(v_decl_6050_);
lean_dec_ref(v_assignment_6049_);
v_a_6130_ = lean_ctor_get(v___x_6105_, 0);
v_isSharedCheck_6137_ = !lean_is_exclusive(v___x_6105_);
if (v_isSharedCheck_6137_ == 0)
{
v___x_6132_ = v___x_6105_;
v_isShared_6133_ = v_isSharedCheck_6137_;
goto v_resetjp_6131_;
}
else
{
lean_inc(v_a_6130_);
lean_dec(v___x_6105_);
v___x_6132_ = lean_box(0);
v_isShared_6133_ = v_isSharedCheck_6137_;
goto v_resetjp_6131_;
}
v_resetjp_6131_:
{
lean_object* v___x_6135_; 
if (v_isShared_6133_ == 0)
{
v___x_6135_ = v___x_6132_;
goto v_reusejp_6134_;
}
else
{
lean_object* v_reuseFailAlloc_6136_; 
v_reuseFailAlloc_6136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6136_, 0, v_a_6130_);
v___x_6135_ = v_reuseFailAlloc_6136_;
goto v_reusejp_6134_;
}
v_reusejp_6134_:
{
return v___x_6135_;
}
}
}
}
}
v___jp_6056_:
{
lean_object* v_toSignature_6061_; lean_object* v_value_6062_; uint8_t v_recursive_6063_; lean_object* v_inlineAttr_x3f_6064_; lean_object* v___x_6066_; uint8_t v_isShared_6067_; uint8_t v_isSharedCheck_6089_; 
v_toSignature_6061_ = lean_ctor_get(v_decl_6050_, 0);
v_value_6062_ = lean_ctor_get(v_decl_6050_, 1);
v_recursive_6063_ = lean_ctor_get_uint8(v_decl_6050_, sizeof(void*)*3);
v_inlineAttr_x3f_6064_ = lean_ctor_get(v_decl_6050_, 2);
v_isSharedCheck_6089_ = !lean_is_exclusive(v_decl_6050_);
if (v_isSharedCheck_6089_ == 0)
{
v___x_6066_ = v_decl_6050_;
v_isShared_6067_ = v_isSharedCheck_6089_;
goto v_resetjp_6065_;
}
else
{
lean_inc(v_inlineAttr_x3f_6064_);
lean_inc(v_value_6062_);
lean_inc(v_toSignature_6061_);
lean_dec(v_decl_6050_);
v___x_6066_ = lean_box(0);
v_isShared_6067_ = v_isSharedCheck_6089_;
goto v_resetjp_6065_;
}
v_resetjp_6065_:
{
lean_object* v___x_6068_; lean_object* v___x_6069_; 
v___x_6068_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed), 7, 1);
lean_closure_set(v___x_6068_, 0, v_assignment_6049_);
v___x_6069_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v___x_6068_, v_value_6062_, v___y_6057_, v___y_6058_, v___y_6059_, v___y_6060_);
if (lean_obj_tag(v___x_6069_) == 0)
{
lean_object* v_a_6070_; lean_object* v___x_6072_; uint8_t v_isShared_6073_; uint8_t v_isSharedCheck_6080_; 
v_a_6070_ = lean_ctor_get(v___x_6069_, 0);
v_isSharedCheck_6080_ = !lean_is_exclusive(v___x_6069_);
if (v_isSharedCheck_6080_ == 0)
{
v___x_6072_ = v___x_6069_;
v_isShared_6073_ = v_isSharedCheck_6080_;
goto v_resetjp_6071_;
}
else
{
lean_inc(v_a_6070_);
lean_dec(v___x_6069_);
v___x_6072_ = lean_box(0);
v_isShared_6073_ = v_isSharedCheck_6080_;
goto v_resetjp_6071_;
}
v_resetjp_6071_:
{
lean_object* v___x_6075_; 
if (v_isShared_6067_ == 0)
{
lean_ctor_set(v___x_6066_, 1, v_a_6070_);
v___x_6075_ = v___x_6066_;
goto v_reusejp_6074_;
}
else
{
lean_object* v_reuseFailAlloc_6079_; 
v_reuseFailAlloc_6079_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_6079_, 0, v_toSignature_6061_);
lean_ctor_set(v_reuseFailAlloc_6079_, 1, v_a_6070_);
lean_ctor_set(v_reuseFailAlloc_6079_, 2, v_inlineAttr_x3f_6064_);
lean_ctor_set_uint8(v_reuseFailAlloc_6079_, sizeof(void*)*3, v_recursive_6063_);
v___x_6075_ = v_reuseFailAlloc_6079_;
goto v_reusejp_6074_;
}
v_reusejp_6074_:
{
lean_object* v___x_6077_; 
if (v_isShared_6073_ == 0)
{
lean_ctor_set(v___x_6072_, 0, v___x_6075_);
v___x_6077_ = v___x_6072_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6078_; 
v_reuseFailAlloc_6078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6078_, 0, v___x_6075_);
v___x_6077_ = v_reuseFailAlloc_6078_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
return v___x_6077_;
}
}
}
}
else
{
lean_object* v_a_6081_; lean_object* v___x_6083_; uint8_t v_isShared_6084_; uint8_t v_isSharedCheck_6088_; 
lean_del_object(v___x_6066_);
lean_dec(v_inlineAttr_x3f_6064_);
lean_dec_ref(v_toSignature_6061_);
v_a_6081_ = lean_ctor_get(v___x_6069_, 0);
v_isSharedCheck_6088_ = !lean_is_exclusive(v___x_6069_);
if (v_isSharedCheck_6088_ == 0)
{
v___x_6083_ = v___x_6069_;
v_isShared_6084_ = v_isSharedCheck_6088_;
goto v_resetjp_6082_;
}
else
{
lean_inc(v_a_6081_);
lean_dec(v___x_6069_);
v___x_6083_ = lean_box(0);
v_isShared_6084_ = v_isSharedCheck_6088_;
goto v_resetjp_6082_;
}
v_resetjp_6082_:
{
lean_object* v___x_6086_; 
if (v_isShared_6084_ == 0)
{
v___x_6086_ = v___x_6083_;
goto v_reusejp_6085_;
}
else
{
lean_object* v_reuseFailAlloc_6087_; 
v_reuseFailAlloc_6087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6087_, 0, v_a_6081_);
v___x_6086_ = v_reuseFailAlloc_6087_;
goto v_reusejp_6085_;
}
v_reusejp_6085_:
{
return v___x_6086_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___boxed(lean_object* v_assignment_6149_, lean_object* v_decl_6150_, lean_object* v_a_6151_, lean_object* v_a_6152_, lean_object* v_a_6153_, lean_object* v_a_6154_, lean_object* v_a_6155_){
_start:
{
lean_object* v_res_6156_; 
v_res_6156_ = l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(v_assignment_6149_, v_decl_6150_, v_a_6151_, v_a_6152_, v_a_6153_, v_a_6154_);
lean_dec(v_a_6154_);
lean_dec_ref(v_a_6153_);
lean_dec(v_a_6152_);
lean_dec_ref(v_a_6151_);
return v_res_6156_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(lean_object* v_x_6157_, lean_object* v_x_6158_){
_start:
{
lean_object* v___x_6159_; 
v___x_6159_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_x_6157_);
return v___x_6159_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___boxed(lean_object* v_x_6160_, lean_object* v_x_6161_){
_start:
{
lean_object* v_res_6162_; 
v_res_6162_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(v_x_6160_, v_x_6161_);
lean_dec(v_x_6161_);
return v_res_6162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(size_t v_sz_6163_, size_t v_i_6164_, lean_object* v_bs_6165_){
_start:
{
uint8_t v___x_6166_; 
v___x_6166_ = lean_usize_dec_lt(v_i_6164_, v_sz_6163_);
if (v___x_6166_ == 0)
{
lean_object* v___x_6167_; 
v___x_6167_ = l_unsafeCast___redArg(v_bs_6165_);
lean_dec_ref(v_bs_6165_);
return v___x_6167_;
}
else
{
lean_object* v_v_6168_; lean_object* v___x_6169_; lean_object* v_toSignature_6170_; lean_object* v_name_6171_; lean_object* v___x_6172_; lean_object* v_bs_x27_6173_; size_t v___x_6174_; size_t v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; 
v_v_6168_ = lean_array_uget_borrowed(v_bs_6165_, v_i_6164_);
v___x_6169_ = l_unsafeCast___redArg(v_v_6168_);
v_toSignature_6170_ = lean_ctor_get(v___x_6169_, 0);
lean_inc_ref(v_toSignature_6170_);
lean_dec(v___x_6169_);
v_name_6171_ = lean_ctor_get(v_toSignature_6170_, 0);
lean_inc(v_name_6171_);
lean_dec_ref(v_toSignature_6170_);
v___x_6172_ = lean_unsigned_to_nat(0u);
v_bs_x27_6173_ = lean_array_uset(v_bs_6165_, v_i_6164_, v___x_6172_);
v___x_6174_ = ((size_t)1ULL);
v___x_6175_ = lean_usize_add(v_i_6164_, v___x_6174_);
v___x_6176_ = l_unsafeCast___redArg(v_name_6171_);
lean_dec(v_name_6171_);
v___x_6177_ = lean_array_uset(v_bs_x27_6173_, v_i_6164_, v___x_6176_);
v_i_6164_ = v___x_6175_;
v_bs_6165_ = v___x_6177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0___boxed(lean_object* v_sz_6179_, lean_object* v_i_6180_, lean_object* v_bs_6181_){
_start:
{
size_t v_sz_boxed_6182_; size_t v_i_boxed_6183_; lean_object* v_res_6184_; 
v_sz_boxed_6182_ = lean_unbox_usize(v_sz_6179_);
lean_dec(v_sz_6179_);
v_i_boxed_6183_ = lean_unbox_usize(v_i_6180_);
lean_dec(v_i_6180_);
v_res_6184_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(v_sz_boxed_6182_, v_i_boxed_6183_, v_bs_6181_);
return v_res_6184_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(lean_object* v_a_6185_, lean_object* v_a_6186_){
_start:
{
if (lean_obj_tag(v_a_6185_) == 0)
{
lean_object* v___x_6187_; 
v___x_6187_ = l_List_reverse___redArg(v_a_6186_);
return v___x_6187_;
}
else
{
lean_object* v_head_6188_; lean_object* v_tail_6189_; lean_object* v___x_6191_; uint8_t v_isShared_6192_; uint8_t v_isSharedCheck_6198_; 
v_head_6188_ = lean_ctor_get(v_a_6185_, 0);
v_tail_6189_ = lean_ctor_get(v_a_6185_, 1);
v_isSharedCheck_6198_ = !lean_is_exclusive(v_a_6185_);
if (v_isSharedCheck_6198_ == 0)
{
v___x_6191_ = v_a_6185_;
v_isShared_6192_ = v_isSharedCheck_6198_;
goto v_resetjp_6190_;
}
else
{
lean_inc(v_tail_6189_);
lean_inc(v_head_6188_);
lean_dec(v_a_6185_);
v___x_6191_ = lean_box(0);
v_isShared_6192_ = v_isSharedCheck_6198_;
goto v_resetjp_6190_;
}
v_resetjp_6190_:
{
lean_object* v___x_6193_; lean_object* v___x_6195_; 
v___x_6193_ = l_Lean_MessageData_ofName(v_head_6188_);
if (v_isShared_6192_ == 0)
{
lean_ctor_set(v___x_6191_, 1, v_a_6186_);
lean_ctor_set(v___x_6191_, 0, v___x_6193_);
v___x_6195_ = v___x_6191_;
goto v_reusejp_6194_;
}
else
{
lean_object* v_reuseFailAlloc_6197_; 
v_reuseFailAlloc_6197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6197_, 0, v___x_6193_);
lean_ctor_set(v_reuseFailAlloc_6197_, 1, v_a_6186_);
v___x_6195_ = v_reuseFailAlloc_6197_;
goto v_reusejp_6194_;
}
v_reusejp_6194_:
{
v_a_6185_ = v_tail_6189_;
v_a_6186_ = v___x_6195_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6200_; lean_object* v___x_6201_; 
v___x_6200_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0));
v___x_6201_ = l_Lean_stringToMessageData(v___x_6200_);
return v___x_6201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(lean_object* v___y_6202_, lean_object* v_x_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_, lean_object* v___y_6208_, lean_object* v___y_6209_){
_start:
{
lean_object* v___x_6211_; size_t v_sz_6212_; size_t v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; 
v___x_6211_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1);
v_sz_6212_ = lean_array_size(v___y_6202_);
v___x_6213_ = ((size_t)0ULL);
v___x_6214_ = l_unsafeCast___redArg(v___y_6202_);
v___x_6215_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(v_sz_6212_, v___x_6213_, v___x_6214_);
v___x_6216_ = l_unsafeCast___redArg(v___x_6215_);
lean_dec_ref(v___x_6215_);
v___x_6217_ = lean_array_to_list(v___x_6216_);
v___x_6218_ = lean_box(0);
v___x_6219_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(v___x_6217_, v___x_6218_);
v___x_6220_ = l_Lean_MessageData_ofList(v___x_6219_);
v___x_6221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6221_, 0, v___x_6211_);
lean_ctor_set(v___x_6221_, 1, v___x_6220_);
v___x_6222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6222_, 0, v___x_6221_);
return v___x_6222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed(lean_object* v___y_6223_, lean_object* v_x_6224_, lean_object* v___y_6225_, lean_object* v___y_6226_, lean_object* v___y_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_, lean_object* v___y_6231_){
_start:
{
lean_object* v_res_6232_; 
v_res_6232_ = l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(v___y_6223_, v_x_6224_, v___y_6225_, v___y_6226_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_);
lean_dec(v___y_6230_);
lean_dec_ref(v___y_6229_);
lean_dec(v___y_6228_);
lean_dec_ref(v___y_6227_);
lean_dec(v___y_6226_);
lean_dec_ref(v___y_6225_);
lean_dec_ref(v_x_6224_);
lean_dec_ref(v___y_6223_);
return v_res_6232_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_6233_; 
v___x_6233_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default___redArg();
return v___x_6233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(lean_object* v___y_6234_, lean_object* v_n_6235_, lean_object* v_j_6236_, lean_object* v_a_6237_){
_start:
{
lean_object* v_zero_6238_; uint8_t v_isZero_6239_; 
v_zero_6238_ = lean_unsigned_to_nat(0u);
v_isZero_6239_ = lean_nat_dec_eq(v_j_6236_, v_zero_6238_);
if (v_isZero_6239_ == 1)
{
lean_dec(v_j_6236_);
return v_a_6237_;
}
else
{
lean_object* v___x_6240_; lean_object* v___x_6241_; lean_object* v___x_6242_; lean_object* v_toSignature_6243_; uint8_t v_safe_6244_; lean_object* v_one_6245_; lean_object* v_n_6246_; 
v___x_6240_ = lean_nat_sub(v_n_6235_, v_j_6236_);
v___x_6241_ = lean_obj_once(&l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0, &l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0_once, _init_l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0);
v___x_6242_ = lean_array_get_borrowed(v___x_6241_, v___y_6234_, v___x_6240_);
lean_dec(v___x_6240_);
v_toSignature_6243_ = lean_ctor_get(v___x_6242_, 0);
v_safe_6244_ = lean_ctor_get_uint8(v_toSignature_6243_, sizeof(void*)*4);
v_one_6245_ = lean_unsigned_to_nat(1u);
v_n_6246_ = lean_nat_sub(v_j_6236_, v_one_6245_);
lean_dec(v_j_6236_);
if (v_safe_6244_ == 0)
{
lean_object* v___x_6247_; lean_object* v___x_6248_; 
v___x_6247_ = lean_box(1);
v___x_6248_ = lean_array_push(v_a_6237_, v___x_6247_);
v_j_6236_ = v_n_6246_;
v_a_6237_ = v___x_6248_;
goto _start;
}
else
{
lean_object* v___x_6250_; lean_object* v___x_6251_; 
v___x_6250_ = lean_box(0);
v___x_6251_ = lean_array_push(v_a_6237_, v___x_6250_);
v_j_6236_ = v_n_6246_;
v_a_6237_ = v___x_6251_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___boxed(lean_object* v___y_6253_, lean_object* v_n_6254_, lean_object* v_j_6255_, lean_object* v_a_6256_){
_start:
{
lean_object* v_res_6257_; 
v_res_6257_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6253_, v_n_6254_, v_j_6255_, v_a_6256_);
lean_dec(v_n_6254_);
lean_dec_ref(v___y_6253_);
return v_res_6257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(lean_object* v___x_6258_, size_t v_sz_6259_, size_t v_i_6260_, lean_object* v_bs_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_){
_start:
{
uint8_t v___x_6267_; 
v___x_6267_ = lean_usize_dec_lt(v_i_6260_, v_sz_6259_);
if (v___x_6267_ == 0)
{
lean_object* v___x_6268_; lean_object* v___x_6269_; 
v___x_6268_ = l_unsafeCast___redArg(v_bs_6261_);
lean_dec_ref(v_bs_6261_);
v___x_6269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6269_, 0, v___x_6268_);
return v___x_6269_;
}
else
{
lean_object* v_v_6270_; lean_object* v___x_6271_; lean_object* v_toSignature_6272_; uint8_t v_safe_6273_; lean_object* v___x_6274_; lean_object* v_bs_x27_6275_; lean_object* v_a_6277_; 
v_v_6270_ = lean_array_uget_borrowed(v_bs_6261_, v_i_6260_);
v___x_6271_ = l_unsafeCast___redArg(v_v_6270_);
v_toSignature_6272_ = lean_ctor_get(v___x_6271_, 0);
lean_inc_ref(v_toSignature_6272_);
v_safe_6273_ = lean_ctor_get_uint8(v_toSignature_6272_, sizeof(void*)*4);
lean_dec_ref(v_toSignature_6272_);
v___x_6274_ = lean_unsigned_to_nat(0u);
v_bs_x27_6275_ = lean_array_uset(v_bs_6261_, v_i_6260_, v___x_6274_);
if (v_safe_6273_ == 0)
{
v_a_6277_ = v___x_6271_;
goto v___jp_6276_;
}
else
{
lean_object* v___x_6283_; lean_object* v___x_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; 
v___x_6283_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0);
v___x_6284_ = lean_usize_to_nat(v_i_6260_);
v___x_6285_ = lean_array_get_borrowed(v___x_6283_, v___x_6258_, v___x_6284_);
lean_dec(v___x_6284_);
lean_inc(v___x_6285_);
v___x_6286_ = l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(v___x_6285_, v___x_6271_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_);
if (lean_obj_tag(v___x_6286_) == 0)
{
lean_object* v_a_6287_; 
v_a_6287_ = lean_ctor_get(v___x_6286_, 0);
lean_inc(v_a_6287_);
lean_dec_ref_known(v___x_6286_, 1);
v_a_6277_ = v_a_6287_;
goto v___jp_6276_;
}
else
{
lean_object* v_a_6288_; lean_object* v___x_6290_; uint8_t v_isShared_6291_; uint8_t v_isSharedCheck_6295_; 
lean_dec_ref(v_bs_x27_6275_);
v_a_6288_ = lean_ctor_get(v___x_6286_, 0);
v_isSharedCheck_6295_ = !lean_is_exclusive(v___x_6286_);
if (v_isSharedCheck_6295_ == 0)
{
v___x_6290_ = v___x_6286_;
v_isShared_6291_ = v_isSharedCheck_6295_;
goto v_resetjp_6289_;
}
else
{
lean_inc(v_a_6288_);
lean_dec(v___x_6286_);
v___x_6290_ = lean_box(0);
v_isShared_6291_ = v_isSharedCheck_6295_;
goto v_resetjp_6289_;
}
v_resetjp_6289_:
{
lean_object* v___x_6293_; 
if (v_isShared_6291_ == 0)
{
v___x_6293_ = v___x_6290_;
goto v_reusejp_6292_;
}
else
{
lean_object* v_reuseFailAlloc_6294_; 
v_reuseFailAlloc_6294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6294_, 0, v_a_6288_);
v___x_6293_ = v_reuseFailAlloc_6294_;
goto v_reusejp_6292_;
}
v_reusejp_6292_:
{
return v___x_6293_;
}
}
}
}
v___jp_6276_:
{
size_t v___x_6278_; size_t v___x_6279_; lean_object* v___x_6280_; lean_object* v___x_6281_; 
v___x_6278_ = ((size_t)1ULL);
v___x_6279_ = lean_usize_add(v_i_6260_, v___x_6278_);
v___x_6280_ = l_unsafeCast___redArg(v_a_6277_);
lean_dec_ref(v_a_6277_);
v___x_6281_ = lean_array_uset(v_bs_x27_6275_, v_i_6260_, v___x_6280_);
v_i_6260_ = v___x_6279_;
v_bs_6261_ = v___x_6281_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg___boxed(lean_object* v___x_6296_, lean_object* v_sz_6297_, lean_object* v_i_6298_, lean_object* v_bs_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_, lean_object* v___y_6304_){
_start:
{
size_t v_sz_boxed_6305_; size_t v_i_boxed_6306_; lean_object* v_res_6307_; 
v_sz_boxed_6305_ = lean_unbox_usize(v_sz_6297_);
lean_dec(v_sz_6297_);
v_i_boxed_6306_ = lean_unbox_usize(v_i_6298_);
lean_dec(v_i_6298_);
v_res_6307_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v___x_6296_, v_sz_boxed_6305_, v_i_boxed_6306_, v_bs_6299_, v___y_6300_, v___y_6301_, v___y_6302_, v___y_6303_);
lean_dec(v___y_6303_);
lean_dec_ref(v___y_6302_);
lean_dec(v___y_6301_);
lean_dec_ref(v___y_6300_);
lean_dec_ref(v___x_6296_);
return v_res_6307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(lean_object* v___x_6308_, lean_object* v_as_6309_, size_t v_sz_6310_, size_t v_i_6311_, lean_object* v_bs_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_, lean_object* v___y_6316_){
_start:
{
lean_object* v___x_6318_; 
v___x_6318_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v___x_6308_, v_sz_6310_, v_i_6311_, v_bs_6312_, v___y_6313_, v___y_6314_, v___y_6315_, v___y_6316_);
return v___x_6318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed(lean_object* v___x_6319_, lean_object* v_as_6320_, lean_object* v_sz_6321_, lean_object* v_i_6322_, lean_object* v_bs_6323_, lean_object* v___y_6324_, lean_object* v___y_6325_, lean_object* v___y_6326_, lean_object* v___y_6327_, lean_object* v___y_6328_){
_start:
{
size_t v_sz_boxed_6329_; size_t v_i_boxed_6330_; lean_object* v_res_6331_; 
v_sz_boxed_6329_ = lean_unbox_usize(v_sz_6321_);
lean_dec(v_sz_6321_);
v_i_boxed_6330_ = lean_unbox_usize(v_i_6322_);
lean_dec(v_i_6322_);
v_res_6331_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(v___x_6319_, v_as_6320_, v_sz_boxed_6329_, v_i_boxed_6330_, v_bs_6323_, v___y_6324_, v___y_6325_, v___y_6326_, v___y_6327_);
lean_dec(v___y_6327_);
lean_dec_ref(v___y_6326_);
lean_dec(v___y_6325_);
lean_dec_ref(v___y_6324_);
lean_dec_ref(v_as_6320_);
lean_dec_ref(v___x_6319_);
return v_res_6331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(lean_object* v_hi_6334_, lean_object* v_pivot_6335_, lean_object* v_as_6336_, lean_object* v_i_6337_, lean_object* v_k_6338_){
_start:
{
uint8_t v___x_6339_; 
v___x_6339_ = lean_nat_dec_lt(v_k_6338_, v_hi_6334_);
if (v___x_6339_ == 0)
{
lean_object* v___x_6340_; lean_object* v___x_6341_; 
lean_dec(v_k_6338_);
lean_dec_ref(v_pivot_6335_);
v___x_6340_ = lean_array_fswap(v_as_6336_, v_i_6337_, v_hi_6334_);
v___x_6341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6341_, 0, v_i_6337_);
lean_ctor_set(v___x_6341_, 1, v___x_6340_);
return v___x_6341_;
}
else
{
lean_object* v___x_6342_; lean_object* v_toSignature_6343_; lean_object* v_toSignature_6344_; lean_object* v_name_6345_; lean_object* v_name_6346_; uint8_t v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; uint8_t v___x_6357_; 
v___x_6342_ = lean_array_fget_borrowed(v_as_6336_, v_k_6338_);
v_toSignature_6343_ = lean_ctor_get(v___x_6342_, 0);
v_toSignature_6344_ = lean_ctor_get(v_pivot_6335_, 0);
v_name_6345_ = lean_ctor_get(v_toSignature_6343_, 0);
v_name_6346_ = lean_ctor_get(v_toSignature_6344_, 0);
v___x_6347_ = 0;
v___x_6348_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6347_, v___x_6342_);
v___x_6349_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_6350_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0));
v___x_6351_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1));
lean_inc(v_name_6345_);
v___x_6352_ = l_Lean_Name_toString(v_name_6345_, v___x_6339_);
v___x_6353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6353_, 0, v___x_6348_);
lean_ctor_set(v___x_6353_, 1, v___x_6352_);
v___x_6354_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6347_, v_pivot_6335_);
lean_inc(v_name_6346_);
v___x_6355_ = l_Lean_Name_toString(v_name_6346_, v___x_6339_);
v___x_6356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6356_, 0, v___x_6354_);
lean_ctor_set(v___x_6356_, 1, v___x_6355_);
v___x_6357_ = l_Prod_lexLtDec___redArg(v___x_6349_, v___x_6350_, v___x_6351_, v___x_6353_, v___x_6356_);
if (v___x_6357_ == 0)
{
lean_object* v___x_6358_; lean_object* v___x_6359_; 
v___x_6358_ = lean_unsigned_to_nat(1u);
v___x_6359_ = lean_nat_add(v_k_6338_, v___x_6358_);
lean_dec(v_k_6338_);
v_k_6338_ = v___x_6359_;
goto _start;
}
else
{
lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6364_; 
v___x_6361_ = lean_array_fswap(v_as_6336_, v_i_6337_, v_k_6338_);
v___x_6362_ = lean_unsigned_to_nat(1u);
v___x_6363_ = lean_nat_add(v_i_6337_, v___x_6362_);
lean_dec(v_i_6337_);
v___x_6364_ = lean_nat_add(v_k_6338_, v___x_6362_);
lean_dec(v_k_6338_);
v_as_6336_ = v___x_6361_;
v_i_6337_ = v___x_6363_;
v_k_6338_ = v___x_6364_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___boxed(lean_object* v_hi_6366_, lean_object* v_pivot_6367_, lean_object* v_as_6368_, lean_object* v_i_6369_, lean_object* v_k_6370_){
_start:
{
lean_object* v_res_6371_; 
v_res_6371_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(v_hi_6366_, v_pivot_6367_, v_as_6368_, v_i_6369_, v_k_6370_);
lean_dec(v_hi_6366_);
return v_res_6371_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(uint8_t v___x_6372_, lean_object* v_l_6373_, lean_object* v_r_6374_){
_start:
{
lean_object* v_toSignature_6375_; lean_object* v_toSignature_6376_; lean_object* v_name_6377_; lean_object* v_name_6378_; uint8_t v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; uint8_t v___x_6389_; 
v_toSignature_6375_ = lean_ctor_get(v_l_6373_, 0);
v_toSignature_6376_ = lean_ctor_get(v_r_6374_, 0);
v_name_6377_ = lean_ctor_get(v_toSignature_6375_, 0);
lean_inc(v_name_6377_);
v_name_6378_ = lean_ctor_get(v_toSignature_6376_, 0);
lean_inc(v_name_6378_);
v___x_6379_ = 0;
v___x_6380_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6379_, v_l_6373_);
lean_dec_ref(v_l_6373_);
v___x_6381_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_6382_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0));
v___x_6383_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1));
v___x_6384_ = l_Lean_Name_toString(v_name_6377_, v___x_6372_);
v___x_6385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6385_, 0, v___x_6380_);
lean_ctor_set(v___x_6385_, 1, v___x_6384_);
v___x_6386_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6379_, v_r_6374_);
lean_dec_ref(v_r_6374_);
v___x_6387_ = l_Lean_Name_toString(v_name_6378_, v___x_6372_);
v___x_6388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6388_, 0, v___x_6386_);
lean_ctor_set(v___x_6388_, 1, v___x_6387_);
v___x_6389_ = l_Prod_lexLtDec___redArg(v___x_6381_, v___x_6382_, v___x_6383_, v___x_6385_, v___x_6388_);
return v___x_6389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed(lean_object* v___x_6390_, lean_object* v_l_6391_, lean_object* v_r_6392_){
_start:
{
uint8_t v___x_13264__boxed_6393_; uint8_t v_res_6394_; lean_object* v_r_6395_; 
v___x_13264__boxed_6393_ = lean_unbox(v___x_6390_);
v_res_6394_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_13264__boxed_6393_, v_l_6391_, v_r_6392_);
v_r_6395_ = lean_box(v_res_6394_);
return v_r_6395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(lean_object* v_n_6396_, lean_object* v_as_6397_, lean_object* v_lo_6398_, lean_object* v_hi_6399_){
_start:
{
lean_object* v___y_6401_; uint8_t v___x_6411_; 
v___x_6411_ = lean_nat_dec_lt(v_lo_6398_, v_hi_6399_);
if (v___x_6411_ == 0)
{
lean_dec(v_lo_6398_);
return v_as_6397_;
}
else
{
lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v_mid_6414_; lean_object* v___y_6416_; lean_object* v___y_6422_; lean_object* v___x_6427_; lean_object* v___x_6428_; uint8_t v___x_6429_; 
v___x_6412_ = lean_nat_add(v_lo_6398_, v_hi_6399_);
v___x_6413_ = lean_unsigned_to_nat(1u);
v_mid_6414_ = lean_nat_shiftr(v___x_6412_, v___x_6413_);
lean_dec(v___x_6412_);
v___x_6427_ = lean_array_fget_borrowed(v_as_6397_, v_mid_6414_);
v___x_6428_ = lean_array_fget_borrowed(v_as_6397_, v_lo_6398_);
lean_inc(v___x_6428_);
lean_inc(v___x_6427_);
v___x_6429_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_6411_, v___x_6427_, v___x_6428_);
if (v___x_6429_ == 0)
{
v___y_6422_ = v_as_6397_;
goto v___jp_6421_;
}
else
{
lean_object* v___x_6430_; 
v___x_6430_ = lean_array_fswap(v_as_6397_, v_lo_6398_, v_mid_6414_);
v___y_6422_ = v___x_6430_;
goto v___jp_6421_;
}
v___jp_6415_:
{
lean_object* v___x_6417_; lean_object* v___x_6418_; uint8_t v___x_6419_; 
v___x_6417_ = lean_array_fget_borrowed(v___y_6416_, v_mid_6414_);
v___x_6418_ = lean_array_fget_borrowed(v___y_6416_, v_hi_6399_);
lean_inc(v___x_6418_);
lean_inc(v___x_6417_);
v___x_6419_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_6411_, v___x_6417_, v___x_6418_);
if (v___x_6419_ == 0)
{
lean_dec(v_mid_6414_);
v___y_6401_ = v___y_6416_;
goto v___jp_6400_;
}
else
{
lean_object* v___x_6420_; 
v___x_6420_ = lean_array_fswap(v___y_6416_, v_mid_6414_, v_hi_6399_);
lean_dec(v_mid_6414_);
v___y_6401_ = v___x_6420_;
goto v___jp_6400_;
}
}
v___jp_6421_:
{
lean_object* v___x_6423_; lean_object* v___x_6424_; uint8_t v___x_6425_; 
v___x_6423_ = lean_array_fget_borrowed(v___y_6422_, v_hi_6399_);
v___x_6424_ = lean_array_fget_borrowed(v___y_6422_, v_lo_6398_);
lean_inc(v___x_6424_);
lean_inc(v___x_6423_);
v___x_6425_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_6411_, v___x_6423_, v___x_6424_);
if (v___x_6425_ == 0)
{
v___y_6416_ = v___y_6422_;
goto v___jp_6415_;
}
else
{
lean_object* v___x_6426_; 
v___x_6426_ = lean_array_fswap(v___y_6422_, v_lo_6398_, v_hi_6399_);
v___y_6416_ = v___x_6426_;
goto v___jp_6415_;
}
}
}
v___jp_6400_:
{
lean_object* v_pivot_6402_; lean_object* v___x_6403_; lean_object* v_fst_6404_; lean_object* v_snd_6405_; uint8_t v___x_6406_; 
v_pivot_6402_ = lean_array_fget(v___y_6401_, v_hi_6399_);
lean_inc_n(v_lo_6398_, 2);
v___x_6403_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(v_hi_6399_, v_pivot_6402_, v___y_6401_, v_lo_6398_, v_lo_6398_);
v_fst_6404_ = lean_ctor_get(v___x_6403_, 0);
lean_inc(v_fst_6404_);
v_snd_6405_ = lean_ctor_get(v___x_6403_, 1);
lean_inc(v_snd_6405_);
lean_dec_ref(v___x_6403_);
v___x_6406_ = lean_nat_dec_le(v_hi_6399_, v_fst_6404_);
if (v___x_6406_ == 0)
{
lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; 
v___x_6407_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_n_6396_, v_snd_6405_, v_lo_6398_, v_fst_6404_);
v___x_6408_ = lean_unsigned_to_nat(1u);
v___x_6409_ = lean_nat_add(v_fst_6404_, v___x_6408_);
lean_dec(v_fst_6404_);
v_as_6397_ = v___x_6407_;
v_lo_6398_ = v___x_6409_;
goto _start;
}
else
{
lean_dec(v_fst_6404_);
lean_dec(v_lo_6398_);
return v_snd_6405_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___boxed(lean_object* v_n_6431_, lean_object* v_as_6432_, lean_object* v_lo_6433_, lean_object* v_hi_6434_){
_start:
{
lean_object* v_res_6435_; 
v_res_6435_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_n_6431_, v_as_6432_, v_lo_6433_, v_hi_6434_);
lean_dec(v_hi_6434_);
lean_dec(v_n_6431_);
return v_res_6435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(lean_object* v___y_6436_, lean_object* v___x_6437_, lean_object* v_n_6438_, lean_object* v_j_6439_, lean_object* v_a_6440_){
_start:
{
lean_object* v_zero_6441_; uint8_t v_isZero_6442_; 
v_zero_6441_ = lean_unsigned_to_nat(0u);
v_isZero_6442_ = lean_nat_dec_eq(v_j_6439_, v_zero_6441_);
if (v_isZero_6442_ == 1)
{
lean_dec(v_j_6439_);
return v_a_6440_;
}
else
{
lean_object* v___x_6443_; lean_object* v___x_6444_; lean_object* v_toSignature_6445_; lean_object* v_name_6446_; lean_object* v___x_6447_; lean_object* v_one_6448_; lean_object* v_n_6449_; lean_object* v___x_6450_; lean_object* v___x_6451_; 
v___x_6443_ = lean_nat_sub(v_n_6438_, v_j_6439_);
v___x_6444_ = lean_array_fget_borrowed(v___y_6436_, v___x_6443_);
v_toSignature_6445_ = lean_ctor_get(v___x_6444_, 0);
v_name_6446_ = lean_ctor_get(v_toSignature_6445_, 0);
v___x_6447_ = lean_box(0);
v_one_6448_ = lean_unsigned_to_nat(1u);
v_n_6449_ = lean_nat_sub(v_j_6439_, v_one_6448_);
lean_dec(v_j_6439_);
v___x_6450_ = lean_array_get_borrowed(v___x_6447_, v___x_6437_, v___x_6443_);
lean_dec(v___x_6443_);
lean_inc(v___x_6450_);
lean_inc(v_name_6446_);
v___x_6451_ = l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(v_a_6440_, v_name_6446_, v___x_6450_);
v_j_6439_ = v_n_6449_;
v_a_6440_ = v___x_6451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg___boxed(lean_object* v___y_6453_, lean_object* v___x_6454_, lean_object* v_n_6455_, lean_object* v_j_6456_, lean_object* v_a_6457_){
_start:
{
lean_object* v_res_6458_; 
v_res_6458_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6453_, v___x_6454_, v_n_6455_, v_j_6456_, v_a_6457_);
lean_dec(v_n_6455_);
lean_dec_ref(v___x_6454_);
lean_dec_ref(v___y_6453_);
return v_res_6458_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0(void){
_start:
{
lean_object* v___x_6459_; lean_object* v___x_6460_; 
v___x_6459_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_6460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6460_, 0, v___x_6459_);
return v___x_6460_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1(void){
_start:
{
lean_object* v___x_6461_; lean_object* v___x_6462_; 
v___x_6461_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0);
v___x_6462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6462_, 0, v___x_6461_);
lean_ctor_set(v___x_6462_, 1, v___x_6461_);
return v___x_6462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches(lean_object* v_decls_6465_, lean_object* v_a_6466_, lean_object* v_a_6467_, lean_object* v_a_6468_, lean_object* v_a_6469_){
_start:
{
lean_object* v___y_6472_; size_t v___y_6473_; lean_object* v___y_6474_; lean_object* v___y_6475_; lean_object* v___y_6476_; size_t v___y_6477_; lean_object* v___y_6478_; lean_object* v___y_6516_; lean_object* v___y_6517_; uint8_t v___y_6518_; lean_object* v___y_6519_; lean_object* v___y_6520_; lean_object* v___y_6521_; lean_object* v___y_6522_; lean_object* v___y_6523_; uint8_t v___y_6524_; lean_object* v___y_6525_; size_t v___y_6526_; lean_object* v___y_6527_; size_t v___y_6528_; lean_object* v___y_6529_; lean_object* v___y_6530_; lean_object* v_a_6531_; lean_object* v___y_6541_; lean_object* v___y_6542_; uint8_t v___y_6543_; lean_object* v___y_6544_; lean_object* v___y_6545_; lean_object* v___y_6546_; lean_object* v___y_6547_; uint8_t v___y_6548_; lean_object* v___y_6549_; size_t v___y_6550_; lean_object* v___y_6551_; size_t v___y_6552_; lean_object* v___y_6553_; lean_object* v___y_6554_; lean_object* v___y_6555_; lean_object* v_a_6556_; lean_object* v___x_6568_; lean_object* v___y_6570_; lean_object* v___y_6571_; uint8_t v___y_6572_; lean_object* v___y_6573_; lean_object* v___y_6574_; lean_object* v___y_6575_; uint8_t v___y_6576_; lean_object* v___y_6577_; size_t v___y_6578_; lean_object* v___y_6579_; size_t v___y_6580_; lean_object* v___y_6581_; lean_object* v___y_6582_; lean_object* v___y_6624_; lean_object* v___x_6650_; lean_object* v___y_6652_; lean_object* v___y_6653_; uint8_t v___x_6655_; 
v___x_6568_ = lean_unsigned_to_nat(0u);
v___x_6650_ = lean_array_get_size(v_decls_6465_);
v___x_6655_ = lean_nat_dec_eq(v___x_6650_, v___x_6568_);
if (v___x_6655_ == 0)
{
lean_object* v___x_6656_; lean_object* v___x_6657_; lean_object* v___y_6659_; uint8_t v___x_6661_; 
v___x_6656_ = lean_unsigned_to_nat(1u);
v___x_6657_ = lean_nat_sub(v___x_6650_, v___x_6656_);
v___x_6661_ = lean_nat_dec_le(v___x_6568_, v___x_6657_);
if (v___x_6661_ == 0)
{
lean_inc(v___x_6657_);
v___y_6659_ = v___x_6657_;
goto v___jp_6658_;
}
else
{
v___y_6659_ = v___x_6568_;
goto v___jp_6658_;
}
v___jp_6658_:
{
uint8_t v___x_6660_; 
v___x_6660_ = lean_nat_dec_le(v___y_6659_, v___x_6657_);
if (v___x_6660_ == 0)
{
lean_dec(v___x_6657_);
lean_inc(v___y_6659_);
v___y_6652_ = v___y_6659_;
v___y_6653_ = v___y_6659_;
goto v___jp_6651_;
}
else
{
v___y_6652_ = v___y_6659_;
v___y_6653_ = v___x_6657_;
goto v___jp_6651_;
}
}
}
else
{
v___y_6624_ = v_decls_6465_;
goto v___jp_6623_;
}
v___jp_6471_:
{
if (lean_obj_tag(v___y_6478_) == 0)
{
lean_object* v___x_6479_; lean_object* v_assignments_6480_; lean_object* v_funVals_6481_; lean_object* v___x_6482_; lean_object* v_env_6483_; lean_object* v_nextMacroScope_6484_; lean_object* v_ngen_6485_; lean_object* v_auxDeclNGen_6486_; lean_object* v_traceState_6487_; lean_object* v_messages_6488_; lean_object* v_infoState_6489_; lean_object* v_snapshotTasks_6490_; lean_object* v___x_6492_; uint8_t v_isShared_6493_; uint8_t v_isSharedCheck_6505_; 
lean_dec_ref_known(v___y_6478_, 1);
v___x_6479_ = lean_st_ref_get(v___y_6476_);
lean_dec(v___y_6476_);
v_assignments_6480_ = lean_ctor_get(v___x_6479_, 0);
lean_inc_ref(v_assignments_6480_);
v_funVals_6481_ = lean_ctor_get(v___x_6479_, 1);
lean_inc_ref(v_funVals_6481_);
lean_dec(v___x_6479_);
v___x_6482_ = lean_st_ref_take(v_a_6469_);
v_env_6483_ = lean_ctor_get(v___x_6482_, 0);
v_nextMacroScope_6484_ = lean_ctor_get(v___x_6482_, 1);
v_ngen_6485_ = lean_ctor_get(v___x_6482_, 2);
v_auxDeclNGen_6486_ = lean_ctor_get(v___x_6482_, 3);
v_traceState_6487_ = lean_ctor_get(v___x_6482_, 4);
v_messages_6488_ = lean_ctor_get(v___x_6482_, 6);
v_infoState_6489_ = lean_ctor_get(v___x_6482_, 7);
v_snapshotTasks_6490_ = lean_ctor_get(v___x_6482_, 8);
v_isSharedCheck_6505_ = !lean_is_exclusive(v___x_6482_);
if (v_isSharedCheck_6505_ == 0)
{
lean_object* v_unused_6506_; 
v_unused_6506_ = lean_ctor_get(v___x_6482_, 5);
lean_dec(v_unused_6506_);
v___x_6492_ = v___x_6482_;
v_isShared_6493_ = v_isSharedCheck_6505_;
goto v_resetjp_6491_;
}
else
{
lean_inc(v_snapshotTasks_6490_);
lean_inc(v_infoState_6489_);
lean_inc(v_messages_6488_);
lean_inc(v_traceState_6487_);
lean_inc(v_auxDeclNGen_6486_);
lean_inc(v_ngen_6485_);
lean_inc(v_nextMacroScope_6484_);
lean_inc(v_env_6483_);
lean_dec(v___x_6482_);
v___x_6492_ = lean_box(0);
v_isShared_6493_ = v_isSharedCheck_6505_;
goto v_resetjp_6491_;
}
v_resetjp_6491_:
{
lean_object* v___x_6494_; lean_object* v___x_6495_; lean_object* v___x_6497_; 
lean_inc(v___y_6474_);
v___x_6494_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6472_, v_funVals_6481_, v___y_6474_, v___y_6474_, v_env_6483_);
lean_dec(v___y_6474_);
lean_dec_ref(v_funVals_6481_);
v___x_6495_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1);
if (v_isShared_6493_ == 0)
{
lean_ctor_set(v___x_6492_, 5, v___x_6495_);
lean_ctor_set(v___x_6492_, 0, v___x_6494_);
v___x_6497_ = v___x_6492_;
goto v_reusejp_6496_;
}
else
{
lean_object* v_reuseFailAlloc_6504_; 
v_reuseFailAlloc_6504_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6504_, 0, v___x_6494_);
lean_ctor_set(v_reuseFailAlloc_6504_, 1, v_nextMacroScope_6484_);
lean_ctor_set(v_reuseFailAlloc_6504_, 2, v_ngen_6485_);
lean_ctor_set(v_reuseFailAlloc_6504_, 3, v_auxDeclNGen_6486_);
lean_ctor_set(v_reuseFailAlloc_6504_, 4, v_traceState_6487_);
lean_ctor_set(v_reuseFailAlloc_6504_, 5, v___x_6495_);
lean_ctor_set(v_reuseFailAlloc_6504_, 6, v_messages_6488_);
lean_ctor_set(v_reuseFailAlloc_6504_, 7, v_infoState_6489_);
lean_ctor_set(v_reuseFailAlloc_6504_, 8, v_snapshotTasks_6490_);
v___x_6497_ = v_reuseFailAlloc_6504_;
goto v_reusejp_6496_;
}
v_reusejp_6496_:
{
lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; lean_object* v___x_6501_; lean_object* v___x_12800__overap_6502_; lean_object* v___x_6503_; 
v___x_6498_ = lean_st_ref_put(v_a_6469_, v___x_6497_);
v___x_6499_ = lean_box_usize(v___y_6477_);
v___x_6500_ = lean_box_usize(v___y_6473_);
v___x_6501_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed), 10, 5);
lean_closure_set(v___x_6501_, 0, v_assignments_6480_);
lean_closure_set(v___x_6501_, 1, v___y_6472_);
lean_closure_set(v___x_6501_, 2, v___x_6499_);
lean_closure_set(v___x_6501_, 3, v___x_6500_);
lean_closure_set(v___x_6501_, 4, v___y_6475_);
v___x_12800__overap_6502_ = l_unsafeCast___redArg(v___x_6501_);
lean_dec_ref(v___x_6501_);
lean_inc(v_a_6469_);
lean_inc_ref(v_a_6468_);
lean_inc(v_a_6467_);
lean_inc_ref(v_a_6466_);
v___x_6503_ = lean_apply_5(v___x_12800__overap_6502_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_, lean_box(0));
return v___x_6503_;
}
}
}
else
{
lean_object* v_a_6507_; lean_object* v___x_6509_; uint8_t v_isShared_6510_; uint8_t v_isSharedCheck_6514_; 
lean_dec(v___y_6476_);
lean_dec(v___y_6475_);
lean_dec(v___y_6474_);
lean_dec_ref(v___y_6472_);
v_a_6507_ = lean_ctor_get(v___y_6478_, 0);
v_isSharedCheck_6514_ = !lean_is_exclusive(v___y_6478_);
if (v_isSharedCheck_6514_ == 0)
{
v___x_6509_ = v___y_6478_;
v_isShared_6510_ = v_isSharedCheck_6514_;
goto v_resetjp_6508_;
}
else
{
lean_inc(v_a_6507_);
lean_dec(v___y_6478_);
v___x_6509_ = lean_box(0);
v_isShared_6510_ = v_isSharedCheck_6514_;
goto v_resetjp_6508_;
}
v_resetjp_6508_:
{
lean_object* v___x_6512_; 
if (v_isShared_6510_ == 0)
{
v___x_6512_ = v___x_6509_;
goto v_reusejp_6511_;
}
else
{
lean_object* v_reuseFailAlloc_6513_; 
v_reuseFailAlloc_6513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6513_, 0, v_a_6507_);
v___x_6512_ = v_reuseFailAlloc_6513_;
goto v_reusejp_6511_;
}
v_reusejp_6511_:
{
return v___x_6512_;
}
}
}
}
v___jp_6515_:
{
lean_object* v___x_6532_; double v___x_6533_; double v___x_6534_; lean_object* v___x_6535_; lean_object* v___x_6536_; lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6539_; 
v___x_6532_ = lean_io_get_num_heartbeats();
v___x_6533_ = lean_float_of_nat(v___y_6521_);
v___x_6534_ = lean_float_of_nat(v___x_6532_);
v___x_6535_ = lean_box_float(v___x_6533_);
v___x_6536_ = lean_box_float(v___x_6534_);
v___x_6537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6537_, 0, v___x_6535_);
lean_ctor_set(v___x_6537_, 1, v___x_6536_);
v___x_6538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6538_, 0, v_a_6531_);
lean_ctor_set(v___x_6538_, 1, v___x_6537_);
lean_inc_ref(v___y_6525_);
lean_inc(v___y_6517_);
v___x_6539_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_6517_, v___y_6524_, v___y_6525_, v___y_6523_, v___y_6518_, v___y_6522_, v___y_6530_, v___x_6538_, v___y_6529_, v___y_6520_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_);
lean_dec_ref(v___y_6529_);
v___y_6472_ = v___y_6516_;
v___y_6473_ = v___y_6526_;
v___y_6474_ = v___y_6519_;
v___y_6475_ = v___y_6527_;
v___y_6476_ = v___y_6520_;
v___y_6477_ = v___y_6528_;
v___y_6478_ = v___x_6539_;
goto v___jp_6471_;
}
v___jp_6540_:
{
lean_object* v___x_6557_; double v___x_6558_; double v___x_6559_; double v___x_6560_; double v___x_6561_; double v___x_6562_; lean_object* v___x_6563_; lean_object* v___x_6564_; lean_object* v___x_6565_; lean_object* v___x_6566_; lean_object* v___x_6567_; 
v___x_6557_ = lean_io_mono_nanos_now();
v___x_6558_ = lean_float_of_nat(v___y_6555_);
v___x_6559_ = lean_float_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1);
v___x_6560_ = lean_float_div(v___x_6558_, v___x_6559_);
v___x_6561_ = lean_float_of_nat(v___x_6557_);
v___x_6562_ = lean_float_div(v___x_6561_, v___x_6559_);
v___x_6563_ = lean_box_float(v___x_6560_);
v___x_6564_ = lean_box_float(v___x_6562_);
v___x_6565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6565_, 0, v___x_6563_);
lean_ctor_set(v___x_6565_, 1, v___x_6564_);
v___x_6566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6566_, 0, v_a_6556_);
lean_ctor_set(v___x_6566_, 1, v___x_6565_);
lean_inc_ref(v___y_6549_);
lean_inc(v___y_6542_);
v___x_6567_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_6542_, v___y_6548_, v___y_6549_, v___y_6547_, v___y_6543_, v___y_6546_, v___y_6554_, v___x_6566_, v___y_6553_, v___y_6545_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_);
lean_dec_ref(v___y_6553_);
v___y_6472_ = v___y_6541_;
v___y_6473_ = v___y_6550_;
v___y_6474_ = v___y_6544_;
v___y_6475_ = v___y_6551_;
v___y_6476_ = v___y_6545_;
v___y_6477_ = v___y_6552_;
v___y_6478_ = v___x_6567_;
goto v___jp_6471_;
}
v___jp_6569_:
{
lean_object* v___x_6583_; lean_object* v_a_6584_; lean_object* v___x_6585_; uint8_t v___x_6586_; 
v___x_6583_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v_a_6469_);
v_a_6584_ = lean_ctor_get(v___x_6583_, 0);
lean_inc(v_a_6584_);
lean_dec_ref(v___x_6583_);
v___x_6585_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6586_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v___y_6575_, v___x_6585_);
if (v___x_6586_ == 0)
{
lean_object* v___x_6587_; lean_object* v___x_6588_; 
v___x_6587_ = lean_io_mono_nanos_now();
v___x_6588_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6568_, v___y_6581_, v___y_6574_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_);
if (lean_obj_tag(v___x_6588_) == 0)
{
lean_object* v_a_6589_; lean_object* v___x_6591_; uint8_t v_isShared_6592_; uint8_t v_isSharedCheck_6596_; 
v_a_6589_ = lean_ctor_get(v___x_6588_, 0);
v_isSharedCheck_6596_ = !lean_is_exclusive(v___x_6588_);
if (v_isSharedCheck_6596_ == 0)
{
v___x_6591_ = v___x_6588_;
v_isShared_6592_ = v_isSharedCheck_6596_;
goto v_resetjp_6590_;
}
else
{
lean_inc(v_a_6589_);
lean_dec(v___x_6588_);
v___x_6591_ = lean_box(0);
v_isShared_6592_ = v_isSharedCheck_6596_;
goto v_resetjp_6590_;
}
v_resetjp_6590_:
{
lean_object* v___x_6594_; 
if (v_isShared_6592_ == 0)
{
lean_ctor_set_tag(v___x_6591_, 1);
v___x_6594_ = v___x_6591_;
goto v_reusejp_6593_;
}
else
{
lean_object* v_reuseFailAlloc_6595_; 
v_reuseFailAlloc_6595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6595_, 0, v_a_6589_);
v___x_6594_ = v_reuseFailAlloc_6595_;
goto v_reusejp_6593_;
}
v_reusejp_6593_:
{
v___y_6541_ = v___y_6570_;
v___y_6542_ = v___y_6571_;
v___y_6543_ = v___y_6572_;
v___y_6544_ = v___y_6573_;
v___y_6545_ = v___y_6574_;
v___y_6546_ = v_a_6584_;
v___y_6547_ = v___y_6575_;
v___y_6548_ = v___y_6576_;
v___y_6549_ = v___y_6577_;
v___y_6550_ = v___y_6578_;
v___y_6551_ = v___y_6579_;
v___y_6552_ = v___y_6580_;
v___y_6553_ = v___y_6581_;
v___y_6554_ = v___y_6582_;
v___y_6555_ = v___x_6587_;
v_a_6556_ = v___x_6594_;
goto v___jp_6540_;
}
}
}
else
{
lean_object* v_a_6597_; lean_object* v___x_6599_; uint8_t v_isShared_6600_; uint8_t v_isSharedCheck_6604_; 
v_a_6597_ = lean_ctor_get(v___x_6588_, 0);
v_isSharedCheck_6604_ = !lean_is_exclusive(v___x_6588_);
if (v_isSharedCheck_6604_ == 0)
{
v___x_6599_ = v___x_6588_;
v_isShared_6600_ = v_isSharedCheck_6604_;
goto v_resetjp_6598_;
}
else
{
lean_inc(v_a_6597_);
lean_dec(v___x_6588_);
v___x_6599_ = lean_box(0);
v_isShared_6600_ = v_isSharedCheck_6604_;
goto v_resetjp_6598_;
}
v_resetjp_6598_:
{
lean_object* v___x_6602_; 
if (v_isShared_6600_ == 0)
{
lean_ctor_set_tag(v___x_6599_, 0);
v___x_6602_ = v___x_6599_;
goto v_reusejp_6601_;
}
else
{
lean_object* v_reuseFailAlloc_6603_; 
v_reuseFailAlloc_6603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6603_, 0, v_a_6597_);
v___x_6602_ = v_reuseFailAlloc_6603_;
goto v_reusejp_6601_;
}
v_reusejp_6601_:
{
v___y_6541_ = v___y_6570_;
v___y_6542_ = v___y_6571_;
v___y_6543_ = v___y_6572_;
v___y_6544_ = v___y_6573_;
v___y_6545_ = v___y_6574_;
v___y_6546_ = v_a_6584_;
v___y_6547_ = v___y_6575_;
v___y_6548_ = v___y_6576_;
v___y_6549_ = v___y_6577_;
v___y_6550_ = v___y_6578_;
v___y_6551_ = v___y_6579_;
v___y_6552_ = v___y_6580_;
v___y_6553_ = v___y_6581_;
v___y_6554_ = v___y_6582_;
v___y_6555_ = v___x_6587_;
v_a_6556_ = v___x_6602_;
goto v___jp_6540_;
}
}
}
}
else
{
lean_object* v___x_6605_; lean_object* v___x_6606_; 
v___x_6605_ = lean_io_get_num_heartbeats();
v___x_6606_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6568_, v___y_6581_, v___y_6574_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_);
if (lean_obj_tag(v___x_6606_) == 0)
{
lean_object* v_a_6607_; lean_object* v___x_6609_; uint8_t v_isShared_6610_; uint8_t v_isSharedCheck_6614_; 
v_a_6607_ = lean_ctor_get(v___x_6606_, 0);
v_isSharedCheck_6614_ = !lean_is_exclusive(v___x_6606_);
if (v_isSharedCheck_6614_ == 0)
{
v___x_6609_ = v___x_6606_;
v_isShared_6610_ = v_isSharedCheck_6614_;
goto v_resetjp_6608_;
}
else
{
lean_inc(v_a_6607_);
lean_dec(v___x_6606_);
v___x_6609_ = lean_box(0);
v_isShared_6610_ = v_isSharedCheck_6614_;
goto v_resetjp_6608_;
}
v_resetjp_6608_:
{
lean_object* v___x_6612_; 
if (v_isShared_6610_ == 0)
{
lean_ctor_set_tag(v___x_6609_, 1);
v___x_6612_ = v___x_6609_;
goto v_reusejp_6611_;
}
else
{
lean_object* v_reuseFailAlloc_6613_; 
v_reuseFailAlloc_6613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6613_, 0, v_a_6607_);
v___x_6612_ = v_reuseFailAlloc_6613_;
goto v_reusejp_6611_;
}
v_reusejp_6611_:
{
v___y_6516_ = v___y_6570_;
v___y_6517_ = v___y_6571_;
v___y_6518_ = v___y_6572_;
v___y_6519_ = v___y_6573_;
v___y_6520_ = v___y_6574_;
v___y_6521_ = v___x_6605_;
v___y_6522_ = v_a_6584_;
v___y_6523_ = v___y_6575_;
v___y_6524_ = v___y_6576_;
v___y_6525_ = v___y_6577_;
v___y_6526_ = v___y_6578_;
v___y_6527_ = v___y_6579_;
v___y_6528_ = v___y_6580_;
v___y_6529_ = v___y_6581_;
v___y_6530_ = v___y_6582_;
v_a_6531_ = v___x_6612_;
goto v___jp_6515_;
}
}
}
else
{
lean_object* v_a_6615_; lean_object* v___x_6617_; uint8_t v_isShared_6618_; uint8_t v_isSharedCheck_6622_; 
v_a_6615_ = lean_ctor_get(v___x_6606_, 0);
v_isSharedCheck_6622_ = !lean_is_exclusive(v___x_6606_);
if (v_isSharedCheck_6622_ == 0)
{
v___x_6617_ = v___x_6606_;
v_isShared_6618_ = v_isSharedCheck_6622_;
goto v_resetjp_6616_;
}
else
{
lean_inc(v_a_6615_);
lean_dec(v___x_6606_);
v___x_6617_ = lean_box(0);
v_isShared_6618_ = v_isSharedCheck_6622_;
goto v_resetjp_6616_;
}
v_resetjp_6616_:
{
lean_object* v___x_6620_; 
if (v_isShared_6618_ == 0)
{
lean_ctor_set_tag(v___x_6617_, 0);
v___x_6620_ = v___x_6617_;
goto v_reusejp_6619_;
}
else
{
lean_object* v_reuseFailAlloc_6621_; 
v_reuseFailAlloc_6621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6621_, 0, v_a_6615_);
v___x_6620_ = v_reuseFailAlloc_6621_;
goto v_reusejp_6619_;
}
v_reusejp_6619_:
{
v___y_6516_ = v___y_6570_;
v___y_6517_ = v___y_6571_;
v___y_6518_ = v___y_6572_;
v___y_6519_ = v___y_6573_;
v___y_6520_ = v___y_6574_;
v___y_6521_ = v___x_6605_;
v___y_6522_ = v_a_6584_;
v___y_6523_ = v___y_6575_;
v___y_6524_ = v___y_6576_;
v___y_6525_ = v___y_6577_;
v___y_6526_ = v___y_6578_;
v___y_6527_ = v___y_6579_;
v___y_6528_ = v___y_6580_;
v___y_6529_ = v___y_6581_;
v___y_6530_ = v___y_6582_;
v_a_6531_ = v___x_6620_;
goto v___jp_6515_;
}
}
}
}
}
v___jp_6623_:
{
lean_object* v___f_6625_; size_t v_sz_6626_; size_t v___x_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; lean_object* v_assignments_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v_funVals_6633_; lean_object* v_ctx_6634_; lean_object* v_state_6635_; lean_object* v___x_6636_; uint8_t v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; lean_object* v_toCold_6640_; lean_object* v_options_6641_; uint8_t v_hasTrace_6642_; 
lean_inc_ref_n(v___y_6624_, 2);
v___f_6625_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed), 9, 1);
lean_closure_set(v___f_6625_, 0, v___y_6624_);
v_sz_6626_ = lean_array_size(v___y_6624_);
v___x_6627_ = ((size_t)0ULL);
v___x_6628_ = l_unsafeCast___redArg(v___y_6624_);
lean_inc(v___x_6628_);
v___x_6629_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_6626_, v___x_6627_, v___x_6628_);
v_assignments_6630_ = l_unsafeCast___redArg(v___x_6629_);
lean_dec_ref(v___x_6629_);
v___x_6631_ = lean_array_get_size(v___y_6624_);
v___x_6632_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2));
v_funVals_6633_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6624_, v___x_6631_, v___x_6631_, v___x_6632_);
v_ctx_6634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_ctx_6634_, 0, v___y_6624_);
lean_ctor_set(v_ctx_6634_, 1, v___x_6568_);
v_state_6635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_state_6635_, 0, v_assignments_6630_);
lean_ctor_set(v_state_6635_, 1, v_funVals_6633_);
v___x_6636_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_6637_ = 1;
v___x_6638_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_6639_ = lean_st_mk_ref(v_state_6635_);
v_toCold_6640_ = lean_ctor_get(v_a_6468_, 0);
v_options_6641_ = lean_ctor_get(v_toCold_6640_, 2);
v_hasTrace_6642_ = lean_ctor_get_uint8(v_options_6641_, sizeof(void*)*1);
if (v_hasTrace_6642_ == 0)
{
lean_object* v___x_6643_; 
lean_dec_ref(v___f_6625_);
v___x_6643_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6568_, v_ctx_6634_, v___x_6639_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_);
lean_dec_ref_known(v_ctx_6634_, 2);
v___y_6472_ = v___y_6624_;
v___y_6473_ = v___x_6627_;
v___y_6474_ = v___x_6631_;
v___y_6475_ = v___x_6628_;
v___y_6476_ = v___x_6639_;
v___y_6477_ = v_sz_6626_;
v___y_6478_ = v___x_6643_;
goto v___jp_6471_;
}
else
{
lean_object* v_inheritedTraceOptions_6644_; lean_object* v___x_6645_; uint8_t v___x_6646_; 
v_inheritedTraceOptions_6644_ = lean_ctor_get(v_toCold_6640_, 11);
v___x_6645_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_6646_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6644_, v_options_6641_, v___x_6645_);
if (v___x_6646_ == 0)
{
lean_object* v___x_6647_; uint8_t v___x_6648_; 
v___x_6647_ = l_Lean_trace_profiler;
v___x_6648_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_options_6641_, v___x_6647_);
if (v___x_6648_ == 0)
{
lean_object* v___x_6649_; 
lean_dec_ref(v___f_6625_);
v___x_6649_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6568_, v_ctx_6634_, v___x_6639_, v_a_6466_, v_a_6467_, v_a_6468_, v_a_6469_);
lean_dec_ref_known(v_ctx_6634_, 2);
v___y_6472_ = v___y_6624_;
v___y_6473_ = v___x_6627_;
v___y_6474_ = v___x_6631_;
v___y_6475_ = v___x_6628_;
v___y_6476_ = v___x_6639_;
v___y_6477_ = v_sz_6626_;
v___y_6478_ = v___x_6649_;
goto v___jp_6471_;
}
else
{
v___y_6570_ = v___y_6624_;
v___y_6571_ = v___x_6636_;
v___y_6572_ = v___x_6646_;
v___y_6573_ = v___x_6631_;
v___y_6574_ = v___x_6639_;
v___y_6575_ = v_options_6641_;
v___y_6576_ = v___x_6637_;
v___y_6577_ = v___x_6638_;
v___y_6578_ = v___x_6627_;
v___y_6579_ = v___x_6628_;
v___y_6580_ = v_sz_6626_;
v___y_6581_ = v_ctx_6634_;
v___y_6582_ = v___f_6625_;
goto v___jp_6569_;
}
}
else
{
v___y_6570_ = v___y_6624_;
v___y_6571_ = v___x_6636_;
v___y_6572_ = v___x_6646_;
v___y_6573_ = v___x_6631_;
v___y_6574_ = v___x_6639_;
v___y_6575_ = v_options_6641_;
v___y_6576_ = v___x_6637_;
v___y_6577_ = v___x_6638_;
v___y_6578_ = v___x_6627_;
v___y_6579_ = v___x_6628_;
v___y_6580_ = v_sz_6626_;
v___y_6581_ = v_ctx_6634_;
v___y_6582_ = v___f_6625_;
goto v___jp_6569_;
}
}
}
v___jp_6651_:
{
lean_object* v___x_6654_; 
v___x_6654_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v___x_6650_, v_decls_6465_, v___y_6652_, v___y_6653_);
lean_dec(v___y_6653_);
v___y_6624_ = v___x_6654_;
goto v___jp_6623_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed(lean_object* v_decls_6662_, lean_object* v_a_6663_, lean_object* v_a_6664_, lean_object* v_a_6665_, lean_object* v_a_6666_, lean_object* v_a_6667_){
_start:
{
lean_object* v_res_6668_; 
v_res_6668_ = l_Lean_Compiler_LCNF_Decl_elimDeadBranches(v_decls_6662_, v_a_6663_, v_a_6664_, v_a_6665_, v_a_6666_);
lean_dec(v_a_6666_);
lean_dec_ref(v_a_6665_);
lean_dec(v_a_6664_);
lean_dec_ref(v_a_6663_);
return v_res_6668_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(lean_object* v___y_6669_, lean_object* v_n_6670_, lean_object* v_j_6671_, lean_object* v_a_6672_, lean_object* v_a_6673_){
_start:
{
lean_object* v___x_6674_; 
v___x_6674_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6669_, v_n_6670_, v_j_6671_, v_a_6673_);
return v___x_6674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___boxed(lean_object* v___y_6675_, lean_object* v_n_6676_, lean_object* v_j_6677_, lean_object* v_a_6678_, lean_object* v_a_6679_){
_start:
{
lean_object* v_res_6680_; 
v_res_6680_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(v___y_6675_, v_n_6676_, v_j_6677_, v_a_6678_, v_a_6679_);
lean_dec(v_n_6676_);
lean_dec_ref(v___y_6675_);
return v_res_6680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(lean_object* v___y_6681_, lean_object* v___x_6682_, lean_object* v_n_6683_, lean_object* v_j_6684_, lean_object* v_a_6685_, lean_object* v_a_6686_){
_start:
{
lean_object* v___x_6687_; 
v___x_6687_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6681_, v___x_6682_, v_n_6683_, v_j_6684_, v_a_6686_);
return v___x_6687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___boxed(lean_object* v___y_6688_, lean_object* v___x_6689_, lean_object* v_n_6690_, lean_object* v_j_6691_, lean_object* v_a_6692_, lean_object* v_a_6693_){
_start:
{
lean_object* v_res_6694_; 
v_res_6694_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(v___y_6688_, v___x_6689_, v_n_6690_, v_j_6691_, v_a_6692_, v_a_6693_);
lean_dec(v_n_6690_);
lean_dec_ref(v___x_6689_);
lean_dec_ref(v___y_6688_);
return v_res_6694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(lean_object* v_n_6695_, lean_object* v_as_6696_, lean_object* v_lo_6697_, lean_object* v_hi_6698_, lean_object* v_w_6699_, lean_object* v_hlo_6700_, lean_object* v_hhi_6701_){
_start:
{
lean_object* v___x_6702_; 
v___x_6702_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_n_6695_, v_as_6696_, v_lo_6697_, v_hi_6698_);
return v___x_6702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___boxed(lean_object* v_n_6703_, lean_object* v_as_6704_, lean_object* v_lo_6705_, lean_object* v_hi_6706_, lean_object* v_w_6707_, lean_object* v_hlo_6708_, lean_object* v_hhi_6709_){
_start:
{
lean_object* v_res_6710_; 
v_res_6710_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(v_n_6703_, v_as_6704_, v_lo_6705_, v_hi_6706_, v_w_6707_, v_hlo_6708_, v_hhi_6709_);
lean_dec(v_hi_6706_);
lean_dec(v_n_6703_);
return v_res_6710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5(lean_object* v_n_6711_, lean_object* v_lo_6712_, lean_object* v_hi_6713_, lean_object* v_hhi_6714_, lean_object* v_pivot_6715_, lean_object* v_as_6716_, lean_object* v_i_6717_, lean_object* v_k_6718_, lean_object* v_ilo_6719_, lean_object* v_ik_6720_, lean_object* v_w_6721_){
_start:
{
lean_object* v___x_6722_; 
v___x_6722_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(v_hi_6713_, v_pivot_6715_, v_as_6716_, v_i_6717_, v_k_6718_);
return v___x_6722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___boxed(lean_object* v_n_6723_, lean_object* v_lo_6724_, lean_object* v_hi_6725_, lean_object* v_hhi_6726_, lean_object* v_pivot_6727_, lean_object* v_as_6728_, lean_object* v_i_6729_, lean_object* v_k_6730_, lean_object* v_ilo_6731_, lean_object* v_ik_6732_, lean_object* v_w_6733_){
_start:
{
lean_object* v_res_6734_; 
v_res_6734_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5(v_n_6723_, v_lo_6724_, v_hi_6725_, v_hhi_6726_, v_pivot_6727_, v_as_6728_, v_i_6729_, v_k_6730_, v_ilo_6731_, v_ik_6732_, v_w_6733_);
lean_dec(v_hi_6725_);
lean_dec(v_lo_6724_);
lean_dec(v_n_6723_);
return v_res_6734_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6746_; lean_object* v___x_6747_; lean_object* v___x_6748_; 
v___x_6746_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6747_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___closed__0);
v___x_6748_ = l_Lean_Name_str___override(v___x_6747_, v___x_6746_);
return v___x_6748_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6749_; lean_object* v___x_6750_; lean_object* v___x_6751_; 
v___x_6749_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6750_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6751_ = l_Lean_Name_str___override(v___x_6750_, v___x_6749_);
return v___x_6751_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6752_; lean_object* v___x_6753_; lean_object* v___x_6754_; 
v___x_6752_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6753_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6754_ = l_Lean_Name_str___override(v___x_6753_, v___x_6752_);
return v___x_6754_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6755_; lean_object* v___x_6756_; lean_object* v___x_6757_; 
v___x_6755_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6756_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6757_ = l_Lean_Name_str___override(v___x_6756_, v___x_6755_);
return v___x_6757_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6759_; lean_object* v___x_6760_; lean_object* v___x_6761_; 
v___x_6759_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6760_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6761_ = l_Lean_Name_str___override(v___x_6760_, v___x_6759_);
return v___x_6761_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6762_; lean_object* v___x_6763_; lean_object* v___x_6764_; 
v___x_6762_ = lean_unsigned_to_nat(0u);
v___x_6763_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6764_ = l_Lean_Name_num___override(v___x_6763_, v___x_6762_);
return v___x_6764_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6765_; lean_object* v___x_6766_; lean_object* v___x_6767_; 
v___x_6765_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6766_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6767_ = l_Lean_Name_str___override(v___x_6766_, v___x_6765_);
return v___x_6767_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6768_; lean_object* v___x_6769_; lean_object* v___x_6770_; 
v___x_6768_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6769_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6770_ = l_Lean_Name_str___override(v___x_6769_, v___x_6768_);
return v___x_6770_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6771_; lean_object* v___x_6772_; lean_object* v___x_6773_; 
v___x_6771_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6772_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6773_ = l_Lean_Name_str___override(v___x_6772_, v___x_6771_);
return v___x_6773_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6775_; lean_object* v___x_6776_; lean_object* v___x_6777_; 
v___x_6775_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6776_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6777_ = l_Lean_Name_str___override(v___x_6776_, v___x_6775_);
return v___x_6777_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6779_; lean_object* v___x_6780_; lean_object* v___x_6781_; 
v___x_6779_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6780_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6781_ = l_Lean_Name_str___override(v___x_6780_, v___x_6779_);
return v___x_6781_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6782_; lean_object* v___x_6783_; lean_object* v___x_6784_; 
v___x_6782_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6783_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6784_ = l_Lean_Name_str___override(v___x_6783_, v___x_6782_);
return v___x_6784_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6785_; lean_object* v___x_6786_; lean_object* v___x_6787_; 
v___x_6785_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6786_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6787_ = l_Lean_Name_str___override(v___x_6786_, v___x_6785_);
return v___x_6787_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6788_; lean_object* v___x_6789_; lean_object* v___x_6790_; 
v___x_6788_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_6789_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6790_ = l_Lean_Name_str___override(v___x_6789_, v___x_6788_);
return v___x_6790_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6791_; lean_object* v___x_6792_; lean_object* v___x_6793_; 
v___x_6791_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6792_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6793_ = l_Lean_Name_str___override(v___x_6792_, v___x_6791_);
return v___x_6793_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6794_; lean_object* v___x_6795_; lean_object* v___x_6796_; 
v___x_6794_ = lean_unsigned_to_nat(3955956072u);
v___x_6795_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6796_ = l_Lean_Name_num___override(v___x_6795_, v___x_6794_);
return v___x_6796_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6798_; lean_object* v___x_6799_; lean_object* v___x_6800_; 
v___x_6798_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6799_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6800_ = l_Lean_Name_str___override(v___x_6799_, v___x_6798_);
return v___x_6800_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6802_; lean_object* v___x_6803_; lean_object* v___x_6804_; 
v___x_6802_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6803_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6804_ = l_Lean_Name_str___override(v___x_6803_, v___x_6802_);
return v___x_6804_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6805_; lean_object* v___x_6806_; lean_object* v___x_6807_; 
v___x_6805_ = lean_unsigned_to_nat(2u);
v___x_6806_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6807_ = l_Lean_Name_num___override(v___x_6806_, v___x_6805_);
return v___x_6807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6809_; uint8_t v___x_6810_; lean_object* v___x_6811_; lean_object* v___x_6812_; 
v___x_6809_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_6810_ = 1;
v___x_6811_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6812_ = l_Lean_registerTraceClass(v___x_6809_, v___x_6810_, v___x_6811_);
return v___x_6812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2____boxed(lean_object* v_a_6813_){
_start:
{
lean_object* v_res_6814_; 
v_res_6814_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
return v_res_6814_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default = _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default);
l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue = _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue);
l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth = _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth);
res = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
}
#ifdef __cplusplus
}
#endif

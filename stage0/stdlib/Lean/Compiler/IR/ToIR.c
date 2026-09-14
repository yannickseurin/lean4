// Lean compiler output
// Module: Lean.Compiler.IR.ToIR
// Imports: public import Lean.Compiler.IR.CompilerM public import Lean.Compiler.IR.ToIRType
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_IR_toIRType(lean_object*);
uint8_t l_Lean_IR_IRType_isScalar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedArg_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_uint64_to_nat(uint64_t);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedFnBody_default__1;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_IR_nameToIRType(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_IR_mkDummyExternDecl(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_ToIR_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_M_run___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_ToIR_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_M_run___redArg___closed__1;
static lean_once_cell_t l_Lean_IR_ToIR_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_M_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0_spec__1(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__1;
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__2;
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLitValue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCtorInfo(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1 = (const lean_object*)&l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_ToIR_lowerCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 38, .m_data = "all local functions should be λ-lifted"};
static const lean_object* l_Lean_IR_ToIR_lowerCode___closed__2 = (const lean_object*)&l_Lean_IR_ToIR_lowerCode___closed__2_value;
static const lean_string_object l_Lean_IR_ToIR_lowerCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.IR.ToIR.lowerCode"};
static const lean_object* l_Lean_IR_ToIR_lowerCode___closed__1 = (const lean_object*)&l_Lean_IR_ToIR_lowerCode___closed__1_value;
static const lean_string_object l_Lean_IR_ToIR_lowerCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Compiler.IR.ToIR"};
static const lean_object* l_Lean_IR_ToIR_lowerCode___closed__0 = (const lean_object*)&l_Lean_IR_ToIR_lowerCode___closed__0_value;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_ToIR_lowerCode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_IR_ToIR_lowerCode___closed__4 = (const lean_object*)&l_Lean_IR_ToIR_lowerCode___closed__4_value;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__5;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__6;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__7;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__8;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__9;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__10;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__11;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__12;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__13;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__14;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_IR_toIR___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_IR_toIR___closed__0 = (const lean_object*)&l_Lean_IR_toIR___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_toIR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_toIR___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_IR_ToIR_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_IR_ToIR_M_run___redArg___closed__0, &l_Lean_IR_ToIR_M_run___redArg___closed__0_once, _init_l_Lean_IR_ToIR_M_run___redArg___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_obj_once(&l_Lean_IR_ToIR_M_run___redArg___closed__1, &l_Lean_IR_ToIR_M_run___redArg___closed__1_once, _init_l_Lean_IR_ToIR_M_run___redArg___closed__1);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
lean_ctor_set(v___x_9_, 2, v___x_7_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg(lean_object* v_x_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&l_Lean_IR_ToIR_M_run___redArg___closed__2, &l_Lean_IR_ToIR_M_run___redArg___closed__2_once, _init_l_Lean_IR_ToIR_M_run___redArg___closed__2);
v___x_15_ = lean_st_mk_ref(v___x_14_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v___x_15_);
v___x_16_ = lean_apply_4(v_x_10_, v___x_15_, v_a_11_, v_a_12_, lean_box(0));
if (lean_obj_tag(v___x_16_) == 0)
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_25_; 
v_a_17_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_25_ == 0)
{
v___x_19_ = v___x_16_;
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_16_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_21_ = lean_st_ref_get(v___x_15_);
lean_dec(v___x_15_);
lean_dec(v___x_21_);
if (v_isShared_20_ == 0)
{
v___x_23_ = v___x_19_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_17_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
else
{
lean_dec(v___x_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg___boxed(lean_object* v_x_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_IR_ToIR_M_run___redArg(v_x_26_, v_a_27_, v_a_28_);
lean_dec(v_a_28_);
lean_dec_ref(v_a_27_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run(lean_object* v_00_u03b1_31_, lean_object* v_x_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_IR_ToIR_M_run___redArg(v_x_32_, v_a_33_, v_a_34_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___boxed(lean_object* v_00_u03b1_37_, lean_object* v_x_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_IR_ToIR_M_run(v_00_u03b1_37_, v_x_38_, v_a_39_, v_a_40_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0_spec__1(lean_object* v_msg_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = l_Lean_IR_instInhabitedArg_default;
v___x_45_ = lean_panic_fn_borrowed(v___x_44_, v_msg_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_49_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2));
v___x_50_ = lean_unsigned_to_nat(11u);
v___x_51_ = lean_unsigned_to_nat(163u);
v___x_52_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1));
v___x_53_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0));
v___x_54_ = l_mkPanicMessageWithDecl(v___x_53_, v___x_52_, v___x_51_, v___x_50_, v___x_49_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(lean_object* v_a_55_, lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3);
v___x_58_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0_spec__1(v___x_57_);
return v___x_58_;
}
else
{
lean_object* v_key_59_; lean_object* v_value_60_; lean_object* v_tail_61_; uint8_t v___x_62_; 
v_key_59_ = lean_ctor_get(v_x_56_, 0);
v_value_60_ = lean_ctor_get(v_x_56_, 1);
v_tail_61_ = lean_ctor_get(v_x_56_, 2);
v___x_62_ = l_Lean_instBEqFVarId_beq(v_key_59_, v_a_55_);
if (v___x_62_ == 0)
{
v_x_56_ = v_tail_61_;
goto _start;
}
else
{
lean_inc(v_value_60_);
return v_value_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___boxed(lean_object* v_a_64_, lean_object* v_x_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(v_a_64_, v_x_65_);
lean_dec(v_x_65_);
lean_dec(v_a_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(lean_object* v_m_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_buckets_69_; lean_object* v___x_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; uint64_t v_fold_74_; uint64_t v___x_75_; uint64_t v___x_76_; uint64_t v___x_77_; size_t v___x_78_; size_t v___x_79_; size_t v___x_80_; size_t v___x_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_buckets_69_ = lean_ctor_get(v_m_67_, 1);
v___x_70_ = lean_array_get_size(v_buckets_69_);
v___x_71_ = l_Lean_instHashableFVarId_hash(v_a_68_);
v___x_72_ = 32ULL;
v___x_73_ = lean_uint64_shift_right(v___x_71_, v___x_72_);
v_fold_74_ = lean_uint64_xor(v___x_71_, v___x_73_);
v___x_75_ = 16ULL;
v___x_76_ = lean_uint64_shift_right(v_fold_74_, v___x_75_);
v___x_77_ = lean_uint64_xor(v_fold_74_, v___x_76_);
v___x_78_ = lean_uint64_to_usize(v___x_77_);
v___x_79_ = lean_usize_of_nat(v___x_70_);
v___x_80_ = ((size_t)1ULL);
v___x_81_ = lean_usize_sub(v___x_79_, v___x_80_);
v___x_82_ = lean_usize_land(v___x_78_, v___x_81_);
v___x_83_ = lean_array_uget_borrowed(v_buckets_69_, v___x_82_);
v___x_84_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(v_a_68_, v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0___boxed(lean_object* v_m_85_, lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(v_m_85_, v_a_86_);
lean_dec(v_a_86_);
lean_dec_ref(v_m_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg(lean_object* v_fvarId_88_, lean_object* v_a_89_){
_start:
{
lean_object* v___x_91_; lean_object* v_vars_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = lean_st_ref_get(v_a_89_);
v_vars_92_ = lean_ctor_get(v___x_91_, 0);
lean_inc_ref(v_vars_92_);
lean_dec(v___x_91_);
v___x_93_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(v_vars_92_, v_fvarId_88_);
lean_dec_ref(v_vars_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg___boxed(lean_object* v_fvarId_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_95_, v_a_96_);
lean_dec(v_a_96_);
lean_dec(v_fvarId_95_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue(lean_object* v_fvarId_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_99_, v_a_100_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___boxed(lean_object* v_fvarId_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_IR_ToIR_getFVarValue(v_fvarId_105_, v_a_106_, v_a_107_, v_a_108_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec(v_fvarId_105_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0_spec__1(lean_object* v_msg_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = lean_panic_fn_borrowed(v___x_112_, v_msg_111_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(lean_object* v_a_114_, lean_object* v_x_115_){
_start:
{
if (lean_obj_tag(v_x_115_) == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3);
v___x_117_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0_spec__1(v___x_116_);
return v___x_117_;
}
else
{
lean_object* v_key_118_; lean_object* v_value_119_; lean_object* v_tail_120_; uint8_t v___x_121_; 
v_key_118_ = lean_ctor_get(v_x_115_, 0);
v_value_119_ = lean_ctor_get(v_x_115_, 1);
v_tail_120_ = lean_ctor_get(v_x_115_, 2);
v___x_121_ = l_Lean_instBEqFVarId_beq(v_key_118_, v_a_114_);
if (v___x_121_ == 0)
{
v_x_115_ = v_tail_120_;
goto _start;
}
else
{
lean_inc(v_value_119_);
return v_value_119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0___boxed(lean_object* v_a_123_, lean_object* v_x_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(v_a_123_, v_x_124_);
lean_dec(v_x_124_);
lean_dec(v_a_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(lean_object* v_m_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_buckets_128_; lean_object* v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; uint64_t v___x_132_; uint64_t v_fold_133_; uint64_t v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; size_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_buckets_128_ = lean_ctor_get(v_m_126_, 1);
v___x_129_ = lean_array_get_size(v_buckets_128_);
v___x_130_ = l_Lean_instHashableFVarId_hash(v_a_127_);
v___x_131_ = 32ULL;
v___x_132_ = lean_uint64_shift_right(v___x_130_, v___x_131_);
v_fold_133_ = lean_uint64_xor(v___x_130_, v___x_132_);
v___x_134_ = 16ULL;
v___x_135_ = lean_uint64_shift_right(v_fold_133_, v___x_134_);
v___x_136_ = lean_uint64_xor(v_fold_133_, v___x_135_);
v___x_137_ = lean_uint64_to_usize(v___x_136_);
v___x_138_ = lean_usize_of_nat(v___x_129_);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_sub(v___x_138_, v___x_139_);
v___x_141_ = lean_usize_land(v___x_137_, v___x_140_);
v___x_142_ = lean_array_uget_borrowed(v_buckets_128_, v___x_141_);
v___x_143_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(v_a_127_, v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0___boxed(lean_object* v_m_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(v_m_144_, v_a_145_);
lean_dec(v_a_145_);
lean_dec_ref(v_m_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg(lean_object* v_fvarId_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___x_150_; lean_object* v_joinPoints_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_150_ = lean_st_ref_get(v_a_148_);
v_joinPoints_151_ = lean_ctor_get(v___x_150_, 1);
lean_inc_ref(v_joinPoints_151_);
lean_dec(v___x_150_);
v___x_152_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(v_joinPoints_151_, v_fvarId_147_);
lean_dec_ref(v_joinPoints_151_);
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg___boxed(lean_object* v_fvarId_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lean_IR_ToIR_getJoinPointValue___redArg(v_fvarId_154_, v_a_155_);
lean_dec(v_a_155_);
lean_dec(v_fvarId_154_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue(lean_object* v_fvarId_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lean_IR_ToIR_getJoinPointValue___redArg(v_fvarId_158_, v_a_159_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___boxed(lean_object* v_fvarId_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_IR_ToIR_getJoinPointValue(v_fvarId_164_, v_a_165_, v_a_166_, v_a_167_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec(v_fvarId_164_);
return v_res_169_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(lean_object* v_a_170_, lean_object* v_x_171_){
_start:
{
if (lean_obj_tag(v_x_171_) == 0)
{
uint8_t v___x_172_; 
v___x_172_ = 0;
return v___x_172_;
}
else
{
lean_object* v_key_173_; lean_object* v_tail_174_; uint8_t v___x_175_; 
v_key_173_ = lean_ctor_get(v_x_171_, 0);
v_tail_174_ = lean_ctor_get(v_x_171_, 2);
v___x_175_ = l_Lean_instBEqFVarId_beq(v_key_173_, v_a_170_);
if (v___x_175_ == 0)
{
v_x_171_ = v_tail_174_;
goto _start;
}
else
{
return v___x_175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_177_, lean_object* v_x_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(v_a_177_, v_x_178_);
lean_dec(v_x_178_);
lean_dec(v_a_177_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_182_) == 0)
{
return v_x_181_;
}
else
{
lean_object* v_key_183_; lean_object* v_value_184_; lean_object* v_tail_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_208_; 
v_key_183_ = lean_ctor_get(v_x_182_, 0);
v_value_184_ = lean_ctor_get(v_x_182_, 1);
v_tail_185_ = lean_ctor_get(v_x_182_, 2);
v_isSharedCheck_208_ = !lean_is_exclusive(v_x_182_);
if (v_isSharedCheck_208_ == 0)
{
v___x_187_ = v_x_182_;
v_isShared_188_ = v_isSharedCheck_208_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_tail_185_);
lean_inc(v_value_184_);
lean_inc(v_key_183_);
lean_dec(v_x_182_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_208_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; uint64_t v___x_190_; uint64_t v___x_191_; uint64_t v___x_192_; uint64_t v_fold_193_; uint64_t v___x_194_; uint64_t v___x_195_; uint64_t v___x_196_; size_t v___x_197_; size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_189_ = lean_array_get_size(v_x_181_);
v___x_190_ = l_Lean_instHashableFVarId_hash(v_key_183_);
v___x_191_ = 32ULL;
v___x_192_ = lean_uint64_shift_right(v___x_190_, v___x_191_);
v_fold_193_ = lean_uint64_xor(v___x_190_, v___x_192_);
v___x_194_ = 16ULL;
v___x_195_ = lean_uint64_shift_right(v_fold_193_, v___x_194_);
v___x_196_ = lean_uint64_xor(v_fold_193_, v___x_195_);
v___x_197_ = lean_uint64_to_usize(v___x_196_);
v___x_198_ = lean_usize_of_nat(v___x_189_);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_sub(v___x_198_, v___x_199_);
v___x_201_ = lean_usize_land(v___x_197_, v___x_200_);
v___x_202_ = lean_array_uget_borrowed(v_x_181_, v___x_201_);
lean_inc(v___x_202_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 2, v___x_202_);
v___x_204_ = v___x_187_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_key_183_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_value_184_);
lean_ctor_set(v_reuseFailAlloc_207_, 2, v___x_202_);
v___x_204_ = v_reuseFailAlloc_207_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; 
v___x_205_ = lean_array_uset(v_x_181_, v___x_201_, v___x_204_);
v_x_181_ = v___x_205_;
v_x_182_ = v_tail_185_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(lean_object* v_i_209_, lean_object* v_source_210_, lean_object* v_target_211_){
_start:
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = lean_array_get_size(v_source_210_);
v___x_213_ = lean_nat_dec_lt(v_i_209_, v___x_212_);
if (v___x_213_ == 0)
{
lean_dec_ref(v_source_210_);
lean_dec(v_i_209_);
return v_target_211_;
}
else
{
lean_object* v_es_214_; lean_object* v___x_215_; lean_object* v_source_216_; lean_object* v_target_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_es_214_ = lean_array_fget(v_source_210_, v_i_209_);
v___x_215_ = lean_box(0);
v_source_216_ = lean_array_fset(v_source_210_, v_i_209_, v___x_215_);
v_target_217_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(v_target_211_, v_es_214_);
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_nat_add(v_i_209_, v___x_218_);
lean_dec(v_i_209_);
v_i_209_ = v___x_219_;
v_source_210_ = v_source_216_;
v_target_211_ = v_target_217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(lean_object* v_data_221_){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v_nbuckets_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_222_ = lean_array_get_size(v_data_221_);
v___x_223_ = lean_unsigned_to_nat(2u);
v_nbuckets_224_ = lean_nat_mul(v___x_222_, v___x_223_);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_box(0);
v___x_227_ = lean_mk_array(v_nbuckets_224_, v___x_226_);
v___x_228_ = lean_array_propagate_mark(v_data_221_, v___x_227_);
v___x_229_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(v___x_225_, v_data_221_, v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(lean_object* v_m_230_, lean_object* v_a_231_, lean_object* v_b_232_){
_start:
{
lean_object* v_size_233_; lean_object* v_buckets_234_; lean_object* v___x_235_; uint64_t v___x_236_; uint64_t v___x_237_; uint64_t v___x_238_; uint64_t v_fold_239_; uint64_t v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; size_t v___x_243_; size_t v___x_244_; size_t v___x_245_; size_t v___x_246_; size_t v___x_247_; lean_object* v_bkt_248_; uint8_t v___x_249_; 
v_size_233_ = lean_ctor_get(v_m_230_, 0);
v_buckets_234_ = lean_ctor_get(v_m_230_, 1);
v___x_235_ = lean_array_get_size(v_buckets_234_);
v___x_236_ = l_Lean_instHashableFVarId_hash(v_a_231_);
v___x_237_ = 32ULL;
v___x_238_ = lean_uint64_shift_right(v___x_236_, v___x_237_);
v_fold_239_ = lean_uint64_xor(v___x_236_, v___x_238_);
v___x_240_ = 16ULL;
v___x_241_ = lean_uint64_shift_right(v_fold_239_, v___x_240_);
v___x_242_ = lean_uint64_xor(v_fold_239_, v___x_241_);
v___x_243_ = lean_uint64_to_usize(v___x_242_);
v___x_244_ = lean_usize_of_nat(v___x_235_);
v___x_245_ = ((size_t)1ULL);
v___x_246_ = lean_usize_sub(v___x_244_, v___x_245_);
v___x_247_ = lean_usize_land(v___x_243_, v___x_246_);
v_bkt_248_ = lean_array_uget_borrowed(v_buckets_234_, v___x_247_);
v___x_249_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(v_a_231_, v_bkt_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_270_; 
lean_inc_ref(v_buckets_234_);
lean_inc(v_size_233_);
v_isSharedCheck_270_ = !lean_is_exclusive(v_m_230_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; lean_object* v_unused_272_; 
v_unused_271_ = lean_ctor_get(v_m_230_, 1);
lean_dec(v_unused_271_);
v_unused_272_ = lean_ctor_get(v_m_230_, 0);
lean_dec(v_unused_272_);
v___x_251_ = v_m_230_;
v_isShared_252_ = v_isSharedCheck_270_;
goto v_resetjp_250_;
}
else
{
lean_dec(v_m_230_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_270_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v_size_x27_254_; lean_object* v___x_255_; lean_object* v_buckets_x27_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_253_ = lean_unsigned_to_nat(1u);
v_size_x27_254_ = lean_nat_add(v_size_233_, v___x_253_);
lean_dec(v_size_233_);
lean_inc(v_bkt_248_);
v___x_255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_255_, 0, v_a_231_);
lean_ctor_set(v___x_255_, 1, v_b_232_);
lean_ctor_set(v___x_255_, 2, v_bkt_248_);
v_buckets_x27_256_ = lean_array_uset(v_buckets_234_, v___x_247_, v___x_255_);
v___x_257_ = lean_unsigned_to_nat(4u);
v___x_258_ = lean_nat_mul(v_size_x27_254_, v___x_257_);
v___x_259_ = lean_unsigned_to_nat(3u);
v___x_260_ = lean_nat_div(v___x_258_, v___x_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_array_get_size(v_buckets_x27_256_);
v___x_262_ = lean_nat_dec_le(v___x_260_, v___x_261_);
lean_dec(v___x_260_);
if (v___x_262_ == 0)
{
lean_object* v_val_263_; lean_object* v___x_265_; 
v_val_263_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(v_buckets_x27_256_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v_val_263_);
lean_ctor_set(v___x_251_, 0, v_size_x27_254_);
v___x_265_ = v___x_251_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_size_x27_254_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_val_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
else
{
lean_object* v___x_268_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v_buckets_x27_256_);
lean_ctor_set(v___x_251_, 0, v_size_x27_254_);
v___x_268_ = v___x_251_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_size_x27_254_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_buckets_x27_256_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
else
{
lean_dec(v_b_232_);
lean_dec(v_a_231_);
return v_m_230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg(lean_object* v_fvarId_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___x_276_; lean_object* v_vars_277_; lean_object* v_joinPoints_278_; lean_object* v_nextId_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_292_; 
v___x_276_ = lean_st_ref_take(v_a_274_);
v_vars_277_ = lean_ctor_get(v___x_276_, 0);
v_joinPoints_278_ = lean_ctor_get(v___x_276_, 1);
v_nextId_279_ = lean_ctor_get(v___x_276_, 2);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_292_ == 0)
{
v___x_281_ = v___x_276_;
v_isShared_282_ = v_isSharedCheck_292_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_nextId_279_);
lean_inc(v_joinPoints_278_);
lean_inc(v_vars_277_);
lean_dec(v___x_276_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_292_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_288_; 
lean_inc(v_nextId_279_);
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v_nextId_279_);
v___x_284_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_vars_277_, v_fvarId_273_, v___x_283_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_nextId_279_, v___x_285_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 2, v___x_286_);
lean_ctor_set(v___x_281_, 0, v___x_284_);
v___x_288_ = v___x_281_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_joinPoints_278_);
lean_ctor_set(v_reuseFailAlloc_291_, 2, v___x_286_);
v___x_288_ = v_reuseFailAlloc_291_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_st_ref_put(v_a_274_, v___x_288_);
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v_nextId_279_);
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg___boxed(lean_object* v_fvarId_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_293_, v_a_294_);
lean_dec(v_a_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar(lean_object* v_fvarId_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_297_, v_a_298_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___boxed(lean_object* v_fvarId_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_IR_ToIR_bindVar(v_fvarId_303_, v_a_304_, v_a_305_, v_a_306_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0(lean_object* v_00_u03b2_309_, lean_object* v_m_310_, lean_object* v_a_311_, lean_object* v_b_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_m_310_, v_a_311_, v_b_312_);
return v___x_313_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0(lean_object* v_00_u03b2_314_, lean_object* v_a_315_, lean_object* v_x_316_){
_start:
{
uint8_t v___x_317_; 
v___x_317_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(v_a_315_, v_x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_318_, lean_object* v_a_319_, lean_object* v_x_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0(v_00_u03b2_318_, v_a_319_, v_x_320_);
lean_dec(v_x_320_);
lean_dec(v_a_319_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1(lean_object* v_00_u03b2_323_, lean_object* v_data_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(v_data_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_326_, lean_object* v_i_327_, lean_object* v_source_328_, lean_object* v_target_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(v_i_327_, v_source_328_, v_target_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_331_, lean_object* v_x_332_, lean_object* v_x_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(v_x_332_, v_x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg(lean_object* v_fvarId_335_, lean_object* v_a_336_){
_start:
{
lean_object* v___x_338_; lean_object* v_vars_339_; lean_object* v_joinPoints_340_; lean_object* v_nextId_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_353_; 
v___x_338_ = lean_st_ref_take(v_a_336_);
v_vars_339_ = lean_ctor_get(v___x_338_, 0);
v_joinPoints_340_ = lean_ctor_get(v___x_338_, 1);
v_nextId_341_ = lean_ctor_get(v___x_338_, 2);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_353_ == 0)
{
v___x_343_ = v___x_338_;
v_isShared_344_ = v_isSharedCheck_353_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_nextId_341_);
lean_inc(v_joinPoints_340_);
lean_inc(v_vars_339_);
lean_dec(v___x_338_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_353_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_349_; 
lean_inc(v_nextId_341_);
v___x_345_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_joinPoints_340_, v_fvarId_335_, v_nextId_341_);
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_add(v_nextId_341_, v___x_346_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 2, v___x_347_);
lean_ctor_set(v___x_343_, 1, v___x_345_);
v___x_349_ = v___x_343_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_vars_339_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_352_, 2, v___x_347_);
v___x_349_ = v_reuseFailAlloc_352_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_st_ref_put(v_a_336_, v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v_nextId_341_);
return v___x_351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg___boxed(lean_object* v_fvarId_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_IR_ToIR_bindJoinPoint___redArg(v_fvarId_354_, v_a_355_);
lean_dec(v_a_355_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint(lean_object* v_fvarId_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_IR_ToIR_bindJoinPoint___redArg(v_fvarId_358_, v_a_359_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___boxed(lean_object* v_fvarId_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_IR_ToIR_bindJoinPoint(v_fvarId_364_, v_a_365_, v_a_366_, v_a_367_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec(v_a_365_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg(lean_object* v_fvarId_370_, lean_object* v_a_371_){
_start:
{
lean_object* v___x_373_; lean_object* v_vars_374_; lean_object* v_joinPoints_375_; lean_object* v_nextId_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_388_; 
v___x_373_ = lean_st_ref_take(v_a_371_);
v_vars_374_ = lean_ctor_get(v___x_373_, 0);
v_joinPoints_375_ = lean_ctor_get(v___x_373_, 1);
v_nextId_376_ = lean_ctor_get(v___x_373_, 2);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_388_ == 0)
{
v___x_378_ = v___x_373_;
v_isShared_379_ = v_isSharedCheck_388_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_nextId_376_);
lean_inc(v_joinPoints_375_);
lean_inc(v_vars_374_);
lean_dec(v___x_373_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_388_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_380_ = lean_box(0);
v___x_381_ = lean_box(1);
v___x_382_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_vars_374_, v_fvarId_370_, v___x_381_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v___x_382_);
v___x_384_ = v___x_378_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_382_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_joinPoints_375_);
lean_ctor_set(v_reuseFailAlloc_387_, 2, v_nextId_376_);
v___x_384_ = v_reuseFailAlloc_387_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_st_ref_put(v_a_371_, v___x_384_);
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_380_);
return v___x_386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg___boxed(lean_object* v_fvarId_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lean_IR_ToIR_bindErased___redArg(v_fvarId_389_, v_a_390_);
lean_dec(v_a_390_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased(lean_object* v_fvarId_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_IR_ToIR_bindErased___redArg(v_fvarId_393_, v_a_394_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___boxed(lean_object* v_fvarId_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_IR_ToIR_bindErased(v_fvarId_399_, v_a_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
lean_dec(v_a_400_);
return v_res_404_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__0(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_box(0);
v___x_406_ = l_unsafeCast___redArg(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__1(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_407_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__2(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__1, &l_Lean_IR_ToIR_addDecl___redArg___closed__1_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__1);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__3(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__2, &l_Lean_IR_ToIR_addDecl___redArg___closed__2_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__2);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg(lean_object* v_d_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___x_415_; lean_object* v_env_416_; lean_object* v_nextMacroScope_417_; lean_object* v_ngen_418_; lean_object* v_auxDeclNGen_419_; lean_object* v_traceState_420_; lean_object* v_messages_421_; lean_object* v_infoState_422_; lean_object* v_snapshotTasks_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_439_; 
v___x_415_ = lean_st_ref_take(v_a_413_);
v_env_416_ = lean_ctor_get(v___x_415_, 0);
v_nextMacroScope_417_ = lean_ctor_get(v___x_415_, 1);
v_ngen_418_ = lean_ctor_get(v___x_415_, 2);
v_auxDeclNGen_419_ = lean_ctor_get(v___x_415_, 3);
v_traceState_420_ = lean_ctor_get(v___x_415_, 4);
v_messages_421_ = lean_ctor_get(v___x_415_, 6);
v_infoState_422_ = lean_ctor_get(v___x_415_, 7);
v_snapshotTasks_423_ = lean_ctor_get(v___x_415_, 8);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_439_ == 0)
{
lean_object* v_unused_440_; 
v_unused_440_ = lean_ctor_get(v___x_415_, 5);
lean_dec(v_unused_440_);
v___x_425_ = v___x_415_;
v_isShared_426_ = v_isSharedCheck_439_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_snapshotTasks_423_);
lean_inc(v_infoState_422_);
lean_inc(v_messages_421_);
lean_inc(v_traceState_420_);
lean_inc(v_auxDeclNGen_419_);
lean_inc(v_ngen_418_);
lean_inc(v_nextMacroScope_417_);
lean_inc(v_env_416_);
lean_dec(v___x_415_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_439_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v_toEnvExtension_428_; lean_object* v_asyncMode_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_435_; 
v___x_427_ = l_Lean_IR_declMapExt;
v_toEnvExtension_428_ = lean_ctor_get(v___x_427_, 0);
v_asyncMode_429_ = lean_ctor_get(v_toEnvExtension_428_, 2);
v___x_430_ = lean_box(0);
v___x_431_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__0, &l_Lean_IR_ToIR_addDecl___redArg___closed__0_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__0);
v___x_432_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_427_, v_env_416_, v_d_412_, v_asyncMode_429_, v___x_431_);
v___x_433_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__3, &l_Lean_IR_ToIR_addDecl___redArg___closed__3_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__3);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 5, v___x_433_);
lean_ctor_set(v___x_425_, 0, v___x_432_);
v___x_435_ = v___x_425_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_432_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_nextMacroScope_417_);
lean_ctor_set(v_reuseFailAlloc_438_, 2, v_ngen_418_);
lean_ctor_set(v_reuseFailAlloc_438_, 3, v_auxDeclNGen_419_);
lean_ctor_set(v_reuseFailAlloc_438_, 4, v_traceState_420_);
lean_ctor_set(v_reuseFailAlloc_438_, 5, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_438_, 6, v_messages_421_);
lean_ctor_set(v_reuseFailAlloc_438_, 7, v_infoState_422_);
lean_ctor_set(v_reuseFailAlloc_438_, 8, v_snapshotTasks_423_);
v___x_435_ = v_reuseFailAlloc_438_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_st_ref_put(v_a_413_, v___x_435_);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_430_);
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg___boxed(lean_object* v_d_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_IR_ToIR_addDecl___redArg(v_d_441_, v_a_442_);
lean_dec(v_a_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl(lean_object* v_d_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_IR_ToIR_addDecl___redArg(v_d_445_, v_a_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___boxed(lean_object* v_d_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lean_IR_ToIR_addDecl(v_d_451_, v_a_452_, v_a_453_, v_a_454_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLitValue(lean_object* v_v_457_){
_start:
{
switch(lean_obj_tag(v_v_457_))
{
case 0:
{
lean_object* v_val_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_472_; 
v_val_458_ = lean_ctor_get(v_v_457_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_v_457_);
if (v_isSharedCheck_472_ == 0)
{
v___x_460_ = v_v_457_;
v_isShared_461_ = v_isSharedCheck_472_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_val_458_);
lean_dec(v_v_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_472_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___y_463_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_468_ = lean_cstr_to_nat("4294967296");
v___x_469_ = lean_nat_dec_lt(v_val_458_, v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
v___x_470_ = lean_box(8);
v___y_463_ = v___x_470_;
goto v___jp_462_;
}
else
{
lean_object* v___x_471_; 
v___x_471_ = lean_box(12);
v___y_463_ = v___x_471_;
goto v___jp_462_;
}
v___jp_462_:
{
lean_object* v___x_465_; 
if (v_isShared_461_ == 0)
{
v___x_465_ = v___x_460_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_val_458_);
v___x_465_ = v_reuseFailAlloc_467_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; 
lean_inc(v___y_463_);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
lean_ctor_set(v___x_466_, 1, v___y_463_);
return v___x_466_;
}
}
}
}
case 1:
{
lean_object* v_val_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_482_; 
v_val_473_ = lean_ctor_get(v_v_457_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v_v_457_);
if (v_isSharedCheck_482_ == 0)
{
v___x_475_ = v_v_457_;
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_val_473_);
lean_dec(v_v_457_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_val_473_);
v___x_478_ = v_reuseFailAlloc_481_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_box(7);
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
return v___x_480_;
}
}
}
case 2:
{
uint8_t v_val_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v_val_483_ = lean_ctor_get_uint8(v_v_457_, 0);
lean_dec_ref_known(v_v_457_, 0);
v___x_484_ = lean_uint8_to_nat(v_val_483_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
v___x_486_ = lean_box(1);
v___x_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
return v___x_487_;
}
case 3:
{
uint16_t v_val_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_val_488_ = lean_ctor_get_uint16(v_v_457_, 0);
lean_dec_ref_known(v_v_457_, 0);
v___x_489_ = lean_uint16_to_nat(v_val_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
v___x_491_ = lean_box(2);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
return v___x_492_;
}
case 4:
{
uint32_t v_val_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_val_493_ = lean_ctor_get_uint32(v_v_457_, 0);
lean_dec_ref_known(v_v_457_, 0);
v___x_494_ = lean_uint32_to_nat(v_val_493_);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
v___x_496_ = lean_box(3);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
return v___x_497_;
}
case 5:
{
uint64_t v_val_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_val_498_ = lean_ctor_get_uint64(v_v_457_, 0);
lean_dec_ref_known(v_v_457_, 0);
v___x_499_ = lean_uint64_to_nat(v_val_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
v___x_501_ = lean_box(4);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
return v___x_502_;
}
default: 
{
uint64_t v_val_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v_val_503_ = lean_ctor_get_uint64(v_v_457_, 0);
lean_dec_ref_known(v_v_457_, 0);
v___x_504_ = lean_uint64_to_nat(v_val_503_);
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
v___x_506_ = lean_box(5);
v___x_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_505_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
return v___x_507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg(lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
if (lean_obj_tag(v_a_508_) == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_box(1);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
else
{
lean_object* v_fvarId_513_; lean_object* v___x_514_; 
v_fvarId_513_ = lean_ctor_get(v_a_508_, 0);
v___x_514_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_513_, v_a_509_);
return v___x_514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg___boxed(lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_IR_ToIR_lowerArg___redArg(v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec(v_a_515_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg(lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_IR_ToIR_lowerArg___redArg(v_a_519_, v_a_520_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___boxed(lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_IR_ToIR_lowerArg(v_a_525_, v_a_526_, v_a_527_, v_a_528_);
lean_dec(v_a_528_);
lean_dec_ref(v_a_527_);
lean_dec(v_a_526_);
lean_dec(v_a_525_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg(lean_object* v_p_531_, lean_object* v_a_532_){
_start:
{
lean_object* v_fvarId_534_; lean_object* v_type_535_; uint8_t v_borrow_536_; lean_object* v___x_537_; lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_551_; 
v_fvarId_534_ = lean_ctor_get(v_p_531_, 0);
lean_inc(v_fvarId_534_);
v_type_535_ = lean_ctor_get(v_p_531_, 2);
lean_inc_ref(v_type_535_);
v_borrow_536_ = lean_ctor_get_uint8(v_p_531_, sizeof(void*)*3);
lean_dec_ref(v_p_531_);
v___x_537_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_534_, v_a_532_);
v_a_538_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_551_ == 0)
{
v___x_540_ = v___x_537_;
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; uint8_t v___y_544_; 
v___x_542_ = l_Lean_IR_toIRType(v_type_535_);
lean_dec_ref(v_type_535_);
if (v_borrow_536_ == 0)
{
v___y_544_ = v_borrow_536_;
goto v___jp_543_;
}
else
{
uint8_t v___x_549_; 
v___x_549_ = l_Lean_IR_IRType_isScalar(v___x_542_);
if (v___x_549_ == 0)
{
v___y_544_ = v_borrow_536_;
goto v___jp_543_;
}
else
{
uint8_t v___x_550_; 
v___x_550_ = 0;
v___y_544_ = v___x_550_;
goto v___jp_543_;
}
}
v___jp_543_:
{
lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_545_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_545_, 0, v_a_538_);
lean_ctor_set(v___x_545_, 1, v___x_542_);
lean_ctor_set_uint8(v___x_545_, sizeof(void*)*2, v___y_544_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_545_);
v___x_547_ = v___x_540_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg___boxed(lean_object* v_p_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_IR_ToIR_lowerParam___redArg(v_p_552_, v_a_553_);
lean_dec(v_a_553_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam(lean_object* v_p_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = l_Lean_IR_ToIR_lowerParam___redArg(v_p_556_, v_a_557_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___boxed(lean_object* v_p_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_IR_ToIR_lowerParam(v_p_562_, v_a_563_, v_a_564_, v_a_565_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCtorInfo(lean_object* v_i_568_){
_start:
{
lean_object* v_name_569_; lean_object* v_cidx_570_; lean_object* v_size_571_; lean_object* v_usize_572_; lean_object* v_ssize_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_name_569_ = lean_ctor_get(v_i_568_, 0);
v_cidx_570_ = lean_ctor_get(v_i_568_, 1);
v_size_571_ = lean_ctor_get(v_i_568_, 2);
v_usize_572_ = lean_ctor_get(v_i_568_, 3);
v_ssize_573_ = lean_ctor_get(v_i_568_, 4);
v_isSharedCheck_580_ = !lean_is_exclusive(v_i_568_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v_i_568_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_ssize_573_);
lean_inc(v_usize_572_);
lean_inc(v_size_571_);
lean_inc(v_cidx_570_);
lean_inc(v_name_569_);
lean_dec(v_i_568_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_name_569_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_cidx_570_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_size_571_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_usize_572_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_ssize_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(size_t v_sz_581_, size_t v_i_582_, lean_object* v_bs_583_, lean_object* v___y_584_){
_start:
{
uint8_t v___x_586_; 
v___x_586_ = lean_usize_dec_lt(v_i_582_, v_sz_581_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = l_unsafeCast___redArg(v_bs_583_);
lean_dec_ref(v_bs_583_);
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
return v___x_588_;
}
else
{
lean_object* v_v_589_; lean_object* v___x_590_; lean_object* v_bs_x27_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_v_589_ = lean_array_uget(v_bs_583_, v_i_582_);
v___x_590_ = lean_unsigned_to_nat(0u);
v_bs_x27_591_ = lean_array_uset(v_bs_583_, v_i_582_, v___x_590_);
v___x_592_ = l_unsafeCast___redArg(v_v_589_);
lean_dec(v_v_589_);
v___x_593_ = l_Lean_IR_ToIR_lowerParam___redArg(v___x_592_, v___y_584_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; size_t v___x_595_; size_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_593_, 1);
v___x_595_ = ((size_t)1ULL);
v___x_596_ = lean_usize_add(v_i_582_, v___x_595_);
v___x_597_ = l_unsafeCast___redArg(v_a_594_);
lean_dec(v_a_594_);
v___x_598_ = lean_array_uset(v_bs_x27_591_, v_i_582_, v___x_597_);
v_i_582_ = v___x_596_;
v_bs_583_ = v___x_598_;
goto _start;
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
lean_dec_ref(v_bs_x27_591_);
v_a_600_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_593_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_593_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg___boxed(lean_object* v_sz_608_, lean_object* v_i_609_, lean_object* v_bs_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
size_t v_sz_boxed_613_; size_t v_i_boxed_614_; lean_object* v_res_615_; 
v_sz_boxed_613_ = lean_unbox_usize(v_sz_608_);
lean_dec(v_sz_608_);
v_i_boxed_614_ = lean_unbox_usize(v_i_609_);
lean_dec(v_i_609_);
v_res_615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(v_sz_boxed_613_, v_i_boxed_614_, v_bs_610_, v___y_611_);
lean_dec(v___y_611_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2(size_t v_sz_616_, size_t v_i_617_, lean_object* v_bs_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(v_sz_616_, v_i_617_, v_bs_618_, v___y_619_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___boxed(lean_object* v_sz_624_, lean_object* v_i_625_, lean_object* v_bs_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
size_t v_sz_boxed_631_; size_t v_i_boxed_632_; lean_object* v_res_633_; 
v_sz_boxed_631_ = lean_unbox_usize(v_sz_624_);
lean_dec(v_sz_624_);
v_i_boxed_632_ = lean_unbox_usize(v_i_625_);
lean_dec(v_i_625_);
v_res_633_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2(v_sz_boxed_631_, v_i_boxed_632_, v_bs_626_, v___y_627_, v___y_628_, v___y_629_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
return v_res_633_;
}
}
static lean_object* _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0(void){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_instMonadEIO___redArg();
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(lean_object* v_msg_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_toApplicative_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_676_; 
v___x_642_ = lean_obj_once(&l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0, &l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0_once, _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0);
v___x_643_ = l_StateRefT_x27_instMonad___redArg(v___x_642_);
v_toApplicative_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_676_ == 0)
{
lean_object* v_unused_677_; 
v_unused_677_ = lean_ctor_get(v___x_643_, 1);
lean_dec(v_unused_677_);
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_676_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_toApplicative_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_676_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v_toFunctor_648_; lean_object* v_toSeq_649_; lean_object* v_toSeqLeft_650_; lean_object* v_toSeqRight_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_674_; 
v_toFunctor_648_ = lean_ctor_get(v_toApplicative_644_, 0);
v_toSeq_649_ = lean_ctor_get(v_toApplicative_644_, 2);
v_toSeqLeft_650_ = lean_ctor_get(v_toApplicative_644_, 3);
v_toSeqRight_651_ = lean_ctor_get(v_toApplicative_644_, 4);
v_isSharedCheck_674_ = !lean_is_exclusive(v_toApplicative_644_);
if (v_isSharedCheck_674_ == 0)
{
lean_object* v_unused_675_; 
v_unused_675_ = lean_ctor_get(v_toApplicative_644_, 1);
lean_dec(v_unused_675_);
v___x_653_ = v_toApplicative_644_;
v_isShared_654_ = v_isSharedCheck_674_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_toSeqRight_651_);
lean_inc(v_toSeqLeft_650_);
lean_inc(v_toSeq_649_);
lean_inc(v_toFunctor_648_);
lean_dec(v_toApplicative_644_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_674_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___f_655_; lean_object* v___f_656_; lean_object* v___f_657_; lean_object* v___f_658_; lean_object* v___x_659_; lean_object* v___f_660_; lean_object* v___f_661_; lean_object* v___f_662_; lean_object* v___x_664_; 
v___f_655_ = ((lean_object*)(l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1));
v___f_656_ = ((lean_object*)(l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2));
lean_inc_ref(v_toFunctor_648_);
v___f_657_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_657_, 0, v_toFunctor_648_);
v___f_658_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_658_, 0, v_toFunctor_648_);
v___x_659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_659_, 0, v___f_657_);
lean_ctor_set(v___x_659_, 1, v___f_658_);
v___f_660_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_660_, 0, v_toSeqRight_651_);
v___f_661_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_661_, 0, v_toSeqLeft_650_);
v___f_662_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_662_, 0, v_toSeq_649_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 4, v___f_660_);
lean_ctor_set(v___x_653_, 3, v___f_661_);
lean_ctor_set(v___x_653_, 2, v___f_662_);
lean_ctor_set(v___x_653_, 1, v___f_655_);
lean_ctor_set(v___x_653_, 0, v___x_659_);
v___x_664_ = v___x_653_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v___f_655_);
lean_ctor_set(v_reuseFailAlloc_673_, 2, v___f_662_);
lean_ctor_set(v_reuseFailAlloc_673_, 3, v___f_661_);
lean_ctor_set(v_reuseFailAlloc_673_, 4, v___f_660_);
v___x_664_ = v_reuseFailAlloc_673_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_666_; 
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 1, v___f_656_);
lean_ctor_set(v___x_646_, 0, v___x_664_);
v___x_666_ = v___x_646_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_664_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___f_656_);
v___x_666_ = v_reuseFailAlloc_672_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_8410__overap_670_; lean_object* v___x_671_; 
v___x_667_ = l_StateRefT_x27_instMonad___redArg(v___x_666_);
v___x_668_ = l_Lean_IR_instInhabitedFnBody_default__1;
v___x_669_ = l_instInhabitedOfMonad___redArg(v___x_667_, v___x_668_);
v___x_8410__overap_670_ = lean_panic_fn_borrowed(v___x_669_, v_msg_637_);
lean_dec(v___x_669_);
lean_inc(v___y_640_);
lean_inc_ref(v___y_639_);
lean_inc(v___y_638_);
v___x_671_ = lean_apply_4(v___x_8410__overap_670_, v___y_638_, v___y_639_, v___y_640_, lean_box(0));
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___boxed(lean_object* v_msg_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v_msg_678_, v___y_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(size_t v_sz_684_, size_t v_i_685_, lean_object* v_bs_686_, lean_object* v___y_687_){
_start:
{
uint8_t v___x_689_; 
v___x_689_ = lean_usize_dec_lt(v_i_685_, v_sz_684_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = l_unsafeCast___redArg(v_bs_686_);
lean_dec_ref(v_bs_686_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
else
{
lean_object* v_v_692_; lean_object* v___x_693_; lean_object* v_bs_x27_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v_v_692_ = lean_array_uget(v_bs_686_, v_i_685_);
v___x_693_ = lean_unsigned_to_nat(0u);
v_bs_x27_694_ = lean_array_uset(v_bs_686_, v_i_685_, v___x_693_);
v___x_695_ = l_unsafeCast___redArg(v_v_692_);
lean_dec(v_v_692_);
v___x_696_ = l_Lean_IR_ToIR_lowerArg___redArg(v___x_695_, v___y_687_);
lean_dec(v___x_695_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v_a_697_; size_t v___x_698_; size_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v_a_697_ = lean_ctor_get(v___x_696_, 0);
lean_inc(v_a_697_);
lean_dec_ref_known(v___x_696_, 1);
v___x_698_ = ((size_t)1ULL);
v___x_699_ = lean_usize_add(v_i_685_, v___x_698_);
v___x_700_ = l_unsafeCast___redArg(v_a_697_);
lean_dec(v_a_697_);
v___x_701_ = lean_array_uset(v_bs_x27_694_, v_i_685_, v___x_700_);
v_i_685_ = v___x_699_;
v_bs_686_ = v___x_701_;
goto _start;
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v_bs_x27_694_);
v_a_703_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_696_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_696_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg___boxed(lean_object* v_sz_711_, lean_object* v_i_712_, lean_object* v_bs_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
size_t v_sz_boxed_716_; size_t v_i_boxed_717_; lean_object* v_res_718_; 
v_sz_boxed_716_ = lean_unbox_usize(v_sz_711_);
lean_dec(v_sz_711_);
v_i_boxed_717_ = lean_unbox_usize(v_i_712_);
lean_dec(v_i_712_);
v_res_718_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_boxed_716_, v_i_boxed_717_, v_bs_713_, v___y_714_);
lean_dec(v___y_714_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3(size_t v_sz_719_, size_t v_i_720_, lean_object* v_bs_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_719_, v_i_720_, v_bs_721_, v___y_722_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed(lean_object* v_sz_727_, lean_object* v_i_728_, lean_object* v_bs_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
size_t v_sz_boxed_734_; size_t v_i_boxed_735_; lean_object* v_res_736_; 
v_sz_boxed_734_ = lean_unbox_usize(v_sz_727_);
lean_dec(v_sz_727_);
v_i_boxed_735_ = lean_unbox_usize(v_i_728_);
lean_dec(v_i_728_);
v_res_736_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3(v_sz_boxed_734_, v_i_boxed_735_, v_bs_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2(lean_object* v_i_737_, lean_object* v_continueLet_738_, lean_object* v_var_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_744_, 0, v_i_737_);
lean_ctor_set(v___x_744_, 1, v_var_739_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
v___x_745_ = lean_apply_5(v_continueLet_738_, v___x_744_, v___y_740_, v___y_741_, v___y_742_, lean_box(0));
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2___boxed(lean_object* v_i_746_, lean_object* v_continueLet_747_, lean_object* v_var_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_IR_ToIR_lowerLet___lam__2(v_i_746_, v_continueLet_747_, v_var_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4(lean_object* v_n_754_, lean_object* v_offset_755_, lean_object* v_continueLet_756_, lean_object* v_var_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v___x_762_, 0, v_n_754_);
lean_ctor_set(v___x_762_, 1, v_offset_755_);
lean_ctor_set(v___x_762_, 2, v_var_757_);
lean_inc(v___y_760_);
lean_inc_ref(v___y_759_);
lean_inc(v___y_758_);
v___x_763_ = lean_apply_5(v_continueLet_756_, v___x_762_, v___y_758_, v___y_759_, v___y_760_, lean_box(0));
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4___boxed(lean_object* v_n_764_, lean_object* v_offset_765_, lean_object* v_continueLet_766_, lean_object* v_var_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_IR_ToIR_lowerLet___lam__4(v_n_764_, v_offset_765_, v_continueLet_766_, v_var_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5(lean_object* v_n_773_, lean_object* v_continueLet_774_, lean_object* v_var_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_780_, 0, v_n_773_);
lean_ctor_set(v___x_780_, 1, v_var_775_);
lean_inc(v___y_778_);
lean_inc_ref(v___y_777_);
lean_inc(v___y_776_);
v___x_781_ = lean_apply_5(v_continueLet_774_, v___x_780_, v___y_776_, v___y_777_, v___y_778_, lean_box(0));
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5___boxed(lean_object* v_n_782_, lean_object* v_continueLet_783_, lean_object* v_var_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = l_Lean_IR_ToIR_lowerLet___lam__5(v_n_782_, v_continueLet_783_, v_var_784_, v___y_785_, v___y_786_, v___y_787_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8(lean_object* v_continueLet_790_, lean_object* v_var_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_796_, 0, v_var_791_);
lean_inc(v___y_794_);
lean_inc_ref(v___y_793_);
lean_inc(v___y_792_);
v___x_797_ = lean_apply_5(v_continueLet_790_, v___x_796_, v___y_792_, v___y_793_, v___y_794_, lean_box(0));
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8___boxed(lean_object* v_continueLet_798_, lean_object* v_var_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_IR_ToIR_lowerLet___lam__8(v_continueLet_798_, v_var_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3(lean_object* v_i_805_, lean_object* v_continueLet_806_, lean_object* v_var_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_812_, 0, v_i_805_);
lean_ctor_set(v___x_812_, 1, v_var_807_);
lean_inc(v___y_810_);
lean_inc_ref(v___y_809_);
lean_inc(v___y_808_);
v___x_813_ = lean_apply_5(v_continueLet_806_, v___x_812_, v___y_808_, v___y_809_, v___y_810_, lean_box(0));
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3___boxed(lean_object* v_i_814_, lean_object* v_continueLet_815_, lean_object* v_var_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_IR_ToIR_lowerLet___lam__3(v_i_814_, v_continueLet_815_, v_var_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7(lean_object* v_ty_822_, lean_object* v_continueLet_823_, lean_object* v_var_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = l_Lean_IR_toIRType(v_ty_822_);
v___x_830_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
lean_ctor_set(v___x_830_, 1, v_var_824_);
lean_inc(v___y_827_);
lean_inc_ref(v___y_826_);
lean_inc(v___y_825_);
v___x_831_ = lean_apply_5(v_continueLet_823_, v___x_830_, v___y_825_, v___y_826_, v___y_827_, lean_box(0));
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7___boxed(lean_object* v_ty_832_, lean_object* v_continueLet_833_, lean_object* v_var_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lean_IR_ToIR_lowerLet___lam__7(v_ty_832_, v_continueLet_833_, v_var_834_, v___y_835_, v___y_836_, v___y_837_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v_ty_832_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6(lean_object* v_args_842_, lean_object* v_i_843_, uint8_t v_updateHeader_844_, lean_object* v_continueLet_845_, lean_object* v_var_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
size_t v_sz_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_9219__overap_856_; lean_object* v___x_857_; 
v_sz_851_ = lean_array_size(v_args_842_);
v___x_852_ = l_unsafeCast___redArg(v_args_842_);
v___x_853_ = lean_box_usize(v_sz_851_);
v___x_854_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_855_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed), 7, 3);
lean_closure_set(v___x_855_, 0, v___x_853_);
lean_closure_set(v___x_855_, 1, v___x_854_);
lean_closure_set(v___x_855_, 2, v___x_852_);
v___x_9219__overap_856_ = l_unsafeCast___redArg(v___x_855_);
lean_dec_ref(v___x_855_);
lean_inc(v___y_849_);
lean_inc_ref(v___y_848_);
lean_inc(v___y_847_);
v___x_857_ = lean_apply_4(v___x_9219__overap_856_, v___y_847_, v___y_848_, v___y_849_, lean_box(0));
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v_name_859_; lean_object* v_cidx_860_; lean_object* v_size_861_; lean_object* v_usize_862_; lean_object* v_ssize_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_872_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___x_857_, 1);
v_name_859_ = lean_ctor_get(v_i_843_, 0);
v_cidx_860_ = lean_ctor_get(v_i_843_, 1);
v_size_861_ = lean_ctor_get(v_i_843_, 2);
v_usize_862_ = lean_ctor_get(v_i_843_, 3);
v_ssize_863_ = lean_ctor_get(v_i_843_, 4);
v_isSharedCheck_872_ = !lean_is_exclusive(v_i_843_);
if (v_isSharedCheck_872_ == 0)
{
v___x_865_ = v_i_843_;
v_isShared_866_ = v_isSharedCheck_872_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_ssize_863_);
lean_inc(v_usize_862_);
lean_inc(v_size_861_);
lean_inc(v_cidx_860_);
lean_inc(v_name_859_);
lean_dec(v_i_843_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_872_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_name_859_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_cidx_860_);
lean_ctor_set(v_reuseFailAlloc_871_, 2, v_size_861_);
lean_ctor_set(v_reuseFailAlloc_871_, 3, v_usize_862_);
lean_ctor_set(v_reuseFailAlloc_871_, 4, v_ssize_863_);
v___x_868_ = v_reuseFailAlloc_871_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(v___x_869_, 0, v_var_846_);
lean_ctor_set(v___x_869_, 1, v___x_868_);
lean_ctor_set(v___x_869_, 2, v_a_858_);
lean_ctor_set_uint8(v___x_869_, sizeof(void*)*3, v_updateHeader_844_);
lean_inc(v___y_849_);
lean_inc_ref(v___y_848_);
lean_inc(v___y_847_);
v___x_870_ = lean_apply_5(v_continueLet_845_, v___x_869_, v___y_847_, v___y_848_, v___y_849_, lean_box(0));
return v___x_870_;
}
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
lean_dec(v_var_846_);
lean_dec_ref(v_continueLet_845_);
lean_dec_ref(v_i_843_);
v_a_873_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_857_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_857_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6___boxed(lean_object* v_args_881_, lean_object* v_i_882_, lean_object* v_updateHeader_883_, lean_object* v_continueLet_884_, lean_object* v_var_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
uint8_t v_updateHeader_9567__boxed_890_; lean_object* v_res_891_; 
v_updateHeader_9567__boxed_890_ = lean_unbox(v_updateHeader_883_);
v_res_891_ = l_Lean_IR_ToIR_lowerLet___lam__6(v_args_881_, v_i_882_, v_updateHeader_9567__boxed_890_, v_continueLet_884_, v_var_885_, v___y_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v_args_881_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9(lean_object* v_continueLet_892_, lean_object* v_var_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v___x_898_, 0, v_var_893_);
lean_inc(v___y_896_);
lean_inc_ref(v___y_895_);
lean_inc(v___y_894_);
v___x_899_ = lean_apply_5(v_continueLet_892_, v___x_898_, v___y_894_, v___y_895_, v___y_896_, lean_box(0));
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9___boxed(lean_object* v_continueLet_900_, lean_object* v_var_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_IR_ToIR_lowerLet___lam__9(v_continueLet_900_, v_var_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1(lean_object* v_args_907_, lean_object* v_continueLet_908_, lean_object* v_id_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
size_t v_sz_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_9172__overap_919_; lean_object* v___x_920_; 
v_sz_914_ = lean_array_size(v_args_907_);
v___x_915_ = l_unsafeCast___redArg(v_args_907_);
v___x_916_ = lean_box_usize(v_sz_914_);
v___x_917_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_918_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed), 7, 3);
lean_closure_set(v___x_918_, 0, v___x_916_);
lean_closure_set(v___x_918_, 1, v___x_917_);
lean_closure_set(v___x_918_, 2, v___x_915_);
v___x_9172__overap_919_ = l_unsafeCast___redArg(v___x_918_);
lean_dec_ref(v___x_918_);
lean_inc(v___y_912_);
lean_inc_ref(v___y_911_);
lean_inc(v___y_910_);
v___x_920_ = lean_apply_4(v___x_9172__overap_919_, v___y_910_, v___y_911_, v___y_912_, lean_box(0));
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
v___x_922_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_922_, 0, v_id_909_);
lean_ctor_set(v___x_922_, 1, v_a_921_);
lean_inc(v___y_912_);
lean_inc_ref(v___y_911_);
lean_inc(v___y_910_);
v___x_923_ = lean_apply_5(v_continueLet_908_, v___x_922_, v___y_910_, v___y_911_, v___y_912_, lean_box(0));
return v___x_923_;
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_id_909_);
lean_dec_ref(v_continueLet_908_);
v_a_924_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_920_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_920_);
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
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1___boxed(lean_object* v_args_932_, lean_object* v_continueLet_933_, lean_object* v_id_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_IR_ToIR_lowerLet___lam__1(v_args_932_, v_continueLet_933_, v_id_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v_args_932_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0(lean_object* v_fvarId_940_, lean_object* v_k_941_, lean_object* v_type_942_, lean_object* v_e_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_940_, v___y_944_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 1);
v___x_950_ = l_Lean_IR_ToIR_lowerCode(v_k_941_, v___y_944_, v___y_945_, v___y_946_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_959_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_959_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_955_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_955_, 0, v_a_949_);
lean_ctor_set(v___x_955_, 1, v_type_942_);
lean_ctor_set(v___x_955_, 2, v_e_943_);
lean_ctor_set(v___x_955_, 3, v_a_951_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_955_);
v___x_957_ = v___x_953_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
else
{
lean_dec(v_a_949_);
lean_dec_ref(v_e_943_);
lean_dec(v_type_942_);
return v___x_950_;
}
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
lean_dec_ref(v_e_943_);
lean_dec(v_type_942_);
lean_dec_ref(v_k_941_);
v_a_960_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_948_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_948_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0___boxed(lean_object* v_fvarId_968_, lean_object* v_k_969_, lean_object* v_type_970_, lean_object* v_e_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_968_, v_k_969_, v_type_970_, v_e_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(lean_object* v_decl_977_, lean_object* v_k_978_, lean_object* v_fvarId_979_, lean_object* v_f_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_979_, v_a_981_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
if (lean_obj_tag(v_a_986_) == 0)
{
lean_object* v_id_987_; lean_object* v___x_988_; 
lean_dec_ref(v_k_978_);
lean_dec_ref(v_decl_977_);
v_id_987_ = lean_ctor_get(v_a_986_, 0);
lean_inc(v_id_987_);
lean_dec_ref_known(v_a_986_, 1);
lean_inc(v_a_983_);
lean_inc_ref(v_a_982_);
lean_inc(v_a_981_);
v___x_988_ = lean_apply_5(v_f_980_, v_id_987_, v_a_981_, v_a_982_, v_a_983_, lean_box(0));
return v___x_988_;
}
else
{
lean_object* v___x_989_; 
lean_dec_ref(v_f_980_);
v___x_989_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_977_, v_k_978_, v_a_981_, v_a_982_, v_a_983_);
return v___x_989_;
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec_ref(v_f_980_);
lean_dec_ref(v_k_978_);
lean_dec_ref(v_decl_977_);
v_a_990_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_985_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_985_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet(lean_object* v_decl_998_, lean_object* v_k_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_){
_start:
{
lean_object* v_fvarId_1004_; lean_object* v_type_1005_; lean_object* v_value_1006_; lean_object* v_type_1007_; lean_object* v_continueLet_1008_; 
v_fvarId_1004_ = lean_ctor_get(v_decl_998_, 0);
v_type_1005_ = lean_ctor_get(v_decl_998_, 2);
v_value_1006_ = lean_ctor_get(v_decl_998_, 3);
lean_inc(v_value_1006_);
v_type_1007_ = l_Lean_IR_toIRType(v_type_1005_);
lean_inc(v_type_1007_);
lean_inc_ref(v_k_999_);
lean_inc(v_fvarId_1004_);
v_continueLet_1008_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__0___boxed), 8, 3);
lean_closure_set(v_continueLet_1008_, 0, v_fvarId_1004_);
lean_closure_set(v_continueLet_1008_, 1, v_k_999_);
lean_closure_set(v_continueLet_1008_, 2, v_type_1007_);
switch(lean_obj_tag(v_value_1006_))
{
case 0:
{
lean_object* v_value_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1019_; 
lean_inc(v_fvarId_1004_);
lean_dec_ref(v_continueLet_1008_);
lean_dec_ref(v_decl_998_);
v_value_1009_ = lean_ctor_get(v_value_1006_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_value_1006_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1011_ = v_value_1006_;
v_isShared_1012_ = v_isSharedCheck_1019_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_value_1009_);
lean_dec(v_value_1006_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1019_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v_fst_1014_; lean_object* v___x_1016_; 
v___x_1013_ = l_Lean_IR_ToIR_lowerLitValue(v_value_1009_);
v_fst_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_fst_1014_);
lean_dec_ref(v___x_1013_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 11);
lean_ctor_set(v___x_1011_, 0, v_fst_1014_);
v___x_1016_ = v___x_1011_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_fst_1014_);
v___x_1016_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; 
v___x_1017_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_1004_, v_k_999_, v_type_1007_, v___x_1016_, v_a_1000_, v_a_1001_, v_a_1002_);
return v___x_1017_;
}
}
}
case 1:
{
lean_object* v___x_1020_; 
lean_dec_ref(v_continueLet_1008_);
lean_dec(v_type_1007_);
v___x_1020_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_998_, v_k_999_, v_a_1000_, v_a_1001_, v_a_1002_);
return v___x_1020_;
}
case 4:
{
lean_object* v_fvarId_1021_; lean_object* v_args_1022_; lean_object* v___f_1023_; lean_object* v___x_1024_; 
lean_dec(v_type_1007_);
v_fvarId_1021_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_fvarId_1021_);
v_args_1022_ = lean_ctor_get(v_value_1006_, 1);
lean_inc_ref(v_args_1022_);
lean_dec_ref_known(v_value_1006_, 2);
v___f_1023_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1023_, 0, v_args_1022_);
lean_closure_set(v___f_1023_, 1, v_continueLet_1008_);
v___x_1024_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_fvarId_1021_, v___f_1023_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_fvarId_1021_);
return v___x_1024_;
}
case 5:
{
lean_object* v_i_1025_; lean_object* v_args_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1062_; 
lean_inc(v_fvarId_1004_);
lean_dec_ref(v_continueLet_1008_);
lean_dec_ref(v_decl_998_);
v_i_1025_ = lean_ctor_get(v_value_1006_, 0);
v_args_1026_ = lean_ctor_get(v_value_1006_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_value_1006_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1028_ = v_value_1006_;
v_isShared_1029_ = v_isSharedCheck_1062_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_args_1026_);
lean_inc(v_i_1025_);
lean_dec(v_value_1006_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1062_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
size_t v_sz_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_9108__overap_1035_; lean_object* v___x_1036_; 
v_sz_1030_ = lean_array_size(v_args_1026_);
v___x_1031_ = l_unsafeCast___redArg(v_args_1026_);
lean_dec_ref(v_args_1026_);
v___x_1032_ = lean_box_usize(v_sz_1030_);
v___x_1033_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1034_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed), 7, 3);
lean_closure_set(v___x_1034_, 0, v___x_1032_);
lean_closure_set(v___x_1034_, 1, v___x_1033_);
lean_closure_set(v___x_1034_, 2, v___x_1031_);
v___x_9108__overap_1035_ = l_unsafeCast___redArg(v___x_1034_);
lean_dec_ref(v___x_1034_);
lean_inc(v_a_1002_);
lean_inc_ref(v_a_1001_);
lean_inc(v_a_1000_);
v___x_1036_ = lean_apply_4(v___x_9108__overap_1035_, v_a_1000_, v_a_1001_, v_a_1002_, lean_box(0));
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v_name_1038_; lean_object* v_cidx_1039_; lean_object* v_size_1040_; lean_object* v_usize_1041_; lean_object* v_ssize_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1053_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v_name_1038_ = lean_ctor_get(v_i_1025_, 0);
v_cidx_1039_ = lean_ctor_get(v_i_1025_, 1);
v_size_1040_ = lean_ctor_get(v_i_1025_, 2);
v_usize_1041_ = lean_ctor_get(v_i_1025_, 3);
v_ssize_1042_ = lean_ctor_get(v_i_1025_, 4);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_i_1025_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1044_ = v_i_1025_;
v_isShared_1045_ = v_isSharedCheck_1053_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_ssize_1042_);
lean_inc(v_usize_1041_);
lean_inc(v_size_1040_);
lean_inc(v_cidx_1039_);
lean_inc(v_name_1038_);
lean_dec(v_i_1025_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1053_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_name_1038_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_cidx_1039_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_size_1040_);
lean_ctor_set(v_reuseFailAlloc_1052_, 3, v_usize_1041_);
lean_ctor_set(v_reuseFailAlloc_1052_, 4, v_ssize_1042_);
v___x_1047_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
lean_object* v___x_1049_; 
if (v_isShared_1029_ == 0)
{
lean_ctor_set_tag(v___x_1028_, 0);
lean_ctor_set(v___x_1028_, 1, v_a_1037_);
lean_ctor_set(v___x_1028_, 0, v___x_1047_);
v___x_1049_ = v___x_1028_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_a_1037_);
v___x_1049_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_1004_, v_k_999_, v_type_1007_, v___x_1049_, v_a_1000_, v_a_1001_, v_a_1002_);
return v___x_1050_;
}
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
lean_del_object(v___x_1028_);
lean_dec_ref(v_i_1025_);
lean_dec(v_type_1007_);
lean_dec(v_fvarId_1004_);
lean_dec_ref(v_k_999_);
v_a_1054_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1036_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1036_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
case 6:
{
lean_object* v_i_1063_; lean_object* v_var_1064_; lean_object* v___f_1065_; lean_object* v___x_1066_; 
lean_dec(v_type_1007_);
v_i_1063_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_i_1063_);
v_var_1064_ = lean_ctor_get(v_value_1006_, 1);
lean_inc(v_var_1064_);
lean_dec_ref_known(v_value_1006_, 2);
v___f_1065_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__2___boxed), 7, 2);
lean_closure_set(v___f_1065_, 0, v_i_1063_);
lean_closure_set(v___f_1065_, 1, v_continueLet_1008_);
v___x_1066_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_var_1064_, v___f_1065_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_var_1064_);
return v___x_1066_;
}
case 7:
{
lean_object* v_i_1067_; lean_object* v_var_1068_; lean_object* v___f_1069_; lean_object* v___x_1070_; 
lean_dec(v_type_1007_);
v_i_1067_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_i_1067_);
v_var_1068_ = lean_ctor_get(v_value_1006_, 1);
lean_inc(v_var_1068_);
lean_dec_ref_known(v_value_1006_, 2);
v___f_1069_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__3___boxed), 7, 2);
lean_closure_set(v___f_1069_, 0, v_i_1067_);
lean_closure_set(v___f_1069_, 1, v_continueLet_1008_);
v___x_1070_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_var_1068_, v___f_1069_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_var_1068_);
return v___x_1070_;
}
case 8:
{
lean_object* v_n_1071_; lean_object* v_offset_1072_; lean_object* v_var_1073_; lean_object* v___f_1074_; lean_object* v___x_1075_; 
lean_dec(v_type_1007_);
v_n_1071_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_n_1071_);
v_offset_1072_ = lean_ctor_get(v_value_1006_, 1);
lean_inc(v_offset_1072_);
v_var_1073_ = lean_ctor_get(v_value_1006_, 2);
lean_inc(v_var_1073_);
lean_dec_ref_known(v_value_1006_, 3);
v___f_1074_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__4___boxed), 8, 3);
lean_closure_set(v___f_1074_, 0, v_n_1071_);
lean_closure_set(v___f_1074_, 1, v_offset_1072_);
lean_closure_set(v___f_1074_, 2, v_continueLet_1008_);
v___x_1075_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_var_1073_, v___f_1074_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_var_1073_);
return v___x_1075_;
}
case 9:
{
lean_object* v_fn_1076_; lean_object* v_args_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1101_; 
lean_inc(v_fvarId_1004_);
lean_dec_ref(v_continueLet_1008_);
lean_dec_ref(v_decl_998_);
v_fn_1076_ = lean_ctor_get(v_value_1006_, 0);
v_args_1077_ = lean_ctor_get(v_value_1006_, 1);
v_isSharedCheck_1101_ = !lean_is_exclusive(v_value_1006_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1079_ = v_value_1006_;
v_isShared_1080_ = v_isSharedCheck_1101_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_args_1077_);
lean_inc(v_fn_1076_);
lean_dec(v_value_1006_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1101_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
size_t v_sz_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_9111__overap_1086_; lean_object* v___x_1087_; 
v_sz_1081_ = lean_array_size(v_args_1077_);
v___x_1082_ = l_unsafeCast___redArg(v_args_1077_);
lean_dec_ref(v_args_1077_);
v___x_1083_ = lean_box_usize(v_sz_1081_);
v___x_1084_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1085_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed), 7, 3);
lean_closure_set(v___x_1085_, 0, v___x_1083_);
lean_closure_set(v___x_1085_, 1, v___x_1084_);
lean_closure_set(v___x_1085_, 2, v___x_1082_);
v___x_9111__overap_1086_ = l_unsafeCast___redArg(v___x_1085_);
lean_dec_ref(v___x_1085_);
lean_inc(v_a_1002_);
lean_inc_ref(v_a_1001_);
lean_inc(v_a_1000_);
v___x_1087_ = lean_apply_4(v___x_9111__overap_1086_, v_a_1000_, v_a_1001_, v_a_1002_, lean_box(0));
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
if (v_isShared_1080_ == 0)
{
lean_ctor_set_tag(v___x_1079_, 6);
lean_ctor_set(v___x_1079_, 1, v_a_1088_);
v___x_1090_ = v___x_1079_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_fn_1076_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_a_1088_);
v___x_1090_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_1004_, v_k_999_, v_type_1007_, v___x_1090_, v_a_1000_, v_a_1001_, v_a_1002_);
return v___x_1091_;
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_del_object(v___x_1079_);
lean_dec(v_fn_1076_);
lean_dec(v_type_1007_);
lean_dec(v_fvarId_1004_);
lean_dec_ref(v_k_999_);
v_a_1093_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1087_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1087_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
case 10:
{
lean_object* v_fn_1102_; lean_object* v_args_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1127_; 
lean_inc(v_fvarId_1004_);
lean_dec_ref(v_continueLet_1008_);
lean_dec_ref(v_decl_998_);
v_fn_1102_ = lean_ctor_get(v_value_1006_, 0);
v_args_1103_ = lean_ctor_get(v_value_1006_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_value_1006_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1105_ = v_value_1006_;
v_isShared_1106_ = v_isSharedCheck_1127_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_args_1103_);
lean_inc(v_fn_1102_);
lean_dec(v_value_1006_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1127_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
size_t v_sz_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_9114__overap_1112_; lean_object* v___x_1113_; 
v_sz_1107_ = lean_array_size(v_args_1103_);
v___x_1108_ = l_unsafeCast___redArg(v_args_1103_);
lean_dec_ref(v_args_1103_);
v___x_1109_ = lean_box_usize(v_sz_1107_);
v___x_1110_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1111_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed), 7, 3);
lean_closure_set(v___x_1111_, 0, v___x_1109_);
lean_closure_set(v___x_1111_, 1, v___x_1110_);
lean_closure_set(v___x_1111_, 2, v___x_1108_);
v___x_9114__overap_1112_ = l_unsafeCast___redArg(v___x_1111_);
lean_dec_ref(v___x_1111_);
lean_inc(v_a_1002_);
lean_inc_ref(v_a_1001_);
lean_inc(v_a_1000_);
v___x_1113_ = lean_apply_4(v___x_9114__overap_1112_, v_a_1000_, v_a_1001_, v_a_1002_, lean_box(0));
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; lean_object* v___x_1116_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
if (v_isShared_1106_ == 0)
{
lean_ctor_set_tag(v___x_1105_, 7);
lean_ctor_set(v___x_1105_, 1, v_a_1114_);
v___x_1116_ = v___x_1105_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_fn_1102_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_a_1114_);
v___x_1116_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_1004_, v_k_999_, v_type_1007_, v___x_1116_, v_a_1000_, v_a_1001_, v_a_1002_);
return v___x_1117_;
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_del_object(v___x_1105_);
lean_dec(v_fn_1102_);
lean_dec(v_type_1007_);
lean_dec(v_fvarId_1004_);
lean_dec_ref(v_k_999_);
v_a_1119_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1113_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1113_);
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
case 11:
{
lean_object* v_n_1128_; lean_object* v_var_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; 
lean_dec(v_type_1007_);
v_n_1128_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_n_1128_);
v_var_1129_ = lean_ctor_get(v_value_1006_, 1);
lean_inc(v_var_1129_);
lean_dec_ref_known(v_value_1006_, 2);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__5___boxed), 7, 2);
lean_closure_set(v___f_1130_, 0, v_n_1128_);
lean_closure_set(v___f_1130_, 1, v_continueLet_1008_);
v___x_1131_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_var_1129_, v___f_1130_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_var_1129_);
return v___x_1131_;
}
case 12:
{
lean_object* v_var_1132_; lean_object* v_i_1133_; uint8_t v_updateHeader_1134_; lean_object* v_args_1135_; lean_object* v___x_1136_; lean_object* v___f_1137_; lean_object* v___x_1138_; 
lean_dec(v_type_1007_);
v_var_1132_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_var_1132_);
v_i_1133_ = lean_ctor_get(v_value_1006_, 1);
lean_inc_ref(v_i_1133_);
v_updateHeader_1134_ = lean_ctor_get_uint8(v_value_1006_, sizeof(void*)*3);
v_args_1135_ = lean_ctor_get(v_value_1006_, 2);
lean_inc_ref(v_args_1135_);
lean_dec_ref_known(v_value_1006_, 3);
v___x_1136_ = lean_box(v_updateHeader_1134_);
v___f_1137_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed), 9, 4);
lean_closure_set(v___f_1137_, 0, v_args_1135_);
lean_closure_set(v___f_1137_, 1, v_i_1133_);
lean_closure_set(v___f_1137_, 2, v___x_1136_);
lean_closure_set(v___f_1137_, 3, v_continueLet_1008_);
v___x_1138_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_var_1132_, v___f_1137_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_var_1132_);
return v___x_1138_;
}
case 13:
{
lean_object* v_ty_1139_; lean_object* v_fvarId_1140_; lean_object* v___f_1141_; lean_object* v___x_1142_; 
lean_dec(v_type_1007_);
v_ty_1139_ = lean_ctor_get(v_value_1006_, 0);
lean_inc_ref(v_ty_1139_);
v_fvarId_1140_ = lean_ctor_get(v_value_1006_, 1);
lean_inc(v_fvarId_1140_);
lean_dec_ref_known(v_value_1006_, 2);
v___f_1141_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__7___boxed), 7, 2);
lean_closure_set(v___f_1141_, 0, v_ty_1139_);
lean_closure_set(v___f_1141_, 1, v_continueLet_1008_);
v___x_1142_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_fvarId_1140_, v___f_1141_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_fvarId_1140_);
return v___x_1142_;
}
case 14:
{
lean_object* v_fvarId_1143_; lean_object* v___f_1144_; lean_object* v___x_1145_; 
lean_dec(v_type_1007_);
v_fvarId_1143_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_fvarId_1143_);
lean_dec_ref_known(v_value_1006_, 1);
v___f_1144_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__8___boxed), 6, 1);
lean_closure_set(v___f_1144_, 0, v_continueLet_1008_);
v___x_1145_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_fvarId_1143_, v___f_1144_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_fvarId_1143_);
return v___x_1145_;
}
default: 
{
lean_object* v_fvarId_1146_; lean_object* v___f_1147_; lean_object* v___x_1148_; 
lean_dec(v_type_1007_);
v_fvarId_1146_ = lean_ctor_get(v_value_1006_, 0);
lean_inc(v_fvarId_1146_);
lean_dec_ref_known(v_value_1006_, 1);
v___f_1147_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1147_, 0, v_continueLet_1008_);
v___x_1148_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_998_, v_k_999_, v_fvarId_1146_, v___f_1147_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_fvarId_1146_);
return v___x_1148_;
}
}
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__3(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1152_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__2));
v___x_1153_ = lean_unsigned_to_nat(15u);
v___x_1154_ = lean_unsigned_to_nat(128u);
v___x_1155_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1156_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1157_ = l_mkPanicMessageWithDecl(v___x_1156_, v___x_1155_, v___x_1154_, v___x_1153_, v___x_1152_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt(lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
if (lean_obj_tag(v_a_1158_) == 1)
{
lean_object* v_info_1163_; lean_object* v_code_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1200_; 
v_info_1163_ = lean_ctor_get(v_a_1158_, 0);
v_code_1164_ = lean_ctor_get(v_a_1158_, 1);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_a_1158_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1166_ = v_a_1158_;
v_isShared_1167_ = v_isSharedCheck_1200_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_code_1164_);
lean_inc(v_info_1163_);
lean_dec(v_a_1158_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1200_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_IR_ToIR_lowerCode(v_code_1164_, v_a_1159_, v_a_1160_, v_a_1161_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1191_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1171_ = v___x_1168_;
v_isShared_1172_ = v_isSharedCheck_1191_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1168_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1191_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v_name_1173_; lean_object* v_cidx_1174_; lean_object* v_size_1175_; lean_object* v_usize_1176_; lean_object* v_ssize_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1190_; 
v_name_1173_ = lean_ctor_get(v_info_1163_, 0);
v_cidx_1174_ = lean_ctor_get(v_info_1163_, 1);
v_size_1175_ = lean_ctor_get(v_info_1163_, 2);
v_usize_1176_ = lean_ctor_get(v_info_1163_, 3);
v_ssize_1177_ = lean_ctor_get(v_info_1163_, 4);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_info_1163_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1179_ = v_info_1163_;
v_isShared_1180_ = v_isSharedCheck_1190_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_ssize_1177_);
lean_inc(v_usize_1176_);
lean_inc(v_size_1175_);
lean_inc(v_cidx_1174_);
lean_inc(v_name_1173_);
lean_dec(v_info_1163_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1190_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_name_1173_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_cidx_1174_);
lean_ctor_set(v_reuseFailAlloc_1189_, 2, v_size_1175_);
lean_ctor_set(v_reuseFailAlloc_1189_, 3, v_usize_1176_);
lean_ctor_set(v_reuseFailAlloc_1189_, 4, v_ssize_1177_);
v___x_1182_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
lean_object* v___x_1184_; 
if (v_isShared_1167_ == 0)
{
lean_ctor_set_tag(v___x_1166_, 0);
lean_ctor_set(v___x_1166_, 1, v_a_1169_);
lean_ctor_set(v___x_1166_, 0, v___x_1182_);
v___x_1184_ = v___x_1166_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_a_1169_);
v___x_1184_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1186_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v___x_1184_);
v___x_1186_ = v___x_1171_;
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
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_del_object(v___x_1166_);
lean_dec_ref(v_info_1163_);
v_a_1192_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1168_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1168_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
else
{
lean_object* v_code_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1225_; 
v_code_1201_ = lean_ctor_get(v_a_1158_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_a_1158_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1203_ = v_a_1158_;
v_isShared_1204_ = v_isSharedCheck_1225_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_code_1201_);
lean_dec(v_a_1158_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1225_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_IR_ToIR_lowerCode(v_code_1201_, v_a_1159_, v_a_1160_, v_a_1161_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1216_; 
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1208_ = v___x_1205_;
v_isShared_1209_ = v_isSharedCheck_1216_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1205_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1216_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1204_ == 0)
{
lean_ctor_set_tag(v___x_1203_, 1);
lean_ctor_set(v___x_1203_, 0, v_a_1206_);
v___x_1211_ = v___x_1203_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1213_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v___x_1211_);
v___x_1213_ = v___x_1208_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1211_);
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
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_del_object(v___x_1203_);
v_a_1217_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1205_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1205_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(size_t v_sz_1226_, size_t v_i_1227_, lean_object* v_bs_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
uint8_t v___x_1233_; 
v___x_1233_ = lean_usize_dec_lt(v_i_1227_, v_sz_1226_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = l_unsafeCast___redArg(v_bs_1228_);
lean_dec_ref(v_bs_1228_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
else
{
lean_object* v_v_1236_; lean_object* v___x_1237_; lean_object* v_bs_x27_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v_v_1236_ = lean_array_uget(v_bs_1228_, v_i_1227_);
v___x_1237_ = lean_unsigned_to_nat(0u);
v_bs_x27_1238_ = lean_array_uset(v_bs_1228_, v_i_1227_, v___x_1237_);
v___x_1239_ = l_unsafeCast___redArg(v_v_1236_);
lean_dec(v_v_1236_);
v___x_1240_ = l_Lean_IR_ToIR_lowerAlt(v___x_1239_, v___y_1229_, v___y_1230_, v___y_1231_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; size_t v___x_1242_; size_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v___x_1242_ = ((size_t)1ULL);
v___x_1243_ = lean_usize_add(v_i_1227_, v___x_1242_);
v___x_1244_ = l_unsafeCast___redArg(v_a_1241_);
lean_dec(v_a_1241_);
v___x_1245_ = lean_array_uset(v_bs_x27_1238_, v_i_1227_, v___x_1244_);
v_i_1227_ = v___x_1243_;
v_bs_1228_ = v___x_1245_;
goto _start;
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec_ref(v_bs_x27_1238_);
v_a_1247_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1240_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1240_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4___boxed(lean_object* v_sz_1255_, lean_object* v_i_1256_, lean_object* v_bs_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
size_t v_sz_boxed_1262_; size_t v_i_boxed_1263_; lean_object* v_res_1264_; 
v_sz_boxed_1262_ = lean_unbox_usize(v_sz_1255_);
lean_dec(v_sz_1255_);
v_i_boxed_1263_ = lean_unbox_usize(v_i_1256_);
lean_dec(v_i_1256_);
v_res_1264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(v_sz_boxed_1262_, v_i_boxed_1263_, v_bs_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
return v_res_1264_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__5(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1266_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1267_ = lean_unsigned_to_nat(53u);
v___x_1268_ = lean_unsigned_to_nat(95u);
v___x_1269_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1270_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1271_ = l_mkPanicMessageWithDecl(v___x_1270_, v___x_1269_, v___x_1268_, v___x_1267_, v___x_1266_);
return v___x_1271_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__6(void){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1272_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1273_ = lean_unsigned_to_nat(44u);
v___x_1274_ = lean_unsigned_to_nat(106u);
v___x_1275_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1276_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1277_ = l_mkPanicMessageWithDecl(v___x_1276_, v___x_1275_, v___x_1274_, v___x_1273_, v___x_1272_);
return v___x_1277_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__7(void){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1278_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1279_ = lean_unsigned_to_nat(44u);
v___x_1280_ = lean_unsigned_to_nat(114u);
v___x_1281_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1282_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1283_ = l_mkPanicMessageWithDecl(v___x_1282_, v___x_1281_, v___x_1280_, v___x_1279_, v___x_1278_);
return v___x_1283_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__8(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1284_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1285_ = lean_unsigned_to_nat(34u);
v___x_1286_ = lean_unsigned_to_nat(113u);
v___x_1287_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1288_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1289_ = l_mkPanicMessageWithDecl(v___x_1288_, v___x_1287_, v___x_1286_, v___x_1285_, v___x_1284_);
return v___x_1289_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__9(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1290_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1291_ = lean_unsigned_to_nat(44u);
v___x_1292_ = lean_unsigned_to_nat(110u);
v___x_1293_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1294_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1295_ = l_mkPanicMessageWithDecl(v___x_1294_, v___x_1293_, v___x_1292_, v___x_1291_, v___x_1290_);
return v___x_1295_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__10(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1296_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1297_ = lean_unsigned_to_nat(34u);
v___x_1298_ = lean_unsigned_to_nat(109u);
v___x_1299_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1300_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1301_ = l_mkPanicMessageWithDecl(v___x_1300_, v___x_1299_, v___x_1298_, v___x_1297_, v___x_1296_);
return v___x_1301_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__11(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1302_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1303_ = lean_unsigned_to_nat(41u);
v___x_1304_ = lean_unsigned_to_nat(117u);
v___x_1305_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1306_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1307_ = l_mkPanicMessageWithDecl(v___x_1306_, v___x_1305_, v___x_1304_, v___x_1303_, v___x_1302_);
return v___x_1307_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__12(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1308_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1309_ = lean_unsigned_to_nat(41u);
v___x_1310_ = lean_unsigned_to_nat(120u);
v___x_1311_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1312_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1313_ = l_mkPanicMessageWithDecl(v___x_1312_, v___x_1311_, v___x_1310_, v___x_1309_, v___x_1308_);
return v___x_1313_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__13(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1314_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1315_ = lean_unsigned_to_nat(41u);
v___x_1316_ = lean_unsigned_to_nat(123u);
v___x_1317_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1318_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1319_ = l_mkPanicMessageWithDecl(v___x_1318_, v___x_1317_, v___x_1316_, v___x_1315_, v___x_1314_);
return v___x_1319_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__14(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1320_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__4));
v___x_1321_ = lean_unsigned_to_nat(41u);
v___x_1322_ = lean_unsigned_to_nat(126u);
v___x_1323_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__1));
v___x_1324_ = ((lean_object*)(l_Lean_IR_ToIR_lowerCode___closed__0));
v___x_1325_ = l_mkPanicMessageWithDecl(v___x_1324_, v___x_1323_, v___x_1322_, v___x_1321_, v___x_1320_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode(lean_object* v_c_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
switch(lean_obj_tag(v_c_1326_))
{
case 0:
{
lean_object* v_decl_1331_; lean_object* v_k_1332_; lean_object* v___x_1333_; 
v_decl_1331_ = lean_ctor_get(v_c_1326_, 0);
lean_inc_ref(v_decl_1331_);
v_k_1332_ = lean_ctor_get(v_c_1326_, 1);
lean_inc_ref(v_k_1332_);
lean_dec_ref_known(v_c_1326_, 2);
v___x_1333_ = l_Lean_IR_ToIR_lowerLet(v_decl_1331_, v_k_1332_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1333_;
}
case 1:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec_ref_known(v_c_1326_, 2);
v___x_1334_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__3, &l_Lean_IR_ToIR_lowerCode___closed__3_once, _init_l_Lean_IR_ToIR_lowerCode___closed__3);
v___x_1335_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1334_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1335_;
}
case 2:
{
lean_object* v_decl_1336_; lean_object* v_k_1337_; lean_object* v_fvarId_1338_; lean_object* v_params_1339_; lean_object* v_value_1340_; lean_object* v___x_1341_; 
v_decl_1336_ = lean_ctor_get(v_c_1326_, 0);
lean_inc_ref(v_decl_1336_);
v_k_1337_ = lean_ctor_get(v_c_1326_, 1);
lean_inc_ref(v_k_1337_);
lean_dec_ref_known(v_c_1326_, 2);
v_fvarId_1338_ = lean_ctor_get(v_decl_1336_, 0);
lean_inc(v_fvarId_1338_);
v_params_1339_ = lean_ctor_get(v_decl_1336_, 2);
lean_inc_ref(v_params_1339_);
v_value_1340_ = lean_ctor_get(v_decl_1336_, 4);
lean_inc_ref(v_value_1340_);
lean_dec_ref(v_decl_1336_);
v___x_1341_ = l_Lean_IR_ToIR_bindJoinPoint___redArg(v_fvarId_1338_, v_a_1327_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; size_t v_sz_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_9082__overap_1348_; lean_object* v___x_1349_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v_sz_1343_ = lean_array_size(v_params_1339_);
v___x_1344_ = l_unsafeCast___redArg(v_params_1339_);
lean_dec_ref(v_params_1339_);
v___x_1345_ = lean_box_usize(v_sz_1343_);
v___x_1346_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1347_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___boxed), 7, 3);
lean_closure_set(v___x_1347_, 0, v___x_1345_);
lean_closure_set(v___x_1347_, 1, v___x_1346_);
lean_closure_set(v___x_1347_, 2, v___x_1344_);
v___x_9082__overap_1348_ = l_unsafeCast___redArg(v___x_1347_);
lean_dec_ref(v___x_1347_);
lean_inc(v_a_1329_);
lean_inc_ref(v_a_1328_);
lean_inc(v_a_1327_);
v___x_1349_ = lean_apply_4(v___x_9082__overap_1348_, v_a_1327_, v_a_1328_, v_a_1329_, lean_box(0));
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1351_; 
v_a_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_a_1350_);
lean_dec_ref_known(v___x_1349_, 1);
v___x_1351_ = l_Lean_IR_ToIR_lowerCode(v_value_1340_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; lean_object* v___x_1353_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_a_1352_);
lean_dec_ref_known(v___x_1351_, 1);
v___x_1353_ = l_Lean_IR_ToIR_lowerCode(v_k_1337_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1362_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1356_ = v___x_1353_;
v_isShared_1357_ = v_isSharedCheck_1362_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v___x_1353_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1362_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; lean_object* v___x_1360_; 
v___x_1358_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1358_, 0, v_a_1342_);
lean_ctor_set(v___x_1358_, 1, v_a_1350_);
lean_ctor_set(v___x_1358_, 2, v_a_1352_);
lean_ctor_set(v___x_1358_, 3, v_a_1354_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 0, v___x_1358_);
v___x_1360_ = v___x_1356_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
else
{
lean_dec(v_a_1352_);
lean_dec(v_a_1350_);
lean_dec(v_a_1342_);
return v___x_1353_;
}
}
else
{
lean_dec(v_a_1350_);
lean_dec(v_a_1342_);
lean_dec_ref(v_k_1337_);
return v___x_1351_;
}
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec(v_a_1342_);
lean_dec_ref(v_value_1340_);
lean_dec_ref(v_k_1337_);
v_a_1363_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1349_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1349_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
lean_dec_ref(v_value_1340_);
lean_dec_ref(v_params_1339_);
lean_dec_ref(v_k_1337_);
v_a_1371_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1341_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1341_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_1379_; lean_object* v_args_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1420_; 
v_fvarId_1379_ = lean_ctor_get(v_c_1326_, 0);
v_args_1380_ = lean_ctor_get(v_c_1326_, 1);
v_isSharedCheck_1420_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1382_ = v_c_1326_;
v_isShared_1383_ = v_isSharedCheck_1420_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_args_1380_);
lean_inc(v_fvarId_1379_);
lean_dec(v_c_1326_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1420_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_Lean_IR_ToIR_getJoinPointValue___redArg(v_fvarId_1379_, v_a_1327_);
lean_dec(v_fvarId_1379_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; size_t v_sz_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_9086__overap_1391_; lean_object* v___x_1392_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v_sz_1386_ = lean_array_size(v_args_1380_);
v___x_1387_ = l_unsafeCast___redArg(v_args_1380_);
lean_dec_ref(v_args_1380_);
v___x_1388_ = lean_box_usize(v_sz_1386_);
v___x_1389_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1390_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed), 7, 3);
lean_closure_set(v___x_1390_, 0, v___x_1388_);
lean_closure_set(v___x_1390_, 1, v___x_1389_);
lean_closure_set(v___x_1390_, 2, v___x_1387_);
v___x_9086__overap_1391_ = l_unsafeCast___redArg(v___x_1390_);
lean_dec_ref(v___x_1390_);
lean_inc(v_a_1329_);
lean_inc_ref(v_a_1328_);
lean_inc(v_a_1327_);
v___x_1392_ = lean_apply_4(v___x_9086__overap_1391_, v_a_1327_, v_a_1328_, v_a_1329_, lean_box(0));
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1403_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 11);
lean_ctor_set(v___x_1382_, 1, v_a_1393_);
lean_ctor_set(v___x_1382_, 0, v_a_1385_);
v___x_1398_ = v___x_1382_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1385_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1400_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1398_);
v___x_1400_ = v___x_1395_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_a_1385_);
lean_del_object(v___x_1382_);
v_a_1404_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1392_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1392_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_del_object(v___x_1382_);
lean_dec_ref(v_args_1380_);
v_a_1412_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1384_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1384_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
}
case 4:
{
lean_object* v_cases_1421_; lean_object* v_typeName_1422_; lean_object* v_discr_1423_; lean_object* v_alts_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1468_; 
v_cases_1421_ = lean_ctor_get(v_c_1326_, 0);
lean_inc_ref(v_cases_1421_);
lean_dec_ref_known(v_c_1326_, 1);
v_typeName_1422_ = lean_ctor_get(v_cases_1421_, 0);
v_discr_1423_ = lean_ctor_get(v_cases_1421_, 2);
v_alts_1424_ = lean_ctor_get(v_cases_1421_, 3);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_cases_1421_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; 
v_unused_1469_ = lean_ctor_get(v_cases_1421_, 1);
lean_dec(v_unused_1469_);
v___x_1426_ = v_cases_1421_;
v_isShared_1427_ = v_isSharedCheck_1468_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_alts_1424_);
lean_inc(v_discr_1423_);
lean_inc(v_typeName_1422_);
lean_dec(v_cases_1421_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1468_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_discr_1423_, v_a_1327_);
lean_dec(v_discr_1423_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
if (lean_obj_tag(v_a_1429_) == 0)
{
lean_object* v_id_1430_; size_t v_sz_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_9090__overap_1436_; lean_object* v___x_1437_; 
v_id_1430_ = lean_ctor_get(v_a_1429_, 0);
lean_inc(v_id_1430_);
lean_dec_ref_known(v_a_1429_, 1);
v_sz_1431_ = lean_array_size(v_alts_1424_);
v___x_1432_ = l_unsafeCast___redArg(v_alts_1424_);
lean_dec_ref(v_alts_1424_);
v___x_1433_ = lean_box_usize(v_sz_1431_);
v___x_1434_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1435_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4___boxed), 7, 3);
lean_closure_set(v___x_1435_, 0, v___x_1433_);
lean_closure_set(v___x_1435_, 1, v___x_1434_);
lean_closure_set(v___x_1435_, 2, v___x_1432_);
v___x_9090__overap_1436_ = l_unsafeCast___redArg(v___x_1435_);
lean_dec_ref(v___x_1435_);
lean_inc(v_a_1329_);
lean_inc_ref(v_a_1328_);
lean_inc(v_a_1327_);
v___x_1437_ = lean_apply_4(v___x_9090__overap_1436_, v_a_1327_, v_a_1328_, v_a_1329_, lean_box(0));
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1449_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1440_ = v___x_1437_;
v_isShared_1441_ = v_isSharedCheck_1449_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1437_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1449_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1442_; lean_object* v___x_1444_; 
v___x_1442_ = l_Lean_IR_nameToIRType(v_typeName_1422_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set_tag(v___x_1426_, 9);
lean_ctor_set(v___x_1426_, 3, v_a_1438_);
lean_ctor_set(v___x_1426_, 2, v___x_1442_);
lean_ctor_set(v___x_1426_, 1, v_id_1430_);
v___x_1444_ = v___x_1426_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_typeName_1422_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_id_1430_);
lean_ctor_set(v_reuseFailAlloc_1448_, 2, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1448_, 3, v_a_1438_);
v___x_1444_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
lean_object* v___x_1446_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 0, v___x_1444_);
v___x_1446_ = v___x_1440_;
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
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v_id_1430_);
lean_del_object(v___x_1426_);
lean_dec(v_typeName_1422_);
v_a_1450_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1437_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1437_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
lean_dec(v_a_1429_);
lean_del_object(v___x_1426_);
lean_dec_ref(v_alts_1424_);
lean_dec(v_typeName_1422_);
v___x_1458_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__5, &l_Lean_IR_ToIR_lowerCode___closed__5_once, _init_l_Lean_IR_ToIR_lowerCode___closed__5);
v___x_1459_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1458_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1459_;
}
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
lean_del_object(v___x_1426_);
lean_dec_ref(v_alts_1424_);
lean_dec(v_typeName_1422_);
v_a_1460_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1428_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1428_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
case 5:
{
lean_object* v_fvarId_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1494_; 
v_fvarId_1470_ = lean_ctor_get(v_c_1326_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1472_ = v_c_1326_;
v_isShared_1473_ = v_isSharedCheck_1494_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_fvarId_1470_);
lean_dec(v_c_1326_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1494_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1470_, v_a_1327_);
lean_dec(v_fvarId_1470_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1485_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1477_ = v___x_1474_;
v_isShared_1478_ = v_isSharedCheck_1485_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1485_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set_tag(v___x_1472_, 10);
lean_ctor_set(v___x_1472_, 0, v_a_1475_);
v___x_1480_ = v___x_1472_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1482_; 
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1480_);
v___x_1482_ = v___x_1477_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_del_object(v___x_1472_);
v_a_1486_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1474_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1474_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
}
case 6:
{
lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1502_; 
v_isSharedCheck_1502_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v_c_1326_, 0);
lean_dec(v_unused_1503_);
v___x_1496_ = v_c_1326_;
v_isShared_1497_ = v_isSharedCheck_1502_;
goto v_resetjp_1495_;
}
else
{
lean_dec(v_c_1326_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1502_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___x_1498_ = lean_box(12);
if (v_isShared_1497_ == 0)
{
lean_ctor_set_tag(v___x_1496_, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1498_);
v___x_1500_ = v___x_1496_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
case 7:
{
lean_object* v_fvarId_1504_; lean_object* v_i_1505_; lean_object* v_y_1506_; lean_object* v_k_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1546_; 
v_fvarId_1504_ = lean_ctor_get(v_c_1326_, 0);
v_i_1505_ = lean_ctor_get(v_c_1326_, 1);
v_y_1506_ = lean_ctor_get(v_c_1326_, 2);
v_k_1507_ = lean_ctor_get(v_c_1326_, 3);
v_isSharedCheck_1546_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1509_ = v_c_1326_;
v_isShared_1510_ = v_isSharedCheck_1546_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_k_1507_);
lean_inc(v_y_1506_);
lean_inc(v_i_1505_);
lean_inc(v_fvarId_1504_);
lean_dec(v_c_1326_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1546_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lean_IR_ToIR_lowerArg___redArg(v_y_1506_, v_a_1327_);
lean_dec(v_y_1506_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; lean_object* v___x_1513_; 
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1513_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1504_, v_a_1327_);
lean_dec(v_fvarId_1504_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v___x_1513_, 1);
if (lean_obj_tag(v_a_1514_) == 0)
{
lean_object* v_id_1515_; lean_object* v___x_1516_; 
v_id_1515_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_id_1515_);
lean_dec_ref_known(v_a_1514_, 1);
v___x_1516_ = l_Lean_IR_ToIR_lowerCode(v_k_1507_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1527_; 
v_a_1517_ = lean_ctor_get(v___x_1516_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1516_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1519_ = v___x_1516_;
v_isShared_1520_ = v_isSharedCheck_1527_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1516_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1527_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 2);
lean_ctor_set(v___x_1509_, 3, v_a_1517_);
lean_ctor_set(v___x_1509_, 2, v_a_1512_);
lean_ctor_set(v___x_1509_, 0, v_id_1515_);
v___x_1522_ = v___x_1509_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_id_1515_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v_i_1505_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v_a_1512_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1524_; 
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1522_);
v___x_1524_ = v___x_1519_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
else
{
lean_dec(v_id_1515_);
lean_dec(v_a_1512_);
lean_del_object(v___x_1509_);
lean_dec(v_i_1505_);
return v___x_1516_;
}
}
else
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec(v_a_1514_);
lean_dec(v_a_1512_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_k_1507_);
lean_dec(v_i_1505_);
v___x_1528_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__6, &l_Lean_IR_ToIR_lowerCode___closed__6_once, _init_l_Lean_IR_ToIR_lowerCode___closed__6);
v___x_1529_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1528_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1529_;
}
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
lean_dec(v_a_1512_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_k_1507_);
lean_dec(v_i_1505_);
v_a_1530_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1513_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1513_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_del_object(v___x_1509_);
lean_dec_ref(v_k_1507_);
lean_dec(v_i_1505_);
lean_dec(v_fvarId_1504_);
v_a_1538_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1511_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1511_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
case 8:
{
lean_object* v_fvarId_1547_; lean_object* v_i_1548_; lean_object* v_y_1549_; lean_object* v_k_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1592_; 
v_fvarId_1547_ = lean_ctor_get(v_c_1326_, 0);
v_i_1548_ = lean_ctor_get(v_c_1326_, 1);
v_y_1549_ = lean_ctor_get(v_c_1326_, 2);
v_k_1550_ = lean_ctor_get(v_c_1326_, 3);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1552_ = v_c_1326_;
v_isShared_1553_ = v_isSharedCheck_1592_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_k_1550_);
lean_inc(v_y_1549_);
lean_inc(v_i_1548_);
lean_inc(v_fvarId_1547_);
lean_dec(v_c_1326_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1592_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_y_1549_, v_a_1327_);
lean_dec(v_y_1549_);
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v_a_1555_; 
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
lean_inc(v_a_1555_);
lean_dec_ref_known(v___x_1554_, 1);
if (lean_obj_tag(v_a_1555_) == 0)
{
lean_object* v_id_1556_; lean_object* v___x_1557_; 
v_id_1556_ = lean_ctor_get(v_a_1555_, 0);
lean_inc(v_id_1556_);
lean_dec_ref_known(v_a_1555_, 1);
v___x_1557_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1547_, v_a_1327_);
lean_dec(v_fvarId_1547_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
if (lean_obj_tag(v_a_1558_) == 0)
{
lean_object* v_id_1559_; lean_object* v___x_1560_; 
v_id_1559_ = lean_ctor_get(v_a_1558_, 0);
lean_inc(v_id_1559_);
lean_dec_ref_known(v_a_1558_, 1);
v___x_1560_ = l_Lean_IR_ToIR_lowerCode(v_k_1550_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1571_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1563_ = v___x_1560_;
v_isShared_1564_ = v_isSharedCheck_1571_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1560_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1571_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1553_ == 0)
{
lean_ctor_set_tag(v___x_1552_, 4);
lean_ctor_set(v___x_1552_, 3, v_a_1561_);
lean_ctor_set(v___x_1552_, 2, v_id_1556_);
lean_ctor_set(v___x_1552_, 0, v_id_1559_);
v___x_1566_ = v___x_1552_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_id_1559_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_i_1548_);
lean_ctor_set(v_reuseFailAlloc_1570_, 2, v_id_1556_);
lean_ctor_set(v_reuseFailAlloc_1570_, 3, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1568_; 
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 0, v___x_1566_);
v___x_1568_ = v___x_1563_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1566_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
else
{
lean_dec(v_id_1559_);
lean_dec(v_id_1556_);
lean_del_object(v___x_1552_);
lean_dec(v_i_1548_);
return v___x_1560_;
}
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_a_1558_);
lean_dec(v_id_1556_);
lean_del_object(v___x_1552_);
lean_dec_ref(v_k_1550_);
lean_dec(v_i_1548_);
v___x_1572_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__7, &l_Lean_IR_ToIR_lowerCode___closed__7_once, _init_l_Lean_IR_ToIR_lowerCode___closed__7);
v___x_1573_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1572_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1573_;
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec(v_id_1556_);
lean_del_object(v___x_1552_);
lean_dec_ref(v_k_1550_);
lean_dec(v_i_1548_);
v_a_1574_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1557_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1557_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
else
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v_a_1555_);
lean_del_object(v___x_1552_);
lean_dec_ref(v_k_1550_);
lean_dec(v_i_1548_);
lean_dec(v_fvarId_1547_);
v___x_1582_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__8, &l_Lean_IR_ToIR_lowerCode___closed__8_once, _init_l_Lean_IR_ToIR_lowerCode___closed__8);
v___x_1583_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1582_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1583_;
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
lean_del_object(v___x_1552_);
lean_dec_ref(v_k_1550_);
lean_dec(v_i_1548_);
lean_dec(v_fvarId_1547_);
v_a_1584_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1554_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1554_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
}
case 9:
{
lean_object* v_fvarId_1593_; lean_object* v_i_1594_; lean_object* v_offset_1595_; lean_object* v_y_1596_; lean_object* v_ty_1597_; lean_object* v_k_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1641_; 
v_fvarId_1593_ = lean_ctor_get(v_c_1326_, 0);
v_i_1594_ = lean_ctor_get(v_c_1326_, 1);
v_offset_1595_ = lean_ctor_get(v_c_1326_, 2);
v_y_1596_ = lean_ctor_get(v_c_1326_, 3);
v_ty_1597_ = lean_ctor_get(v_c_1326_, 4);
v_k_1598_ = lean_ctor_get(v_c_1326_, 5);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1600_ = v_c_1326_;
v_isShared_1601_ = v_isSharedCheck_1641_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_k_1598_);
lean_inc(v_ty_1597_);
lean_inc(v_y_1596_);
lean_inc(v_offset_1595_);
lean_inc(v_i_1594_);
lean_inc(v_fvarId_1593_);
lean_dec(v_c_1326_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1641_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1602_; 
v___x_1602_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_y_1596_, v_a_1327_);
lean_dec(v_y_1596_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
if (lean_obj_tag(v_a_1603_) == 0)
{
lean_object* v_id_1604_; lean_object* v___x_1605_; 
v_id_1604_ = lean_ctor_get(v_a_1603_, 0);
lean_inc(v_id_1604_);
lean_dec_ref_known(v_a_1603_, 1);
v___x_1605_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1593_, v_a_1327_);
lean_dec(v_fvarId_1593_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
if (lean_obj_tag(v_a_1606_) == 0)
{
lean_object* v_id_1607_; lean_object* v___x_1608_; 
v_id_1607_ = lean_ctor_get(v_a_1606_, 0);
lean_inc(v_id_1607_);
lean_dec_ref_known(v_a_1606_, 1);
v___x_1608_ = l_Lean_IR_ToIR_lowerCode(v_k_1598_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1620_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1611_ = v___x_1608_;
v_isShared_1612_ = v_isSharedCheck_1620_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1608_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1620_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1613_ = l_Lean_IR_toIRType(v_ty_1597_);
lean_dec_ref(v_ty_1597_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set_tag(v___x_1600_, 5);
lean_ctor_set(v___x_1600_, 5, v_a_1609_);
lean_ctor_set(v___x_1600_, 4, v___x_1613_);
lean_ctor_set(v___x_1600_, 3, v_id_1604_);
lean_ctor_set(v___x_1600_, 0, v_id_1607_);
v___x_1615_ = v___x_1600_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_id_1607_);
lean_ctor_set(v_reuseFailAlloc_1619_, 1, v_i_1594_);
lean_ctor_set(v_reuseFailAlloc_1619_, 2, v_offset_1595_);
lean_ctor_set(v_reuseFailAlloc_1619_, 3, v_id_1604_);
lean_ctor_set(v_reuseFailAlloc_1619_, 4, v___x_1613_);
lean_ctor_set(v_reuseFailAlloc_1619_, 5, v_a_1609_);
v___x_1615_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
lean_object* v___x_1617_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v___x_1615_);
v___x_1617_ = v___x_1611_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
else
{
lean_dec(v_id_1607_);
lean_dec(v_id_1604_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_ty_1597_);
lean_dec(v_offset_1595_);
lean_dec(v_i_1594_);
return v___x_1608_;
}
}
else
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
lean_dec(v_a_1606_);
lean_dec(v_id_1604_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_k_1598_);
lean_dec_ref(v_ty_1597_);
lean_dec(v_offset_1595_);
lean_dec(v_i_1594_);
v___x_1621_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__9, &l_Lean_IR_ToIR_lowerCode___closed__9_once, _init_l_Lean_IR_ToIR_lowerCode___closed__9);
v___x_1622_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1621_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1622_;
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
lean_dec(v_id_1604_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_k_1598_);
lean_dec_ref(v_ty_1597_);
lean_dec(v_offset_1595_);
lean_dec(v_i_1594_);
v_a_1623_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1605_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1605_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
else
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
lean_dec(v_a_1603_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_k_1598_);
lean_dec_ref(v_ty_1597_);
lean_dec(v_offset_1595_);
lean_dec(v_i_1594_);
lean_dec(v_fvarId_1593_);
v___x_1631_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__10, &l_Lean_IR_ToIR_lowerCode___closed__10_once, _init_l_Lean_IR_ToIR_lowerCode___closed__10);
v___x_1632_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1631_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1632_;
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_del_object(v___x_1600_);
lean_dec_ref(v_k_1598_);
lean_dec_ref(v_ty_1597_);
lean_dec(v_offset_1595_);
lean_dec(v_i_1594_);
lean_dec(v_fvarId_1593_);
v_a_1633_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1602_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1602_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
}
case 10:
{
lean_object* v_fvarId_1642_; lean_object* v_cidx_1643_; lean_object* v_k_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1673_; 
v_fvarId_1642_ = lean_ctor_get(v_c_1326_, 0);
v_cidx_1643_ = lean_ctor_get(v_c_1326_, 1);
v_k_1644_ = lean_ctor_get(v_c_1326_, 2);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1646_ = v_c_1326_;
v_isShared_1647_ = v_isSharedCheck_1673_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_k_1644_);
lean_inc(v_cidx_1643_);
lean_inc(v_fvarId_1642_);
lean_dec(v_c_1326_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1673_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1642_, v_a_1327_);
lean_dec(v_fvarId_1642_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
if (lean_obj_tag(v_a_1649_) == 0)
{
lean_object* v_id_1650_; lean_object* v___x_1651_; 
v_id_1650_ = lean_ctor_get(v_a_1649_, 0);
lean_inc(v_id_1650_);
lean_dec_ref_known(v_a_1649_, 1);
v___x_1651_ = l_Lean_IR_ToIR_lowerCode(v_k_1644_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1662_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1654_ = v___x_1651_;
v_isShared_1655_ = v_isSharedCheck_1662_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1651_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1662_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set_tag(v___x_1646_, 3);
lean_ctor_set(v___x_1646_, 2, v_a_1652_);
lean_ctor_set(v___x_1646_, 0, v_id_1650_);
v___x_1657_ = v___x_1646_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_id_1650_);
lean_ctor_set(v_reuseFailAlloc_1661_, 1, v_cidx_1643_);
lean_ctor_set(v_reuseFailAlloc_1661_, 2, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
lean_object* v___x_1659_; 
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 0, v___x_1657_);
v___x_1659_ = v___x_1654_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1657_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
else
{
lean_dec(v_id_1650_);
lean_del_object(v___x_1646_);
lean_dec(v_cidx_1643_);
return v___x_1651_;
}
}
else
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_dec(v_a_1649_);
lean_del_object(v___x_1646_);
lean_dec_ref(v_k_1644_);
lean_dec(v_cidx_1643_);
v___x_1663_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__11, &l_Lean_IR_ToIR_lowerCode___closed__11_once, _init_l_Lean_IR_ToIR_lowerCode___closed__11);
v___x_1664_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1663_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1664_;
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
lean_del_object(v___x_1646_);
lean_dec_ref(v_k_1644_);
lean_dec(v_cidx_1643_);
v_a_1665_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1648_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1648_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
case 11:
{
lean_object* v_fvarId_1674_; lean_object* v_n_1675_; uint8_t v_check_1676_; uint8_t v_persistent_1677_; lean_object* v_k_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1707_; 
v_fvarId_1674_ = lean_ctor_get(v_c_1326_, 0);
v_n_1675_ = lean_ctor_get(v_c_1326_, 1);
v_check_1676_ = lean_ctor_get_uint8(v_c_1326_, sizeof(void*)*3);
v_persistent_1677_ = lean_ctor_get_uint8(v_c_1326_, sizeof(void*)*3 + 1);
v_k_1678_ = lean_ctor_get(v_c_1326_, 2);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1680_ = v_c_1326_;
v_isShared_1681_ = v_isSharedCheck_1707_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_k_1678_);
lean_inc(v_n_1675_);
lean_inc(v_fvarId_1674_);
lean_dec(v_c_1326_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1707_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1674_, v_a_1327_);
lean_dec(v_fvarId_1674_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v___x_1682_, 1);
if (lean_obj_tag(v_a_1683_) == 0)
{
lean_object* v_id_1684_; lean_object* v___x_1685_; 
v_id_1684_ = lean_ctor_get(v_a_1683_, 0);
lean_inc(v_id_1684_);
lean_dec_ref_known(v_a_1683_, 1);
v___x_1685_ = l_Lean_IR_ToIR_lowerCode(v_k_1678_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1696_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1696_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1696_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 6);
lean_ctor_set(v___x_1680_, 2, v_a_1686_);
lean_ctor_set(v___x_1680_, 0, v_id_1684_);
v___x_1691_ = v___x_1680_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_id_1684_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v_n_1675_);
lean_ctor_set(v_reuseFailAlloc_1695_, 2, v_a_1686_);
lean_ctor_set_uint8(v_reuseFailAlloc_1695_, sizeof(void*)*3, v_check_1676_);
lean_ctor_set_uint8(v_reuseFailAlloc_1695_, sizeof(void*)*3 + 1, v_persistent_1677_);
v___x_1691_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
lean_object* v___x_1693_; 
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1691_);
v___x_1693_ = v___x_1688_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
else
{
lean_dec(v_id_1684_);
lean_del_object(v___x_1680_);
lean_dec(v_n_1675_);
return v___x_1685_;
}
}
else
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec(v_a_1683_);
lean_del_object(v___x_1680_);
lean_dec_ref(v_k_1678_);
lean_dec(v_n_1675_);
v___x_1697_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__12, &l_Lean_IR_ToIR_lowerCode___closed__12_once, _init_l_Lean_IR_ToIR_lowerCode___closed__12);
v___x_1698_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1697_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1698_;
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
lean_del_object(v___x_1680_);
lean_dec_ref(v_k_1678_);
lean_dec(v_n_1675_);
v_a_1699_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1682_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1682_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
case 12:
{
lean_object* v_fvarId_1708_; lean_object* v_n_1709_; uint8_t v_check_1710_; uint8_t v_persistent_1711_; lean_object* v_k_1712_; lean_object* v___x_1713_; 
v_fvarId_1708_ = lean_ctor_get(v_c_1326_, 0);
lean_inc(v_fvarId_1708_);
v_n_1709_ = lean_ctor_get(v_c_1326_, 1);
lean_inc(v_n_1709_);
v_check_1710_ = lean_ctor_get_uint8(v_c_1326_, sizeof(void*)*4);
v_persistent_1711_ = lean_ctor_get_uint8(v_c_1326_, sizeof(void*)*4 + 1);
v_k_1712_ = lean_ctor_get(v_c_1326_, 3);
lean_inc_ref(v_k_1712_);
lean_dec_ref_known(v_c_1326_, 4);
v___x_1713_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1708_, v_a_1327_);
lean_dec(v_fvarId_1708_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
lean_inc(v_a_1714_);
lean_dec_ref_known(v___x_1713_, 1);
if (lean_obj_tag(v_a_1714_) == 0)
{
lean_object* v_id_1715_; lean_object* v___x_1716_; 
v_id_1715_ = lean_ctor_get(v_a_1714_, 0);
lean_inc(v_id_1715_);
lean_dec_ref_known(v_a_1714_, 1);
v___x_1716_ = l_Lean_IR_ToIR_lowerCode(v_k_1712_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1725_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1719_ = v___x_1716_;
v_isShared_1720_ = v_isSharedCheck_1725_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1716_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1725_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1721_; lean_object* v___x_1723_; 
v___x_1721_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v___x_1721_, 0, v_id_1715_);
lean_ctor_set(v___x_1721_, 1, v_n_1709_);
lean_ctor_set(v___x_1721_, 2, v_a_1717_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*3, v_check_1710_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*3 + 1, v_persistent_1711_);
if (v_isShared_1720_ == 0)
{
lean_ctor_set(v___x_1719_, 0, v___x_1721_);
v___x_1723_ = v___x_1719_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1721_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
else
{
lean_dec(v_id_1715_);
lean_dec(v_n_1709_);
return v___x_1716_;
}
}
else
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec(v_a_1714_);
lean_dec_ref(v_k_1712_);
lean_dec(v_n_1709_);
v___x_1726_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__13, &l_Lean_IR_ToIR_lowerCode___closed__13_once, _init_l_Lean_IR_ToIR_lowerCode___closed__13);
v___x_1727_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1726_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1727_;
}
}
else
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1735_; 
lean_dec_ref(v_k_1712_);
lean_dec(v_n_1709_);
v_a_1728_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1730_ = v___x_1713_;
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1713_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
default: 
{
lean_object* v_fvarId_1736_; lean_object* v_k_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1766_; 
v_fvarId_1736_ = lean_ctor_get(v_c_1326_, 0);
v_k_1737_ = lean_ctor_get(v_c_1326_, 1);
v_isSharedCheck_1766_ = !lean_is_exclusive(v_c_1326_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1739_ = v_c_1326_;
v_isShared_1740_ = v_isSharedCheck_1766_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_k_1737_);
lean_inc(v_fvarId_1736_);
lean_dec(v_c_1326_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1766_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1736_, v_a_1327_);
lean_dec(v_fvarId_1736_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1741_, 1);
if (lean_obj_tag(v_a_1742_) == 0)
{
lean_object* v_id_1743_; lean_object* v___x_1744_; 
v_id_1743_ = lean_ctor_get(v_a_1742_, 0);
lean_inc(v_id_1743_);
lean_dec_ref_known(v_a_1742_, 1);
v___x_1744_ = l_Lean_IR_ToIR_lowerCode(v_k_1737_, v_a_1327_, v_a_1328_, v_a_1329_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1755_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1747_ = v___x_1744_;
v_isShared_1748_ = v_isSharedCheck_1755_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1744_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1755_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1740_ == 0)
{
lean_ctor_set_tag(v___x_1739_, 8);
lean_ctor_set(v___x_1739_, 1, v_a_1745_);
lean_ctor_set(v___x_1739_, 0, v_id_1743_);
v___x_1750_ = v___x_1739_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_id_1743_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
lean_object* v___x_1752_; 
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 0, v___x_1750_);
v___x_1752_ = v___x_1747_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
else
{
lean_dec(v_id_1743_);
lean_del_object(v___x_1739_);
return v___x_1744_;
}
}
else
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec(v_a_1742_);
lean_del_object(v___x_1739_);
lean_dec_ref(v_k_1737_);
v___x_1756_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__14, &l_Lean_IR_ToIR_lowerCode___closed__14_once, _init_l_Lean_IR_ToIR_lowerCode___closed__14);
v___x_1757_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1756_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1757_;
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_del_object(v___x_1739_);
lean_dec_ref(v_k_1737_);
v_a_1758_ = lean_ctor_get(v___x_1741_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1741_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1741_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(lean_object* v_decl_1767_, lean_object* v_k_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v_fvarId_1773_; lean_object* v___x_1774_; 
v_fvarId_1773_ = lean_ctor_get(v_decl_1767_, 0);
lean_inc(v_fvarId_1773_);
lean_dec_ref(v_decl_1767_);
v___x_1774_ = l_Lean_IR_ToIR_bindErased___redArg(v_fvarId_1773_, v_a_1769_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v___x_1775_; 
lean_dec_ref_known(v___x_1774_, 1);
v___x_1775_ = l_Lean_IR_ToIR_lowerCode(v_k_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
return v___x_1775_;
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_dec_ref(v_k_1768_);
v_a_1776_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1774_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1774_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg___boxed(lean_object* v_decl_1784_, lean_object* v_k_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_1784_, v_k_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
lean_dec(v_a_1788_);
lean_dec_ref(v_a_1787_);
lean_dec(v_a_1786_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue___boxed(lean_object* v_decl_1791_, lean_object* v_k_1792_, lean_object* v_fvarId_1793_, lean_object* v_f_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_1791_, v_k_1792_, v_fvarId_1793_, v_f_1794_, v_a_1795_, v_a_1796_, v_a_1797_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
lean_dec(v_a_1795_);
lean_dec(v_fvarId_1793_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt___boxed(lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_IR_ToIR_lowerAlt(v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec(v_a_1801_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___boxed(lean_object* v_decl_1806_, lean_object* v_k_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_IR_ToIR_lowerLet(v_decl_1806_, v_k_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
lean_dec(v_a_1810_);
lean_dec_ref(v_a_1809_);
lean_dec(v_a_1808_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode___boxed(lean_object* v_c_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Lean_IR_ToIR_lowerCode(v_c_1813_, v_a_1814_, v_a_1815_, v_a_1816_);
lean_dec(v_a_1816_);
lean_dec_ref(v_a_1815_);
lean_dec(v_a_1814_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased(lean_object* v_decl_1819_, lean_object* v_k_1820_, lean_object* v_x_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_1819_, v_k_1820_, v_a_1822_, v_a_1823_, v_a_1824_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___boxed(lean_object* v_decl_1827_, lean_object* v_k_1828_, lean_object* v_x_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased(v_decl_1827_, v_k_1828_, v_x_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
lean_dec(v_a_1832_);
lean_dec_ref(v_a_1831_);
lean_dec(v_a_1830_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl(lean_object* v_d_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_){
_start:
{
lean_object* v_toSignature_1840_; lean_object* v_value_1841_; lean_object* v_name_1842_; lean_object* v_type_1843_; lean_object* v_params_1844_; size_t v_sz_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_747__overap_1850_; lean_object* v___x_1851_; 
v_toSignature_1840_ = lean_ctor_get(v_d_1835_, 0);
lean_inc_ref(v_toSignature_1840_);
v_value_1841_ = lean_ctor_get(v_d_1835_, 1);
lean_inc_ref(v_value_1841_);
lean_dec_ref(v_d_1835_);
v_name_1842_ = lean_ctor_get(v_toSignature_1840_, 0);
lean_inc(v_name_1842_);
v_type_1843_ = lean_ctor_get(v_toSignature_1840_, 2);
lean_inc_ref(v_type_1843_);
v_params_1844_ = lean_ctor_get(v_toSignature_1840_, 3);
lean_inc_ref(v_params_1844_);
lean_dec_ref(v_toSignature_1840_);
v_sz_1845_ = lean_array_size(v_params_1844_);
v___x_1846_ = l_unsafeCast___redArg(v_params_1844_);
lean_dec_ref(v_params_1844_);
v___x_1847_ = lean_box_usize(v_sz_1845_);
v___x_1848_ = ((lean_object*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed__const__1));
v___x_1849_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___boxed), 7, 3);
lean_closure_set(v___x_1849_, 0, v___x_1847_);
lean_closure_set(v___x_1849_, 1, v___x_1848_);
lean_closure_set(v___x_1849_, 2, v___x_1846_);
v___x_747__overap_1850_ = l_unsafeCast___redArg(v___x_1849_);
lean_dec_ref(v___x_1849_);
lean_inc(v_a_1838_);
lean_inc_ref(v_a_1837_);
lean_inc(v_a_1836_);
v___x_1851_ = lean_apply_4(v___x_747__overap_1850_, v_a_1836_, v_a_1837_, v_a_1838_, lean_box(0));
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1908_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1854_ = v___x_1851_;
v_isShared_1855_ = v_isSharedCheck_1908_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1851_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1908_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_Lean_IR_toIRType(v_type_1843_);
lean_dec_ref(v_type_1843_);
if (lean_obj_tag(v_value_1841_) == 0)
{
lean_object* v_code_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1883_; 
lean_del_object(v___x_1854_);
v_code_1857_ = lean_ctor_get(v_value_1841_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v_value_1841_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1859_ = v_value_1841_;
v_isShared_1860_ = v_isSharedCheck_1883_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_code_1857_);
lean_dec(v_value_1841_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1883_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lean_IR_ToIR_lowerCode(v_code_1857_, v_a_1836_, v_a_1837_, v_a_1838_);
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1874_; 
v_a_1862_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1864_ = v___x_1861_;
v_isShared_1865_ = v_isSharedCheck_1874_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1861_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1874_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1866_ = lean_box(0);
v___x_1867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1867_, 0, v_name_1842_);
lean_ctor_set(v___x_1867_, 1, v_a_1852_);
lean_ctor_set(v___x_1867_, 2, v___x_1856_);
lean_ctor_set(v___x_1867_, 3, v_a_1862_);
lean_ctor_set(v___x_1867_, 4, v___x_1866_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set_tag(v___x_1859_, 1);
lean_ctor_set(v___x_1859_, 0, v___x_1867_);
v___x_1869_ = v___x_1859_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1871_; 
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 0, v___x_1869_);
v___x_1871_ = v___x_1864_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_del_object(v___x_1859_);
lean_dec(v___x_1856_);
lean_dec(v_a_1852_);
lean_dec(v_name_1842_);
v_a_1875_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1861_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1861_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
else
{
lean_object* v_externAttrData_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1907_; 
v_externAttrData_1884_ = lean_ctor_get(v_value_1841_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_value_1841_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1886_ = v_value_1841_;
v_isShared_1887_ = v_isSharedCheck_1907_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_externAttrData_1884_);
lean_dec(v_value_1841_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1907_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
uint8_t v___x_1888_; 
v___x_1888_ = l_List_isEmpty___redArg(v_externAttrData_1884_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1891_; 
v___x_1889_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1889_, 0, v_name_1842_);
lean_ctor_set(v___x_1889_, 1, v_a_1852_);
lean_ctor_set(v___x_1889_, 2, v___x_1856_);
lean_ctor_set(v___x_1889_, 3, v_externAttrData_1884_);
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 0, v___x_1889_);
v___x_1891_ = v___x_1886_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1889_);
v___x_1891_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
lean_object* v___x_1893_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v___x_1891_);
v___x_1893_ = v___x_1854_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1905_; 
lean_del_object(v___x_1886_);
lean_dec(v_externAttrData_1884_);
lean_del_object(v___x_1854_);
v___x_1896_ = l_Lean_IR_mkDummyExternDecl(v_name_1842_, v_a_1852_, v___x_1856_);
v___x_1897_ = l_Lean_IR_ToIR_addDecl___redArg(v___x_1896_, v_a_1838_);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1905_ == 0)
{
lean_object* v_unused_1906_; 
v_unused_1906_ = lean_ctor_get(v___x_1897_, 0);
lean_dec(v_unused_1906_);
v___x_1899_ = v___x_1897_;
v_isShared_1900_ = v_isSharedCheck_1905_;
goto v_resetjp_1898_;
}
else
{
lean_dec(v___x_1897_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1905_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1901_ = lean_box(0);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v___x_1901_);
v___x_1903_ = v___x_1899_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec_ref(v_type_1843_);
lean_dec(v_name_1842_);
lean_dec_ref(v_value_1841_);
v_a_1909_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1851_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1851_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl___boxed(lean_object* v_d_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lean_IR_ToIR_lowerDecl(v_d_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec(v_a_1918_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(lean_object* v_as_1923_, size_t v_sz_1924_, size_t v_i_1925_, lean_object* v_b_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_a_1931_; uint8_t v___x_1935_; 
v___x_1935_ = lean_usize_dec_lt(v_i_1925_, v_sz_1924_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_b_1926_);
return v___x_1936_;
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_a_1937_ = lean_array_uget_borrowed(v_as_1923_, v_i_1925_);
lean_inc(v_a_1937_);
v___x_1938_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerDecl___boxed), 5, 1);
lean_closure_set(v___x_1938_, 0, v_a_1937_);
v___x_1939_ = l_Lean_IR_ToIR_M_run___redArg(v___x_1938_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
if (lean_obj_tag(v_a_1940_) == 1)
{
lean_object* v_val_1941_; lean_object* v___x_1942_; 
v_val_1941_ = lean_ctor_get(v_a_1940_, 0);
lean_inc(v_val_1941_);
lean_dec_ref_known(v_a_1940_, 1);
v___x_1942_ = lean_array_push(v_b_1926_, v_val_1941_);
v_a_1931_ = v___x_1942_;
goto v___jp_1930_;
}
else
{
lean_dec(v_a_1940_);
v_a_1931_ = v_b_1926_;
goto v___jp_1930_;
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec_ref(v_b_1926_);
v_a_1943_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1939_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1939_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
v___jp_1930_:
{
size_t v___x_1932_; size_t v___x_1933_; 
v___x_1932_ = ((size_t)1ULL);
v___x_1933_ = lean_usize_add(v_i_1925_, v___x_1932_);
v_i_1925_ = v___x_1933_;
v_b_1926_ = v_a_1931_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0___boxed(lean_object* v_as_1951_, lean_object* v_sz_1952_, lean_object* v_i_1953_, lean_object* v_b_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
size_t v_sz_boxed_1958_; size_t v_i_boxed_1959_; lean_object* v_res_1960_; 
v_sz_boxed_1958_ = lean_unbox_usize(v_sz_1952_);
lean_dec(v_sz_1952_);
v_i_boxed_1959_ = lean_unbox_usize(v_i_1953_);
lean_dec(v_i_1953_);
v_res_1960_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(v_as_1951_, v_sz_boxed_1958_, v_i_boxed_1959_, v_b_1954_, v___y_1955_, v___y_1956_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec_ref(v_as_1951_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_toIR(lean_object* v_decls_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_){
_start:
{
lean_object* v_irDecls_1967_; size_t v_sz_1968_; size_t v___x_1969_; lean_object* v___x_1970_; 
v_irDecls_1967_ = ((lean_object*)(l_Lean_IR_toIR___closed__0));
v_sz_1968_ = lean_array_size(v_decls_1963_);
v___x_1969_ = ((size_t)0ULL);
v___x_1970_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(v_decls_1963_, v_sz_1968_, v___x_1969_, v_irDecls_1967_, v_a_1964_, v_a_1965_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_toIR___boxed(lean_object* v_decls_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lean_IR_toIR(v_decls_1971_, v_a_1972_, v_a_1973_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_decls_1971_);
return v_res_1975_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_ToIRType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_ToIR(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_ToIRType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_ToIR(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_ToIRType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_ToIR(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ToIRType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_ToIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_ToIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_ToIR(builtin);
}
#ifdef __cplusplus
}
#endif

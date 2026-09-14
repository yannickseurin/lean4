// Lean compiler output
// Module: Lean.Compiler.LCNF.ToMono
// Imports: public import Lean.Compiler.ImplementedByAttr public import Lean.Compiler.LCNF.InferType public import Lean.Compiler.NoncomputableAttr public import Lean.Compiler.LCNF.MonoTypes import Init.While
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object*);
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_ctorAppToMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ctorAppToMono___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcInv"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value),LEAN_SCALAR_PTR_LITERAL(246, 129, 23, 78, 51, 209, 87, 155)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Compiler.LCNF.ToMono"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.LetValue.toMono"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__13;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lean.Compiler.LCNF.mkFieldParamsForComputedFields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "expected inductive type"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Compiler.LCNF.Code.toMono"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__5;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__8_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__10_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__12_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__12_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__13_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__14_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__15_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__16_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 14, 5, 86, 33, 2, 113, 205)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__17_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FloatArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 8, 149, 159, 140, 65, 145, 29)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__18_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__19 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__19_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__20 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__20_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__21 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__21_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Thunk"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 24, 139, 128, 157, 117, 211, 220)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__22 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__22_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Task"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 131, 95, 48, 7, 243, 177, 18)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__23 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__23_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: c.alts.size == 1\n  "};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Compiler.LCNF.trivialStructToMono"};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: ctorName == info.ctorName\n  "};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: info.fieldIdx < ps.size\n  "};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 78, 106, 49, 240, 167, 66, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.casesTaskToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 131, 95, 48, 7, 243, 177, 18)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 166, 147, 197, 228, 63, 159, 146)}};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesThunkToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 24, 139, 128, 157, 117, 211, 220)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 110, 84, 99, 226, 14, 63, 127)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.casesFloat32ToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toModel"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 9, 102, 51, 239, 149, 150, 6)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesFloatToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(34, 196, 85, 139, 247, 89, 238, 57)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Compiler.LCNF.casesStringToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toByteArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 189, 23, 98, 222, 233, 190, 57)}};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Compiler.LCNF.casesFloatArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 8, 149, 159, 140, 65, 145, 29)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 91, 150, 235, 33, 239, 26, 16)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Compiler.LCNF.casesByteArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 14, 5, 86, 33, 2, 113, 205)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(106, 177, 159, 83, 171, 235, 26, 160)}};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toList"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(236, 208, 194, 233, 254, 64, 157, 114)}};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.casesUIntToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toBitVec"};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 77, 91, 107, 150, 196, 51, 157)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(175, 223, 173, 123, 47, 34, 50, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(192, 66, 133, 102, 95, 170, 134, 92)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isNeg"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(104, 77, 119, 5, 20, 206, 20, 211)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decLt"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(168, 105, 33, 134, 172, 206, 181, 195)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 186, 174, 182, 213, 167, 94, 168)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "abs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value),LEAN_SCALAR_PTR_LITERAL(11, 180, 28, 55, 197, 20, 206, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 166, 239, 19, 130, 98, 40, 185)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value),LEAN_SCALAR_PTR_LITERAL(9, 137, 41, 185, 216, 152, 145, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 155, 141, 233, 87, 0, 52, 207)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 194, 46, 57, 180, 54, 219, 130)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decEq"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(13, 188, 70, 193, 211, 173, 121, 176)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Code_toMono___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_toMono___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toMono"};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 72, 84, 185, 246, 162, 165, 228)}};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_toMono = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(209, 219, 170, 209, 222, 12, 94, 82)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToMono"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_key_3_; lean_object* v_value_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_28_; 
v_key_3_ = lean_ctor_get(v_x_2_, 0);
v_value_4_ = lean_ctor_get(v_x_2_, 1);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_7_ = v_x_2_;
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_value_4_);
lean_inc(v_key_3_);
lean_dec(v_x_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; uint64_t v___x_10_; uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v_fold_13_; uint64_t v___x_14_; uint64_t v___x_15_; uint64_t v___x_16_; size_t v___x_17_; size_t v___x_18_; size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_24_; 
v___x_9_ = lean_array_get_size(v_x_1_);
v___x_10_ = l_Lean_instHashableFVarId_hash(v_key_3_);
v___x_11_ = 32ULL;
v___x_12_ = lean_uint64_shift_right(v___x_10_, v___x_11_);
v_fold_13_ = lean_uint64_xor(v___x_10_, v___x_12_);
v___x_14_ = 16ULL;
v___x_15_ = lean_uint64_shift_right(v_fold_13_, v___x_14_);
v___x_16_ = lean_uint64_xor(v_fold_13_, v___x_15_);
v___x_17_ = lean_uint64_to_usize(v___x_16_);
v___x_18_ = lean_usize_of_nat(v___x_9_);
v___x_19_ = ((size_t)1ULL);
v___x_20_ = lean_usize_sub(v___x_18_, v___x_19_);
v___x_21_ = lean_usize_land(v___x_17_, v___x_20_);
v___x_22_ = lean_array_uget_borrowed(v_x_1_, v___x_21_);
lean_inc(v___x_22_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 2, v___x_22_);
v___x_24_ = v___x_7_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_key_3_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_value_4_);
lean_ctor_set(v_reuseFailAlloc_27_, 2, v___x_22_);
v___x_24_ = v_reuseFailAlloc_27_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
lean_object* v___x_25_; 
v___x_25_ = lean_array_uset(v_x_1_, v___x_21_, v___x_24_);
v_x_1_ = v___x_25_;
v_x_2_ = v_tail_5_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
_start:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_array_get_size(v_source_30_);
v___x_33_ = lean_nat_dec_lt(v_i_29_, v___x_32_);
if (v___x_33_ == 0)
{
lean_dec_ref(v_source_30_);
lean_dec(v_i_29_);
return v_target_31_;
}
else
{
lean_object* v_es_34_; lean_object* v___x_35_; lean_object* v_source_36_; lean_object* v_target_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_es_34_ = lean_array_fget(v_source_30_, v_i_29_);
v___x_35_ = lean_box(0);
v_source_36_ = lean_array_fset(v_source_30_, v_i_29_, v___x_35_);
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(v_target_31_, v_es_34_);
v___x_38_ = lean_unsigned_to_nat(1u);
v___x_39_ = lean_nat_add(v_i_29_, v___x_38_);
lean_dec(v_i_29_);
v_i_29_ = v___x_39_;
v_source_30_ = v_source_36_;
v_target_31_ = v_target_37_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(lean_object* v_data_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_nbuckets_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_42_ = lean_array_get_size(v_data_41_);
v___x_43_ = lean_unsigned_to_nat(2u);
v_nbuckets_44_ = lean_nat_mul(v___x_42_, v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(0);
v___x_47_ = lean_mk_array(v_nbuckets_44_, v___x_46_);
v___x_48_ = lean_array_propagate_mark(v_data_41_, v___x_47_);
v___x_49_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(v___x_45_, v_data_41_, v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(lean_object* v_a_50_, lean_object* v_x_51_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
else
{
lean_object* v_key_53_; lean_object* v_tail_54_; uint8_t v___x_55_; 
v_key_53_ = lean_ctor_get(v_x_51_, 0);
v_tail_54_ = lean_ctor_get(v_x_51_, 2);
v___x_55_ = l_Lean_instBEqFVarId_beq(v_key_53_, v_a_50_);
if (v___x_55_ == 0)
{
v_x_51_ = v_tail_54_;
goto _start;
}
else
{
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg___boxed(lean_object* v_a_57_, lean_object* v_x_58_){
_start:
{
uint8_t v_res_59_; lean_object* v_r_60_; 
v_res_59_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_a_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(lean_object* v_m_61_, lean_object* v_a_62_, lean_object* v_b_63_){
_start:
{
lean_object* v_size_64_; lean_object* v_buckets_65_; lean_object* v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v___x_69_; uint64_t v_fold_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; size_t v___x_74_; size_t v___x_75_; size_t v___x_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v_bkt_79_; uint8_t v___x_80_; 
v_size_64_ = lean_ctor_get(v_m_61_, 0);
v_buckets_65_ = lean_ctor_get(v_m_61_, 1);
v___x_66_ = lean_array_get_size(v_buckets_65_);
v___x_67_ = l_Lean_instHashableFVarId_hash(v_a_62_);
v___x_68_ = 32ULL;
v___x_69_ = lean_uint64_shift_right(v___x_67_, v___x_68_);
v_fold_70_ = lean_uint64_xor(v___x_67_, v___x_69_);
v___x_71_ = 16ULL;
v___x_72_ = lean_uint64_shift_right(v_fold_70_, v___x_71_);
v___x_73_ = lean_uint64_xor(v_fold_70_, v___x_72_);
v___x_74_ = lean_uint64_to_usize(v___x_73_);
v___x_75_ = lean_usize_of_nat(v___x_66_);
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_sub(v___x_75_, v___x_76_);
v___x_78_ = lean_usize_land(v___x_74_, v___x_77_);
v_bkt_79_ = lean_array_uget_borrowed(v_buckets_65_, v___x_78_);
v___x_80_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_62_, v_bkt_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_101_; 
lean_inc_ref(v_buckets_65_);
lean_inc(v_size_64_);
v_isSharedCheck_101_ = !lean_is_exclusive(v_m_61_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; lean_object* v_unused_103_; 
v_unused_102_ = lean_ctor_get(v_m_61_, 1);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v_m_61_, 0);
lean_dec(v_unused_103_);
v___x_82_ = v_m_61_;
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
else
{
lean_dec(v_m_61_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v_size_x27_85_; lean_object* v___x_86_; lean_object* v_buckets_x27_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_84_ = lean_unsigned_to_nat(1u);
v_size_x27_85_ = lean_nat_add(v_size_64_, v___x_84_);
lean_dec(v_size_64_);
lean_inc(v_bkt_79_);
v___x_86_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_86_, 0, v_a_62_);
lean_ctor_set(v___x_86_, 1, v_b_63_);
lean_ctor_set(v___x_86_, 2, v_bkt_79_);
v_buckets_x27_87_ = lean_array_uset(v_buckets_65_, v___x_78_, v___x_86_);
v___x_88_ = lean_unsigned_to_nat(4u);
v___x_89_ = lean_nat_mul(v_size_x27_85_, v___x_88_);
v___x_90_ = lean_unsigned_to_nat(3u);
v___x_91_ = lean_nat_div(v___x_89_, v___x_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_array_get_size(v_buckets_x27_87_);
v___x_93_ = lean_nat_dec_le(v___x_91_, v___x_92_);
lean_dec(v___x_91_);
if (v___x_93_ == 0)
{
lean_object* v_val_94_; lean_object* v___x_96_; 
v_val_94_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(v_buckets_x27_87_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_val_94_);
lean_ctor_set(v___x_82_, 0, v_size_x27_85_);
v___x_96_ = v___x_82_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_size_x27_85_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v_val_94_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
else
{
lean_object* v___x_99_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_buckets_x27_87_);
lean_ctor_set(v___x_82_, 0, v_size_x27_85_);
v___x_99_ = v___x_82_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_size_x27_85_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_buckets_x27_87_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
else
{
lean_dec(v_b_63_);
lean_dec(v_a_62_);
return v_m_61_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object* v_param_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_fvarId_110_; lean_object* v_type_111_; lean_object* v___y_113_; lean_object* v___y_114_; lean_object* v___y_115_; uint8_t v___x_128_; 
v_fvarId_110_ = lean_ctor_get(v_param_104_, 0);
v_type_111_ = lean_ctor_get(v_param_104_, 2);
lean_inc_ref(v_type_111_);
v___x_128_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_111_);
if (v___x_128_ == 0)
{
v___y_113_ = v_a_106_;
v___y_114_ = v_a_107_;
v___y_115_ = v_a_108_;
goto v___jp_112_;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_st_ref_take(v_a_105_);
v___x_130_ = lean_box(0);
lean_inc(v_fvarId_110_);
v___x_131_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(v___x_129_, v_fvarId_110_, v___x_130_);
v___x_132_ = lean_st_ref_put(v_a_105_, v___x_131_);
v___y_113_ = v_a_106_;
v___y_114_ = v_a_107_;
v___y_115_ = v_a_108_;
goto v___jp_112_;
}
v___jp_112_:
{
lean_object* v___x_116_; 
lean_inc_ref(v_type_111_);
v___x_116_ = l_Lean_Compiler_LCNF_toMonoType(v_type_111_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; uint8_t v___x_118_; lean_object* v___x_119_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_116_, 1);
v___x_118_ = 0;
v___x_119_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v___x_118_, v_param_104_, v_a_117_, v___y_113_);
return v___x_119_;
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
lean_dec_ref(v_param_104_);
v_a_120_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_116_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_116_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object* v_param_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
lean_dec(v_a_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object* v_param_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_140_, v_a_141_, v_a_143_, v_a_144_, v_a_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object* v_param_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Compiler_LCNF_Param_toMono(v_param_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0(lean_object* v_00_u03b2_156_, lean_object* v_m_157_, lean_object* v_a_158_, lean_object* v_b_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(v_m_157_, v_a_158_, v_b_159_);
return v___x_160_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(lean_object* v_00_u03b2_161_, lean_object* v_a_162_, lean_object* v_x_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_162_, v_x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___boxed(lean_object* v_00_u03b2_165_, lean_object* v_a_166_, lean_object* v_x_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(v_00_u03b2_165_, v_a_166_, v_x_167_);
lean_dec(v_x_167_);
lean_dec(v_a_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1(lean_object* v_00_u03b2_170_, lean_object* v_data_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(v_data_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_173_, lean_object* v_i_174_, lean_object* v_source_175_, lean_object* v_target_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(v_i_174_, v_source_175_, v_target_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_178_, lean_object* v_x_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(v_x_179_, v_x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object* v_arg_184_, lean_object* v_a_185_){
_start:
{
if (lean_obj_tag(v_arg_184_) == 1)
{
lean_object* v_fvarId_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v_fvarId_187_ = lean_ctor_get(v_arg_184_, 0);
v___x_188_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__0));
v___x_189_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__1));
v___x_190_ = lean_st_ref_get(v_a_185_);
lean_inc(v_fvarId_187_);
v___x_191_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_188_, v___x_189_, v___x_190_, v_fvarId_187_);
lean_dec(v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_192_, 0, v_arg_184_);
return v___x_192_;
}
else
{
lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_200_; 
v_isSharedCheck_200_ = !lean_is_exclusive(v_arg_184_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; 
v_unused_201_ = lean_ctor_get(v_arg_184_, 0);
lean_dec(v_unused_201_);
v___x_194_ = v_arg_184_;
v_isShared_195_ = v_isSharedCheck_200_;
goto v_resetjp_193_;
}
else
{
lean_dec(v_arg_184_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_200_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_196_ = lean_box(0);
if (v_isShared_195_ == 0)
{
lean_ctor_set_tag(v___x_194_, 0);
lean_ctor_set(v___x_194_, 0, v___x_196_);
v___x_198_ = v___x_194_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
else
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec(v_arg_184_);
v___x_202_ = lean_box(0);
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object* v_arg_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_Compiler_LCNF_argToMono___redArg(v_arg_204_, v_a_205_);
lean_dec(v_a_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object* v_arg_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
if (lean_obj_tag(v_arg_208_) == 1)
{
lean_object* v_fvarId_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_fvarId_215_ = lean_ctor_get(v_arg_208_, 0);
v___x_216_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__0));
v___x_217_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__1));
v___x_218_ = lean_st_ref_get(v_a_209_);
lean_inc(v_fvarId_215_);
v___x_219_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_216_, v___x_217_, v___x_218_, v_fvarId_215_);
lean_dec(v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v_arg_208_);
return v___x_220_;
}
else
{
lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_228_; 
v_isSharedCheck_228_ = !lean_is_exclusive(v_arg_208_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; 
v_unused_229_ = lean_ctor_get(v_arg_208_, 0);
lean_dec(v_unused_229_);
v___x_222_ = v_arg_208_;
v_isShared_223_ = v_isSharedCheck_228_;
goto v_resetjp_221_;
}
else
{
lean_dec(v_arg_208_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_228_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_224_ = lean_box(0);
if (v_isShared_223_ == 0)
{
lean_ctor_set_tag(v___x_222_, 0);
lean_ctor_set(v___x_222_, 0, v___x_224_);
v___x_226_ = v___x_222_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v_arg_208_);
v___x_230_ = lean_box(0);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object* v_arg_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Compiler_LCNF_argToMono(v_arg_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
return v_res_239_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object* v_m_240_, lean_object* v_a_241_){
_start:
{
lean_object* v_buckets_242_; lean_object* v___x_243_; uint64_t v___x_244_; uint64_t v___x_245_; uint64_t v___x_246_; uint64_t v_fold_247_; uint64_t v___x_248_; uint64_t v___x_249_; uint64_t v___x_250_; size_t v___x_251_; size_t v___x_252_; size_t v___x_253_; size_t v___x_254_; size_t v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v_buckets_242_ = lean_ctor_get(v_m_240_, 1);
v___x_243_ = lean_array_get_size(v_buckets_242_);
v___x_244_ = l_Lean_instHashableFVarId_hash(v_a_241_);
v___x_245_ = 32ULL;
v___x_246_ = lean_uint64_shift_right(v___x_244_, v___x_245_);
v_fold_247_ = lean_uint64_xor(v___x_244_, v___x_246_);
v___x_248_ = 16ULL;
v___x_249_ = lean_uint64_shift_right(v_fold_247_, v___x_248_);
v___x_250_ = lean_uint64_xor(v_fold_247_, v___x_249_);
v___x_251_ = lean_uint64_to_usize(v___x_250_);
v___x_252_ = lean_usize_of_nat(v___x_243_);
v___x_253_ = ((size_t)1ULL);
v___x_254_ = lean_usize_sub(v___x_252_, v___x_253_);
v___x_255_ = lean_usize_land(v___x_251_, v___x_254_);
v___x_256_ = lean_array_uget_borrowed(v_buckets_242_, v___x_255_);
v___x_257_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_241_, v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object* v_m_258_, lean_object* v_a_259_){
_start:
{
uint8_t v_res_260_; lean_object* v_r_261_; 
v_res_260_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_m_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec_ref(v_m_258_);
v_r_261_ = lean_box(v_res_260_);
return v_r_261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(lean_object* v_as_262_, size_t v_sz_263_, size_t v_i_264_, lean_object* v_b_265_, lean_object* v___y_266_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = lean_usize_dec_lt(v_i_264_, v_sz_263_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_269_, 0, v_b_265_);
return v___x_269_;
}
else
{
lean_object* v_fst_270_; lean_object* v_snd_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_311_; 
v_fst_270_ = lean_ctor_get(v_b_265_, 0);
v_snd_271_ = lean_ctor_get(v_b_265_, 1);
v_isSharedCheck_311_ = !lean_is_exclusive(v_b_265_);
if (v_isSharedCheck_311_ == 0)
{
v___x_273_ = v_b_265_;
v_isShared_274_ = v_isSharedCheck_311_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_snd_271_);
lean_inc(v_fst_270_);
lean_dec(v_b_265_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_311_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_monoArg_276_; lean_object* v_remainingType_277_; lean_object* v_a_285_; lean_object* v___y_287_; 
v_a_285_ = lean_array_uget_borrowed(v_as_262_, v_i_264_);
if (lean_obj_tag(v_fst_270_) == 1)
{
lean_object* v_val_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_310_; 
v_val_294_ = lean_ctor_get(v_fst_270_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v_fst_270_);
if (v_isSharedCheck_310_ == 0)
{
v___x_296_ = v_fst_270_;
v_isShared_297_ = v_isSharedCheck_310_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_val_294_);
lean_dec(v_fst_270_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_310_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
if (lean_obj_tag(v_val_294_) == 7)
{
lean_object* v_binderType_298_; lean_object* v_body_299_; lean_object* v___x_301_; 
v_binderType_298_ = lean_ctor_get(v_val_294_, 1);
lean_inc_ref(v_binderType_298_);
v_body_299_ = lean_ctor_get(v_val_294_, 2);
lean_inc_ref(v_body_299_);
lean_dec_ref_known(v_val_294_, 3);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v_body_299_);
v___x_301_ = v___x_296_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_body_299_);
v___x_301_ = v_reuseFailAlloc_309_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
uint8_t v___x_302_; 
v___x_302_ = l_Lean_Expr_isErased(v_binderType_298_);
lean_dec_ref(v_binderType_298_);
if (v___x_302_ == 0)
{
if (lean_obj_tag(v_a_285_) == 1)
{
lean_object* v_fvarId_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v_fvarId_303_ = lean_ctor_get(v_a_285_, 0);
v___x_304_ = lean_st_ref_get(v___y_266_);
v___x_305_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_304_, v_fvarId_303_);
lean_dec(v___x_304_);
if (v___x_305_ == 0)
{
lean_inc_ref(v_a_285_);
v_monoArg_276_ = v_a_285_;
v_remainingType_277_ = v___x_301_;
goto v___jp_275_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = lean_box(0);
v_monoArg_276_ = v___x_306_;
v_remainingType_277_ = v___x_301_;
goto v___jp_275_;
}
}
else
{
lean_object* v___x_307_; 
v___x_307_ = lean_box(0);
v_monoArg_276_ = v___x_307_;
v_remainingType_277_ = v___x_301_;
goto v___jp_275_;
}
}
else
{
lean_object* v___x_308_; 
v___x_308_ = lean_box(0);
v_monoArg_276_ = v___x_308_;
v_remainingType_277_ = v___x_301_;
goto v___jp_275_;
}
}
}
else
{
lean_del_object(v___x_296_);
lean_dec(v_val_294_);
v___y_287_ = v___y_266_;
goto v___jp_286_;
}
}
}
else
{
lean_dec(v_fst_270_);
v___y_287_ = v___y_266_;
goto v___jp_286_;
}
v___jp_275_:
{
lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_278_ = lean_array_push(v_snd_271_, v_monoArg_276_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_278_);
lean_ctor_set(v___x_273_, 0, v_remainingType_277_);
v___x_280_ = v___x_273_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_remainingType_277_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v___x_278_);
v___x_280_ = v_reuseFailAlloc_284_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
size_t v___x_281_; size_t v___x_282_; 
v___x_281_ = ((size_t)1ULL);
v___x_282_ = lean_usize_add(v_i_264_, v___x_281_);
v_i_264_ = v___x_282_;
v_b_265_ = v___x_280_;
goto _start;
}
}
v___jp_286_:
{
lean_object* v___x_288_; 
v___x_288_ = lean_box(0);
if (lean_obj_tag(v_a_285_) == 1)
{
lean_object* v_fvarId_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v_fvarId_289_ = lean_ctor_get(v_a_285_, 0);
v___x_290_ = lean_st_ref_get(v___y_287_);
v___x_291_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_290_, v_fvarId_289_);
lean_dec(v___x_290_);
if (v___x_291_ == 0)
{
lean_inc_ref(v_a_285_);
v_monoArg_276_ = v_a_285_;
v_remainingType_277_ = v___x_288_;
goto v___jp_275_;
}
else
{
lean_object* v___x_292_; 
v___x_292_ = lean_box(0);
v_monoArg_276_ = v___x_292_;
v_remainingType_277_ = v___x_288_;
goto v___jp_275_;
}
}
else
{
lean_object* v___x_293_; 
v___x_293_ = lean_box(0);
v_monoArg_276_ = v___x_293_;
v_remainingType_277_ = v___x_288_;
goto v___jp_275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg___boxed(lean_object* v_as_312_, lean_object* v_sz_313_, lean_object* v_i_314_, lean_object* v_b_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
size_t v_sz_boxed_318_; size_t v_i_boxed_319_; lean_object* v_res_320_; 
v_sz_boxed_318_ = lean_unbox_usize(v_sz_313_);
lean_dec(v_sz_313_);
v_i_boxed_319_ = lean_unbox_usize(v_i_314_);
lean_dec(v_i_314_);
v_res_320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_as_312_, v_sz_boxed_318_, v_i_boxed_319_, v_b_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v_as_312_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object* v_args_321_, lean_object* v_type_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_remainingType_329_; lean_object* v___x_330_; lean_object* v_result_331_; lean_object* v___x_332_; size_t v_sz_333_; size_t v___x_334_; lean_object* v___x_335_; 
v_remainingType_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_remainingType_329_, 0, v_type_322_);
v___x_330_ = lean_array_get_size(v_args_321_);
v_result_331_ = lean_mk_empty_array_with_capacity(v___x_330_);
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v_remainingType_329_);
lean_ctor_set(v___x_332_, 1, v_result_331_);
v_sz_333_ = lean_array_size(v_args_321_);
v___x_334_ = ((size_t)0ULL);
v___x_335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_args_321_, v_sz_333_, v___x_334_, v___x_332_, v_a_323_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_344_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_344_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_344_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_344_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v_snd_340_; lean_object* v___x_342_; 
v_snd_340_ = lean_ctor_get(v_a_336_, 1);
lean_inc(v_snd_340_);
lean_dec(v_a_336_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 0, v_snd_340_);
v___x_342_ = v___x_338_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_snd_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_335_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_335_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object* v_args_353_, lean_object* v_type_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_353_, v_type_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec_ref(v_a_356_);
lean_dec(v_a_355_);
lean_dec_ref(v_args_353_);
return v_res_361_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object* v_00_u03b2_362_, lean_object* v_m_363_, lean_object* v_a_364_){
_start:
{
uint8_t v___x_365_; 
v___x_365_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_m_363_, v_a_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object* v_00_u03b2_366_, lean_object* v_m_367_, lean_object* v_a_368_){
_start:
{
uint8_t v_res_369_; lean_object* v_r_370_; 
v_res_369_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(v_00_u03b2_366_, v_m_367_, v_a_368_);
lean_dec(v_a_368_);
lean_dec_ref(v_m_367_);
v_r_370_ = lean_box(v_res_369_);
return v_r_370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(lean_object* v_as_371_, size_t v_sz_372_, size_t v_i_373_, lean_object* v_b_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_as_371_, v_sz_372_, v_i_373_, v_b_374_, v___y_375_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___boxed(lean_object* v_as_382_, lean_object* v_sz_383_, lean_object* v_i_384_, lean_object* v_b_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
size_t v_sz_boxed_392_; size_t v_i_boxed_393_; lean_object* v_res_394_; 
v_sz_boxed_392_ = lean_unbox_usize(v_sz_383_);
lean_dec(v_sz_383_);
v_i_boxed_393_ = lean_unbox_usize(v_i_384_);
lean_dec(v_i_384_);
v_res_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(v_as_382_, v_sz_boxed_392_, v_i_boxed_393_, v_b_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v_as_382_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object* v_a_395_, lean_object* v_b_396_){
_start:
{
lean_object* v_array_397_; lean_object* v_start_398_; lean_object* v_stop_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_412_; 
v_array_397_ = lean_ctor_get(v_a_395_, 0);
v_start_398_ = lean_ctor_get(v_a_395_, 1);
v_stop_399_ = lean_ctor_get(v_a_395_, 2);
v_isSharedCheck_412_ = !lean_is_exclusive(v_a_395_);
if (v_isSharedCheck_412_ == 0)
{
v___x_401_ = v_a_395_;
v_isShared_402_ = v_isSharedCheck_412_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_stop_399_);
lean_inc(v_start_398_);
lean_inc(v_array_397_);
lean_dec(v_a_395_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_412_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
uint8_t v___x_403_; 
v___x_403_ = lean_nat_dec_lt(v_start_398_, v_stop_399_);
if (v___x_403_ == 0)
{
lean_del_object(v___x_401_);
lean_dec(v_stop_399_);
lean_dec(v_start_398_);
lean_dec_ref(v_array_397_);
return v_b_396_;
}
else
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_404_ = lean_unsigned_to_nat(1u);
v___x_405_ = lean_nat_add(v_start_398_, v___x_404_);
lean_inc_ref(v_array_397_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 1, v___x_405_);
v___x_407_ = v___x_401_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_array_397_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v_stop_399_);
v___x_407_ = v_reuseFailAlloc_411_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_array_fget(v_array_397_, v_start_398_);
lean_dec(v_start_398_);
lean_dec_ref(v_array_397_);
v___x_409_ = lean_array_push(v_b_396_, v___x_408_);
v_a_395_ = v___x_407_;
v_b_396_ = v___x_409_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t v_sz_413_, size_t v_i_414_, lean_object* v_bs_415_, lean_object* v___y_416_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = lean_usize_dec_lt(v_i_414_, v_sz_413_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = l_unsafeCast___redArg(v_bs_415_);
lean_dec_ref(v_bs_415_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
else
{
lean_object* v_v_421_; lean_object* v___x_422_; lean_object* v_bs_x27_423_; lean_object* v_a_425_; lean_object* v___x_431_; 
v_v_421_ = lean_array_uget(v_bs_415_, v_i_414_);
v___x_422_ = lean_unsigned_to_nat(0u);
v_bs_x27_423_ = lean_array_uset(v_bs_415_, v_i_414_, v___x_422_);
v___x_431_ = l_unsafeCast___redArg(v_v_421_);
lean_dec(v_v_421_);
if (lean_obj_tag(v___x_431_) == 1)
{
lean_object* v_fvarId_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_fvarId_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_fvarId_432_);
v___x_433_ = lean_st_ref_get(v___y_416_);
v___x_434_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_433_, v_fvarId_432_);
lean_dec(v_fvarId_432_);
lean_dec(v___x_433_);
if (v___x_434_ == 0)
{
v_a_425_ = v___x_431_;
goto v___jp_424_;
}
else
{
lean_object* v___x_435_; 
lean_dec_ref_known(v___x_431_, 1);
v___x_435_ = lean_box(0);
v_a_425_ = v___x_435_;
goto v___jp_424_;
}
}
else
{
lean_object* v___x_436_; 
lean_dec(v___x_431_);
v___x_436_ = lean_box(0);
v_a_425_ = v___x_436_;
goto v___jp_424_;
}
v___jp_424_:
{
size_t v___x_426_; size_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_426_ = ((size_t)1ULL);
v___x_427_ = lean_usize_add(v_i_414_, v___x_426_);
v___x_428_ = l_unsafeCast___redArg(v_a_425_);
lean_dec(v_a_425_);
v___x_429_ = lean_array_uset(v_bs_x27_423_, v_i_414_, v___x_428_);
v_i_414_ = v___x_427_;
v_bs_415_ = v___x_429_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object* v_sz_437_, lean_object* v_i_438_, lean_object* v_bs_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
size_t v_sz_boxed_442_; size_t v_i_boxed_443_; lean_object* v_res_444_; 
v_sz_boxed_442_ = lean_unbox_usize(v_sz_437_);
lean_dec(v_sz_437_);
v_i_boxed_443_ = lean_unbox_usize(v_i_438_);
lean_dec(v_i_438_);
v_res_444_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_boxed_442_, v_i_boxed_443_, v_bs_439_, v___y_440_);
lean_dec(v___y_440_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t v_sz_445_, size_t v_i_446_, lean_object* v_bs_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_445_, v_i_446_, v_bs_447_, v___y_448_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object* v_sz_455_, lean_object* v_i_456_, lean_object* v_bs_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
size_t v_sz_boxed_464_; size_t v_i_boxed_465_; lean_object* v_res_466_; 
v_sz_boxed_464_ = lean_unbox_usize(v_sz_455_);
lean_dec(v_sz_455_);
v_i_boxed_465_ = lean_unbox_usize(v_i_456_);
lean_dec(v_i_456_);
v_res_466_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(v_sz_boxed_464_, v_i_boxed_465_, v_bs_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object* v_ctorInfo_471_, lean_object* v_args_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_toConstantVal_479_; lean_object* v_numParams_480_; lean_object* v___x_481_; lean_object* v_argsNewParams_482_; lean_object* v_lower_484_; lean_object* v_upper_485_; lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v_toConstantVal_479_ = lean_ctor_get(v_ctorInfo_471_, 0);
lean_inc_ref(v_toConstantVal_479_);
v_numParams_480_ = lean_ctor_get(v_ctorInfo_471_, 3);
lean_inc_n(v_numParams_480_, 2);
lean_dec_ref(v_ctorInfo_471_);
v___x_481_ = lean_box(0);
v_argsNewParams_482_ = lean_mk_array(v_numParams_480_, v___x_481_);
v___x_524_ = lean_unsigned_to_nat(0u);
v___x_525_ = lean_array_get_size(v_args_472_);
v___x_526_ = lean_nat_dec_le(v_numParams_480_, v___x_524_);
if (v___x_526_ == 0)
{
v_lower_484_ = v_numParams_480_;
v_upper_485_ = v___x_525_;
goto v___jp_483_;
}
else
{
lean_dec(v_numParams_480_);
v_lower_484_ = v___x_524_;
v_upper_485_ = v___x_525_;
goto v___jp_483_;
}
v___jp_483_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; size_t v_sz_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_812__overap_494_; lean_object* v___x_495_; 
v___x_486_ = l_Array_toSubarray___redArg(v_args_472_, v_lower_484_, v_upper_485_);
v___x_487_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_488_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v___x_486_, v___x_487_);
v_sz_489_ = lean_array_size(v___x_488_);
v___x_490_ = l_unsafeCast___redArg(v___x_488_);
lean_dec_ref(v___x_488_);
v___x_491_ = lean_box_usize(v_sz_489_);
v___x_492_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_493_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed), 9, 3);
lean_closure_set(v___x_493_, 0, v___x_491_);
lean_closure_set(v___x_493_, 1, v___x_492_);
lean_closure_set(v___x_493_, 2, v___x_490_);
v___x_812__overap_494_ = l_unsafeCast___redArg(v___x_493_);
lean_dec_ref(v___x_493_);
lean_inc(v_a_477_);
lean_inc_ref(v_a_476_);
lean_inc(v_a_475_);
lean_inc_ref(v_a_474_);
lean_inc(v_a_473_);
v___x_495_ = lean_apply_6(v___x_812__overap_494_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, lean_box(0));
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_515_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_515_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_515_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_515_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v_name_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_512_; 
v_name_500_ = lean_ctor_get(v_toConstantVal_479_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v_toConstantVal_479_);
if (v_isSharedCheck_512_ == 0)
{
lean_object* v_unused_513_; lean_object* v_unused_514_; 
v_unused_513_ = lean_ctor_get(v_toConstantVal_479_, 2);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_toConstantVal_479_, 1);
lean_dec(v_unused_514_);
v___x_502_ = v_toConstantVal_479_;
v_isShared_503_ = v_isSharedCheck_512_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_name_500_);
lean_dec(v_toConstantVal_479_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_512_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_504_ = l_Array_append___redArg(v_argsNewParams_482_, v_a_496_);
lean_dec(v_a_496_);
v___x_505_ = lean_box(0);
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 3);
lean_ctor_set(v___x_502_, 2, v___x_504_);
lean_ctor_set(v___x_502_, 1, v___x_505_);
v___x_507_ = v___x_502_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_name_500_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v___x_505_);
lean_ctor_set(v_reuseFailAlloc_511_, 2, v___x_504_);
v___x_507_ = v_reuseFailAlloc_511_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_509_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_507_);
v___x_509_ = v___x_498_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v_argsNewParams_482_);
lean_dec_ref(v_toConstantVal_479_);
v_a_516_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_495_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_495_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object* v_ctorInfo_527_, lean_object* v_args_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_ctorInfo_527_, v_args_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
lean_dec(v_a_529_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object* v_inst_536_, lean_object* v_R_537_, lean_object* v_a_538_, lean_object* v_b_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v_a_538_, v_b_539_);
return v___x_540_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0(void){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_instMonadEIO___redArg();
return v___x_541_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5(void){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object* v_msg_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_toApplicative_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_618_; 
v___x_554_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_555_ = l_StateRefT_x27_instMonad___redArg(v___x_554_);
v_toApplicative_556_ = lean_ctor_get(v___x_555_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v___x_555_, 1);
lean_dec(v_unused_619_);
v___x_558_ = v___x_555_;
v_isShared_559_ = v_isSharedCheck_618_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_toApplicative_556_);
lean_dec(v___x_555_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_618_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_toFunctor_560_; lean_object* v_toSeq_561_; lean_object* v_toSeqLeft_562_; lean_object* v_toSeqRight_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_616_; 
v_toFunctor_560_ = lean_ctor_get(v_toApplicative_556_, 0);
v_toSeq_561_ = lean_ctor_get(v_toApplicative_556_, 2);
v_toSeqLeft_562_ = lean_ctor_get(v_toApplicative_556_, 3);
v_toSeqRight_563_ = lean_ctor_get(v_toApplicative_556_, 4);
v_isSharedCheck_616_ = !lean_is_exclusive(v_toApplicative_556_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; 
v_unused_617_ = lean_ctor_get(v_toApplicative_556_, 1);
lean_dec(v_unused_617_);
v___x_565_ = v_toApplicative_556_;
v_isShared_566_ = v_isSharedCheck_616_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_toSeqRight_563_);
lean_inc(v_toSeqLeft_562_);
lean_inc(v_toSeq_561_);
lean_inc(v_toFunctor_560_);
lean_dec(v_toApplicative_556_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_616_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___f_567_; lean_object* v___f_568_; lean_object* v___f_569_; lean_object* v___f_570_; lean_object* v___x_571_; lean_object* v___f_572_; lean_object* v___f_573_; lean_object* v___f_574_; lean_object* v___x_576_; 
v___f_567_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_568_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_560_);
v___f_569_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_569_, 0, v_toFunctor_560_);
v___f_570_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_570_, 0, v_toFunctor_560_);
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v___f_569_);
lean_ctor_set(v___x_571_, 1, v___f_570_);
v___f_572_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_572_, 0, v_toSeqRight_563_);
v___f_573_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_573_, 0, v_toSeqLeft_562_);
v___f_574_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_574_, 0, v_toSeq_561_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v___f_572_);
lean_ctor_set(v___x_565_, 3, v___f_573_);
lean_ctor_set(v___x_565_, 2, v___f_574_);
lean_ctor_set(v___x_565_, 1, v___f_567_);
lean_ctor_set(v___x_565_, 0, v___x_571_);
v___x_576_ = v___x_565_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v___f_567_);
lean_ctor_set(v_reuseFailAlloc_615_, 2, v___f_574_);
lean_ctor_set(v_reuseFailAlloc_615_, 3, v___f_573_);
lean_ctor_set(v_reuseFailAlloc_615_, 4, v___f_572_);
v___x_576_ = v_reuseFailAlloc_615_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 1, v___f_568_);
lean_ctor_set(v___x_558_, 0, v___x_576_);
v___x_578_ = v___x_558_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v___f_568_);
v___x_578_ = v_reuseFailAlloc_614_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; lean_object* v_toApplicative_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_612_; 
v___x_579_ = l_StateRefT_x27_instMonad___redArg(v___x_578_);
v_toApplicative_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v___x_579_, 1);
lean_dec(v_unused_613_);
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_612_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_toApplicative_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_612_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v_toFunctor_584_; lean_object* v_toSeq_585_; lean_object* v_toSeqLeft_586_; lean_object* v_toSeqRight_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_610_; 
v_toFunctor_584_ = lean_ctor_get(v_toApplicative_580_, 0);
v_toSeq_585_ = lean_ctor_get(v_toApplicative_580_, 2);
v_toSeqLeft_586_ = lean_ctor_get(v_toApplicative_580_, 3);
v_toSeqRight_587_ = lean_ctor_get(v_toApplicative_580_, 4);
v_isSharedCheck_610_ = !lean_is_exclusive(v_toApplicative_580_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; 
v_unused_611_ = lean_ctor_get(v_toApplicative_580_, 1);
lean_dec(v_unused_611_);
v___x_589_ = v_toApplicative_580_;
v_isShared_590_ = v_isSharedCheck_610_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_toSeqRight_587_);
lean_inc(v_toSeqLeft_586_);
lean_inc(v_toSeq_585_);
lean_inc(v_toFunctor_584_);
lean_dec(v_toApplicative_580_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_610_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___f_591_; lean_object* v___f_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___x_595_; lean_object* v___f_596_; lean_object* v___f_597_; lean_object* v___f_598_; lean_object* v___x_600_; 
v___f_591_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_592_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_584_);
v___f_593_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_593_, 0, v_toFunctor_584_);
v___f_594_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_594_, 0, v_toFunctor_584_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v___f_593_);
lean_ctor_set(v___x_595_, 1, v___f_594_);
v___f_596_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_596_, 0, v_toSeqRight_587_);
v___f_597_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_597_, 0, v_toSeqLeft_586_);
v___f_598_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_598_, 0, v_toSeq_585_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 4, v___f_596_);
lean_ctor_set(v___x_589_, 3, v___f_597_);
lean_ctor_set(v___x_589_, 2, v___f_598_);
lean_ctor_set(v___x_589_, 1, v___f_591_);
lean_ctor_set(v___x_589_, 0, v___x_595_);
v___x_600_ = v___x_589_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v___f_591_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v___f_598_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v___f_597_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v___f_596_);
v___x_600_ = v_reuseFailAlloc_609_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_602_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 1, v___f_592_);
lean_ctor_set(v___x_582_, 0, v___x_600_);
v___x_602_ = v___x_582_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v___f_592_);
v___x_602_ = v_reuseFailAlloc_608_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_6499__overap_606_; lean_object* v___x_607_; 
v___x_603_ = l_StateRefT_x27_instMonad___redArg(v___x_602_);
v___x_604_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5);
v___x_605_ = l_instInhabitedOfMonad___redArg(v___x_603_, v___x_604_);
v___x_6499__overap_606_ = lean_panic_fn_borrowed(v___x_605_, v_msg_547_);
lean_dec(v___x_605_);
lean_inc(v___y_552_);
lean_inc_ref(v___y_551_);
lean_inc(v___y_550_);
lean_inc_ref(v___y_549_);
lean_inc(v___y_548_);
v___x_607_ = lean_apply_6(v___x_6499__overap_606_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, lean_box(0));
return v___x_607_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object* v_msg_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v_msg_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object* v_upperBound_628_, lean_object* v_args_629_, lean_object* v_a_630_, lean_object* v_b_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_a_635_; uint8_t v___x_640_; 
v___x_640_ = lean_nat_dec_lt(v_a_630_, v_upperBound_628_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; 
lean_dec(v_a_630_);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v_b_631_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_box(0);
v___x_643_ = lean_array_get_borrowed(v___x_642_, v_args_629_, v_a_630_);
if (lean_obj_tag(v___x_643_) == 1)
{
lean_object* v_fvarId_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_fvarId_644_ = lean_ctor_get(v___x_643_, 0);
v___x_645_ = lean_st_ref_get(v___y_632_);
v___x_646_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_645_, v_fvarId_644_);
lean_dec(v___x_645_);
if (v___x_646_ == 0)
{
lean_inc_ref(v___x_643_);
v_a_635_ = v___x_643_;
goto v___jp_634_;
}
else
{
v_a_635_ = v___x_642_;
goto v___jp_634_;
}
}
else
{
v_a_635_ = v___x_642_;
goto v___jp_634_;
}
}
v___jp_634_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_array_push(v_b_631_, v_a_635_);
v___x_637_ = lean_unsigned_to_nat(1u);
v___x_638_ = lean_nat_add(v_a_630_, v___x_637_);
lean_dec(v_a_630_);
v_a_630_ = v___x_638_;
v_b_631_ = v___x_636_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object* v_upperBound_647_, lean_object* v_args_648_, lean_object* v_a_649_, lean_object* v_b_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_647_, v_args_648_, v_a_649_, v_b_650_, v___y_651_);
lean_dec(v___y_651_);
lean_dec_ref(v_args_648_);
lean_dec(v_upperBound_647_);
return v_res_653_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_675_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_676_ = lean_unsigned_to_nat(6u);
v___x_677_ = lean_unsigned_to_nat(83u);
v___x_678_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__11));
v___x_679_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_680_ = l_mkPanicMessageWithDecl(v___x_679_, v___x_678_, v___x_677_, v___x_676_, v___x_675_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object* v_e_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
switch(lean_obj_tag(v_e_685_))
{
case 2:
{
lean_object* v_typeName_692_; lean_object* v_idx_693_; lean_object* v_struct_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v_typeName_692_ = lean_ctor_get(v_e_685_, 0);
v_idx_693_ = lean_ctor_get(v_e_685_, 1);
v_struct_694_ = lean_ctor_get(v_e_685_, 2);
v___x_695_ = lean_st_ref_get(v_a_686_);
v___x_696_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_695_, v_struct_694_);
lean_dec(v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_inc(v_typeName_692_);
v___x_697_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_692_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_717_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_717_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_717_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_717_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
if (lean_obj_tag(v_a_698_) == 1)
{
lean_object* v_val_702_; lean_object* v_fieldIdx_703_; uint8_t v___x_704_; 
lean_inc(v_struct_694_);
lean_inc(v_idx_693_);
lean_dec_ref_known(v_e_685_, 3);
v_val_702_ = lean_ctor_get(v_a_698_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v_a_698_, 1);
v_fieldIdx_703_ = lean_ctor_get(v_val_702_, 2);
lean_inc(v_fieldIdx_703_);
lean_dec(v_val_702_);
v___x_704_ = lean_nat_dec_eq(v_fieldIdx_703_, v_idx_693_);
lean_dec(v_idx_693_);
lean_dec(v_fieldIdx_703_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_707_; 
lean_dec(v_struct_694_);
v___x_705_ = lean_box(1);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_705_);
v___x_707_ = v___x_700_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
else
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_710_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_710_, 0, v_struct_694_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_710_);
v___x_712_ = v___x_700_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
else
{
lean_object* v___x_715_; 
lean_dec(v_a_698_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v_e_685_);
v___x_715_ = v___x_700_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_e_685_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref_known(v_e_685_, 3);
v_a_718_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_697_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_697_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec_ref_known(v_e_685_, 3);
v___x_726_ = lean_box(1);
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
}
case 3:
{
lean_object* v_declName_728_; lean_object* v_args_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_855_; 
v_declName_728_ = lean_ctor_get(v_e_685_, 0);
v_args_729_ = lean_ctor_get(v_e_685_, 2);
v_isSharedCheck_855_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_855_ == 0)
{
lean_object* v_unused_856_; 
v_unused_856_ = lean_ctor_get(v_e_685_, 1);
lean_dec(v_unused_856_);
v___x_731_ = v_e_685_;
v_isShared_732_ = v_isSharedCheck_855_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_args_729_);
lean_inc(v_declName_728_);
lean_dec(v_e_685_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_855_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v_args_734_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_785_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__2));
v___x_786_ = lean_name_eq(v_declName_728_, v___x_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__4));
v___x_788_ = lean_name_eq(v_declName_728_, v___x_787_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__7));
v___x_790_ = lean_name_eq(v_declName_728_, v___x_789_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_791_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_792_ = lean_name_eq(v_declName_728_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v_env_794_; lean_object* v___x_795_; 
v___x_793_ = lean_st_ref_get(v_a_690_);
v_env_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc_ref(v_env_794_);
lean_dec(v___x_793_);
lean_inc(v_declName_728_);
v___x_795_ = l_Lean_Environment_find_x3f(v_env_794_, v_declName_728_, v___x_792_);
if (lean_obj_tag(v___x_795_) == 1)
{
lean_object* v_val_796_; 
v_val_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_val_796_);
lean_dec_ref_known(v___x_795_, 1);
if (lean_obj_tag(v_val_796_) == 6)
{
lean_object* v_val_797_; lean_object* v_induct_798_; lean_object* v_numParams_799_; lean_object* v___x_800_; 
lean_del_object(v___x_731_);
lean_dec(v_declName_728_);
v_val_797_ = lean_ctor_get(v_val_796_, 0);
lean_inc_ref(v_val_797_);
lean_dec_ref_known(v_val_796_, 1);
v_induct_798_ = lean_ctor_get(v_val_797_, 1);
v_numParams_799_ = lean_ctor_get(v_val_797_, 3);
lean_inc(v_induct_798_);
v___x_800_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_induct_798_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_801_);
lean_dec_ref_known(v___x_800_, 1);
if (lean_obj_tag(v_a_801_) == 1)
{
lean_object* v_val_802_; lean_object* v_fieldIdx_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_inc(v_numParams_799_);
lean_dec_ref(v_val_797_);
v_val_802_ = lean_ctor_get(v_a_801_, 0);
lean_inc(v_val_802_);
lean_dec_ref_known(v_a_801_, 1);
v_fieldIdx_803_ = lean_ctor_get(v_val_802_, 2);
lean_inc(v_fieldIdx_803_);
lean_dec(v_val_802_);
v___x_804_ = lean_box(0);
v___x_805_ = lean_nat_add(v_numParams_799_, v_fieldIdx_803_);
lean_dec(v_fieldIdx_803_);
lean_dec(v_numParams_799_);
v___x_806_ = lean_array_get(v___x_804_, v_args_729_, v___x_805_);
lean_dec(v___x_805_);
lean_dec_ref(v_args_729_);
v___x_807_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_806_);
lean_dec(v___x_806_);
v_e_685_ = v___x_807_;
goto _start;
}
else
{
lean_object* v___x_809_; 
lean_dec(v_a_801_);
v___x_809_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_val_797_, v_args_729_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
return v___x_809_;
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec_ref(v_val_797_);
lean_dec_ref(v_args_729_);
v_a_810_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_800_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_800_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
else
{
lean_dec(v_val_796_);
v___y_741_ = v_a_686_;
v___y_742_ = v_a_687_;
v___y_743_ = v_a_688_;
v___y_744_ = v_a_689_;
v___y_745_ = v_a_690_;
goto v___jp_740_;
}
}
else
{
lean_dec(v___x_795_);
v___y_741_ = v_a_686_;
v___y_742_ = v_a_687_;
v___y_743_ = v_a_688_;
v___y_744_ = v_a_689_;
v___y_745_ = v_a_690_;
goto v___jp_740_;
}
}
else
{
lean_object* v___x_818_; lean_object* v___x_819_; 
lean_del_object(v___x_731_);
lean_dec_ref(v_args_729_);
lean_dec(v_declName_728_);
v___x_818_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__13, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13);
v___x_819_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v___x_818_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
return v___x_819_;
}
}
else
{
lean_object* v___x_820_; lean_object* v___x_821_; 
lean_del_object(v___x_731_);
lean_dec_ref(v_args_729_);
lean_dec(v_declName_728_);
v___x_820_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
return v___x_821_;
}
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
lean_del_object(v___x_731_);
lean_dec(v_declName_728_);
v___x_822_ = lean_box(0);
v___x_823_ = lean_unsigned_to_nat(2u);
v___x_824_ = lean_array_get_borrowed(v___x_822_, v_args_729_, v___x_823_);
if (lean_obj_tag(v___x_824_) == 1)
{
lean_object* v_fvarId_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v_extraArgs_829_; lean_object* v___x_830_; 
v_fvarId_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_fvarId_825_);
v___x_826_ = lean_array_get_size(v_args_729_);
v___x_827_ = lean_unsigned_to_nat(3u);
v___x_828_ = lean_nat_sub(v___x_826_, v___x_827_);
v_extraArgs_829_ = lean_mk_empty_array_with_capacity(v___x_828_);
lean_dec(v___x_828_);
v___x_830_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v___x_826_, v_args_729_, v___x_827_, v_extraArgs_829_, v_a_686_);
lean_dec_ref(v_args_729_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_839_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_839_ == 0)
{
v___x_833_ = v___x_830_;
v_isShared_834_ = v_isSharedCheck_839_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_830_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_839_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_835_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_835_, 0, v_fvarId_825_);
lean_ctor_set(v___x_835_, 1, v_a_831_);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 0, v___x_835_);
v___x_837_ = v___x_833_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec(v_fvarId_825_);
v_a_840_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_830_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_830_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; 
lean_dec_ref(v_args_729_);
v___x_848_ = lean_box(1);
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
}
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
lean_del_object(v___x_731_);
lean_dec(v_declName_728_);
v___x_850_ = lean_box(0);
v___x_851_ = lean_unsigned_to_nat(2u);
v___x_852_ = lean_array_get(v___x_850_, v_args_729_, v___x_851_);
lean_dec_ref(v_args_729_);
v___x_853_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_852_);
lean_dec(v___x_852_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
v___jp_733_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_box(0);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 2, v_args_734_);
lean_ctor_set(v___x_731_, 1, v___x_735_);
v___x_737_ = v___x_731_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_declName_728_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_args_734_);
v___x_737_ = v_reuseFailAlloc_739_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
return v___x_738_;
}
}
v___jp_740_:
{
lean_object* v___x_746_; 
lean_inc(v_declName_728_);
v___x_746_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_728_, v___y_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
if (lean_obj_tag(v_a_747_) == 1)
{
lean_object* v_val_748_; lean_object* v_toSignature_749_; lean_object* v_type_750_; lean_object* v___x_751_; 
v_val_748_ = lean_ctor_get(v_a_747_, 0);
lean_inc(v_val_748_);
lean_dec_ref_known(v_a_747_, 1);
v_toSignature_749_ = lean_ctor_get(v_val_748_, 0);
lean_inc_ref(v_toSignature_749_);
lean_dec(v_val_748_);
v_type_750_ = lean_ctor_get(v_toSignature_749_, 2);
lean_inc_ref(v_type_750_);
lean_dec_ref(v_toSignature_749_);
v___x_751_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_729_, v_type_750_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
lean_dec_ref(v_args_729_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; 
v_a_752_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_751_, 1);
v_args_734_ = v_a_752_;
goto v___jp_733_;
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_del_object(v___x_731_);
lean_dec(v_declName_728_);
v_a_753_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_751_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_751_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
size_t v_sz_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_6624__overap_766_; lean_object* v___x_767_; 
lean_dec(v_a_747_);
v_sz_761_ = lean_array_size(v_args_729_);
v___x_762_ = l_unsafeCast___redArg(v_args_729_);
lean_dec_ref(v_args_729_);
v___x_763_ = lean_box_usize(v_sz_761_);
v___x_764_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_765_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed), 9, 3);
lean_closure_set(v___x_765_, 0, v___x_763_);
lean_closure_set(v___x_765_, 1, v___x_764_);
lean_closure_set(v___x_765_, 2, v___x_762_);
v___x_6624__overap_766_ = l_unsafeCast___redArg(v___x_765_);
lean_dec_ref(v___x_765_);
lean_inc(v___y_745_);
lean_inc_ref(v___y_744_);
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
lean_inc(v___y_741_);
v___x_767_ = lean_apply_6(v___x_6624__overap_766_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, lean_box(0));
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_767_, 1);
v_args_734_ = v_a_768_;
goto v___jp_733_;
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_del_object(v___x_731_);
lean_dec(v_declName_728_);
v_a_769_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_767_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_767_);
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
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_del_object(v___x_731_);
lean_dec_ref(v_args_729_);
lean_dec(v_declName_728_);
v_a_777_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_746_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_746_);
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
case 4:
{
lean_object* v_fvarId_857_; lean_object* v_args_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_892_; 
v_fvarId_857_ = lean_ctor_get(v_e_685_, 0);
v_args_858_ = lean_ctor_get(v_e_685_, 1);
v_isSharedCheck_892_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_892_ == 0)
{
v___x_860_ = v_e_685_;
v_isShared_861_ = v_isSharedCheck_892_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_args_858_);
lean_inc(v_fvarId_857_);
lean_dec(v_e_685_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_892_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = lean_st_ref_get(v_a_686_);
v___x_863_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_862_, v_fvarId_857_);
lean_dec(v___x_862_);
if (v___x_863_ == 0)
{
size_t v_sz_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_6633__overap_869_; lean_object* v___x_870_; 
v_sz_864_ = lean_array_size(v_args_858_);
v___x_865_ = l_unsafeCast___redArg(v_args_858_);
lean_dec_ref(v_args_858_);
v___x_866_ = lean_box_usize(v_sz_864_);
v___x_867_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_868_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed), 9, 3);
lean_closure_set(v___x_868_, 0, v___x_866_);
lean_closure_set(v___x_868_, 1, v___x_867_);
lean_closure_set(v___x_868_, 2, v___x_865_);
v___x_6633__overap_869_ = l_unsafeCast___redArg(v___x_868_);
lean_dec_ref(v___x_868_);
lean_inc(v_a_690_);
lean_inc_ref(v_a_689_);
lean_inc(v_a_688_);
lean_inc_ref(v_a_687_);
lean_inc(v_a_686_);
v___x_870_ = lean_apply_6(v___x_6633__overap_869_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, lean_box(0));
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_881_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_881_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_881_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_881_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 1, v_a_871_);
v___x_876_ = v___x_860_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_fvarId_857_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_a_871_);
v___x_876_ = v_reuseFailAlloc_880_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
lean_object* v___x_878_; 
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 0, v___x_876_);
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
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
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_del_object(v___x_860_);
lean_dec(v_fvarId_857_);
v_a_882_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_870_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_870_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; 
lean_del_object(v___x_860_);
lean_dec_ref(v_args_858_);
lean_dec(v_fvarId_857_);
v___x_890_ = lean_box(1);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
}
default: 
{
lean_object* v___x_893_; 
v___x_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_893_, 0, v_e_685_);
return v___x_893_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object* v_e_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_e_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
lean_dec(v_a_895_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object* v_upperBound_902_, lean_object* v_args_903_, lean_object* v_inst_904_, lean_object* v_R_905_, lean_object* v_a_906_, lean_object* v_b_907_, lean_object* v_c_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_902_, v_args_903_, v_a_906_, v_b_907_, v___y_909_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object* v_upperBound_916_, lean_object* v_args_917_, lean_object* v_inst_918_, lean_object* v_R_919_, lean_object* v_a_920_, lean_object* v_b_921_, lean_object* v_c_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(v_upperBound_916_, v_args_917_, v_inst_918_, v_R_919_, v_a_920_, v_b_921_, v_c_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v_args_917_);
lean_dec(v_upperBound_916_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object* v_decl_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_type_937_; lean_object* v_value_938_; lean_object* v___x_939_; 
v_type_937_ = lean_ctor_get(v_decl_930_, 2);
v_value_938_ = lean_ctor_get(v_decl_930_, 3);
lean_inc_ref(v_type_937_);
v___x_939_ = l_Lean_Compiler_LCNF_toMonoType(v_type_937_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_941_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
lean_inc(v_value_938_);
v___x_941_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_value_938_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; uint8_t v___x_943_; lean_object* v___x_944_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_941_, 1);
v___x_943_ = 0;
v___x_944_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_943_, v_decl_930_, v_a_940_, v_a_942_, v_a_933_);
return v___x_944_;
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_a_940_);
lean_dec_ref(v_decl_930_);
v_a_945_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_941_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_941_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec_ref(v_decl_930_);
v_a_953_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_939_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_939_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object* v_decl_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec(v_a_962_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object* v_msg_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v_toApplicative_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_1040_; 
v___x_976_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_977_ = l_StateRefT_x27_instMonad___redArg(v___x_976_);
v_toApplicative_978_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; 
v_unused_1041_ = lean_ctor_get(v___x_977_, 1);
lean_dec(v_unused_1041_);
v___x_980_ = v___x_977_;
v_isShared_981_ = v_isSharedCheck_1040_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_toApplicative_978_);
lean_dec(v___x_977_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_1040_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v_toFunctor_982_; lean_object* v_toSeq_983_; lean_object* v_toSeqLeft_984_; lean_object* v_toSeqRight_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1038_; 
v_toFunctor_982_ = lean_ctor_get(v_toApplicative_978_, 0);
v_toSeq_983_ = lean_ctor_get(v_toApplicative_978_, 2);
v_toSeqLeft_984_ = lean_ctor_get(v_toApplicative_978_, 3);
v_toSeqRight_985_ = lean_ctor_get(v_toApplicative_978_, 4);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_toApplicative_978_);
if (v_isSharedCheck_1038_ == 0)
{
lean_object* v_unused_1039_; 
v_unused_1039_ = lean_ctor_get(v_toApplicative_978_, 1);
lean_dec(v_unused_1039_);
v___x_987_ = v_toApplicative_978_;
v_isShared_988_ = v_isSharedCheck_1038_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_toSeqRight_985_);
lean_inc(v_toSeqLeft_984_);
lean_inc(v_toSeq_983_);
lean_inc(v_toFunctor_982_);
lean_dec(v_toApplicative_978_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1038_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___f_989_; lean_object* v___f_990_; lean_object* v___f_991_; lean_object* v___f_992_; lean_object* v___x_993_; lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___f_996_; lean_object* v___x_998_; 
v___f_989_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_990_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_982_);
v___f_991_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_991_, 0, v_toFunctor_982_);
v___f_992_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_992_, 0, v_toFunctor_982_);
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v___f_991_);
lean_ctor_set(v___x_993_, 1, v___f_992_);
v___f_994_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_994_, 0, v_toSeqRight_985_);
v___f_995_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_995_, 0, v_toSeqLeft_984_);
v___f_996_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_996_, 0, v_toSeq_983_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 4, v___f_994_);
lean_ctor_set(v___x_987_, 3, v___f_995_);
lean_ctor_set(v___x_987_, 2, v___f_996_);
lean_ctor_set(v___x_987_, 1, v___f_989_);
lean_ctor_set(v___x_987_, 0, v___x_993_);
v___x_998_ = v___x_987_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_993_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v___f_989_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v___f_996_);
lean_ctor_set(v_reuseFailAlloc_1037_, 3, v___f_995_);
lean_ctor_set(v_reuseFailAlloc_1037_, 4, v___f_994_);
v___x_998_ = v_reuseFailAlloc_1037_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_1000_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 1, v___f_990_);
lean_ctor_set(v___x_980_, 0, v___x_998_);
v___x_1000_ = v___x_980_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_998_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v___f_990_);
v___x_1000_ = v_reuseFailAlloc_1036_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1001_; lean_object* v_toApplicative_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1034_; 
v___x_1001_ = l_StateRefT_x27_instMonad___redArg(v___x_1000_);
v_toApplicative_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1034_ == 0)
{
lean_object* v_unused_1035_; 
v_unused_1035_ = lean_ctor_get(v___x_1001_, 1);
lean_dec(v_unused_1035_);
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1034_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_toApplicative_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1034_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_toFunctor_1006_; lean_object* v_toSeq_1007_; lean_object* v_toSeqLeft_1008_; lean_object* v_toSeqRight_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1032_; 
v_toFunctor_1006_ = lean_ctor_get(v_toApplicative_1002_, 0);
v_toSeq_1007_ = lean_ctor_get(v_toApplicative_1002_, 2);
v_toSeqLeft_1008_ = lean_ctor_get(v_toApplicative_1002_, 3);
v_toSeqRight_1009_ = lean_ctor_get(v_toApplicative_1002_, 4);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_toApplicative_1002_);
if (v_isSharedCheck_1032_ == 0)
{
lean_object* v_unused_1033_; 
v_unused_1033_ = lean_ctor_get(v_toApplicative_1002_, 1);
lean_dec(v_unused_1033_);
v___x_1011_ = v_toApplicative_1002_;
v_isShared_1012_ = v_isSharedCheck_1032_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_toSeqRight_1009_);
lean_inc(v_toSeqLeft_1008_);
lean_inc(v_toSeq_1007_);
lean_inc(v_toFunctor_1006_);
lean_dec(v_toApplicative_1002_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1032_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___f_1015_; lean_object* v___f_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; lean_object* v___f_1019_; lean_object* v___f_1020_; lean_object* v___x_1022_; 
v___f_1013_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1014_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1006_);
v___f_1015_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1015_, 0, v_toFunctor_1006_);
v___f_1016_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1016_, 0, v_toFunctor_1006_);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___f_1015_);
lean_ctor_set(v___x_1017_, 1, v___f_1016_);
v___f_1018_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1018_, 0, v_toSeqRight_1009_);
v___f_1019_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1019_, 0, v_toSeqLeft_1008_);
v___f_1020_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1020_, 0, v_toSeq_1007_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 4, v___f_1018_);
lean_ctor_set(v___x_1011_, 3, v___f_1019_);
lean_ctor_set(v___x_1011_, 2, v___f_1020_);
lean_ctor_set(v___x_1011_, 1, v___f_1013_);
lean_ctor_set(v___x_1011_, 0, v___x_1017_);
v___x_1022_ = v___x_1011_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v___f_1013_);
lean_ctor_set(v_reuseFailAlloc_1031_, 2, v___f_1020_);
lean_ctor_set(v_reuseFailAlloc_1031_, 3, v___f_1019_);
lean_ctor_set(v_reuseFailAlloc_1031_, 4, v___f_1018_);
v___x_1022_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1024_; 
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 1, v___f_1014_);
lean_ctor_set(v___x_1004_, 0, v___x_1022_);
v___x_1024_ = v___x_1004_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v___f_1014_);
v___x_1024_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_4525__overap_1028_; lean_object* v___x_1029_; 
v___x_1025_ = l_StateRefT_x27_instMonad___redArg(v___x_1024_);
v___x_1026_ = lean_box(0);
v___x_1027_ = l_instInhabitedOfMonad___redArg(v___x_1025_, v___x_1026_);
v___x_4525__overap_1028_ = lean_panic_fn_borrowed(v___x_1027_, v_msg_969_);
lean_dec(v___x_1027_);
lean_inc(v___y_974_);
lean_inc_ref(v___y_973_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
lean_inc(v___y_970_);
v___x_1029_ = lean_apply_6(v___x_4525__overap_1028_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, lean_box(0));
return v___x_1029_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object* v_msg_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v_msg_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
return v_res_1049_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1051_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1052_ = lean_unsigned_to_nat(11u);
v___x_1053_ = lean_unsigned_to_nat(124u);
v___x_1054_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_1055_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1056_ = l_mkPanicMessageWithDecl(v___x_1055_, v___x_1054_, v___x_1053_, v___x_1052_, v___x_1051_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object* v_upperBound_1057_, lean_object* v_a_1058_, lean_object* v_b_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_a_1067_; uint8_t v___x_1071_; 
v___x_1071_ = lean_nat_dec_lt(v_a_1058_, v_upperBound_1057_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; 
lean_dec(v_a_1058_);
v___x_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1072_, 0, v_b_1059_);
return v___x_1072_;
}
else
{
if (lean_obj_tag(v_b_1059_) == 7)
{
lean_object* v_body_1073_; 
v_body_1073_ = lean_ctor_get(v_b_1059_, 2);
lean_inc_ref(v_body_1073_);
lean_dec_ref_known(v_b_1059_, 3);
v_a_1067_ = v_body_1073_;
goto v___jp_1066_;
}
else
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1);
v___x_1075_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_1074_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_dec_ref_known(v___x_1075_, 1);
v_a_1067_ = v_b_1059_;
goto v___jp_1066_;
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec_ref(v_b_1059_);
lean_dec(v_a_1058_);
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
}
v___jp_1066_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_unsigned_to_nat(1u);
v___x_1069_ = lean_nat_add(v_a_1058_, v___x_1068_);
lean_dec(v_a_1058_);
v_a_1058_ = v___x_1069_;
v_b_1059_ = v_a_1067_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object* v_upperBound_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1084_, v_a_1085_, v_b_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec(v_upperBound_1084_);
return v_res_1093_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1094_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1095_ = lean_unsigned_to_nat(11u);
v___x_1096_ = lean_unsigned_to_nat(132u);
v___x_1097_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_1098_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1099_ = l_mkPanicMessageWithDecl(v___x_1098_, v___x_1097_, v___x_1096_, v___x_1095_, v___x_1094_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object* v_upperBound_1100_, lean_object* v_a_1101_, lean_object* v_b_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_a_1110_; uint8_t v___x_1114_; 
v___x_1114_ = lean_nat_dec_lt(v_a_1101_, v_upperBound_1100_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; 
lean_dec(v_a_1101_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v_b_1102_);
return v___x_1115_;
}
else
{
lean_object* v_fst_1116_; 
v_fst_1116_ = lean_ctor_get(v_b_1102_, 0);
lean_inc(v_fst_1116_);
if (lean_obj_tag(v_fst_1116_) == 7)
{
lean_object* v_snd_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1150_; 
v_snd_1117_ = lean_ctor_get(v_b_1102_, 1);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_b_1102_);
if (v_isSharedCheck_1150_ == 0)
{
lean_object* v_unused_1151_; 
v_unused_1151_ = lean_ctor_get(v_b_1102_, 0);
lean_dec(v_unused_1151_);
v___x_1119_ = v_b_1102_;
v_isShared_1120_ = v_isSharedCheck_1150_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_snd_1117_);
lean_dec(v_b_1102_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1150_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v_binderName_1121_; lean_object* v_binderType_1122_; lean_object* v_body_1123_; lean_object* v___x_1124_; 
v_binderName_1121_ = lean_ctor_get(v_fst_1116_, 0);
lean_inc(v_binderName_1121_);
v_binderType_1122_ = lean_ctor_get(v_fst_1116_, 1);
lean_inc_ref(v_binderType_1122_);
v_body_1123_ = lean_ctor_get(v_fst_1116_, 2);
lean_inc_ref(v_body_1123_);
lean_dec_ref_known(v_fst_1116_, 3);
v___x_1124_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_1122_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; uint8_t v___x_1126_; uint8_t v___x_1127_; lean_object* v___x_1128_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v___x_1126_ = 0;
v___x_1127_ = 0;
v___x_1128_ = l_Lean_Compiler_LCNF_mkParam(v___x_1126_, v_binderName_1121_, v_a_1125_, v___x_1127_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v___x_1128_, 1);
v___x_1130_ = lean_array_push(v_snd_1117_, v_a_1129_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1130_);
lean_ctor_set(v___x_1119_, 0, v_body_1123_);
v___x_1132_ = v___x_1119_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_body_1123_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
v_a_1110_ = v___x_1132_;
goto v___jp_1109_;
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref(v_body_1123_);
lean_del_object(v___x_1119_);
lean_dec(v_snd_1117_);
lean_dec(v_a_1101_);
v_a_1134_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1128_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1128_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec_ref(v_body_1123_);
lean_dec(v_binderName_1121_);
lean_del_object(v___x_1119_);
lean_dec(v_snd_1117_);
lean_dec(v_a_1101_);
v_a_1142_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1124_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1124_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
else
{
lean_object* v_snd_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1169_; 
v_snd_1152_ = lean_ctor_get(v_b_1102_, 1);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_b_1102_);
if (v_isSharedCheck_1169_ == 0)
{
lean_object* v_unused_1170_; 
v_unused_1170_ = lean_ctor_get(v_b_1102_, 0);
lean_dec(v_unused_1170_);
v___x_1154_ = v_b_1102_;
v_isShared_1155_ = v_isSharedCheck_1169_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_snd_1152_);
lean_dec(v_b_1102_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1169_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0);
v___x_1157_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_1156_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v___x_1159_; 
lean_dec_ref_known(v___x_1157_, 1);
if (v_isShared_1155_ == 0)
{
v___x_1159_ = v___x_1154_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_fst_1116_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_snd_1152_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
v_a_1110_ = v___x_1159_;
goto v___jp_1109_;
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_del_object(v___x_1154_);
lean_dec(v_snd_1152_);
lean_dec(v_fst_1116_);
lean_dec(v_a_1101_);
v_a_1161_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1157_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1157_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
}
}
v___jp_1109_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = lean_unsigned_to_nat(1u);
v___x_1112_ = lean_nat_add(v_a_1101_, v___x_1111_);
lean_dec(v_a_1101_);
v_a_1101_ = v___x_1112_;
v_b_1102_ = v_a_1110_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object* v_upperBound_1171_, lean_object* v_a_1172_, lean_object* v_b_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1171_, v_a_1172_, v_b_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec(v_upperBound_1171_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object* v_ctorType_1181_, lean_object* v_numParams_1182_, lean_object* v_numNewFields_1183_, lean_object* v_oldFields_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_unsigned_to_nat(0u);
v___x_1192_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_numParams_1182_, v___x_1191_, v_ctorType_1181_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
lean_inc(v_a_1193_);
lean_dec_ref_known(v___x_1192_, 1);
v___x_1194_ = lean_array_get_size(v_oldFields_1184_);
v___x_1195_ = lean_nat_add(v___x_1194_, v_numNewFields_1183_);
v___x_1196_ = lean_mk_empty_array_with_capacity(v___x_1195_);
lean_dec(v___x_1195_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v_a_1193_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_numNewFields_1183_, v___x_1191_, v___x_1197_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1208_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1208_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1208_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v_snd_1203_; lean_object* v___x_1204_; lean_object* v___x_1206_; 
v_snd_1203_ = lean_ctor_get(v_a_1199_, 1);
lean_inc(v_snd_1203_);
lean_dec(v_a_1199_);
v___x_1204_ = l_Array_append___redArg(v_snd_1203_, v_oldFields_1184_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1204_);
v___x_1206_ = v___x_1201_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1198_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1198_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1192_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1192_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object* v_ctorType_1225_, lean_object* v_numParams_1226_, lean_object* v_numNewFields_1227_, lean_object* v_oldFields_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_ctorType_1225_, v_numParams_1226_, v_numNewFields_1227_, v_oldFields_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
lean_dec(v_a_1229_);
lean_dec_ref(v_oldFields_1228_);
lean_dec(v_numNewFields_1227_);
lean_dec(v_numParams_1226_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object* v_upperBound_1236_, lean_object* v_inst_1237_, lean_object* v_R_1238_, lean_object* v_a_1239_, lean_object* v_b_1240_, lean_object* v_c_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1236_, v_a_1239_, v_b_1240_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object* v_upperBound_1249_, lean_object* v_inst_1250_, lean_object* v_R_1251_, lean_object* v_a_1252_, lean_object* v_b_1253_, lean_object* v_c_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(v_upperBound_1249_, v_inst_1250_, v_R_1251_, v_a_1252_, v_b_1253_, v_c_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec(v_upperBound_1249_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object* v_upperBound_1262_, lean_object* v_inst_1263_, lean_object* v_R_1264_, lean_object* v_a_1265_, lean_object* v_b_1266_, lean_object* v_c_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1262_, v_a_1265_, v_b_1266_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object* v_upperBound_1275_, lean_object* v_inst_1276_, lean_object* v_R_1277_, lean_object* v_a_1278_, lean_object* v_b_1279_, lean_object* v_c_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(v_upperBound_1275_, v_inst_1276_, v_R_1277_, v_a_1278_, v_b_1279_, v_c_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec(v_upperBound_1275_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t v_sz_1288_, size_t v_i_1289_, lean_object* v_bs_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
uint8_t v___x_1296_; 
v___x_1296_ = lean_usize_dec_lt(v_i_1289_, v_sz_1288_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = l_unsafeCast___redArg(v_bs_1290_);
lean_dec_ref(v_bs_1290_);
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
return v___x_1298_;
}
else
{
lean_object* v_v_1299_; lean_object* v___x_1300_; lean_object* v_bs_x27_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v_v_1299_ = lean_array_uget(v_bs_1290_, v_i_1289_);
v___x_1300_ = lean_unsigned_to_nat(0u);
v_bs_x27_1301_ = lean_array_uset(v_bs_1290_, v_i_1289_, v___x_1300_);
v___x_1302_ = l_unsafeCast___redArg(v_v_1299_);
lean_dec(v_v_1299_);
v___x_1303_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v___x_1302_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; size_t v___x_1305_; size_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1305_ = ((size_t)1ULL);
v___x_1306_ = lean_usize_add(v_i_1289_, v___x_1305_);
v___x_1307_ = l_unsafeCast___redArg(v_a_1304_);
lean_dec(v_a_1304_);
v___x_1308_ = lean_array_uset(v_bs_x27_1301_, v_i_1289_, v___x_1307_);
v_i_1289_ = v___x_1306_;
v_bs_1290_ = v___x_1308_;
goto _start;
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v_bs_x27_1301_);
v_a_1310_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1303_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1303_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object* v_sz_1318_, lean_object* v_i_1319_, lean_object* v_bs_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
size_t v_sz_boxed_1326_; size_t v_i_boxed_1327_; lean_object* v_res_1328_; 
v_sz_boxed_1326_ = lean_unbox_usize(v_sz_1318_);
lean_dec(v_sz_1318_);
v_i_boxed_1327_ = lean_unbox_usize(v_i_1319_);
lean_dec(v_i_1319_);
v_res_1328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_boxed_1326_, v_i_boxed_1327_, v_bs_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec(v___y_1321_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t v_sz_1329_, size_t v_i_1330_, lean_object* v_bs_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_1329_, v_i_1330_, v_bs_1331_, v___y_1332_, v___y_1334_, v___y_1335_, v___y_1336_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object* v_sz_1339_, lean_object* v_i_1340_, lean_object* v_bs_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
size_t v_sz_boxed_1348_; size_t v_i_boxed_1349_; lean_object* v_res_1350_; 
v_sz_boxed_1348_ = lean_unbox_usize(v_sz_1339_);
lean_dec(v_sz_1339_);
v_i_boxed_1349_ = lean_unbox_usize(v_i_1340_);
lean_dec(v_i_1340_);
v_res_1350_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(v_sz_boxed_1348_, v_i_boxed_1349_, v_bs_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
return v_res_1350_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object* v_msg_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v_toApplicative_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1423_; 
v___x_1359_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1360_ = l_StateRefT_x27_instMonad___redArg(v___x_1359_);
v_toApplicative_1361_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1423_ == 0)
{
lean_object* v_unused_1424_; 
v_unused_1424_ = lean_ctor_get(v___x_1360_, 1);
lean_dec(v_unused_1424_);
v___x_1363_ = v___x_1360_;
v_isShared_1364_ = v_isSharedCheck_1423_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_toApplicative_1361_);
lean_dec(v___x_1360_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1423_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v_toFunctor_1365_; lean_object* v_toSeq_1366_; lean_object* v_toSeqLeft_1367_; lean_object* v_toSeqRight_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1421_; 
v_toFunctor_1365_ = lean_ctor_get(v_toApplicative_1361_, 0);
v_toSeq_1366_ = lean_ctor_get(v_toApplicative_1361_, 2);
v_toSeqLeft_1367_ = lean_ctor_get(v_toApplicative_1361_, 3);
v_toSeqRight_1368_ = lean_ctor_get(v_toApplicative_1361_, 4);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_toApplicative_1361_);
if (v_isSharedCheck_1421_ == 0)
{
lean_object* v_unused_1422_; 
v_unused_1422_ = lean_ctor_get(v_toApplicative_1361_, 1);
lean_dec(v_unused_1422_);
v___x_1370_ = v_toApplicative_1361_;
v_isShared_1371_ = v_isSharedCheck_1421_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_toSeqRight_1368_);
lean_inc(v_toSeqLeft_1367_);
lean_inc(v_toSeq_1366_);
lean_inc(v_toFunctor_1365_);
lean_dec(v_toApplicative_1361_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1421_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___f_1372_; lean_object* v___f_1373_; lean_object* v___f_1374_; lean_object* v___f_1375_; lean_object* v___x_1376_; lean_object* v___f_1377_; lean_object* v___f_1378_; lean_object* v___f_1379_; lean_object* v___x_1381_; 
v___f_1372_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1373_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1365_);
v___f_1374_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1374_, 0, v_toFunctor_1365_);
v___f_1375_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1375_, 0, v_toFunctor_1365_);
v___x_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___f_1374_);
lean_ctor_set(v___x_1376_, 1, v___f_1375_);
v___f_1377_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1377_, 0, v_toSeqRight_1368_);
v___f_1378_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1378_, 0, v_toSeqLeft_1367_);
v___f_1379_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1379_, 0, v_toSeq_1366_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v___f_1377_);
lean_ctor_set(v___x_1370_, 3, v___f_1378_);
lean_ctor_set(v___x_1370_, 2, v___f_1379_);
lean_ctor_set(v___x_1370_, 1, v___f_1372_);
lean_ctor_set(v___x_1370_, 0, v___x_1376_);
v___x_1381_ = v___x_1370_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v___f_1372_);
lean_ctor_set(v_reuseFailAlloc_1420_, 2, v___f_1379_);
lean_ctor_set(v_reuseFailAlloc_1420_, 3, v___f_1378_);
lean_ctor_set(v_reuseFailAlloc_1420_, 4, v___f_1377_);
v___x_1381_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1383_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 1, v___f_1373_);
lean_ctor_set(v___x_1363_, 0, v___x_1381_);
v___x_1383_ = v___x_1363_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v___f_1373_);
v___x_1383_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; lean_object* v_toApplicative_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1417_; 
v___x_1384_ = l_StateRefT_x27_instMonad___redArg(v___x_1383_);
v_toApplicative_1385_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1417_ == 0)
{
lean_object* v_unused_1418_; 
v_unused_1418_ = lean_ctor_get(v___x_1384_, 1);
lean_dec(v_unused_1418_);
v___x_1387_ = v___x_1384_;
v_isShared_1388_ = v_isSharedCheck_1417_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_toApplicative_1385_);
lean_dec(v___x_1384_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1417_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v_toFunctor_1389_; lean_object* v_toSeq_1390_; lean_object* v_toSeqLeft_1391_; lean_object* v_toSeqRight_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1415_; 
v_toFunctor_1389_ = lean_ctor_get(v_toApplicative_1385_, 0);
v_toSeq_1390_ = lean_ctor_get(v_toApplicative_1385_, 2);
v_toSeqLeft_1391_ = lean_ctor_get(v_toApplicative_1385_, 3);
v_toSeqRight_1392_ = lean_ctor_get(v_toApplicative_1385_, 4);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_toApplicative_1385_);
if (v_isSharedCheck_1415_ == 0)
{
lean_object* v_unused_1416_; 
v_unused_1416_ = lean_ctor_get(v_toApplicative_1385_, 1);
lean_dec(v_unused_1416_);
v___x_1394_ = v_toApplicative_1385_;
v_isShared_1395_ = v_isSharedCheck_1415_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_toSeqRight_1392_);
lean_inc(v_toSeqLeft_1391_);
lean_inc(v_toSeq_1390_);
lean_inc(v_toFunctor_1389_);
lean_dec(v_toApplicative_1385_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1415_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___f_1396_; lean_object* v___f_1397_; lean_object* v___f_1398_; lean_object* v___f_1399_; lean_object* v___x_1400_; lean_object* v___f_1401_; lean_object* v___f_1402_; lean_object* v___f_1403_; lean_object* v___x_1405_; 
v___f_1396_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1397_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1389_);
v___f_1398_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1398_, 0, v_toFunctor_1389_);
v___f_1399_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1399_, 0, v_toFunctor_1389_);
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___f_1398_);
lean_ctor_set(v___x_1400_, 1, v___f_1399_);
v___f_1401_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1401_, 0, v_toSeqRight_1392_);
v___f_1402_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1402_, 0, v_toSeqLeft_1391_);
v___f_1403_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1403_, 0, v_toSeq_1390_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___f_1401_);
lean_ctor_set(v___x_1394_, 3, v___f_1402_);
lean_ctor_set(v___x_1394_, 2, v___f_1403_);
lean_ctor_set(v___x_1394_, 1, v___f_1396_);
lean_ctor_set(v___x_1394_, 0, v___x_1400_);
v___x_1405_ = v___x_1394_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1400_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v___f_1396_);
lean_ctor_set(v_reuseFailAlloc_1414_, 2, v___f_1403_);
lean_ctor_set(v_reuseFailAlloc_1414_, 3, v___f_1402_);
lean_ctor_set(v_reuseFailAlloc_1414_, 4, v___f_1401_);
v___x_1405_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1407_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___f_1397_);
lean_ctor_set(v___x_1387_, 0, v___x_1405_);
v___x_1407_ = v___x_1387_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v___f_1397_);
v___x_1407_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_30710__overap_1411_; lean_object* v___x_1412_; 
v___x_1408_ = l_StateRefT_x27_instMonad___redArg(v___x_1407_);
v___x_1409_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1410_ = l_instInhabitedOfMonad___redArg(v___x_1408_, v___x_1409_);
v___x_30710__overap_1411_ = lean_panic_fn_borrowed(v___x_1410_, v_msg_1352_);
lean_dec(v___x_1410_);
lean_inc(v___y_1357_);
lean_inc_ref(v___y_1356_);
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1412_ = lean_apply_6(v___x_30710__overap_1411_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, lean_box(0));
return v___x_1412_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object* v_msg_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v_msg_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object* v_msg_1433_){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1435_ = lean_panic_fn_borrowed(v___x_1434_, v_msg_1433_);
return v___x_1435_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object* v_msg_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v_toApplicative_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1508_; 
v___x_1444_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1445_ = l_StateRefT_x27_instMonad___redArg(v___x_1444_);
v_toApplicative_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1508_ == 0)
{
lean_object* v_unused_1509_; 
v_unused_1509_ = lean_ctor_get(v___x_1445_, 1);
lean_dec(v_unused_1509_);
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1508_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_toApplicative_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1508_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v_toFunctor_1450_; lean_object* v_toSeq_1451_; lean_object* v_toSeqLeft_1452_; lean_object* v_toSeqRight_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1506_; 
v_toFunctor_1450_ = lean_ctor_get(v_toApplicative_1446_, 0);
v_toSeq_1451_ = lean_ctor_get(v_toApplicative_1446_, 2);
v_toSeqLeft_1452_ = lean_ctor_get(v_toApplicative_1446_, 3);
v_toSeqRight_1453_ = lean_ctor_get(v_toApplicative_1446_, 4);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_toApplicative_1446_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; 
v_unused_1507_ = lean_ctor_get(v_toApplicative_1446_, 1);
lean_dec(v_unused_1507_);
v___x_1455_ = v_toApplicative_1446_;
v_isShared_1456_ = v_isSharedCheck_1506_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_toSeqRight_1453_);
lean_inc(v_toSeqLeft_1452_);
lean_inc(v_toSeq_1451_);
lean_inc(v_toFunctor_1450_);
lean_dec(v_toApplicative_1446_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1506_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___f_1457_; lean_object* v___f_1458_; lean_object* v___f_1459_; lean_object* v___f_1460_; lean_object* v___x_1461_; lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___f_1464_; lean_object* v___x_1466_; 
v___f_1457_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1458_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1450_);
v___f_1459_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1459_, 0, v_toFunctor_1450_);
v___f_1460_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1460_, 0, v_toFunctor_1450_);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___f_1459_);
lean_ctor_set(v___x_1461_, 1, v___f_1460_);
v___f_1462_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1462_, 0, v_toSeqRight_1453_);
v___f_1463_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1463_, 0, v_toSeqLeft_1452_);
v___f_1464_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1464_, 0, v_toSeq_1451_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 4, v___f_1462_);
lean_ctor_set(v___x_1455_, 3, v___f_1463_);
lean_ctor_set(v___x_1455_, 2, v___f_1464_);
lean_ctor_set(v___x_1455_, 1, v___f_1457_);
lean_ctor_set(v___x_1455_, 0, v___x_1461_);
v___x_1466_ = v___x_1455_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1461_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v___f_1457_);
lean_ctor_set(v_reuseFailAlloc_1505_, 2, v___f_1464_);
lean_ctor_set(v_reuseFailAlloc_1505_, 3, v___f_1463_);
lean_ctor_set(v_reuseFailAlloc_1505_, 4, v___f_1462_);
v___x_1466_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1468_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v___f_1458_);
lean_ctor_set(v___x_1448_, 0, v___x_1466_);
v___x_1468_ = v___x_1448_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1466_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v___f_1458_);
v___x_1468_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1469_; lean_object* v_toApplicative_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1502_; 
v___x_1469_ = l_StateRefT_x27_instMonad___redArg(v___x_1468_);
v_toApplicative_1470_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v___x_1469_, 1);
lean_dec(v_unused_1503_);
v___x_1472_ = v___x_1469_;
v_isShared_1473_ = v_isSharedCheck_1502_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_toApplicative_1470_);
lean_dec(v___x_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1502_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v_toFunctor_1474_; lean_object* v_toSeq_1475_; lean_object* v_toSeqLeft_1476_; lean_object* v_toSeqRight_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1500_; 
v_toFunctor_1474_ = lean_ctor_get(v_toApplicative_1470_, 0);
v_toSeq_1475_ = lean_ctor_get(v_toApplicative_1470_, 2);
v_toSeqLeft_1476_ = lean_ctor_get(v_toApplicative_1470_, 3);
v_toSeqRight_1477_ = lean_ctor_get(v_toApplicative_1470_, 4);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_toApplicative_1470_);
if (v_isSharedCheck_1500_ == 0)
{
lean_object* v_unused_1501_; 
v_unused_1501_ = lean_ctor_get(v_toApplicative_1470_, 1);
lean_dec(v_unused_1501_);
v___x_1479_ = v_toApplicative_1470_;
v_isShared_1480_ = v_isSharedCheck_1500_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_toSeqRight_1477_);
lean_inc(v_toSeqLeft_1476_);
lean_inc(v_toSeq_1475_);
lean_inc(v_toFunctor_1474_);
lean_dec(v_toApplicative_1470_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1500_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___f_1481_; lean_object* v___f_1482_; lean_object* v___f_1483_; lean_object* v___f_1484_; lean_object* v___x_1485_; lean_object* v___f_1486_; lean_object* v___f_1487_; lean_object* v___f_1488_; lean_object* v___x_1490_; 
v___f_1481_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1482_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1474_);
v___f_1483_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1483_, 0, v_toFunctor_1474_);
v___f_1484_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1484_, 0, v_toFunctor_1474_);
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___f_1483_);
lean_ctor_set(v___x_1485_, 1, v___f_1484_);
v___f_1486_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1486_, 0, v_toSeqRight_1477_);
v___f_1487_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1487_, 0, v_toSeqLeft_1476_);
v___f_1488_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1488_, 0, v_toSeq_1475_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 4, v___f_1486_);
lean_ctor_set(v___x_1479_, 3, v___f_1487_);
lean_ctor_set(v___x_1479_, 2, v___f_1488_);
lean_ctor_set(v___x_1479_, 1, v___f_1481_);
lean_ctor_set(v___x_1479_, 0, v___x_1485_);
v___x_1490_ = v___x_1479_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v___f_1481_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v___f_1488_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v___f_1487_);
lean_ctor_set(v_reuseFailAlloc_1499_, 4, v___f_1486_);
v___x_1490_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
lean_object* v___x_1492_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 1, v___f_1482_);
lean_ctor_set(v___x_1472_, 0, v___x_1490_);
v___x_1492_ = v___x_1472_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v___x_1490_);
lean_ctor_set(v_reuseFailAlloc_1498_, 1, v___f_1482_);
v___x_1492_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_30725__overap_1496_; lean_object* v___x_1497_; 
v___x_1493_ = l_StateRefT_x27_instMonad___redArg(v___x_1492_);
v___x_1494_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1495_ = l_instInhabitedOfMonad___redArg(v___x_1493_, v___x_1494_);
v___x_30725__overap_1496_ = lean_panic_fn_borrowed(v___x_1495_, v_msg_1437_);
lean_dec(v___x_1495_);
lean_inc(v___y_1442_);
lean_inc_ref(v___y_1441_);
lean_inc(v___y_1440_);
lean_inc_ref(v___y_1439_);
lean_inc(v___y_1438_);
v___x_1497_ = lean_apply_6(v___x_30725__overap_1496_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, lean_box(0));
return v___x_1497_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object* v_msg_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v_msg_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
return v_res_1517_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1520_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1521_ = lean_unsigned_to_nat(9u);
v___x_1522_ = lean_unsigned_to_nat(650u);
v___x_1523_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__1));
v___x_1524_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__0));
v___x_1525_ = l_mkPanicMessageWithDecl(v___x_1524_, v___x_1523_, v___x_1522_, v___x_1521_, v___x_1520_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4(void){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1528_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__3));
v___x_1529_ = lean_unsigned_to_nat(66u);
v___x_1530_ = lean_unsigned_to_nat(363u);
v___x_1531_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1532_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1533_ = l_mkPanicMessageWithDecl(v___x_1532_, v___x_1531_, v___x_1530_, v___x_1529_, v___x_1528_);
return v___x_1533_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1534_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1535_ = lean_unsigned_to_nat(27u);
v___x_1536_ = lean_unsigned_to_nat(319u);
v___x_1537_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1538_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1539_ = l_mkPanicMessageWithDecl(v___x_1538_, v___x_1537_, v___x_1536_, v___x_1535_, v___x_1534_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1594_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1595_ = lean_unsigned_to_nat(2u);
v___x_1596_ = lean_unsigned_to_nat(302u);
v___x_1597_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1598_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1599_ = l_mkPanicMessageWithDecl(v___x_1598_, v___x_1597_, v___x_1596_, v___x_1595_, v___x_1594_);
return v___x_1599_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1601_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__2));
v___x_1602_ = lean_unsigned_to_nat(2u);
v___x_1603_ = lean_unsigned_to_nat(304u);
v___x_1604_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1605_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1606_ = l_mkPanicMessageWithDecl(v___x_1605_, v___x_1604_, v___x_1603_, v___x_1602_, v___x_1601_);
return v___x_1606_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5(void){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1608_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__4));
v___x_1609_ = lean_unsigned_to_nat(2u);
v___x_1610_ = lean_unsigned_to_nat(305u);
v___x_1611_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1612_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1613_ = l_mkPanicMessageWithDecl(v___x_1612_, v___x_1611_, v___x_1610_, v___x_1609_, v___x_1608_);
return v___x_1613_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1614_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6(void){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1615_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1616_ = lean_unsigned_to_nat(41u);
v___x_1617_ = lean_unsigned_to_nat(303u);
v___x_1618_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1619_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1620_ = l_mkPanicMessageWithDecl(v___x_1619_, v___x_1618_, v___x_1617_, v___x_1616_, v___x_1615_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object* v_info_1621_, lean_object* v_c_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_){
_start:
{
lean_object* v_discr_1629_; lean_object* v_alts_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1708_; 
v_discr_1629_ = lean_ctor_get(v_c_1622_, 2);
v_alts_1630_ = lean_ctor_get(v_c_1622_, 3);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_c_1622_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; lean_object* v_unused_1710_; 
v_unused_1709_ = lean_ctor_get(v_c_1622_, 1);
lean_dec(v_unused_1709_);
v_unused_1710_ = lean_ctor_get(v_c_1622_, 0);
lean_dec(v_unused_1710_);
v___x_1632_ = v_c_1622_;
v_isShared_1633_ = v_isSharedCheck_1708_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_alts_1630_);
lean_inc(v_discr_1629_);
lean_dec(v_c_1622_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1708_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; 
v___x_1634_ = lean_array_get_size(v_alts_1630_);
v___x_1635_ = lean_unsigned_to_nat(1u);
v___x_1636_ = lean_nat_dec_eq(v___x_1634_, v___x_1635_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_del_object(v___x_1632_);
lean_dec_ref(v_alts_1630_);
lean_dec(v_discr_1629_);
v___x_1637_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__1, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1);
v___x_1638_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1637_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1639_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1640_ = lean_unsigned_to_nat(0u);
v___x_1641_ = lean_array_get(v___x_1639_, v_alts_1630_, v___x_1640_);
lean_dec_ref(v_alts_1630_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_ctorName_1642_; lean_object* v_params_1643_; lean_object* v_code_1644_; lean_object* v_ctorName_1645_; lean_object* v_fieldIdx_1646_; uint8_t v___x_1647_; 
v_ctorName_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_ctorName_1642_);
v_params_1643_ = lean_ctor_get(v___x_1641_, 1);
lean_inc_ref(v_params_1643_);
v_code_1644_ = lean_ctor_get(v___x_1641_, 2);
lean_inc_ref(v_code_1644_);
lean_dec_ref_known(v___x_1641_, 3);
v_ctorName_1645_ = lean_ctor_get(v_info_1621_, 0);
v_fieldIdx_1646_ = lean_ctor_get(v_info_1621_, 2);
v___x_1647_ = lean_name_eq(v_ctorName_1642_, v_ctorName_1645_);
lean_dec(v_ctorName_1642_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
lean_dec_ref(v_code_1644_);
lean_dec_ref(v_params_1643_);
lean_del_object(v___x_1632_);
lean_dec(v_discr_1629_);
v___x_1648_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__3, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3);
v___x_1649_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1648_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
return v___x_1649_;
}
else
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = lean_array_get_size(v_params_1643_);
v___x_1651_ = lean_nat_dec_lt(v_fieldIdx_1646_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
lean_dec_ref(v_code_1644_);
lean_dec_ref(v_params_1643_);
lean_del_object(v___x_1632_);
lean_dec(v_discr_1629_);
v___x_1652_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__5, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5);
v___x_1653_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1652_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
return v___x_1653_;
}
else
{
uint8_t v___x_1654_; lean_object* v___x_1655_; lean_object* v_p_1656_; lean_object* v___x_1657_; 
v___x_1654_ = 0;
v___x_1655_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v_p_1656_ = lean_array_get(v___x_1655_, v_params_1643_, v_fieldIdx_1646_);
v___x_1657_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1654_, v_params_1643_, v_a_1625_);
lean_dec_ref(v_params_1643_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_fvarId_1658_; lean_object* v_binderName_1659_; lean_object* v_type_1660_; lean_object* v___x_1661_; 
lean_dec_ref_known(v___x_1657_, 1);
v_fvarId_1658_ = lean_ctor_get(v_p_1656_, 0);
lean_inc(v_fvarId_1658_);
v_binderName_1659_ = lean_ctor_get(v_p_1656_, 1);
lean_inc(v_binderName_1659_);
v_type_1660_ = lean_ctor_get(v_p_1656_, 2);
lean_inc_ref(v_type_1660_);
lean_dec(v_p_1656_);
v___x_1661_ = l_Lean_Compiler_LCNF_toMonoType(v_type_1660_, v_a_1626_, v_a_1627_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1666_; 
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1663_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_1664_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_discr_1629_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 3, v___x_1664_);
lean_ctor_set(v___x_1632_, 2, v_a_1662_);
lean_ctor_set(v___x_1632_, 1, v_binderName_1659_);
lean_ctor_set(v___x_1632_, 0, v_fvarId_1658_);
v___x_1666_ = v___x_1632_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_fvarId_1658_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_binderName_1659_);
lean_ctor_set(v_reuseFailAlloc_1689_, 2, v_a_1662_);
lean_ctor_set(v_reuseFailAlloc_1689_, 3, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
lean_object* v___x_1667_; lean_object* v_lctx_1668_; lean_object* v_nextIdx_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1688_; 
v___x_1667_ = lean_st_ref_take(v_a_1625_);
v_lctx_1668_ = lean_ctor_get(v___x_1667_, 0);
v_nextIdx_1669_ = lean_ctor_get(v___x_1667_, 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1671_ = v___x_1667_;
v_isShared_1672_ = v_isSharedCheck_1688_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_nextIdx_1669_);
lean_inc(v_lctx_1668_);
lean_dec(v___x_1667_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1688_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1675_; 
lean_inc_ref(v___x_1666_);
v___x_1673_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1654_, v_lctx_1668_, v___x_1666_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 0, v___x_1673_);
v___x_1675_ = v___x_1671_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1673_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_nextIdx_1669_);
v___x_1675_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = lean_st_ref_put(v_a_1625_, v___x_1675_);
v___x_1677_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1644_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1686_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1666_);
lean_ctor_set(v___x_1682_, 1, v_a_1678_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1682_);
v___x_1684_ = v___x_1680_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
else
{
lean_dec_ref(v___x_1666_);
return v___x_1677_;
}
}
}
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec(v_binderName_1659_);
lean_dec(v_fvarId_1658_);
lean_dec_ref(v_code_1644_);
lean_del_object(v___x_1632_);
lean_dec(v_discr_1629_);
v_a_1690_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1661_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1661_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
lean_dec(v_p_1656_);
lean_dec_ref(v_code_1644_);
lean_del_object(v___x_1632_);
lean_dec(v_discr_1629_);
v_a_1698_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1657_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1657_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
}
else
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_dec(v___x_1641_);
lean_del_object(v___x_1632_);
lean_dec(v_discr_1629_);
v___x_1706_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__6, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6);
v___x_1707_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1706_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
return v___x_1707_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1));
v___x_1716_ = lean_unsigned_to_nat(70u);
v___x_1717_ = lean_unsigned_to_nat(373u);
v___x_1718_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1719_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1720_ = l_mkPanicMessageWithDecl(v___x_1719_, v___x_1718_, v___x_1717_, v___x_1716_, v___x_1715_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object* v___x_1721_, uint8_t v___x_1722_, size_t v_sz_1723_, size_t v_i_1724_, lean_object* v_bs_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v___x_1732_; 
v___x_1732_ = lean_usize_dec_lt(v_i_1724_, v_sz_1723_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec_ref(v___x_1721_);
v___x_1733_ = l_unsafeCast___redArg(v_bs_1725_);
lean_dec_ref(v_bs_1725_);
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
return v___x_1734_;
}
else
{
lean_object* v_v_1735_; lean_object* v___x_1736_; lean_object* v_bs_x27_1737_; lean_object* v_a_1739_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___x_1762_; 
v_v_1735_ = lean_array_uget(v_bs_1725_, v_i_1724_);
v___x_1736_ = lean_unsigned_to_nat(0u);
v_bs_x27_1737_ = lean_array_uset(v_bs_1725_, v_i_1724_, v___x_1736_);
v___x_1762_ = l_unsafeCast___redArg(v_v_1735_);
lean_dec(v_v_1735_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_ctorName_1763_; lean_object* v_params_1764_; lean_object* v_code_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1803_; 
v_ctorName_1763_ = lean_ctor_get(v___x_1762_, 0);
v_params_1764_ = lean_ctor_get(v___x_1762_, 1);
v_code_1765_ = lean_ctor_get(v___x_1762_, 2);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1767_ = v___x_1762_;
v_isShared_1768_ = v_isSharedCheck_1803_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_code_1765_);
lean_inc(v_params_1764_);
lean_inc(v_ctorName_1763_);
lean_dec(v___x_1762_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1803_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4));
v___x_1770_ = l_Lean_Name_append(v_ctorName_1763_, v___x_1769_);
lean_inc(v___x_1770_);
lean_inc_ref(v___x_1721_);
v___x_1771_ = l_Lean_Environment_find_x3f(v___x_1721_, v___x_1770_, v___x_1722_);
if (lean_obj_tag(v___x_1771_) == 1)
{
lean_object* v_val_1772_; 
v_val_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_val_1772_);
lean_dec_ref_known(v___x_1771_, 1);
if (lean_obj_tag(v_val_1772_) == 6)
{
lean_object* v_val_1773_; lean_object* v_toConstantVal_1774_; lean_object* v_numParams_1775_; lean_object* v_numFields_1776_; lean_object* v_type_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_val_1773_ = lean_ctor_get(v_val_1772_, 0);
lean_inc_ref(v_val_1773_);
lean_dec_ref_known(v_val_1772_, 1);
v_toConstantVal_1774_ = lean_ctor_get(v_val_1773_, 0);
lean_inc_ref(v_toConstantVal_1774_);
v_numParams_1775_ = lean_ctor_get(v_val_1773_, 3);
lean_inc(v_numParams_1775_);
v_numFields_1776_ = lean_ctor_get(v_val_1773_, 4);
lean_inc(v_numFields_1776_);
lean_dec_ref(v_val_1773_);
v_type_1777_ = lean_ctor_get(v_toConstantVal_1774_, 2);
lean_inc_ref(v_type_1777_);
lean_dec_ref(v_toConstantVal_1774_);
v___x_1778_ = lean_array_get_size(v_params_1764_);
v___x_1779_ = lean_nat_sub(v_numFields_1776_, v___x_1778_);
lean_dec(v_numFields_1776_);
v___x_1780_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_type_1777_, v_numParams_1775_, v___x_1779_, v_params_1764_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
lean_dec_ref(v_params_1764_);
lean_dec(v___x_1779_);
lean_dec(v_numParams_1775_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
v___x_1782_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1765_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1785_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v___x_1782_, 1);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 2, v_a_1783_);
lean_ctor_set(v___x_1767_, 1, v_a_1781_);
lean_ctor_set(v___x_1767_, 0, v___x_1770_);
v___x_1785_ = v___x_1767_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1770_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_a_1781_);
lean_ctor_set(v_reuseFailAlloc_1786_, 2, v_a_1783_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
v_a_1739_ = v___x_1785_;
goto v___jp_1738_;
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
lean_dec(v_a_1781_);
lean_dec(v___x_1770_);
lean_del_object(v___x_1767_);
lean_dec_ref(v_bs_x27_1737_);
lean_dec_ref(v___x_1721_);
v_a_1787_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1782_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1782_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec(v___x_1770_);
lean_del_object(v___x_1767_);
lean_dec_ref(v_code_1765_);
lean_dec_ref(v_bs_x27_1737_);
lean_dec_ref(v___x_1721_);
v_a_1795_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1780_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1780_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_dec(v_val_1772_);
lean_dec(v___x_1770_);
lean_del_object(v___x_1767_);
lean_dec_ref(v_code_1765_);
lean_dec_ref(v_params_1764_);
v___y_1746_ = v___y_1726_;
v___y_1747_ = v___y_1727_;
v___y_1748_ = v___y_1728_;
v___y_1749_ = v___y_1729_;
v___y_1750_ = v___y_1730_;
goto v___jp_1745_;
}
}
else
{
lean_dec(v___x_1771_);
lean_dec(v___x_1770_);
lean_del_object(v___x_1767_);
lean_dec_ref(v_code_1765_);
lean_dec_ref(v_params_1764_);
v___y_1746_ = v___y_1726_;
v___y_1747_ = v___y_1727_;
v___y_1748_ = v___y_1728_;
v___y_1749_ = v___y_1729_;
v___y_1750_ = v___y_1730_;
goto v___jp_1745_;
}
}
}
else
{
lean_object* v_code_1804_; lean_object* v___x_1805_; 
v_code_1804_ = lean_ctor_get(v___x_1762_, 0);
lean_inc_ref(v_code_1804_);
v___x_1805_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1804_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1807_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1805_, 1);
v___x_1807_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v___x_1762_, v_a_1806_);
v_a_1739_ = v___x_1807_;
goto v___jp_1738_;
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
lean_dec_ref_known(v___x_1762_, 1);
lean_dec_ref(v_bs_x27_1737_);
lean_dec_ref(v___x_1721_);
v_a_1808_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v___x_1805_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1805_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
}
v___jp_1738_:
{
size_t v___x_1740_; size_t v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1740_ = ((size_t)1ULL);
v___x_1741_ = lean_usize_add(v_i_1724_, v___x_1740_);
v___x_1742_ = l_unsafeCast___redArg(v_a_1739_);
lean_dec_ref(v_a_1739_);
v___x_1743_ = lean_array_uset(v_bs_x27_1737_, v_i_1724_, v___x_1742_);
v_i_1724_ = v___x_1741_;
v_bs_1725_ = v___x_1743_;
goto _start;
}
v___jp_1745_:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2);
v___x_1752_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v___x_1751_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v_a_1739_ = v_a_1753_;
goto v___jp_1738_;
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec_ref(v_bs_x27_1737_);
lean_dec_ref(v___x_1721_);
v_a_1754_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1752_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1752_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object* v___x_1816_, lean_object* v___x_1817_, lean_object* v_sz_1818_, lean_object* v_i_1819_, lean_object* v_bs_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
uint8_t v___x_34183__boxed_1827_; size_t v_sz_boxed_1828_; size_t v_i_boxed_1829_; lean_object* v_res_1830_; 
v___x_34183__boxed_1827_ = lean_unbox(v___x_1817_);
v_sz_boxed_1828_ = lean_unbox_usize(v_sz_1818_);
lean_dec(v_sz_1818_);
v_i_boxed_1829_ = lean_unbox_usize(v_i_1819_);
lean_dec(v_i_1819_);
v_res_1830_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v___x_1816_, v___x_34183__boxed_1827_, v_sz_boxed_1828_, v_i_boxed_1829_, v_bs_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
lean_dec(v___y_1823_);
lean_dec_ref(v___y_1822_);
lean_dec(v___y_1821_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t v_sz_1831_, size_t v_i_1832_, lean_object* v_bs_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
uint8_t v___x_1840_; 
v___x_1840_ = lean_usize_dec_lt(v_i_1832_, v_sz_1831_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = l_unsafeCast___redArg(v_bs_1833_);
lean_dec_ref(v_bs_1833_);
v___x_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
return v___x_1842_;
}
else
{
lean_object* v_v_1843_; lean_object* v___x_1844_; lean_object* v_bs_x27_1845_; lean_object* v_a_1847_; lean_object* v___x_1853_; 
v_v_1843_ = lean_array_uget(v_bs_1833_, v_i_1832_);
v___x_1844_ = lean_unsigned_to_nat(0u);
v_bs_x27_1845_ = lean_array_uset(v_bs_1833_, v_i_1832_, v___x_1844_);
v___x_1853_ = l_unsafeCast___redArg(v_v_1843_);
lean_dec(v_v_1843_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_params_1854_; lean_object* v_code_1855_; uint8_t v___x_1856_; size_t v_sz_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_32612__overap_1862_; lean_object* v___x_1863_; 
v_params_1854_ = lean_ctor_get(v___x_1853_, 1);
lean_inc_ref(v_params_1854_);
v_code_1855_ = lean_ctor_get(v___x_1853_, 2);
lean_inc_ref(v_code_1855_);
v___x_1856_ = 0;
v_sz_1857_ = lean_array_size(v_params_1854_);
v___x_1858_ = l_unsafeCast___redArg(v_params_1854_);
lean_dec_ref(v_params_1854_);
v___x_1859_ = lean_box_usize(v_sz_1857_);
v___x_1860_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_1861_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed), 9, 3);
lean_closure_set(v___x_1861_, 0, v___x_1859_);
lean_closure_set(v___x_1861_, 1, v___x_1860_);
lean_closure_set(v___x_1861_, 2, v___x_1858_);
v___x_32612__overap_1862_ = l_unsafeCast___redArg(v___x_1861_);
lean_dec_ref(v___x_1861_);
lean_inc(v___y_1838_);
lean_inc_ref(v___y_1837_);
lean_inc(v___y_1836_);
lean_inc_ref(v___y_1835_);
lean_inc(v___y_1834_);
v___x_1863_ = lean_apply_6(v___x_32612__overap_1862_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, lean_box(0));
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1855_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; lean_object* v___x_1867_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v___x_1867_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v___x_1856_, v___x_1853_, v_a_1864_, v_a_1866_);
v_a_1847_ = v___x_1867_;
goto v___jp_1846_;
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_a_1864_);
lean_dec_ref_known(v___x_1853_, 3);
lean_dec_ref(v_bs_x27_1845_);
v_a_1868_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1865_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1865_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
lean_dec_ref(v_code_1855_);
lean_dec_ref_known(v___x_1853_, 3);
lean_dec_ref(v_bs_x27_1845_);
v_a_1876_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1863_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1863_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
else
{
lean_object* v_code_1884_; lean_object* v___x_1885_; 
v_code_1884_ = lean_ctor_get(v___x_1853_, 0);
lean_inc_ref(v_code_1884_);
v___x_1885_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1884_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1887_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
lean_inc(v_a_1886_);
lean_dec_ref_known(v___x_1885_, 1);
v___x_1887_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v___x_1853_, v_a_1886_);
v_a_1847_ = v___x_1887_;
goto v___jp_1846_;
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
lean_dec_ref_known(v___x_1853_, 1);
lean_dec_ref(v_bs_x27_1845_);
v_a_1888_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1885_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1885_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
v___jp_1846_:
{
size_t v___x_1848_; size_t v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1848_ = ((size_t)1ULL);
v___x_1849_ = lean_usize_add(v_i_1832_, v___x_1848_);
v___x_1850_ = l_unsafeCast___redArg(v_a_1847_);
lean_dec_ref(v_a_1847_);
v___x_1851_ = lean_array_uset(v_bs_x27_1845_, v_i_1832_, v___x_1850_);
v_i_1832_ = v___x_1849_;
v_bs_1833_ = v___x_1851_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object* v_sz_1896_, lean_object* v_i_1897_, lean_object* v_bs_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
size_t v_sz_boxed_1905_; size_t v_i_boxed_1906_; lean_object* v_res_1907_; 
v_sz_boxed_1905_ = lean_unbox_usize(v_sz_1896_);
lean_dec(v_sz_1896_);
v_i_boxed_1906_ = lean_unbox_usize(v_i_1897_);
lean_dec(v_i_1897_);
v_res_1907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_boxed_1905_, v_i_boxed_1906_, v_bs_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
return v_res_1907_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1909_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1910_ = lean_unsigned_to_nat(2u);
v___x_1911_ = lean_unsigned_to_nat(291u);
v___x_1912_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1913_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1914_ = l_mkPanicMessageWithDecl(v___x_1913_, v___x_1912_, v___x_1911_, v___x_1910_, v___x_1909_);
return v___x_1914_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1919_ = lean_box(0);
v___x_1920_ = lean_unsigned_to_nat(2u);
v___x_1921_ = lean_mk_empty_array_with_capacity(v___x_1920_);
v___x_1922_ = lean_array_push(v___x_1921_, v___x_1919_);
return v___x_1922_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1923_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1924_ = lean_unsigned_to_nat(34u);
v___x_1925_ = lean_unsigned_to_nat(292u);
v___x_1926_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1927_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1928_ = l_mkPanicMessageWithDecl(v___x_1927_, v___x_1926_, v___x_1925_, v___x_1924_, v___x_1923_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object* v_c_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v_discr_1936_; lean_object* v_alts_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_2006_; 
v_discr_1936_ = lean_ctor_get(v_c_1929_, 2);
v_alts_1937_ = lean_ctor_get(v_c_1929_, 3);
v_isSharedCheck_2006_ = !lean_is_exclusive(v_c_1929_);
if (v_isSharedCheck_2006_ == 0)
{
lean_object* v_unused_2007_; lean_object* v_unused_2008_; 
v_unused_2007_ = lean_ctor_get(v_c_1929_, 1);
lean_dec(v_unused_2007_);
v_unused_2008_ = lean_ctor_get(v_c_1929_, 0);
lean_dec(v_unused_2008_);
v___x_1939_ = v_c_1929_;
v_isShared_1940_ = v_isSharedCheck_2006_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_alts_1937_);
lean_inc(v_discr_1936_);
lean_dec(v_c_1929_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_2006_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v___x_1941_ = lean_array_get_size(v_alts_1937_);
v___x_1942_ = lean_unsigned_to_nat(1u);
v___x_1943_ = lean_nat_dec_eq(v___x_1941_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
lean_del_object(v___x_1939_);
lean_dec_ref(v_alts_1937_);
lean_dec(v_discr_1936_);
v___x_1944_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1);
v___x_1945_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1944_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_);
return v___x_1945_;
}
else
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1946_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1947_ = lean_unsigned_to_nat(0u);
v___x_1948_ = lean_array_get(v___x_1946_, v_alts_1937_, v___x_1947_);
lean_dec_ref(v_alts_1937_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_params_1949_; lean_object* v_code_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_2002_; 
v_params_1949_ = lean_ctor_get(v___x_1948_, 1);
v_code_1950_ = lean_ctor_get(v___x_1948_, 2);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_2002_ == 0)
{
lean_object* v_unused_2003_; 
v_unused_2003_ = lean_ctor_get(v___x_1948_, 0);
lean_dec(v_unused_2003_);
v___x_1952_ = v___x_1948_;
v_isShared_1953_ = v_isSharedCheck_2002_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_code_1950_);
lean_inc(v_params_1949_);
lean_dec(v___x_1948_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_2002_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
uint8_t v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1954_ = 0;
v___x_1955_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1956_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1954_, v_params_1949_, v_a_1932_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v___x_1957_; lean_object* v_fvarId_1958_; lean_object* v_binderName_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1967_; 
lean_dec_ref_known(v___x_1956_, 1);
v___x_1957_ = lean_array_get(v___x_1955_, v_params_1949_, v___x_1947_);
lean_dec_ref(v_params_1949_);
v_fvarId_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_fvarId_1958_);
v_binderName_1959_ = lean_ctor_get(v___x_1957_, 1);
lean_inc(v_binderName_1959_);
lean_dec(v___x_1957_);
v___x_1960_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1961_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4));
v___x_1962_ = lean_box(0);
v___x_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1963_, 0, v_discr_1936_);
v___x_1964_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1965_ = lean_array_push(v___x_1964_, v___x_1963_);
if (v_isShared_1953_ == 0)
{
lean_ctor_set_tag(v___x_1952_, 3);
lean_ctor_set(v___x_1952_, 2, v___x_1965_);
lean_ctor_set(v___x_1952_, 1, v___x_1962_);
lean_ctor_set(v___x_1952_, 0, v___x_1961_);
v___x_1967_ = v___x_1952_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1961_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1993_, 2, v___x_1965_);
v___x_1967_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
lean_object* v___x_1969_; 
if (v_isShared_1940_ == 0)
{
lean_ctor_set(v___x_1939_, 3, v___x_1967_);
lean_ctor_set(v___x_1939_, 2, v___x_1960_);
lean_ctor_set(v___x_1939_, 1, v_binderName_1959_);
lean_ctor_set(v___x_1939_, 0, v_fvarId_1958_);
v___x_1969_ = v___x_1939_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_fvarId_1958_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_binderName_1959_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v___x_1960_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v___x_1967_);
v___x_1969_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1970_; lean_object* v_lctx_1971_; lean_object* v_nextIdx_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1991_; 
v___x_1970_ = lean_st_ref_take(v_a_1932_);
v_lctx_1971_ = lean_ctor_get(v___x_1970_, 0);
v_nextIdx_1972_ = lean_ctor_get(v___x_1970_, 1);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1974_ = v___x_1970_;
v_isShared_1975_ = v_isSharedCheck_1991_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_nextIdx_1972_);
lean_inc(v_lctx_1971_);
lean_dec(v___x_1970_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1991_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1978_; 
lean_inc_ref(v___x_1969_);
v___x_1976_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1954_, v_lctx_1971_, v___x_1969_);
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 0, v___x_1976_);
v___x_1978_ = v___x_1974_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1976_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v_nextIdx_1972_);
v___x_1978_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = lean_st_ref_put(v_a_1932_, v___x_1978_);
v___x_1980_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1950_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1989_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_1989_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1989_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1969_);
lean_ctor_set(v___x_1985_, 1, v_a_1981_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_1985_);
v___x_1987_ = v___x_1983_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v___x_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
else
{
lean_dec_ref(v___x_1969_);
return v___x_1980_;
}
}
}
}
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_del_object(v___x_1952_);
lean_dec_ref(v_code_1950_);
lean_dec_ref(v_params_1949_);
lean_del_object(v___x_1939_);
lean_dec(v_discr_1936_);
v_a_1994_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1956_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1956_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
lean_dec(v___x_1948_);
lean_del_object(v___x_1939_);
lean_dec(v_discr_1936_);
v___x_2004_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5);
v___x_2005_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2004_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_);
return v___x_2005_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2010_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2011_ = lean_unsigned_to_nat(2u);
v___x_2012_ = lean_unsigned_to_nat(271u);
v___x_2013_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_2014_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2015_ = l_mkPanicMessageWithDecl(v___x_2014_, v___x_2013_, v___x_2012_, v___x_2011_, v___x_2010_);
return v___x_2015_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8(void){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2022_ = lean_box(0);
v___x_2023_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7));
v___x_2024_ = l_Lean_Expr_const___override(v___x_2023_, v___x_2022_);
return v___x_2024_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9(void){
_start:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2025_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2026_ = lean_unsigned_to_nat(34u);
v___x_2027_ = lean_unsigned_to_nat(272u);
v___x_2028_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_2029_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2030_ = l_mkPanicMessageWithDecl(v___x_2029_, v___x_2028_, v___x_2027_, v___x_2026_, v___x_2025_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object* v_c_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_discr_2038_; lean_object* v_alts_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v_discr_2038_ = lean_ctor_get(v_c_2031_, 2);
v_alts_2039_ = lean_ctor_get(v_c_2031_, 3);
v___x_2040_ = lean_array_get_size(v_alts_2039_);
v___x_2041_ = lean_unsigned_to_nat(1u);
v___x_2042_ = lean_nat_dec_eq(v___x_2040_, v___x_2041_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1);
v___x_2044_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2043_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
return v___x_2044_;
}
else
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2045_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2046_ = lean_unsigned_to_nat(0u);
v___x_2047_ = lean_array_get(v___x_2045_, v_alts_2039_, v___x_2046_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_params_2048_; lean_object* v_code_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2147_; 
v_params_2048_ = lean_ctor_get(v___x_2047_, 1);
v_code_2049_ = lean_ctor_get(v___x_2047_, 2);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2147_ == 0)
{
lean_object* v_unused_2148_; 
v_unused_2148_ = lean_ctor_get(v___x_2047_, 0);
lean_dec(v_unused_2148_);
v___x_2051_ = v___x_2047_;
v_isShared_2052_ = v_isSharedCheck_2147_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_code_2049_);
lean_inc(v_params_2048_);
lean_dec(v___x_2047_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2147_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
uint8_t v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2053_ = 0;
v___x_2054_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2055_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2053_, v_params_2048_, v_a_2034_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2063_; 
lean_dec_ref_known(v___x_2055_, 1);
v___x_2056_ = lean_array_get(v___x_2054_, v_params_2048_, v___x_2046_);
lean_dec_ref(v_params_2048_);
v___x_2057_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3));
v___x_2058_ = lean_box(0);
lean_inc(v_discr_2038_);
v___x_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2059_, 0, v_discr_2038_);
v___x_2060_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2061_ = lean_array_push(v___x_2060_, v___x_2059_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set_tag(v___x_2051_, 3);
lean_ctor_set(v___x_2051_, 2, v___x_2061_);
lean_ctor_set(v___x_2051_, 1, v___x_2058_);
lean_ctor_set(v___x_2051_, 0, v___x_2057_);
v___x_2063_ = v___x_2051_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2057_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v___x_2058_);
lean_ctor_set(v_reuseFailAlloc_2138_, 2, v___x_2061_);
v___x_2063_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_2065_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2064_, v_a_2034_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2067_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2068_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2053_, v_a_2066_, v___x_2067_, v___x_2063_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v_a_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; lean_object* v___x_2072_; 
v_a_2069_ = lean_ctor_get(v___x_2068_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2068_, 1);
v___x_2070_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8);
v___x_2071_ = 0;
v___x_2072_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_2053_, v___x_2070_, v___x_2071_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; lean_object* v___x_2074_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
lean_inc(v_a_2073_);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2074_ = l_Lean_mkArrow(v___x_2070_, v___x_2067_, v_a_2035_, v_a_2036_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v_fvarId_2076_; lean_object* v_binderName_2077_; lean_object* v_fvarId_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v_lctx_2085_; lean_object* v_nextIdx_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2105_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v_fvarId_2076_ = lean_ctor_get(v___x_2056_, 0);
lean_inc(v_fvarId_2076_);
v_binderName_2077_ = lean_ctor_get(v___x_2056_, 1);
lean_inc(v_binderName_2077_);
lean_dec(v___x_2056_);
v_fvarId_2078_ = lean_ctor_get(v_a_2069_, 0);
v___x_2079_ = lean_mk_empty_array_with_capacity(v___x_2041_);
v___x_2080_ = lean_array_push(v___x_2079_, v_a_2073_);
lean_inc(v_fvarId_2078_);
v___x_2081_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2081_, 0, v_fvarId_2078_);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v_a_2069_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2083_, 0, v_fvarId_2076_);
lean_ctor_set(v___x_2083_, 1, v_binderName_2077_);
lean_ctor_set(v___x_2083_, 2, v___x_2080_);
lean_ctor_set(v___x_2083_, 3, v_a_2075_);
lean_ctor_set(v___x_2083_, 4, v___x_2082_);
v___x_2084_ = lean_st_ref_take(v_a_2034_);
v_lctx_2085_ = lean_ctor_get(v___x_2084_, 0);
v_nextIdx_2086_ = lean_ctor_get(v___x_2084_, 1);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2088_ = v___x_2084_;
v_isShared_2089_ = v_isSharedCheck_2105_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_nextIdx_2086_);
lean_inc(v_lctx_2085_);
lean_dec(v___x_2084_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2105_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
lean_inc_ref(v___x_2083_);
v___x_2090_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_2053_, v_lctx_2085_, v___x_2083_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2090_);
v___x_2092_ = v___x_2088_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2090_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_nextIdx_2086_);
v___x_2092_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2093_ = lean_st_ref_put(v_a_2034_, v___x_2092_);
v___x_2094_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2049_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2103_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2097_ = v___x_2094_;
v_isShared_2098_ = v_isSharedCheck_2103_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2103_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2099_; lean_object* v___x_2101_; 
v___x_2099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2083_);
lean_ctor_set(v___x_2099_, 1, v_a_2095_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 0, v___x_2099_);
v___x_2101_ = v___x_2097_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2099_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
else
{
lean_dec_ref_known(v___x_2083_, 5);
return v___x_2094_;
}
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec(v_a_2073_);
lean_dec(v_a_2069_);
lean_dec(v___x_2056_);
lean_dec_ref(v_code_2049_);
v_a_2106_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2074_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2074_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
lean_dec(v_a_2069_);
lean_dec(v___x_2056_);
lean_dec_ref(v_code_2049_);
v_a_2114_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2116_ = v___x_2072_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2072_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
else
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2129_; 
lean_dec(v___x_2056_);
lean_dec_ref(v_code_2049_);
v_a_2122_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2124_ = v___x_2068_;
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2068_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_a_2122_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
}
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
lean_dec_ref(v___x_2063_);
lean_dec(v___x_2056_);
lean_dec_ref(v_code_2049_);
v_a_2130_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2065_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2065_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
lean_del_object(v___x_2051_);
lean_dec_ref(v_code_2049_);
lean_dec_ref(v_params_2048_);
v_a_2139_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2055_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2055_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
}
else
{
lean_object* v___x_2149_; lean_object* v___x_2150_; 
lean_dec(v___x_2047_);
v___x_2149_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9);
v___x_2150_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2149_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
return v___x_2150_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2152_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2153_ = lean_unsigned_to_nat(2u);
v___x_2154_ = lean_unsigned_to_nat(260u);
v___x_2155_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_2156_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2157_ = l_mkPanicMessageWithDecl(v___x_2156_, v___x_2155_, v___x_2154_, v___x_2153_, v___x_2152_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2162_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2163_ = lean_unsigned_to_nat(34u);
v___x_2164_ = lean_unsigned_to_nat(261u);
v___x_2165_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_2166_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2167_ = l_mkPanicMessageWithDecl(v___x_2166_, v___x_2165_, v___x_2164_, v___x_2163_, v___x_2162_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object* v_c_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_){
_start:
{
lean_object* v_discr_2175_; lean_object* v_alts_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2245_; 
v_discr_2175_ = lean_ctor_get(v_c_2168_, 2);
v_alts_2176_ = lean_ctor_get(v_c_2168_, 3);
v_isSharedCheck_2245_ = !lean_is_exclusive(v_c_2168_);
if (v_isSharedCheck_2245_ == 0)
{
lean_object* v_unused_2246_; lean_object* v_unused_2247_; 
v_unused_2246_ = lean_ctor_get(v_c_2168_, 1);
lean_dec(v_unused_2246_);
v_unused_2247_ = lean_ctor_get(v_c_2168_, 0);
lean_dec(v_unused_2247_);
v___x_2178_ = v_c_2168_;
v_isShared_2179_ = v_isSharedCheck_2245_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_alts_2176_);
lean_inc(v_discr_2175_);
lean_dec(v_c_2168_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2245_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2180_ = lean_array_get_size(v_alts_2176_);
v___x_2181_ = lean_unsigned_to_nat(1u);
v___x_2182_ = lean_nat_dec_eq(v___x_2180_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; lean_object* v___x_2184_; 
lean_del_object(v___x_2178_);
lean_dec_ref(v_alts_2176_);
lean_dec(v_discr_2175_);
v___x_2183_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1);
v___x_2184_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2183_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
return v___x_2184_;
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2185_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2186_ = lean_unsigned_to_nat(0u);
v___x_2187_ = lean_array_get(v___x_2185_, v_alts_2176_, v___x_2186_);
lean_dec_ref(v_alts_2176_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_params_2188_; lean_object* v_code_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2241_; 
v_params_2188_ = lean_ctor_get(v___x_2187_, 1);
v_code_2189_ = lean_ctor_get(v___x_2187_, 2);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2241_ == 0)
{
lean_object* v_unused_2242_; 
v_unused_2242_ = lean_ctor_get(v___x_2187_, 0);
lean_dec(v_unused_2242_);
v___x_2191_ = v___x_2187_;
v_isShared_2192_ = v_isSharedCheck_2241_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_code_2189_);
lean_inc(v_params_2188_);
lean_dec(v___x_2187_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2241_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
uint8_t v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = 0;
v___x_2194_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2195_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2193_, v_params_2188_, v_a_2171_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v___x_2196_; lean_object* v_fvarId_2197_; lean_object* v_binderName_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2206_; 
lean_dec_ref_known(v___x_2195_, 1);
v___x_2196_ = lean_array_get(v___x_2194_, v_params_2188_, v___x_2186_);
lean_dec_ref(v_params_2188_);
v_fvarId_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_fvarId_2197_);
v_binderName_2198_ = lean_ctor_get(v___x_2196_, 1);
lean_inc(v_binderName_2198_);
lean_dec(v___x_2196_);
v___x_2199_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2200_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4));
v___x_2201_ = lean_box(0);
v___x_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2202_, 0, v_discr_2175_);
v___x_2203_ = lean_mk_empty_array_with_capacity(v___x_2181_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2202_);
if (v_isShared_2192_ == 0)
{
lean_ctor_set_tag(v___x_2191_, 3);
lean_ctor_set(v___x_2191_, 2, v___x_2204_);
lean_ctor_set(v___x_2191_, 1, v___x_2201_);
lean_ctor_set(v___x_2191_, 0, v___x_2200_);
v___x_2206_ = v___x_2191_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2200_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2232_, 2, v___x_2204_);
v___x_2206_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
lean_object* v___x_2208_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 3, v___x_2206_);
lean_ctor_set(v___x_2178_, 2, v___x_2199_);
lean_ctor_set(v___x_2178_, 1, v_binderName_2198_);
lean_ctor_set(v___x_2178_, 0, v_fvarId_2197_);
v___x_2208_ = v___x_2178_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_fvarId_2197_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v_binderName_2198_);
lean_ctor_set(v_reuseFailAlloc_2231_, 2, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2231_, 3, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
lean_object* v___x_2209_; lean_object* v_lctx_2210_; lean_object* v_nextIdx_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2230_; 
v___x_2209_ = lean_st_ref_take(v_a_2171_);
v_lctx_2210_ = lean_ctor_get(v___x_2209_, 0);
v_nextIdx_2211_ = lean_ctor_get(v___x_2209_, 1);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2213_ = v___x_2209_;
v_isShared_2214_ = v_isSharedCheck_2230_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_nextIdx_2211_);
lean_inc(v_lctx_2210_);
lean_dec(v___x_2209_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2230_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2215_; lean_object* v___x_2217_; 
lean_inc_ref(v___x_2208_);
v___x_2215_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2193_, v_lctx_2210_, v___x_2208_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2215_);
v___x_2217_ = v___x_2213_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v_nextIdx_2211_);
v___x_2217_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = lean_st_ref_put(v_a_2171_, v___x_2217_);
v___x_2219_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2189_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2219_) == 0)
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2228_; 
v_a_2220_ = lean_ctor_get(v___x_2219_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2219_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2222_ = v___x_2219_;
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2219_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2208_);
lean_ctor_set(v___x_2224_, 1, v_a_2220_);
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v___x_2224_);
v___x_2226_ = v___x_2222_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
else
{
lean_dec_ref(v___x_2208_);
return v___x_2219_;
}
}
}
}
}
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
lean_del_object(v___x_2191_);
lean_dec_ref(v_code_2189_);
lean_dec_ref(v_params_2188_);
lean_del_object(v___x_2178_);
lean_dec(v_discr_2175_);
v_a_2233_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v___x_2195_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2195_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_a_2233_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
else
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
lean_dec(v___x_2187_);
lean_del_object(v___x_2178_);
lean_dec(v_discr_2175_);
v___x_2243_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5);
v___x_2244_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2243_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
return v___x_2244_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2249_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2250_ = lean_unsigned_to_nat(2u);
v___x_2251_ = lean_unsigned_to_nat(249u);
v___x_2252_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2253_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2254_ = l_mkPanicMessageWithDecl(v___x_2253_, v___x_2252_, v___x_2251_, v___x_2250_, v___x_2249_);
return v___x_2254_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2258_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2259_ = lean_unsigned_to_nat(34u);
v___x_2260_ = lean_unsigned_to_nat(250u);
v___x_2261_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2262_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2263_ = l_mkPanicMessageWithDecl(v___x_2262_, v___x_2261_, v___x_2260_, v___x_2259_, v___x_2258_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object* v_c_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v_discr_2271_; lean_object* v_alts_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2341_; 
v_discr_2271_ = lean_ctor_get(v_c_2264_, 2);
v_alts_2272_ = lean_ctor_get(v_c_2264_, 3);
v_isSharedCheck_2341_ = !lean_is_exclusive(v_c_2264_);
if (v_isSharedCheck_2341_ == 0)
{
lean_object* v_unused_2342_; lean_object* v_unused_2343_; 
v_unused_2342_ = lean_ctor_get(v_c_2264_, 1);
lean_dec(v_unused_2342_);
v_unused_2343_ = lean_ctor_get(v_c_2264_, 0);
lean_dec(v_unused_2343_);
v___x_2274_ = v_c_2264_;
v_isShared_2275_ = v_isSharedCheck_2341_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_alts_2272_);
lean_inc(v_discr_2271_);
lean_dec(v_c_2264_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2341_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2276_ = lean_array_get_size(v_alts_2272_);
v___x_2277_ = lean_unsigned_to_nat(1u);
v___x_2278_ = lean_nat_dec_eq(v___x_2276_, v___x_2277_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_del_object(v___x_2274_);
lean_dec_ref(v_alts_2272_);
lean_dec(v_discr_2271_);
v___x_2279_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1);
v___x_2280_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2279_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_);
return v___x_2280_;
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2281_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2282_ = lean_unsigned_to_nat(0u);
v___x_2283_ = lean_array_get(v___x_2281_, v_alts_2272_, v___x_2282_);
lean_dec_ref(v_alts_2272_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_params_2284_; lean_object* v_code_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2337_; 
v_params_2284_ = lean_ctor_get(v___x_2283_, 1);
v_code_2285_ = lean_ctor_get(v___x_2283_, 2);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2337_ == 0)
{
lean_object* v_unused_2338_; 
v_unused_2338_ = lean_ctor_get(v___x_2283_, 0);
lean_dec(v_unused_2338_);
v___x_2287_ = v___x_2283_;
v_isShared_2288_ = v_isSharedCheck_2337_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_code_2285_);
lean_inc(v_params_2284_);
lean_dec(v___x_2283_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2337_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
uint8_t v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2289_ = 0;
v___x_2290_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2291_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2289_, v_params_2284_, v_a_2267_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_object* v___x_2292_; lean_object* v_fvarId_2293_; lean_object* v_binderName_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2302_; 
lean_dec_ref_known(v___x_2291_, 1);
v___x_2292_ = lean_array_get(v___x_2290_, v_params_2284_, v___x_2282_);
lean_dec_ref(v_params_2284_);
v_fvarId_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_fvarId_2293_);
v_binderName_2294_ = lean_ctor_get(v___x_2292_, 1);
lean_inc(v_binderName_2294_);
lean_dec(v___x_2292_);
v___x_2295_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2296_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3));
v___x_2297_ = lean_box(0);
v___x_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2298_, 0, v_discr_2271_);
v___x_2299_ = lean_mk_empty_array_with_capacity(v___x_2277_);
v___x_2300_ = lean_array_push(v___x_2299_, v___x_2298_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set_tag(v___x_2287_, 3);
lean_ctor_set(v___x_2287_, 2, v___x_2300_);
lean_ctor_set(v___x_2287_, 1, v___x_2297_);
lean_ctor_set(v___x_2287_, 0, v___x_2296_);
v___x_2302_ = v___x_2287_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2328_, 1, v___x_2297_);
lean_ctor_set(v_reuseFailAlloc_2328_, 2, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
lean_object* v___x_2304_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 3, v___x_2302_);
lean_ctor_set(v___x_2274_, 2, v___x_2295_);
lean_ctor_set(v___x_2274_, 1, v_binderName_2294_);
lean_ctor_set(v___x_2274_, 0, v_fvarId_2293_);
v___x_2304_ = v___x_2274_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_fvarId_2293_);
lean_ctor_set(v_reuseFailAlloc_2327_, 1, v_binderName_2294_);
lean_ctor_set(v_reuseFailAlloc_2327_, 2, v___x_2295_);
lean_ctor_set(v_reuseFailAlloc_2327_, 3, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
lean_object* v___x_2305_; lean_object* v_lctx_2306_; lean_object* v_nextIdx_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2326_; 
v___x_2305_ = lean_st_ref_take(v_a_2267_);
v_lctx_2306_ = lean_ctor_get(v___x_2305_, 0);
v_nextIdx_2307_ = lean_ctor_get(v___x_2305_, 1);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2309_ = v___x_2305_;
v_isShared_2310_ = v_isSharedCheck_2326_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_nextIdx_2307_);
lean_inc(v_lctx_2306_);
lean_dec(v___x_2305_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2326_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2311_; lean_object* v___x_2313_; 
lean_inc_ref(v___x_2304_);
v___x_2311_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2289_, v_lctx_2306_, v___x_2304_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 0, v___x_2311_);
v___x_2313_ = v___x_2309_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2311_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v_nextIdx_2307_);
v___x_2313_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = lean_st_ref_put(v_a_2267_, v___x_2313_);
v___x_2315_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2285_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2324_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2318_ = v___x_2315_;
v_isShared_2319_ = v_isSharedCheck_2324_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2315_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2324_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2320_; lean_object* v___x_2322_; 
v___x_2320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2304_);
lean_ctor_set(v___x_2320_, 1, v_a_2316_);
if (v_isShared_2319_ == 0)
{
lean_ctor_set(v___x_2318_, 0, v___x_2320_);
v___x_2322_ = v___x_2318_;
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
else
{
lean_dec_ref(v___x_2304_);
return v___x_2315_;
}
}
}
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_del_object(v___x_2287_);
lean_dec_ref(v_code_2285_);
lean_dec_ref(v_params_2284_);
lean_del_object(v___x_2274_);
lean_dec(v_discr_2271_);
v_a_2329_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2291_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2291_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
else
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_dec(v___x_2283_);
lean_del_object(v___x_2274_);
lean_dec(v_discr_2271_);
v___x_2339_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4);
v___x_2340_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2339_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_);
return v___x_2340_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2345_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2346_ = lean_unsigned_to_nat(2u);
v___x_2347_ = lean_unsigned_to_nat(238u);
v___x_2348_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2349_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2350_ = l_mkPanicMessageWithDecl(v___x_2349_, v___x_2348_, v___x_2347_, v___x_2346_, v___x_2345_);
return v___x_2350_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2355_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2356_ = lean_unsigned_to_nat(34u);
v___x_2357_ = lean_unsigned_to_nat(239u);
v___x_2358_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2359_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2360_ = l_mkPanicMessageWithDecl(v___x_2359_, v___x_2358_, v___x_2357_, v___x_2356_, v___x_2355_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object* v_c_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v_discr_2368_; lean_object* v_alts_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2438_; 
v_discr_2368_ = lean_ctor_get(v_c_2361_, 2);
v_alts_2369_ = lean_ctor_get(v_c_2361_, 3);
v_isSharedCheck_2438_ = !lean_is_exclusive(v_c_2361_);
if (v_isSharedCheck_2438_ == 0)
{
lean_object* v_unused_2439_; lean_object* v_unused_2440_; 
v_unused_2439_ = lean_ctor_get(v_c_2361_, 1);
lean_dec(v_unused_2439_);
v_unused_2440_ = lean_ctor_get(v_c_2361_, 0);
lean_dec(v_unused_2440_);
v___x_2371_ = v_c_2361_;
v_isShared_2372_ = v_isSharedCheck_2438_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_alts_2369_);
lean_inc(v_discr_2368_);
lean_dec(v_c_2361_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2438_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; uint8_t v___x_2375_; 
v___x_2373_ = lean_array_get_size(v_alts_2369_);
v___x_2374_ = lean_unsigned_to_nat(1u);
v___x_2375_ = lean_nat_dec_eq(v___x_2373_, v___x_2374_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; lean_object* v___x_2377_; 
lean_del_object(v___x_2371_);
lean_dec_ref(v_alts_2369_);
lean_dec(v_discr_2368_);
v___x_2376_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1);
v___x_2377_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2376_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
return v___x_2377_;
}
else
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2378_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2379_ = lean_unsigned_to_nat(0u);
v___x_2380_ = lean_array_get(v___x_2378_, v_alts_2369_, v___x_2379_);
lean_dec_ref(v_alts_2369_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_params_2381_; lean_object* v_code_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2434_; 
v_params_2381_ = lean_ctor_get(v___x_2380_, 1);
v_code_2382_ = lean_ctor_get(v___x_2380_, 2);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2434_ == 0)
{
lean_object* v_unused_2435_; 
v_unused_2435_ = lean_ctor_get(v___x_2380_, 0);
lean_dec(v_unused_2435_);
v___x_2384_ = v___x_2380_;
v_isShared_2385_ = v_isSharedCheck_2434_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_code_2382_);
lean_inc(v_params_2381_);
lean_dec(v___x_2380_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2434_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
uint8_t v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2386_ = 0;
v___x_2387_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2388_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2386_, v_params_2381_, v_a_2364_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v___x_2389_; lean_object* v_fvarId_2390_; lean_object* v_binderName_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2399_; 
lean_dec_ref_known(v___x_2388_, 1);
v___x_2389_ = lean_array_get(v___x_2387_, v_params_2381_, v___x_2379_);
lean_dec_ref(v_params_2381_);
v_fvarId_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_fvarId_2390_);
v_binderName_2391_ = lean_ctor_get(v___x_2389_, 1);
lean_inc(v_binderName_2391_);
lean_dec(v___x_2389_);
v___x_2392_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2393_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4));
v___x_2394_ = lean_box(0);
v___x_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2395_, 0, v_discr_2368_);
v___x_2396_ = lean_mk_empty_array_with_capacity(v___x_2374_);
v___x_2397_ = lean_array_push(v___x_2396_, v___x_2395_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set_tag(v___x_2384_, 3);
lean_ctor_set(v___x_2384_, 2, v___x_2397_);
lean_ctor_set(v___x_2384_, 1, v___x_2394_);
lean_ctor_set(v___x_2384_, 0, v___x_2393_);
v___x_2399_ = v___x_2384_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v___x_2393_);
lean_ctor_set(v_reuseFailAlloc_2425_, 1, v___x_2394_);
lean_ctor_set(v_reuseFailAlloc_2425_, 2, v___x_2397_);
v___x_2399_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
lean_object* v___x_2401_; 
if (v_isShared_2372_ == 0)
{
lean_ctor_set(v___x_2371_, 3, v___x_2399_);
lean_ctor_set(v___x_2371_, 2, v___x_2392_);
lean_ctor_set(v___x_2371_, 1, v_binderName_2391_);
lean_ctor_set(v___x_2371_, 0, v_fvarId_2390_);
v___x_2401_ = v___x_2371_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_fvarId_2390_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v_binderName_2391_);
lean_ctor_set(v_reuseFailAlloc_2424_, 2, v___x_2392_);
lean_ctor_set(v_reuseFailAlloc_2424_, 3, v___x_2399_);
v___x_2401_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
lean_object* v___x_2402_; lean_object* v_lctx_2403_; lean_object* v_nextIdx_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2423_; 
v___x_2402_ = lean_st_ref_take(v_a_2364_);
v_lctx_2403_ = lean_ctor_get(v___x_2402_, 0);
v_nextIdx_2404_ = lean_ctor_get(v___x_2402_, 1);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2406_ = v___x_2402_;
v_isShared_2407_ = v_isSharedCheck_2423_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_nextIdx_2404_);
lean_inc(v_lctx_2403_);
lean_dec(v___x_2402_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2423_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___x_2410_; 
lean_inc_ref(v___x_2401_);
v___x_2408_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2386_, v_lctx_2403_, v___x_2401_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2408_);
v___x_2410_ = v___x_2406_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2408_);
lean_ctor_set(v_reuseFailAlloc_2422_, 1, v_nextIdx_2404_);
v___x_2410_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = lean_st_ref_put(v_a_2364_, v___x_2410_);
v___x_2412_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2382_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2421_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2415_ = v___x_2412_;
v_isShared_2416_ = v_isSharedCheck_2421_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2412_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2421_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; lean_object* v___x_2419_; 
v___x_2417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2401_);
lean_ctor_set(v___x_2417_, 1, v_a_2413_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2417_);
v___x_2419_ = v___x_2415_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2417_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
else
{
lean_dec_ref(v___x_2401_);
return v___x_2412_;
}
}
}
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_del_object(v___x_2384_);
lean_dec_ref(v_code_2382_);
lean_dec_ref(v_params_2381_);
lean_del_object(v___x_2371_);
lean_dec(v_discr_2368_);
v_a_2426_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2388_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2388_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
}
else
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
lean_dec(v___x_2380_);
lean_del_object(v___x_2371_);
lean_dec(v_discr_2368_);
v___x_2436_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5);
v___x_2437_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2436_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
return v___x_2437_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2442_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2443_ = lean_unsigned_to_nat(2u);
v___x_2444_ = lean_unsigned_to_nat(227u);
v___x_2445_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2446_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2447_ = l_mkPanicMessageWithDecl(v___x_2446_, v___x_2445_, v___x_2444_, v___x_2443_, v___x_2442_);
return v___x_2447_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2452_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2453_ = lean_unsigned_to_nat(34u);
v___x_2454_ = lean_unsigned_to_nat(228u);
v___x_2455_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2456_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2457_ = l_mkPanicMessageWithDecl(v___x_2456_, v___x_2455_, v___x_2454_, v___x_2453_, v___x_2452_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object* v_c_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_){
_start:
{
lean_object* v_discr_2465_; lean_object* v_alts_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2535_; 
v_discr_2465_ = lean_ctor_get(v_c_2458_, 2);
v_alts_2466_ = lean_ctor_get(v_c_2458_, 3);
v_isSharedCheck_2535_ = !lean_is_exclusive(v_c_2458_);
if (v_isSharedCheck_2535_ == 0)
{
lean_object* v_unused_2536_; lean_object* v_unused_2537_; 
v_unused_2536_ = lean_ctor_get(v_c_2458_, 1);
lean_dec(v_unused_2536_);
v_unused_2537_ = lean_ctor_get(v_c_2458_, 0);
lean_dec(v_unused_2537_);
v___x_2468_ = v_c_2458_;
v_isShared_2469_ = v_isSharedCheck_2535_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_alts_2466_);
lean_inc(v_discr_2465_);
lean_dec(v_c_2458_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2535_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; uint8_t v___x_2472_; 
v___x_2470_ = lean_array_get_size(v_alts_2466_);
v___x_2471_ = lean_unsigned_to_nat(1u);
v___x_2472_ = lean_nat_dec_eq(v___x_2470_, v___x_2471_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; lean_object* v___x_2474_; 
lean_del_object(v___x_2468_);
lean_dec_ref(v_alts_2466_);
lean_dec(v_discr_2465_);
v___x_2473_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1);
v___x_2474_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2473_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_);
return v___x_2474_;
}
else
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = lean_array_get(v___x_2475_, v_alts_2466_, v___x_2476_);
lean_dec_ref(v_alts_2466_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_params_2478_; lean_object* v_code_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2531_; 
v_params_2478_ = lean_ctor_get(v___x_2477_, 1);
v_code_2479_ = lean_ctor_get(v___x_2477_, 2);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2531_ == 0)
{
lean_object* v_unused_2532_; 
v_unused_2532_ = lean_ctor_get(v___x_2477_, 0);
lean_dec(v_unused_2532_);
v___x_2481_ = v___x_2477_;
v_isShared_2482_ = v_isSharedCheck_2531_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_code_2479_);
lean_inc(v_params_2478_);
lean_dec(v___x_2477_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2531_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
uint8_t v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = 0;
v___x_2484_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2485_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2483_, v_params_2478_, v_a_2461_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v___x_2486_; lean_object* v_fvarId_2487_; lean_object* v_binderName_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2496_; 
lean_dec_ref_known(v___x_2485_, 1);
v___x_2486_ = lean_array_get(v___x_2484_, v_params_2478_, v___x_2476_);
lean_dec_ref(v_params_2478_);
v_fvarId_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_fvarId_2487_);
v_binderName_2488_ = lean_ctor_get(v___x_2486_, 1);
lean_inc(v_binderName_2488_);
lean_dec(v___x_2486_);
v___x_2489_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2490_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3));
v___x_2491_ = lean_box(0);
v___x_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_discr_2465_);
v___x_2493_ = lean_mk_empty_array_with_capacity(v___x_2471_);
v___x_2494_ = lean_array_push(v___x_2493_, v___x_2492_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set_tag(v___x_2481_, 3);
lean_ctor_set(v___x_2481_, 2, v___x_2494_);
lean_ctor_set(v___x_2481_, 1, v___x_2491_);
lean_ctor_set(v___x_2481_, 0, v___x_2490_);
v___x_2496_ = v___x_2481_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2490_);
lean_ctor_set(v_reuseFailAlloc_2522_, 1, v___x_2491_);
lean_ctor_set(v_reuseFailAlloc_2522_, 2, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
lean_object* v___x_2498_; 
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 3, v___x_2496_);
lean_ctor_set(v___x_2468_, 2, v___x_2489_);
lean_ctor_set(v___x_2468_, 1, v_binderName_2488_);
lean_ctor_set(v___x_2468_, 0, v_fvarId_2487_);
v___x_2498_ = v___x_2468_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_fvarId_2487_);
lean_ctor_set(v_reuseFailAlloc_2521_, 1, v_binderName_2488_);
lean_ctor_set(v_reuseFailAlloc_2521_, 2, v___x_2489_);
lean_ctor_set(v_reuseFailAlloc_2521_, 3, v___x_2496_);
v___x_2498_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
lean_object* v___x_2499_; lean_object* v_lctx_2500_; lean_object* v_nextIdx_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2520_; 
v___x_2499_ = lean_st_ref_take(v_a_2461_);
v_lctx_2500_ = lean_ctor_get(v___x_2499_, 0);
v_nextIdx_2501_ = lean_ctor_get(v___x_2499_, 1);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2503_ = v___x_2499_;
v_isShared_2504_ = v_isSharedCheck_2520_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_nextIdx_2501_);
lean_inc(v_lctx_2500_);
lean_dec(v___x_2499_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2520_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2507_; 
lean_inc_ref(v___x_2498_);
v___x_2505_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2483_, v_lctx_2500_, v___x_2498_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v___x_2505_);
v___x_2507_ = v___x_2503_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2519_, 1, v_nextIdx_2501_);
v___x_2507_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = lean_st_ref_put(v_a_2461_, v___x_2507_);
v___x_2509_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2479_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2518_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2512_ = v___x_2509_;
v_isShared_2513_ = v_isSharedCheck_2518_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2509_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2518_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2514_; lean_object* v___x_2516_; 
v___x_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2498_);
lean_ctor_set(v___x_2514_, 1, v_a_2510_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v___x_2514_);
v___x_2516_ = v___x_2512_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v___x_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
else
{
lean_dec_ref(v___x_2498_);
return v___x_2509_;
}
}
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_del_object(v___x_2481_);
lean_dec_ref(v_code_2479_);
lean_dec_ref(v_params_2478_);
lean_del_object(v___x_2468_);
lean_dec(v_discr_2465_);
v_a_2523_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2485_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2485_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
else
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec(v___x_2477_);
lean_del_object(v___x_2468_);
lean_dec(v_discr_2465_);
v___x_2533_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4);
v___x_2534_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2533_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_);
return v___x_2534_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2539_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2540_ = lean_unsigned_to_nat(2u);
v___x_2541_ = lean_unsigned_to_nat(215u);
v___x_2542_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2543_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2544_ = l_mkPanicMessageWithDecl(v___x_2543_, v___x_2542_, v___x_2541_, v___x_2540_, v___x_2539_);
return v___x_2544_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2548_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2549_ = lean_unsigned_to_nat(34u);
v___x_2550_ = lean_unsigned_to_nat(216u);
v___x_2551_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2552_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2553_ = l_mkPanicMessageWithDecl(v___x_2552_, v___x_2551_, v___x_2550_, v___x_2549_, v___x_2548_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object* v_c_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v_discr_2561_; lean_object* v_alts_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2631_; 
v_discr_2561_ = lean_ctor_get(v_c_2554_, 2);
v_alts_2562_ = lean_ctor_get(v_c_2554_, 3);
v_isSharedCheck_2631_ = !lean_is_exclusive(v_c_2554_);
if (v_isSharedCheck_2631_ == 0)
{
lean_object* v_unused_2632_; lean_object* v_unused_2633_; 
v_unused_2632_ = lean_ctor_get(v_c_2554_, 1);
lean_dec(v_unused_2632_);
v_unused_2633_ = lean_ctor_get(v_c_2554_, 0);
lean_dec(v_unused_2633_);
v___x_2564_ = v_c_2554_;
v_isShared_2565_ = v_isSharedCheck_2631_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_alts_2562_);
lean_inc(v_discr_2561_);
lean_dec(v_c_2554_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2631_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2566_ = lean_array_get_size(v_alts_2562_);
v___x_2567_ = lean_unsigned_to_nat(1u);
v___x_2568_ = lean_nat_dec_eq(v___x_2566_, v___x_2567_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; lean_object* v___x_2570_; 
lean_del_object(v___x_2564_);
lean_dec_ref(v_alts_2562_);
lean_dec(v_discr_2561_);
v___x_2569_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1);
v___x_2570_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2569_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2571_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_array_get(v___x_2571_, v_alts_2562_, v___x_2572_);
lean_dec_ref(v_alts_2562_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_params_2574_; lean_object* v_code_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2627_; 
v_params_2574_ = lean_ctor_get(v___x_2573_, 1);
v_code_2575_ = lean_ctor_get(v___x_2573_, 2);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2627_ == 0)
{
lean_object* v_unused_2628_; 
v_unused_2628_ = lean_ctor_get(v___x_2573_, 0);
lean_dec(v_unused_2628_);
v___x_2577_ = v___x_2573_;
v_isShared_2578_ = v_isSharedCheck_2627_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_code_2575_);
lean_inc(v_params_2574_);
lean_dec(v___x_2573_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2627_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2579_ = 0;
v___x_2580_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2581_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2579_, v_params_2574_, v_a_2557_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v___x_2582_; lean_object* v_fvarId_2583_; lean_object* v_binderName_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2592_; 
lean_dec_ref_known(v___x_2581_, 1);
v___x_2582_ = lean_array_get(v___x_2580_, v_params_2574_, v___x_2572_);
lean_dec_ref(v_params_2574_);
v_fvarId_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_fvarId_2583_);
v_binderName_2584_ = lean_ctor_get(v___x_2582_, 1);
lean_inc(v_binderName_2584_);
lean_dec(v___x_2582_);
v___x_2585_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2586_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4));
v___x_2587_ = lean_box(0);
v___x_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2588_, 0, v_discr_2561_);
v___x_2589_ = lean_mk_empty_array_with_capacity(v___x_2567_);
v___x_2590_ = lean_array_push(v___x_2589_, v___x_2588_);
if (v_isShared_2578_ == 0)
{
lean_ctor_set_tag(v___x_2577_, 3);
lean_ctor_set(v___x_2577_, 2, v___x_2590_);
lean_ctor_set(v___x_2577_, 1, v___x_2587_);
lean_ctor_set(v___x_2577_, 0, v___x_2586_);
v___x_2592_ = v___x_2577_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2586_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v___x_2587_);
lean_ctor_set(v_reuseFailAlloc_2618_, 2, v___x_2590_);
v___x_2592_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2594_; 
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 3, v___x_2592_);
lean_ctor_set(v___x_2564_, 2, v___x_2585_);
lean_ctor_set(v___x_2564_, 1, v_binderName_2584_);
lean_ctor_set(v___x_2564_, 0, v_fvarId_2583_);
v___x_2594_ = v___x_2564_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_fvarId_2583_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v_binderName_2584_);
lean_ctor_set(v_reuseFailAlloc_2617_, 2, v___x_2585_);
lean_ctor_set(v_reuseFailAlloc_2617_, 3, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2595_; lean_object* v_lctx_2596_; lean_object* v_nextIdx_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2616_; 
v___x_2595_ = lean_st_ref_take(v_a_2557_);
v_lctx_2596_ = lean_ctor_get(v___x_2595_, 0);
v_nextIdx_2597_ = lean_ctor_get(v___x_2595_, 1);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2599_ = v___x_2595_;
v_isShared_2600_ = v_isSharedCheck_2616_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_nextIdx_2597_);
lean_inc(v_lctx_2596_);
lean_dec(v___x_2595_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2616_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2601_; lean_object* v___x_2603_; 
lean_inc_ref(v___x_2594_);
v___x_2601_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2579_, v_lctx_2596_, v___x_2594_);
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 0, v___x_2601_);
v___x_2603_ = v___x_2599_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v___x_2601_);
lean_ctor_set(v_reuseFailAlloc_2615_, 1, v_nextIdx_2597_);
v___x_2603_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = lean_st_ref_put(v_a_2557_, v___x_2603_);
v___x_2605_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2575_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2614_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2608_ = v___x_2605_;
v_isShared_2609_ = v_isSharedCheck_2614_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2614_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2610_; lean_object* v___x_2612_; 
v___x_2610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2594_);
lean_ctor_set(v___x_2610_, 1, v_a_2606_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 0, v___x_2610_);
v___x_2612_ = v___x_2608_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
else
{
lean_dec_ref(v___x_2594_);
return v___x_2605_;
}
}
}
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_del_object(v___x_2577_);
lean_dec_ref(v_code_2575_);
lean_dec_ref(v_params_2574_);
lean_del_object(v___x_2564_);
lean_dec(v_discr_2561_);
v_a_2619_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2581_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2581_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
else
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
lean_dec(v___x_2573_);
lean_del_object(v___x_2564_);
lean_dec(v_discr_2561_);
v___x_2629_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5);
v___x_2630_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2629_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
return v___x_2630_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2635_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2636_ = lean_unsigned_to_nat(2u);
v___x_2637_ = lean_unsigned_to_nat(203u);
v___x_2638_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2639_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2640_ = l_mkPanicMessageWithDecl(v___x_2639_, v___x_2638_, v___x_2637_, v___x_2636_, v___x_2635_);
return v___x_2640_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2645_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2646_ = lean_unsigned_to_nat(34u);
v___x_2647_ = lean_unsigned_to_nat(204u);
v___x_2648_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2649_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2650_ = l_mkPanicMessageWithDecl(v___x_2649_, v___x_2648_, v___x_2647_, v___x_2646_, v___x_2645_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object* v_c_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v_discr_2658_; lean_object* v_alts_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2728_; 
v_discr_2658_ = lean_ctor_get(v_c_2651_, 2);
v_alts_2659_ = lean_ctor_get(v_c_2651_, 3);
v_isSharedCheck_2728_ = !lean_is_exclusive(v_c_2651_);
if (v_isSharedCheck_2728_ == 0)
{
lean_object* v_unused_2729_; lean_object* v_unused_2730_; 
v_unused_2729_ = lean_ctor_get(v_c_2651_, 1);
lean_dec(v_unused_2729_);
v_unused_2730_ = lean_ctor_get(v_c_2651_, 0);
lean_dec(v_unused_2730_);
v___x_2661_ = v_c_2651_;
v_isShared_2662_ = v_isSharedCheck_2728_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_alts_2659_);
lean_inc(v_discr_2658_);
lean_dec(v_c_2651_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2728_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; uint8_t v___x_2665_; 
v___x_2663_ = lean_array_get_size(v_alts_2659_);
v___x_2664_ = lean_unsigned_to_nat(1u);
v___x_2665_ = lean_nat_dec_eq(v___x_2663_, v___x_2664_);
if (v___x_2665_ == 0)
{
lean_object* v___x_2666_; lean_object* v___x_2667_; 
lean_del_object(v___x_2661_);
lean_dec_ref(v_alts_2659_);
lean_dec(v_discr_2658_);
v___x_2666_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1);
v___x_2667_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2666_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_);
return v___x_2667_;
}
else
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2668_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2669_ = lean_unsigned_to_nat(0u);
v___x_2670_ = lean_array_get(v___x_2668_, v_alts_2659_, v___x_2669_);
lean_dec_ref(v_alts_2659_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_params_2671_; lean_object* v_code_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2724_; 
v_params_2671_ = lean_ctor_get(v___x_2670_, 1);
v_code_2672_ = lean_ctor_get(v___x_2670_, 2);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2724_ == 0)
{
lean_object* v_unused_2725_; 
v_unused_2725_ = lean_ctor_get(v___x_2670_, 0);
lean_dec(v_unused_2725_);
v___x_2674_ = v___x_2670_;
v_isShared_2675_ = v_isSharedCheck_2724_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_code_2672_);
lean_inc(v_params_2671_);
lean_dec(v___x_2670_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2724_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
uint8_t v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2676_ = 0;
v___x_2677_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2678_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2676_, v_params_2671_, v_a_2654_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v___x_2679_; lean_object* v_fvarId_2680_; lean_object* v_binderName_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2689_; 
lean_dec_ref_known(v___x_2678_, 1);
v___x_2679_ = lean_array_get(v___x_2677_, v_params_2671_, v___x_2669_);
lean_dec_ref(v_params_2671_);
v_fvarId_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_fvarId_2680_);
v_binderName_2681_ = lean_ctor_get(v___x_2679_, 1);
lean_inc(v_binderName_2681_);
lean_dec(v___x_2679_);
v___x_2682_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2683_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4));
v___x_2684_ = lean_box(0);
v___x_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2685_, 0, v_discr_2658_);
v___x_2686_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2687_ = lean_array_push(v___x_2686_, v___x_2685_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 3);
lean_ctor_set(v___x_2674_, 2, v___x_2687_);
lean_ctor_set(v___x_2674_, 1, v___x_2684_);
lean_ctor_set(v___x_2674_, 0, v___x_2683_);
v___x_2689_ = v___x_2674_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v___x_2684_);
lean_ctor_set(v_reuseFailAlloc_2715_, 2, v___x_2687_);
v___x_2689_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
lean_object* v___x_2691_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 3, v___x_2689_);
lean_ctor_set(v___x_2661_, 2, v___x_2682_);
lean_ctor_set(v___x_2661_, 1, v_binderName_2681_);
lean_ctor_set(v___x_2661_, 0, v_fvarId_2680_);
v___x_2691_ = v___x_2661_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_fvarId_2680_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v_binderName_2681_);
lean_ctor_set(v_reuseFailAlloc_2714_, 2, v___x_2682_);
lean_ctor_set(v_reuseFailAlloc_2714_, 3, v___x_2689_);
v___x_2691_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
lean_object* v___x_2692_; lean_object* v_lctx_2693_; lean_object* v_nextIdx_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2713_; 
v___x_2692_ = lean_st_ref_take(v_a_2654_);
v_lctx_2693_ = lean_ctor_get(v___x_2692_, 0);
v_nextIdx_2694_ = lean_ctor_get(v___x_2692_, 1);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2696_ = v___x_2692_;
v_isShared_2697_ = v_isSharedCheck_2713_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_nextIdx_2694_);
lean_inc(v_lctx_2693_);
lean_dec(v___x_2692_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2713_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2698_; lean_object* v___x_2700_; 
lean_inc_ref(v___x_2691_);
v___x_2698_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2676_, v_lctx_2693_, v___x_2691_);
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v___x_2698_);
v___x_2700_ = v___x_2696_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2698_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v_nextIdx_2694_);
v___x_2700_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; 
v___x_2701_ = lean_st_ref_put(v_a_2654_, v___x_2700_);
v___x_2702_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2672_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2711_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2705_ = v___x_2702_;
v_isShared_2706_ = v_isSharedCheck_2711_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2702_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2711_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2707_; lean_object* v___x_2709_; 
v___x_2707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2691_);
lean_ctor_set(v___x_2707_, 1, v_a_2703_);
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 0, v___x_2707_);
v___x_2709_ = v___x_2705_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
else
{
lean_dec_ref(v___x_2691_);
return v___x_2702_;
}
}
}
}
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_del_object(v___x_2674_);
lean_dec_ref(v_code_2672_);
lean_dec_ref(v_params_2671_);
lean_del_object(v___x_2661_);
lean_dec(v_discr_2658_);
v_a_2716_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2678_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2678_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
}
else
{
lean_object* v___x_2726_; lean_object* v___x_2727_; 
lean_dec(v___x_2670_);
lean_del_object(v___x_2661_);
lean_dec(v_discr_2658_);
v___x_2726_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6);
v___x_2727_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2726_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_);
return v___x_2727_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2732_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2733_ = lean_unsigned_to_nat(2u);
v___x_2734_ = lean_unsigned_to_nat(192u);
v___x_2735_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2736_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2737_ = l_mkPanicMessageWithDecl(v___x_2736_, v___x_2735_, v___x_2734_, v___x_2733_, v___x_2732_);
return v___x_2737_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2739_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2740_ = lean_unsigned_to_nat(34u);
v___x_2741_ = lean_unsigned_to_nat(193u);
v___x_2742_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2743_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2744_ = l_mkPanicMessageWithDecl(v___x_2743_, v___x_2742_, v___x_2741_, v___x_2740_, v___x_2739_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object* v_c_2745_, lean_object* v_uintName_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v_discr_2753_; lean_object* v_alts_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2824_; 
v_discr_2753_ = lean_ctor_get(v_c_2745_, 2);
v_alts_2754_ = lean_ctor_get(v_c_2745_, 3);
v_isSharedCheck_2824_ = !lean_is_exclusive(v_c_2745_);
if (v_isSharedCheck_2824_ == 0)
{
lean_object* v_unused_2825_; lean_object* v_unused_2826_; 
v_unused_2825_ = lean_ctor_get(v_c_2745_, 1);
lean_dec(v_unused_2825_);
v_unused_2826_ = lean_ctor_get(v_c_2745_, 0);
lean_dec(v_unused_2826_);
v___x_2756_ = v_c_2745_;
v_isShared_2757_ = v_isSharedCheck_2824_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_alts_2754_);
lean_inc(v_discr_2753_);
lean_dec(v_c_2745_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2824_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2758_ = lean_array_get_size(v_alts_2754_);
v___x_2759_ = lean_unsigned_to_nat(1u);
v___x_2760_ = lean_nat_dec_eq(v___x_2758_, v___x_2759_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
lean_del_object(v___x_2756_);
lean_dec_ref(v_alts_2754_);
lean_dec(v_discr_2753_);
lean_dec(v_uintName_2746_);
v___x_2761_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2);
v___x_2762_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2761_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_);
return v___x_2762_;
}
else
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2764_ = lean_unsigned_to_nat(0u);
v___x_2765_ = lean_array_get(v___x_2763_, v_alts_2754_, v___x_2764_);
lean_dec_ref(v_alts_2754_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_params_2766_; lean_object* v_code_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2820_; 
v_params_2766_ = lean_ctor_get(v___x_2765_, 1);
v_code_2767_ = lean_ctor_get(v___x_2765_, 2);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2820_ == 0)
{
lean_object* v_unused_2821_; 
v_unused_2821_ = lean_ctor_get(v___x_2765_, 0);
lean_dec(v_unused_2821_);
v___x_2769_ = v___x_2765_;
v_isShared_2770_ = v_isSharedCheck_2820_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_code_2767_);
lean_inc(v_params_2766_);
lean_dec(v___x_2765_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2820_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
uint8_t v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2771_ = 0;
v___x_2772_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2773_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2771_, v_params_2766_, v_a_2749_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v___x_2774_; lean_object* v_fvarId_2775_; lean_object* v_binderName_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2785_; 
lean_dec_ref_known(v___x_2773_, 1);
v___x_2774_ = lean_array_get(v___x_2772_, v_params_2766_, v___x_2764_);
lean_dec_ref(v_params_2766_);
v_fvarId_2775_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_fvarId_2775_);
v_binderName_2776_ = lean_ctor_get(v___x_2774_, 1);
lean_inc(v_binderName_2776_);
lean_dec(v___x_2774_);
v___x_2777_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2778_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4));
v___x_2779_ = l_Lean_Name_str___override(v_uintName_2746_, v___x_2778_);
v___x_2780_ = lean_box(0);
v___x_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2781_, 0, v_discr_2753_);
v___x_2782_ = lean_mk_empty_array_with_capacity(v___x_2759_);
v___x_2783_ = lean_array_push(v___x_2782_, v___x_2781_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set_tag(v___x_2769_, 3);
lean_ctor_set(v___x_2769_, 2, v___x_2783_);
lean_ctor_set(v___x_2769_, 1, v___x_2780_);
lean_ctor_set(v___x_2769_, 0, v___x_2779_);
v___x_2785_ = v___x_2769_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v___x_2779_);
lean_ctor_set(v_reuseFailAlloc_2811_, 1, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2811_, 2, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2787_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 3, v___x_2785_);
lean_ctor_set(v___x_2756_, 2, v___x_2777_);
lean_ctor_set(v___x_2756_, 1, v_binderName_2776_);
lean_ctor_set(v___x_2756_, 0, v_fvarId_2775_);
v___x_2787_ = v___x_2756_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_fvarId_2775_);
lean_ctor_set(v_reuseFailAlloc_2810_, 1, v_binderName_2776_);
lean_ctor_set(v_reuseFailAlloc_2810_, 2, v___x_2777_);
lean_ctor_set(v_reuseFailAlloc_2810_, 3, v___x_2785_);
v___x_2787_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; lean_object* v_lctx_2789_; lean_object* v_nextIdx_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2809_; 
v___x_2788_ = lean_st_ref_take(v_a_2749_);
v_lctx_2789_ = lean_ctor_get(v___x_2788_, 0);
v_nextIdx_2790_ = lean_ctor_get(v___x_2788_, 1);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2792_ = v___x_2788_;
v_isShared_2793_ = v_isSharedCheck_2809_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_nextIdx_2790_);
lean_inc(v_lctx_2789_);
lean_dec(v___x_2788_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2809_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2794_; lean_object* v___x_2796_; 
lean_inc_ref(v___x_2787_);
v___x_2794_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2771_, v_lctx_2789_, v___x_2787_);
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v___x_2794_);
v___x_2796_ = v___x_2792_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2808_, 1, v_nextIdx_2790_);
v___x_2796_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2797_ = lean_st_ref_put(v_a_2749_, v___x_2796_);
v___x_2798_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2767_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_);
if (lean_obj_tag(v___x_2798_) == 0)
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2807_; 
v_a_2799_ = lean_ctor_get(v___x_2798_, 0);
v_isSharedCheck_2807_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2807_ == 0)
{
v___x_2801_ = v___x_2798_;
v_isShared_2802_ = v_isSharedCheck_2807_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2798_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2807_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_2805_; 
v___x_2803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2787_);
lean_ctor_set(v___x_2803_, 1, v_a_2799_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 0, v___x_2803_);
v___x_2805_ = v___x_2801_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v___x_2803_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
}
else
{
lean_dec_ref(v___x_2787_);
return v___x_2798_;
}
}
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_del_object(v___x_2769_);
lean_dec_ref(v_code_2767_);
lean_dec_ref(v_params_2766_);
lean_del_object(v___x_2756_);
lean_dec(v_discr_2753_);
lean_dec(v_uintName_2746_);
v_a_2812_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2773_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2773_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_dec(v___x_2765_);
lean_del_object(v___x_2756_);
lean_dec(v_discr_2753_);
lean_dec(v_uintName_2746_);
v___x_2822_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5);
v___x_2823_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2822_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_);
return v___x_2823_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2827_ = lean_box(0);
v___x_2828_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_2829_ = l_Lean_mkConst(v___x_2828_, v___x_2827_);
return v___x_2829_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2836_ = lean_box(0);
v___x_2837_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_2838_ = l_Lean_mkConst(v___x_2837_, v___x_2836_);
return v___x_2838_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2849_ = lean_box(0);
v___x_2850_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_2851_ = l_Lean_mkConst(v___x_2850_, v___x_2849_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object* v___x_2884_, size_t v_sz_2885_, size_t v_i_2886_, lean_object* v_bs_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
uint8_t v___x_2894_; 
v___x_2894_ = lean_usize_dec_lt(v_i_2886_, v_sz_2885_);
if (v___x_2894_ == 0)
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
lean_dec(v___x_2884_);
v___x_2895_ = l_unsafeCast___redArg(v_bs_2887_);
lean_dec_ref(v_bs_2887_);
v___x_2896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
return v___x_2896_;
}
else
{
lean_object* v_v_2897_; lean_object* v___x_2898_; lean_object* v_bs_x27_2899_; lean_object* v_a_2901_; lean_object* v___x_2907_; 
v_v_2897_ = lean_array_uget(v_bs_2887_, v_i_2886_);
v___x_2898_ = lean_unsigned_to_nat(0u);
v_bs_x27_2899_ = lean_array_uset(v_bs_2887_, v_i_2886_, v___x_2898_);
v___x_2907_ = l_unsafeCast___redArg(v_v_2897_);
lean_dec(v_v_2897_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_ctorName_2908_; lean_object* v_params_2909_; lean_object* v_code_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_3037_; 
v_ctorName_2908_ = lean_ctor_get(v___x_2907_, 0);
v_params_2909_ = lean_ctor_get(v___x_2907_, 1);
v_code_2910_ = lean_ctor_get(v___x_2907_, 2);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_2912_ = v___x_2907_;
v_isShared_2913_ = v_isSharedCheck_3037_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_code_2910_);
lean_inc(v_params_2909_);
lean_inc(v_ctorName_2908_);
lean_dec(v___x_2907_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_3037_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
uint8_t v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2914_ = 0;
v___x_2915_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2916_ = lean_box(0);
v___x_2917_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2918_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2914_, v_params_2909_, v___y_2890_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v___x_2919_; lean_object* v___x_2920_; uint8_t v___x_2921_; 
lean_dec_ref_known(v___x_2918_, 1);
v___x_2919_ = lean_array_get(v___x_2915_, v_params_2909_, v___x_2898_);
lean_dec_ref(v_params_2909_);
v___x_2920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1));
v___x_2921_ = lean_name_eq(v_ctorName_2908_, v___x_2920_);
lean_dec(v_ctorName_2908_);
if (v___x_2921_ == 0)
{
lean_object* v_fvarId_2922_; lean_object* v_binderName_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v_lctx_2931_; lean_object* v_nextIdx_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2957_; 
v_fvarId_2922_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_fvarId_2922_);
v_binderName_2923_ = lean_ctor_get(v___x_2919_, 1);
lean_inc(v_binderName_2923_);
lean_dec(v___x_2919_);
v___x_2924_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2925_ = lean_unsigned_to_nat(1u);
v___x_2926_ = lean_mk_empty_array_with_capacity(v___x_2925_);
lean_inc(v___x_2884_);
v___x_2927_ = lean_array_push(v___x_2926_, v___x_2884_);
v___x_2928_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2924_);
lean_ctor_set(v___x_2928_, 1, v___x_2916_);
lean_ctor_set(v___x_2928_, 2, v___x_2927_);
v___x_2929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2929_, 0, v_fvarId_2922_);
lean_ctor_set(v___x_2929_, 1, v_binderName_2923_);
lean_ctor_set(v___x_2929_, 2, v___x_2917_);
lean_ctor_set(v___x_2929_, 3, v___x_2928_);
v___x_2930_ = lean_st_ref_take(v___y_2890_);
v_lctx_2931_ = lean_ctor_get(v___x_2930_, 0);
v_nextIdx_2932_ = lean_ctor_get(v___x_2930_, 1);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2934_ = v___x_2930_;
v_isShared_2935_ = v_isSharedCheck_2957_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_nextIdx_2932_);
lean_inc(v_lctx_2931_);
lean_dec(v___x_2930_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2957_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2936_; lean_object* v___x_2938_; 
lean_inc_ref(v___x_2929_);
v___x_2936_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2914_, v_lctx_2931_, v___x_2929_);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2936_);
v___x_2938_ = v___x_2934_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2936_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v_nextIdx_2932_);
v___x_2938_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2939_ = lean_st_ref_put(v___y_2890_, v___x_2938_);
v___x_2940_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2910_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2946_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v___x_2940_, 1);
v___x_2942_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_2943_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2929_);
lean_ctor_set(v___x_2944_, 1, v_a_2941_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 2, v___x_2944_);
lean_ctor_set(v___x_2912_, 1, v___x_2943_);
lean_ctor_set(v___x_2912_, 0, v___x_2942_);
v___x_2946_ = v___x_2912_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2942_);
lean_ctor_set(v_reuseFailAlloc_2947_, 1, v___x_2943_);
lean_ctor_set(v_reuseFailAlloc_2947_, 2, v___x_2944_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
v_a_2901_ = v___x_2946_;
goto v___jp_2900_;
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
lean_dec_ref_known(v___x_2929_, 4);
lean_del_object(v___x_2912_);
lean_dec_ref(v_bs_x27_2899_);
lean_dec(v___x_2884_);
v_a_2948_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2940_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2940_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
}
else
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2958_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5));
v___x_2959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2960_ = lean_unsigned_to_nat(1u);
v___x_2961_ = lean_mk_empty_array_with_capacity(v___x_2960_);
lean_inc(v___x_2884_);
v___x_2962_ = lean_array_push(v___x_2961_, v___x_2884_);
v___x_2963_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2959_);
lean_ctor_set(v___x_2963_, 1, v___x_2916_);
lean_ctor_set(v___x_2963_, 2, v___x_2962_);
v___x_2964_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2914_, v___x_2958_, v___x_2917_, v___x_2963_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
if (lean_obj_tag(v___x_2964_) == 0)
{
lean_object* v_a_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v_a_2965_ = lean_ctor_get(v___x_2964_, 0);
lean_inc(v_a_2965_);
lean_dec_ref_known(v___x_2964_, 1);
v___x_2966_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_2967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_2968_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2914_, v___x_2966_, v___x_2917_, v___x_2967_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; lean_object* v_fvarId_2970_; lean_object* v_binderName_2971_; lean_object* v_fvarId_2972_; lean_object* v_fvarId_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v_lctx_2984_; lean_object* v_nextIdx_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3012_; 
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_a_2969_);
lean_dec_ref_known(v___x_2968_, 1);
v_fvarId_2970_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_fvarId_2970_);
v_binderName_2971_ = lean_ctor_get(v___x_2919_, 1);
lean_inc(v_binderName_2971_);
lean_dec(v___x_2919_);
v_fvarId_2972_ = lean_ctor_get(v_a_2965_, 0);
v_fvarId_2973_ = lean_ctor_get(v_a_2969_, 0);
v___x_2974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_2972_);
v___x_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2975_, 0, v_fvarId_2972_);
lean_inc(v_fvarId_2973_);
v___x_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2976_, 0, v_fvarId_2973_);
v___x_2977_ = lean_unsigned_to_nat(2u);
v___x_2978_ = lean_mk_empty_array_with_capacity(v___x_2977_);
v___x_2979_ = lean_array_push(v___x_2978_, v___x_2975_);
v___x_2980_ = lean_array_push(v___x_2979_, v___x_2976_);
v___x_2981_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2974_);
lean_ctor_set(v___x_2981_, 1, v___x_2916_);
lean_ctor_set(v___x_2981_, 2, v___x_2980_);
v___x_2982_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2982_, 0, v_fvarId_2970_);
lean_ctor_set(v___x_2982_, 1, v_binderName_2971_);
lean_ctor_set(v___x_2982_, 2, v___x_2917_);
lean_ctor_set(v___x_2982_, 3, v___x_2981_);
v___x_2983_ = lean_st_ref_take(v___y_2890_);
v_lctx_2984_ = lean_ctor_get(v___x_2983_, 0);
v_nextIdx_2985_ = lean_ctor_get(v___x_2983_, 1);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_2987_ = v___x_2983_;
v_isShared_2988_ = v_isSharedCheck_3012_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_nextIdx_2985_);
lean_inc(v_lctx_2984_);
lean_dec(v___x_2983_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3012_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2991_; 
lean_inc_ref(v___x_2982_);
v___x_2989_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2914_, v_lctx_2984_, v___x_2982_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 0, v___x_2989_);
v___x_2991_ = v___x_2987_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_2989_);
lean_ctor_set(v_reuseFailAlloc_3011_, 1, v_nextIdx_2985_);
v___x_2991_ = v_reuseFailAlloc_3011_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = lean_st_ref_put(v___y_2890_, v___x_2991_);
v___x_2993_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2910_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3001_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v___x_2993_, 1);
v___x_2995_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_2996_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2982_);
lean_ctor_set(v___x_2997_, 1, v_a_2994_);
v___x_2998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2998_, 0, v_a_2969_);
lean_ctor_set(v___x_2998_, 1, v___x_2997_);
v___x_2999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2999_, 0, v_a_2965_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 2, v___x_2999_);
lean_ctor_set(v___x_2912_, 1, v___x_2996_);
lean_ctor_set(v___x_2912_, 0, v___x_2995_);
v___x_3001_ = v___x_2912_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v___x_2995_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v___x_2996_);
lean_ctor_set(v_reuseFailAlloc_3002_, 2, v___x_2999_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
v_a_2901_ = v___x_3001_;
goto v___jp_2900_;
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_dec_ref_known(v___x_2982_, 4);
lean_dec(v_a_2969_);
lean_dec(v_a_2965_);
lean_del_object(v___x_2912_);
lean_dec_ref(v_bs_x27_2899_);
lean_dec(v___x_2884_);
v_a_3003_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_2993_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2993_);
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
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
lean_dec(v_a_2965_);
lean_dec(v___x_2919_);
lean_del_object(v___x_2912_);
lean_dec_ref(v_code_2910_);
lean_dec_ref(v_bs_x27_2899_);
lean_dec(v___x_2884_);
v_a_3013_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v___x_2968_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_2968_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3018_; 
if (v_isShared_3016_ == 0)
{
v___x_3018_ = v___x_3015_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3013_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec(v___x_2919_);
lean_del_object(v___x_2912_);
lean_dec_ref(v_code_2910_);
lean_dec_ref(v_bs_x27_2899_);
lean_dec(v___x_2884_);
v_a_3021_ = lean_ctor_get(v___x_2964_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_2964_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_2964_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
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
lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3036_; 
lean_del_object(v___x_2912_);
lean_dec_ref(v_code_2910_);
lean_dec_ref(v_params_2909_);
lean_dec(v_ctorName_2908_);
lean_dec_ref(v_bs_x27_2899_);
lean_dec(v___x_2884_);
v_a_3029_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_3031_ = v___x_2918_;
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v___x_2918_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3034_; 
if (v_isShared_3032_ == 0)
{
v___x_3034_ = v___x_3031_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v_a_3029_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
}
}
}
else
{
lean_object* v_code_3038_; lean_object* v___x_3039_; 
v_code_3038_ = lean_ctor_get(v___x_2907_, 0);
lean_inc_ref(v_code_3038_);
v___x_3039_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3038_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3039_, 1);
v___x_3041_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v___x_2907_, v_a_3040_);
v_a_2901_ = v___x_3041_;
goto v___jp_2900_;
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec_ref_known(v___x_2907_, 1);
lean_dec_ref(v_bs_x27_2899_);
lean_dec(v___x_2884_);
v_a_3042_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3039_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3039_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
v___jp_2900_:
{
size_t v___x_2902_; size_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2902_ = ((size_t)1ULL);
v___x_2903_ = lean_usize_add(v_i_2886_, v___x_2902_);
v___x_2904_ = l_unsafeCast___redArg(v_a_2901_);
lean_dec_ref(v_a_2901_);
v___x_2905_ = lean_array_uset(v_bs_x27_2899_, v_i_2886_, v___x_2904_);
v_i_2886_ = v___x_2903_;
v_bs_2887_ = v___x_2905_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object* v___x_3050_, lean_object* v_sz_3051_, lean_object* v_i_3052_, lean_object* v_bs_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
size_t v_sz_boxed_3060_; size_t v_i_boxed_3061_; lean_object* v_res_3062_; 
v_sz_boxed_3060_ = lean_unbox_usize(v_sz_3051_);
lean_dec(v_sz_3051_);
v_i_boxed_3061_ = lean_unbox_usize(v_i_3052_);
lean_dec(v_i_3052_);
v_res_3062_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_3050_, v_sz_boxed_3060_, v_i_boxed_3061_, v_bs_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object* v_c_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_resultType_3070_; lean_object* v_discr_3071_; lean_object* v_alts_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3173_; 
v_resultType_3070_ = lean_ctor_get(v_c_3063_, 1);
v_discr_3071_ = lean_ctor_get(v_c_3063_, 2);
v_alts_3072_ = lean_ctor_get(v_c_3063_, 3);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_c_3063_);
if (v_isSharedCheck_3173_ == 0)
{
lean_object* v_unused_3174_; 
v_unused_3174_ = lean_ctor_get(v_c_3063_, 0);
lean_dec(v_unused_3174_);
v___x_3074_ = v_c_3063_;
v_isShared_3075_ = v_isSharedCheck_3173_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_alts_3072_);
lean_inc(v_discr_3071_);
lean_inc(v_resultType_3070_);
lean_dec(v_c_3063_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3173_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
uint8_t v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = 0;
v___x_3077_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3070_, v_a_3067_, v_a_3068_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3077_, 1);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3081_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1));
v___x_3082_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_3083_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3076_, v___x_3081_, v___x_3080_, v___x_3082_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v_fvarId_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v_fvarId_3085_ = lean_ctor_get(v_a_3084_, 0);
v___x_3086_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5));
v___x_3087_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6);
v___x_3088_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8));
lean_inc(v_fvarId_3085_);
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v_fvarId_3085_);
v___x_3090_ = lean_unsigned_to_nat(1u);
v___x_3091_ = lean_mk_empty_array_with_capacity(v___x_3090_);
v___x_3092_ = lean_array_push(v___x_3091_, v___x_3089_);
v___x_3093_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3088_);
lean_ctor_set(v___x_3093_, 1, v___x_3079_);
lean_ctor_set(v___x_3093_, 2, v___x_3092_);
v___x_3094_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3076_, v___x_3086_, v___x_3087_, v___x_3093_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v_fvarId_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3094_, 1);
v_fvarId_3096_ = lean_ctor_get(v_a_3095_, 0);
v___x_3097_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10));
v___x_3098_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_3099_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3100_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12));
v___x_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3101_, 0, v_discr_3071_);
lean_inc(v_fvarId_3096_);
v___x_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3102_, 0, v_fvarId_3096_);
v___x_3103_ = lean_unsigned_to_nat(2u);
v___x_3104_ = lean_mk_empty_array_with_capacity(v___x_3103_);
lean_inc_ref(v___x_3101_);
v___x_3105_ = lean_array_push(v___x_3104_, v___x_3101_);
v___x_3106_ = lean_array_push(v___x_3105_, v___x_3102_);
v___x_3107_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3100_);
lean_ctor_set(v___x_3107_, 1, v___x_3079_);
lean_ctor_set(v___x_3107_, 2, v___x_3106_);
v___x_3108_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3076_, v___x_3097_, v___x_3099_, v___x_3107_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; size_t v_sz_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_32592__overap_3115_; lean_object* v___x_3116_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
lean_dec_ref_known(v___x_3108_, 1);
v_sz_3110_ = lean_array_size(v_alts_3072_);
v___x_3111_ = l_unsafeCast___redArg(v_alts_3072_);
lean_dec_ref(v_alts_3072_);
v___x_3112_ = lean_box_usize(v_sz_3110_);
v___x_3113_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_3114_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed), 10, 4);
lean_closure_set(v___x_3114_, 0, v___x_3101_);
lean_closure_set(v___x_3114_, 1, v___x_3112_);
lean_closure_set(v___x_3114_, 2, v___x_3113_);
lean_closure_set(v___x_3114_, 3, v___x_3111_);
v___x_32592__overap_3115_ = l_unsafeCast___redArg(v___x_3114_);
lean_dec_ref(v___x_3114_);
lean_inc(v_a_3068_);
lean_inc_ref(v_a_3067_);
lean_inc(v_a_3066_);
lean_inc_ref(v_a_3065_);
lean_inc(v_a_3064_);
v___x_3116_ = lean_apply_6(v___x_32592__overap_3115_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, lean_box(0));
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3132_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3119_ = v___x_3116_;
v_isShared_3120_ = v_isSharedCheck_3132_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3116_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3132_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v_fvarId_3121_; lean_object* v___x_3123_; 
v_fvarId_3121_ = lean_ctor_get(v_a_3109_, 0);
lean_inc(v_fvarId_3121_);
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 3, v_a_3117_);
lean_ctor_set(v___x_3074_, 2, v_fvarId_3121_);
lean_ctor_set(v___x_3074_, 1, v_a_3078_);
lean_ctor_set(v___x_3074_, 0, v___x_3098_);
v___x_3123_ = v___x_3074_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v___x_3098_);
lean_ctor_set(v_reuseFailAlloc_3131_, 1, v_a_3078_);
lean_ctor_set(v_reuseFailAlloc_3131_, 2, v_fvarId_3121_);
lean_ctor_set(v_reuseFailAlloc_3131_, 3, v_a_3117_);
v___x_3123_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3124_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
v___x_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3125_, 0, v_a_3109_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3126_, 0, v_a_3095_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
v___x_3127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3127_, 0, v_a_3084_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
if (v_isShared_3120_ == 0)
{
lean_ctor_set(v___x_3119_, 0, v___x_3127_);
v___x_3129_ = v___x_3119_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
lean_dec(v_a_3109_);
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3078_);
lean_del_object(v___x_3074_);
v_a_3133_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3116_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3116_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
lean_dec_ref_known(v___x_3101_, 1);
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3078_);
lean_del_object(v___x_3074_);
lean_dec_ref(v_alts_3072_);
v_a_3141_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3108_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3108_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_a_3084_);
lean_dec(v_a_3078_);
lean_del_object(v___x_3074_);
lean_dec_ref(v_alts_3072_);
lean_dec(v_discr_3071_);
v_a_3149_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3094_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3094_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_dec(v_a_3078_);
lean_del_object(v___x_3074_);
lean_dec_ref(v_alts_3072_);
lean_dec(v_discr_3071_);
v_a_3157_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3083_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3083_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_del_object(v___x_3074_);
lean_dec_ref(v_alts_3072_);
lean_dec(v_discr_3071_);
v_a_3165_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3077_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3077_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object* v___x_3184_, size_t v_sz_3185_, size_t v_i_3186_, lean_object* v_bs_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_){
_start:
{
uint8_t v___x_3194_; 
v___x_3194_ = lean_usize_dec_lt(v_i_3186_, v_sz_3185_);
if (v___x_3194_ == 0)
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
lean_dec(v___x_3184_);
v___x_3195_ = l_unsafeCast___redArg(v_bs_3187_);
lean_dec_ref(v_bs_3187_);
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
return v___x_3196_;
}
else
{
lean_object* v_v_3197_; lean_object* v___x_3198_; lean_object* v_bs_x27_3199_; lean_object* v_a_3201_; lean_object* v___x_3207_; 
v_v_3197_ = lean_array_uget(v_bs_3187_, v_i_3186_);
v___x_3198_ = lean_unsigned_to_nat(0u);
v_bs_x27_3199_ = lean_array_uset(v_bs_3187_, v_i_3186_, v___x_3198_);
v___x_3207_ = l_unsafeCast___redArg(v_v_3197_);
lean_dec(v_v_3197_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_ctorName_3208_; lean_object* v_params_3209_; lean_object* v_code_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3297_; 
v_ctorName_3208_ = lean_ctor_get(v___x_3207_, 0);
v_params_3209_ = lean_ctor_get(v___x_3207_, 1);
v_code_3210_ = lean_ctor_get(v___x_3207_, 2);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3212_ = v___x_3207_;
v_isShared_3213_ = v_isSharedCheck_3297_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_code_3210_);
lean_inc(v_params_3209_);
lean_inc(v_ctorName_3208_);
lean_dec(v___x_3207_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3297_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
uint8_t v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3214_ = 0;
v___x_3215_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_3216_ = lean_box(0);
v___x_3217_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3218_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_3214_, v_params_3209_, v___y_3190_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v___x_3219_; uint8_t v___x_3220_; 
lean_dec_ref_known(v___x_3218_, 1);
v___x_3219_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_3220_ = lean_name_eq(v_ctorName_3208_, v___x_3219_);
lean_dec(v_ctorName_3208_);
if (v___x_3220_ == 0)
{
lean_object* v___x_3221_; 
lean_dec_ref(v_params_3209_);
v___x_3221_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3210_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3226_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_3224_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
if (v_isShared_3213_ == 0)
{
lean_ctor_set(v___x_3212_, 2, v_a_3222_);
lean_ctor_set(v___x_3212_, 1, v___x_3224_);
lean_ctor_set(v___x_3212_, 0, v___x_3223_);
v___x_3226_ = v___x_3212_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3223_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v___x_3224_);
lean_ctor_set(v_reuseFailAlloc_3227_, 2, v_a_3222_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
v_a_3201_ = v___x_3226_;
goto v___jp_3200_;
}
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_del_object(v___x_3212_);
lean_dec_ref(v_bs_x27_3199_);
lean_dec(v___x_3184_);
v_a_3228_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3221_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3221_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3236_ = lean_array_get(v___x_3215_, v_params_3209_, v___x_3198_);
lean_dec_ref(v_params_3209_);
v___x_3237_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_3238_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3239_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3214_, v___x_3237_, v___x_3217_, v___x_3238_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v_fvarId_3241_; lean_object* v_binderName_3242_; lean_object* v_fvarId_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v_lctx_3253_; lean_object* v_nextIdx_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3280_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v_fvarId_3241_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_fvarId_3241_);
v_binderName_3242_ = lean_ctor_get(v___x_3236_, 1);
lean_inc(v_binderName_3242_);
lean_dec(v___x_3236_);
v_fvarId_3243_ = lean_ctor_get(v_a_3240_, 0);
v___x_3244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_3243_);
v___x_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3245_, 0, v_fvarId_3243_);
v___x_3246_ = lean_unsigned_to_nat(2u);
v___x_3247_ = lean_mk_empty_array_with_capacity(v___x_3246_);
lean_inc(v___x_3184_);
v___x_3248_ = lean_array_push(v___x_3247_, v___x_3184_);
v___x_3249_ = lean_array_push(v___x_3248_, v___x_3245_);
v___x_3250_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3244_);
lean_ctor_set(v___x_3250_, 1, v___x_3216_);
lean_ctor_set(v___x_3250_, 2, v___x_3249_);
v___x_3251_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3251_, 0, v_fvarId_3241_);
lean_ctor_set(v___x_3251_, 1, v_binderName_3242_);
lean_ctor_set(v___x_3251_, 2, v___x_3217_);
lean_ctor_set(v___x_3251_, 3, v___x_3250_);
v___x_3252_ = lean_st_ref_take(v___y_3190_);
v_lctx_3253_ = lean_ctor_get(v___x_3252_, 0);
v_nextIdx_3254_ = lean_ctor_get(v___x_3252_, 1);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3256_ = v___x_3252_;
v_isShared_3257_ = v_isSharedCheck_3280_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_nextIdx_3254_);
lean_inc(v_lctx_3253_);
lean_dec(v___x_3252_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3280_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3258_; lean_object* v___x_3260_; 
lean_inc_ref(v___x_3251_);
v___x_3258_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_3214_, v_lctx_3253_, v___x_3251_);
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 0, v___x_3258_);
v___x_3260_ = v___x_3256_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3258_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v_nextIdx_3254_);
v___x_3260_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; 
v___x_3261_ = lean_st_ref_put(v___y_3190_, v___x_3260_);
v___x_3262_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3210_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3269_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
v___x_3264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_3265_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3251_);
lean_ctor_set(v___x_3266_, 1, v_a_3263_);
v___x_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3267_, 0, v_a_3240_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
if (v_isShared_3213_ == 0)
{
lean_ctor_set(v___x_3212_, 2, v___x_3267_);
lean_ctor_set(v___x_3212_, 1, v___x_3265_);
lean_ctor_set(v___x_3212_, 0, v___x_3264_);
v___x_3269_ = v___x_3212_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3264_);
lean_ctor_set(v_reuseFailAlloc_3270_, 1, v___x_3265_);
lean_ctor_set(v_reuseFailAlloc_3270_, 2, v___x_3267_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
v_a_3201_ = v___x_3269_;
goto v___jp_3200_;
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3278_; 
lean_dec_ref_known(v___x_3251_, 4);
lean_dec(v_a_3240_);
lean_del_object(v___x_3212_);
lean_dec_ref(v_bs_x27_3199_);
lean_dec(v___x_3184_);
v_a_3271_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3273_ = v___x_3262_;
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3262_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
}
else
{
lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3288_; 
lean_dec(v___x_3236_);
lean_del_object(v___x_3212_);
lean_dec_ref(v_code_3210_);
lean_dec_ref(v_bs_x27_3199_);
lean_dec(v___x_3184_);
v_a_3281_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3283_ = v___x_3239_;
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3239_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3286_; 
if (v_isShared_3284_ == 0)
{
v___x_3286_ = v___x_3283_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_a_3281_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
return v___x_3286_;
}
}
}
}
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_del_object(v___x_3212_);
lean_dec_ref(v_code_3210_);
lean_dec_ref(v_params_3209_);
lean_dec(v_ctorName_3208_);
lean_dec_ref(v_bs_x27_3199_);
lean_dec(v___x_3184_);
v_a_3289_ = lean_ctor_get(v___x_3218_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3218_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3218_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3218_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
}
else
{
lean_object* v_code_3298_; lean_object* v___x_3299_; 
v_code_3298_ = lean_ctor_get(v___x_3207_, 0);
lean_inc_ref(v_code_3298_);
v___x_3299_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3298_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3301_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3300_);
lean_dec_ref_known(v___x_3299_, 1);
v___x_3301_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v___x_3207_, v_a_3300_);
v_a_3201_ = v___x_3301_;
goto v___jp_3200_;
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec_ref_known(v___x_3207_, 1);
lean_dec_ref(v_bs_x27_3199_);
lean_dec(v___x_3184_);
v_a_3302_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3299_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3299_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
v___jp_3200_:
{
size_t v___x_3202_; size_t v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3202_ = ((size_t)1ULL);
v___x_3203_ = lean_usize_add(v_i_3186_, v___x_3202_);
v___x_3204_ = l_unsafeCast___redArg(v_a_3201_);
lean_dec_ref(v_a_3201_);
v___x_3205_ = lean_array_uset(v_bs_x27_3199_, v_i_3186_, v___x_3204_);
v_i_3186_ = v___x_3203_;
v_bs_3187_ = v___x_3205_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object* v___x_3310_, lean_object* v_sz_3311_, lean_object* v_i_3312_, lean_object* v_bs_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
size_t v_sz_boxed_3320_; size_t v_i_boxed_3321_; lean_object* v_res_3322_; 
v_sz_boxed_3320_ = lean_unbox_usize(v_sz_3311_);
lean_dec(v_sz_3311_);
v_i_boxed_3321_ = lean_unbox_usize(v_i_3312_);
lean_dec(v_i_3312_);
v_res_3322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3310_, v_sz_boxed_3320_, v_i_boxed_3321_, v_bs_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object* v_c_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v_resultType_3330_; lean_object* v_discr_3331_; lean_object* v_alts_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3413_; 
v_resultType_3330_ = lean_ctor_get(v_c_3323_, 1);
v_discr_3331_ = lean_ctor_get(v_c_3323_, 2);
v_alts_3332_ = lean_ctor_get(v_c_3323_, 3);
v_isSharedCheck_3413_ = !lean_is_exclusive(v_c_3323_);
if (v_isSharedCheck_3413_ == 0)
{
lean_object* v_unused_3414_; 
v_unused_3414_ = lean_ctor_get(v_c_3323_, 0);
lean_dec(v_unused_3414_);
v___x_3334_ = v_c_3323_;
v_isShared_3335_ = v_isSharedCheck_3413_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_alts_3332_);
lean_inc(v_discr_3331_);
lean_inc(v_resultType_3330_);
lean_dec(v_c_3323_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3413_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
uint8_t v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = 0;
v___x_3337_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3330_, v_a_3327_, v_a_3328_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3339_ = lean_box(0);
v___x_3340_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3341_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2));
v___x_3342_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_3343_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3336_, v___x_3341_, v___x_3340_, v___x_3342_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_a_3344_; lean_object* v_fvarId_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v_a_3344_ = lean_ctor_get(v___x_3343_, 0);
lean_inc(v_a_3344_);
lean_dec_ref_known(v___x_3343_, 1);
v_fvarId_3345_ = lean_ctor_get(v_a_3344_, 0);
v___x_3346_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4));
v___x_3347_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_3348_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3349_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9));
v___x_3350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3350_, 0, v_discr_3331_);
lean_inc(v_fvarId_3345_);
v___x_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_fvarId_3345_);
v___x_3352_ = lean_unsigned_to_nat(2u);
v___x_3353_ = lean_mk_empty_array_with_capacity(v___x_3352_);
lean_inc_ref(v___x_3350_);
v___x_3354_ = lean_array_push(v___x_3353_, v___x_3350_);
v___x_3355_ = lean_array_push(v___x_3354_, v___x_3351_);
v___x_3356_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3349_);
lean_ctor_set(v___x_3356_, 1, v___x_3339_);
lean_ctor_set(v___x_3356_, 2, v___x_3355_);
v___x_3357_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3336_, v___x_3346_, v___x_3348_, v___x_3356_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v_a_3358_; size_t v_sz_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_32595__overap_3364_; lean_object* v___x_3365_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___x_3357_, 1);
v_sz_3359_ = lean_array_size(v_alts_3332_);
v___x_3360_ = l_unsafeCast___redArg(v_alts_3332_);
lean_dec_ref(v_alts_3332_);
v___x_3361_ = lean_box_usize(v_sz_3359_);
v___x_3362_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_3363_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed), 10, 4);
lean_closure_set(v___x_3363_, 0, v___x_3350_);
lean_closure_set(v___x_3363_, 1, v___x_3361_);
lean_closure_set(v___x_3363_, 2, v___x_3362_);
lean_closure_set(v___x_3363_, 3, v___x_3360_);
v___x_32595__overap_3364_ = l_unsafeCast___redArg(v___x_3363_);
lean_dec_ref(v___x_3363_);
lean_inc(v_a_3328_);
lean_inc_ref(v_a_3327_);
lean_inc(v_a_3326_);
lean_inc_ref(v_a_3325_);
lean_inc(v_a_3324_);
v___x_3365_ = lean_apply_6(v___x_32595__overap_3364_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, lean_box(0));
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3380_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3368_ = v___x_3365_;
v_isShared_3369_ = v_isSharedCheck_3380_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3365_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3380_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v_fvarId_3370_; lean_object* v___x_3372_; 
v_fvarId_3370_ = lean_ctor_get(v_a_3358_, 0);
lean_inc(v_fvarId_3370_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 3, v_a_3366_);
lean_ctor_set(v___x_3334_, 2, v_fvarId_3370_);
lean_ctor_set(v___x_3334_, 1, v_a_3338_);
lean_ctor_set(v___x_3334_, 0, v___x_3347_);
v___x_3372_ = v___x_3334_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v___x_3347_);
lean_ctor_set(v_reuseFailAlloc_3379_, 1, v_a_3338_);
lean_ctor_set(v_reuseFailAlloc_3379_, 2, v_fvarId_3370_);
lean_ctor_set(v_reuseFailAlloc_3379_, 3, v_a_3366_);
v___x_3372_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3377_; 
v___x_3373_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
v___x_3374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3374_, 0, v_a_3358_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v_a_3344_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
if (v_isShared_3369_ == 0)
{
lean_ctor_set(v___x_3368_, 0, v___x_3375_);
v___x_3377_ = v___x_3368_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v___x_3375_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec(v_a_3358_);
lean_dec(v_a_3344_);
lean_dec(v_a_3338_);
lean_del_object(v___x_3334_);
v_a_3381_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3365_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3365_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec_ref_known(v___x_3350_, 1);
lean_dec(v_a_3344_);
lean_dec(v_a_3338_);
lean_del_object(v___x_3334_);
lean_dec_ref(v_alts_3332_);
v_a_3389_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3357_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3357_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
lean_dec(v_a_3338_);
lean_del_object(v___x_3334_);
lean_dec_ref(v_alts_3332_);
lean_dec(v_discr_3331_);
v_a_3397_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3343_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3343_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3412_; 
lean_del_object(v___x_3334_);
lean_dec_ref(v_alts_3332_);
lean_dec(v_discr_3331_);
v_a_3405_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3407_ = v___x_3337_;
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v___x_3337_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object* v_code_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_){
_start:
{
lean_object* v_decl_3423_; lean_object* v_k_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; 
switch(lean_obj_tag(v_code_3415_))
{
case 0:
{
lean_object* v_decl_3539_; lean_object* v_k_3540_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v_value_3596_; 
v_decl_3539_ = lean_ctor_get(v_code_3415_, 0);
v_k_3540_ = lean_ctor_get(v_code_3415_, 1);
v_value_3596_ = lean_ctor_get(v_decl_3539_, 3);
lean_inc(v_value_3596_);
if (lean_obj_tag(v_value_3596_) == 3)
{
lean_object* v_declName_3597_; 
v_declName_3597_ = lean_ctor_get(v_value_3596_, 0);
lean_inc(v_declName_3597_);
if (lean_obj_tag(v_declName_3597_) == 1)
{
lean_object* v_pre_3598_; 
v_pre_3598_ = lean_ctor_get(v_declName_3597_, 0);
lean_inc(v_pre_3598_);
if (lean_obj_tag(v_pre_3598_) == 1)
{
lean_object* v_pre_3599_; 
v_pre_3599_ = lean_ctor_get(v_pre_3598_, 0);
if (lean_obj_tag(v_pre_3599_) == 0)
{
lean_object* v_type_3600_; lean_object* v_args_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3671_; 
v_type_3600_ = lean_ctor_get(v_decl_3539_, 2);
v_args_3601_ = lean_ctor_get(v_value_3596_, 2);
v_isSharedCheck_3671_ = !lean_is_exclusive(v_value_3596_);
if (v_isSharedCheck_3671_ == 0)
{
lean_object* v_unused_3672_; lean_object* v_unused_3673_; 
v_unused_3672_ = lean_ctor_get(v_value_3596_, 1);
lean_dec(v_unused_3672_);
v_unused_3673_ = lean_ctor_get(v_value_3596_, 0);
lean_dec(v_unused_3673_);
v___x_3603_ = v_value_3596_;
v_isShared_3604_ = v_isSharedCheck_3671_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_args_3601_);
lean_dec(v_value_3596_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3671_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v_str_3605_; lean_object* v_str_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; 
v_str_3605_ = lean_ctor_get(v_declName_3597_, 1);
lean_inc_ref(v_str_3605_);
lean_dec_ref_known(v_declName_3597_, 2);
v_str_3606_ = lean_ctor_get(v_pre_3598_, 1);
lean_inc_ref(v_str_3606_);
lean_dec_ref_known(v_pre_3598_, 2);
v___x_3607_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__5));
v___x_3608_ = lean_string_dec_eq(v_str_3606_, v___x_3607_);
lean_dec_ref(v_str_3606_);
if (v___x_3608_ == 0)
{
lean_dec_ref(v_str_3605_);
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
v___y_3542_ = v_a_3416_;
v___y_3543_ = v_a_3417_;
v___y_3544_ = v_a_3418_;
v___y_3545_ = v_a_3419_;
v___y_3546_ = v_a_3420_;
goto v___jp_3541_;
}
else
{
lean_object* v___x_3609_; uint8_t v___x_3610_; 
v___x_3609_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__8));
v___x_3610_ = lean_string_dec_eq(v_str_3605_, v___x_3609_);
lean_dec_ref(v_str_3605_);
if (v___x_3610_ == 0)
{
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
v___y_3542_ = v_a_3416_;
v___y_3543_ = v_a_3417_;
v___y_3544_ = v_a_3418_;
v___y_3545_ = v_a_3419_;
v___y_3546_ = v_a_3420_;
goto v___jp_3541_;
}
else
{
lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3668_; 
lean_inc_ref(v_type_3600_);
lean_inc_ref(v_k_3540_);
lean_inc_ref(v_decl_3539_);
v_isSharedCheck_3668_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3668_ == 0)
{
lean_object* v_unused_3669_; lean_object* v_unused_3670_; 
v_unused_3669_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3669_);
v_unused_3670_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3670_);
v___x_3612_ = v_code_3415_;
v_isShared_3613_ = v_isSharedCheck_3668_;
goto v_resetjp_3611_;
}
else
{
lean_dec(v_code_3415_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3668_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3614_ = lean_array_get_size(v_args_3601_);
v___x_3615_ = lean_unsigned_to_nat(1u);
v___x_3616_ = lean_nat_dec_eq(v___x_3614_, v___x_3615_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
lean_del_object(v___x_3612_);
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
lean_dec_ref(v_type_3600_);
lean_dec_ref(v_k_3540_);
lean_dec_ref(v_decl_3539_);
v___x_3617_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__5, &l_Lean_Compiler_LCNF_Code_toMono___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5);
v___x_3618_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3617_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3618_;
}
else
{
lean_object* v___x_3619_; lean_object* v___x_3620_; uint8_t v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3619_ = lean_unsigned_to_nat(0u);
v___x_3620_ = lean_array_fget(v_args_3601_, v___x_3619_);
lean_dec_ref(v_args_3601_);
v___x_3621_ = 0;
v___x_3622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3623_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_3624_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_3621_, v___x_3622_, v___x_3623_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3625_; lean_object* v_fvarId_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3635_; 
v_a_3625_ = lean_ctor_get(v___x_3624_, 0);
lean_inc(v_a_3625_);
lean_dec_ref_known(v___x_3624_, 1);
v_fvarId_3626_ = lean_ctor_get(v_a_3625_, 0);
v___x_3627_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__7));
v___x_3628_ = lean_box(0);
lean_inc(v_fvarId_3626_);
v___x_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3629_, 0, v_fvarId_3626_);
v___x_3630_ = lean_unsigned_to_nat(2u);
v___x_3631_ = lean_mk_empty_array_with_capacity(v___x_3630_);
v___x_3632_ = lean_array_push(v___x_3631_, v___x_3620_);
v___x_3633_ = lean_array_push(v___x_3632_, v___x_3629_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 2, v___x_3633_);
lean_ctor_set(v___x_3603_, 1, v___x_3628_);
lean_ctor_set(v___x_3603_, 0, v___x_3627_);
v___x_3635_ = v___x_3603_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v___x_3627_);
lean_ctor_set(v_reuseFailAlloc_3659_, 1, v___x_3628_);
lean_ctor_set(v_reuseFailAlloc_3659_, 2, v___x_3633_);
v___x_3635_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3636_; 
v___x_3636_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_3621_, v_decl_3539_, v_type_3600_, v___x_3635_, v_a_3418_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3540_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3650_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3641_ = v___x_3638_;
v_isShared_3642_ = v_isSharedCheck_3650_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3638_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3650_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3613_ == 0)
{
lean_ctor_set(v___x_3612_, 1, v_a_3639_);
lean_ctor_set(v___x_3612_, 0, v_a_3637_);
v___x_3644_ = v___x_3612_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3637_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_a_3639_);
v___x_3644_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; lean_object* v___x_3647_; 
v___x_3645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3645_, 0, v_a_3625_);
lean_ctor_set(v___x_3645_, 1, v___x_3644_);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v___x_3645_);
v___x_3647_ = v___x_3641_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3645_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
else
{
lean_dec(v_a_3637_);
lean_dec(v_a_3625_);
lean_del_object(v___x_3612_);
return v___x_3638_;
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_a_3625_);
lean_del_object(v___x_3612_);
lean_dec_ref(v_k_3540_);
v_a_3651_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3636_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3636_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
lean_dec(v___x_3620_);
lean_del_object(v___x_3612_);
lean_del_object(v___x_3603_);
lean_dec_ref(v_type_3600_);
lean_dec_ref(v_k_3540_);
lean_dec_ref(v_decl_3539_);
v_a_3660_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3624_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3624_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
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
lean_dec_ref_known(v_pre_3598_, 2);
lean_dec_ref_known(v_declName_3597_, 2);
lean_dec_ref_known(v_value_3596_, 3);
v___y_3542_ = v_a_3416_;
v___y_3543_ = v_a_3417_;
v___y_3544_ = v_a_3418_;
v___y_3545_ = v_a_3419_;
v___y_3546_ = v_a_3420_;
goto v___jp_3541_;
}
}
else
{
lean_dec(v_pre_3598_);
lean_dec_ref_known(v_declName_3597_, 2);
lean_dec_ref_known(v_value_3596_, 3);
v___y_3542_ = v_a_3416_;
v___y_3543_ = v_a_3417_;
v___y_3544_ = v_a_3418_;
v___y_3545_ = v_a_3419_;
v___y_3546_ = v_a_3420_;
goto v___jp_3541_;
}
}
else
{
lean_dec_ref_known(v_value_3596_, 3);
lean_dec(v_declName_3597_);
v___y_3542_ = v_a_3416_;
v___y_3543_ = v_a_3417_;
v___y_3544_ = v_a_3418_;
v___y_3545_ = v_a_3419_;
v___y_3546_ = v_a_3420_;
goto v___jp_3541_;
}
}
else
{
lean_dec(v_value_3596_);
v___y_3542_ = v_a_3416_;
v___y_3543_ = v_a_3417_;
v___y_3544_ = v_a_3418_;
v___y_3545_ = v_a_3419_;
v___y_3546_ = v_a_3420_;
goto v___jp_3541_;
}
v___jp_3541_:
{
lean_object* v___x_3547_; 
lean_inc_ref(v_decl_3539_);
v___x_3547_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_3539_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; lean_object* v___x_3549_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v___x_3547_, 1);
lean_inc_ref(v_k_3540_);
v___x_3549_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3540_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3587_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3552_ = v___x_3549_;
v_isShared_3553_ = v_isSharedCheck_3587_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3549_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3587_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
size_t v___x_3554_; size_t v___x_3555_; uint8_t v___x_3556_; 
v___x_3554_ = lean_ptr_addr(v_k_3540_);
v___x_3555_ = lean_ptr_addr(v_a_3550_);
v___x_3556_ = lean_usize_dec_eq(v___x_3554_, v___x_3555_);
if (v___x_3556_ == 0)
{
lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3566_; 
v_isSharedCheck_3566_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3566_ == 0)
{
lean_object* v_unused_3567_; lean_object* v_unused_3568_; 
v_unused_3567_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3567_);
v_unused_3568_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3568_);
v___x_3558_ = v_code_3415_;
v_isShared_3559_ = v_isSharedCheck_3566_;
goto v_resetjp_3557_;
}
else
{
lean_dec(v_code_3415_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3566_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3561_; 
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 1, v_a_3550_);
lean_ctor_set(v___x_3558_, 0, v_a_3548_);
v___x_3561_ = v___x_3558_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3548_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v_a_3550_);
v___x_3561_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
lean_object* v___x_3563_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v___x_3561_);
v___x_3563_ = v___x_3552_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v___x_3561_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
else
{
size_t v___x_3569_; size_t v___x_3570_; uint8_t v___x_3571_; 
v___x_3569_ = lean_ptr_addr(v_decl_3539_);
v___x_3570_ = lean_ptr_addr(v_a_3548_);
v___x_3571_ = lean_usize_dec_eq(v___x_3569_, v___x_3570_);
if (v___x_3571_ == 0)
{
lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3581_; 
v_isSharedCheck_3581_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3581_ == 0)
{
lean_object* v_unused_3582_; lean_object* v_unused_3583_; 
v_unused_3582_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3582_);
v_unused_3583_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3583_);
v___x_3573_ = v_code_3415_;
v_isShared_3574_ = v_isSharedCheck_3581_;
goto v_resetjp_3572_;
}
else
{
lean_dec(v_code_3415_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3581_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 1, v_a_3550_);
lean_ctor_set(v___x_3573_, 0, v_a_3548_);
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3548_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v_a_3550_);
v___x_3576_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
lean_object* v___x_3578_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v___x_3576_);
v___x_3578_ = v___x_3552_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v___x_3576_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
return v___x_3578_;
}
}
}
}
else
{
lean_object* v___x_3585_; 
lean_dec(v_a_3550_);
lean_dec(v_a_3548_);
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v_code_3415_);
v___x_3585_ = v___x_3552_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_code_3415_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
}
else
{
lean_dec(v_a_3548_);
lean_dec_ref_known(v_code_3415_, 2);
return v___x_3549_;
}
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec_ref_known(v_code_3415_, 2);
v_a_3588_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3547_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3547_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_3674_; lean_object* v_args_3675_; size_t v_sz_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_32539__overap_3681_; lean_object* v___x_3682_; 
v_fvarId_3674_ = lean_ctor_get(v_code_3415_, 0);
v_args_3675_ = lean_ctor_get(v_code_3415_, 1);
v_sz_3676_ = lean_array_size(v_args_3675_);
v___x_3677_ = l_unsafeCast___redArg(v_args_3675_);
v___x_3678_ = lean_box_usize(v_sz_3676_);
v___x_3679_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_3680_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed), 9, 3);
lean_closure_set(v___x_3680_, 0, v___x_3678_);
lean_closure_set(v___x_3680_, 1, v___x_3679_);
lean_closure_set(v___x_3680_, 2, v___x_3677_);
v___x_32539__overap_3681_ = l_unsafeCast___redArg(v___x_3680_);
lean_dec_ref(v___x_3680_);
lean_inc(v_a_3420_);
lean_inc_ref(v_a_3419_);
lean_inc(v_a_3418_);
lean_inc_ref(v_a_3417_);
lean_inc(v_a_3416_);
v___x_3682_ = lean_apply_6(v___x_32539__overap_3681_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, lean_box(0));
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3708_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3708_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3708_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
uint8_t v___y_3688_; uint8_t v___x_3704_; 
v___x_3704_ = l_Lean_instBEqFVarId_beq(v_fvarId_3674_, v_fvarId_3674_);
if (v___x_3704_ == 0)
{
v___y_3688_ = v___x_3704_;
goto v___jp_3687_;
}
else
{
size_t v___x_3705_; size_t v___x_3706_; uint8_t v___x_3707_; 
v___x_3705_ = lean_ptr_addr(v_args_3675_);
v___x_3706_ = lean_ptr_addr(v_a_3683_);
v___x_3707_ = lean_usize_dec_eq(v___x_3705_, v___x_3706_);
v___y_3688_ = v___x_3707_;
goto v___jp_3687_;
}
v___jp_3687_:
{
if (v___y_3688_ == 0)
{
lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3698_; 
lean_inc(v_fvarId_3674_);
v_isSharedCheck_3698_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3698_ == 0)
{
lean_object* v_unused_3699_; lean_object* v_unused_3700_; 
v_unused_3699_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3699_);
v_unused_3700_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3700_);
v___x_3690_ = v_code_3415_;
v_isShared_3691_ = v_isSharedCheck_3698_;
goto v_resetjp_3689_;
}
else
{
lean_dec(v_code_3415_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3698_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 1, v_a_3683_);
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_fvarId_3674_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v_a_3683_);
v___x_3693_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
lean_object* v___x_3695_; 
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3693_);
v___x_3695_ = v___x_3685_;
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
}
}
else
{
lean_object* v___x_3702_; 
lean_dec(v_a_3683_);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v_code_3415_);
v___x_3702_ = v___x_3685_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_code_3415_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
}
else
{
lean_object* v_a_3709_; lean_object* v___x_3711_; uint8_t v_isShared_3712_; uint8_t v_isSharedCheck_3716_; 
lean_dec_ref_known(v_code_3415_, 2);
v_a_3709_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3711_ = v___x_3682_;
v_isShared_3712_ = v_isSharedCheck_3716_;
goto v_resetjp_3710_;
}
else
{
lean_inc(v_a_3709_);
lean_dec(v___x_3682_);
v___x_3711_ = lean_box(0);
v_isShared_3712_ = v_isSharedCheck_3716_;
goto v_resetjp_3710_;
}
v_resetjp_3710_:
{
lean_object* v___x_3714_; 
if (v_isShared_3712_ == 0)
{
v___x_3714_ = v___x_3711_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_a_3709_);
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
case 4:
{
lean_object* v_cases_3717_; lean_object* v_typeName_3718_; lean_object* v_resultType_3719_; lean_object* v_discr_3720_; lean_object* v_alts_3721_; lean_object* v___x_3722_; uint8_t v___x_3723_; 
v_cases_3717_ = lean_ctor_get(v_code_3415_, 0);
lean_inc_ref(v_cases_3717_);
v_typeName_3718_ = lean_ctor_get(v_cases_3717_, 0);
v_resultType_3719_ = lean_ctor_get(v_cases_3717_, 1);
v_discr_3720_ = lean_ctor_get(v_cases_3717_, 2);
v_alts_3721_ = lean_ctor_get(v_cases_3717_, 3);
v___x_3722_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_3723_ = lean_name_eq(v_typeName_3718_, v___x_3722_);
if (v___x_3723_ == 0)
{
lean_object* v___x_3724_; uint8_t v___x_3725_; 
v___x_3724_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_3725_ = lean_name_eq(v_typeName_3718_, v___x_3724_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; uint8_t v___x_3727_; 
v___x_3726_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__9));
v___x_3727_ = lean_name_eq(v_typeName_3718_, v___x_3726_);
if (v___x_3727_ == 0)
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__11));
v___x_3729_ = lean_name_eq(v_typeName_3718_, v___x_3728_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; uint8_t v___x_3731_; 
v___x_3730_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__13));
v___x_3731_ = lean_name_eq(v_typeName_3718_, v___x_3730_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; uint8_t v___x_3733_; 
v___x_3732_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__15));
v___x_3733_ = lean_name_eq(v_typeName_3718_, v___x_3732_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; uint8_t v___x_3735_; 
v___x_3734_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__16));
v___x_3735_ = lean_name_eq(v_typeName_3718_, v___x_3734_);
if (v___x_3735_ == 0)
{
lean_object* v___x_3736_; uint8_t v___x_3737_; 
v___x_3736_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__17));
v___x_3737_ = lean_name_eq(v_typeName_3718_, v___x_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___x_3738_; uint8_t v___x_3739_; 
v___x_3738_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__18));
v___x_3739_ = lean_name_eq(v_typeName_3718_, v___x_3738_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; uint8_t v___x_3741_; 
v___x_3740_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__19));
v___x_3741_ = lean_name_eq(v_typeName_3718_, v___x_3740_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; uint8_t v___x_3743_; 
v___x_3742_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__20));
v___x_3743_ = lean_name_eq(v_typeName_3718_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3744_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__21));
v___x_3745_ = lean_name_eq(v_typeName_3718_, v___x_3744_);
if (v___x_3745_ == 0)
{
lean_object* v___x_3746_; uint8_t v___x_3747_; 
v___x_3746_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__22));
v___x_3747_ = lean_name_eq(v_typeName_3718_, v___x_3746_);
if (v___x_3747_ == 0)
{
lean_object* v___x_3748_; uint8_t v___x_3749_; 
v___x_3748_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__23));
v___x_3749_ = lean_name_eq(v_typeName_3718_, v___x_3748_);
if (v___x_3749_ == 0)
{
lean_object* v___x_3750_; 
lean_inc(v_typeName_3718_);
v___x_3750_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_3718_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; 
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
lean_inc(v_a_3751_);
lean_dec_ref_known(v___x_3750_, 1);
if (lean_obj_tag(v_a_3751_) == 1)
{
lean_object* v_val_3752_; lean_object* v___x_3753_; 
lean_dec_ref_known(v_code_3415_, 1);
v_val_3752_ = lean_ctor_get(v_a_3751_, 0);
lean_inc(v_val_3752_);
lean_dec_ref_known(v_a_3751_, 1);
v___x_3753_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_val_3752_, v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
lean_dec(v_val_3752_);
return v___x_3753_;
}
else
{
lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3853_; 
lean_inc_ref(v_alts_3721_);
lean_inc(v_discr_3720_);
lean_inc_ref(v_resultType_3719_);
lean_inc(v_typeName_3718_);
lean_dec(v_a_3751_);
v_isSharedCheck_3853_ = !lean_is_exclusive(v_cases_3717_);
if (v_isSharedCheck_3853_ == 0)
{
lean_object* v_unused_3854_; lean_object* v_unused_3855_; lean_object* v_unused_3856_; lean_object* v_unused_3857_; 
v_unused_3854_ = lean_ctor_get(v_cases_3717_, 3);
lean_dec(v_unused_3854_);
v_unused_3855_ = lean_ctor_get(v_cases_3717_, 2);
lean_dec(v_unused_3855_);
v_unused_3856_ = lean_ctor_get(v_cases_3717_, 1);
lean_dec(v_unused_3856_);
v_unused_3857_ = lean_ctor_get(v_cases_3717_, 0);
lean_dec(v_unused_3857_);
v___x_3755_ = v_cases_3717_;
v_isShared_3756_ = v_isSharedCheck_3853_;
goto v_resetjp_3754_;
}
else
{
lean_dec(v_cases_3717_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3853_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3757_; 
lean_inc_ref(v_resultType_3719_);
v___x_3757_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3719_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3844_; 
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3760_ = v___x_3757_;
v_isShared_3761_ = v_isSharedCheck_3844_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3757_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3844_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; lean_object* v_env_3763_; lean_object* v___x_3795_; 
v___x_3762_ = lean_st_ref_get(v_a_3420_);
v_env_3763_ = lean_ctor_get(v___x_3762_, 0);
lean_inc_ref_n(v_env_3763_, 2);
lean_dec(v___x_3762_);
lean_inc(v_typeName_3718_);
v___x_3795_ = l_Lean_Environment_find_x3f(v_env_3763_, v_typeName_3718_, v___x_3749_);
if (lean_obj_tag(v___x_3795_) == 1)
{
lean_object* v_val_3796_; 
v_val_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_val_3796_);
lean_dec_ref_known(v___x_3795_, 1);
if (lean_obj_tag(v_val_3796_) == 5)
{
lean_object* v_val_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3843_; 
v_val_3797_ = lean_ctor_get(v_val_3796_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v_val_3796_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3799_ = v_val_3796_;
v_isShared_3800_ = v_isSharedCheck_3843_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_val_3797_);
lean_dec(v_val_3796_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3843_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v_toConstantVal_3801_; lean_object* v_name_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v_toConstantVal_3801_ = lean_ctor_get(v_val_3797_, 0);
lean_inc_ref(v_toConstantVal_3801_);
lean_dec_ref(v_val_3797_);
v_name_3802_ = lean_ctor_get(v_toConstantVal_3801_, 0);
lean_inc(v_name_3802_);
lean_dec_ref(v_toConstantVal_3801_);
v___x_3803_ = l_Lean_mkCasesOnName(v_name_3802_);
lean_inc_ref(v_env_3763_);
v___x_3804_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_3763_, v___x_3803_);
if (lean_obj_tag(v___x_3804_) == 0)
{
if (v___x_3749_ == 0)
{
size_t v_sz_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_32546__overap_3810_; lean_object* v___x_3811_; 
lean_dec_ref(v_env_3763_);
lean_del_object(v___x_3755_);
v_sz_3805_ = lean_array_size(v_alts_3721_);
v___x_3806_ = l_unsafeCast___redArg(v_alts_3721_);
v___x_3807_ = lean_box_usize(v_sz_3805_);
v___x_3808_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_3809_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed), 9, 3);
lean_closure_set(v___x_3809_, 0, v___x_3807_);
lean_closure_set(v___x_3809_, 1, v___x_3808_);
lean_closure_set(v___x_3809_, 2, v___x_3806_);
v___x_32546__overap_3810_ = l_unsafeCast___redArg(v___x_3809_);
lean_dec_ref(v___x_3809_);
lean_inc(v_a_3420_);
lean_inc_ref(v_a_3419_);
lean_inc(v_a_3418_);
lean_inc_ref(v_a_3417_);
lean_inc(v_a_3416_);
v___x_3811_ = lean_apply_6(v___x_32546__overap_3810_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, lean_box(0));
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3834_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3814_ = v___x_3811_;
v_isShared_3815_ = v_isSharedCheck_3834_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3811_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3834_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
size_t v___x_3824_; size_t v___x_3825_; uint8_t v___x_3826_; 
v___x_3824_ = lean_ptr_addr(v_alts_3721_);
lean_dec_ref(v_alts_3721_);
v___x_3825_ = lean_ptr_addr(v_a_3812_);
v___x_3826_ = lean_usize_dec_eq(v___x_3824_, v___x_3825_);
if (v___x_3826_ == 0)
{
lean_del_object(v___x_3760_);
lean_dec_ref(v_resultType_3719_);
lean_dec_ref_known(v_code_3415_, 1);
goto v___jp_3816_;
}
else
{
size_t v___x_3827_; size_t v___x_3828_; uint8_t v___x_3829_; 
v___x_3827_ = lean_ptr_addr(v_resultType_3719_);
lean_dec_ref(v_resultType_3719_);
v___x_3828_ = lean_ptr_addr(v_a_3758_);
v___x_3829_ = lean_usize_dec_eq(v___x_3827_, v___x_3828_);
if (v___x_3829_ == 0)
{
lean_del_object(v___x_3760_);
lean_dec_ref_known(v_code_3415_, 1);
goto v___jp_3816_;
}
else
{
uint8_t v___x_3830_; 
v___x_3830_ = l_Lean_instBEqFVarId_beq(v_discr_3720_, v_discr_3720_);
if (v___x_3830_ == 0)
{
lean_del_object(v___x_3760_);
lean_dec_ref_known(v_code_3415_, 1);
goto v___jp_3816_;
}
else
{
lean_object* v___x_3832_; 
lean_del_object(v___x_3814_);
lean_dec(v_a_3812_);
lean_del_object(v___x_3799_);
lean_dec(v_a_3758_);
lean_dec(v_discr_3720_);
lean_dec(v_typeName_3718_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 0, v_code_3415_);
v___x_3832_ = v___x_3760_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_code_3415_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
v___jp_3816_:
{
lean_object* v___x_3817_; lean_object* v___x_3819_; 
v___x_3817_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3817_, 0, v_typeName_3718_);
lean_ctor_set(v___x_3817_, 1, v_a_3758_);
lean_ctor_set(v___x_3817_, 2, v_discr_3720_);
lean_ctor_set(v___x_3817_, 3, v_a_3812_);
if (v_isShared_3800_ == 0)
{
lean_ctor_set_tag(v___x_3799_, 4);
lean_ctor_set(v___x_3799_, 0, v___x_3817_);
v___x_3819_ = v___x_3799_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3817_);
v___x_3819_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
lean_object* v___x_3821_; 
if (v_isShared_3815_ == 0)
{
lean_ctor_set(v___x_3814_, 0, v___x_3819_);
v___x_3821_ = v___x_3814_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3819_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3842_; 
lean_del_object(v___x_3799_);
lean_del_object(v___x_3760_);
lean_dec(v_a_3758_);
lean_dec_ref(v_alts_3721_);
lean_dec(v_discr_3720_);
lean_dec_ref(v_resultType_3719_);
lean_dec(v_typeName_3718_);
lean_dec_ref_known(v_code_3415_, 1);
v_a_3835_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3837_ = v___x_3811_;
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v___x_3811_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3840_; 
if (v_isShared_3838_ == 0)
{
v___x_3840_ = v___x_3837_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3835_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
}
else
{
lean_del_object(v___x_3799_);
lean_del_object(v___x_3760_);
lean_dec_ref(v_resultType_3719_);
lean_dec_ref_known(v_code_3415_, 1);
goto v___jp_3764_;
}
}
else
{
lean_dec_ref_known(v___x_3804_, 1);
lean_del_object(v___x_3799_);
lean_del_object(v___x_3760_);
lean_dec_ref(v_resultType_3719_);
lean_dec_ref_known(v_code_3415_, 1);
goto v___jp_3764_;
}
}
}
else
{
lean_dec(v_val_3796_);
lean_dec_ref(v_env_3763_);
lean_del_object(v___x_3760_);
lean_dec(v_a_3758_);
lean_del_object(v___x_3755_);
lean_dec_ref(v_alts_3721_);
lean_dec(v_discr_3720_);
lean_dec_ref(v_resultType_3719_);
lean_dec(v_typeName_3718_);
lean_dec_ref_known(v_code_3415_, 1);
v___y_3532_ = v_a_3416_;
v___y_3533_ = v_a_3417_;
v___y_3534_ = v_a_3418_;
v___y_3535_ = v_a_3419_;
v___y_3536_ = v_a_3420_;
goto v___jp_3531_;
}
}
else
{
lean_dec(v___x_3795_);
lean_dec_ref(v_env_3763_);
lean_del_object(v___x_3760_);
lean_dec(v_a_3758_);
lean_del_object(v___x_3755_);
lean_dec_ref(v_alts_3721_);
lean_dec(v_discr_3720_);
lean_dec_ref(v_resultType_3719_);
lean_dec(v_typeName_3718_);
lean_dec_ref_known(v_code_3415_, 1);
v___y_3532_ = v_a_3416_;
v___y_3533_ = v_a_3417_;
v___y_3534_ = v_a_3418_;
v___y_3535_ = v_a_3419_;
v___y_3536_ = v_a_3420_;
goto v___jp_3531_;
}
v___jp_3764_:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; size_t v_sz_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_32543__overap_3773_; lean_object* v___x_3774_; 
v___x_3765_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4));
v___x_3766_ = l_Lean_Name_append(v_typeName_3718_, v___x_3765_);
v_sz_3767_ = lean_array_size(v_alts_3721_);
v___x_3768_ = l_unsafeCast___redArg(v_alts_3721_);
lean_dec_ref(v_alts_3721_);
v___x_3769_ = lean_box(v___x_3749_);
v___x_3770_ = lean_box_usize(v_sz_3767_);
v___x_3771_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_3772_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed), 11, 5);
lean_closure_set(v___x_3772_, 0, v_env_3763_);
lean_closure_set(v___x_3772_, 1, v___x_3769_);
lean_closure_set(v___x_3772_, 2, v___x_3770_);
lean_closure_set(v___x_3772_, 3, v___x_3771_);
lean_closure_set(v___x_3772_, 4, v___x_3768_);
v___x_32543__overap_3773_ = l_unsafeCast___redArg(v___x_3772_);
lean_dec_ref(v___x_3772_);
lean_inc(v_a_3420_);
lean_inc_ref(v_a_3419_);
lean_inc(v_a_3418_);
lean_inc_ref(v_a_3417_);
lean_inc(v_a_3416_);
v___x_3774_ = lean_apply_6(v___x_32543__overap_3773_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, lean_box(0));
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3786_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3777_ = v___x_3774_;
v_isShared_3778_ = v_isSharedCheck_3786_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3786_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 3, v_a_3775_);
lean_ctor_set(v___x_3755_, 1, v_a_3758_);
lean_ctor_set(v___x_3755_, 0, v___x_3766_);
v___x_3780_ = v___x_3755_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v___x_3766_);
lean_ctor_set(v_reuseFailAlloc_3785_, 1, v_a_3758_);
lean_ctor_set(v_reuseFailAlloc_3785_, 2, v_discr_3720_);
lean_ctor_set(v_reuseFailAlloc_3785_, 3, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
lean_object* v___x_3781_; lean_object* v___x_3783_; 
v___x_3781_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3780_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3781_);
v___x_3783_ = v___x_3777_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3794_; 
lean_dec(v___x_3766_);
lean_dec(v_a_3758_);
lean_del_object(v___x_3755_);
lean_dec(v_discr_3720_);
v_a_3787_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3789_ = v___x_3774_;
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3774_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_a_3787_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
return v___x_3792_;
}
}
}
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_del_object(v___x_3755_);
lean_dec_ref(v_alts_3721_);
lean_dec(v_discr_3720_);
lean_dec_ref(v_resultType_3719_);
lean_dec(v_typeName_3718_);
lean_dec_ref_known(v_code_3415_, 1);
v_a_3845_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3757_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3757_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
}
else
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
lean_dec_ref_known(v_code_3415_, 1);
lean_dec_ref(v_cases_3717_);
v_a_3858_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3750_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3750_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
}
else
{
lean_object* v___x_3866_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3866_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3866_;
}
}
else
{
lean_object* v___x_3867_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3867_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
lean_dec_ref(v_cases_3717_);
return v___x_3867_;
}
}
else
{
lean_object* v___x_3868_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3868_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3868_;
}
}
else
{
lean_object* v___x_3869_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3869_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3869_;
}
}
else
{
lean_object* v___x_3870_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3870_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3870_;
}
}
else
{
lean_object* v___x_3871_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3871_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3871_;
}
}
else
{
lean_object* v___x_3872_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3872_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3872_;
}
}
else
{
lean_object* v___x_3873_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3873_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3873_;
}
}
else
{
lean_object* v___x_3874_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3874_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3717_, v___x_3732_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3874_;
}
}
else
{
lean_object* v___x_3875_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3875_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3717_, v___x_3730_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3875_;
}
}
else
{
lean_object* v___x_3876_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3876_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3717_, v___x_3728_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3876_;
}
}
else
{
lean_object* v___x_3877_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3877_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3717_, v___x_3726_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3877_;
}
}
else
{
lean_object* v___x_3878_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3878_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3878_;
}
}
else
{
lean_object* v___x_3879_; 
lean_dec_ref_known(v_code_3415_, 1);
v___x_3879_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_cases_3717_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
return v___x_3879_;
}
}
case 5:
{
lean_object* v___x_3880_; 
v___x_3880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3880_, 0, v_code_3415_);
return v___x_3880_;
}
case 6:
{
lean_object* v_type_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3905_; 
v_type_3881_ = lean_ctor_get(v_code_3415_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3883_ = v_code_3415_;
v_isShared_3884_ = v_isSharedCheck_3905_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_type_3881_);
lean_dec(v_code_3415_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3905_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3885_; 
v___x_3885_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3881_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3896_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3888_ = v___x_3885_;
v_isShared_3889_ = v_isSharedCheck_3896_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3885_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3896_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3884_ == 0)
{
lean_ctor_set(v___x_3883_, 0, v_a_3886_);
v___x_3891_ = v___x_3883_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
lean_object* v___x_3893_; 
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 0, v___x_3891_);
v___x_3893_ = v___x_3888_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v___x_3891_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
}
else
{
lean_object* v_a_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3904_; 
lean_del_object(v___x_3883_);
v_a_3897_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3899_ = v___x_3885_;
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_a_3897_);
lean_dec(v___x_3885_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3902_; 
if (v_isShared_3900_ == 0)
{
v___x_3902_ = v___x_3899_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3897_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
}
default: 
{
lean_object* v_decl_3906_; lean_object* v_k_3907_; 
v_decl_3906_ = lean_ctor_get(v_code_3415_, 0);
v_k_3907_ = lean_ctor_get(v_code_3415_, 1);
lean_inc_ref(v_k_3907_);
lean_inc_ref(v_decl_3906_);
v_decl_3423_ = v_decl_3906_;
v_k_3424_ = v_k_3907_;
v___y_3425_ = v_a_3416_;
v___y_3426_ = v_a_3417_;
v___y_3427_ = v_a_3418_;
v___y_3428_ = v_a_3419_;
v___y_3429_ = v_a_3420_;
goto v___jp_3422_;
}
}
v___jp_3422_:
{
lean_object* v___x_3430_; 
v___x_3430_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3423_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3432_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
lean_inc(v_a_3431_);
lean_dec_ref_known(v___x_3430_, 1);
v___x_3432_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_);
if (lean_obj_tag(v___x_3432_) == 0)
{
switch(lean_obj_tag(v_code_3415_))
{
case 1:
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3472_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3435_ = v___x_3432_;
v_isShared_3436_ = v_isSharedCheck_3472_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3432_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3472_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v_decl_3437_; lean_object* v_k_3438_; size_t v___x_3439_; size_t v___x_3440_; uint8_t v___x_3441_; 
v_decl_3437_ = lean_ctor_get(v_code_3415_, 0);
v_k_3438_ = lean_ctor_get(v_code_3415_, 1);
v___x_3439_ = lean_ptr_addr(v_k_3438_);
v___x_3440_ = lean_ptr_addr(v_a_3433_);
v___x_3441_ = lean_usize_dec_eq(v___x_3439_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3451_; 
v_isSharedCheck_3451_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3451_ == 0)
{
lean_object* v_unused_3452_; lean_object* v_unused_3453_; 
v_unused_3452_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3452_);
v_unused_3453_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3453_);
v___x_3443_ = v_code_3415_;
v_isShared_3444_ = v_isSharedCheck_3451_;
goto v_resetjp_3442_;
}
else
{
lean_dec(v_code_3415_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3451_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
lean_ctor_set(v___x_3443_, 1, v_a_3433_);
lean_ctor_set(v___x_3443_, 0, v_a_3431_);
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3431_);
lean_ctor_set(v_reuseFailAlloc_3450_, 1, v_a_3433_);
v___x_3446_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3448_; 
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 0, v___x_3446_);
v___x_3448_ = v___x_3435_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3446_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
else
{
size_t v___x_3454_; size_t v___x_3455_; uint8_t v___x_3456_; 
v___x_3454_ = lean_ptr_addr(v_decl_3437_);
v___x_3455_ = lean_ptr_addr(v_a_3431_);
v___x_3456_ = lean_usize_dec_eq(v___x_3454_, v___x_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3466_; 
v_isSharedCheck_3466_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3466_ == 0)
{
lean_object* v_unused_3467_; lean_object* v_unused_3468_; 
v_unused_3467_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3467_);
v_unused_3468_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3468_);
v___x_3458_ = v_code_3415_;
v_isShared_3459_ = v_isSharedCheck_3466_;
goto v_resetjp_3457_;
}
else
{
lean_dec(v_code_3415_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3466_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 1, v_a_3433_);
lean_ctor_set(v___x_3458_, 0, v_a_3431_);
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3431_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v_a_3433_);
v___x_3461_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
lean_object* v___x_3463_; 
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 0, v___x_3461_);
v___x_3463_ = v___x_3435_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3461_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
}
else
{
lean_object* v___x_3470_; 
lean_dec(v_a_3433_);
lean_dec(v_a_3431_);
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 0, v_code_3415_);
v___x_3470_ = v___x_3435_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_code_3415_);
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
case 2:
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3512_; 
v_a_3473_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3475_ = v___x_3432_;
v_isShared_3476_ = v_isSharedCheck_3512_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3432_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3512_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v_decl_3477_; lean_object* v_k_3478_; size_t v___x_3479_; size_t v___x_3480_; uint8_t v___x_3481_; 
v_decl_3477_ = lean_ctor_get(v_code_3415_, 0);
v_k_3478_ = lean_ctor_get(v_code_3415_, 1);
v___x_3479_ = lean_ptr_addr(v_k_3478_);
v___x_3480_ = lean_ptr_addr(v_a_3473_);
v___x_3481_ = lean_usize_dec_eq(v___x_3479_, v___x_3480_);
if (v___x_3481_ == 0)
{
lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3491_; 
v_isSharedCheck_3491_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3491_ == 0)
{
lean_object* v_unused_3492_; lean_object* v_unused_3493_; 
v_unused_3492_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3492_);
v_unused_3493_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3493_);
v___x_3483_ = v_code_3415_;
v_isShared_3484_ = v_isSharedCheck_3491_;
goto v_resetjp_3482_;
}
else
{
lean_dec(v_code_3415_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3491_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 1, v_a_3473_);
lean_ctor_set(v___x_3483_, 0, v_a_3431_);
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3431_);
lean_ctor_set(v_reuseFailAlloc_3490_, 1, v_a_3473_);
v___x_3486_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3488_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v___x_3486_);
v___x_3488_ = v___x_3475_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
else
{
size_t v___x_3494_; size_t v___x_3495_; uint8_t v___x_3496_; 
v___x_3494_ = lean_ptr_addr(v_decl_3477_);
v___x_3495_ = lean_ptr_addr(v_a_3431_);
v___x_3496_ = lean_usize_dec_eq(v___x_3494_, v___x_3495_);
if (v___x_3496_ == 0)
{
lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3506_; 
v_isSharedCheck_3506_ = !lean_is_exclusive(v_code_3415_);
if (v_isSharedCheck_3506_ == 0)
{
lean_object* v_unused_3507_; lean_object* v_unused_3508_; 
v_unused_3507_ = lean_ctor_get(v_code_3415_, 1);
lean_dec(v_unused_3507_);
v_unused_3508_ = lean_ctor_get(v_code_3415_, 0);
lean_dec(v_unused_3508_);
v___x_3498_ = v_code_3415_;
v_isShared_3499_ = v_isSharedCheck_3506_;
goto v_resetjp_3497_;
}
else
{
lean_dec(v_code_3415_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3506_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
lean_ctor_set(v___x_3498_, 1, v_a_3473_);
lean_ctor_set(v___x_3498_, 0, v_a_3431_);
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3431_);
lean_ctor_set(v_reuseFailAlloc_3505_, 1, v_a_3473_);
v___x_3501_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3503_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v___x_3501_);
v___x_3503_ = v___x_3475_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v___x_3501_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
else
{
lean_object* v___x_3510_; 
lean_dec(v_a_3473_);
lean_dec(v_a_3431_);
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v_code_3415_);
v___x_3510_ = v___x_3475_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_code_3415_);
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
default: 
{
lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3521_; 
lean_dec(v_a_3431_);
lean_dec_ref(v_code_3415_);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3521_ == 0)
{
lean_object* v_unused_3522_; 
v_unused_3522_ = lean_ctor_get(v___x_3432_, 0);
lean_dec(v_unused_3522_);
v___x_3514_ = v___x_3432_;
v_isShared_3515_ = v_isSharedCheck_3521_;
goto v_resetjp_3513_;
}
else
{
lean_dec(v___x_3432_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3521_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3519_; 
v___x_3516_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__2, &l_Lean_Compiler_LCNF_Code_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2);
v___x_3517_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(v___x_3516_);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v___x_3517_);
v___x_3519_ = v___x_3514_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3517_);
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
lean_dec(v_a_3431_);
lean_dec_ref(v_code_3415_);
return v___x_3432_;
}
}
else
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3530_; 
lean_dec_ref(v_k_3424_);
lean_dec_ref(v_code_3415_);
v_a_3523_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3525_ = v___x_3430_;
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3430_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3523_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
}
v___jp_3531_:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__4, &l_Lean_Compiler_LCNF_Code_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4);
v___x_3538_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3537_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
return v___x_3538_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object* v_decl_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_){
_start:
{
lean_object* v_params_3915_; lean_object* v_type_3916_; lean_object* v_value_3917_; uint8_t v___x_3918_; lean_object* v___x_3919_; 
v_params_3915_ = lean_ctor_get(v_decl_3908_, 2);
v_type_3916_ = lean_ctor_get(v_decl_3908_, 3);
v_value_3917_ = lean_ctor_get(v_decl_3908_, 4);
v___x_3918_ = 0;
lean_inc_ref(v_type_3916_);
v___x_3919_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3916_, v_a_3912_, v_a_3913_);
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; size_t v_sz_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_32472__overap_3926_; lean_object* v___x_3927_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
lean_inc(v_a_3920_);
lean_dec_ref_known(v___x_3919_, 1);
v_sz_3921_ = lean_array_size(v_params_3915_);
v___x_3922_ = l_unsafeCast___redArg(v_params_3915_);
v___x_3923_ = lean_box_usize(v_sz_3921_);
v___x_3924_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_3925_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed), 9, 3);
lean_closure_set(v___x_3925_, 0, v___x_3923_);
lean_closure_set(v___x_3925_, 1, v___x_3924_);
lean_closure_set(v___x_3925_, 2, v___x_3922_);
v___x_32472__overap_3926_ = l_unsafeCast___redArg(v___x_3925_);
lean_dec_ref(v___x_3925_);
lean_inc(v_a_3913_);
lean_inc_ref(v_a_3912_);
lean_inc(v_a_3911_);
lean_inc_ref(v_a_3910_);
lean_inc(v_a_3909_);
v___x_3927_ = lean_apply_6(v___x_32472__overap_3926_, v_a_3909_, v_a_3910_, v_a_3911_, v_a_3912_, v_a_3913_, lean_box(0));
if (lean_obj_tag(v___x_3927_) == 0)
{
lean_object* v_a_3928_; lean_object* v___x_3929_; 
v_a_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc(v_a_3928_);
lean_dec_ref_known(v___x_3927_, 1);
lean_inc_ref(v_value_3917_);
v___x_3929_ = l_Lean_Compiler_LCNF_Code_toMono(v_value_3917_, v_a_3909_, v_a_3910_, v_a_3911_, v_a_3912_, v_a_3913_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_object* v_a_3930_; lean_object* v___x_3931_; 
v_a_3930_ = lean_ctor_get(v___x_3929_, 0);
lean_inc(v_a_3930_);
lean_dec_ref_known(v___x_3929_, 1);
v___x_3931_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3918_, v_decl_3908_, v_a_3920_, v_a_3928_, v_a_3930_, v_a_3911_);
return v___x_3931_;
}
else
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3939_; 
lean_dec(v_a_3928_);
lean_dec(v_a_3920_);
lean_dec_ref(v_decl_3908_);
v_a_3932_ = lean_ctor_get(v___x_3929_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3929_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3934_ = v___x_3929_;
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v___x_3929_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
lean_dec(v_a_3920_);
lean_dec_ref(v_decl_3908_);
v_a_3940_ = lean_ctor_get(v___x_3927_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3927_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3927_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_a_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
lean_dec_ref(v_decl_3908_);
v_a_3948_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3919_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3919_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object* v_decl_3956_, lean_object* v_a_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3956_, v_a_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec_ref(v_a_3958_);
lean_dec(v_a_3957_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object* v_c_3964_, lean_object* v_a_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_3964_, v_a_3965_, v_a_3966_, v_a_3967_, v_a_3968_, v_a_3969_);
lean_dec(v_a_3969_);
lean_dec_ref(v_a_3968_);
lean_dec(v_a_3967_);
lean_dec_ref(v_a_3966_);
lean_dec(v_a_3965_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object* v_c_3972_, lean_object* v_uintName_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_){
_start:
{
lean_object* v_res_3980_; 
v_res_3980_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_3972_, v_uintName_3973_, v_a_3974_, v_a_3975_, v_a_3976_, v_a_3977_, v_a_3978_);
lean_dec(v_a_3978_);
lean_dec_ref(v_a_3977_);
lean_dec(v_a_3976_);
lean_dec_ref(v_a_3975_);
lean_dec(v_a_3974_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object* v_c_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_);
lean_dec(v_a_3986_);
lean_dec_ref(v_a_3985_);
lean_dec(v_a_3984_);
lean_dec_ref(v_a_3983_);
lean_dec(v_a_3982_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object* v_c_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_3989_, v_a_3990_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_);
lean_dec(v_a_3994_);
lean_dec_ref(v_a_3993_);
lean_dec(v_a_3992_);
lean_dec_ref(v_a_3991_);
lean_dec(v_a_3990_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object* v_c_3997_, lean_object* v_a_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v_res_4004_; 
v_res_4004_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_3997_, v_a_3998_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
lean_dec(v_a_4002_);
lean_dec_ref(v_a_4001_);
lean_dec(v_a_4000_);
lean_dec_ref(v_a_3999_);
lean_dec(v_a_3998_);
return v_res_4004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object* v_c_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_){
_start:
{
lean_object* v_res_4012_; 
v_res_4012_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
lean_dec(v_a_4010_);
lean_dec_ref(v_a_4009_);
lean_dec(v_a_4008_);
lean_dec_ref(v_a_4007_);
lean_dec(v_a_4006_);
return v_res_4012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object* v_c_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_4013_, v_a_4014_, v_a_4015_, v_a_4016_, v_a_4017_, v_a_4018_);
lean_dec(v_a_4018_);
lean_dec_ref(v_a_4017_);
lean_dec(v_a_4016_);
lean_dec_ref(v_a_4015_);
lean_dec(v_a_4014_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object* v_c_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_);
lean_dec(v_a_4026_);
lean_dec_ref(v_a_4025_);
lean_dec(v_a_4024_);
lean_dec_ref(v_a_4023_);
lean_dec(v_a_4022_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object* v_c_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_4029_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_, v_a_4034_);
lean_dec(v_a_4034_);
lean_dec_ref(v_a_4033_);
lean_dec(v_a_4032_);
lean_dec_ref(v_a_4031_);
lean_dec(v_a_4030_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object* v_c_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_){
_start:
{
lean_object* v_res_4044_; 
v_res_4044_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_4037_, v_a_4038_, v_a_4039_, v_a_4040_, v_a_4041_, v_a_4042_);
lean_dec(v_a_4042_);
lean_dec_ref(v_a_4041_);
lean_dec(v_a_4040_);
lean_dec_ref(v_a_4039_);
lean_dec(v_a_4038_);
return v_res_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object* v_info_4045_, lean_object* v_c_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_info_4045_, v_c_4046_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_);
lean_dec(v_a_4051_);
lean_dec_ref(v_a_4050_);
lean_dec(v_a_4049_);
lean_dec_ref(v_a_4048_);
lean_dec(v_a_4047_);
lean_dec_ref(v_info_4045_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object* v_c_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_4054_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_);
lean_dec(v_a_4059_);
lean_dec_ref(v_a_4058_);
lean_dec(v_a_4057_);
lean_dec_ref(v_a_4056_);
lean_dec(v_a_4055_);
lean_dec_ref(v_c_4054_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object* v_code_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_, lean_object* v_a_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_){
_start:
{
lean_object* v_res_4069_; 
v_res_4069_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_4062_, v_a_4063_, v_a_4064_, v_a_4065_, v_a_4066_, v_a_4067_);
lean_dec(v_a_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_a_4065_);
lean_dec_ref(v_a_4064_);
lean_dec(v_a_4063_);
return v_res_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object* v_c_4070_, lean_object* v_x_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_){
_start:
{
lean_object* v___x_4078_; 
v___x_4078_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_4070_, v_a_4072_, v_a_4073_, v_a_4074_, v_a_4075_, v_a_4076_);
return v___x_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object* v_c_4079_, lean_object* v_x_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l_Lean_Compiler_LCNF_casesTaskToMono(v_c_4079_, v_x_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_);
lean_dec(v_a_4085_);
lean_dec_ref(v_a_4084_);
lean_dec(v_a_4083_);
lean_dec_ref(v_a_4082_);
lean_dec(v_a_4081_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object* v_c_4088_, lean_object* v_x_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_){
_start:
{
lean_object* v___x_4096_; 
v___x_4096_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_4088_, v_a_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
return v___x_4096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object* v_c_4097_, lean_object* v_x_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_){
_start:
{
lean_object* v_res_4105_; 
v_res_4105_ = l_Lean_Compiler_LCNF_casesThunkToMono(v_c_4097_, v_x_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
lean_dec(v_a_4103_);
lean_dec_ref(v_a_4102_);
lean_dec(v_a_4101_);
lean_dec_ref(v_a_4100_);
lean_dec(v_a_4099_);
lean_dec_ref(v_c_4097_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object* v_c_4106_, lean_object* v_x_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_){
_start:
{
lean_object* v___x_4114_; 
v___x_4114_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_4106_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_);
return v___x_4114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object* v_c_4115_, lean_object* v_x_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_Lean_Compiler_LCNF_casesFloat32ToMono(v_c_4115_, v_x_4116_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_);
lean_dec(v_a_4121_);
lean_dec_ref(v_a_4120_);
lean_dec(v_a_4119_);
lean_dec_ref(v_a_4118_);
lean_dec(v_a_4117_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object* v_c_4124_, lean_object* v_x_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_){
_start:
{
lean_object* v___x_4132_; 
v___x_4132_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_4124_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_, v_a_4130_);
return v___x_4132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object* v_c_4133_, lean_object* v_x_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_){
_start:
{
lean_object* v_res_4141_; 
v_res_4141_ = l_Lean_Compiler_LCNF_casesFloatToMono(v_c_4133_, v_x_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
lean_dec(v_a_4139_);
lean_dec_ref(v_a_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_a_4136_);
lean_dec(v_a_4135_);
return v_res_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object* v_c_4142_, lean_object* v_x_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_4142_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_, v_a_4148_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object* v_c_4151_, lean_object* v_x_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l_Lean_Compiler_LCNF_casesStringToMono(v_c_4151_, v_x_4152_, v_a_4153_, v_a_4154_, v_a_4155_, v_a_4156_, v_a_4157_);
lean_dec(v_a_4157_);
lean_dec_ref(v_a_4156_);
lean_dec(v_a_4155_);
lean_dec_ref(v_a_4154_);
lean_dec(v_a_4153_);
return v_res_4159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object* v_c_4160_, lean_object* v_x_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_){
_start:
{
lean_object* v___x_4168_; 
v___x_4168_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_4160_, v_a_4162_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_);
return v___x_4168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object* v_c_4169_, lean_object* v_x_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono(v_c_4169_, v_x_4170_, v_a_4171_, v_a_4172_, v_a_4173_, v_a_4174_, v_a_4175_);
lean_dec(v_a_4175_);
lean_dec_ref(v_a_4174_);
lean_dec(v_a_4173_);
lean_dec_ref(v_a_4172_);
lean_dec(v_a_4171_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object* v_c_4178_, lean_object* v_x_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_){
_start:
{
lean_object* v___x_4186_; 
v___x_4186_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_4178_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
return v___x_4186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object* v_c_4187_, lean_object* v_x_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_){
_start:
{
lean_object* v_res_4195_; 
v_res_4195_ = l_Lean_Compiler_LCNF_casesByteArrayToMono(v_c_4187_, v_x_4188_, v_a_4189_, v_a_4190_, v_a_4191_, v_a_4192_, v_a_4193_);
lean_dec(v_a_4193_);
lean_dec_ref(v_a_4192_);
lean_dec(v_a_4191_);
lean_dec_ref(v_a_4190_);
lean_dec(v_a_4189_);
return v_res_4195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object* v_c_4196_, lean_object* v_x_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_){
_start:
{
lean_object* v___x_4204_; 
v___x_4204_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_4196_, v_a_4198_, v_a_4199_, v_a_4200_, v_a_4201_, v_a_4202_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object* v_c_4205_, lean_object* v_x_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_, lean_object* v_a_4212_){
_start:
{
lean_object* v_res_4213_; 
v_res_4213_ = l_Lean_Compiler_LCNF_casesArrayToMono(v_c_4205_, v_x_4206_, v_a_4207_, v_a_4208_, v_a_4209_, v_a_4210_, v_a_4211_);
lean_dec(v_a_4211_);
lean_dec_ref(v_a_4210_);
lean_dec(v_a_4209_);
lean_dec_ref(v_a_4208_);
lean_dec(v_a_4207_);
return v_res_4213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object* v_c_4214_, lean_object* v_uintName_4215_, lean_object* v_x_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_4214_, v_uintName_4215_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object* v_c_4224_, lean_object* v_uintName_4225_, lean_object* v_x_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_){
_start:
{
lean_object* v_res_4233_; 
v_res_4233_ = l_Lean_Compiler_LCNF_casesUIntToMono(v_c_4224_, v_uintName_4225_, v_x_4226_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
lean_dec(v_a_4231_);
lean_dec_ref(v_a_4230_);
lean_dec(v_a_4229_);
lean_dec_ref(v_a_4228_);
lean_dec(v_a_4227_);
return v_res_4233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object* v_c_4234_, lean_object* v_x_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_4234_, v_a_4236_, v_a_4237_, v_a_4238_, v_a_4239_, v_a_4240_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object* v_c_4243_, lean_object* v_x_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_){
_start:
{
lean_object* v_res_4251_; 
v_res_4251_ = l_Lean_Compiler_LCNF_casesIntToMono(v_c_4243_, v_x_4244_, v_a_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_);
lean_dec(v_a_4249_);
lean_dec_ref(v_a_4248_);
lean_dec(v_a_4247_);
lean_dec_ref(v_a_4246_);
lean_dec(v_a_4245_);
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object* v_c_4252_, lean_object* v_x_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_4252_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object* v_c_4261_, lean_object* v_x_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_){
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Lean_Compiler_LCNF_casesNatToMono(v_c_4261_, v_x_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_);
lean_dec(v_a_4267_);
lean_dec_ref(v_a_4266_);
lean_dec(v_a_4265_);
lean_dec_ref(v_a_4264_);
lean_dec(v_a_4263_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object* v_f_4270_, lean_object* v_v_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
if (lean_obj_tag(v_v_4271_) == 0)
{
lean_object* v_code_4278_; lean_object* v___x_4280_; uint8_t v_isShared_4281_; uint8_t v_isSharedCheck_4302_; 
v_code_4278_ = lean_ctor_get(v_v_4271_, 0);
v_isSharedCheck_4302_ = !lean_is_exclusive(v_v_4271_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4280_ = v_v_4271_;
v_isShared_4281_ = v_isSharedCheck_4302_;
goto v_resetjp_4279_;
}
else
{
lean_inc(v_code_4278_);
lean_dec(v_v_4271_);
v___x_4280_ = lean_box(0);
v_isShared_4281_ = v_isSharedCheck_4302_;
goto v_resetjp_4279_;
}
v_resetjp_4279_:
{
lean_object* v___x_4282_; 
lean_inc(v___y_4276_);
lean_inc_ref(v___y_4275_);
lean_inc(v___y_4274_);
lean_inc_ref(v___y_4273_);
lean_inc(v___y_4272_);
v___x_4282_ = lean_apply_7(v_f_4270_, v_code_4278_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, lean_box(0));
if (lean_obj_tag(v___x_4282_) == 0)
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4293_; 
v_a_4283_ = lean_ctor_get(v___x_4282_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4282_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4285_ = v___x_4282_;
v_isShared_4286_ = v_isSharedCheck_4293_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4282_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4293_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4281_ == 0)
{
lean_ctor_set(v___x_4280_, 0, v_a_4283_);
v___x_4288_ = v___x_4280_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
lean_object* v___x_4290_; 
if (v_isShared_4286_ == 0)
{
lean_ctor_set(v___x_4285_, 0, v___x_4288_);
v___x_4290_ = v___x_4285_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v___x_4288_);
v___x_4290_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
return v___x_4290_;
}
}
}
}
else
{
lean_object* v_a_4294_; lean_object* v___x_4296_; uint8_t v_isShared_4297_; uint8_t v_isSharedCheck_4301_; 
lean_del_object(v___x_4280_);
v_a_4294_ = lean_ctor_get(v___x_4282_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_4282_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4296_ = v___x_4282_;
v_isShared_4297_ = v_isSharedCheck_4301_;
goto v_resetjp_4295_;
}
else
{
lean_inc(v_a_4294_);
lean_dec(v___x_4282_);
v___x_4296_ = lean_box(0);
v_isShared_4297_ = v_isSharedCheck_4301_;
goto v_resetjp_4295_;
}
v_resetjp_4295_:
{
lean_object* v___x_4299_; 
if (v_isShared_4297_ == 0)
{
v___x_4299_ = v___x_4296_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_a_4294_);
v___x_4299_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
return v___x_4299_;
}
}
}
}
}
else
{
lean_object* v___x_4303_; 
lean_dec_ref(v_f_4270_);
v___x_4303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4303_, 0, v_v_4271_);
return v___x_4303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object* v_f_4304_, lean_object* v_v_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4304_, v_v_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
lean_dec(v___y_4308_);
lean_dec_ref(v___y_4307_);
lean_dec(v___y_4306_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t v_pu_4313_, lean_object* v_f_4314_, lean_object* v_v_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v___x_4322_; 
v___x_4322_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4314_, v_v_4315_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object* v_pu_4323_, lean_object* v_f_4324_, lean_object* v_v_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_){
_start:
{
uint8_t v_pu_boxed_4332_; lean_object* v_res_4333_; 
v_pu_boxed_4332_ = lean_unbox(v_pu_4323_);
v_res_4333_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(v_pu_boxed_4332_, v_f_4324_, v_v_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
lean_dec(v___y_4328_);
lean_dec_ref(v___y_4327_);
lean_dec(v___y_4326_);
return v_res_4333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object* v_decl_4335_, lean_object* v_a_4336_, lean_object* v_a_4337_, lean_object* v_a_4338_, lean_object* v_a_4339_, lean_object* v_a_4340_){
_start:
{
lean_object* v_toSignature_4342_; lean_object* v_value_4343_; uint8_t v_recursive_4344_; lean_object* v_inlineAttr_x3f_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4419_; 
v_toSignature_4342_ = lean_ctor_get(v_decl_4335_, 0);
v_value_4343_ = lean_ctor_get(v_decl_4335_, 1);
v_recursive_4344_ = lean_ctor_get_uint8(v_decl_4335_, sizeof(void*)*3);
v_inlineAttr_x3f_4345_ = lean_ctor_get(v_decl_4335_, 2);
v_isSharedCheck_4419_ = !lean_is_exclusive(v_decl_4335_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4347_ = v_decl_4335_;
v_isShared_4348_ = v_isSharedCheck_4419_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_inlineAttr_x3f_4345_);
lean_inc(v_value_4343_);
lean_inc(v_toSignature_4342_);
lean_dec(v_decl_4335_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4419_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v_name_4349_; lean_object* v_type_4350_; lean_object* v_params_4351_; uint8_t v_safe_4352_; lean_object* v___x_4354_; uint8_t v_isShared_4355_; uint8_t v_isSharedCheck_4417_; 
v_name_4349_ = lean_ctor_get(v_toSignature_4342_, 0);
v_type_4350_ = lean_ctor_get(v_toSignature_4342_, 2);
v_params_4351_ = lean_ctor_get(v_toSignature_4342_, 3);
v_safe_4352_ = lean_ctor_get_uint8(v_toSignature_4342_, sizeof(void*)*4);
v_isSharedCheck_4417_ = !lean_is_exclusive(v_toSignature_4342_);
if (v_isSharedCheck_4417_ == 0)
{
lean_object* v_unused_4418_; 
v_unused_4418_ = lean_ctor_get(v_toSignature_4342_, 1);
lean_dec(v_unused_4418_);
v___x_4354_ = v_toSignature_4342_;
v_isShared_4355_ = v_isSharedCheck_4417_;
goto v_resetjp_4353_;
}
else
{
lean_inc(v_params_4351_);
lean_inc(v_type_4350_);
lean_inc(v_name_4349_);
lean_dec(v_toSignature_4342_);
v___x_4354_ = lean_box(0);
v_isShared_4355_ = v_isSharedCheck_4417_;
goto v_resetjp_4353_;
}
v_resetjp_4353_:
{
lean_object* v___f_4356_; lean_object* v___x_4357_; 
v___f_4356_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0));
v___x_4357_ = l_Lean_Compiler_LCNF_toMonoType(v_type_4350_, v_a_4339_, v_a_4340_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_object* v_a_4358_; size_t v_sz_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_1312__overap_4364_; lean_object* v___x_4365_; 
v_a_4358_ = lean_ctor_get(v___x_4357_, 0);
lean_inc(v_a_4358_);
lean_dec_ref_known(v___x_4357_, 1);
v_sz_4359_ = lean_array_size(v_params_4351_);
v___x_4360_ = l_unsafeCast___redArg(v_params_4351_);
lean_dec_ref(v_params_4351_);
v___x_4361_ = lean_box_usize(v_sz_4359_);
v___x_4362_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_4363_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed), 9, 3);
lean_closure_set(v___x_4363_, 0, v___x_4361_);
lean_closure_set(v___x_4363_, 1, v___x_4362_);
lean_closure_set(v___x_4363_, 2, v___x_4360_);
v___x_1312__overap_4364_ = l_unsafeCast___redArg(v___x_4363_);
lean_dec_ref(v___x_4363_);
lean_inc(v_a_4340_);
lean_inc_ref(v_a_4339_);
lean_inc(v_a_4338_);
lean_inc_ref(v_a_4337_);
lean_inc(v_a_4336_);
v___x_4365_ = lean_apply_6(v___x_1312__overap_4364_, v_a_4336_, v_a_4337_, v_a_4338_, v_a_4339_, v_a_4340_, lean_box(0));
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4367_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
lean_inc(v_a_4366_);
lean_dec_ref_known(v___x_4365_, 1);
v___x_4367_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v___f_4356_, v_value_4343_, v_a_4336_, v_a_4337_, v_a_4338_, v_a_4339_, v_a_4340_);
if (lean_obj_tag(v___x_4367_) == 0)
{
lean_object* v_a_4368_; lean_object* v___x_4369_; lean_object* v___x_4371_; 
v_a_4368_ = lean_ctor_get(v___x_4367_, 0);
lean_inc(v_a_4368_);
lean_dec_ref_known(v___x_4367_, 1);
v___x_4369_ = lean_box(0);
if (v_isShared_4355_ == 0)
{
lean_ctor_set(v___x_4354_, 3, v_a_4366_);
lean_ctor_set(v___x_4354_, 2, v_a_4358_);
lean_ctor_set(v___x_4354_, 1, v___x_4369_);
v___x_4371_ = v___x_4354_;
goto v_reusejp_4370_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_name_4349_);
lean_ctor_set(v_reuseFailAlloc_4392_, 1, v___x_4369_);
lean_ctor_set(v_reuseFailAlloc_4392_, 2, v_a_4358_);
lean_ctor_set(v_reuseFailAlloc_4392_, 3, v_a_4366_);
lean_ctor_set_uint8(v_reuseFailAlloc_4392_, sizeof(void*)*4, v_safe_4352_);
v___x_4371_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4370_;
}
v_reusejp_4370_:
{
lean_object* v___x_4373_; 
if (v_isShared_4348_ == 0)
{
lean_ctor_set(v___x_4347_, 1, v_a_4368_);
lean_ctor_set(v___x_4347_, 0, v___x_4371_);
v___x_4373_ = v___x_4347_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v___x_4371_);
lean_ctor_set(v_reuseFailAlloc_4391_, 1, v_a_4368_);
lean_ctor_set(v_reuseFailAlloc_4391_, 2, v_inlineAttr_x3f_4345_);
lean_ctor_set_uint8(v_reuseFailAlloc_4391_, sizeof(void*)*3, v_recursive_4344_);
v___x_4373_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
lean_object* v___x_4374_; 
lean_inc_ref(v___x_4373_);
v___x_4374_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_4373_, v_a_4340_);
if (lean_obj_tag(v___x_4374_) == 0)
{
lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4381_; 
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4374_);
if (v_isSharedCheck_4381_ == 0)
{
lean_object* v_unused_4382_; 
v_unused_4382_ = lean_ctor_get(v___x_4374_, 0);
lean_dec(v_unused_4382_);
v___x_4376_ = v___x_4374_;
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
else
{
lean_dec(v___x_4374_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4379_; 
if (v_isShared_4377_ == 0)
{
lean_ctor_set(v___x_4376_, 0, v___x_4373_);
v___x_4379_ = v___x_4376_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v___x_4373_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec_ref(v___x_4373_);
v_a_4383_ = lean_ctor_get(v___x_4374_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4374_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4374_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4374_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
}
}
else
{
lean_object* v_a_4393_; lean_object* v___x_4395_; uint8_t v_isShared_4396_; uint8_t v_isSharedCheck_4400_; 
lean_dec(v_a_4366_);
lean_dec(v_a_4358_);
lean_del_object(v___x_4354_);
lean_dec(v_name_4349_);
lean_del_object(v___x_4347_);
lean_dec(v_inlineAttr_x3f_4345_);
v_a_4393_ = lean_ctor_get(v___x_4367_, 0);
v_isSharedCheck_4400_ = !lean_is_exclusive(v___x_4367_);
if (v_isSharedCheck_4400_ == 0)
{
v___x_4395_ = v___x_4367_;
v_isShared_4396_ = v_isSharedCheck_4400_;
goto v_resetjp_4394_;
}
else
{
lean_inc(v_a_4393_);
lean_dec(v___x_4367_);
v___x_4395_ = lean_box(0);
v_isShared_4396_ = v_isSharedCheck_4400_;
goto v_resetjp_4394_;
}
v_resetjp_4394_:
{
lean_object* v___x_4398_; 
if (v_isShared_4396_ == 0)
{
v___x_4398_ = v___x_4395_;
goto v_reusejp_4397_;
}
else
{
lean_object* v_reuseFailAlloc_4399_; 
v_reuseFailAlloc_4399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4399_, 0, v_a_4393_);
v___x_4398_ = v_reuseFailAlloc_4399_;
goto v_reusejp_4397_;
}
v_reusejp_4397_:
{
return v___x_4398_;
}
}
}
}
else
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4408_; 
lean_dec(v_a_4358_);
lean_del_object(v___x_4354_);
lean_dec(v_name_4349_);
lean_del_object(v___x_4347_);
lean_dec(v_inlineAttr_x3f_4345_);
lean_dec_ref(v_value_4343_);
v_a_4401_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4403_ = v___x_4365_;
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v___x_4365_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4406_; 
if (v_isShared_4404_ == 0)
{
v___x_4406_ = v___x_4403_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4401_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4416_; 
lean_del_object(v___x_4354_);
lean_dec_ref(v_params_4351_);
lean_dec(v_name_4349_);
lean_del_object(v___x_4347_);
lean_dec(v_inlineAttr_x3f_4345_);
lean_dec_ref(v_value_4343_);
v_a_4409_ = lean_ctor_get(v___x_4357_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4411_ = v___x_4357_;
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_a_4409_);
lean_dec(v___x_4357_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4414_; 
if (v_isShared_4412_ == 0)
{
v___x_4414_ = v___x_4411_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4409_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object* v_decl_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4420_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_, v_a_4425_);
lean_dec(v_a_4425_);
lean_dec_ref(v_a_4424_);
lean_dec(v_a_4423_);
lean_dec_ref(v_a_4422_);
lean_dec(v_a_4421_);
return v_res_4427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object* v_decl_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_, lean_object* v_a_4432_){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4434_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_4435_ = lean_st_mk_ref(v___x_4434_);
v___x_4436_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4428_, v___x_4435_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
if (lean_obj_tag(v___x_4436_) == 0)
{
lean_object* v_a_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4445_; 
v_a_4437_ = lean_ctor_get(v___x_4436_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4439_ = v___x_4436_;
v_isShared_4440_ = v_isSharedCheck_4445_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_a_4437_);
lean_dec(v___x_4436_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4445_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v___x_4441_; lean_object* v___x_4443_; 
v___x_4441_ = lean_st_ref_get(v___x_4435_);
lean_dec(v___x_4435_);
lean_dec(v___x_4441_);
if (v_isShared_4440_ == 0)
{
v___x_4443_ = v___x_4439_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4437_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
else
{
lean_dec(v___x_4435_);
return v___x_4436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object* v_decl_4446_, lean_object* v_a_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_){
_start:
{
lean_object* v_res_4452_; 
v_res_4452_ = l_Lean_Compiler_LCNF_Decl_toMono(v_decl_4446_, v_a_4447_, v_a_4448_, v_a_4449_, v_a_4450_);
lean_dec(v_a_4450_);
lean_dec_ref(v_a_4449_);
lean_dec(v_a_4448_);
lean_dec_ref(v_a_4447_);
return v_res_4452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t v_sz_4453_, size_t v_i_4454_, lean_object* v_bs_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_){
_start:
{
uint8_t v___x_4461_; 
v___x_4461_ = lean_usize_dec_lt(v_i_4454_, v_sz_4453_);
if (v___x_4461_ == 0)
{
lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4462_ = l_unsafeCast___redArg(v_bs_4455_);
lean_dec_ref(v_bs_4455_);
v___x_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4462_);
return v___x_4463_;
}
else
{
lean_object* v_v_4464_; lean_object* v___x_4465_; lean_object* v_bs_x27_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; 
v_v_4464_ = lean_array_uget(v_bs_4455_, v_i_4454_);
v___x_4465_ = lean_unsigned_to_nat(0u);
v_bs_x27_4466_ = lean_array_uset(v_bs_4455_, v_i_4454_, v___x_4465_);
v___x_4467_ = l_unsafeCast___redArg(v_v_4464_);
lean_dec(v_v_4464_);
v___x_4468_ = l_Lean_Compiler_LCNF_Decl_toMono(v___x_4467_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_);
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v_a_4469_; size_t v___x_4470_; size_t v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v_a_4469_ = lean_ctor_get(v___x_4468_, 0);
lean_inc(v_a_4469_);
lean_dec_ref_known(v___x_4468_, 1);
v___x_4470_ = ((size_t)1ULL);
v___x_4471_ = lean_usize_add(v_i_4454_, v___x_4470_);
v___x_4472_ = l_unsafeCast___redArg(v_a_4469_);
lean_dec(v_a_4469_);
v___x_4473_ = lean_array_uset(v_bs_x27_4466_, v_i_4454_, v___x_4472_);
v_i_4454_ = v___x_4471_;
v_bs_4455_ = v___x_4473_;
goto _start;
}
else
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4482_; 
lean_dec_ref(v_bs_x27_4466_);
v_a_4475_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4482_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4482_ == 0)
{
v___x_4477_ = v___x_4468_;
v_isShared_4478_ = v_isSharedCheck_4482_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v___x_4468_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4482_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___x_4480_; 
if (v_isShared_4478_ == 0)
{
v___x_4480_ = v___x_4477_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4481_; 
v_reuseFailAlloc_4481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4481_, 0, v_a_4475_);
v___x_4480_ = v_reuseFailAlloc_4481_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
return v___x_4480_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object* v_sz_4483_, lean_object* v_i_4484_, lean_object* v_bs_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_){
_start:
{
size_t v_sz_boxed_4491_; size_t v_i_boxed_4492_; lean_object* v_res_4493_; 
v_sz_boxed_4491_ = lean_unbox_usize(v_sz_4483_);
lean_dec(v_sz_4483_);
v_i_boxed_4492_ = lean_unbox_usize(v_i_4484_);
lean_dec(v_i_4484_);
v_res_4493_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_boxed_4491_, v_i_boxed_4492_, v_bs_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
lean_dec(v___y_4489_);
lean_dec_ref(v___y_4488_);
lean_dec(v___y_4487_);
lean_dec_ref(v___y_4486_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object* v_x_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
size_t v_sz_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_231__overap_4505_; lean_object* v___x_4506_; 
v_sz_4500_ = lean_array_size(v_x_4494_);
v___x_4501_ = l_unsafeCast___redArg(v_x_4494_);
v___x_4502_ = lean_box_usize(v_sz_4500_);
v___x_4503_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___boxed__const__1));
v___x_4504_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed), 8, 3);
lean_closure_set(v___x_4504_, 0, v___x_4502_);
lean_closure_set(v___x_4504_, 1, v___x_4503_);
lean_closure_set(v___x_4504_, 2, v___x_4501_);
v___x_231__overap_4505_ = l_unsafeCast___redArg(v___x_4504_);
lean_dec_ref(v___x_4504_);
lean_inc(v___y_4498_);
lean_inc_ref(v___y_4497_);
lean_inc(v___y_4496_);
lean_inc_ref(v___y_4495_);
v___x_4506_ = lean_apply_5(v___x_231__overap_4505_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, lean_box(0));
return v___x_4506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object* v_x_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l_Lean_Compiler_LCNF_toMono___lam__0(v_x_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec_ref(v_x_4507_);
return v_res_4513_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = lean_box(0);
v___x_4531_ = l_unsafeCast___redArg(v___x_4530_);
return v___x_4531_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; 
v___x_4533_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4534_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4535_ = l_Lean_Name_str___override(v___x_4534_, v___x_4533_);
return v___x_4535_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4537_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4538_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4539_ = l_Lean_Name_str___override(v___x_4538_, v___x_4537_);
return v___x_4539_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4540_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4541_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4542_ = l_Lean_Name_str___override(v___x_4541_, v___x_4540_);
return v___x_4542_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; 
v___x_4544_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4545_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4546_ = l_Lean_Name_str___override(v___x_4545_, v___x_4544_);
return v___x_4546_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4548_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4549_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4550_ = l_Lean_Name_str___override(v___x_4549_, v___x_4548_);
return v___x_4550_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; 
v___x_4551_ = lean_unsigned_to_nat(0u);
v___x_4552_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4553_ = l_Lean_Name_num___override(v___x_4552_, v___x_4551_);
return v___x_4553_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v___x_4554_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4555_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4556_ = l_Lean_Name_str___override(v___x_4555_, v___x_4554_);
return v___x_4556_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4557_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4558_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4559_ = l_Lean_Name_str___override(v___x_4558_, v___x_4557_);
return v___x_4559_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4560_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4561_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4562_ = l_Lean_Name_str___override(v___x_4561_, v___x_4560_);
return v___x_4562_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4564_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4565_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4566_ = l_Lean_Name_str___override(v___x_4565_, v___x_4564_);
return v___x_4566_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v___x_4568_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4569_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4570_ = l_Lean_Name_str___override(v___x_4569_, v___x_4568_);
return v___x_4570_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4571_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4572_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4573_ = l_Lean_Name_str___override(v___x_4572_, v___x_4571_);
return v___x_4573_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
v___x_4574_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4575_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4576_ = l_Lean_Name_str___override(v___x_4575_, v___x_4574_);
return v___x_4576_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v___x_4577_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4578_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4579_ = l_Lean_Name_str___override(v___x_4578_, v___x_4577_);
return v___x_4579_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; 
v___x_4580_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4581_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4582_ = l_Lean_Name_str___override(v___x_4581_, v___x_4580_);
return v___x_4582_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; 
v___x_4583_ = lean_unsigned_to_nat(1770774466u);
v___x_4584_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4585_ = l_Lean_Name_num___override(v___x_4584_, v___x_4583_);
return v___x_4585_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4587_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4588_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4589_ = l_Lean_Name_str___override(v___x_4588_, v___x_4587_);
return v___x_4589_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4591_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4592_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4593_ = l_Lean_Name_str___override(v___x_4592_, v___x_4591_);
return v___x_4593_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4594_ = lean_unsigned_to_nat(2u);
v___x_4595_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4596_ = l_Lean_Name_num___override(v___x_4595_, v___x_4594_);
return v___x_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4598_; uint8_t v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v___x_4598_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4599_ = 1;
v___x_4600_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_);
v___x_4601_ = l_Lean_registerTraceClass(v___x_4598_, v___x_4599_, v___x_4600_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object* v_a_4602_){
_start:
{
lean_object* v_res_4603_; 
v_res_4603_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
return v_res_4603_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToMono(builtin);
}
#ifdef __cplusplus
}
#endif

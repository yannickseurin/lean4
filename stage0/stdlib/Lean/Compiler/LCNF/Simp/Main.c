// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Main
// Imports: public import Lean.Compiler.LCNF.Simp.InlineCandidate public import Lean.Compiler.LCNF.Simp.InlineProj public import Lean.Compiler.LCNF.Simp.Used public import Lean.Compiler.LCNF.Simp.DefaultAlt public import Lean.Compiler.LCNF.Simp.SimpValue public import Lean.Compiler.LCNF.Simp.ConstantFold
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isFun___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasLocalInst___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetValue_beq(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Alt_getParams(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetDecl_beq(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Cases_extractAlt_x21(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_inferAppType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_f"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(253, 65, 185, 154, 193, 83, 240, 170)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 69, 15, 56, 172, 246, 212, 179)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LCNF simp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_1_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object* v_c_2_){
_start:
{
switch(lean_obj_tag(v_c_2_))
{
case 0:
{
lean_object* v_k_3_; 
v_k_3_ = lean_ctor_get(v_c_2_, 1);
v_c_2_ = v_k_3_;
goto _start;
}
case 1:
{
lean_object* v_k_5_; 
v_k_5_ = lean_ctor_get(v_c_2_, 1);
v_c_2_ = v_k_5_;
goto _start;
}
case 4:
{
lean_object* v_cases_7_; lean_object* v_alts_8_; lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v_cases_7_ = lean_ctor_get(v_c_2_, 0);
v_alts_8_ = lean_ctor_get(v_cases_7_, 3);
v___x_9_ = lean_array_get_size(v_alts_8_);
v___x_10_ = lean_unsigned_to_nat(1u);
v___x_11_ = lean_nat_dec_eq(v___x_9_, v___x_10_);
if (v___x_11_ == 0)
{
return v___x_11_;
}
else
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0);
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_array_get_borrowed(v___x_12_, v_alts_8_, v___x_13_);
switch(lean_obj_tag(v___x_14_))
{
case 0:
{
lean_object* v_code_15_; 
v_code_15_ = lean_ctor_get(v___x_14_, 2);
v_c_2_ = v_code_15_;
goto _start;
}
case 1:
{
lean_object* v_code_17_; 
v_code_17_ = lean_ctor_get(v___x_14_, 1);
v_c_2_ = v_code_17_;
goto _start;
}
default: 
{
lean_object* v_code_19_; 
v_code_19_ = lean_ctor_get(v___x_14_, 0);
v_c_2_ = v_code_19_;
goto _start;
}
}
}
}
case 5:
{
uint8_t v___x_21_; 
v___x_21_ = 1;
return v___x_21_;
}
default: 
{
uint8_t v___x_22_; 
v___x_22_ = 0;
return v___x_22_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object* v_c_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_23_);
lean_dec_ref(v_c_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object* v_c_26_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object* v_c_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(v_c_28_);
lean_dec_ref(v_c_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object* v_a_31_, lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
uint8_t v___x_33_; 
v___x_33_ = 0;
return v___x_33_;
}
else
{
lean_object* v_key_34_; lean_object* v_tail_35_; uint8_t v___x_36_; 
v_key_34_ = lean_ctor_get(v_x_32_, 0);
v_tail_35_ = lean_ctor_get(v_x_32_, 2);
v___x_36_ = l_Lean_instBEqFVarId_beq(v_key_34_, v_a_31_);
if (v___x_36_ == 0)
{
v_x_32_ = v_tail_35_;
goto _start;
}
else
{
return v___x_36_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object* v_a_38_, lean_object* v_x_39_){
_start:
{
uint8_t v_res_40_; lean_object* v_r_41_; 
v_res_40_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_38_, v_x_39_);
lean_dec(v_x_39_);
lean_dec(v_a_38_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_42_, lean_object* v_x_43_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
return v_x_42_;
}
else
{
lean_object* v_key_44_; lean_object* v_value_45_; lean_object* v_tail_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_69_; 
v_key_44_ = lean_ctor_get(v_x_43_, 0);
v_value_45_ = lean_ctor_get(v_x_43_, 1);
v_tail_46_ = lean_ctor_get(v_x_43_, 2);
v_isSharedCheck_69_ = !lean_is_exclusive(v_x_43_);
if (v_isSharedCheck_69_ == 0)
{
v___x_48_ = v_x_43_;
v_isShared_49_ = v_isSharedCheck_69_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_tail_46_);
lean_inc(v_value_45_);
lean_inc(v_key_44_);
lean_dec(v_x_43_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_69_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; uint64_t v___x_51_; uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v_fold_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; size_t v___x_58_; size_t v___x_59_; size_t v___x_60_; size_t v___x_61_; size_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_50_ = lean_array_get_size(v_x_42_);
v___x_51_ = l_Lean_instHashableFVarId_hash(v_key_44_);
v___x_52_ = 32ULL;
v___x_53_ = lean_uint64_shift_right(v___x_51_, v___x_52_);
v_fold_54_ = lean_uint64_xor(v___x_51_, v___x_53_);
v___x_55_ = 16ULL;
v___x_56_ = lean_uint64_shift_right(v_fold_54_, v___x_55_);
v___x_57_ = lean_uint64_xor(v_fold_54_, v___x_56_);
v___x_58_ = lean_uint64_to_usize(v___x_57_);
v___x_59_ = lean_usize_of_nat(v___x_50_);
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_sub(v___x_59_, v___x_60_);
v___x_62_ = lean_usize_land(v___x_58_, v___x_61_);
v___x_63_ = lean_array_uget_borrowed(v_x_42_, v___x_62_);
lean_inc(v___x_63_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 2, v___x_63_);
v___x_65_ = v___x_48_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_key_44_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_value_45_);
lean_ctor_set(v_reuseFailAlloc_68_, 2, v___x_63_);
v___x_65_ = v_reuseFailAlloc_68_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_array_uset(v_x_42_, v___x_62_, v___x_65_);
v_x_42_ = v___x_66_;
v_x_43_ = v_tail_46_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object* v_i_70_, lean_object* v_source_71_, lean_object* v_target_72_){
_start:
{
lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_73_ = lean_array_get_size(v_source_71_);
v___x_74_ = lean_nat_dec_lt(v_i_70_, v___x_73_);
if (v___x_74_ == 0)
{
lean_dec_ref(v_source_71_);
lean_dec(v_i_70_);
return v_target_72_;
}
else
{
lean_object* v_es_75_; lean_object* v___x_76_; lean_object* v_source_77_; lean_object* v_target_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_es_75_ = lean_array_fget(v_source_71_, v_i_70_);
v___x_76_ = lean_box(0);
v_source_77_ = lean_array_fset(v_source_71_, v_i_70_, v___x_76_);
v_target_78_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_target_72_, v_es_75_);
v___x_79_ = lean_unsigned_to_nat(1u);
v___x_80_ = lean_nat_add(v_i_70_, v___x_79_);
lean_dec(v_i_70_);
v_i_70_ = v___x_80_;
v_source_71_ = v_source_77_;
v_target_72_ = v_target_78_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object* v_data_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_nbuckets_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_83_ = lean_array_get_size(v_data_82_);
v___x_84_ = lean_unsigned_to_nat(2u);
v_nbuckets_85_ = lean_nat_mul(v___x_83_, v___x_84_);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_box(0);
v___x_88_ = lean_mk_array(v_nbuckets_85_, v___x_87_);
v___x_89_ = lean_array_propagate_mark(v_data_82_, v___x_88_);
v___x_90_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v___x_86_, v_data_82_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object* v_a_91_, lean_object* v_b_92_, lean_object* v_x_93_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_dec(v_b_92_);
lean_dec(v_a_91_);
return v_x_93_;
}
else
{
lean_object* v_key_94_; lean_object* v_value_95_; lean_object* v_tail_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_108_; 
v_key_94_ = lean_ctor_get(v_x_93_, 0);
v_value_95_ = lean_ctor_get(v_x_93_, 1);
v_tail_96_ = lean_ctor_get(v_x_93_, 2);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_108_ == 0)
{
v___x_98_ = v_x_93_;
v_isShared_99_ = v_isSharedCheck_108_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_tail_96_);
lean_inc(v_value_95_);
lean_inc(v_key_94_);
lean_dec(v_x_93_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_108_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
uint8_t v___x_100_; 
v___x_100_ = l_Lean_instBEqFVarId_beq(v_key_94_, v_a_91_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_91_, v_b_92_, v_tail_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 2, v___x_101_);
v___x_103_ = v___x_98_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_key_94_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_value_95_);
lean_ctor_set(v_reuseFailAlloc_104_, 2, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
else
{
lean_object* v___x_106_; 
lean_dec(v_value_95_);
lean_dec(v_key_94_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_b_92_);
lean_ctor_set(v___x_98_, 0, v_a_91_);
v___x_106_ = v___x_98_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_91_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_b_92_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_tail_96_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object* v_m_109_, lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
lean_object* v_size_112_; lean_object* v_buckets_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_156_; 
v_size_112_ = lean_ctor_get(v_m_109_, 0);
v_buckets_113_ = lean_ctor_get(v_m_109_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_m_109_);
if (v_isSharedCheck_156_ == 0)
{
v___x_115_ = v_m_109_;
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_buckets_113_);
lean_inc(v_size_112_);
lean_dec(v_m_109_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; uint64_t v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v_fold_121_; uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v___x_124_; size_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; lean_object* v_bkt_130_; uint8_t v___x_131_; 
v___x_117_ = lean_array_get_size(v_buckets_113_);
v___x_118_ = l_Lean_instHashableFVarId_hash(v_a_110_);
v___x_119_ = 32ULL;
v___x_120_ = lean_uint64_shift_right(v___x_118_, v___x_119_);
v_fold_121_ = lean_uint64_xor(v___x_118_, v___x_120_);
v___x_122_ = 16ULL;
v___x_123_ = lean_uint64_shift_right(v_fold_121_, v___x_122_);
v___x_124_ = lean_uint64_xor(v_fold_121_, v___x_123_);
v___x_125_ = lean_uint64_to_usize(v___x_124_);
v___x_126_ = lean_usize_of_nat(v___x_117_);
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_sub(v___x_126_, v___x_127_);
v___x_129_ = lean_usize_land(v___x_125_, v___x_128_);
v_bkt_130_ = lean_array_uget_borrowed(v_buckets_113_, v___x_129_);
v___x_131_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_110_, v_bkt_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v_size_x27_133_; lean_object* v___x_134_; lean_object* v_buckets_x27_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v_size_x27_133_ = lean_nat_add(v_size_112_, v___x_132_);
lean_dec(v_size_112_);
lean_inc(v_bkt_130_);
v___x_134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_134_, 0, v_a_110_);
lean_ctor_set(v___x_134_, 1, v_b_111_);
lean_ctor_set(v___x_134_, 2, v_bkt_130_);
v_buckets_x27_135_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_134_);
v___x_136_ = lean_unsigned_to_nat(4u);
v___x_137_ = lean_nat_mul(v_size_x27_133_, v___x_136_);
v___x_138_ = lean_unsigned_to_nat(3u);
v___x_139_ = lean_nat_div(v___x_137_, v___x_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_array_get_size(v_buckets_x27_135_);
v___x_141_ = lean_nat_dec_le(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
if (v___x_141_ == 0)
{
lean_object* v_val_142_; lean_object* v___x_144_; 
v_val_142_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_buckets_x27_135_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_val_142_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_144_ = v___x_115_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_val_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
else
{
lean_object* v___x_147_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_buckets_x27_135_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_147_ = v___x_115_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_buckets_x27_135_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v___x_149_; lean_object* v_buckets_x27_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
lean_inc(v_bkt_130_);
v___x_149_ = lean_box(0);
v_buckets_x27_150_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_149_);
v___x_151_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_110_, v_b_111_, v_bkt_130_);
v___x_152_ = lean_array_uset(v_buckets_x27_150_, v___x_129_, v___x_151_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v___x_152_);
v___x_154_ = v___x_115_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_size_112_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object* v_as_157_, size_t v_sz_158_, size_t v_i_159_, lean_object* v_b_160_){
_start:
{
uint8_t v___x_162_; 
v___x_162_ = lean_usize_dec_lt(v_i_159_, v_sz_158_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_b_160_);
return v___x_163_;
}
else
{
lean_object* v_snd_164_; lean_object* v_fst_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_199_; 
v_snd_164_ = lean_ctor_get(v_b_160_, 1);
v_fst_165_ = lean_ctor_get(v_b_160_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v_b_160_);
if (v_isSharedCheck_199_ == 0)
{
v___x_167_ = v_b_160_;
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_snd_164_);
lean_inc(v_fst_165_);
lean_dec(v_b_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_array_169_; lean_object* v_start_170_; lean_object* v_stop_171_; uint8_t v___x_172_; 
v_array_169_ = lean_ctor_get(v_snd_164_, 0);
v_start_170_ = lean_ctor_get(v_snd_164_, 1);
v_stop_171_ = lean_ctor_get(v_snd_164_, 2);
v___x_172_ = lean_nat_dec_lt(v_start_170_, v_stop_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_174_; 
if (v_isShared_168_ == 0)
{
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_fst_165_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_snd_164_);
v___x_174_ = v_reuseFailAlloc_176_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; 
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
else
{
lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_195_; 
lean_inc(v_stop_171_);
lean_inc(v_start_170_);
lean_inc_ref(v_array_169_);
v_isSharedCheck_195_ = !lean_is_exclusive(v_snd_164_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; lean_object* v_unused_197_; lean_object* v_unused_198_; 
v_unused_196_ = lean_ctor_get(v_snd_164_, 2);
lean_dec(v_unused_196_);
v_unused_197_ = lean_ctor_get(v_snd_164_, 1);
lean_dec(v_unused_197_);
v_unused_198_ = lean_ctor_get(v_snd_164_, 0);
lean_dec(v_unused_198_);
v___x_178_ = v_snd_164_;
v_isShared_179_ = v_isSharedCheck_195_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_snd_164_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_195_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_a_180_; lean_object* v_fvarId_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v_a_180_ = lean_array_uget_borrowed(v_as_157_, v_i_159_);
v_fvarId_181_ = lean_ctor_get(v_a_180_, 0);
v___x_182_ = lean_array_fget(v_array_169_, v_start_170_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_start_170_, v___x_183_);
lean_dec(v_start_170_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_184_);
v___x_186_ = v___x_178_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_array_169_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v_stop_171_);
v___x_186_ = v_reuseFailAlloc_194_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; lean_object* v___x_189_; 
lean_inc(v_fvarId_181_);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_165_, v_fvarId_181_, v___x_182_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_186_);
lean_ctor_set(v___x_167_, 0, v___x_187_);
v___x_189_ = v___x_167_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v___x_186_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
size_t v___x_190_; size_t v___x_191_; 
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_add(v_i_159_, v___x_190_);
v_i_159_ = v___x_191_;
v_b_160_ = v___x_189_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object* v_as_200_, lean_object* v_sz_201_, lean_object* v_i_202_, lean_object* v_b_203_, lean_object* v___y_204_){
_start:
{
size_t v_sz_boxed_205_; size_t v_i_boxed_206_; lean_object* v_res_207_; 
v_sz_boxed_205_ = lean_unbox_usize(v_sz_201_);
lean_dec(v_sz_201_);
v_i_boxed_206_ = lean_unbox_usize(v_i_202_);
lean_dec(v_i_202_);
v_res_207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_200_, v_sz_boxed_205_, v_i_boxed_206_, v_b_203_);
lean_dec_ref(v_as_200_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object* v_a_208_, lean_object* v_b_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_array_215_; lean_object* v_start_216_; lean_object* v_stop_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_267_; 
v_array_215_ = lean_ctor_get(v_a_208_, 0);
v_start_216_ = lean_ctor_get(v_a_208_, 1);
v_stop_217_ = lean_ctor_get(v_a_208_, 2);
v_isSharedCheck_267_ = !lean_is_exclusive(v_a_208_);
if (v_isSharedCheck_267_ == 0)
{
v___x_219_ = v_a_208_;
v_isShared_220_ = v_isSharedCheck_267_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_stop_217_);
lean_inc(v_start_216_);
lean_inc(v_array_215_);
lean_dec(v_a_208_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_267_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
uint8_t v___x_221_; 
v___x_221_ = lean_nat_dec_lt(v_start_216_, v_stop_217_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
lean_del_object(v___x_219_);
lean_dec(v_stop_217_);
lean_dec(v_start_216_);
lean_dec_ref(v_array_215_);
v___x_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_222_, 0, v_b_209_);
return v___x_222_;
}
else
{
lean_object* v_fst_223_; lean_object* v_snd_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_266_; 
v_fst_223_ = lean_ctor_get(v_b_209_, 0);
v_snd_224_ = lean_ctor_get(v_b_209_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v_b_209_);
if (v_isSharedCheck_266_ == 0)
{
v___x_226_ = v_b_209_;
v_isShared_227_ = v_isSharedCheck_266_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_snd_224_);
lean_inc(v_fst_223_);
lean_dec(v_b_209_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_266_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v_fvarId_229_; lean_object* v_type_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_228_ = lean_array_fget_borrowed(v_array_215_, v_start_216_);
v_fvarId_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_fvarId_229_);
v_type_230_ = lean_ctor_get(v___x_228_, 2);
lean_inc_ref(v_type_230_);
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_nat_add(v_start_216_, v___x_231_);
lean_dec(v_start_216_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_232_);
v___x_234_ = v___x_219_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_array_215_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_stop_217_);
v___x_234_ = v_reuseFailAlloc_265_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
uint8_t v___x_235_; lean_object* v___x_236_; 
v___x_235_ = 0;
v___x_236_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v___x_235_, v_type_230_, v_fst_223_, v___x_221_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_a_237_);
lean_dec_ref_known(v___x_236_, 1);
v___x_238_ = 0;
v___x_239_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_235_, v_a_237_, v___x_238_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v_fvarId_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_239_, 1);
v_fvarId_241_ = lean_ctor_get(v_a_240_, 0);
lean_inc(v_fvarId_241_);
v___x_242_ = lean_array_push(v_snd_224_, v_a_240_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v_fvarId_241_);
v___x_244_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_223_, v_fvarId_229_, v___x_243_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 1, v___x_242_);
lean_ctor_set(v___x_226_, 0, v___x_244_);
v___x_246_ = v___x_226_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v___x_242_);
v___x_246_ = v_reuseFailAlloc_248_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
v_a_208_ = v___x_234_;
v_b_209_ = v___x_246_;
goto _start;
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec_ref(v___x_234_);
lean_dec(v_fvarId_229_);
lean_del_object(v___x_226_);
lean_dec(v_snd_224_);
lean_dec(v_fst_223_);
v_a_249_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_239_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_239_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec_ref(v___x_234_);
lean_dec(v_fvarId_229_);
lean_del_object(v___x_226_);
lean_dec(v_snd_224_);
lean_dec(v_fst_223_);
v_a_257_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_236_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_236_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_268_, v_b_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_box(0);
v___x_277_ = lean_unsigned_to_nat(16u);
v___x_278_ = lean_mk_array(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_subst_281_; 
v___x_279_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0);
v___x_280_ = lean_unsigned_to_nat(0u);
v_subst_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_subst_281_, 0, v___x_280_);
lean_ctor_set(v_subst_281_, 1, v___x_279_);
return v_subst_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object* v_info_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_params_296_; lean_object* v_value_297_; lean_object* v_args_298_; lean_object* v___x_299_; lean_object* v_subst_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; size_t v_sz_304_; size_t v___x_305_; lean_object* v___x_306_; 
v_params_296_ = lean_ctor_get(v_info_287_, 0);
lean_inc_ref(v_params_296_);
v_value_297_ = lean_ctor_get(v_info_287_, 1);
lean_inc_ref(v_value_297_);
v_args_298_ = lean_ctor_get(v_info_287_, 3);
lean_inc_ref(v_args_298_);
lean_dec_ref(v_info_287_);
v___x_299_ = lean_unsigned_to_nat(0u);
v_subst_300_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1);
v___x_301_ = lean_array_get_size(v_args_298_);
v___x_302_ = l_Array_toSubarray___redArg(v_args_298_, v___x_299_, v___x_301_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_subst_300_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v_sz_304_ = lean_array_size(v_params_296_);
v___x_305_ = ((size_t)0ULL);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_params_296_, v_sz_304_, v___x_305_, v___x_303_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v_fst_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_357_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v___x_306_, 1);
v_fst_308_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v_a_307_, 1);
lean_dec(v_unused_358_);
v___x_310_ = v_a_307_;
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_fst_308_);
lean_dec(v_a_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v_lower_314_; lean_object* v_upper_315_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_312_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2));
v___x_355_ = lean_array_get_size(v_params_296_);
v___x_356_ = lean_nat_dec_le(v___x_301_, v___x_299_);
if (v___x_356_ == 0)
{
v_lower_314_ = v___x_301_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
else
{
v_lower_314_ = v___x_299_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
v___jp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = l_Array_toSubarray___redArg(v_params_296_, v_lower_314_, v_upper_315_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_312_);
v___x_318_ = v___x_310_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_fst_308_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_312_);
v___x_318_ = v_reuseFailAlloc_354_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v___x_316_, v___x_318_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v_fst_321_; lean_object* v_snd_322_; uint8_t v___x_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
v_fst_321_ = lean_ctor_get(v_a_320_, 0);
lean_inc(v_fst_321_);
v_snd_322_ = lean_ctor_get(v_a_320_, 1);
lean_inc(v_snd_322_);
lean_dec(v_a_320_);
v___x_323_ = 0;
v___x_324_ = 0;
v___x_325_ = l_Lean_Compiler_LCNF_Code_internalize(v___x_323_, v_value_297_, v_fst_321_, v___x_324_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc_n(v_a_326_, 2);
lean_dec_ref_known(v___x_325_, 1);
v___x_327_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_a_326_, v___x_324_, v_a_289_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref_known(v___x_327_, 1);
v___x_328_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_329_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_snd_322_, v_a_326_, v___x_328_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
return v___x_329_;
}
else
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec(v_a_326_);
lean_dec(v_snd_322_);
v_a_330_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_327_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_327_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v_snd_322_);
v_a_338_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_325_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_325_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_value_297_);
v_a_346_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_319_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_319_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v_value_297_);
lean_dec_ref(v_params_296_);
v_a_359_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_306_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_306_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object* v_info_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_info_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object* v_00_u03b2_377_, lean_object* v_m_378_, lean_object* v_a_379_, lean_object* v_b_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_m_378_, v_a_379_, v_b_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object* v_as_382_, size_t v_sz_383_, size_t v_i_384_, lean_object* v_b_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_382_, v_sz_383_, v_i_384_, v_b_385_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object* v_as_395_, lean_object* v_sz_396_, lean_object* v_i_397_, lean_object* v_b_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
size_t v_sz_boxed_407_; size_t v_i_boxed_408_; lean_object* v_res_409_; 
v_sz_boxed_407_ = lean_unbox_usize(v_sz_396_);
lean_dec(v_sz_396_);
v_i_boxed_408_ = lean_unbox_usize(v_i_397_);
lean_dec(v_i_397_);
v_res_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(v_as_395_, v_sz_boxed_407_, v_i_boxed_408_, v_b_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec_ref(v_as_395_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object* v_inst_410_, lean_object* v_R_411_, lean_object* v_a_412_, lean_object* v_b_413_, lean_object* v_c_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_412_, v_b_413_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object* v_inst_424_, lean_object* v_R_425_, lean_object* v_a_426_, lean_object* v_b_427_, lean_object* v_c_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(v_inst_424_, v_R_425_, v_a_426_, v_b_427_, v_c_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_437_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object* v_00_u03b2_438_, lean_object* v_a_439_, lean_object* v_x_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_439_, v_x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object* v_00_u03b2_442_, lean_object* v_a_443_, lean_object* v_x_444_){
_start:
{
uint8_t v_res_445_; lean_object* v_r_446_; 
v_res_445_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(v_00_u03b2_442_, v_a_443_, v_x_444_);
lean_dec(v_x_444_);
lean_dec(v_a_443_);
v_r_446_ = lean_box(v_res_445_);
return v_r_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object* v_00_u03b2_447_, lean_object* v_data_448_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_data_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object* v_00_u03b2_450_, lean_object* v_a_451_, lean_object* v_b_452_, lean_object* v_x_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_451_, v_b_452_, v_x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_455_, lean_object* v_i_456_, lean_object* v_source_457_, lean_object* v_target_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v_i_456_, v_source_457_, v_target_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_460_, lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_x_461_, v_x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object* v_fvarId_464_, lean_object* v_args_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
uint8_t v___x_474_; lean_object* v___x_475_; 
v___x_474_ = 0;
v___x_475_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_474_, v_fvarId_464_, v_a_470_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_540_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_540_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
if (lean_obj_tag(v_a_476_) == 1)
{
lean_object* v_val_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_535_; 
lean_del_object(v___x_478_);
v_val_480_ = lean_ctor_get(v_a_476_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_476_);
if (v_isSharedCheck_535_ == 0)
{
v___x_482_ = v_a_476_;
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_val_480_);
lean_dec(v_a_476_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_val_480_, v_a_467_, v_a_469_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_526_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_526_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
uint8_t v___x_489_; 
v___x_489_ = lean_unbox(v_a_485_);
lean_dec(v_a_485_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_492_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v___x_490_ = lean_box(0);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
else
{
lean_object* v___x_494_; 
lean_del_object(v___x_487_);
v___x_494_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_467_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_params_495_; lean_object* v_value_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
lean_dec_ref_known(v___x_494_, 1);
v_params_495_ = lean_ctor_get(v_val_480_, 2);
lean_inc_ref(v_params_495_);
v_value_496_ = lean_ctor_get(v_val_480_, 4);
lean_inc_ref(v_value_496_);
lean_dec(v_val_480_);
v___x_497_ = 0;
v___x_498_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_495_, v_value_496_, v_args_465_, v___x_497_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_);
lean_dec_ref(v_params_495_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_509_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_509_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v_a_499_);
v___x_504_ = v___x_482_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_508_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_506_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_del_object(v___x_482_);
v_a_510_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_498_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_498_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_518_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_494_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_494_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_527_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_484_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_484_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec(v_a_476_);
lean_dec_ref(v_args_465_);
v___x_536_ = lean_box(0);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_536_);
v___x_538_ = v___x_478_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_args_465_);
v_a_541_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_475_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_475_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object* v_fvarId_549_, lean_object* v_args_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_549_, v_args_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_a_553_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_fvarId_549_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object* v_declName_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v_env_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_563_ = lean_st_ref_get(v___y_561_);
v_env_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc_ref(v_env_564_);
lean_dec(v___x_563_);
v___x_565_ = l_Lean_isInstanceReducibleCore(v_env_564_, v_declName_560_);
v___x_566_ = lean_box(v___x_565_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object* v_declName_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_569_, v___y_570_);
lean_dec(v___y_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object* v_declName_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_573_, v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object* v_declName_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(v_declName_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(size_t v_sz_593_, size_t v_i_594_, lean_object* v_bs_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_usize_dec_lt(v_i_594_, v_sz_593_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
v___x_597_ = l_unsafeCast___redArg(v_bs_595_);
lean_dec_ref(v_bs_595_);
return v___x_597_;
}
else
{
lean_object* v_v_598_; lean_object* v___x_599_; lean_object* v_fvarId_600_; lean_object* v___x_601_; lean_object* v_bs_x27_602_; lean_object* v___x_603_; size_t v___x_604_; size_t v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_v_598_ = lean_array_uget_borrowed(v_bs_595_, v_i_594_);
v___x_599_ = l_unsafeCast___redArg(v_v_598_);
v_fvarId_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_fvarId_600_);
lean_dec(v___x_599_);
v___x_601_ = lean_unsigned_to_nat(0u);
v_bs_x27_602_ = lean_array_uset(v_bs_595_, v_i_594_, v___x_601_);
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v_fvarId_600_);
v___x_604_ = ((size_t)1ULL);
v___x_605_ = lean_usize_add(v_i_594_, v___x_604_);
v___x_606_ = l_unsafeCast___redArg(v___x_603_);
lean_dec_ref_known(v___x_603_, 1);
v___x_607_ = lean_array_uset(v_bs_x27_602_, v_i_594_, v___x_606_);
v_i_594_ = v___x_605_;
v_bs_595_ = v___x_607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object* v_sz_609_, lean_object* v_i_610_, lean_object* v_bs_611_){
_start:
{
size_t v_sz_boxed_612_; size_t v_i_boxed_613_; lean_object* v_res_614_; 
v_sz_boxed_612_ = lean_unbox_usize(v_sz_609_);
lean_dec(v_sz_609_);
v_i_boxed_613_ = lean_unbox_usize(v_i_610_);
lean_dec(v_i_610_);
v_res_614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_boxed_612_, v_i_boxed_613_, v_bs_611_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object* v_letDecl_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_){
_start:
{
lean_object* v_config_630_; uint8_t v_etaPoly_631_; 
v_config_630_ = lean_ctor_get(v_a_619_, 1);
v_etaPoly_631_ = lean_ctor_get_uint8(v_config_630_, 0);
if (v_etaPoly_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec_ref(v_letDecl_618_);
v___x_632_ = lean_box(0);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
else
{
lean_object* v_value_634_; 
v_value_634_ = lean_ctor_get(v_letDecl_618_, 3);
lean_inc(v_value_634_);
if (lean_obj_tag(v_value_634_) == 3)
{
lean_object* v_fvarId_635_; lean_object* v_type_636_; lean_object* v_declName_637_; lean_object* v_us_638_; lean_object* v_args_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_801_; 
v_fvarId_635_ = lean_ctor_get(v_letDecl_618_, 0);
v_type_636_ = lean_ctor_get(v_letDecl_618_, 2);
v_declName_637_ = lean_ctor_get(v_value_634_, 0);
v_us_638_ = lean_ctor_get(v_value_634_, 1);
v_args_639_ = lean_ctor_get(v_value_634_, 2);
v_isSharedCheck_801_ = !lean_is_exclusive(v_value_634_);
if (v_isSharedCheck_801_ == 0)
{
v___x_641_ = v_value_634_;
v_isShared_642_ = v_isSharedCheck_801_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_args_639_);
lean_inc(v_us_638_);
lean_inc(v_declName_637_);
lean_dec(v_value_634_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_801_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; lean_object* v_env_644_; uint8_t v___x_645_; lean_object* v___x_646_; 
v___x_643_ = lean_st_ref_get(v_a_625_);
v_env_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc_ref(v_env_644_);
lean_dec(v___x_643_);
v___x_645_ = 0;
lean_inc(v_declName_637_);
v___x_646_ = l_Lean_Environment_find_x3f(v_env_644_, v_declName_637_, v___x_645_);
if (lean_obj_tag(v___x_646_) == 1)
{
lean_object* v_val_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_val_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_val_647_);
lean_dec_ref_known(v___x_646_, 1);
v___x_648_ = l_Lean_ConstantInfo_type(v_val_647_);
lean_dec(v_val_647_);
v___x_649_ = l_Lean_Compiler_LCNF_hasLocalInst___redArg(v___x_648_, v_a_625_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_790_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_790_ == 0)
{
v___x_652_ = v___x_649_;
v_isShared_653_ = v_isSharedCheck_790_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_790_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
uint8_t v___x_654_; 
v___x_654_ = lean_unbox(v_a_650_);
lean_dec(v_a_650_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_657_; 
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v___x_655_ = lean_box(0);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 0, v___x_655_);
v___x_657_ = v___x_652_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
else
{
lean_object* v___x_659_; lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_789_; 
lean_del_object(v___x_652_);
lean_inc(v_declName_637_);
v___x_659_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_637_, v_a_625_);
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_789_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_789_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_789_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v_val_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_788_; 
v_val_664_ = lean_ctor_get(v_a_660_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v_a_660_);
if (v_isSharedCheck_788_ == 0)
{
v___x_666_ = v_a_660_;
v_isShared_667_ = v_isSharedCheck_788_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_val_664_);
lean_dec(v_a_660_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_788_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
uint8_t v___x_668_; 
v___x_668_ = lean_unbox(v_val_664_);
lean_dec(v_val_664_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
lean_del_object(v___x_662_);
v___x_669_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_622_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; uint8_t v___x_671_; lean_object* v___x_672_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v___x_671_ = lean_unbox(v_a_670_);
lean_inc(v_declName_637_);
v___x_672_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_637_, v___x_671_, v_a_624_, v_a_625_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_767_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_767_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_767_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_767_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
if (lean_obj_tag(v_a_673_) == 1)
{
lean_object* v_val_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_766_; 
v_val_677_ = lean_ctor_get(v_a_673_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_a_673_);
if (v_isSharedCheck_766_ == 0)
{
v___x_679_ = v_a_673_;
v_isShared_680_ = v_isSharedCheck_766_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_val_677_);
lean_dec(v_a_673_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_766_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
uint8_t v___x_681_; uint8_t v___x_682_; 
v___x_681_ = lean_unbox(v_a_670_);
lean_dec(v_a_670_);
v___x_682_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_683_ = lean_array_get_size(v_args_639_);
v___x_684_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_677_);
lean_dec(v_val_677_);
v___x_685_ = lean_nat_dec_lt(v___x_683_, v___x_684_);
lean_dec(v___x_684_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_688_; 
lean_del_object(v___x_679_);
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v___x_686_ = lean_box(0);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_686_);
v___x_688_ = v___x_675_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
else
{
lean_object* v___x_690_; 
lean_del_object(v___x_675_);
lean_inc_ref(v_type_636_);
v___x_690_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_682_, v_type_636_, v_a_622_, v_a_623_, v_a_624_, v_a_625_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; size_t v_sz_692_; size_t v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v_sz_692_ = lean_array_size(v_a_691_);
v___x_693_ = ((size_t)0ULL);
v___x_694_ = l_unsafeCast___redArg(v_a_691_);
v___x_695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_692_, v___x_693_, v___x_694_);
v___x_696_ = l_unsafeCast___redArg(v___x_695_);
lean_dec_ref(v___x_695_);
v___x_697_ = l_Array_append___redArg(v_args_639_, v___x_696_);
lean_dec(v___x_696_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 2, v___x_697_);
v___x_699_ = v___x_641_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_declName_637_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_us_638_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v___x_697_);
v___x_699_ = v_reuseFailAlloc_757_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_701_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_682_, v___x_699_, v___x_700_, v_a_622_, v_a_623_, v_a_624_, v_a_625_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v_fvarId_703_; lean_object* v___x_705_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref_known(v___x_701_, 1);
v_fvarId_703_ = lean_ctor_get(v_a_702_, 0);
lean_inc(v_fvarId_703_);
if (v_isShared_667_ == 0)
{
lean_ctor_set_tag(v___x_666_, 5);
lean_ctor_set(v___x_666_, 0, v_fvarId_703_);
v___x_705_ = v___x_666_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_fvarId_703_);
v___x_705_ = v_reuseFailAlloc_748_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v_a_702_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_708_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_a_691_, v___x_706_, v___x_707_, v_a_622_, v_a_623_, v_a_624_, v_a_625_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v_fvarId_710_; lean_object* v___x_712_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v_fvarId_710_ = lean_ctor_get(v_a_709_, 0);
lean_inc(v_fvarId_710_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v_a_709_);
v___x_712_ = v___x_679_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_709_);
v___x_712_ = v_reuseFailAlloc_739_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; 
lean_inc(v_fvarId_635_);
v___x_713_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_635_, v_fvarId_710_, v_a_620_, v_a_622_, v_a_623_, v_a_624_, v_a_625_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v___x_714_; 
lean_dec_ref_known(v___x_713_, 1);
v___x_714_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_letDecl_618_, v_a_620_, v_a_623_);
lean_dec_ref(v_letDecl_618_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_721_ == 0)
{
lean_object* v_unused_722_; 
v_unused_722_ = lean_ctor_get(v___x_714_, 0);
lean_dec(v_unused_722_);
v___x_716_ = v___x_714_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_dec(v___x_714_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_712_);
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_712_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec_ref(v___x_712_);
v_a_723_ = lean_ctor_get(v___x_714_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_714_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_714_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec_ref(v___x_712_);
lean_dec_ref(v_letDecl_618_);
v_a_731_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_713_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_713_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
lean_del_object(v___x_679_);
lean_dec_ref(v_letDecl_618_);
v_a_740_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_708_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_708_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec(v_a_691_);
lean_del_object(v___x_679_);
lean_del_object(v___x_666_);
lean_dec_ref(v_letDecl_618_);
v_a_749_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_701_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_701_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_del_object(v___x_679_);
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v_a_758_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_690_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_690_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
else
{
lean_del_object(v___x_679_);
lean_dec(v_val_677_);
lean_del_object(v___x_675_);
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
goto v___jp_627_;
}
}
}
else
{
lean_del_object(v___x_675_);
lean_dec(v_a_673_);
lean_dec(v_a_670_);
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
goto v___jp_627_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_a_670_);
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v_a_768_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_672_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_672_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v_a_776_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_669_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_669_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
else
{
lean_object* v___x_784_; lean_object* v___x_786_; 
lean_del_object(v___x_666_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v___x_784_ = lean_box(0);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_784_);
v___x_786_ = v___x_662_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v_a_791_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_649_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_649_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v___x_799_; lean_object* v___x_800_; 
lean_dec(v___x_646_);
lean_del_object(v___x_641_);
lean_dec_ref(v_args_639_);
lean_dec(v_us_638_);
lean_dec(v_declName_637_);
lean_dec_ref(v_letDecl_618_);
v___x_799_ = lean_box(0);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
}
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec(v_value_634_);
lean_dec_ref(v_letDecl_618_);
v___x_802_ = lean_box(0);
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
return v___x_803_;
}
}
v___jp_627_:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_box(0);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object* v_letDecl_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v_letDecl_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec_ref(v_a_807_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(uint8_t v___x_814_, size_t v_sz_815_, size_t v_i_816_, lean_object* v_bs_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_815_, v_i_816_, v_bs_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object* v___x_819_, lean_object* v_sz_820_, lean_object* v_i_821_, lean_object* v_bs_822_){
_start:
{
uint8_t v___x_23236__boxed_823_; size_t v_sz_boxed_824_; size_t v_i_boxed_825_; lean_object* v_res_826_; 
v___x_23236__boxed_823_ = lean_unbox(v___x_819_);
v_sz_boxed_824_ = lean_unbox_usize(v_sz_820_);
lean_dec(v_sz_820_);
v_i_boxed_825_ = lean_unbox_usize(v_i_821_);
lean_dec(v_i_821_);
v_res_826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(v___x_23236__boxed_823_, v_sz_boxed_824_, v_i_boxed_825_, v_bs_822_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object* v_c_827_, lean_object* v_fvarId_828_, lean_object* v_a_829_){
_start:
{
if (lean_obj_tag(v_c_827_) == 5)
{
lean_object* v_fvarId_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_853_; 
v_fvarId_831_ = lean_ctor_get(v_c_827_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v_c_827_);
if (v_isSharedCheck_853_ == 0)
{
v___x_833_ = v_c_827_;
v_isShared_834_ = v_isSharedCheck_853_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_fvarId_831_);
lean_dec(v_c_827_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_853_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v_subst_837_; lean_object* v___x_838_; 
v___x_835_ = 0;
v___x_836_ = lean_st_ref_get(v_a_829_);
v_subst_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc_ref(v_subst_837_);
lean_dec(v___x_836_);
v___x_838_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_837_, v_fvarId_831_, v___x_835_);
lean_dec_ref(v_subst_837_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_fvarId_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_848_; 
lean_del_object(v___x_833_);
v_fvarId_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_848_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_848_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_fvarId_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_848_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
uint8_t v___x_843_; lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_843_ = l_Lean_instBEqFVarId_beq(v_fvarId_839_, v_fvarId_828_);
lean_dec(v_fvarId_839_);
v___x_844_ = lean_box(v___x_843_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 0, v___x_844_);
v___x_846_ = v___x_841_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
else
{
lean_object* v___x_849_; lean_object* v___x_851_; 
v___x_849_ = lean_box(v___x_835_);
if (v_isShared_834_ == 0)
{
lean_ctor_set_tag(v___x_833_, 0);
lean_ctor_set(v___x_833_, 0, v___x_849_);
v___x_851_ = v___x_833_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_849_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
else
{
uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
lean_dec_ref(v_c_827_);
v___x_854_ = 0;
v___x_855_ = lean_box(v___x_854_);
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object* v_c_857_, lean_object* v_fvarId_858_, lean_object* v_a_859_, lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_857_, v_fvarId_858_, v_a_859_);
lean_dec(v_a_859_);
lean_dec(v_fvarId_858_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object* v_c_862_, lean_object* v_fvarId_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_862_, v_fvarId_863_, v_a_865_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object* v_c_873_, lean_object* v_fvarId_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_Compiler_LCNF_Simp_isReturnOf(v_c_873_, v_fvarId_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec_ref(v_a_877_);
lean_dec(v_a_876_);
lean_dec_ref(v_a_875_);
lean_dec(v_fvarId_874_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object* v_value_884_){
_start:
{
if (lean_obj_tag(v_value_884_) == 4)
{
lean_object* v_fvarId_889_; lean_object* v_args_890_; lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v_fvarId_889_ = lean_ctor_get(v_value_884_, 0);
v_args_890_ = lean_ctor_get(v_value_884_, 1);
v___x_891_ = lean_array_get_size(v_args_890_);
v___x_892_ = lean_unsigned_to_nat(0u);
v___x_893_ = lean_nat_dec_eq(v___x_891_, v___x_892_);
if (v___x_893_ == 0)
{
goto v___jp_886_;
}
else
{
lean_object* v___x_894_; lean_object* v___x_895_; 
lean_inc(v_fvarId_889_);
v___x_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_894_, 0, v_fvarId_889_);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
else
{
goto v___jp_886_;
}
v___jp_886_:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_box(0);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object* v_value_896_, lean_object* v_a_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_896_);
lean_dec(v_value_896_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object* v_value_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_899_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object* v_value_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f(v_value_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
lean_dec(v_a_914_);
lean_dec_ref(v_a_913_);
lean_dec_ref(v_a_912_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
lean_dec(v_value_909_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object* v_a_919_, lean_object* v___x_920_, lean_object* v_fvarId_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_fvarId_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v_fvarId_927_ = lean_ctor_get(v_a_919_, 0);
v___x_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_928_, 0, v_fvarId_921_);
v___x_929_ = lean_mk_empty_array_with_capacity(v___x_920_);
v___x_930_ = lean_array_push(v___x_929_, v___x_928_);
lean_inc(v_fvarId_927_);
v___x_931_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_931_, 0, v_fvarId_927_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v___x_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object* v_a_933_, lean_object* v___x_934_, lean_object* v_fvarId_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(v_a_933_, v___x_934_, v_fvarId_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___x_934_);
lean_dec_ref(v_a_933_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t v_pu_942_, uint8_t v_t_943_, lean_object* v_args_944_, lean_object* v___y_945_){
_start:
{
lean_object* v___x_947_; lean_object* v_subst_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_947_ = lean_st_ref_get(v___y_945_);
v_subst_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc_ref(v_subst_948_);
lean_dec(v___x_947_);
v___x_949_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_942_, v_subst_948_, v_args_944_, v_t_943_);
lean_dec_ref(v_subst_948_);
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object* v_pu_951_, lean_object* v_t_952_, lean_object* v_args_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
uint8_t v_pu_boxed_956_; uint8_t v_t_boxed_957_; lean_object* v_res_958_; 
v_pu_boxed_956_ = lean_unbox(v_pu_951_);
v_t_boxed_957_ = lean_unbox(v_t_952_);
v_res_958_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_boxed_956_, v_t_boxed_957_, v_args_953_, v___y_954_);
lean_dec(v___y_954_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object* v_as_959_, size_t v_i_960_, size_t v_stop_961_, lean_object* v_b_962_, lean_object* v___y_963_){
_start:
{
uint8_t v___x_965_; 
v___x_965_ = lean_usize_dec_eq(v_i_960_, v_stop_961_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = lean_array_uget_borrowed(v_as_959_, v_i_960_);
lean_inc(v___x_966_);
v___x_967_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v___x_966_, v___y_963_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; size_t v___x_969_; size_t v___x_970_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = ((size_t)1ULL);
v___x_970_ = lean_usize_add(v_i_960_, v___x_969_);
v_i_960_ = v___x_970_;
v_b_962_ = v_a_968_;
goto _start;
}
else
{
return v___x_967_;
}
}
else
{
lean_object* v___x_972_; 
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v_b_962_);
return v___x_972_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object* v_as_973_, lean_object* v_i_974_, lean_object* v_stop_975_, lean_object* v_b_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
size_t v_i_boxed_979_; size_t v_stop_boxed_980_; lean_object* v_res_981_; 
v_i_boxed_979_ = lean_unbox_usize(v_i_974_);
lean_dec(v_i_974_);
v_stop_boxed_980_ = lean_unbox_usize(v_stop_975_);
lean_dec(v_stop_975_);
v_res_981_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_973_, v_i_boxed_979_, v_stop_boxed_980_, v_b_976_, v___y_977_);
lean_dec(v___y_977_);
lean_dec_ref(v_as_973_);
return v_res_981_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object* v_as_982_, size_t v_i_983_, size_t v_stop_984_){
_start:
{
uint8_t v___x_985_; 
v___x_985_ = lean_usize_dec_eq(v_i_983_, v_stop_984_);
if (v___x_985_ == 0)
{
uint8_t v___x_986_; lean_object* v___y_988_; lean_object* v___x_992_; 
v___x_986_ = 1;
v___x_992_ = lean_array_uget_borrowed(v_as_982_, v_i_983_);
switch(lean_obj_tag(v___x_992_))
{
case 0:
{
lean_object* v_code_993_; 
v_code_993_ = lean_ctor_get(v___x_992_, 2);
v___y_988_ = v_code_993_;
goto v___jp_987_;
}
case 1:
{
lean_object* v_code_994_; 
v_code_994_ = lean_ctor_get(v___x_992_, 1);
v___y_988_ = v_code_994_;
goto v___jp_987_;
}
default: 
{
lean_object* v_code_995_; 
v_code_995_ = lean_ctor_get(v___x_992_, 0);
v___y_988_ = v_code_995_;
goto v___jp_987_;
}
}
v___jp_987_:
{
if (lean_obj_tag(v___y_988_) == 6)
{
size_t v___x_989_; size_t v___x_990_; 
v___x_989_ = ((size_t)1ULL);
v___x_990_ = lean_usize_add(v_i_983_, v___x_989_);
v_i_983_ = v___x_990_;
goto _start;
}
else
{
return v___x_986_;
}
}
}
else
{
uint8_t v___x_996_; 
v___x_996_ = 0;
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object* v_as_997_, lean_object* v_i_998_, lean_object* v_stop_999_){
_start:
{
size_t v_i_boxed_1000_; size_t v_stop_boxed_1001_; uint8_t v_res_1002_; lean_object* v_r_1003_; 
v_i_boxed_1000_ = lean_unbox_usize(v_i_998_);
lean_dec(v_i_998_);
v_stop_boxed_1001_ = lean_unbox_usize(v_stop_999_);
lean_dec(v_stop_999_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v_as_997_, v_i_boxed_1000_, v_stop_boxed_1001_);
lean_dec_ref(v_as_997_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t v_pu_1004_, uint8_t v_t_1005_, lean_object* v_i_1006_, lean_object* v_as_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = lean_array_get_size(v_as_1007_);
v___x_1012_ = lean_nat_dec_lt(v_i_1006_, v___x_1011_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; 
lean_dec(v_i_1006_);
v___x_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_as_1007_);
return v___x_1013_;
}
else
{
lean_object* v_a_1014_; lean_object* v_type_1015_; lean_object* v___x_1016_; lean_object* v_subst_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v_a_1014_ = lean_array_fget_borrowed(v_as_1007_, v_i_1006_);
v_type_1015_ = lean_ctor_get(v_a_1014_, 2);
v___x_1016_ = lean_st_ref_get(v___y_1008_);
v_subst_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc_ref(v_subst_1017_);
lean_dec(v___x_1016_);
lean_inc_ref(v_type_1015_);
v___x_1018_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1004_, v_subst_1017_, v_t_1005_, v_type_1015_);
lean_dec_ref(v_subst_1017_);
lean_inc(v_a_1014_);
v___x_1019_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_1004_, v_a_1014_, v___x_1018_, v___y_1009_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; size_t v___x_1021_; size_t v___x_1022_; uint8_t v___x_1023_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = lean_ptr_addr(v_a_1014_);
v___x_1022_ = lean_ptr_addr(v_a_1020_);
v___x_1023_ = lean_usize_dec_eq(v___x_1021_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = lean_unsigned_to_nat(1u);
v___x_1025_ = lean_nat_add(v_i_1006_, v___x_1024_);
v___x_1026_ = lean_array_fset(v_as_1007_, v_i_1006_, v_a_1020_);
lean_dec(v_i_1006_);
v_i_1006_ = v___x_1025_;
v_as_1007_ = v___x_1026_;
goto _start;
}
else
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
lean_dec(v_a_1020_);
v___x_1028_ = lean_unsigned_to_nat(1u);
v___x_1029_ = lean_nat_add(v_i_1006_, v___x_1028_);
lean_dec(v_i_1006_);
v_i_1006_ = v___x_1029_;
goto _start;
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec_ref(v_as_1007_);
lean_dec(v_i_1006_);
v_a_1031_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_1019_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1019_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object* v_pu_1039_, lean_object* v_t_1040_, lean_object* v_i_1041_, lean_object* v_as_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
uint8_t v_pu_boxed_1046_; uint8_t v_t_boxed_1047_; lean_object* v_res_1048_; 
v_pu_boxed_1046_ = lean_unbox(v_pu_1039_);
v_t_boxed_1047_ = lean_unbox(v_t_1040_);
v_res_1048_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_boxed_1046_, v_t_boxed_1047_, v_i_1041_, v_as_1042_, v___y_1043_, v___y_1044_);
lean_dec(v___y_1044_);
lean_dec(v___y_1043_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t v_pu_1049_, uint8_t v_t_1050_, lean_object* v_ps_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_1049_, v_t_1050_, v___x_1060_, v_ps_1051_, v___y_1053_, v___y_1056_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object* v_pu_1062_, lean_object* v_t_1063_, lean_object* v_ps_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
uint8_t v_pu_boxed_1073_; uint8_t v_t_boxed_1074_; lean_object* v_res_1075_; 
v_pu_boxed_1073_ = lean_unbox(v_pu_1062_);
v_t_boxed_1074_ = lean_unbox(v_t_1063_);
v_res_1075_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v_pu_boxed_1073_, v_t_boxed_1074_, v_ps_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t v_pu_1076_, uint8_t v_t_1077_, lean_object* v_decl_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_type_1082_; lean_object* v_value_1083_; lean_object* v___x_1084_; lean_object* v_subst_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v_subst_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_type_1082_ = lean_ctor_get(v_decl_1078_, 2);
v_value_1083_ = lean_ctor_get(v_decl_1078_, 3);
v___x_1084_ = lean_st_ref_get(v___y_1079_);
v_subst_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc_ref(v_subst_1085_);
lean_dec(v___x_1084_);
lean_inc_ref(v_type_1082_);
v___x_1086_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1076_, v_subst_1085_, v_t_1077_, v_type_1082_);
lean_dec_ref(v_subst_1085_);
v___x_1087_ = lean_st_ref_get(v___y_1079_);
v_subst_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc_ref(v_subst_1088_);
lean_dec(v___x_1087_);
lean_inc(v_value_1083_);
v___x_1089_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_1076_, v_subst_1088_, v_value_1083_, v_t_1077_);
lean_dec_ref(v_subst_1088_);
v___x_1090_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_1076_, v_decl_1078_, v___x_1086_, v___x_1089_, v___y_1080_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object* v_pu_1091_, lean_object* v_t_1092_, lean_object* v_decl_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
uint8_t v_pu_boxed_1097_; uint8_t v_t_boxed_1098_; lean_object* v_res_1099_; 
v_pu_boxed_1097_ = lean_unbox(v_pu_1091_);
v_t_boxed_1098_ = lean_unbox(v_t_1092_);
v_res_1099_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_boxed_1097_, v_t_boxed_1098_, v_decl_1093_, v___y_1094_, v___y_1095_);
lean_dec(v___y_1095_);
lean_dec(v___y_1094_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object* v___y_1100_, lean_object* v___f_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v_fvarId_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; 
lean_inc(v_fvarId_1104_);
v___x_1110_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_1104_, v___y_1100_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v___x_1111_; 
lean_dec_ref_known(v___x_1110_, 1);
lean_inc(v___y_1108_);
lean_inc_ref(v___y_1107_);
lean_inc(v___y_1106_);
lean_inc_ref(v___y_1105_);
lean_inc_ref(v___y_1103_);
lean_inc(v___y_1100_);
lean_inc_ref(v___y_1102_);
v___x_1111_ = lean_apply_9(v___f_1101_, v_fvarId_1104_, v___y_1102_, v___y_1100_, v___y_1103_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, lean_box(0));
return v___x_1111_;
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec(v_fvarId_1104_);
lean_dec_ref(v___f_1101_);
v_a_1112_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1110_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1110_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object* v___y_1120_, lean_object* v___f_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v_fvarId_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(v___y_1120_, v___f_1121_, v___y_1122_, v___y_1123_, v_fvarId_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec_ref(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1120_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object* v_x_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_){
_start:
{
lean_object* v_ks_1135_; lean_object* v_vs_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1160_; 
v_ks_1135_ = lean_ctor_get(v_x_1131_, 0);
v_vs_1136_ = lean_ctor_get(v_x_1131_, 1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_x_1131_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1138_ = v_x_1131_;
v_isShared_1139_ = v_isSharedCheck_1160_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_vs_1136_);
lean_inc(v_ks_1135_);
lean_dec(v_x_1131_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1160_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1140_ = lean_array_get_size(v_ks_1135_);
v___x_1141_ = lean_nat_dec_lt(v_x_1132_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
lean_dec(v_x_1132_);
v___x_1142_ = lean_array_push(v_ks_1135_, v_x_1133_);
v___x_1143_ = lean_array_push(v_vs_1136_, v_x_1134_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v___x_1143_);
lean_ctor_set(v___x_1138_, 0, v___x_1142_);
v___x_1145_ = v___x_1138_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
else
{
lean_object* v_k_x27_1147_; uint8_t v___x_1148_; 
v_k_x27_1147_ = lean_array_fget_borrowed(v_ks_1135_, v_x_1132_);
v___x_1148_ = lean_name_eq(v_x_1133_, v_k_x27_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1150_; 
if (v_isShared_1139_ == 0)
{
v___x_1150_ = v___x_1138_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_ks_1135_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_vs_1136_);
v___x_1150_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = lean_unsigned_to_nat(1u);
v___x_1152_ = lean_nat_add(v_x_1132_, v___x_1151_);
lean_dec(v_x_1132_);
v_x_1131_ = v___x_1150_;
v_x_1132_ = v___x_1152_;
goto _start;
}
}
else
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = lean_array_fset(v_ks_1135_, v_x_1132_, v_x_1133_);
v___x_1156_ = lean_array_fset(v_vs_1136_, v_x_1132_, v_x_1134_);
lean_dec(v_x_1132_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v___x_1156_);
lean_ctor_set(v___x_1138_, 0, v___x_1155_);
v___x_1158_ = v___x_1138_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object* v_n_1161_, lean_object* v_k_1162_, lean_object* v_v_1163_){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = lean_unsigned_to_nat(0u);
v___x_1165_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_n_1161_, v___x_1164_, v_k_1162_, v_v_1163_);
return v___x_1165_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = lean_box(0);
v___x_1167_ = l_unsafeCast___redArg(v___x_1166_);
return v___x_1167_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object* v_x_1169_, size_t v_x_1170_, size_t v_x_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_){
_start:
{
if (lean_obj_tag(v_x_1169_) == 0)
{
lean_object* v_es_1174_; size_t v___x_1175_; size_t v___x_1176_; lean_object* v_j_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v_es_1174_ = lean_ctor_get(v_x_1169_, 0);
v___x_1175_ = ((size_t)31ULL);
v___x_1176_ = lean_usize_land(v_x_1170_, v___x_1175_);
v_j_1177_ = lean_usize_to_nat(v___x_1176_);
v___x_1178_ = lean_array_get_size(v_es_1174_);
v___x_1179_ = lean_nat_dec_lt(v_j_1177_, v___x_1178_);
if (v___x_1179_ == 0)
{
lean_dec(v_j_1177_);
lean_dec(v_x_1173_);
lean_dec(v_x_1172_);
return v_x_1169_;
}
else
{
lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1218_; 
lean_inc_ref(v_es_1174_);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_x_1169_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v_x_1169_, 0);
lean_dec(v_unused_1219_);
v___x_1181_ = v_x_1169_;
v_isShared_1182_ = v_isSharedCheck_1218_;
goto v_resetjp_1180_;
}
else
{
lean_dec(v_x_1169_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1218_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v_v_1183_; lean_object* v___x_1184_; lean_object* v_xs_x27_1185_; lean_object* v___y_1187_; 
v_v_1183_ = lean_array_fget(v_es_1174_, v_j_1177_);
v___x_1184_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0);
v_xs_x27_1185_ = lean_array_fset(v_es_1174_, v_j_1177_, v___x_1184_);
switch(lean_obj_tag(v_v_1183_))
{
case 0:
{
lean_object* v_key_1192_; lean_object* v_val_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1203_; 
v_key_1192_ = lean_ctor_get(v_v_1183_, 0);
v_val_1193_ = lean_ctor_get(v_v_1183_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_v_1183_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1195_ = v_v_1183_;
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_val_1193_);
lean_inc(v_key_1192_);
lean_dec(v_v_1183_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
uint8_t v___x_1197_; 
v___x_1197_ = lean_name_eq(v_x_1172_, v_key_1192_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_del_object(v___x_1195_);
v___x_1198_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1192_, v_val_1193_, v_x_1172_, v_x_1173_);
v___x_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
v___y_1187_ = v___x_1199_;
goto v___jp_1186_;
}
else
{
lean_object* v___x_1201_; 
lean_dec(v_val_1193_);
lean_dec(v_key_1192_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v_x_1173_);
lean_ctor_set(v___x_1195_, 0, v_x_1172_);
v___x_1201_ = v___x_1195_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_x_1172_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_x_1173_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
v___y_1187_ = v___x_1201_;
goto v___jp_1186_;
}
}
}
}
case 1:
{
lean_object* v_node_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1216_; 
v_node_1204_ = lean_ctor_get(v_v_1183_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_v_1183_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1206_ = v_v_1183_;
v_isShared_1207_ = v_isSharedCheck_1216_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_node_1204_);
lean_dec(v_v_1183_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1216_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
size_t v___x_1208_; size_t v___x_1209_; size_t v___x_1210_; size_t v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1208_ = ((size_t)5ULL);
v___x_1209_ = lean_usize_shift_right(v_x_1170_, v___x_1208_);
v___x_1210_ = ((size_t)1ULL);
v___x_1211_ = lean_usize_add(v_x_1171_, v___x_1210_);
v___x_1212_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_node_1204_, v___x_1209_, v___x_1211_, v_x_1172_, v_x_1173_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1212_);
v___x_1214_ = v___x_1206_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
v___y_1187_ = v___x_1214_;
goto v___jp_1186_;
}
}
}
default: 
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v_x_1172_);
lean_ctor_set(v___x_1217_, 1, v_x_1173_);
v___y_1187_ = v___x_1217_;
goto v___jp_1186_;
}
}
v___jp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1188_ = lean_array_fset(v_xs_x27_1185_, v_j_1177_, v___y_1187_);
lean_dec(v_j_1177_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1188_);
v___x_1190_ = v___x_1181_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
else
{
lean_object* v_ks_1220_; lean_object* v_vs_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1239_; 
v_ks_1220_ = lean_ctor_get(v_x_1169_, 0);
v_vs_1221_ = lean_ctor_get(v_x_1169_, 1);
v_isSharedCheck_1239_ = !lean_is_exclusive(v_x_1169_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1223_ = v_x_1169_;
v_isShared_1224_ = v_isSharedCheck_1239_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_vs_1221_);
lean_inc(v_ks_1220_);
lean_dec(v_x_1169_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1239_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_ks_1220_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_vs_1221_);
v___x_1226_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v_newNode_1227_; size_t v___x_1228_; uint8_t v___x_1229_; 
v_newNode_1227_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v___x_1226_, v_x_1172_, v_x_1173_);
v___x_1228_ = ((size_t)7ULL);
v___x_1229_ = lean_usize_dec_le(v___x_1228_, v_x_1171_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1230_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1227_);
v___x_1231_ = lean_unsigned_to_nat(4u);
v___x_1232_ = lean_nat_dec_lt(v___x_1230_, v___x_1231_);
lean_dec(v___x_1230_);
if (v___x_1232_ == 0)
{
lean_object* v_ks_1233_; lean_object* v_vs_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_ks_1233_ = lean_ctor_get(v_newNode_1227_, 0);
lean_inc_ref(v_ks_1233_);
v_vs_1234_ = lean_ctor_get(v_newNode_1227_, 1);
lean_inc_ref(v_vs_1234_);
lean_dec_ref(v_newNode_1227_);
v___x_1235_ = lean_unsigned_to_nat(0u);
v___x_1236_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1);
v___x_1237_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_x_1171_, v_ks_1233_, v_vs_1234_, v___x_1235_, v___x_1236_);
lean_dec_ref(v_vs_1234_);
lean_dec_ref(v_ks_1233_);
return v___x_1237_;
}
else
{
return v_newNode_1227_;
}
}
else
{
return v_newNode_1227_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t v_depth_1240_, lean_object* v_keys_1241_, lean_object* v_vals_1242_, lean_object* v_i_1243_, lean_object* v_entries_1244_){
_start:
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = lean_array_get_size(v_keys_1241_);
v___x_1246_ = lean_nat_dec_lt(v_i_1243_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_dec(v_i_1243_);
return v_entries_1244_;
}
else
{
lean_object* v_k_1247_; lean_object* v_v_1248_; uint64_t v___y_1250_; lean_object* v___x_1261_; 
v_k_1247_ = lean_array_fget_borrowed(v_keys_1241_, v_i_1243_);
v_v_1248_ = lean_array_fget_borrowed(v_vals_1242_, v_i_1243_);
v___x_1261_ = l_unsafeCast___redArg(v_k_1247_);
if (lean_obj_tag(v___x_1261_) == 0)
{
uint64_t v___x_1262_; 
v___x_1262_ = 1723ULL;
v___y_1250_ = v___x_1262_;
goto v___jp_1249_;
}
else
{
uint64_t v_hash_1263_; 
v_hash_1263_ = lean_ctor_get_uint64(v___x_1261_, sizeof(void*)*2);
lean_dec(v___x_1261_);
v___y_1250_ = v_hash_1263_;
goto v___jp_1249_;
}
v___jp_1249_:
{
size_t v_h_1251_; size_t v___x_1252_; lean_object* v___x_1253_; size_t v___x_1254_; size_t v___x_1255_; size_t v___x_1256_; size_t v_h_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v_h_1251_ = lean_uint64_to_usize(v___y_1250_);
v___x_1252_ = ((size_t)5ULL);
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = ((size_t)1ULL);
v___x_1255_ = lean_usize_sub(v_depth_1240_, v___x_1254_);
v___x_1256_ = lean_usize_mul(v___x_1252_, v___x_1255_);
v_h_1257_ = lean_usize_shift_right(v_h_1251_, v___x_1256_);
v___x_1258_ = lean_nat_add(v_i_1243_, v___x_1253_);
lean_dec(v_i_1243_);
lean_inc(v_v_1248_);
lean_inc(v_k_1247_);
v___x_1259_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_entries_1244_, v_h_1257_, v_depth_1240_, v_k_1247_, v_v_1248_);
v_i_1243_ = v___x_1258_;
v_entries_1244_ = v___x_1259_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_depth_1264_, lean_object* v_keys_1265_, lean_object* v_vals_1266_, lean_object* v_i_1267_, lean_object* v_entries_1268_){
_start:
{
size_t v_depth_boxed_1269_; lean_object* v_res_1270_; 
v_depth_boxed_1269_ = lean_unbox_usize(v_depth_1264_);
lean_dec(v_depth_1264_);
v_res_1270_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_boxed_1269_, v_keys_1265_, v_vals_1266_, v_i_1267_, v_entries_1268_);
lean_dec_ref(v_vals_1266_);
lean_dec_ref(v_keys_1265_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
size_t v_x_43450__boxed_1276_; size_t v_x_43451__boxed_1277_; lean_object* v_res_1278_; 
v_x_43450__boxed_1276_ = lean_unbox_usize(v_x_1272_);
lean_dec(v_x_1272_);
v_x_43451__boxed_1277_ = lean_unbox_usize(v_x_1273_);
lean_dec(v_x_1273_);
v_res_1278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1271_, v_x_43450__boxed_1276_, v_x_43451__boxed_1277_, v_x_1274_, v_x_1275_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object* v_x_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_){
_start:
{
uint64_t v___y_1283_; lean_object* v___x_1287_; 
v___x_1287_ = l_unsafeCast___redArg(v_x_1280_);
if (lean_obj_tag(v___x_1287_) == 0)
{
uint64_t v___x_1288_; 
v___x_1288_ = 1723ULL;
v___y_1283_ = v___x_1288_;
goto v___jp_1282_;
}
else
{
uint64_t v_hash_1289_; 
v_hash_1289_ = lean_ctor_get_uint64(v___x_1287_, sizeof(void*)*2);
lean_dec(v___x_1287_);
v___y_1283_ = v_hash_1289_;
goto v___jp_1282_;
}
v___jp_1282_:
{
size_t v___x_1284_; size_t v___x_1285_; lean_object* v___x_1286_; 
v___x_1284_ = lean_uint64_to_usize(v___y_1283_);
v___x_1285_ = ((size_t)1ULL);
v___x_1286_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1279_, v___x_1284_, v___x_1285_, v_x_1280_, v_x_1281_);
return v___x_1286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object* v_a_1290_, lean_object* v_b_1291_){
_start:
{
lean_object* v_array_1292_; lean_object* v_start_1293_; lean_object* v_stop_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1307_; 
v_array_1292_ = lean_ctor_get(v_a_1290_, 0);
v_start_1293_ = lean_ctor_get(v_a_1290_, 1);
v_stop_1294_ = lean_ctor_get(v_a_1290_, 2);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_a_1290_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1296_ = v_a_1290_;
v_isShared_1297_ = v_isSharedCheck_1307_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_stop_1294_);
lean_inc(v_start_1293_);
lean_inc(v_array_1292_);
lean_dec(v_a_1290_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1307_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
uint8_t v___x_1298_; 
v___x_1298_ = lean_nat_dec_lt(v_start_1293_, v_stop_1294_);
if (v___x_1298_ == 0)
{
lean_del_object(v___x_1296_);
lean_dec(v_stop_1294_);
lean_dec(v_start_1293_);
lean_dec_ref(v_array_1292_);
return v_b_1291_;
}
else
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1299_ = lean_unsigned_to_nat(1u);
v___x_1300_ = lean_nat_add(v_start_1293_, v___x_1299_);
lean_inc_ref(v_array_1292_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 1, v___x_1300_);
v___x_1302_ = v___x_1296_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_array_1292_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v___x_1300_);
lean_ctor_set(v_reuseFailAlloc_1306_, 2, v_stop_1294_);
v___x_1302_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = lean_array_fget(v_array_1292_, v_start_1293_);
lean_dec(v_start_1293_);
lean_dec_ref(v_array_1292_);
v___x_1304_ = lean_array_push(v_b_1291_, v___x_1303_);
v_a_1290_ = v___x_1302_;
v_b_1291_ = v___x_1304_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object* v_as_1308_, size_t v_sz_1309_, size_t v_i_1310_, lean_object* v_b_1311_, lean_object* v___y_1312_){
_start:
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_usize_dec_lt(v_i_1310_, v_sz_1309_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_b_1311_);
return v___x_1315_;
}
else
{
lean_object* v_array_1316_; lean_object* v_start_1317_; lean_object* v_stop_1318_; uint8_t v___x_1319_; 
v_array_1316_ = lean_ctor_get(v_b_1311_, 0);
v_start_1317_ = lean_ctor_get(v_b_1311_, 1);
v_stop_1318_ = lean_ctor_get(v_b_1311_, 2);
v___x_1319_ = lean_nat_dec_lt(v_start_1317_, v_stop_1318_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_b_1311_);
return v___x_1320_;
}
else
{
lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1353_; 
lean_inc(v_stop_1318_);
lean_inc(v_start_1317_);
lean_inc_ref(v_array_1316_);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_b_1311_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; lean_object* v_unused_1355_; lean_object* v_unused_1356_; 
v_unused_1354_ = lean_ctor_get(v_b_1311_, 2);
lean_dec(v_unused_1354_);
v_unused_1355_ = lean_ctor_get(v_b_1311_, 1);
lean_dec(v_unused_1355_);
v_unused_1356_ = lean_ctor_get(v_b_1311_, 0);
lean_dec(v_unused_1356_);
v___x_1322_ = v_b_1311_;
v_isShared_1323_ = v_isSharedCheck_1353_;
goto v_resetjp_1321_;
}
else
{
lean_dec(v_b_1311_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1353_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v_a_1324_; lean_object* v_fvarId_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1330_; 
v_a_1324_ = lean_array_uget_borrowed(v_as_1308_, v_i_1310_);
v_fvarId_1325_ = lean_ctor_get(v_a_1324_, 0);
v___x_1326_ = lean_array_fget(v_array_1316_, v_start_1317_);
v___x_1327_ = lean_unsigned_to_nat(1u);
v___x_1328_ = lean_nat_add(v_start_1317_, v___x_1327_);
lean_dec(v_start_1317_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 1, v___x_1328_);
v___x_1330_ = v___x_1322_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_array_1316_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v___x_1328_);
lean_ctor_set(v_reuseFailAlloc_1352_, 2, v_stop_1318_);
v___x_1330_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1331_; lean_object* v_subst_1332_; lean_object* v_used_1333_; lean_object* v_binderRenaming_1334_; lean_object* v_funDeclInfoMap_1335_; uint8_t v_simplified_1336_; lean_object* v_visited_1337_; lean_object* v_inline_1338_; lean_object* v_inlineLocal_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1351_; 
v___x_1331_ = lean_st_ref_take(v___y_1312_);
v_subst_1332_ = lean_ctor_get(v___x_1331_, 0);
v_used_1333_ = lean_ctor_get(v___x_1331_, 1);
v_binderRenaming_1334_ = lean_ctor_get(v___x_1331_, 2);
v_funDeclInfoMap_1335_ = lean_ctor_get(v___x_1331_, 3);
v_simplified_1336_ = lean_ctor_get_uint8(v___x_1331_, sizeof(void*)*7);
v_visited_1337_ = lean_ctor_get(v___x_1331_, 4);
v_inline_1338_ = lean_ctor_get(v___x_1331_, 5);
v_inlineLocal_1339_ = lean_ctor_get(v___x_1331_, 6);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1341_ = v___x_1331_;
v_isShared_1342_ = v_isSharedCheck_1351_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_inlineLocal_1339_);
lean_inc(v_inline_1338_);
lean_inc(v_visited_1337_);
lean_inc(v_funDeclInfoMap_1335_);
lean_inc(v_binderRenaming_1334_);
lean_inc(v_used_1333_);
lean_inc(v_subst_1332_);
lean_dec(v___x_1331_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1351_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
lean_inc(v_fvarId_1325_);
v___x_1343_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_1332_, v_fvarId_1325_, v___x_1326_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 0, v___x_1343_);
v___x_1345_ = v___x_1341_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v_used_1333_);
lean_ctor_set(v_reuseFailAlloc_1350_, 2, v_binderRenaming_1334_);
lean_ctor_set(v_reuseFailAlloc_1350_, 3, v_funDeclInfoMap_1335_);
lean_ctor_set(v_reuseFailAlloc_1350_, 4, v_visited_1337_);
lean_ctor_set(v_reuseFailAlloc_1350_, 5, v_inline_1338_);
lean_ctor_set(v_reuseFailAlloc_1350_, 6, v_inlineLocal_1339_);
lean_ctor_set_uint8(v_reuseFailAlloc_1350_, sizeof(void*)*7, v_simplified_1336_);
v___x_1345_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1346_; size_t v___x_1347_; size_t v___x_1348_; 
v___x_1346_ = lean_st_ref_put(v___y_1312_, v___x_1345_);
v___x_1347_ = ((size_t)1ULL);
v___x_1348_ = lean_usize_add(v_i_1310_, v___x_1347_);
v_i_1310_ = v___x_1348_;
v_b_1311_ = v___x_1330_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object* v_as_1357_, lean_object* v_sz_1358_, lean_object* v_i_1359_, lean_object* v_b_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
size_t v_sz_boxed_1363_; size_t v_i_boxed_1364_; lean_object* v_res_1365_; 
v_sz_boxed_1363_ = lean_unbox_usize(v_sz_1358_);
lean_dec(v_sz_1358_);
v_i_boxed_1364_ = lean_unbox_usize(v_i_1359_);
lean_dec(v_i_1359_);
v_res_1365_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_1357_, v_sz_boxed_1363_, v_i_boxed_1364_, v_b_1360_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v_as_1357_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object* v_as_1366_, size_t v_i_1367_, size_t v_stop_1368_, lean_object* v_b_1369_, lean_object* v___y_1370_){
_start:
{
uint8_t v___x_1372_; 
v___x_1372_ = lean_usize_dec_eq(v_i_1367_, v_stop_1368_);
if (v___x_1372_ == 0)
{
uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = 0;
v___x_1374_ = lean_array_uget_borrowed(v_as_1366_, v_i_1367_);
v___x_1375_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1373_, v___x_1374_, v___y_1370_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; size_t v___x_1377_; size_t v___x_1378_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
lean_inc(v_a_1376_);
lean_dec_ref_known(v___x_1375_, 1);
v___x_1377_ = ((size_t)1ULL);
v___x_1378_ = lean_usize_add(v_i_1367_, v___x_1377_);
v_i_1367_ = v___x_1378_;
v_b_1369_ = v_a_1376_;
goto _start;
}
else
{
return v___x_1375_;
}
}
else
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_b_1369_);
return v___x_1380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object* v_as_1381_, lean_object* v_i_1382_, lean_object* v_stop_1383_, lean_object* v_b_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
size_t v_i_boxed_1387_; size_t v_stop_boxed_1388_; lean_object* v_res_1389_; 
v_i_boxed_1387_ = lean_unbox_usize(v_i_1382_);
lean_dec(v_i_1382_);
v_stop_boxed_1388_ = lean_unbox_usize(v_stop_1383_);
lean_dec(v_stop_1383_);
v_res_1389_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_1381_, v_i_boxed_1387_, v_stop_boxed_1388_, v_b_1384_, v___y_1385_);
lean_dec(v___y_1385_);
lean_dec_ref(v_as_1381_);
return v_res_1389_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object* v_msg_1391_){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0);
v___x_1393_ = lean_panic_fn_borrowed(v___x_1392_, v_msg_1391_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object* v_as_1394_, size_t v_i_1395_, size_t v_stop_1396_, lean_object* v___y_1397_){
_start:
{
uint8_t v___x_1399_; 
v___x_1399_ = lean_usize_dec_eq(v_i_1395_, v_stop_1396_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; lean_object* v_type_1401_; uint8_t v___x_1402_; lean_object* v___x_1403_; 
v___x_1400_ = lean_array_uget_borrowed(v_as_1394_, v_i_1395_);
v_type_1401_ = lean_ctor_get(v___x_1400_, 2);
v___x_1402_ = 1;
v___x_1403_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(v_type_1401_, v___y_1397_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1416_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1406_ = v___x_1403_;
v_isShared_1407_ = v_isSharedCheck_1416_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1403_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1416_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
uint8_t v___x_1408_; 
v___x_1408_ = lean_unbox(v_a_1404_);
lean_dec(v_a_1404_);
if (v___x_1408_ == 0)
{
size_t v___x_1409_; size_t v___x_1410_; 
lean_del_object(v___x_1406_);
v___x_1409_ = ((size_t)1ULL);
v___x_1410_ = lean_usize_add(v_i_1395_, v___x_1409_);
v_i_1395_ = v___x_1410_;
goto _start;
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1414_; 
v___x_1412_ = lean_box(v___x_1402_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1412_);
v___x_1414_ = v___x_1406_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
else
{
return v___x_1403_;
}
}
else
{
uint8_t v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1417_ = 0;
v___x_1418_ = lean_box(v___x_1417_);
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object* v_as_1420_, lean_object* v_i_1421_, lean_object* v_stop_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
size_t v_i_boxed_1425_; size_t v_stop_boxed_1426_; lean_object* v_res_1427_; 
v_i_boxed_1425_ = lean_unbox_usize(v_i_1421_);
lean_dec(v_i_1421_);
v_stop_boxed_1426_ = lean_unbox_usize(v_stop_1422_);
lean_dec(v_stop_1422_);
v_res_1427_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_1420_, v_i_boxed_1425_, v_stop_boxed_1426_, v___y_1423_);
lean_dec(v___y_1423_);
lean_dec_ref(v_as_1420_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(lean_object* v_as_1428_, size_t v_i_1429_, size_t v_stop_1430_, lean_object* v_b_1431_, lean_object* v___y_1432_){
_start:
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_usize_dec_eq(v_i_1429_, v_stop_1430_);
if (v___x_1434_ == 0)
{
uint8_t v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = 0;
v___x_1436_ = lean_array_uget_borrowed(v_as_1428_, v_i_1429_);
v___x_1437_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1435_, v___x_1436_, v___y_1432_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; size_t v___x_1439_; size_t v___x_1440_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_add(v_i_1429_, v___x_1439_);
v_i_1429_ = v___x_1440_;
v_b_1431_ = v_a_1438_;
goto _start;
}
else
{
return v___x_1437_;
}
}
else
{
lean_object* v___x_1442_; 
v___x_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1442_, 0, v_b_1431_);
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg___boxed(lean_object* v_as_1443_, lean_object* v_i_1444_, lean_object* v_stop_1445_, lean_object* v_b_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
size_t v_i_boxed_1449_; size_t v_stop_boxed_1450_; lean_object* v_res_1451_; 
v_i_boxed_1449_ = lean_unbox_usize(v_i_1444_);
lean_dec(v_i_1444_);
v_stop_boxed_1450_ = lean_unbox_usize(v_stop_1445_);
lean_dec(v_stop_1445_);
v_res_1451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v_as_1443_, v_i_boxed_1449_, v_stop_boxed_1450_, v_b_1446_, v___y_1447_);
lean_dec(v___y_1447_);
lean_dec_ref(v_as_1443_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object* v_as_1452_, size_t v_i_1453_, size_t v_stop_1454_, lean_object* v_b_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_a_1462_; lean_object* v___y_1467_; uint8_t v___x_1469_; 
v___x_1469_ = lean_usize_dec_eq(v_i_1453_, v_stop_1454_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = lean_array_uget_borrowed(v_as_1452_, v_i_1453_);
v___x_1472_ = l_Lean_Compiler_LCNF_Alt_getParams(v___x_1471_);
v___x_1473_ = lean_array_get_size(v___x_1472_);
v___x_1474_ = lean_box(0);
v___x_1475_ = lean_nat_dec_lt(v___x_1470_, v___x_1473_);
if (v___x_1475_ == 0)
{
lean_dec_ref(v___x_1472_);
v_a_1462_ = v___x_1474_;
goto v___jp_1461_;
}
else
{
uint8_t v___x_1476_; 
v___x_1476_ = lean_nat_dec_le(v___x_1473_, v___x_1473_);
if (v___x_1476_ == 0)
{
if (v___x_1475_ == 0)
{
lean_dec_ref(v___x_1472_);
v_a_1462_ = v___x_1474_;
goto v___jp_1461_;
}
else
{
size_t v___x_1477_; size_t v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = ((size_t)0ULL);
v___x_1478_ = lean_usize_of_nat(v___x_1473_);
v___x_1479_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v___x_1472_, v___x_1477_, v___x_1478_, v___x_1474_, v___y_1457_);
lean_dec_ref(v___x_1472_);
v___y_1467_ = v___x_1479_;
goto v___jp_1466_;
}
}
else
{
size_t v___x_1480_; size_t v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = ((size_t)0ULL);
v___x_1481_ = lean_usize_of_nat(v___x_1473_);
v___x_1482_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v___x_1472_, v___x_1480_, v___x_1481_, v___x_1474_, v___y_1457_);
lean_dec_ref(v___x_1472_);
v___y_1467_ = v___x_1482_;
goto v___jp_1466_;
}
}
}
else
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v_b_1455_);
return v___x_1483_;
}
v___jp_1461_:
{
size_t v___x_1463_; size_t v___x_1464_; 
v___x_1463_ = ((size_t)1ULL);
v___x_1464_ = lean_usize_add(v_i_1453_, v___x_1463_);
v_i_1453_ = v___x_1464_;
v_b_1455_ = v_a_1462_;
goto _start;
}
v___jp_1466_:
{
if (lean_obj_tag(v___y_1467_) == 0)
{
lean_object* v_a_1468_; 
v_a_1468_ = lean_ctor_get(v___y_1467_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v___y_1467_, 1);
v_a_1462_ = v_a_1468_;
goto v___jp_1461_;
}
else
{
return v___y_1467_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object* v_as_1484_, lean_object* v_i_1485_, lean_object* v_stop_1486_, lean_object* v_b_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
size_t v_i_boxed_1493_; size_t v_stop_boxed_1494_; lean_object* v_res_1495_; 
v_i_boxed_1493_ = lean_unbox_usize(v_i_1485_);
lean_dec(v_i_1485_);
v_stop_boxed_1494_ = lean_unbox_usize(v_stop_1486_);
lean_dec(v_stop_1486_);
v_res_1495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_1484_, v_i_boxed_1493_, v_stop_boxed_1494_, v_b_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec_ref(v_as_1484_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object* v_as_1496_, size_t v_i_1497_, size_t v_stop_1498_, lean_object* v___y_1499_){
_start:
{
uint8_t v___x_1501_; 
v___x_1501_ = lean_usize_dec_eq(v_i_1497_, v_stop_1498_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; lean_object* v_fvarId_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; 
v___x_1502_ = lean_array_uget_borrowed(v_as_1496_, v_i_1497_);
v_fvarId_1503_ = lean_ctor_get(v___x_1502_, 0);
v___x_1504_ = 1;
v___x_1505_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_1503_, v___y_1499_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1518_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1508_ = v___x_1505_;
v_isShared_1509_ = v_isSharedCheck_1518_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1505_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1518_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
uint8_t v___x_1510_; 
v___x_1510_ = lean_unbox(v_a_1506_);
lean_dec(v_a_1506_);
if (v___x_1510_ == 0)
{
size_t v___x_1511_; size_t v___x_1512_; 
lean_del_object(v___x_1508_);
v___x_1511_ = ((size_t)1ULL);
v___x_1512_ = lean_usize_add(v_i_1497_, v___x_1511_);
v_i_1497_ = v___x_1512_;
goto _start;
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1516_; 
v___x_1514_ = lean_box(v___x_1504_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 0, v___x_1514_);
v___x_1516_ = v___x_1508_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v___x_1514_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
else
{
return v___x_1505_;
}
}
else
{
uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1519_ = 0;
v___x_1520_ = lean_box(v___x_1519_);
v___x_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
return v___x_1521_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object* v_as_1522_, lean_object* v_i_1523_, lean_object* v_stop_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
size_t v_i_boxed_1527_; size_t v_stop_boxed_1528_; lean_object* v_res_1529_; 
v_i_boxed_1527_ = lean_unbox_usize(v_i_1523_);
lean_dec(v_i_1523_);
v_stop_boxed_1528_ = lean_unbox_usize(v_stop_1524_);
lean_dec(v_stop_1524_);
v_res_1529_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_1522_, v_i_boxed_1527_, v_stop_boxed_1528_, v___y_1525_);
lean_dec(v___y_1525_);
lean_dec_ref(v_as_1522_);
return v_res_1529_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1533_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__2));
v___x_1534_ = lean_unsigned_to_nat(9u);
v___x_1535_ = lean_unsigned_to_nat(650u);
v___x_1536_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__1));
v___x_1537_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__0));
v___x_1538_ = l_mkPanicMessageWithDecl(v___x_1537_, v___x_1536_, v___x_1535_, v___x_1534_, v___x_1533_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object* v___x_1542_, lean_object* v___x_1543_, lean_object* v_fvarId_1544_, lean_object* v_k_1545_, lean_object* v_args_1546_, uint8_t v___x_1547_, lean_object* v___x_1548_, lean_object* v_result_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_lower_1559_; lean_object* v_upper_1560_; uint8_t v___x_1587_; 
v___x_1587_ = lean_nat_dec_lt(v___x_1542_, v___x_1543_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; 
lean_dec(v___x_1548_);
lean_dec_ref(v_args_1546_);
lean_dec(v___x_1543_);
lean_dec(v___x_1542_);
v___x_1588_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1544_, v_result_1549_, v___y_1551_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; 
lean_dec_ref_known(v___x_1588_, 1);
lean_inc_ref(v___y_1555_);
v___x_1589_ = l_Lean_Compiler_LCNF_Simp_simp(v_k_1545_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
return v___x_1589_;
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec_ref(v_k_1545_);
v_a_1590_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1588_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1588_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
else
{
uint8_t v___x_1598_; 
v___x_1598_ = lean_nat_dec_le(v___x_1542_, v___x_1548_);
if (v___x_1598_ == 0)
{
lean_dec(v___x_1548_);
v_lower_1559_ = v___x_1542_;
v_upper_1560_ = v___x_1543_;
goto v___jp_1558_;
}
else
{
lean_dec(v___x_1542_);
v_lower_1559_ = v___x_1548_;
v_upper_1560_ = v___x_1543_;
goto v___jp_1558_;
}
}
v___jp_1558_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1561_ = l_Array_toSubarray___redArg(v_args_1546_, v_lower_1559_, v_upper_1560_);
v___x_1562_ = l_Subarray_copy___redArg(v___x_1561_);
v___x_1563_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1563_, 0, v_result_1549_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_1565_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1547_, v___x_1563_, v___x_1564_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v_fvarId_1567_; lean_object* v___x_1568_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v_fvarId_1567_ = lean_ctor_get(v_a_1566_, 0);
lean_inc(v_fvarId_1567_);
v___x_1568_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1544_, v_fvarId_1567_, v___y_1551_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_dec_ref_known(v___x_1568_, 1);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_a_1566_);
lean_ctor_set(v___x_1569_, 1, v_k_1545_);
lean_inc_ref(v___y_1555_);
v___x_1570_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1569_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
return v___x_1570_;
}
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
lean_dec(v_a_1566_);
lean_dec_ref(v_k_1545_);
v_a_1571_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1568_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1568_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
else
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1586_; 
lean_dec_ref(v_k_1545_);
lean_dec(v_fvarId_1544_);
v_a_1579_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1581_ = v___x_1565_;
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1565_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1584_; 
if (v_isShared_1582_ == 0)
{
v___x_1584_ = v___x_1581_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1579_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object* v___x_1599_, lean_object* v___x_1600_, lean_object* v_fvarId_1601_, lean_object* v_k_1602_, lean_object* v_args_1603_, lean_object* v___x_1604_, lean_object* v___x_1605_, lean_object* v_result_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
uint8_t v___x_43975__boxed_1615_; lean_object* v_res_1616_; 
v___x_43975__boxed_1615_ = lean_unbox(v___x_1604_);
v_res_1616_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(v___x_1599_, v___x_1600_, v_fvarId_1601_, v_k_1602_, v_args_1603_, v___x_43975__boxed_1615_, v___x_1605_, v_result_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object* v_letDecl_1617_, lean_object* v_k_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v_fvarId_1627_; lean_object* v_value_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1966_; 
v_fvarId_1627_ = lean_ctor_get(v_letDecl_1617_, 0);
v_value_1628_ = lean_ctor_get(v_letDecl_1617_, 3);
v_isSharedCheck_1966_ = !lean_is_exclusive(v_letDecl_1617_);
if (v_isSharedCheck_1966_ == 0)
{
lean_object* v_unused_1967_; lean_object* v_unused_1968_; 
v_unused_1967_ = lean_ctor_get(v_letDecl_1617_, 2);
lean_dec(v_unused_1967_);
v_unused_1968_ = lean_ctor_get(v_letDecl_1617_, 1);
lean_dec(v_unused_1968_);
v___x_1630_ = v_letDecl_1617_;
v_isShared_1631_ = v_isSharedCheck_1966_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_value_1628_);
lean_inc(v_fvarId_1627_);
lean_dec(v_letDecl_1617_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1966_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; 
lean_inc(v_value_1628_);
v___x_1632_ = l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(v_value_1628_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1957_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1635_ = v___x_1632_;
v_isShared_1636_ = v_isSharedCheck_1957_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1632_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1957_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
if (lean_obj_tag(v_a_1633_) == 1)
{
lean_object* v_val_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1952_; 
lean_del_object(v___x_1635_);
v_val_1637_ = lean_ctor_get(v_a_1633_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_a_1633_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1639_ = v_a_1633_;
v_isShared_1640_ = v_isSharedCheck_1952_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_val_1637_);
lean_dec(v_a_1633_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1952_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v_params_1641_; lean_object* v_value_1642_; lean_object* v_fType_1643_; lean_object* v_args_1644_; uint8_t v_recursive_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; uint8_t v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v___y_1836_; lean_object* v___y_1837_; 
v_params_1641_ = lean_ctor_get(v_val_1637_, 0);
v_value_1642_ = lean_ctor_get(v_val_1637_, 1);
v_fType_1643_ = lean_ctor_get(v_val_1637_, 2);
v_args_1644_ = lean_ctor_get(v_val_1637_, 3);
v_recursive_1645_ = lean_ctor_get_uint8(v_val_1637_, sizeof(void*)*4 + 2);
v___x_1646_ = lean_array_get_size(v_args_1644_);
v___x_1647_ = l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(v_val_1637_);
v___x_1648_ = lean_nat_dec_lt(v___x_1646_, v___x_1647_);
if (lean_obj_tag(v_value_1628_) == 3)
{
lean_object* v_declName_1932_; lean_object* v___x_1933_; 
v_declName_1932_ = lean_ctor_get(v_value_1628_, 0);
lean_inc_n(v_declName_1932_, 2);
lean_dec_ref_known(v_value_1628_, 3);
v___x_1933_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1645_, v_declName_1932_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v_declName_1935_; lean_object* v_config_1936_; lean_object* v_inlineStack_1937_; lean_object* v_inlineStackOccs_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1933_, 1);
v_declName_1935_ = lean_ctor_get(v_a_1619_, 0);
v_config_1936_ = lean_ctor_get(v_a_1619_, 1);
v_inlineStack_1937_ = lean_ctor_get(v_a_1619_, 2);
v_inlineStackOccs_1938_ = lean_ctor_get(v_a_1619_, 3);
lean_inc(v_inlineStack_1937_);
lean_inc(v_declName_1932_);
v___x_1939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1939_, 0, v_declName_1932_);
lean_ctor_set(v___x_1939_, 1, v_inlineStack_1937_);
lean_inc_ref(v_inlineStackOccs_1938_);
v___x_1940_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_inlineStackOccs_1938_, v_declName_1932_, v_a_1934_);
lean_inc_ref(v_config_1936_);
lean_inc(v_declName_1935_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 3, v___x_1940_);
lean_ctor_set(v___x_1630_, 2, v___x_1939_);
lean_ctor_set(v___x_1630_, 1, v_config_1936_);
lean_ctor_set(v___x_1630_, 0, v_declName_1935_);
v___x_1942_ = v___x_1630_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_declName_1935_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_config_1936_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v___x_1939_);
lean_ctor_set(v_reuseFailAlloc_1943_, 3, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
v___y_1831_ = v___x_1942_;
v___y_1832_ = v_a_1620_;
v___y_1833_ = v_a_1621_;
v___y_1834_ = v_a_1622_;
v___y_1835_ = v_a_1623_;
v___y_1836_ = v_a_1624_;
v___y_1837_ = v_a_1625_;
goto v___jp_1830_;
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec(v_declName_1932_);
lean_dec(v___x_1647_);
lean_del_object(v___x_1639_);
lean_dec(v_val_1637_);
lean_del_object(v___x_1630_);
lean_dec(v_fvarId_1627_);
lean_dec_ref(v_k_1618_);
v_a_1944_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1933_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1933_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_del_object(v___x_1630_);
lean_dec(v_value_1628_);
lean_inc_ref(v_a_1619_);
v___y_1831_ = v_a_1619_;
v___y_1832_ = v_a_1620_;
v___y_1833_ = v_a_1621_;
v___y_1834_ = v_a_1622_;
v___y_1835_ = v_a_1623_;
v___y_1836_ = v_a_1624_;
v___y_1837_ = v_a_1625_;
goto v___jp_1830_;
}
v___jp_1649_:
{
lean_object* v___x_1663_; 
lean_inc_ref(v___y_1650_);
v___x_1663_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_1651_, v___y_1655_, v___y_1654_, v___y_1660_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1665_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1654_);
if (lean_obj_tag(v___x_1665_) == 0)
{
uint8_t v___x_1666_; 
lean_dec_ref_known(v___x_1665_, 1);
v___x_1666_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_a_1664_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
lean_dec_ref(v___y_1662_);
v___x_1667_ = lean_mk_empty_array_with_capacity(v___y_1652_);
lean_dec(v___y_1652_);
lean_inc_ref(v___x_1667_);
v___x_1668_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v___y_1656_, v___x_1667_);
v___x_1669_ = l_Lean_Compiler_LCNF_inferAppType(v___y_1657_, v_fType_1643_, v___x_1668_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
lean_dec_ref(v___x_1668_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1671_; uint8_t v___x_1672_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc_n(v_a_1670_, 2);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = l_Lean_Expr_headBeta(v_a_1670_);
v___x_1672_ = l_Lean_Expr_isForall(v___x_1671_);
lean_dec_ref(v___x_1671_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; 
lean_dec_ref(v___x_1667_);
v___x_1673_ = l_Lean_Compiler_LCNF_mkAuxParam(v___y_1657_, v_a_1670_, v___x_1648_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v_fvarId_1675_; lean_object* v___x_1676_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
v_fvarId_1675_ = lean_ctor_get(v_a_1674_, 0);
lean_inc(v___y_1659_);
lean_inc_ref(v___y_1650_);
lean_inc(v___y_1658_);
lean_inc_ref(v___y_1661_);
lean_inc_ref(v___y_1660_);
lean_inc(v___y_1654_);
lean_inc(v_fvarId_1675_);
v___x_1676_ = lean_apply_9(v___y_1653_, v_fvarId_1675_, v___y_1655_, v___y_1654_, v___y_1660_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_, lean_box(0));
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1678_ = lean_unsigned_to_nat(1u);
v___x_1679_ = lean_mk_empty_array_with_capacity(v___x_1678_);
v___x_1680_ = lean_array_push(v___x_1679_, v_a_1674_);
v___x_1681_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1));
v___x_1682_ = l_Lean_Compiler_LCNF_mkAuxJpDecl(v___y_1657_, v___x_1680_, v_a_1677_, v___x_1681_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___f_1684_; lean_object* v___x_1685_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc_n(v_a_1683_, 2);
lean_dec_ref_known(v___x_1682_, 1);
v___f_1684_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1684_, 0, v_a_1683_);
lean_closure_set(v___f_1684_, 1, v___x_1678_);
v___x_1685_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___y_1657_, v_a_1664_, v___f_1684_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1697_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1697_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1697_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1690_; lean_object* v___x_1692_; 
v___x_1690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1690_, 0, v_a_1683_);
lean_ctor_set(v___x_1690_, 1, v_a_1686_);
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v___x_1690_);
v___x_1692_ = v___x_1639_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1690_);
v___x_1692_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
lean_object* v___x_1694_; 
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1692_);
v___x_1694_ = v___x_1688_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
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
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
lean_dec(v_a_1683_);
lean_del_object(v___x_1639_);
v_a_1698_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1685_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1685_);
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
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec(v_a_1664_);
lean_del_object(v___x_1639_);
v_a_1706_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1682_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1682_);
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
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_a_1674_);
lean_dec(v_a_1664_);
lean_del_object(v___x_1639_);
v_a_1714_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1676_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1676_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_a_1664_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_del_object(v___x_1639_);
v_a_1722_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1673_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1673_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
else
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_dec(v_a_1670_);
v___x_1730_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_1731_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v___x_1667_, v_a_1664_, v___x_1730_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1733_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1733_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_1732_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v_fvarId_1735_; lean_object* v___x_1736_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_a_1734_);
lean_dec_ref_known(v___x_1733_, 1);
v_fvarId_1735_ = lean_ctor_get(v_a_1734_, 0);
lean_inc(v___y_1659_);
lean_inc_ref(v___y_1650_);
lean_inc(v___y_1658_);
lean_inc_ref(v___y_1661_);
lean_inc_ref(v___y_1660_);
lean_inc(v___y_1654_);
lean_inc_ref(v___y_1655_);
lean_inc(v_fvarId_1735_);
v___x_1736_ = lean_apply_9(v___y_1653_, v_fvarId_1735_, v___y_1655_, v___y_1654_, v___y_1660_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_, lean_box(0));
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_a_1737_);
lean_dec_ref_known(v___x_1736_, 1);
v___x_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1738_, 0, v_a_1734_);
v___x_1739_ = lean_unsigned_to_nat(1u);
v___x_1740_ = lean_mk_empty_array_with_capacity(v___x_1739_);
v___x_1741_ = lean_array_push(v___x_1740_, v___x_1738_);
v___x_1742_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v___x_1741_, v_a_1737_, v___y_1655_, v___y_1654_, v___y_1660_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___x_1741_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1753_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1753_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1753_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v_a_1743_);
v___x_1748_ = v___x_1639_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1750_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1748_);
v___x_1750_ = v___x_1745_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_del_object(v___x_1639_);
v_a_1754_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1742_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1742_);
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
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
lean_dec(v_a_1734_);
lean_dec_ref(v___y_1655_);
lean_del_object(v___x_1639_);
v_a_1762_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1736_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1736_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_del_object(v___x_1639_);
v_a_1770_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1733_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1733_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_del_object(v___x_1639_);
v_a_1778_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1731_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1731_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
lean_dec_ref(v___x_1667_);
lean_dec(v_a_1664_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_del_object(v___x_1639_);
v_a_1786_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1669_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1669_);
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
lean_object* v___x_1794_; 
lean_dec_ref(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v_fType_1643_);
v___x_1794_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___y_1657_, v_a_1664_, v___y_1662_, v___y_1661_, v___y_1658_, v___y_1650_, v___y_1659_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1805_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v_a_1795_);
v___x_1800_ = v___x_1639_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v___x_1802_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1800_);
v___x_1802_ = v___x_1797_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1800_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_del_object(v___x_1639_);
v_a_1806_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1794_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1794_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
lean_dec(v_a_1664_);
lean_dec_ref(v___y_1662_);
lean_dec_ref(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v_fType_1643_);
lean_del_object(v___x_1639_);
v_a_1814_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v___x_1665_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1665_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
lean_dec_ref(v___y_1662_);
lean_dec_ref(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v_fType_1643_);
lean_del_object(v___x_1639_);
v_a_1822_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1663_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1663_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
v___jp_1830_:
{
if (v___x_1648_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
lean_inc_ref_n(v_args_1644_, 2);
lean_inc_ref(v_fType_1643_);
lean_inc_ref(v_value_1642_);
lean_inc_ref(v_params_1641_);
lean_dec(v_val_1637_);
v___x_1838_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_1647_);
v___x_1839_ = l_Array_toSubarray___redArg(v_args_1644_, v___x_1838_, v___x_1647_);
lean_inc_ref(v___x_1839_);
v___x_1840_ = l_Subarray_copy___redArg(v___x_1839_);
v___x_1841_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_1641_, v_value_1642_, v___x_1840_, v___x_1648_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
lean_dec_ref(v_params_1641_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___f_1845_; lean_object* v___f_1846_; uint8_t v___x_1847_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
v___x_1843_ = 0;
v___x_1844_ = lean_box(v___x_1843_);
lean_inc_ref(v_k_1618_);
lean_inc(v_fvarId_1627_);
lean_inc(v___x_1647_);
v___f_1845_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed), 16, 7);
lean_closure_set(v___f_1845_, 0, v___x_1647_);
lean_closure_set(v___f_1845_, 1, v___x_1646_);
lean_closure_set(v___f_1845_, 2, v_fvarId_1627_);
lean_closure_set(v___f_1845_, 3, v_k_1618_);
lean_closure_set(v___f_1845_, 4, v_args_1644_);
lean_closure_set(v___f_1845_, 5, v___x_1844_);
lean_closure_set(v___f_1845_, 6, v___x_1838_);
lean_inc_ref(v___y_1833_);
lean_inc_ref(v___y_1831_);
lean_inc_ref(v___f_1845_);
lean_inc(v___y_1832_);
v___f_1846_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed), 10, 4);
lean_closure_set(v___f_1846_, 0, v___y_1832_);
lean_closure_set(v___f_1846_, 1, v___f_1845_);
lean_closure_set(v___f_1846_, 2, v___y_1831_);
lean_closure_set(v___f_1846_, 3, v___y_1833_);
v___x_1847_ = l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(v_k_1618_, v_fvarId_1627_);
lean_dec(v_fvarId_1627_);
lean_dec_ref(v_k_1618_);
if (v___x_1847_ == 0)
{
lean_dec(v___x_1647_);
v___y_1650_ = v___y_1836_;
v___y_1651_ = v_a_1842_;
v___y_1652_ = v___x_1838_;
v___y_1653_ = v___f_1845_;
v___y_1654_ = v___y_1832_;
v___y_1655_ = v___y_1831_;
v___y_1656_ = v___x_1839_;
v___y_1657_ = v___x_1843_;
v___y_1658_ = v___y_1835_;
v___y_1659_ = v___y_1837_;
v___y_1660_ = v___y_1833_;
v___y_1661_ = v___y_1834_;
v___y_1662_ = v___f_1846_;
goto v___jp_1649_;
}
else
{
uint8_t v___x_1848_; 
v___x_1848_ = lean_nat_dec_eq(v___x_1646_, v___x_1647_);
lean_dec(v___x_1647_);
if (v___x_1848_ == 0)
{
v___y_1650_ = v___y_1836_;
v___y_1651_ = v_a_1842_;
v___y_1652_ = v___x_1838_;
v___y_1653_ = v___f_1845_;
v___y_1654_ = v___y_1832_;
v___y_1655_ = v___y_1831_;
v___y_1656_ = v___x_1839_;
v___y_1657_ = v___x_1843_;
v___y_1658_ = v___y_1835_;
v___y_1659_ = v___y_1837_;
v___y_1660_ = v___y_1833_;
v___y_1661_ = v___y_1834_;
v___y_1662_ = v___f_1846_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1849_; 
lean_dec_ref(v___f_1846_);
lean_dec_ref(v___f_1845_);
lean_dec_ref(v___x_1839_);
lean_dec_ref(v_fType_1643_);
lean_del_object(v___x_1639_);
v___x_1849_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1832_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v___x_1850_; 
lean_dec_ref_known(v___x_1849_, 1);
lean_inc_ref(v___y_1836_);
v___x_1850_ = l_Lean_Compiler_LCNF_Simp_simp(v_a_1842_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
lean_dec_ref(v___y_1831_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1859_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v___x_1857_; 
v___x_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1855_, 0, v_a_1851_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1855_);
v___x_1857_ = v___x_1853_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
v_a_1860_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1850_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1850_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_a_1842_);
lean_dec_ref(v___y_1831_);
v_a_1868_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1849_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1849_);
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
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
lean_dec_ref(v___x_1839_);
lean_dec_ref(v___y_1831_);
lean_dec(v___x_1647_);
lean_dec_ref(v_args_1644_);
lean_dec_ref(v_fType_1643_);
lean_del_object(v___x_1639_);
lean_dec(v_fvarId_1627_);
lean_dec_ref(v_k_1618_);
v_a_1876_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1841_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1841_);
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
lean_object* v___x_1884_; 
lean_dec(v___x_1647_);
lean_del_object(v___x_1639_);
v___x_1884_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_val_1637_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v_fvarId_1886_; lean_object* v___x_1887_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v_fvarId_1886_ = lean_ctor_get(v_a_1885_, 0);
lean_inc(v_fvarId_1886_);
v___x_1887_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1627_, v_fvarId_1886_, v___y_1832_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v___x_1888_; 
lean_dec_ref_known(v___x_1887_, 1);
v___x_1888_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1832_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec_ref_known(v___x_1888_, 1);
v___x_1889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1889_, 0, v_a_1885_);
lean_ctor_set(v___x_1889_, 1, v_k_1618_);
lean_inc_ref(v___y_1836_);
v___x_1890_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1889_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
lean_dec_ref(v___y_1831_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1899_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1899_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1899_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1895_, 0, v_a_1891_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v___x_1895_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
v_a_1900_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1890_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1890_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_a_1885_);
lean_dec_ref(v___y_1831_);
lean_dec_ref(v_k_1618_);
v_a_1908_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1888_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1888_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec(v_a_1885_);
lean_dec_ref(v___y_1831_);
lean_dec_ref(v_k_1618_);
v_a_1916_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1887_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1887_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec_ref(v___y_1831_);
lean_dec(v_fvarId_1627_);
lean_dec_ref(v_k_1618_);
v_a_1924_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1884_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1884_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1953_; lean_object* v___x_1955_; 
lean_dec(v_a_1633_);
lean_del_object(v___x_1630_);
lean_dec(v_value_1628_);
lean_dec(v_fvarId_1627_);
lean_dec_ref(v_k_1618_);
v___x_1953_ = lean_box(0);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 0, v___x_1953_);
v___x_1955_ = v___x_1635_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_del_object(v___x_1630_);
lean_dec(v_value_1628_);
lean_dec(v_fvarId_1627_);
lean_dec_ref(v_k_1618_);
v_a_1958_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1632_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1632_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0(void){
_start:
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object* v_cases_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_typeName_1982_; lean_object* v_discr_1983_; uint8_t v___x_1984_; uint8_t v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v_subst_1988_; lean_object* v___x_1989_; 
v_typeName_1982_ = lean_ctor_get(v_cases_1970_, 0);
v_discr_1983_ = lean_ctor_get(v_cases_1970_, 2);
v___x_1984_ = 0;
v___x_1985_ = 0;
v___x_1986_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0, &l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0);
v___x_1987_ = lean_st_ref_get(v_a_1972_);
v_subst_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc_ref(v_subst_1988_);
lean_dec(v___x_1987_);
lean_inc(v_discr_1983_);
v___x_1989_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_1988_, v_discr_1983_, v___x_1985_);
lean_dec_ref(v_subst_1988_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_fvarId_1990_; lean_object* v___x_1991_; 
v_fvarId_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_fvarId_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(v_fvarId_1990_, v_a_1973_, v_a_1975_, v_a_1977_);
lean_dec(v_fvarId_1990_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2220_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_1994_ = v___x_1991_;
v_isShared_1995_ = v_isSharedCheck_2220_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2220_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
if (lean_obj_tag(v_a_1992_) == 1)
{
lean_object* v_val_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2215_; 
v_val_1996_ = lean_ctor_get(v_a_1992_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_a_1992_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_1998_ = v_a_1992_;
v_isShared_1999_ = v_isSharedCheck_2215_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_val_1996_);
lean_dec(v_a_1992_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2215_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; lean_object* v_env_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2000_ = lean_st_ref_get(v_a_1977_);
v_env_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc_ref(v_env_2001_);
lean_dec(v___x_2000_);
v___x_2002_ = l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(v_val_1996_);
lean_inc(v___x_2002_);
v___x_2003_ = l_Lean_Environment_find_x3f(v_env_2001_, v___x_2002_, v___x_1985_);
if (lean_obj_tag(v___x_2003_) == 1)
{
lean_object* v_val_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2214_; 
v_val_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2214_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_val_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2214_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
if (lean_obj_tag(v_val_2004_) == 6)
{
lean_object* v_val_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2213_; 
v_val_2008_ = lean_ctor_get(v_val_2004_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_val_2004_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2010_ = v_val_2004_;
v_isShared_2011_ = v_isSharedCheck_2213_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_val_2008_);
lean_dec(v_val_2004_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2213_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v_induct_2012_; uint8_t v___x_2013_; 
v_induct_2012_ = lean_ctor_get(v_val_2008_, 1);
lean_inc(v_induct_2012_);
lean_dec_ref(v_val_2008_);
v___x_2013_ = lean_name_eq(v_typeName_1982_, v_induct_2012_);
lean_dec(v_induct_2012_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2016_; 
lean_del_object(v___x_2010_);
lean_del_object(v___x_2006_);
lean_dec(v___x_2002_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec_ref(v_cases_1970_);
v___x_2014_ = lean_box(0);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2014_);
v___x_2016_ = v___x_1994_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
else
{
lean_object* v___x_2018_; lean_object* v_fst_2019_; lean_object* v_snd_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2212_; 
lean_del_object(v___x_1994_);
v___x_2018_ = l_Lean_Compiler_LCNF_Cases_extractAlt_x21(v___x_1984_, v_cases_1970_, v___x_2002_);
v_fst_2019_ = lean_ctor_get(v___x_2018_, 0);
v_snd_2020_ = lean_ctor_get(v___x_2018_, 1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2022_ = v___x_2018_;
v_isShared_2023_ = v_isSharedCheck_2212_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_snd_2020_);
lean_inc(v_fst_2019_);
lean_dec(v___x_2018_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2212_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set_tag(v___x_2010_, 4);
lean_ctor_set(v___x_2010_, 0, v_snd_2020_);
v___x_2025_ = v___x_2010_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_snd_2020_);
v___x_2025_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; 
v___x_2026_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_1984_, v___x_2025_, v_a_1975_);
lean_dec_ref(v___x_2025_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v___x_2027_; 
lean_dec_ref_known(v___x_2026_, 1);
v___x_2027_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_1972_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_dec_ref_known(v___x_2027_, 1);
if (lean_obj_tag(v_fst_2019_) == 0)
{
if (lean_obj_tag(v_val_1996_) == 0)
{
lean_object* v_params_2028_; lean_object* v_code_2029_; lean_object* v_val_2030_; lean_object* v_args_2031_; lean_object* v_lower_2033_; lean_object* v_upper_2034_; lean_object* v_numParams_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; uint8_t v___x_2080_; 
lean_del_object(v___x_2022_);
lean_del_object(v___x_1998_);
v_params_2028_ = lean_ctor_get(v_fst_2019_, 1);
lean_inc_ref(v_params_2028_);
v_code_2029_ = lean_ctor_get(v_fst_2019_, 2);
lean_inc_ref(v_code_2029_);
lean_dec_ref_known(v_fst_2019_, 3);
v_val_2030_ = lean_ctor_get(v_val_1996_, 0);
lean_inc_ref(v_val_2030_);
v_args_2031_ = lean_ctor_get(v_val_1996_, 1);
lean_inc_ref(v_args_2031_);
lean_dec_ref_known(v_val_1996_, 2);
v_numParams_2077_ = lean_ctor_get(v_val_2030_, 3);
lean_inc(v_numParams_2077_);
lean_dec_ref(v_val_2030_);
v___x_2078_ = lean_unsigned_to_nat(0u);
v___x_2079_ = lean_array_get_size(v_args_2031_);
v___x_2080_ = lean_nat_dec_le(v_numParams_2077_, v___x_2078_);
if (v___x_2080_ == 0)
{
v_lower_2033_ = v_numParams_2077_;
v_upper_2034_ = v___x_2079_;
goto v___jp_2032_;
}
else
{
lean_dec(v_numParams_2077_);
v_lower_2033_ = v___x_2078_;
v_upper_2034_ = v___x_2079_;
goto v___jp_2032_;
}
v___jp_2032_:
{
lean_object* v___x_2035_; size_t v_sz_2036_; size_t v___x_2037_; lean_object* v___x_2038_; 
v___x_2035_ = l_Array_toSubarray___redArg(v_args_2031_, v_lower_2033_, v_upper_2034_);
v_sz_2036_ = lean_array_size(v_params_2028_);
v___x_2037_ = ((size_t)0ULL);
v___x_2038_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_params_2028_, v_sz_2036_, v___x_2037_, v___x_2035_, v_a_1972_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v___x_2039_; 
lean_dec_ref_known(v___x_2038_, 1);
lean_inc_ref(v_a_1976_);
v___x_2039_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2029_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2041_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1984_, v_params_2028_, v_a_1975_);
lean_dec_ref(v_params_2028_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2051_; 
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2051_ == 0)
{
lean_object* v_unused_2052_; 
v_unused_2052_ = lean_ctor_get(v___x_2041_, 0);
lean_dec(v_unused_2052_);
v___x_2043_ = v___x_2041_;
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
else
{
lean_dec(v___x_2041_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v_a_2040_);
v___x_2046_ = v___x_2006_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2040_);
v___x_2046_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
lean_object* v___x_2048_; 
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 0, v___x_2046_);
v___x_2048_ = v___x_2043_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2046_);
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
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
lean_dec(v_a_2040_);
lean_del_object(v___x_2006_);
v_a_2053_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_2041_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2041_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
lean_dec_ref(v_params_2028_);
lean_del_object(v___x_2006_);
v_a_2061_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2039_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2039_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec_ref(v_code_2029_);
lean_dec_ref(v_params_2028_);
lean_del_object(v___x_2006_);
v_a_2069_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2038_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2038_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
}
else
{
lean_object* v_params_2081_; lean_object* v_code_2082_; lean_object* v_n_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2173_; 
v_params_2081_ = lean_ctor_get(v_fst_2019_, 1);
lean_inc_ref(v_params_2081_);
v_code_2082_ = lean_ctor_get(v_fst_2019_, 2);
lean_inc_ref(v_code_2082_);
lean_dec_ref_known(v_fst_2019_, 3);
v_n_2083_ = lean_ctor_get(v_val_1996_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v_val_1996_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2085_ = v_val_1996_;
v_isShared_2086_ = v_isSharedCheck_2173_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_n_2083_);
lean_dec(v_val_1996_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2173_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v_zero_2087_; uint8_t v_isZero_2088_; 
v_zero_2087_ = lean_unsigned_to_nat(0u);
v_isZero_2088_ = lean_nat_dec_eq(v_n_2083_, v_zero_2087_);
if (v_isZero_2088_ == 1)
{
lean_object* v___x_2089_; 
lean_del_object(v___x_2085_);
lean_dec(v_n_2083_);
lean_dec_ref(v_params_2081_);
lean_del_object(v___x_2022_);
lean_del_object(v___x_1998_);
lean_inc_ref(v_a_1976_);
v___x_2089_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2082_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2100_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2092_ = v___x_2089_;
v_isShared_2093_ = v_isSharedCheck_2100_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2089_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2100_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v_a_2090_);
v___x_2095_ = v___x_2006_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2090_);
v___x_2095_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
lean_object* v___x_2097_; 
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 0, v___x_2095_);
v___x_2097_ = v___x_2092_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_del_object(v___x_2006_);
v_a_2101_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2089_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2089_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
else
{
lean_object* v_one_2109_; lean_object* v_n_2110_; lean_object* v___x_2112_; 
v_one_2109_ = lean_unsigned_to_nat(1u);
v_n_2110_ = lean_nat_sub(v_n_2083_, v_one_2109_);
lean_dec(v_n_2083_);
if (v_isShared_2086_ == 0)
{
lean_ctor_set_tag(v___x_2085_, 0);
lean_ctor_set(v___x_2085_, 0, v_n_2110_);
v___x_2112_ = v___x_2085_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_n_2110_);
v___x_2112_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2114_; 
if (v_isShared_1999_ == 0)
{
lean_ctor_set_tag(v___x_1998_, 0);
lean_ctor_set(v___x_1998_, 0, v___x_2112_);
v___x_2114_ = v___x_1998_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2115_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_2116_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1984_, v___x_2114_, v___x_2115_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2118_; lean_object* v_fvarId_2119_; lean_object* v_fvarId_2120_; lean_object* v___x_2121_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = lean_array_get_borrowed(v___x_1986_, v_params_2081_, v_zero_2087_);
v_fvarId_2119_ = lean_ctor_get(v___x_2118_, 0);
v_fvarId_2120_ = lean_ctor_get(v_a_2117_, 0);
lean_inc(v_fvarId_2120_);
lean_inc(v_fvarId_2119_);
v___x_2121_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2119_, v_fvarId_2120_, v_a_1972_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v___x_2122_; 
lean_dec_ref_known(v___x_2121_, 1);
lean_inc_ref(v_a_1976_);
v___x_2122_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2082_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2124_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
v___x_2124_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1984_, v_params_2081_, v_a_1975_);
lean_dec_ref(v_params_2081_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2137_; 
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2137_ == 0)
{
lean_object* v_unused_2138_; 
v_unused_2138_ = lean_ctor_get(v___x_2124_, 0);
lean_dec(v_unused_2138_);
v___x_2126_ = v___x_2124_;
v_isShared_2127_ = v_isSharedCheck_2137_;
goto v_resetjp_2125_;
}
else
{
lean_dec(v___x_2124_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2137_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 1, v_a_2123_);
lean_ctor_set(v___x_2022_, 0, v_a_2117_);
v___x_2129_ = v___x_2022_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2117_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_a_2123_);
v___x_2129_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
lean_object* v___x_2131_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v___x_2129_);
v___x_2131_ = v___x_2006_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; 
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v___x_2131_);
v___x_2133_ = v___x_2126_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
lean_dec(v_a_2123_);
lean_dec(v_a_2117_);
lean_del_object(v___x_2022_);
lean_del_object(v___x_2006_);
v_a_2139_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2124_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2124_);
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
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec(v_a_2117_);
lean_dec_ref(v_params_2081_);
lean_del_object(v___x_2022_);
lean_del_object(v___x_2006_);
v_a_2147_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2122_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2122_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
lean_dec(v_a_2117_);
lean_dec_ref(v_code_2082_);
lean_dec_ref(v_params_2081_);
lean_del_object(v___x_2022_);
lean_del_object(v___x_2006_);
v_a_2155_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v___x_2121_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2121_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
else
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2170_; 
lean_dec_ref(v_code_2082_);
lean_dec_ref(v_params_2081_);
lean_del_object(v___x_2022_);
lean_del_object(v___x_2006_);
v_a_2163_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2165_ = v___x_2116_;
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2116_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2166_ == 0)
{
v___x_2168_ = v___x_2165_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2163_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
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
lean_object* v_code_2174_; lean_object* v___x_2175_; 
lean_del_object(v___x_2022_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
v_code_2174_ = lean_ctor_get(v_fst_2019_, 0);
lean_inc_ref(v_code_2174_);
lean_dec_ref_known(v_fst_2019_, 1);
lean_inc_ref(v_a_1976_);
v___x_2175_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2174_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2186_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2186_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2186_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v_a_2176_);
v___x_2181_ = v___x_2006_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
lean_object* v___x_2183_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2181_);
v___x_2183_ = v___x_2178_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
lean_del_object(v___x_2006_);
v_a_2187_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2175_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2175_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
lean_del_object(v___x_2022_);
lean_dec(v_fst_2019_);
lean_del_object(v___x_2006_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
v_a_2195_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2027_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2027_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
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
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
lean_del_object(v___x_2022_);
lean_dec(v_fst_2019_);
lean_del_object(v___x_2006_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
v_a_2203_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2026_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2026_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
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
lean_del_object(v___x_2006_);
lean_dec(v_val_2004_);
lean_dec(v___x_2002_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_cases_1970_);
goto v___jp_1979_;
}
}
}
else
{
lean_dec(v___x_2003_);
lean_dec(v___x_2002_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_cases_1970_);
goto v___jp_1979_;
}
}
}
else
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
lean_dec(v_a_1992_);
lean_dec_ref(v_cases_1970_);
v___x_2216_ = lean_box(0);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2216_);
v___x_2218_ = v___x_1994_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec_ref(v_cases_1970_);
v_a_2221_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_1991_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_1991_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
else
{
lean_object* v___x_2229_; 
lean_dec_ref(v_cases_1970_);
v___x_2229_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_1984_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2238_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_a_2230_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2234_);
v___x_2236_ = v___x_2232_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
v_a_2239_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2229_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2229_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
v___jp_1979_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_box(0);
v___x_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object* v_fvarId_2247_, lean_object* v_i_2248_, lean_object* v_as_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; uint8_t v___x_2259_; 
v___x_2258_ = lean_array_get_size(v_as_2249_);
v___x_2259_ = lean_nat_dec_lt(v_i_2248_, v___x_2258_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; 
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v___x_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2260_, 0, v_as_2249_);
return v___x_2260_;
}
else
{
lean_object* v_a_2261_; lean_object* v_a_2263_; 
v_a_2261_ = lean_array_fget_borrowed(v_as_2249_, v_i_2248_);
if (lean_obj_tag(v_a_2261_) == 0)
{
lean_object* v_ctorName_2274_; lean_object* v_params_2275_; lean_object* v_code_2276_; uint8_t v___x_2299_; uint8_t v_a_2301_; lean_object* v___x_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; 
v_ctorName_2274_ = lean_ctor_get(v_a_2261_, 0);
v_params_2275_ = lean_ctor_get(v_a_2261_, 1);
v_code_2276_ = lean_ctor_get(v_a_2261_, 2);
v___x_2299_ = 0;
v___x_2332_ = lean_unsigned_to_nat(0u);
v___x_2333_ = lean_array_get_size(v_params_2275_);
v___x_2334_ = lean_nat_dec_lt(v___x_2332_, v___x_2333_);
if (v___x_2334_ == 0)
{
v_a_2301_ = v___x_2334_;
goto v___jp_2300_;
}
else
{
if (v___x_2334_ == 0)
{
v_a_2301_ = v___x_2334_;
goto v___jp_2300_;
}
else
{
size_t v___x_2335_; size_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2335_ = ((size_t)0ULL);
v___x_2336_ = lean_usize_of_nat(v___x_2333_);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_params_2275_, v___x_2335_, v___x_2336_, v___y_2256_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; uint8_t v___x_2339_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
lean_dec_ref_known(v___x_2337_, 1);
v___x_2339_ = lean_unbox(v_a_2338_);
lean_dec(v_a_2338_);
v_a_2301_ = v___x_2339_;
goto v___jp_2300_;
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2340_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2337_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2337_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
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
}
v___jp_2277_:
{
lean_object* v___x_2278_; 
lean_inc(v_ctorName_2274_);
lean_inc(v_fvarId_2247_);
v___x_2278_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_fvarId_2247_, v_ctorName_2274_, v_params_2275_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2280_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
lean_inc_ref(v___y_2255_);
lean_inc_ref(v_code_2276_);
v___x_2280_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2276_, v___y_2250_, v___y_2251_, v_a_2279_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v_a_2279_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2282_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v___x_2280_, 1);
lean_inc_ref(v_a_2261_);
v___x_2282_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2261_, v_a_2281_);
v_a_2263_ = v___x_2282_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2283_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2280_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2280_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2291_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2278_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2278_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
v___jp_2300_:
{
if (lean_obj_tag(v_code_2276_) == 6)
{
goto v___jp_2277_;
}
else
{
if (v_a_2301_ == 0)
{
goto v___jp_2277_;
}
else
{
lean_object* v___x_2302_; 
lean_inc_ref(v_code_2276_);
v___x_2302_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_2299_, v_code_2276_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v___x_2304_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref_known(v___x_2302_, 1);
v___x_2304_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_2299_, v_code_2276_, v___y_2254_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v___x_2305_; 
lean_dec_ref_known(v___x_2304_, 1);
v___x_2305_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2251_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v___x_2306_; lean_object* v___x_2307_; 
lean_dec_ref_known(v___x_2305_, 1);
v___x_2306_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_a_2303_);
lean_inc_ref(v_a_2261_);
v___x_2307_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2261_, v___x_2306_);
v_a_2263_ = v___x_2307_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v_a_2303_);
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2308_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2305_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2305_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_a_2303_);
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2316_ = lean_ctor_get(v___x_2304_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2304_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2304_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2304_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2324_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2302_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2302_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
}
}
else
{
lean_object* v_code_2348_; lean_object* v___x_2349_; 
v_code_2348_ = lean_ctor_get(v_a_2261_, 0);
lean_inc_ref(v___y_2255_);
lean_inc_ref(v_code_2348_);
v___x_2349_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2348_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v___x_2351_; 
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v___x_2349_, 1);
lean_inc_ref(v_a_2261_);
v___x_2351_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2261_, v_a_2350_);
v_a_2263_ = v___x_2351_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec_ref(v_as_2249_);
lean_dec(v_i_2248_);
lean_dec(v_fvarId_2247_);
v_a_2352_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2349_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2349_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
v___jp_2262_:
{
size_t v___x_2264_; size_t v___x_2265_; uint8_t v___x_2266_; 
v___x_2264_ = lean_ptr_addr(v_a_2261_);
v___x_2265_ = lean_ptr_addr(v_a_2263_);
v___x_2266_ = lean_usize_dec_eq(v___x_2264_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2267_ = lean_unsigned_to_nat(1u);
v___x_2268_ = lean_nat_add(v_i_2248_, v___x_2267_);
v___x_2269_ = lean_array_fset(v_as_2249_, v_i_2248_, v_a_2263_);
lean_dec(v_i_2248_);
v_i_2248_ = v___x_2268_;
v_as_2249_ = v___x_2269_;
goto _start;
}
else
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
lean_dec_ref(v_a_2263_);
v___x_2271_ = lean_unsigned_to_nat(1u);
v___x_2272_ = lean_nat_add(v_i_2248_, v___x_2271_);
lean_dec(v_i_2248_);
v_i_2248_ = v___x_2272_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object* v_code_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v___y_2371_; lean_object* v___y_2372_; uint8_t v___y_2435_; lean_object* v___y_2436_; lean_object* v_decl_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; uint8_t v___y_2486_; lean_object* v___y_2487_; lean_object* v_decl_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v_decl_2507_; lean_object* v_k_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2785_; uint8_t v___y_2786_; lean_object* v___y_2787_; lean_object* v_decl_2788_; lean_object* v_fvarId_2789_; lean_object* v_type_2790_; lean_object* v_value_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; uint8_t v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2880_; lean_object* v___y_2881_; uint8_t v___y_2882_; lean_object* v___y_2887_; lean_object* v___y_2888_; lean_object* v___y_2889_; lean_object* v___y_2890_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v_toCold_3284_; lean_object* v_currRecDepth_3285_; lean_object* v_ref_3286_; uint8_t v_diag_3287_; uint8_t v_suppressElabErrors_3288_; lean_object* v_maxRecDepth_3318_; lean_object* v___x_3319_; uint8_t v___x_3320_; 
v_toCold_3284_ = lean_ctor_get(v_a_2367_, 0);
v_currRecDepth_3285_ = lean_ctor_get(v_a_2367_, 1);
v_ref_3286_ = lean_ctor_get(v_a_2367_, 2);
v_diag_3287_ = lean_ctor_get_uint8(v_a_2367_, sizeof(void*)*3);
v_suppressElabErrors_3288_ = lean_ctor_get_uint8(v_a_2367_, sizeof(void*)*3 + 1);
v_maxRecDepth_3318_ = lean_ctor_get(v_toCold_3284_, 3);
v___x_3319_ = lean_unsigned_to_nat(0u);
v___x_3320_ = lean_nat_dec_eq(v_maxRecDepth_3318_, v___x_3319_);
if (v___x_3320_ == 0)
{
uint8_t v___x_3321_; 
v___x_3321_ = lean_nat_dec_eq(v_currRecDepth_3285_, v_maxRecDepth_3318_);
if (v___x_3321_ == 0)
{
lean_inc(v_ref_3286_);
lean_inc(v_currRecDepth_3285_);
lean_inc_ref(v_toCold_3284_);
lean_dec_ref(v_a_2367_);
goto v___jp_3289_;
}
else
{
lean_object* v___x_3322_; 
lean_dec_ref(v_code_2361_);
v___x_3322_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_box(0), v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_);
lean_dec_ref(v_a_2367_);
return v___x_3322_;
}
}
else
{
lean_inc(v_ref_3286_);
lean_inc(v_currRecDepth_3285_);
lean_inc_ref(v_toCold_3284_);
lean_dec_ref(v_a_2367_);
goto v___jp_3289_;
}
v___jp_2370_:
{
switch(lean_obj_tag(v_code_2361_))
{
case 1:
{
lean_object* v_decl_2373_; lean_object* v_k_2374_; size_t v___x_2375_; size_t v___x_2376_; uint8_t v___x_2377_; 
v_decl_2373_ = lean_ctor_get(v_code_2361_, 0);
v_k_2374_ = lean_ctor_get(v_code_2361_, 1);
v___x_2375_ = lean_ptr_addr(v_k_2374_);
v___x_2376_ = lean_ptr_addr(v___y_2372_);
v___x_2377_ = lean_usize_dec_eq(v___x_2375_, v___x_2376_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2385_; 
v_isSharedCheck_2385_ = !lean_is_exclusive(v_code_2361_);
if (v_isSharedCheck_2385_ == 0)
{
lean_object* v_unused_2386_; lean_object* v_unused_2387_; 
v_unused_2386_ = lean_ctor_get(v_code_2361_, 1);
lean_dec(v_unused_2386_);
v_unused_2387_ = lean_ctor_get(v_code_2361_, 0);
lean_dec(v_unused_2387_);
v___x_2379_ = v_code_2361_;
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
else
{
lean_dec(v_code_2361_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 1, v___y_2372_);
lean_ctor_set(v___x_2379_, 0, v___y_2371_);
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___y_2371_);
lean_ctor_set(v_reuseFailAlloc_2384_, 1, v___y_2372_);
v___x_2382_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2383_; 
v___x_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2382_);
return v___x_2383_;
}
}
}
else
{
size_t v___x_2388_; size_t v___x_2389_; uint8_t v___x_2390_; 
v___x_2388_ = lean_ptr_addr(v_decl_2373_);
v___x_2389_ = lean_ptr_addr(v___y_2371_);
v___x_2390_ = lean_usize_dec_eq(v___x_2388_, v___x_2389_);
if (v___x_2390_ == 0)
{
lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2398_; 
v_isSharedCheck_2398_ = !lean_is_exclusive(v_code_2361_);
if (v_isSharedCheck_2398_ == 0)
{
lean_object* v_unused_2399_; lean_object* v_unused_2400_; 
v_unused_2399_ = lean_ctor_get(v_code_2361_, 1);
lean_dec(v_unused_2399_);
v_unused_2400_ = lean_ctor_get(v_code_2361_, 0);
lean_dec(v_unused_2400_);
v___x_2392_ = v_code_2361_;
v_isShared_2393_ = v_isSharedCheck_2398_;
goto v_resetjp_2391_;
}
else
{
lean_dec(v_code_2361_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2398_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 1, v___y_2372_);
lean_ctor_set(v___x_2392_, 0, v___y_2371_);
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___y_2371_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v___y_2372_);
v___x_2395_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
lean_object* v___x_2396_; 
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
return v___x_2396_;
}
}
}
else
{
lean_object* v___x_2401_; 
lean_dec_ref(v___y_2372_);
lean_dec_ref(v___y_2371_);
v___x_2401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2401_, 0, v_code_2361_);
return v___x_2401_;
}
}
}
case 2:
{
lean_object* v_decl_2402_; lean_object* v_k_2403_; size_t v___x_2404_; size_t v___x_2405_; uint8_t v___x_2406_; 
v_decl_2402_ = lean_ctor_get(v_code_2361_, 0);
v_k_2403_ = lean_ctor_get(v_code_2361_, 1);
v___x_2404_ = lean_ptr_addr(v_k_2403_);
v___x_2405_ = lean_ptr_addr(v___y_2372_);
v___x_2406_ = lean_usize_dec_eq(v___x_2404_, v___x_2405_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2414_; 
v_isSharedCheck_2414_ = !lean_is_exclusive(v_code_2361_);
if (v_isSharedCheck_2414_ == 0)
{
lean_object* v_unused_2415_; lean_object* v_unused_2416_; 
v_unused_2415_ = lean_ctor_get(v_code_2361_, 1);
lean_dec(v_unused_2415_);
v_unused_2416_ = lean_ctor_get(v_code_2361_, 0);
lean_dec(v_unused_2416_);
v___x_2408_ = v_code_2361_;
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
else
{
lean_dec(v_code_2361_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 1, v___y_2372_);
lean_ctor_set(v___x_2408_, 0, v___y_2371_);
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___y_2371_);
lean_ctor_set(v_reuseFailAlloc_2413_, 1, v___y_2372_);
v___x_2411_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
return v___x_2412_;
}
}
}
else
{
size_t v___x_2417_; size_t v___x_2418_; uint8_t v___x_2419_; 
v___x_2417_ = lean_ptr_addr(v_decl_2402_);
v___x_2418_ = lean_ptr_addr(v___y_2371_);
v___x_2419_ = lean_usize_dec_eq(v___x_2417_, v___x_2418_);
if (v___x_2419_ == 0)
{
lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2427_; 
v_isSharedCheck_2427_ = !lean_is_exclusive(v_code_2361_);
if (v_isSharedCheck_2427_ == 0)
{
lean_object* v_unused_2428_; lean_object* v_unused_2429_; 
v_unused_2428_ = lean_ctor_get(v_code_2361_, 1);
lean_dec(v_unused_2428_);
v_unused_2429_ = lean_ctor_get(v_code_2361_, 0);
lean_dec(v_unused_2429_);
v___x_2421_ = v_code_2361_;
v_isShared_2422_ = v_isSharedCheck_2427_;
goto v_resetjp_2420_;
}
else
{
lean_dec(v_code_2361_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2427_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 1, v___y_2372_);
lean_ctor_set(v___x_2421_, 0, v___y_2371_);
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___y_2371_);
lean_ctor_set(v_reuseFailAlloc_2426_, 1, v___y_2372_);
v___x_2424_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
lean_object* v___x_2425_; 
v___x_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
return v___x_2425_;
}
}
}
else
{
lean_object* v___x_2430_; 
lean_dec_ref(v___y_2372_);
lean_dec_ref(v___y_2371_);
v___x_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2430_, 0, v_code_2361_);
return v___x_2430_;
}
}
}
default: 
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_dec_ref(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec_ref(v_code_2361_);
v___x_2431_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__3, &l_Lean_Compiler_LCNF_Simp_simp___closed__3_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3);
v___x_2432_ = l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(v___x_2431_);
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2432_);
return v___x_2433_;
}
}
}
v___jp_2434_:
{
lean_object* v___x_2445_; 
lean_inc_ref(v___y_2443_);
v___x_2445_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2436_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
if (lean_obj_tag(v___x_2445_) == 0)
{
lean_object* v_a_2446_; lean_object* v_fvarId_2447_; lean_object* v___x_2448_; 
v_a_2446_ = lean_ctor_get(v___x_2445_, 0);
lean_inc(v_a_2446_);
lean_dec_ref_known(v___x_2445_, 1);
v_fvarId_2447_ = lean_ctor_get(v_decl_2437_, 0);
v___x_2448_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2447_, v___y_2439_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; uint8_t v___x_2450_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
lean_inc(v_a_2449_);
lean_dec_ref_known(v___x_2448_, 1);
v___x_2450_ = lean_unbox(v_a_2449_);
lean_dec(v_a_2449_);
if (v___x_2450_ == 0)
{
lean_object* v___x_2451_; 
lean_dec_ref(v___y_2443_);
lean_dec_ref(v_code_2361_);
v___x_2451_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2437_, v___y_2439_, v___y_2442_);
lean_dec_ref(v_decl_2437_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2458_ == 0)
{
lean_object* v_unused_2459_; 
v_unused_2459_ = lean_ctor_get(v___x_2451_, 0);
lean_dec(v_unused_2459_);
v___x_2453_ = v___x_2451_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_dec(v___x_2451_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_a_2446_);
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2446_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
else
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
lean_dec(v_a_2446_);
v_a_2460_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2451_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2451_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
else
{
if (v___y_2435_ == 0)
{
lean_dec_ref(v___y_2443_);
v___y_2371_ = v_decl_2437_;
v___y_2372_ = v_a_2446_;
goto v___jp_2370_;
}
else
{
lean_object* v___x_2468_; 
lean_inc_ref(v_decl_2437_);
v___x_2468_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec_ref(v___y_2443_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_dec_ref_known(v___x_2468_, 1);
v___y_2371_ = v_decl_2437_;
v___y_2372_ = v_a_2446_;
goto v___jp_2370_;
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_a_2446_);
lean_dec_ref(v_decl_2437_);
lean_dec_ref(v_code_2361_);
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2468_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2468_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
}
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
lean_dec(v_a_2446_);
lean_dec_ref(v___y_2443_);
lean_dec_ref(v_decl_2437_);
lean_dec_ref(v_code_2361_);
v_a_2477_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2448_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2448_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
else
{
lean_dec_ref(v___y_2443_);
lean_dec_ref(v_decl_2437_);
lean_dec_ref(v_code_2361_);
return v___x_2445_;
}
}
v___jp_2485_:
{
lean_object* v___x_2496_; 
v___x_2496_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v_a_2497_; 
v_a_2497_ = lean_ctor_get(v___x_2496_, 0);
lean_inc(v_a_2497_);
lean_dec_ref_known(v___x_2496_, 1);
v___y_2435_ = v___y_2486_;
v___y_2436_ = v___y_2487_;
v_decl_2437_ = v_a_2497_;
v___y_2438_ = v___y_2489_;
v___y_2439_ = v___y_2490_;
v___y_2440_ = v___y_2491_;
v___y_2441_ = v___y_2492_;
v___y_2442_ = v___y_2493_;
v___y_2443_ = v___y_2494_;
v___y_2444_ = v___y_2495_;
goto v___jp_2434_;
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec_ref(v___y_2494_);
lean_dec_ref(v___y_2487_);
lean_dec_ref(v_code_2361_);
v_a_2498_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2496_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2496_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
v___jp_2506_:
{
lean_object* v_fvarId_2516_; lean_object* v_params_2517_; lean_object* v_type_2518_; uint8_t v___x_2519_; lean_object* v___x_2520_; 
v_fvarId_2516_ = lean_ctor_get(v_decl_2507_, 0);
v_params_2517_ = lean_ctor_get(v_decl_2507_, 2);
v_type_2518_ = lean_ctor_get(v_decl_2507_, 3);
v___x_2519_ = 0;
v___x_2520_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_2516_, v___y_2510_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; uint8_t v___x_2522_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___x_2520_, 1);
v___x_2522_ = lean_unbox(v_a_2521_);
if (v___x_2522_ == 0)
{
uint8_t v___x_2523_; 
v___x_2523_ = l_Lean_Compiler_LCNF_Code_isFun___redArg(v_code_2361_);
if (v___x_2523_ == 0)
{
uint8_t v___x_2524_; 
v___x_2524_ = lean_unbox(v_a_2521_);
lean_dec(v_a_2521_);
v___y_2486_ = v___x_2524_;
v___y_2487_ = v_k_2508_;
v_decl_2488_ = v_decl_2507_;
v___y_2489_ = v___y_2509_;
v___y_2490_ = v___y_2510_;
v___y_2491_ = v___y_2511_;
v___y_2492_ = v___y_2512_;
v___y_2493_ = v___y_2513_;
v___y_2494_ = v___y_2514_;
v___y_2495_ = v___y_2515_;
goto v___jp_2485_;
}
else
{
uint8_t v___x_2525_; 
lean_inc_ref(v_type_2518_);
v___x_2525_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_2518_, v_params_2517_);
if (v___x_2525_ == 0)
{
uint8_t v___x_2526_; 
v___x_2526_ = lean_unbox(v_a_2521_);
lean_dec(v_a_2521_);
v___y_2486_ = v___x_2526_;
v___y_2487_ = v_k_2508_;
v_decl_2488_ = v_decl_2507_;
v___y_2489_ = v___y_2509_;
v___y_2490_ = v___y_2510_;
v___y_2491_ = v___y_2511_;
v___y_2492_ = v___y_2512_;
v___y_2493_ = v___y_2513_;
v___y_2494_ = v___y_2514_;
v___y_2495_ = v___y_2515_;
goto v___jp_2485_;
}
else
{
lean_object* v___x_2527_; lean_object* v_subst_2528_; uint8_t v___x_2529_; lean_object* v___x_2530_; 
v___x_2527_ = lean_st_ref_get(v___y_2510_);
v_subst_2528_ = lean_ctor_get(v___x_2527_, 0);
lean_inc_ref(v_subst_2528_);
lean_dec(v___x_2527_);
v___x_2529_ = lean_unbox(v_a_2521_);
v___x_2530_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2519_, v___x_2529_, v_decl_2507_, v_subst_2528_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
lean_dec_ref(v_subst_2528_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2532_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
v___x_2532_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_2531_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2510_);
if (lean_obj_tag(v___x_2534_) == 0)
{
uint8_t v___x_2535_; 
lean_dec_ref_known(v___x_2534_, 1);
v___x_2535_ = lean_unbox(v_a_2521_);
lean_dec(v_a_2521_);
v___y_2486_ = v___x_2535_;
v___y_2487_ = v_k_2508_;
v_decl_2488_ = v_a_2533_;
v___y_2489_ = v___y_2509_;
v___y_2490_ = v___y_2510_;
v___y_2491_ = v___y_2511_;
v___y_2492_ = v___y_2512_;
v___y_2493_ = v___y_2513_;
v___y_2494_ = v___y_2514_;
v___y_2495_ = v___y_2515_;
goto v___jp_2485_;
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_dec(v_a_2533_);
lean_dec(v_a_2521_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v_k_2508_);
lean_dec_ref(v_code_2361_);
v_a_2536_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2534_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2534_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
lean_dec(v_a_2521_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v_k_2508_);
lean_dec_ref(v_code_2361_);
v_a_2544_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2532_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2532_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
lean_dec(v_a_2521_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v_k_2508_);
lean_dec_ref(v_code_2361_);
v_a_2552_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2554_ = v___x_2530_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2530_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
}
}
else
{
uint8_t v___x_2560_; lean_object* v___x_2561_; lean_object* v_subst_2562_; lean_object* v___x_2563_; 
v___x_2560_ = 0;
v___x_2561_ = lean_st_ref_get(v___y_2510_);
v_subst_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc_ref(v_subst_2562_);
lean_dec(v___x_2561_);
v___x_2563_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2519_, v___x_2560_, v_decl_2507_, v_subst_2562_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
lean_dec_ref(v_subst_2562_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; uint8_t v___x_2565_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = lean_unbox(v_a_2521_);
lean_dec(v_a_2521_);
v___y_2435_ = v___x_2565_;
v___y_2436_ = v_k_2508_;
v_decl_2437_ = v_a_2564_;
v___y_2438_ = v___y_2509_;
v___y_2439_ = v___y_2510_;
v___y_2440_ = v___y_2511_;
v___y_2441_ = v___y_2512_;
v___y_2442_ = v___y_2513_;
v___y_2443_ = v___y_2514_;
v___y_2444_ = v___y_2515_;
goto v___jp_2434_;
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
lean_dec(v_a_2521_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v_k_2508_);
lean_dec_ref(v_code_2361_);
v_a_2566_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2563_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2563_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec_ref(v___y_2514_);
lean_dec_ref(v_k_2508_);
lean_dec_ref(v_decl_2507_);
lean_dec_ref(v_code_2361_);
v_a_2574_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2520_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2520_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
v___jp_2582_:
{
lean_object* v___x_2593_; 
lean_inc_ref(v___y_2588_);
v___x_2593_ = l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(v___y_2588_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
if (lean_obj_tag(v_a_2594_) == 1)
{
lean_object* v_val_2595_; lean_object* v___x_2596_; 
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_val_2595_ = lean_ctor_get(v_a_2594_, 0);
lean_inc(v_val_2595_);
lean_dec_ref_known(v_a_2594_, 1);
v___x_2596_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2585_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v___x_2597_; 
lean_dec_ref_known(v___x_2596_, 1);
lean_inc_ref(v___y_2587_);
v___x_2597_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2592_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_val_2595_, v_a_2598_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
lean_dec_ref(v___y_2587_);
lean_dec(v_val_2595_);
return v___x_2599_;
}
else
{
lean_dec(v_val_2595_);
lean_dec_ref(v___y_2587_);
return v___x_2597_;
}
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec(v_val_2595_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2587_);
v_a_2600_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2596_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2596_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
else
{
lean_object* v___x_2608_; 
lean_dec(v_a_2594_);
lean_inc_ref(v___y_2588_);
v___x_2608_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v___y_2588_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2608_, 1);
if (lean_obj_tag(v_a_2609_) == 1)
{
lean_object* v_val_2610_; lean_object* v___x_2611_; 
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_val_2610_ = lean_ctor_get(v_a_2609_, 0);
lean_inc(v_val_2610_);
lean_dec_ref_known(v_a_2609_, 1);
v___x_2611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2611_, 0, v_val_2610_);
lean_ctor_set(v___x_2611_, 1, v___y_2592_);
v_code_2361_ = v___x_2611_;
v_a_2362_ = v___y_2584_;
v_a_2363_ = v___y_2585_;
v_a_2364_ = v___y_2590_;
v_a_2365_ = v___y_2586_;
v_a_2366_ = v___y_2589_;
v_a_2367_ = v___y_2587_;
v_a_2368_ = v___y_2591_;
goto _start;
}
else
{
lean_object* v_fvarId_2613_; lean_object* v_value_2614_; lean_object* v___x_2615_; 
lean_dec(v_a_2609_);
v_fvarId_2613_ = lean_ctor_get(v___y_2588_, 0);
v_value_2614_ = lean_ctor_get(v___y_2588_, 3);
v___x_2615_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_2614_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
if (lean_obj_tag(v_a_2616_) == 1)
{
lean_object* v_val_2617_; lean_object* v___x_2618_; 
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_val_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_val_2617_);
lean_dec_ref_known(v_a_2616_, 1);
lean_inc(v_fvarId_2613_);
v___x_2618_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2613_, v_val_2617_, v___y_2585_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v___x_2619_; 
lean_dec_ref_known(v___x_2618_, 1);
v___x_2619_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2588_, v___y_2585_, v___y_2589_);
lean_dec_ref(v___y_2588_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_dec_ref_known(v___x_2619_, 1);
v_code_2361_ = v___y_2592_;
v_a_2362_ = v___y_2584_;
v_a_2363_ = v___y_2585_;
v_a_2364_ = v___y_2590_;
v_a_2365_ = v___y_2586_;
v_a_2366_ = v___y_2589_;
v_a_2367_ = v___y_2587_;
v_a_2368_ = v___y_2591_;
goto _start;
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2587_);
v_a_2621_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2619_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2619_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2636_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
v_a_2629_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2631_ = v___x_2618_;
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2618_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
else
{
lean_object* v___x_2637_; 
lean_dec(v_a_2616_);
lean_inc_ref(v___y_2592_);
lean_inc_ref(v___y_2588_);
v___x_2637_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v___y_2588_, v___y_2592_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v___x_2637_, 1);
if (lean_obj_tag(v_a_2638_) == 1)
{
lean_object* v_val_2639_; lean_object* v___x_2640_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_val_2639_ = lean_ctor_get(v_a_2638_, 0);
lean_inc(v_val_2639_);
lean_dec_ref_known(v_a_2638_, 1);
v___x_2640_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2588_, v___y_2585_, v___y_2589_);
lean_dec_ref(v___y_2588_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2647_ == 0)
{
lean_object* v_unused_2648_; 
v_unused_2648_ = lean_ctor_get(v___x_2640_, 0);
lean_dec(v_unused_2648_);
v___x_2642_ = v___x_2640_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_dec(v___x_2640_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v_val_2639_);
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_val_2639_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
lean_dec(v_val_2639_);
v_a_2649_ = lean_ctor_get(v___x_2640_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2640_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2640_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2654_; 
if (v_isShared_2652_ == 0)
{
v___x_2654_ = v___x_2651_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_a_2649_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
else
{
lean_object* v___x_2657_; 
lean_dec(v_a_2638_);
lean_inc(v_value_2614_);
v___x_2657_ = l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(v_value_2614_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; 
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v___x_2657_, 1);
if (lean_obj_tag(v_a_2658_) == 1)
{
lean_object* v_val_2659_; lean_object* v_fst_2660_; lean_object* v_snd_2661_; lean_object* v___x_2662_; 
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_val_2659_ = lean_ctor_get(v_a_2658_, 0);
lean_inc(v_val_2659_);
lean_dec_ref_known(v_a_2658_, 1);
v_fst_2660_ = lean_ctor_get(v_val_2659_, 0);
lean_inc(v_fst_2660_);
v_snd_2661_ = lean_ctor_get(v_val_2659_, 1);
lean_inc(v_snd_2661_);
lean_dec(v_val_2659_);
lean_inc(v_fvarId_2613_);
v___x_2662_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2613_, v_snd_2661_, v___y_2585_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v___x_2663_; 
lean_dec_ref_known(v___x_2662_, 1);
v___x_2663_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2588_, v___y_2585_, v___y_2589_);
lean_dec_ref(v___y_2588_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v___x_2664_; 
lean_dec_ref_known(v___x_2663_, 1);
lean_inc_ref(v___y_2587_);
v___x_2664_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2592_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2666_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2664_, 1);
v___x_2666_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_fst_2660_, v_a_2665_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
lean_dec_ref(v___y_2587_);
lean_dec(v_fst_2660_);
return v___x_2666_;
}
else
{
lean_dec(v_fst_2660_);
lean_dec_ref(v___y_2587_);
return v___x_2664_;
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_dec(v_fst_2660_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2587_);
v_a_2667_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2663_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2663_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec(v_fst_2660_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
v_a_2675_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2662_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2662_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
else
{
lean_object* v___x_2683_; 
lean_dec(v_a_2658_);
lean_inc_ref(v___y_2587_);
lean_inc_ref(v___y_2592_);
v___x_2683_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2592_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2685_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2683_, 1);
v___x_2685_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2613_, v___y_2585_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; uint8_t v___x_2687_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2685_, 1);
v___x_2687_ = lean_unbox(v_a_2686_);
lean_dec(v_a_2686_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v___x_2688_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2588_, v___y_2585_, v___y_2589_);
lean_dec_ref(v___y_2588_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2695_ == 0)
{
lean_object* v_unused_2696_; 
v_unused_2696_ = lean_ctor_get(v___x_2688_, 0);
lean_dec(v_unused_2696_);
v___x_2690_ = v___x_2688_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_dec(v___x_2688_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 0, v_a_2684_);
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2684_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
lean_dec(v_a_2684_);
v_a_2697_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2688_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2688_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
else
{
lean_object* v___x_2705_; 
lean_inc_ref(v___y_2588_);
v___x_2705_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v___y_2588_, v___y_2584_, v___y_2585_, v___y_2590_, v___y_2586_, v___y_2589_, v___y_2587_, v___y_2591_);
lean_dec_ref(v___y_2587_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2726_; 
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2726_ == 0)
{
lean_object* v_unused_2727_; 
v_unused_2727_ = lean_ctor_get(v___x_2705_, 0);
lean_dec(v_unused_2727_);
v___x_2707_ = v___x_2705_;
v_isShared_2708_ = v_isSharedCheck_2726_;
goto v_resetjp_2706_;
}
else
{
lean_dec(v___x_2705_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2726_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
size_t v___x_2709_; size_t v___x_2710_; uint8_t v___x_2711_; 
v___x_2709_ = lean_ptr_addr(v___y_2592_);
lean_dec_ref(v___y_2592_);
v___x_2710_ = lean_ptr_addr(v_a_2684_);
v___x_2711_ = lean_usize_dec_eq(v___x_2709_, v___x_2710_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; lean_object* v___x_2714_; 
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___y_2588_);
lean_ctor_set(v___x_2712_, 1, v_a_2684_);
if (v_isShared_2708_ == 0)
{
lean_ctor_set(v___x_2707_, 0, v___x_2712_);
v___x_2714_ = v___x_2707_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2712_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
else
{
size_t v___x_2716_; size_t v___x_2717_; uint8_t v___x_2718_; 
v___x_2716_ = lean_ptr_addr(v___y_2583_);
lean_dec_ref(v___y_2583_);
v___x_2717_ = lean_ptr_addr(v___y_2588_);
v___x_2718_ = lean_usize_dec_eq(v___x_2716_, v___x_2717_);
if (v___x_2718_ == 0)
{
lean_object* v___x_2719_; lean_object* v___x_2721_; 
lean_dec_ref(v_code_2361_);
v___x_2719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___y_2588_);
lean_ctor_set(v___x_2719_, 1, v_a_2684_);
if (v_isShared_2708_ == 0)
{
lean_ctor_set(v___x_2707_, 0, v___x_2719_);
v___x_2721_ = v___x_2707_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v___x_2719_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
else
{
lean_object* v___x_2724_; 
lean_dec(v_a_2684_);
lean_dec_ref(v___y_2588_);
if (v_isShared_2708_ == 0)
{
lean_ctor_set(v___x_2707_, 0, v_code_2361_);
v___x_2724_ = v___x_2707_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_code_2361_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec(v_a_2684_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2728_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2705_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2705_);
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
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec(v_a_2684_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2736_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2685_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2685_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
return v___x_2683_;
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2744_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2657_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2657_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2752_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2637_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2637_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
else
{
lean_object* v_a_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2767_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2760_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2762_ = v___x_2615_;
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_a_2760_);
lean_dec(v___x_2615_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2765_; 
if (v_isShared_2763_ == 0)
{
v___x_2765_ = v___x_2762_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_a_2760_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
}
}
else
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2775_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2768_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2770_ = v___x_2608_;
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v___x_2608_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2773_; 
if (v_isShared_2771_ == 0)
{
v___x_2773_ = v___x_2770_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_a_2768_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v_code_2361_);
v_a_2776_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2593_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2593_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
v___jp_2784_:
{
uint8_t v___x_2799_; 
v___x_2799_ = l_Lean_Expr_isErased(v_type_2790_);
lean_dec_ref(v_type_2790_);
if (v___x_2799_ == 0)
{
lean_dec(v_value_2791_);
lean_dec(v_fvarId_2789_);
v___y_2583_ = v___y_2785_;
v___y_2584_ = v___y_2792_;
v___y_2585_ = v___y_2793_;
v___y_2586_ = v___y_2795_;
v___y_2587_ = v___y_2797_;
v___y_2588_ = v_decl_2788_;
v___y_2589_ = v___y_2796_;
v___y_2590_ = v___y_2794_;
v___y_2591_ = v___y_2798_;
v___y_2592_ = v___y_2787_;
goto v___jp_2582_;
}
else
{
lean_object* v___x_2800_; uint8_t v___x_2801_; 
v___x_2800_ = lean_box(1);
v___x_2801_ = l_Lean_Compiler_LCNF_instBEqLetValue_beq(v___y_2786_, v_value_2791_, v___x_2800_);
lean_dec(v_value_2791_);
if (v___x_2801_ == 0)
{
if (v___x_2799_ == 0)
{
lean_dec(v_fvarId_2789_);
v___y_2583_ = v___y_2785_;
v___y_2584_ = v___y_2792_;
v___y_2585_ = v___y_2793_;
v___y_2586_ = v___y_2795_;
v___y_2587_ = v___y_2797_;
v___y_2588_ = v_decl_2788_;
v___y_2589_ = v___y_2796_;
v___y_2590_ = v___y_2794_;
v___y_2591_ = v___y_2798_;
v___y_2592_ = v___y_2787_;
goto v___jp_2582_;
}
else
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v_subst_2804_; lean_object* v_used_2805_; lean_object* v_binderRenaming_2806_; lean_object* v_funDeclInfoMap_2807_; uint8_t v_simplified_2808_; lean_object* v_visited_2809_; lean_object* v_inline_2810_; lean_object* v_inlineLocal_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2830_; 
lean_dec_ref(v___y_2785_);
lean_dec_ref(v_code_2361_);
v___x_2802_ = lean_box(0);
v___x_2803_ = lean_st_ref_take(v___y_2793_);
v_subst_2804_ = lean_ctor_get(v___x_2803_, 0);
v_used_2805_ = lean_ctor_get(v___x_2803_, 1);
v_binderRenaming_2806_ = lean_ctor_get(v___x_2803_, 2);
v_funDeclInfoMap_2807_ = lean_ctor_get(v___x_2803_, 3);
v_simplified_2808_ = lean_ctor_get_uint8(v___x_2803_, sizeof(void*)*7);
v_visited_2809_ = lean_ctor_get(v___x_2803_, 4);
v_inline_2810_ = lean_ctor_get(v___x_2803_, 5);
v_inlineLocal_2811_ = lean_ctor_get(v___x_2803_, 6);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2813_ = v___x_2803_;
v_isShared_2814_ = v_isSharedCheck_2830_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_inlineLocal_2811_);
lean_inc(v_inline_2810_);
lean_inc(v_visited_2809_);
lean_inc(v_funDeclInfoMap_2807_);
lean_inc(v_binderRenaming_2806_);
lean_inc(v_used_2805_);
lean_inc(v_subst_2804_);
lean_dec(v___x_2803_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2830_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2815_; lean_object* v___x_2817_; 
v___x_2815_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_2804_, v_fvarId_2789_, v___x_2802_);
if (v_isShared_2814_ == 0)
{
lean_ctor_set(v___x_2813_, 0, v___x_2815_);
v___x_2817_ = v___x_2813_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2815_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_used_2805_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v_binderRenaming_2806_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v_funDeclInfoMap_2807_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v_visited_2809_);
lean_ctor_set(v_reuseFailAlloc_2829_, 5, v_inline_2810_);
lean_ctor_set(v_reuseFailAlloc_2829_, 6, v_inlineLocal_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*7, v_simplified_2808_);
v___x_2817_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2818_ = lean_st_ref_put(v___y_2793_, v___x_2817_);
v___x_2819_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2788_, v___y_2793_, v___y_2796_);
lean_dec_ref(v_decl_2788_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_dec_ref_known(v___x_2819_, 1);
v_code_2361_ = v___y_2787_;
v_a_2362_ = v___y_2792_;
v_a_2363_ = v___y_2793_;
v_a_2364_ = v___y_2794_;
v_a_2365_ = v___y_2795_;
v_a_2366_ = v___y_2796_;
v_a_2367_ = v___y_2797_;
v_a_2368_ = v___y_2798_;
goto _start;
}
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec_ref(v___y_2797_);
lean_dec_ref(v___y_2787_);
v_a_2821_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2819_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2819_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_2789_);
v___y_2583_ = v___y_2785_;
v___y_2584_ = v___y_2792_;
v___y_2585_ = v___y_2793_;
v___y_2586_ = v___y_2795_;
v___y_2587_ = v___y_2797_;
v___y_2588_ = v_decl_2788_;
v___y_2589_ = v___y_2796_;
v___y_2590_ = v___y_2794_;
v___y_2591_ = v___y_2798_;
v___y_2592_ = v___y_2787_;
goto v___jp_2582_;
}
}
}
v___jp_2831_:
{
lean_object* v_fvarId_2843_; lean_object* v_type_2844_; lean_object* v_value_2845_; lean_object* v___x_2846_; 
v_fvarId_2843_ = lean_ctor_get(v___y_2833_, 0);
v_type_2844_ = lean_ctor_get(v___y_2833_, 2);
v_value_2845_ = lean_ctor_get(v___y_2833_, 3);
lean_inc(v_value_2845_);
v___x_2846_ = l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(v_value_2845_, v___y_2836_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_);
if (lean_obj_tag(v___x_2846_) == 0)
{
lean_object* v_a_2847_; 
v_a_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_a_2847_);
lean_dec_ref_known(v___x_2846_, 1);
if (lean_obj_tag(v_a_2847_) == 1)
{
lean_object* v_val_2848_; lean_object* v___x_2849_; 
v_val_2848_ = lean_ctor_get(v_a_2847_, 0);
lean_inc(v_val_2848_);
lean_dec_ref_known(v_a_2847_, 1);
v___x_2849_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2837_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v___x_2850_; 
lean_dec_ref_known(v___x_2849_, 1);
v___x_2850_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___y_2835_, v___y_2833_, v_val_2848_, v___y_2840_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v_a_2851_; lean_object* v_fvarId_2852_; lean_object* v_type_2853_; lean_object* v_value_2854_; 
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_a_2851_);
lean_dec_ref_known(v___x_2850_, 1);
v_fvarId_2852_ = lean_ctor_get(v_a_2851_, 0);
lean_inc(v_fvarId_2852_);
v_type_2853_ = lean_ctor_get(v_a_2851_, 2);
lean_inc_ref(v_type_2853_);
v_value_2854_ = lean_ctor_get(v_a_2851_, 3);
lean_inc(v_value_2854_);
v___y_2785_ = v___y_2832_;
v___y_2786_ = v___y_2835_;
v___y_2787_ = v___y_2834_;
v_decl_2788_ = v_a_2851_;
v_fvarId_2789_ = v_fvarId_2852_;
v_type_2790_ = v_type_2853_;
v_value_2791_ = v_value_2854_;
v___y_2792_ = v___y_2836_;
v___y_2793_ = v___y_2837_;
v___y_2794_ = v___y_2838_;
v___y_2795_ = v___y_2839_;
v___y_2796_ = v___y_2840_;
v___y_2797_ = v___y_2841_;
v___y_2798_ = v___y_2842_;
goto v___jp_2784_;
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2862_; 
lean_dec_ref(v___y_2841_);
lean_dec_ref(v___y_2834_);
lean_dec_ref(v___y_2832_);
lean_dec_ref(v_code_2361_);
v_a_2855_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2857_ = v___x_2850_;
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2850_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2855_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
lean_dec(v_val_2848_);
lean_dec_ref(v___y_2841_);
lean_dec_ref(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec_ref(v___y_2832_);
lean_dec_ref(v_code_2361_);
v_a_2863_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2865_ = v___x_2849_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v___x_2849_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
else
{
lean_inc(v_value_2845_);
lean_inc_ref(v_type_2844_);
lean_inc(v_fvarId_2843_);
lean_dec(v_a_2847_);
v___y_2785_ = v___y_2832_;
v___y_2786_ = v___y_2835_;
v___y_2787_ = v___y_2834_;
v_decl_2788_ = v___y_2833_;
v_fvarId_2789_ = v_fvarId_2843_;
v_type_2790_ = v_type_2844_;
v_value_2791_ = v_value_2845_;
v___y_2792_ = v___y_2836_;
v___y_2793_ = v___y_2837_;
v___y_2794_ = v___y_2838_;
v___y_2795_ = v___y_2839_;
v___y_2796_ = v___y_2840_;
v___y_2797_ = v___y_2841_;
v___y_2798_ = v___y_2842_;
goto v___jp_2784_;
}
}
else
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2878_; 
lean_dec_ref(v___y_2841_);
lean_dec_ref(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec_ref(v___y_2832_);
lean_dec_ref(v_code_2361_);
v_a_2871_ = lean_ctor_get(v___x_2846_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2846_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2873_ = v___x_2846_;
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v___x_2846_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2871_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
v___jp_2879_:
{
if (v___y_2882_ == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
lean_dec_ref(v_code_2361_);
v___x_2883_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___y_2881_);
lean_ctor_set(v___x_2883_, 1, v___y_2880_);
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
return v___x_2884_;
}
else
{
lean_object* v___x_2885_; 
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v_code_2361_);
return v___x_2885_;
}
}
v___jp_2886_:
{
uint8_t v___x_2891_; 
v___x_2891_ = l_Lean_instBEqFVarId_beq(v___y_2890_, v___y_2888_);
lean_dec(v___y_2890_);
if (v___x_2891_ == 0)
{
lean_dec_ref(v___y_2889_);
v___y_2880_ = v___y_2887_;
v___y_2881_ = v___y_2888_;
v___y_2882_ = v___x_2891_;
goto v___jp_2879_;
}
else
{
size_t v___x_2892_; size_t v___x_2893_; uint8_t v___x_2894_; 
v___x_2892_ = lean_ptr_addr(v___y_2889_);
lean_dec_ref(v___y_2889_);
v___x_2893_ = lean_ptr_addr(v___y_2887_);
v___x_2894_ = lean_usize_dec_eq(v___x_2892_, v___x_2893_);
v___y_2880_ = v___y_2887_;
v___y_2881_ = v___y_2888_;
v___y_2882_ = v___x_2894_;
goto v___jp_2879_;
}
}
v___jp_2895_:
{
if (lean_obj_tag(v___y_2900_) == 0)
{
lean_dec_ref_known(v___y_2900_, 1);
v___y_2887_ = v___y_2896_;
v___y_2888_ = v___y_2897_;
v___y_2889_ = v___y_2898_;
v___y_2890_ = v___y_2899_;
goto v___jp_2886_;
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec_ref(v_code_2361_);
v_a_2901_ = lean_ctor_get(v___y_2900_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___y_2900_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___y_2900_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___y_2900_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
v___jp_2909_:
{
lean_object* v___x_2912_; 
v___x_2912_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2910_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2920_; 
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2920_ == 0)
{
lean_object* v_unused_2921_; 
v_unused_2921_ = lean_ctor_get(v___x_2912_, 0);
lean_dec(v_unused_2921_);
v___x_2914_ = v___x_2912_;
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
else
{
lean_dec(v___x_2912_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2916_; lean_object* v___x_2918_; 
v___x_2916_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___y_2911_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v___x_2916_);
v___x_2918_ = v___x_2914_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v___x_2916_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
lean_dec_ref(v___y_2911_);
v_a_2922_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___x_2912_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2912_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2922_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
v___jp_2930_:
{
if (lean_obj_tag(v___y_2933_) == 0)
{
lean_dec_ref_known(v___y_2933_, 1);
v___y_2910_ = v___y_2931_;
v___y_2911_ = v___y_2932_;
goto v___jp_2909_;
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
lean_dec_ref(v___y_2932_);
v_a_2934_ = lean_ctor_get(v___y_2933_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___y_2933_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___y_2933_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___y_2933_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
v___jp_2942_:
{
uint8_t v___x_2952_; 
v___x_2952_ = lean_nat_dec_lt(v___y_2944_, v___y_2943_);
lean_dec(v___y_2944_);
if (v___x_2952_ == 0)
{
lean_dec_ref(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2943_);
v___y_2910_ = v___y_2949_;
v___y_2911_ = v___y_2951_;
goto v___jp_2909_;
}
else
{
lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2953_ = lean_box(0);
v___x_2954_ = lean_nat_dec_le(v___y_2943_, v___y_2943_);
if (v___x_2954_ == 0)
{
if (v___x_2952_ == 0)
{
lean_dec_ref(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2943_);
v___y_2910_ = v___y_2949_;
v___y_2911_ = v___y_2951_;
goto v___jp_2909_;
}
else
{
size_t v___x_2955_; size_t v___x_2956_; lean_object* v___x_2957_; 
v___x_2955_ = ((size_t)0ULL);
v___x_2956_ = lean_usize_of_nat(v___y_2943_);
lean_dec(v___y_2943_);
v___x_2957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2947_, v___x_2955_, v___x_2956_, v___x_2953_, v___y_2950_, v___y_2945_, v___y_2946_, v___y_2948_);
lean_dec_ref(v___y_2946_);
lean_dec_ref(v___y_2947_);
v___y_2931_ = v___y_2949_;
v___y_2932_ = v___y_2951_;
v___y_2933_ = v___x_2957_;
goto v___jp_2930_;
}
}
else
{
size_t v___x_2958_; size_t v___x_2959_; lean_object* v___x_2960_; 
v___x_2958_ = ((size_t)0ULL);
v___x_2959_ = lean_usize_of_nat(v___y_2943_);
lean_dec(v___y_2943_);
v___x_2960_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2947_, v___x_2958_, v___x_2959_, v___x_2953_, v___y_2950_, v___y_2945_, v___y_2946_, v___y_2948_);
lean_dec_ref(v___y_2946_);
lean_dec_ref(v___y_2947_);
v___y_2931_ = v___y_2949_;
v___y_2932_ = v___y_2951_;
v___y_2933_ = v___x_2960_;
goto v___jp_2930_;
}
}
}
v___jp_2961_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2966_, 0, v___y_2962_);
lean_ctor_set(v___x_2966_, 1, v___y_2965_);
lean_ctor_set(v___x_2966_, 2, v___y_2964_);
lean_ctor_set(v___x_2966_, 3, v___y_2963_);
v___x_2967_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2966_);
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
return v___x_2968_;
}
v___jp_2969_:
{
lean_object* v___x_2983_; uint8_t v___x_2984_; 
v___x_2983_ = lean_array_get_size(v___y_2973_);
v___x_2984_ = lean_nat_dec_lt(v___y_2972_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_dec(v___y_2977_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v_code_2361_);
v___y_2943_ = v___x_2983_;
v___y_2944_ = v___y_2972_;
v___y_2945_ = v___y_2980_;
v___y_2946_ = v___y_2981_;
v___y_2947_ = v___y_2973_;
v___y_2948_ = v___y_2982_;
v___y_2949_ = v___y_2978_;
v___y_2950_ = v___y_2979_;
v___y_2951_ = v___y_2976_;
goto v___jp_2942_;
}
else
{
if (v___x_2984_ == 0)
{
lean_dec(v___y_2977_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v_code_2361_);
v___y_2943_ = v___x_2983_;
v___y_2944_ = v___y_2972_;
v___y_2945_ = v___y_2980_;
v___y_2946_ = v___y_2981_;
v___y_2947_ = v___y_2973_;
v___y_2948_ = v___y_2982_;
v___y_2949_ = v___y_2978_;
v___y_2950_ = v___y_2979_;
v___y_2951_ = v___y_2976_;
goto v___jp_2942_;
}
else
{
size_t v___x_2985_; size_t v___x_2986_; uint8_t v___x_2987_; 
v___x_2985_ = ((size_t)0ULL);
v___x_2986_ = lean_usize_of_nat(v___x_2983_);
v___x_2987_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v___y_2973_, v___x_2985_, v___x_2986_);
if (v___x_2987_ == 0)
{
lean_dec(v___y_2977_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v_code_2361_);
v___y_2943_ = v___x_2983_;
v___y_2944_ = v___y_2972_;
v___y_2945_ = v___y_2980_;
v___y_2946_ = v___y_2981_;
v___y_2947_ = v___y_2973_;
v___y_2948_ = v___y_2982_;
v___y_2949_ = v___y_2978_;
v___y_2950_ = v___y_2979_;
v___y_2951_ = v___y_2976_;
goto v___jp_2942_;
}
else
{
lean_object* v___x_2988_; 
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2972_);
lean_inc(v___y_2975_);
v___x_2988_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v___y_2975_, v___y_2978_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3002_; 
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3002_ == 0)
{
lean_object* v_unused_3003_; 
v_unused_3003_ = lean_ctor_get(v___x_2988_, 0);
lean_dec(v_unused_3003_);
v___x_2990_ = v___x_2988_;
v_isShared_2991_ = v_isSharedCheck_3002_;
goto v_resetjp_2989_;
}
else
{
lean_dec(v___x_2988_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3002_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
size_t v___x_2992_; size_t v___x_2993_; uint8_t v___x_2994_; 
v___x_2992_ = lean_ptr_addr(v___y_2971_);
lean_dec_ref(v___y_2971_);
v___x_2993_ = lean_ptr_addr(v___y_2973_);
v___x_2994_ = lean_usize_dec_eq(v___x_2992_, v___x_2993_);
if (v___x_2994_ == 0)
{
lean_del_object(v___x_2990_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v_code_2361_);
v___y_2962_ = v___y_2970_;
v___y_2963_ = v___y_2973_;
v___y_2964_ = v___y_2975_;
v___y_2965_ = v___y_2976_;
goto v___jp_2961_;
}
else
{
size_t v___x_2995_; size_t v___x_2996_; uint8_t v___x_2997_; 
v___x_2995_ = lean_ptr_addr(v___y_2974_);
lean_dec_ref(v___y_2974_);
v___x_2996_ = lean_ptr_addr(v___y_2976_);
v___x_2997_ = lean_usize_dec_eq(v___x_2995_, v___x_2996_);
if (v___x_2997_ == 0)
{
lean_del_object(v___x_2990_);
lean_dec(v___y_2977_);
lean_dec_ref(v_code_2361_);
v___y_2962_ = v___y_2970_;
v___y_2963_ = v___y_2973_;
v___y_2964_ = v___y_2975_;
v___y_2965_ = v___y_2976_;
goto v___jp_2961_;
}
else
{
uint8_t v___x_2998_; 
v___x_2998_ = l_Lean_instBEqFVarId_beq(v___y_2977_, v___y_2975_);
lean_dec(v___y_2977_);
if (v___x_2998_ == 0)
{
lean_del_object(v___x_2990_);
lean_dec_ref(v_code_2361_);
v___y_2962_ = v___y_2970_;
v___y_2963_ = v___y_2973_;
v___y_2964_ = v___y_2975_;
v___y_2965_ = v___y_2976_;
goto v___jp_2961_;
}
else
{
lean_object* v___x_3000_; 
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2973_);
lean_dec(v___y_2970_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 0, v_code_2361_);
v___x_3000_ = v___x_2990_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_code_2361_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v_code_2361_);
v_a_3004_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2988_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2988_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
}
}
}
v___jp_3012_:
{
lean_object* v___x_3015_; 
v___x_3015_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_3014_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3022_ == 0)
{
lean_object* v_unused_3023_; 
v_unused_3023_ = lean_ctor_get(v___x_3015_, 0);
lean_dec(v_unused_3023_);
v___x_3017_ = v___x_3015_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_dec(v___x_3015_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 0, v___y_3013_);
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___y_3013_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_dec_ref(v___y_3013_);
v_a_3024_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_3015_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3015_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
v___jp_3032_:
{
if (lean_obj_tag(v___y_3035_) == 0)
{
lean_dec_ref_known(v___y_3035_, 1);
v___y_3013_ = v___y_3033_;
v___y_3014_ = v___y_3034_;
goto v___jp_3012_;
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec_ref(v___y_3033_);
v_a_3036_ = lean_ctor_get(v___y_3035_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___y_3035_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___y_3035_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___y_3035_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
v___jp_3044_:
{
uint8_t v___x_3051_; 
v___x_3051_ = lean_nat_dec_lt(v___y_3046_, v___y_3045_);
lean_dec(v___y_3046_);
if (v___x_3051_ == 0)
{
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
v___y_3013_ = v___y_3048_;
v___y_3014_ = v___y_3050_;
goto v___jp_3012_;
}
else
{
lean_object* v___x_3052_; uint8_t v___x_3053_; 
v___x_3052_ = lean_box(0);
v___x_3053_ = lean_nat_dec_le(v___y_3045_, v___y_3045_);
if (v___x_3053_ == 0)
{
if (v___x_3051_ == 0)
{
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
v___y_3013_ = v___y_3048_;
v___y_3014_ = v___y_3050_;
goto v___jp_3012_;
}
else
{
size_t v___x_3054_; size_t v___x_3055_; lean_object* v___x_3056_; 
v___x_3054_ = ((size_t)0ULL);
v___x_3055_ = lean_usize_of_nat(v___y_3045_);
lean_dec(v___y_3045_);
v___x_3056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_3047_, v___x_3054_, v___x_3055_, v___x_3052_, v___y_3049_);
lean_dec_ref(v___y_3047_);
v___y_3033_ = v___y_3048_;
v___y_3034_ = v___y_3050_;
v___y_3035_ = v___x_3056_;
goto v___jp_3032_;
}
}
else
{
size_t v___x_3057_; size_t v___x_3058_; lean_object* v___x_3059_; 
v___x_3057_ = ((size_t)0ULL);
v___x_3058_ = lean_usize_of_nat(v___y_3045_);
lean_dec(v___y_3045_);
v___x_3059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_3047_, v___x_3057_, v___x_3058_, v___x_3052_, v___y_3049_);
lean_dec_ref(v___y_3047_);
v___y_3033_ = v___y_3048_;
v___y_3034_ = v___y_3050_;
v___y_3035_ = v___x_3059_;
goto v___jp_3032_;
}
}
}
v___jp_3060_:
{
switch(lean_obj_tag(v_code_2361_))
{
case 0:
{
lean_object* v_decl_3068_; lean_object* v_k_3069_; uint8_t v___x_3070_; uint8_t v___x_3071_; lean_object* v___x_3072_; 
v_decl_3068_ = lean_ctor_get(v_code_2361_, 0);
v_k_3069_ = lean_ctor_get(v_code_2361_, 1);
v___x_3070_ = 0;
v___x_3071_ = 0;
lean_inc_ref(v_decl_3068_);
v___x_3072_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v___x_3070_, v___x_3071_, v_decl_3068_, v___y_3062_, v___y_3065_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; uint8_t v___x_3074_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3072_, 1);
v___x_3074_ = l_Lean_Compiler_LCNF_instBEqLetDecl_beq(v___x_3070_, v_decl_3068_, v_a_3073_);
if (v___x_3074_ == 0)
{
lean_object* v___x_3075_; 
v___x_3075_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_3062_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_dec_ref_known(v___x_3075_, 1);
lean_inc_ref(v_k_3069_);
lean_inc_ref(v_decl_3068_);
v___y_2832_ = v_decl_3068_;
v___y_2833_ = v_a_3073_;
v___y_2834_ = v_k_3069_;
v___y_2835_ = v___x_3070_;
v___y_2836_ = v___y_3061_;
v___y_2837_ = v___y_3062_;
v___y_2838_ = v___y_3063_;
v___y_2839_ = v___y_3064_;
v___y_2840_ = v___y_3065_;
v___y_2841_ = v___y_3066_;
v___y_2842_ = v___y_3067_;
goto v___jp_2831_;
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v_a_3073_);
lean_dec_ref_known(v_code_2361_, 2);
lean_dec_ref(v___y_3066_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_inc_ref(v_k_3069_);
lean_inc_ref(v_decl_3068_);
v___y_2832_ = v_decl_3068_;
v___y_2833_ = v_a_3073_;
v___y_2834_ = v_k_3069_;
v___y_2835_ = v___x_3070_;
v___y_2836_ = v___y_3061_;
v___y_2837_ = v___y_3062_;
v___y_2838_ = v___y_3063_;
v___y_2839_ = v___y_3064_;
v___y_2840_ = v___y_3065_;
v___y_2841_ = v___y_3066_;
v___y_2842_ = v___y_3067_;
goto v___jp_2831_;
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec_ref_known(v_code_2361_, 2);
lean_dec_ref(v___y_3066_);
v_a_3084_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3072_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3072_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3092_; lean_object* v_args_3093_; uint8_t v___x_3094_; uint8_t v___x_3095_; lean_object* v___x_3096_; lean_object* v_subst_3097_; lean_object* v___x_3098_; 
v_fvarId_3092_ = lean_ctor_get(v_code_2361_, 0);
v_args_3093_ = lean_ctor_get(v_code_2361_, 1);
v___x_3094_ = 0;
v___x_3095_ = 0;
v___x_3096_ = lean_st_ref_get(v___y_3062_);
v_subst_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc_ref(v_subst_3097_);
lean_dec(v___x_3096_);
lean_inc(v_fvarId_3092_);
v___x_3098_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3097_, v_fvarId_3092_, v___x_3095_);
lean_dec_ref(v_subst_3097_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_fvarId_3099_; lean_object* v___x_3100_; 
v_fvarId_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_fvarId_3099_);
lean_dec_ref_known(v___x_3098_, 1);
lean_inc_ref(v_args_3093_);
v___x_3100_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v___x_3094_, v___x_3095_, v_args_3093_, v___y_3062_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; lean_object* v___x_3102_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc_n(v_a_3101_, 2);
lean_dec_ref_known(v___x_3100_, 1);
v___x_3102_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_3099_, v_a_3101_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
lean_dec_ref_known(v___x_3102_, 1);
if (lean_obj_tag(v_a_3103_) == 1)
{
lean_object* v_val_3104_; 
lean_dec(v_a_3101_);
lean_dec(v_fvarId_3099_);
lean_dec_ref_known(v_code_2361_, 2);
v_val_3104_ = lean_ctor_get(v_a_3103_, 0);
lean_inc(v_val_3104_);
lean_dec_ref_known(v_a_3103_, 1);
v_code_2361_ = v_val_3104_;
v_a_2362_ = v___y_3061_;
v_a_2363_ = v___y_3062_;
v_a_2364_ = v___y_3063_;
v_a_2365_ = v___y_3064_;
v_a_2366_ = v___y_3065_;
v_a_2367_ = v___y_3066_;
v_a_2368_ = v___y_3067_;
goto _start;
}
else
{
lean_object* v___x_3106_; 
lean_dec(v_a_3103_);
lean_dec_ref(v___y_3066_);
lean_inc(v_fvarId_3099_);
v___x_3106_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3099_, v___y_3062_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v___x_3107_; lean_object* v___x_3108_; uint8_t v___x_3109_; 
lean_dec_ref_known(v___x_3106_, 1);
v___x_3107_ = lean_unsigned_to_nat(0u);
v___x_3108_ = lean_array_get_size(v_a_3101_);
v___x_3109_ = lean_nat_dec_lt(v___x_3107_, v___x_3108_);
if (v___x_3109_ == 0)
{
lean_inc(v_fvarId_3092_);
lean_inc_ref(v_args_3093_);
v___y_2887_ = v_a_3101_;
v___y_2888_ = v_fvarId_3099_;
v___y_2889_ = v_args_3093_;
v___y_2890_ = v_fvarId_3092_;
goto v___jp_2886_;
}
else
{
lean_object* v___x_3110_; uint8_t v___x_3111_; 
v___x_3110_ = lean_box(0);
v___x_3111_ = lean_nat_dec_le(v___x_3108_, v___x_3108_);
if (v___x_3111_ == 0)
{
if (v___x_3109_ == 0)
{
lean_inc(v_fvarId_3092_);
lean_inc_ref(v_args_3093_);
v___y_2887_ = v_a_3101_;
v___y_2888_ = v_fvarId_3099_;
v___y_2889_ = v_args_3093_;
v___y_2890_ = v_fvarId_3092_;
goto v___jp_2886_;
}
else
{
size_t v___x_3112_; size_t v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = ((size_t)0ULL);
v___x_3113_ = lean_usize_of_nat(v___x_3108_);
v___x_3114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3101_, v___x_3112_, v___x_3113_, v___x_3110_, v___y_3062_);
lean_inc(v_fvarId_3092_);
lean_inc_ref(v_args_3093_);
v___y_2896_ = v_a_3101_;
v___y_2897_ = v_fvarId_3099_;
v___y_2898_ = v_args_3093_;
v___y_2899_ = v_fvarId_3092_;
v___y_2900_ = v___x_3114_;
goto v___jp_2895_;
}
}
else
{
size_t v___x_3115_; size_t v___x_3116_; lean_object* v___x_3117_; 
v___x_3115_ = ((size_t)0ULL);
v___x_3116_ = lean_usize_of_nat(v___x_3108_);
v___x_3117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3101_, v___x_3115_, v___x_3116_, v___x_3110_, v___y_3062_);
lean_inc(v_fvarId_3092_);
lean_inc_ref(v_args_3093_);
v___y_2896_ = v_a_3101_;
v___y_2897_ = v_fvarId_3099_;
v___y_2898_ = v_args_3093_;
v___y_2899_ = v_fvarId_3092_;
v___y_2900_ = v___x_3117_;
goto v___jp_2895_;
}
}
}
else
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3125_; 
lean_dec(v_a_3101_);
lean_dec(v_fvarId_3099_);
lean_dec_ref_known(v_code_2361_, 2);
v_a_3118_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3120_ = v___x_3106_;
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3106_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3123_; 
if (v_isShared_3121_ == 0)
{
v___x_3123_ = v___x_3120_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3118_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
lean_dec(v_a_3101_);
lean_dec(v_fvarId_3099_);
lean_dec_ref_known(v_code_2361_, 2);
lean_dec_ref(v___y_3066_);
v_a_3126_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3102_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3102_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec(v_fvarId_3099_);
lean_dec_ref_known(v_code_2361_, 2);
lean_dec_ref(v___y_3066_);
v_a_3134_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3100_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3100_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
else
{
lean_object* v___x_3142_; 
lean_dec_ref_known(v_code_2361_, 2);
v___x_3142_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3094_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
lean_dec_ref(v___y_3066_);
return v___x_3142_;
}
}
case 4:
{
lean_object* v_cases_3143_; lean_object* v___x_3144_; 
v_cases_3143_ = lean_ctor_get(v_code_2361_, 0);
lean_inc_ref(v_cases_3143_);
v___x_3144_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3143_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3217_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3217_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3217_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
if (lean_obj_tag(v_a_3145_) == 1)
{
lean_object* v_val_3149_; lean_object* v___x_3151_; 
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v_val_3149_ = lean_ctor_get(v_a_3145_, 0);
lean_inc(v_val_3149_);
lean_dec_ref_known(v_a_3145_, 1);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v_val_3149_);
v___x_3151_ = v___x_3147_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_val_3149_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
else
{
lean_object* v_typeName_3153_; lean_object* v_resultType_3154_; lean_object* v_discr_3155_; lean_object* v_alts_3156_; uint8_t v___x_3157_; uint8_t v___x_3158_; lean_object* v___x_3159_; lean_object* v_subst_3160_; lean_object* v___x_3161_; 
lean_del_object(v___x_3147_);
lean_dec(v_a_3145_);
v_typeName_3153_ = lean_ctor_get(v_cases_3143_, 0);
v_resultType_3154_ = lean_ctor_get(v_cases_3143_, 1);
v_discr_3155_ = lean_ctor_get(v_cases_3143_, 2);
v_alts_3156_ = lean_ctor_get(v_cases_3143_, 3);
v___x_3157_ = 0;
v___x_3158_ = 0;
v___x_3159_ = lean_st_ref_get(v___y_3062_);
v_subst_3160_ = lean_ctor_get(v___x_3159_, 0);
lean_inc_ref(v_subst_3160_);
lean_dec(v___x_3159_);
lean_inc(v_discr_3155_);
v___x_3161_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3160_, v_discr_3155_, v___x_3158_);
lean_dec_ref(v_subst_3160_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_fvarId_3162_; lean_object* v___x_3163_; lean_object* v_subst_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v_fvarId_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc_n(v_fvarId_3162_, 2);
lean_dec_ref_known(v___x_3161_, 1);
v___x_3163_ = lean_st_ref_get(v___y_3062_);
v_subst_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc_ref(v_subst_3164_);
lean_dec(v___x_3163_);
lean_inc_ref(v_resultType_3154_);
v___x_3165_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3157_, v_subst_3164_, v___x_3158_, v_resultType_3154_);
lean_dec_ref(v_subst_3164_);
v___x_3166_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3156_);
v___x_3167_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_fvarId_3162_, v___x_3166_, v_alts_3156_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v_a_3168_; lean_object* v___x_3169_; 
v_a_3168_ = lean_ctor_get(v___x_3167_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v___x_3167_, 1);
v___x_3169_ = l_Lean_Compiler_LCNF_Simp_addDefaultAlt(v_a_3168_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_object* v_a_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3199_; 
v_a_3170_ = lean_ctor_get(v___x_3169_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3172_ = v___x_3169_;
v_isShared_3173_ = v_isSharedCheck_3199_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_a_3170_);
lean_dec(v___x_3169_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3199_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; uint8_t v___x_3176_; 
v___x_3174_ = lean_array_get_size(v_a_3170_);
v___x_3175_ = lean_unsigned_to_nat(1u);
v___x_3176_ = lean_nat_dec_eq(v___x_3174_, v___x_3175_);
if (v___x_3176_ == 0)
{
lean_del_object(v___x_3172_);
lean_inc(v_discr_3155_);
lean_inc_ref(v_resultType_3154_);
lean_inc_ref(v_alts_3156_);
lean_inc(v_typeName_3153_);
v___y_2970_ = v_typeName_3153_;
v___y_2971_ = v_alts_3156_;
v___y_2972_ = v___x_3166_;
v___y_2973_ = v_a_3170_;
v___y_2974_ = v_resultType_3154_;
v___y_2975_ = v_fvarId_3162_;
v___y_2976_ = v___x_3165_;
v___y_2977_ = v_discr_3155_;
v___y_2978_ = v___y_3062_;
v___y_2979_ = v___y_3064_;
v___y_2980_ = v___y_3065_;
v___y_2981_ = v___y_3066_;
v___y_2982_ = v___y_3067_;
goto v___jp_2969_;
}
else
{
lean_object* v___x_3177_; 
v___x_3177_ = lean_array_fget_borrowed(v_a_3170_, v___x_3166_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_params_3178_; lean_object* v_code_3179_; lean_object* v___x_3180_; uint8_t v___x_3181_; 
lean_del_object(v___x_3172_);
v_params_3178_ = lean_ctor_get(v___x_3177_, 1);
v_code_3179_ = lean_ctor_get(v___x_3177_, 2);
v___x_3180_ = lean_array_get_size(v_params_3178_);
v___x_3181_ = lean_nat_dec_lt(v___x_3166_, v___x_3180_);
if (v___x_3181_ == 0)
{
lean_inc_ref(v_code_3179_);
lean_inc_ref(v_params_3178_);
lean_dec(v_a_3170_);
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v___y_3045_ = v___x_3180_;
v___y_3046_ = v___x_3166_;
v___y_3047_ = v_params_3178_;
v___y_3048_ = v_code_3179_;
v___y_3049_ = v___y_3065_;
v___y_3050_ = v___y_3062_;
goto v___jp_3044_;
}
else
{
if (v___x_3181_ == 0)
{
lean_inc_ref(v_code_3179_);
lean_inc_ref(v_params_3178_);
lean_dec(v_a_3170_);
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v___y_3045_ = v___x_3180_;
v___y_3046_ = v___x_3166_;
v___y_3047_ = v_params_3178_;
v___y_3048_ = v_code_3179_;
v___y_3049_ = v___y_3065_;
v___y_3050_ = v___y_3062_;
goto v___jp_3044_;
}
else
{
size_t v___x_3182_; size_t v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = ((size_t)0ULL);
v___x_3183_ = lean_usize_of_nat(v___x_3180_);
v___x_3184_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_params_3178_, v___x_3182_, v___x_3183_, v___y_3062_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; uint8_t v___x_3186_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v___x_3186_ = lean_unbox(v_a_3185_);
lean_dec(v_a_3185_);
if (v___x_3186_ == 0)
{
lean_inc_ref(v_code_3179_);
lean_inc_ref(v_params_3178_);
lean_dec(v_a_3170_);
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v___y_3045_ = v___x_3180_;
v___y_3046_ = v___x_3166_;
v___y_3047_ = v_params_3178_;
v___y_3048_ = v_code_3179_;
v___y_3049_ = v___y_3065_;
v___y_3050_ = v___y_3062_;
goto v___jp_3044_;
}
else
{
lean_inc(v_discr_3155_);
lean_inc_ref(v_resultType_3154_);
lean_inc_ref(v_alts_3156_);
lean_inc(v_typeName_3153_);
v___y_2970_ = v_typeName_3153_;
v___y_2971_ = v_alts_3156_;
v___y_2972_ = v___x_3166_;
v___y_2973_ = v_a_3170_;
v___y_2974_ = v_resultType_3154_;
v___y_2975_ = v_fvarId_3162_;
v___y_2976_ = v___x_3165_;
v___y_2977_ = v_discr_3155_;
v___y_2978_ = v___y_3062_;
v___y_2979_ = v___y_3064_;
v___y_2980_ = v___y_3065_;
v___y_2981_ = v___y_3066_;
v___y_2982_ = v___y_3067_;
goto v___jp_2969_;
}
}
else
{
lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
lean_dec(v_a_3170_);
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v_a_3187_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3189_ = v___x_3184_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_dec(v___x_3184_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3187_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
}
}
else
{
lean_object* v_code_3195_; lean_object* v___x_3197_; 
lean_inc_ref(v___x_3177_);
lean_dec(v_a_3170_);
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v_code_3195_ = lean_ctor_get(v___x_3177_, 0);
lean_inc_ref(v_code_3195_);
lean_dec_ref_known(v___x_3177_, 1);
if (v_isShared_3173_ == 0)
{
lean_ctor_set(v___x_3172_, 0, v_code_3195_);
v___x_3197_ = v___x_3172_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_code_3195_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v_a_3200_ = lean_ctor_get(v___x_3169_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3169_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3169_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
lean_dec_ref(v___x_3165_);
lean_dec(v_fvarId_3162_);
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v_a_3208_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3167_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3167_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
else
{
lean_object* v___x_3216_; 
lean_dec_ref_known(v_code_2361_, 1);
v___x_3216_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3157_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
lean_dec_ref(v___y_3066_);
return v___x_3216_;
}
}
}
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
lean_dec_ref_known(v_code_2361_, 1);
lean_dec_ref(v___y_3066_);
v_a_3218_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___x_3144_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3144_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3223_; 
if (v_isShared_3221_ == 0)
{
v___x_3223_ = v___x_3220_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_3226_; uint8_t v___x_3227_; uint8_t v___x_3228_; lean_object* v___x_3229_; lean_object* v_subst_3230_; lean_object* v___x_3231_; 
v_fvarId_3226_ = lean_ctor_get(v_code_2361_, 0);
v___x_3227_ = 0;
v___x_3228_ = 0;
v___x_3229_ = lean_st_ref_get(v___y_3062_);
v_subst_3230_ = lean_ctor_get(v___x_3229_, 0);
lean_inc_ref(v_subst_3230_);
lean_dec(v___x_3229_);
lean_inc(v_fvarId_3226_);
v___x_3231_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3230_, v_fvarId_3226_, v___x_3228_);
lean_dec_ref(v_subst_3230_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_fvarId_3232_; lean_object* v___x_3233_; 
lean_dec_ref(v___y_3066_);
v_fvarId_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc_n(v_fvarId_3232_, 2);
lean_dec_ref_known(v___x_3231_, 1);
v___x_3233_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3232_, v___y_3062_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3252_; 
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3252_ == 0)
{
lean_object* v_unused_3253_; 
v_unused_3253_ = lean_ctor_get(v___x_3233_, 0);
lean_dec(v_unused_3253_);
v___x_3235_ = v___x_3233_;
v_isShared_3236_ = v_isSharedCheck_3252_;
goto v_resetjp_3234_;
}
else
{
lean_dec(v___x_3233_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3252_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
uint8_t v___x_3237_; 
v___x_3237_ = l_Lean_instBEqFVarId_beq(v_fvarId_3226_, v_fvarId_3232_);
if (v___x_3237_ == 0)
{
lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3247_; 
v_isSharedCheck_3247_ = !lean_is_exclusive(v_code_2361_);
if (v_isSharedCheck_3247_ == 0)
{
lean_object* v_unused_3248_; 
v_unused_3248_ = lean_ctor_get(v_code_2361_, 0);
lean_dec(v_unused_3248_);
v___x_3239_ = v_code_2361_;
v_isShared_3240_ = v_isSharedCheck_3247_;
goto v_resetjp_3238_;
}
else
{
lean_dec(v_code_2361_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3247_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3242_; 
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 0, v_fvarId_3232_);
v___x_3242_ = v___x_3239_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_fvarId_3232_);
v___x_3242_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
lean_object* v___x_3244_; 
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3242_);
v___x_3244_ = v___x_3235_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v___x_3250_; 
lean_dec(v_fvarId_3232_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v_code_2361_);
v___x_3250_ = v___x_3235_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_code_2361_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_dec(v_fvarId_3232_);
lean_dec_ref_known(v_code_2361_, 1);
v_a_3254_ = lean_ctor_get(v___x_3233_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3233_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3233_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
else
{
lean_object* v___x_3262_; 
lean_dec_ref_known(v_code_2361_, 1);
v___x_3262_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3227_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
lean_dec_ref(v___y_3066_);
return v___x_3262_;
}
}
case 6:
{
lean_object* v_type_3263_; uint8_t v___x_3264_; uint8_t v___x_3265_; lean_object* v___x_3266_; lean_object* v_subst_3267_; lean_object* v___x_3268_; size_t v___x_3269_; size_t v___x_3270_; uint8_t v___x_3271_; 
lean_dec_ref(v___y_3066_);
v_type_3263_ = lean_ctor_get(v_code_2361_, 0);
v___x_3264_ = 0;
v___x_3265_ = 0;
v___x_3266_ = lean_st_ref_get(v___y_3062_);
v_subst_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc_ref(v_subst_3267_);
lean_dec(v___x_3266_);
lean_inc_ref(v_type_3263_);
v___x_3268_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3264_, v_subst_3267_, v___x_3265_, v_type_3263_);
lean_dec_ref(v_subst_3267_);
v___x_3269_ = lean_ptr_addr(v_type_3263_);
v___x_3270_ = lean_ptr_addr(v___x_3268_);
v___x_3271_ = lean_usize_dec_eq(v___x_3269_, v___x_3270_);
if (v___x_3271_ == 0)
{
lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3279_; 
v_isSharedCheck_3279_ = !lean_is_exclusive(v_code_2361_);
if (v_isSharedCheck_3279_ == 0)
{
lean_object* v_unused_3280_; 
v_unused_3280_ = lean_ctor_get(v_code_2361_, 0);
lean_dec(v_unused_3280_);
v___x_3273_ = v_code_2361_;
v_isShared_3274_ = v_isSharedCheck_3279_;
goto v_resetjp_3272_;
}
else
{
lean_dec(v_code_2361_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3279_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 0, v___x_3268_);
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3268_);
v___x_3276_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3277_; 
v___x_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
return v___x_3277_;
}
}
}
else
{
lean_object* v___x_3281_; 
lean_dec_ref(v___x_3268_);
v___x_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3281_, 0, v_code_2361_);
return v___x_3281_;
}
}
default: 
{
lean_object* v_decl_3282_; lean_object* v_k_3283_; 
v_decl_3282_ = lean_ctor_get(v_code_2361_, 0);
v_k_3283_ = lean_ctor_get(v_code_2361_, 1);
lean_inc_ref(v_k_3283_);
lean_inc_ref(v_decl_3282_);
v_decl_2507_ = v_decl_3282_;
v_k_2508_ = v_k_3283_;
v___y_2509_ = v___y_3061_;
v___y_2510_ = v___y_3062_;
v___y_2511_ = v___y_3063_;
v___y_2512_ = v___y_3064_;
v___y_2513_ = v___y_3065_;
v___y_2514_ = v___y_3066_;
v___y_2515_ = v___y_3067_;
goto v___jp_2506_;
}
}
}
v___jp_3289_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3290_ = lean_unsigned_to_nat(1u);
v___x_3291_ = lean_nat_add(v_currRecDepth_3285_, v___x_3290_);
lean_dec(v_currRecDepth_3285_);
v___x_3292_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3292_, 0, v_toCold_3284_);
lean_ctor_set(v___x_3292_, 1, v___x_3291_);
lean_ctor_set(v___x_3292_, 2, v_ref_3286_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*3, v_diag_3287_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*3 + 1, v_suppressElabErrors_3288_);
v___x_3293_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v_a_2363_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v___x_3294_; lean_object* v_visited_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; uint8_t v___x_3299_; 
lean_dec_ref_known(v___x_3293_, 1);
v___x_3294_ = lean_st_ref_get(v_a_2363_);
v_visited_3295_ = lean_ctor_get(v___x_3294_, 4);
lean_inc(v_visited_3295_);
lean_dec(v___x_3294_);
v___x_3296_ = lean_unsigned_to_nat(128u);
v___x_3297_ = lean_nat_mod(v_visited_3295_, v___x_3296_);
lean_dec(v_visited_3295_);
v___x_3298_ = lean_unsigned_to_nat(0u);
v___x_3299_ = lean_nat_dec_eq(v___x_3297_, v___x_3298_);
lean_dec(v___x_3297_);
if (v___x_3299_ == 0)
{
v___y_3061_ = v_a_2362_;
v___y_3062_ = v_a_2363_;
v___y_3063_ = v_a_2364_;
v___y_3064_ = v_a_2365_;
v___y_3065_ = v_a_2366_;
v___y_3066_ = v___x_3292_;
v___y_3067_ = v_a_2368_;
goto v___jp_3060_;
}
else
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__4));
v___x_3301_ = l_Lean_Core_checkSystem(v___x_3300_, v___x_3292_, v_a_2368_);
if (lean_obj_tag(v___x_3301_) == 0)
{
lean_dec_ref_known(v___x_3301_, 1);
v___y_3061_ = v_a_2362_;
v___y_3062_ = v_a_2363_;
v___y_3063_ = v_a_2364_;
v___y_3064_ = v_a_2365_;
v___y_3065_ = v_a_2366_;
v___y_3066_ = v___x_3292_;
v___y_3067_ = v_a_2368_;
goto v___jp_3060_;
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec_ref_known(v___x_3292_, 3);
lean_dec_ref(v_code_2361_);
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3301_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3301_);
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
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
lean_dec_ref_known(v___x_3292_, 3);
lean_dec_ref(v_code_2361_);
v_a_3310_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3293_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3293_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object* v_decl_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_){
_start:
{
lean_object* v_params_3332_; lean_object* v_type_3333_; lean_object* v_value_3334_; uint8_t v___x_3335_; uint8_t v___x_3336_; lean_object* v___x_3337_; lean_object* v_subst_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v_params_3332_ = lean_ctor_get(v_decl_3323_, 2);
v_type_3333_ = lean_ctor_get(v_decl_3323_, 3);
v_value_3334_ = lean_ctor_get(v_decl_3323_, 4);
v___x_3335_ = 0;
v___x_3336_ = 0;
v___x_3337_ = lean_st_ref_get(v_a_3325_);
v_subst_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc_ref(v_subst_3338_);
lean_dec(v___x_3337_);
lean_inc_ref(v_type_3333_);
v___x_3339_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3335_, v_subst_3338_, v___x_3336_, v_type_3333_);
lean_dec_ref(v_subst_3338_);
lean_inc_ref(v_params_3332_);
v___x_3340_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v___x_3335_, v___x_3336_, v_params_3332_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_, v_a_3330_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3342_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3340_, 1);
lean_inc_ref(v_a_3329_);
lean_inc_ref(v_value_3334_);
v___x_3342_ = l_Lean_Compiler_LCNF_Simp_simp(v_value_3334_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_, v_a_3330_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3344_; 
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
lean_inc(v_a_3343_);
lean_dec_ref_known(v___x_3342_, 1);
v___x_3344_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3335_, v_decl_3323_, v___x_3339_, v_a_3341_, v_a_3343_, v_a_3328_);
return v___x_3344_;
}
else
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3352_; 
lean_dec(v_a_3341_);
lean_dec_ref(v___x_3339_);
lean_dec_ref(v_decl_3323_);
v_a_3345_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3347_ = v___x_3342_;
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v___x_3342_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3360_; 
lean_dec_ref(v___x_3339_);
lean_dec_ref(v_decl_3323_);
v_a_3353_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3355_ = v___x_3340_;
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v___x_3340_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3353_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object* v_decl_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_){
_start:
{
lean_object* v_res_3370_; 
v_res_3370_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_);
lean_dec(v_a_3368_);
lean_dec_ref(v_a_3367_);
lean_dec(v_a_3366_);
lean_dec_ref(v_a_3365_);
lean_dec_ref(v_a_3364_);
lean_dec(v_a_3363_);
lean_dec_ref(v_a_3362_);
return v_res_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object* v_fvarId_3371_, lean_object* v_i_3372_, lean_object* v_as_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_fvarId_3371_, v_i_3372_, v_as_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object* v_cases_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_);
lean_dec(v_a_3390_);
lean_dec_ref(v_a_3389_);
lean_dec(v_a_3388_);
lean_dec_ref(v_a_3387_);
lean_dec_ref(v_a_3386_);
lean_dec(v_a_3385_);
lean_dec_ref(v_a_3384_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object* v_letDecl_3393_, lean_object* v_k_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v_letDecl_3393_, v_k_3394_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_);
lean_dec(v_a_3401_);
lean_dec_ref(v_a_3400_);
lean_dec(v_a_3399_);
lean_dec_ref(v_a_3398_);
lean_dec_ref(v_a_3397_);
lean_dec(v_a_3396_);
lean_dec_ref(v_a_3395_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object* v_code_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_){
_start:
{
lean_object* v_res_3413_; 
v_res_3413_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_);
lean_dec(v_a_3411_);
lean_dec(v_a_3409_);
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
lean_dec(v_a_3406_);
lean_dec_ref(v_a_3405_);
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t v_pu_3414_, uint8_t v_t_3415_, lean_object* v_decl_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_3414_, v_t_3415_, v_decl_3416_, v___y_3418_, v___y_3421_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object* v_pu_3426_, lean_object* v_t_3427_, lean_object* v_decl_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
uint8_t v_pu_boxed_3437_; uint8_t v_t_boxed_3438_; lean_object* v_res_3439_; 
v_pu_boxed_3437_ = lean_unbox(v_pu_3426_);
v_t_boxed_3438_ = lean_unbox(v_t_3427_);
v_res_3439_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(v_pu_boxed_3437_, v_t_boxed_3438_, v_decl_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_);
lean_dec(v___y_3435_);
lean_dec_ref(v___y_3434_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec_ref(v___y_3431_);
lean_dec(v___y_3430_);
lean_dec_ref(v___y_3429_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t v_pu_3440_, uint8_t v_t_3441_, lean_object* v_args_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_){
_start:
{
lean_object* v___x_3451_; 
v___x_3451_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_3440_, v_t_3441_, v_args_3442_, v___y_3444_);
return v___x_3451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object* v_pu_3452_, lean_object* v_t_3453_, lean_object* v_args_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
uint8_t v_pu_boxed_3463_; uint8_t v_t_boxed_3464_; lean_object* v_res_3465_; 
v_pu_boxed_3463_ = lean_unbox(v_pu_3452_);
v_t_boxed_3464_ = lean_unbox(v_t_3453_);
v_res_3465_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(v_pu_boxed_3463_, v_t_boxed_3464_, v_args_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
return v_res_3465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object* v_inst_3466_, lean_object* v_R_3467_, lean_object* v_a_3468_, lean_object* v_b_3469_){
_start:
{
lean_object* v___x_3470_; 
v___x_3470_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v_a_3468_, v_b_3469_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object* v_00_u03b2_3471_, lean_object* v_x_3472_, lean_object* v_x_3473_, lean_object* v_x_3474_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_x_3472_, v_x_3473_, v_x_3474_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object* v_as_3476_, size_t v_i_3477_, size_t v_stop_3478_, lean_object* v_b_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_3476_, v_i_3477_, v_stop_3478_, v_b_3479_, v___y_3481_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object* v_as_3489_, lean_object* v_i_3490_, lean_object* v_stop_3491_, lean_object* v_b_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
size_t v_i_boxed_3501_; size_t v_stop_boxed_3502_; lean_object* v_res_3503_; 
v_i_boxed_3501_ = lean_unbox_usize(v_i_3490_);
lean_dec(v_i_3490_);
v_stop_boxed_3502_ = lean_unbox_usize(v_stop_3491_);
lean_dec(v_stop_3491_);
v_res_3503_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(v_as_3489_, v_i_boxed_3501_, v_stop_boxed_3502_, v_b_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec(v___y_3499_);
lean_dec_ref(v___y_3498_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec_ref(v_as_3489_);
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object* v_as_3504_, size_t v_i_3505_, size_t v_stop_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_3504_, v_i_3505_, v_stop_3506_, v___y_3513_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object* v_as_3516_, lean_object* v_i_3517_, lean_object* v_stop_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_){
_start:
{
size_t v_i_boxed_3527_; size_t v_stop_boxed_3528_; lean_object* v_res_3529_; 
v_i_boxed_3527_ = lean_unbox_usize(v_i_3517_);
lean_dec(v_i_3517_);
v_stop_boxed_3528_ = lean_unbox_usize(v_stop_3518_);
lean_dec(v_stop_3518_);
v_res_3529_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(v_as_3516_, v_i_boxed_3527_, v_stop_boxed_3528_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
lean_dec(v___y_3525_);
lean_dec_ref(v___y_3524_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v_as_3516_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object* v_as_3530_, size_t v_i_3531_, size_t v_stop_3532_, lean_object* v_b_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
lean_object* v___x_3539_; 
v___x_3539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v_as_3530_, v_i_3531_, v_stop_3532_, v_b_3533_, v___y_3535_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object* v_as_3540_, lean_object* v_i_3541_, lean_object* v_stop_3542_, lean_object* v_b_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
size_t v_i_boxed_3549_; size_t v_stop_boxed_3550_; lean_object* v_res_3551_; 
v_i_boxed_3549_ = lean_unbox_usize(v_i_3541_);
lean_dec(v_i_3541_);
v_stop_boxed_3550_ = lean_unbox_usize(v_stop_3542_);
lean_dec(v_stop_3542_);
v_res_3551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(v_as_3540_, v_i_boxed_3549_, v_stop_boxed_3550_, v_b_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec_ref(v_as_3540_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object* v_as_3552_, size_t v_i_3553_, size_t v_stop_3554_, lean_object* v_b_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_){
_start:
{
lean_object* v___x_3564_; 
v___x_3564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_3552_, v_i_3553_, v_stop_3554_, v_b_3555_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object* v_as_3565_, lean_object* v_i_3566_, lean_object* v_stop_3567_, lean_object* v_b_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
size_t v_i_boxed_3577_; size_t v_stop_boxed_3578_; lean_object* v_res_3579_; 
v_i_boxed_3577_ = lean_unbox_usize(v_i_3566_);
lean_dec(v_i_3566_);
v_stop_boxed_3578_ = lean_unbox_usize(v_stop_3567_);
lean_dec(v_stop_3567_);
v_res_3579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(v_as_3565_, v_i_boxed_3577_, v_stop_boxed_3578_, v_b_3568_, v___y_3569_, v___y_3570_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec(v___y_3570_);
lean_dec_ref(v___y_3569_);
lean_dec_ref(v_as_3565_);
return v_res_3579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object* v_as_3580_, size_t v_i_3581_, size_t v_stop_3582_, lean_object* v_b_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_3580_, v_i_3581_, v_stop_3582_, v_b_3583_, v___y_3588_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object* v_as_3593_, lean_object* v_i_3594_, lean_object* v_stop_3595_, lean_object* v_b_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_){
_start:
{
size_t v_i_boxed_3605_; size_t v_stop_boxed_3606_; lean_object* v_res_3607_; 
v_i_boxed_3605_ = lean_unbox_usize(v_i_3594_);
lean_dec(v_i_3594_);
v_stop_boxed_3606_ = lean_unbox_usize(v_stop_3595_);
lean_dec(v_stop_3595_);
v_res_3607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(v_as_3593_, v_i_boxed_3605_, v_stop_boxed_3606_, v_b_3596_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_);
lean_dec(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec_ref(v_as_3593_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object* v_as_3608_, size_t v_i_3609_, size_t v_stop_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_){
_start:
{
lean_object* v___x_3619_; 
v___x_3619_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_3608_, v_i_3609_, v_stop_3610_, v___y_3612_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object* v_as_3620_, lean_object* v_i_3621_, lean_object* v_stop_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
size_t v_i_boxed_3631_; size_t v_stop_boxed_3632_; lean_object* v_res_3633_; 
v_i_boxed_3631_ = lean_unbox_usize(v_i_3621_);
lean_dec(v_i_3621_);
v_stop_boxed_3632_ = lean_unbox_usize(v_stop_3622_);
lean_dec(v_stop_3622_);
v_res_3633_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(v_as_3620_, v_i_boxed_3631_, v_stop_boxed_3632_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
lean_dec(v___y_3629_);
lean_dec_ref(v___y_3628_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
lean_dec_ref(v_as_3620_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object* v_as_3634_, size_t v_sz_3635_, size_t v_i_3636_, lean_object* v_b_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v___x_3646_; 
v___x_3646_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_3634_, v_sz_3635_, v_i_3636_, v_b_3637_, v___y_3639_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object* v_as_3647_, lean_object* v_sz_3648_, lean_object* v_i_3649_, lean_object* v_b_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_){
_start:
{
size_t v_sz_boxed_3659_; size_t v_i_boxed_3660_; lean_object* v_res_3661_; 
v_sz_boxed_3659_ = lean_unbox_usize(v_sz_3648_);
lean_dec(v_sz_3648_);
v_i_boxed_3660_ = lean_unbox_usize(v_i_3649_);
lean_dec(v_i_3649_);
v_res_3661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(v_as_3647_, v_sz_boxed_3659_, v_i_boxed_3660_, v_b_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_);
lean_dec(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec(v___y_3652_);
lean_dec_ref(v___y_3651_);
lean_dec_ref(v_as_3647_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_3662_, lean_object* v_x_3663_, size_t v_x_3664_, size_t v_x_3665_, lean_object* v_x_3666_, lean_object* v_x_3667_){
_start:
{
lean_object* v___x_3668_; 
v___x_3668_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_3663_, v_x_3664_, v_x_3665_, v_x_3666_, v_x_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3669_, lean_object* v_x_3670_, lean_object* v_x_3671_, lean_object* v_x_3672_, lean_object* v_x_3673_, lean_object* v_x_3674_){
_start:
{
size_t v_x_47703__boxed_3675_; size_t v_x_47704__boxed_3676_; lean_object* v_res_3677_; 
v_x_47703__boxed_3675_ = lean_unbox_usize(v_x_3671_);
lean_dec(v_x_3671_);
v_x_47704__boxed_3676_ = lean_unbox_usize(v_x_3672_);
lean_dec(v_x_3672_);
v_res_3677_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(v_00_u03b2_3669_, v_x_3670_, v_x_47703__boxed_3675_, v_x_47704__boxed_3676_, v_x_3673_, v_x_3674_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t v_pu_3678_, uint8_t v_t_3679_, lean_object* v_i_3680_, lean_object* v_as_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_){
_start:
{
lean_object* v___x_3690_; 
v___x_3690_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_3678_, v_t_3679_, v_i_3680_, v_as_3681_, v___y_3683_, v___y_3686_);
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object* v_pu_3691_, lean_object* v_t_3692_, lean_object* v_i_3693_, lean_object* v_as_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
uint8_t v_pu_boxed_3703_; uint8_t v_t_boxed_3704_; lean_object* v_res_3705_; 
v_pu_boxed_3703_ = lean_unbox(v_pu_3691_);
v_t_boxed_3704_ = lean_unbox(v_t_3692_);
v_res_3705_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(v_pu_boxed_3703_, v_t_boxed_3704_, v_i_3693_, v_as_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
lean_dec_ref(v___y_3697_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object* v_00_u03b2_3706_, lean_object* v_n_3707_, lean_object* v_k_3708_, lean_object* v_v_3709_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v_n_3707_, v_k_3708_, v_v_3709_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object* v_00_u03b2_3711_, size_t v_depth_3712_, lean_object* v_keys_3713_, lean_object* v_vals_3714_, lean_object* v_heq_3715_, lean_object* v_i_3716_, lean_object* v_entries_3717_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_3712_, v_keys_3713_, v_vals_3714_, v_i_3716_, v_entries_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b2_3719_, lean_object* v_depth_3720_, lean_object* v_keys_3721_, lean_object* v_vals_3722_, lean_object* v_heq_3723_, lean_object* v_i_3724_, lean_object* v_entries_3725_){
_start:
{
size_t v_depth_boxed_3726_; lean_object* v_res_3727_; 
v_depth_boxed_3726_ = lean_unbox_usize(v_depth_3720_);
lean_dec(v_depth_3720_);
v_res_3727_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(v_00_u03b2_3719_, v_depth_boxed_3726_, v_keys_3721_, v_vals_3722_, v_heq_3723_, v_i_3724_, v_entries_3725_);
lean_dec_ref(v_vals_3722_);
lean_dec_ref(v_keys_3721_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object* v_00_u03b2_3728_, lean_object* v_x_3729_, lean_object* v_x_3730_, lean_object* v_x_3731_, lean_object* v_x_3732_){
_start:
{
lean_object* v___x_3733_; 
v___x_3733_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_x_3729_, v_x_3730_, v_x_3731_, v_x_3732_);
return v___x_3733_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
}
#ifdef __cplusplus
}
#endif

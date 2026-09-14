// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.SimpM
// Imports: public import Lean.Compiler.ImplementedByAttr public import Lean.Compiler.LCNF.Renaming public import Lean.Compiler.LCNF.ElimDead public import Lean.Compiler.LCNF.AlphaEqv public import Lean.Compiler.LCNF.PrettyPrinter public import Lean.Compiler.LCNF.Simp.JpCases public import Lean.Compiler.LCNF.Simp.FunDeclInfo public import Lean.Compiler.LCNF.Simp.Config
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addHo(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_sizeLe(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_update(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addMustInline(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "function `"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` has been recursively inlined more than #"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 156, .m_capacity = 156, .m_length = 155, .m_data = ", consider removing the attribute `[inline_if_reduce]` from this declaration or increasing the limit using `set_option compiler.maxRecInlineIfReduce <num>`"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7_value),LEAN_SCALAR_PTR_LITERAL(5, 122, 96, 221, 209, 205, 68, 156)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8_value),LEAN_SCALAR_PTR_LITERAL(186, 182, 14, 42, 67, 101, 187, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "...\n"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "maximum recursion depth reached in the code generator\nfunction inline stack:\n"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0(lean_object* v_00_u03b1_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_11_, 0, v___y_2_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed(lean_object* v_00_u03b1_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0(v_00_u03b1_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec_ref(v___y_16_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1(lean_object* v_00_u03b1_23_, lean_object* v_00_u03b2_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v___x_35_; 
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
lean_inc(v___y_31_);
lean_inc_ref(v___y_30_);
lean_inc_ref(v___y_29_);
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
v___x_35_ = lean_apply_8(v___y_25_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, lean_box(0));
if (lean_obj_tag(v___x_35_) == 0)
{
lean_object* v_a_36_; lean_object* v___x_37_; 
v_a_36_ = lean_ctor_get(v___x_35_, 0);
lean_inc(v_a_36_);
lean_dec_ref_known(v___x_35_, 1);
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
lean_inc(v___y_31_);
lean_inc_ref(v___y_30_);
lean_inc_ref(v___y_29_);
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
v___x_37_ = lean_apply_9(v___y_26_, v_a_36_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, lean_box(0));
return v___x_37_;
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_dec_ref(v___y_26_);
v_a_38_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_35_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_35_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed(lean_object* v_00_u03b1_46_, lean_object* v_00_u03b2_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1(v_00_u03b1_46_, v_00_u03b2_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_58_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_instMonadEIO___redArg();
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0, &l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0);
v___x_61_ = l_StateRefT_x27_instMonad___redArg(v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM(void){
_start:
{
lean_object* v___x_68_; lean_object* v_toApplicative_69_; lean_object* v_toFunctor_70_; lean_object* v_toSeq_71_; lean_object* v_toSeqLeft_72_; lean_object* v_toSeqRight_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___f_76_; lean_object* v___f_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___f_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_toApplicative_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_143_; 
v___x_68_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1, &l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1);
v_toApplicative_69_ = lean_ctor_get(v___x_68_, 0);
v_toFunctor_70_ = lean_ctor_get(v_toApplicative_69_, 0);
v_toSeq_71_ = lean_ctor_get(v_toApplicative_69_, 2);
v_toSeqLeft_72_ = lean_ctor_get(v_toApplicative_69_, 3);
v_toSeqRight_73_ = lean_ctor_get(v_toApplicative_69_, 4);
v___f_74_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2));
v___f_75_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3));
lean_inc_ref_n(v_toFunctor_70_, 2);
v___f_76_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_76_, 0, v_toFunctor_70_);
v___f_77_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_77_, 0, v_toFunctor_70_);
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v___f_76_);
lean_ctor_set(v___x_78_, 1, v___f_77_);
lean_inc(v_toSeqRight_73_);
v___f_79_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_79_, 0, v_toSeqRight_73_);
lean_inc(v_toSeqLeft_72_);
v___f_80_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_80_, 0, v_toSeqLeft_72_);
lean_inc(v_toSeq_71_);
v___f_81_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_81_, 0, v_toSeq_71_);
v___x_82_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_82_, 0, v___x_78_);
lean_ctor_set(v___x_82_, 1, v___f_74_);
lean_ctor_set(v___x_82_, 2, v___f_81_);
lean_ctor_set(v___x_82_, 3, v___f_80_);
lean_ctor_set(v___x_82_, 4, v___f_79_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___f_75_);
v___x_84_ = l_StateRefT_x27_instMonad___redArg(v___x_83_);
v_toApplicative_85_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_143_ == 0)
{
lean_object* v_unused_144_; 
v_unused_144_ = lean_ctor_get(v___x_84_, 1);
lean_dec(v_unused_144_);
v___x_87_ = v___x_84_;
v_isShared_88_ = v_isSharedCheck_143_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_toApplicative_85_);
lean_dec(v___x_84_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_143_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v_toFunctor_89_; lean_object* v_toSeq_90_; lean_object* v_toSeqLeft_91_; lean_object* v_toSeqRight_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_141_; 
v_toFunctor_89_ = lean_ctor_get(v_toApplicative_85_, 0);
v_toSeq_90_ = lean_ctor_get(v_toApplicative_85_, 2);
v_toSeqLeft_91_ = lean_ctor_get(v_toApplicative_85_, 3);
v_toSeqRight_92_ = lean_ctor_get(v_toApplicative_85_, 4);
v_isSharedCheck_141_ = !lean_is_exclusive(v_toApplicative_85_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v_toApplicative_85_, 1);
lean_dec(v_unused_142_);
v___x_94_ = v_toApplicative_85_;
v_isShared_95_ = v_isSharedCheck_141_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_toSeqRight_92_);
lean_inc(v_toSeqLeft_91_);
lean_inc(v_toSeq_90_);
lean_inc(v_toFunctor_89_);
lean_dec(v_toApplicative_85_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_141_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___f_103_; lean_object* v___x_105_; 
v___f_96_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4));
v___f_97_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5));
lean_inc_ref(v_toFunctor_89_);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_98_, 0, v_toFunctor_89_);
v___f_99_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_99_, 0, v_toFunctor_89_);
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v___f_98_);
lean_ctor_set(v___x_100_, 1, v___f_99_);
v___f_101_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_101_, 0, v_toSeqRight_92_);
v___f_102_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_102_, 0, v_toSeqLeft_91_);
v___f_103_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_103_, 0, v_toSeq_90_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 4, v___f_101_);
lean_ctor_set(v___x_94_, 3, v___f_102_);
lean_ctor_set(v___x_94_, 2, v___f_103_);
lean_ctor_set(v___x_94_, 1, v___f_96_);
lean_ctor_set(v___x_94_, 0, v___x_100_);
v___x_105_ = v___x_94_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v___f_96_);
lean_ctor_set(v_reuseFailAlloc_140_, 2, v___f_103_);
lean_ctor_set(v_reuseFailAlloc_140_, 3, v___f_102_);
lean_ctor_set(v_reuseFailAlloc_140_, 4, v___f_101_);
v___x_105_ = v_reuseFailAlloc_140_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
lean_object* v___x_107_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 1, v___f_97_);
lean_ctor_set(v___x_87_, 0, v___x_105_);
v___x_107_ = v___x_87_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___f_97_);
v___x_107_ = v_reuseFailAlloc_139_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_toApplicative_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_137_; 
v___x_108_ = l_ReaderT_instMonad___redArg(v___x_107_);
v___x_109_ = l_StateRefT_x27_instMonad___redArg(v___x_108_);
v_toApplicative_110_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_137_ == 0)
{
lean_object* v_unused_138_; 
v_unused_138_ = lean_ctor_get(v___x_109_, 1);
lean_dec(v_unused_138_);
v___x_112_ = v___x_109_;
v_isShared_113_ = v_isSharedCheck_137_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_toApplicative_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_137_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v_toFunctor_114_; lean_object* v_toSeq_115_; lean_object* v_toSeqLeft_116_; lean_object* v_toSeqRight_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_135_; 
v_toFunctor_114_ = lean_ctor_get(v_toApplicative_110_, 0);
v_toSeq_115_ = lean_ctor_get(v_toApplicative_110_, 2);
v_toSeqLeft_116_ = lean_ctor_get(v_toApplicative_110_, 3);
v_toSeqRight_117_ = lean_ctor_get(v_toApplicative_110_, 4);
v_isSharedCheck_135_ = !lean_is_exclusive(v_toApplicative_110_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v_toApplicative_110_, 1);
lean_dec(v_unused_136_);
v___x_119_ = v_toApplicative_110_;
v_isShared_120_ = v_isSharedCheck_135_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_toSeqRight_117_);
lean_inc(v_toSeqLeft_116_);
lean_inc(v_toSeq_115_);
lean_inc(v_toFunctor_114_);
lean_dec(v_toApplicative_110_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_135_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___x_125_; lean_object* v___f_126_; lean_object* v___f_127_; lean_object* v___f_128_; lean_object* v___x_130_; 
v___f_121_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6));
v___f_122_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7));
lean_inc_ref(v_toFunctor_114_);
v___f_123_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_123_, 0, v_toFunctor_114_);
v___f_124_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_124_, 0, v_toFunctor_114_);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___f_123_);
lean_ctor_set(v___x_125_, 1, v___f_124_);
v___f_126_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_126_, 0, v_toSeqRight_117_);
v___f_127_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_127_, 0, v_toSeqLeft_116_);
v___f_128_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_128_, 0, v_toSeq_115_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 4, v___f_126_);
lean_ctor_set(v___x_119_, 3, v___f_127_);
lean_ctor_set(v___x_119_, 2, v___f_128_);
lean_ctor_set(v___x_119_, 1, v___f_121_);
lean_ctor_set(v___x_119_, 0, v___x_125_);
v___x_130_ = v___x_119_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___f_121_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v___f_128_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v___f_127_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v___f_126_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 1, v___f_122_);
lean_ctor_set(v___x_112_, 0, v___x_130_);
v___x_132_ = v___x_112_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v___f_122_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0(lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v___x_153_; lean_object* v_subst_154_; lean_object* v___x_155_; 
v___x_153_ = lean_st_ref_get(v___y_146_);
v_subst_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc_ref(v_subst_154_);
lean_dec(v___x_153_);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v_subst_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0___boxed(lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0(v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0(lean_object* v_f_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; lean_object* v_subst_177_; lean_object* v_used_178_; lean_object* v_binderRenaming_179_; lean_object* v_funDeclInfoMap_180_; uint8_t v_simplified_181_; lean_object* v_visited_182_; lean_object* v_inline_183_; lean_object* v_inlineLocal_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_195_; 
v___x_176_ = lean_st_ref_take(v___y_169_);
v_subst_177_ = lean_ctor_get(v___x_176_, 0);
v_used_178_ = lean_ctor_get(v___x_176_, 1);
v_binderRenaming_179_ = lean_ctor_get(v___x_176_, 2);
v_funDeclInfoMap_180_ = lean_ctor_get(v___x_176_, 3);
v_simplified_181_ = lean_ctor_get_uint8(v___x_176_, sizeof(void*)*7);
v_visited_182_ = lean_ctor_get(v___x_176_, 4);
v_inline_183_ = lean_ctor_get(v___x_176_, 5);
v_inlineLocal_184_ = lean_ctor_get(v___x_176_, 6);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_195_ == 0)
{
v___x_186_ = v___x_176_;
v_isShared_187_ = v_isSharedCheck_195_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_inlineLocal_184_);
lean_inc(v_inline_183_);
lean_inc(v_visited_182_);
lean_inc(v_funDeclInfoMap_180_);
lean_inc(v_binderRenaming_179_);
lean_inc(v_used_178_);
lean_inc(v_subst_177_);
lean_dec(v___x_176_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_195_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_188_ = lean_box(0);
v___x_189_ = lean_apply_1(v_f_167_, v_subst_177_);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_189_);
v___x_191_ = v___x_186_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_used_178_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v_binderRenaming_179_);
lean_ctor_set(v_reuseFailAlloc_194_, 3, v_funDeclInfoMap_180_);
lean_ctor_set(v_reuseFailAlloc_194_, 4, v_visited_182_);
lean_ctor_set(v_reuseFailAlloc_194_, 5, v_inline_183_);
lean_ctor_set(v_reuseFailAlloc_194_, 6, v_inlineLocal_184_);
lean_ctor_set_uint8(v_reuseFailAlloc_194_, sizeof(void*)*7, v_simplified_181_);
v___x_191_ = v_reuseFailAlloc_194_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_st_ref_put(v___y_169_, v___x_191_);
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v___x_188_);
return v___x_193_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0___boxed(lean_object* v_f_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0(v_f_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object* v_a_208_){
_start:
{
lean_object* v___x_210_; lean_object* v_subst_211_; lean_object* v_used_212_; lean_object* v_binderRenaming_213_; lean_object* v_funDeclInfoMap_214_; lean_object* v_visited_215_; lean_object* v_inline_216_; lean_object* v_inlineLocal_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_228_; 
v___x_210_ = lean_st_ref_take(v_a_208_);
v_subst_211_ = lean_ctor_get(v___x_210_, 0);
v_used_212_ = lean_ctor_get(v___x_210_, 1);
v_binderRenaming_213_ = lean_ctor_get(v___x_210_, 2);
v_funDeclInfoMap_214_ = lean_ctor_get(v___x_210_, 3);
v_visited_215_ = lean_ctor_get(v___x_210_, 4);
v_inline_216_ = lean_ctor_get(v___x_210_, 5);
v_inlineLocal_217_ = lean_ctor_get(v___x_210_, 6);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_228_ == 0)
{
v___x_219_ = v___x_210_;
v_isShared_220_ = v_isSharedCheck_228_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_inlineLocal_217_);
lean_inc(v_inline_216_);
lean_inc(v_visited_215_);
lean_inc(v_funDeclInfoMap_214_);
lean_inc(v_binderRenaming_213_);
lean_inc(v_used_212_);
lean_inc(v_subst_211_);
lean_dec(v___x_210_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_228_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_224_; 
v___x_221_ = lean_box(0);
v___x_222_ = 1;
if (v_isShared_220_ == 0)
{
v___x_224_ = v___x_219_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_subst_211_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_used_212_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v_binderRenaming_213_);
lean_ctor_set(v_reuseFailAlloc_227_, 3, v_funDeclInfoMap_214_);
lean_ctor_set(v_reuseFailAlloc_227_, 4, v_visited_215_);
lean_ctor_set(v_reuseFailAlloc_227_, 5, v_inline_216_);
lean_ctor_set(v_reuseFailAlloc_227_, 6, v_inlineLocal_217_);
v___x_224_ = v_reuseFailAlloc_227_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*7, v___x_222_);
v___x_225_ = lean_st_ref_put(v_a_208_, v___x_224_);
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_221_);
return v___x_226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg___boxed(lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_229_);
lean_dec(v_a_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified(lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_233_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___boxed(lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_Compiler_LCNF_Simp_markSimplified(v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object* v_a_250_){
_start:
{
lean_object* v___x_252_; lean_object* v_subst_253_; lean_object* v_used_254_; lean_object* v_binderRenaming_255_; lean_object* v_funDeclInfoMap_256_; uint8_t v_simplified_257_; lean_object* v_visited_258_; lean_object* v_inline_259_; lean_object* v_inlineLocal_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_272_; 
v___x_252_ = lean_st_ref_take(v_a_250_);
v_subst_253_ = lean_ctor_get(v___x_252_, 0);
v_used_254_ = lean_ctor_get(v___x_252_, 1);
v_binderRenaming_255_ = lean_ctor_get(v___x_252_, 2);
v_funDeclInfoMap_256_ = lean_ctor_get(v___x_252_, 3);
v_simplified_257_ = lean_ctor_get_uint8(v___x_252_, sizeof(void*)*7);
v_visited_258_ = lean_ctor_get(v___x_252_, 4);
v_inline_259_ = lean_ctor_get(v___x_252_, 5);
v_inlineLocal_260_ = lean_ctor_get(v___x_252_, 6);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_272_ == 0)
{
v___x_262_ = v___x_252_;
v_isShared_263_ = v_isSharedCheck_272_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_inlineLocal_260_);
lean_inc(v_inline_259_);
lean_inc(v_visited_258_);
lean_inc(v_funDeclInfoMap_256_);
lean_inc(v_binderRenaming_255_);
lean_inc(v_used_254_);
lean_inc(v_subst_253_);
lean_dec(v___x_252_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_272_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_264_ = lean_box(0);
v___x_265_ = lean_unsigned_to_nat(1u);
v___x_266_ = lean_nat_add(v_visited_258_, v___x_265_);
lean_dec(v_visited_258_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 4, v___x_266_);
v___x_268_ = v___x_262_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_subst_253_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_used_254_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v_binderRenaming_255_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v_funDeclInfoMap_256_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_271_, 5, v_inline_259_);
lean_ctor_set(v_reuseFailAlloc_271_, 6, v_inlineLocal_260_);
lean_ctor_set_uint8(v_reuseFailAlloc_271_, sizeof(void*)*7, v_simplified_257_);
v___x_268_ = v_reuseFailAlloc_271_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_st_ref_put(v_a_250_, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_264_);
return v___x_270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg___boxed(lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v_a_273_);
lean_dec(v_a_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited(lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v_a_277_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___boxed(lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_Compiler_LCNF_Simp_incVisited(v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg(lean_object* v_a_294_){
_start:
{
lean_object* v___x_296_; lean_object* v_subst_297_; lean_object* v_used_298_; lean_object* v_binderRenaming_299_; lean_object* v_funDeclInfoMap_300_; uint8_t v_simplified_301_; lean_object* v_visited_302_; lean_object* v_inline_303_; lean_object* v_inlineLocal_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_316_; 
v___x_296_ = lean_st_ref_take(v_a_294_);
v_subst_297_ = lean_ctor_get(v___x_296_, 0);
v_used_298_ = lean_ctor_get(v___x_296_, 1);
v_binderRenaming_299_ = lean_ctor_get(v___x_296_, 2);
v_funDeclInfoMap_300_ = lean_ctor_get(v___x_296_, 3);
v_simplified_301_ = lean_ctor_get_uint8(v___x_296_, sizeof(void*)*7);
v_visited_302_ = lean_ctor_get(v___x_296_, 4);
v_inline_303_ = lean_ctor_get(v___x_296_, 5);
v_inlineLocal_304_ = lean_ctor_get(v___x_296_, 6);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_316_ == 0)
{
v___x_306_ = v___x_296_;
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_inlineLocal_304_);
lean_inc(v_inline_303_);
lean_inc(v_visited_302_);
lean_inc(v_funDeclInfoMap_300_);
lean_inc(v_binderRenaming_299_);
lean_inc(v_used_298_);
lean_inc(v_subst_297_);
lean_dec(v___x_296_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_308_ = lean_box(0);
v___x_309_ = lean_unsigned_to_nat(1u);
v___x_310_ = lean_nat_add(v_inline_303_, v___x_309_);
lean_dec(v_inline_303_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 5, v___x_310_);
v___x_312_ = v___x_306_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_subst_297_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_used_298_);
lean_ctor_set(v_reuseFailAlloc_315_, 2, v_binderRenaming_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 3, v_funDeclInfoMap_300_);
lean_ctor_set(v_reuseFailAlloc_315_, 4, v_visited_302_);
lean_ctor_set(v_reuseFailAlloc_315_, 5, v___x_310_);
lean_ctor_set(v_reuseFailAlloc_315_, 6, v_inlineLocal_304_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*7, v_simplified_301_);
v___x_312_ = v_reuseFailAlloc_315_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_st_ref_put(v_a_294_, v___x_312_);
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v___x_308_);
return v___x_314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg___boxed(lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_Compiler_LCNF_Simp_incInline___redArg(v_a_317_);
lean_dec(v_a_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline(lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_Compiler_LCNF_Simp_incInline___redArg(v_a_321_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___boxed(lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Compiler_LCNF_Simp_incInline(v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(lean_object* v_a_338_){
_start:
{
lean_object* v___x_340_; lean_object* v_subst_341_; lean_object* v_used_342_; lean_object* v_binderRenaming_343_; lean_object* v_funDeclInfoMap_344_; uint8_t v_simplified_345_; lean_object* v_visited_346_; lean_object* v_inline_347_; lean_object* v_inlineLocal_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_360_; 
v___x_340_ = lean_st_ref_take(v_a_338_);
v_subst_341_ = lean_ctor_get(v___x_340_, 0);
v_used_342_ = lean_ctor_get(v___x_340_, 1);
v_binderRenaming_343_ = lean_ctor_get(v___x_340_, 2);
v_funDeclInfoMap_344_ = lean_ctor_get(v___x_340_, 3);
v_simplified_345_ = lean_ctor_get_uint8(v___x_340_, sizeof(void*)*7);
v_visited_346_ = lean_ctor_get(v___x_340_, 4);
v_inline_347_ = lean_ctor_get(v___x_340_, 5);
v_inlineLocal_348_ = lean_ctor_get(v___x_340_, 6);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_360_ == 0)
{
v___x_350_ = v___x_340_;
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_inlineLocal_348_);
lean_inc(v_inline_347_);
lean_inc(v_visited_346_);
lean_inc(v_funDeclInfoMap_344_);
lean_inc(v_binderRenaming_343_);
lean_inc(v_used_342_);
lean_inc(v_subst_341_);
lean_dec(v___x_340_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_352_ = lean_box(0);
v___x_353_ = lean_unsigned_to_nat(1u);
v___x_354_ = lean_nat_add(v_inlineLocal_348_, v___x_353_);
lean_dec(v_inlineLocal_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 6, v___x_354_);
v___x_356_ = v___x_350_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_subst_341_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_used_342_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_binderRenaming_343_);
lean_ctor_set(v_reuseFailAlloc_359_, 3, v_funDeclInfoMap_344_);
lean_ctor_set(v_reuseFailAlloc_359_, 4, v_visited_346_);
lean_ctor_set(v_reuseFailAlloc_359_, 5, v_inline_347_);
lean_ctor_set(v_reuseFailAlloc_359_, 6, v___x_354_);
lean_ctor_set_uint8(v_reuseFailAlloc_359_, sizeof(void*)*7, v_simplified_345_);
v___x_356_ = v_reuseFailAlloc_359_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_st_ref_put(v_a_338_, v___x_356_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_352_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg___boxed(lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(v_a_361_);
lean_dec(v_a_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal(lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(v_a_365_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___boxed(lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal(v_a_373_, v_a_374_, v_a_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
lean_dec(v_a_379_);
lean_dec_ref(v_a_378_);
lean_dec(v_a_377_);
lean_dec_ref(v_a_376_);
lean_dec_ref(v_a_375_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(lean_object* v_fvarId_382_, lean_object* v_a_383_){
_start:
{
lean_object* v___x_385_; lean_object* v_subst_386_; lean_object* v_used_387_; lean_object* v_binderRenaming_388_; lean_object* v_funDeclInfoMap_389_; uint8_t v_simplified_390_; lean_object* v_visited_391_; lean_object* v_inline_392_; lean_object* v_inlineLocal_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_404_; 
v___x_385_ = lean_st_ref_take(v_a_383_);
v_subst_386_ = lean_ctor_get(v___x_385_, 0);
v_used_387_ = lean_ctor_get(v___x_385_, 1);
v_binderRenaming_388_ = lean_ctor_get(v___x_385_, 2);
v_funDeclInfoMap_389_ = lean_ctor_get(v___x_385_, 3);
v_simplified_390_ = lean_ctor_get_uint8(v___x_385_, sizeof(void*)*7);
v_visited_391_ = lean_ctor_get(v___x_385_, 4);
v_inline_392_ = lean_ctor_get(v___x_385_, 5);
v_inlineLocal_393_ = lean_ctor_get(v___x_385_, 6);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_404_ == 0)
{
v___x_395_ = v___x_385_;
v_isShared_396_ = v_isSharedCheck_404_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_inlineLocal_393_);
lean_inc(v_inline_392_);
lean_inc(v_visited_391_);
lean_inc(v_funDeclInfoMap_389_);
lean_inc(v_binderRenaming_388_);
lean_inc(v_used_387_);
lean_inc(v_subst_386_);
lean_dec(v___x_385_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_404_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_397_ = lean_box(0);
v___x_398_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addMustInline(v_funDeclInfoMap_389_, v_fvarId_382_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 3, v___x_398_);
v___x_400_ = v___x_395_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_subst_386_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_used_387_);
lean_ctor_set(v_reuseFailAlloc_403_, 2, v_binderRenaming_388_);
lean_ctor_set(v_reuseFailAlloc_403_, 3, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_403_, 4, v_visited_391_);
lean_ctor_set(v_reuseFailAlloc_403_, 5, v_inline_392_);
lean_ctor_set(v_reuseFailAlloc_403_, 6, v_inlineLocal_393_);
lean_ctor_set_uint8(v_reuseFailAlloc_403_, sizeof(void*)*7, v_simplified_390_);
v___x_400_ = v_reuseFailAlloc_403_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_st_ref_put(v_a_383_, v___x_400_);
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_397_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg___boxed(lean_object* v_fvarId_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(v_fvarId_405_, v_a_406_);
lean_dec(v_a_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline(lean_object* v_fvarId_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(v_fvarId_409_, v_a_411_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___boxed(lean_object* v_fvarId_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_Compiler_LCNF_Simp_addMustInline(v_fvarId_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(lean_object* v_fvarId_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_432_; lean_object* v_subst_433_; lean_object* v_used_434_; lean_object* v_binderRenaming_435_; lean_object* v_funDeclInfoMap_436_; uint8_t v_simplified_437_; lean_object* v_visited_438_; lean_object* v_inline_439_; lean_object* v_inlineLocal_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_451_; 
v___x_432_ = lean_st_ref_take(v_a_430_);
v_subst_433_ = lean_ctor_get(v___x_432_, 0);
v_used_434_ = lean_ctor_get(v___x_432_, 1);
v_binderRenaming_435_ = lean_ctor_get(v___x_432_, 2);
v_funDeclInfoMap_436_ = lean_ctor_get(v___x_432_, 3);
v_simplified_437_ = lean_ctor_get_uint8(v___x_432_, sizeof(void*)*7);
v_visited_438_ = lean_ctor_get(v___x_432_, 4);
v_inline_439_ = lean_ctor_get(v___x_432_, 5);
v_inlineLocal_440_ = lean_ctor_get(v___x_432_, 6);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_451_ == 0)
{
v___x_442_ = v___x_432_;
v_isShared_443_ = v_isSharedCheck_451_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_inlineLocal_440_);
lean_inc(v_inline_439_);
lean_inc(v_visited_438_);
lean_inc(v_funDeclInfoMap_436_);
lean_inc(v_binderRenaming_435_);
lean_inc(v_used_434_);
lean_inc(v_subst_433_);
lean_dec(v___x_432_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_451_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_444_ = lean_box(0);
v___x_445_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_add(v_funDeclInfoMap_436_, v_fvarId_429_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 3, v___x_445_);
v___x_447_ = v___x_442_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_subst_433_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_used_434_);
lean_ctor_set(v_reuseFailAlloc_450_, 2, v_binderRenaming_435_);
lean_ctor_set(v_reuseFailAlloc_450_, 3, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_450_, 4, v_visited_438_);
lean_ctor_set(v_reuseFailAlloc_450_, 5, v_inline_439_);
lean_ctor_set(v_reuseFailAlloc_450_, 6, v_inlineLocal_440_);
lean_ctor_set_uint8(v_reuseFailAlloc_450_, sizeof(void*)*7, v_simplified_437_);
v___x_447_ = v_reuseFailAlloc_450_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_st_ref_put(v_a_430_, v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_444_);
return v___x_449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg___boxed(lean_object* v_fvarId_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(v_fvarId_452_, v_a_453_);
lean_dec(v_a_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc(lean_object* v_fvarId_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(v_fvarId_456_, v_a_458_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___boxed(lean_object* v_fvarId_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Compiler_LCNF_Simp_addFunOcc(v_fvarId_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_);
lean_dec(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec(v_a_471_);
lean_dec_ref(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(lean_object* v_fvarId_476_, lean_object* v_a_477_){
_start:
{
lean_object* v___x_479_; lean_object* v_subst_480_; lean_object* v_used_481_; lean_object* v_binderRenaming_482_; lean_object* v_funDeclInfoMap_483_; uint8_t v_simplified_484_; lean_object* v_visited_485_; lean_object* v_inline_486_; lean_object* v_inlineLocal_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_498_; 
v___x_479_ = lean_st_ref_take(v_a_477_);
v_subst_480_ = lean_ctor_get(v___x_479_, 0);
v_used_481_ = lean_ctor_get(v___x_479_, 1);
v_binderRenaming_482_ = lean_ctor_get(v___x_479_, 2);
v_funDeclInfoMap_483_ = lean_ctor_get(v___x_479_, 3);
v_simplified_484_ = lean_ctor_get_uint8(v___x_479_, sizeof(void*)*7);
v_visited_485_ = lean_ctor_get(v___x_479_, 4);
v_inline_486_ = lean_ctor_get(v___x_479_, 5);
v_inlineLocal_487_ = lean_ctor_get(v___x_479_, 6);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_498_ == 0)
{
v___x_489_ = v___x_479_;
v_isShared_490_ = v_isSharedCheck_498_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_inlineLocal_487_);
lean_inc(v_inline_486_);
lean_inc(v_visited_485_);
lean_inc(v_funDeclInfoMap_483_);
lean_inc(v_binderRenaming_482_);
lean_inc(v_used_481_);
lean_inc(v_subst_480_);
lean_dec(v___x_479_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_498_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_491_ = lean_box(0);
v___x_492_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addHo(v_funDeclInfoMap_483_, v_fvarId_476_);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 3, v___x_492_);
v___x_494_ = v___x_489_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_subst_480_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_used_481_);
lean_ctor_set(v_reuseFailAlloc_497_, 2, v_binderRenaming_482_);
lean_ctor_set(v_reuseFailAlloc_497_, 3, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_497_, 4, v_visited_485_);
lean_ctor_set(v_reuseFailAlloc_497_, 5, v_inline_486_);
lean_ctor_set(v_reuseFailAlloc_497_, 6, v_inlineLocal_487_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*7, v_simplified_484_);
v___x_494_ = v_reuseFailAlloc_497_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_st_ref_put(v_a_477_, v___x_494_);
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_491_);
return v___x_496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg___boxed(lean_object* v_fvarId_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(v_fvarId_499_, v_a_500_);
lean_dec(v_a_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc(lean_object* v_fvarId_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(v_fvarId_503_, v_a_505_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___boxed(lean_object* v_fvarId_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Compiler_LCNF_Simp_addFunHoOcc(v_fvarId_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
return v_res_522_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_523_ = lean_box(0);
v___x_524_ = lean_unsigned_to_nat(16u);
v___x_525_ = lean_mk_array(v___x_524_, v___x_523_);
return v___x_525_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_526_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0, &l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0);
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___x_526_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object* v_code_529_, uint8_t v_mustInline_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v___x_537_; lean_object* v_subst_538_; lean_object* v_used_539_; lean_object* v_binderRenaming_540_; lean_object* v_funDeclInfoMap_541_; uint8_t v_simplified_542_; lean_object* v_visited_543_; lean_object* v_inline_544_; lean_object* v_inlineLocal_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_589_; 
v___x_537_ = lean_st_ref_take(v_a_531_);
v_subst_538_ = lean_ctor_get(v___x_537_, 0);
v_used_539_ = lean_ctor_get(v___x_537_, 1);
v_binderRenaming_540_ = lean_ctor_get(v___x_537_, 2);
v_funDeclInfoMap_541_ = lean_ctor_get(v___x_537_, 3);
v_simplified_542_ = lean_ctor_get_uint8(v___x_537_, sizeof(void*)*7);
v_visited_543_ = lean_ctor_get(v___x_537_, 4);
v_inline_544_ = lean_ctor_get(v___x_537_, 5);
v_inlineLocal_545_ = lean_ctor_get(v___x_537_, 6);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_589_ == 0)
{
v___x_547_ = v___x_537_;
v_isShared_548_ = v_isSharedCheck_589_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_inlineLocal_545_);
lean_inc(v_inline_544_);
lean_inc(v_visited_543_);
lean_inc(v_funDeclInfoMap_541_);
lean_inc(v_binderRenaming_540_);
lean_inc(v_used_539_);
lean_inc(v_subst_538_);
lean_dec(v___x_537_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_589_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1, &l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 3, v___x_549_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_subst_538_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_used_539_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_binderRenaming_540_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v_visited_543_);
lean_ctor_set(v_reuseFailAlloc_588_, 5, v_inline_544_);
lean_ctor_set(v_reuseFailAlloc_588_, 6, v_inlineLocal_545_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*7, v_simplified_542_);
v___x_551_ = v_reuseFailAlloc_588_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_st_ref_put(v_a_531_, v___x_551_);
v___x_553_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_update(v_funDeclInfoMap_541_, v_code_529_, v_mustInline_530_, v_a_532_, v_a_533_, v_a_534_, v_a_535_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_579_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_579_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_579_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_579_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_558_; lean_object* v_subst_559_; lean_object* v_used_560_; lean_object* v_binderRenaming_561_; uint8_t v_simplified_562_; lean_object* v_visited_563_; lean_object* v_inline_564_; lean_object* v_inlineLocal_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_577_; 
v___x_558_ = lean_st_ref_take(v_a_531_);
v_subst_559_ = lean_ctor_get(v___x_558_, 0);
v_used_560_ = lean_ctor_get(v___x_558_, 1);
v_binderRenaming_561_ = lean_ctor_get(v___x_558_, 2);
v_simplified_562_ = lean_ctor_get_uint8(v___x_558_, sizeof(void*)*7);
v_visited_563_ = lean_ctor_get(v___x_558_, 4);
v_inline_564_ = lean_ctor_get(v___x_558_, 5);
v_inlineLocal_565_ = lean_ctor_get(v___x_558_, 6);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_577_ == 0)
{
lean_object* v_unused_578_; 
v_unused_578_ = lean_ctor_get(v___x_558_, 3);
lean_dec(v_unused_578_);
v___x_567_ = v___x_558_;
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_inlineLocal_565_);
lean_inc(v_inline_564_);
lean_inc(v_visited_563_);
lean_inc(v_binderRenaming_561_);
lean_inc(v_used_560_);
lean_inc(v_subst_559_);
lean_dec(v___x_558_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = lean_box(0);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 3, v_a_554_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_subst_559_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_used_560_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_binderRenaming_561_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v_a_554_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v_visited_563_);
lean_ctor_set(v_reuseFailAlloc_576_, 5, v_inline_564_);
lean_ctor_set(v_reuseFailAlloc_576_, 6, v_inlineLocal_565_);
lean_ctor_set_uint8(v_reuseFailAlloc_576_, sizeof(void*)*7, v_simplified_562_);
v___x_571_ = v_reuseFailAlloc_576_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_572_ = lean_st_ref_put(v_a_531_, v___x_571_);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_569_);
v___x_574_ = v___x_556_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
v_a_580_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_553_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_553_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___boxed(lean_object* v_code_590_, lean_object* v_mustInline_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
uint8_t v_mustInline_boxed_598_; lean_object* v_res_599_; 
v_mustInline_boxed_598_ = lean_unbox(v_mustInline_591_);
v_res_599_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_code_590_, v_mustInline_boxed_598_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo(lean_object* v_code_600_, uint8_t v_mustInline_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_code_600_, v_mustInline_601_, v_a_603_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___boxed(lean_object* v_code_611_, lean_object* v_mustInline_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
uint8_t v_mustInline_boxed_621_; lean_object* v_res_622_; 
v_mustInline_boxed_621_ = lean_unbox(v_mustInline_612_);
v_res_622_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo(v_code_611_, v_mustInline_boxed_621_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_);
lean_dec(v_a_619_);
lean_dec_ref(v_a_618_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec_ref(v_a_615_);
lean_dec(v_a_614_);
lean_dec_ref(v_a_613_);
return v_res_622_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_623_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1);
v___x_627_ = lean_unsigned_to_nat(0u);
v___x_628_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
lean_ctor_set(v___x_628_, 2, v___x_627_);
lean_ctor_set(v___x_628_, 3, v___x_627_);
lean_ctor_set(v___x_628_, 4, v___x_626_);
lean_ctor_set(v___x_628_, 5, v___x_626_);
lean_ctor_set(v___x_628_, 6, v___x_626_);
lean_ctor_set(v___x_628_, 7, v___x_626_);
lean_ctor_set(v___x_628_, 8, v___x_626_);
lean_ctor_set(v___x_628_, 9, v___x_626_);
lean_ctor_set(v___x_628_, 10, v___x_626_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(lean_object* v_msg_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_toCold_635_; lean_object* v_ref_636_; lean_object* v___x_637_; lean_object* v_env_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_toCold_635_ = lean_ctor_get(v___y_632_, 0);
v_ref_636_ = lean_ctor_get(v___y_632_, 2);
v___x_637_ = lean_st_ref_get(v___y_633_);
v_env_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc_ref(v_env_638_);
lean_dec(v___x_637_);
v___x_639_ = lean_st_ref_get(v___y_631_);
v___x_640_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_630_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_663_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_663_ == 0)
{
v___x_643_ = v___x_640_;
v_isShared_644_ = v_isSharedCheck_663_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_640_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_663_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v_lctx_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_661_; 
v_lctx_645_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_661_ == 0)
{
lean_object* v_unused_662_; 
v_unused_662_ = lean_ctor_get(v___x_639_, 1);
lean_dec(v_unused_662_);
v___x_647_ = v___x_639_;
v_isShared_648_ = v_isSharedCheck_661_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_lctx_645_);
lean_dec(v___x_639_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_661_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_options_649_; uint8_t v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_655_; 
v_options_649_ = lean_ctor_get(v_toCold_635_, 2);
v___x_650_ = lean_unbox(v_a_641_);
lean_dec(v_a_641_);
v___x_651_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_645_, v___x_650_);
lean_dec_ref(v_lctx_645_);
v___x_652_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2);
lean_inc_ref(v_options_649_);
v___x_653_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_653_, 0, v_env_638_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
lean_ctor_set(v___x_653_, 2, v___x_651_);
lean_ctor_set(v___x_653_, 3, v_options_649_);
if (v_isShared_648_ == 0)
{
lean_ctor_set_tag(v___x_647_, 3);
lean_ctor_set(v___x_647_, 1, v_msg_629_);
lean_ctor_set(v___x_647_, 0, v___x_653_);
v___x_655_ = v___x_647_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_653_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_msg_629_);
v___x_655_ = v_reuseFailAlloc_660_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; lean_object* v___x_658_; 
lean_inc(v_ref_636_);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v_ref_636_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
if (v_isShared_644_ == 0)
{
lean_ctor_set_tag(v___x_643_, 1);
lean_ctor_set(v___x_643_, 0, v___x_656_);
v___x_658_ = v___x_643_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec(v___x_639_);
lean_dec_ref(v_env_638_);
lean_dec_ref(v_msg_629_);
v_a_664_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_640_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_640_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___boxed(lean_object* v_msg_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v_msg_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0(lean_object* v_00_u03b1_679_, lean_object* v_msg_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v_msg_680_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___boxed(lean_object* v_00_u03b1_690_, lean_object* v_msg_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0(v_00_u03b1_690_, v_msg_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
return v_res_700_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_701_; double v___x_702_; 
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = lean_float_of_nat(v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(lean_object* v_cls_706_, lean_object* v_msg_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_toCold_713_; lean_object* v_ref_714_; lean_object* v___x_715_; lean_object* v_env_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v_toCold_713_ = lean_ctor_get(v___y_710_, 0);
v_ref_714_ = lean_ctor_get(v___y_710_, 2);
v___x_715_ = lean_st_ref_get(v___y_711_);
v_env_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc_ref(v_env_716_);
lean_dec(v___x_715_);
v___x_717_ = lean_st_ref_get(v___y_709_);
v___x_718_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_708_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_777_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_777_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_777_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_777_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_lctx_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_775_; 
v_lctx_723_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_775_ == 0)
{
lean_object* v_unused_776_; 
v_unused_776_ = lean_ctor_get(v___x_717_, 1);
lean_dec(v_unused_776_);
v___x_725_ = v___x_717_;
v_isShared_726_ = v_isSharedCheck_775_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_lctx_723_);
lean_dec(v___x_717_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_775_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_options_727_; uint8_t v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v_options_727_ = lean_ctor_get(v_toCold_713_, 2);
v___x_728_ = lean_unbox(v_a_719_);
lean_dec(v_a_719_);
v___x_729_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_723_, v___x_728_);
lean_dec_ref(v_lctx_723_);
v___x_730_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2);
lean_inc_ref(v_options_727_);
v___x_731_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_731_, 0, v_env_716_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
lean_ctor_set(v___x_731_, 2, v___x_729_);
lean_ctor_set(v___x_731_, 3, v_options_727_);
if (v_isShared_726_ == 0)
{
lean_ctor_set_tag(v___x_725_, 3);
lean_ctor_set(v___x_725_, 1, v_msg_707_);
lean_ctor_set(v___x_725_, 0, v___x_731_);
v___x_733_ = v___x_725_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_msg_707_);
v___x_733_ = v_reuseFailAlloc_774_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v_traceState_735_; lean_object* v_env_736_; lean_object* v_nextMacroScope_737_; lean_object* v_ngen_738_; lean_object* v_auxDeclNGen_739_; lean_object* v_cache_740_; lean_object* v_messages_741_; lean_object* v_infoState_742_; lean_object* v_snapshotTasks_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_773_; 
v___x_734_ = lean_st_ref_take(v___y_711_);
v_traceState_735_ = lean_ctor_get(v___x_734_, 4);
v_env_736_ = lean_ctor_get(v___x_734_, 0);
v_nextMacroScope_737_ = lean_ctor_get(v___x_734_, 1);
v_ngen_738_ = lean_ctor_get(v___x_734_, 2);
v_auxDeclNGen_739_ = lean_ctor_get(v___x_734_, 3);
v_cache_740_ = lean_ctor_get(v___x_734_, 5);
v_messages_741_ = lean_ctor_get(v___x_734_, 6);
v_infoState_742_ = lean_ctor_get(v___x_734_, 7);
v_snapshotTasks_743_ = lean_ctor_get(v___x_734_, 8);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_773_ == 0)
{
v___x_745_ = v___x_734_;
v_isShared_746_ = v_isSharedCheck_773_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_snapshotTasks_743_);
lean_inc(v_infoState_742_);
lean_inc(v_messages_741_);
lean_inc(v_cache_740_);
lean_inc(v_traceState_735_);
lean_inc(v_auxDeclNGen_739_);
lean_inc(v_ngen_738_);
lean_inc(v_nextMacroScope_737_);
lean_inc(v_env_736_);
lean_dec(v___x_734_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_773_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
uint64_t v_tid_747_; lean_object* v_traces_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_772_; 
v_tid_747_ = lean_ctor_get_uint64(v_traceState_735_, sizeof(void*)*1);
v_traces_748_ = lean_ctor_get(v_traceState_735_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v_traceState_735_);
if (v_isSharedCheck_772_ == 0)
{
v___x_750_ = v_traceState_735_;
v_isShared_751_ = v_isSharedCheck_772_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_traces_748_);
lean_dec(v_traceState_735_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_772_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; double v___x_754_; uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_763_; 
v___x_752_ = lean_box(0);
v___x_753_ = lean_box(0);
v___x_754_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0);
v___x_755_ = 0;
v___x_756_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1));
v___x_757_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_757_, 0, v_cls_706_);
lean_ctor_set(v___x_757_, 1, v___x_753_);
lean_ctor_set(v___x_757_, 2, v___x_756_);
lean_ctor_set_float(v___x_757_, sizeof(void*)*3, v___x_754_);
lean_ctor_set_float(v___x_757_, sizeof(void*)*3 + 8, v___x_754_);
lean_ctor_set_uint8(v___x_757_, sizeof(void*)*3 + 16, v___x_755_);
v___x_758_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2));
v___x_759_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_759_, 0, v___x_757_);
lean_ctor_set(v___x_759_, 1, v___x_733_);
lean_ctor_set(v___x_759_, 2, v___x_758_);
lean_inc(v_ref_714_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v_ref_714_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = l_Lean_PersistentArray_push___redArg(v_traces_748_, v___x_760_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_761_);
v___x_763_ = v___x_750_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_761_);
lean_ctor_set_uint64(v_reuseFailAlloc_771_, sizeof(void*)*1, v_tid_747_);
v___x_763_ = v_reuseFailAlloc_771_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_765_; 
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 4, v___x_763_);
v___x_765_ = v___x_745_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_env_736_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_nextMacroScope_737_);
lean_ctor_set(v_reuseFailAlloc_770_, 2, v_ngen_738_);
lean_ctor_set(v_reuseFailAlloc_770_, 3, v_auxDeclNGen_739_);
lean_ctor_set(v_reuseFailAlloc_770_, 4, v___x_763_);
lean_ctor_set(v_reuseFailAlloc_770_, 5, v_cache_740_);
lean_ctor_set(v_reuseFailAlloc_770_, 6, v_messages_741_);
lean_ctor_set(v_reuseFailAlloc_770_, 7, v_infoState_742_);
lean_ctor_set(v_reuseFailAlloc_770_, 8, v_snapshotTasks_743_);
v___x_765_ = v_reuseFailAlloc_770_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_766_ = lean_st_ref_put(v___y_711_, v___x_765_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_752_);
v___x_768_ = v___x_721_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_752_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
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
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec(v___x_717_);
lean_dec_ref(v_env_716_);
lean_dec_ref(v_msg_707_);
lean_dec(v_cls_706_);
v_a_778_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_718_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_718_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___boxed(lean_object* v_cls_786_, lean_object* v_msg_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(v_cls_786_, v_msg_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2(lean_object* v_cls_794_, lean_object* v_msg_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(v_cls_794_, v_msg_795_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___boxed(lean_object* v_cls_805_, lean_object* v_msg_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2(v_cls_805_, v_msg_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(lean_object* v_keys_816_, lean_object* v_vals_817_, lean_object* v_i_818_, lean_object* v_k_819_){
_start:
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = lean_array_get_size(v_keys_816_);
v___x_821_ = lean_nat_dec_lt(v_i_818_, v___x_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; 
lean_dec(v_i_818_);
v___x_822_ = lean_box(0);
return v___x_822_;
}
else
{
lean_object* v_k_x27_823_; uint8_t v___x_824_; 
v_k_x27_823_ = lean_array_fget_borrowed(v_keys_816_, v_i_818_);
v___x_824_ = lean_name_eq(v_k_819_, v_k_x27_823_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(1u);
v___x_826_ = lean_nat_add(v_i_818_, v___x_825_);
lean_dec(v_i_818_);
v_i_818_ = v___x_826_;
goto _start;
}
else
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_array_fget_borrowed(v_vals_817_, v_i_818_);
lean_dec(v_i_818_);
lean_inc(v___x_828_);
v___x_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
return v___x_829_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_keys_830_, lean_object* v_vals_831_, lean_object* v_i_832_, lean_object* v_k_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(v_keys_830_, v_vals_831_, v_i_832_, v_k_833_);
lean_dec(v_k_833_);
lean_dec_ref(v_vals_831_);
lean_dec_ref(v_keys_830_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(lean_object* v_x_835_, size_t v_x_836_, lean_object* v_x_837_){
_start:
{
if (lean_obj_tag(v_x_835_) == 0)
{
lean_object* v_es_838_; lean_object* v___x_839_; size_t v___x_840_; size_t v___x_841_; lean_object* v_j_842_; lean_object* v___x_843_; 
v_es_838_ = lean_ctor_get(v_x_835_, 0);
v___x_839_ = lean_box(2);
v___x_840_ = ((size_t)31ULL);
v___x_841_ = lean_usize_land(v_x_836_, v___x_840_);
v_j_842_ = lean_usize_to_nat(v___x_841_);
v___x_843_ = lean_array_get_borrowed(v___x_839_, v_es_838_, v_j_842_);
lean_dec(v_j_842_);
switch(lean_obj_tag(v___x_843_))
{
case 0:
{
lean_object* v_key_844_; lean_object* v_val_845_; uint8_t v___x_846_; 
v_key_844_ = lean_ctor_get(v___x_843_, 0);
v_val_845_ = lean_ctor_get(v___x_843_, 1);
v___x_846_ = lean_name_eq(v_x_837_, v_key_844_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
v___x_847_ = lean_box(0);
return v___x_847_;
}
else
{
lean_object* v___x_848_; 
lean_inc(v_val_845_);
v___x_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_848_, 0, v_val_845_);
return v___x_848_;
}
}
case 1:
{
lean_object* v_node_849_; size_t v___x_850_; size_t v___x_851_; 
v_node_849_ = lean_ctor_get(v___x_843_, 0);
v___x_850_ = ((size_t)5ULL);
v___x_851_ = lean_usize_shift_right(v_x_836_, v___x_850_);
v_x_835_ = v_node_849_;
v_x_836_ = v___x_851_;
goto _start;
}
default: 
{
lean_object* v___x_853_; 
v___x_853_ = lean_box(0);
return v___x_853_;
}
}
}
else
{
lean_object* v_ks_854_; lean_object* v_vs_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_ks_854_ = lean_ctor_get(v_x_835_, 0);
v_vs_855_ = lean_ctor_get(v_x_835_, 1);
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(v_ks_854_, v_vs_855_, v___x_856_, v_x_837_);
return v___x_857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg___boxed(lean_object* v_x_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
size_t v_x_7028__boxed_861_; lean_object* v_res_862_; 
v_x_7028__boxed_861_ = lean_unbox_usize(v_x_859_);
lean_dec(v_x_859_);
v_res_862_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(v_x_858_, v_x_7028__boxed_861_, v_x_860_);
lean_dec(v_x_860_);
lean_dec_ref(v_x_858_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
uint64_t v___y_866_; lean_object* v___x_869_; 
v___x_869_ = l_unsafeCast___redArg(v_x_864_);
if (lean_obj_tag(v___x_869_) == 0)
{
uint64_t v___x_870_; 
v___x_870_ = 1723ULL;
v___y_866_ = v___x_870_;
goto v___jp_865_;
}
else
{
uint64_t v_hash_871_; 
v_hash_871_ = lean_ctor_get_uint64(v___x_869_, sizeof(void*)*2);
lean_dec(v___x_869_);
v___y_866_ = v_hash_871_;
goto v___jp_865_;
}
v___jp_865_:
{
size_t v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_uint64_to_usize(v___y_866_);
v___x_868_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(v_x_863_, v___x_867_, v_x_864_);
return v___x_868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg___boxed(lean_object* v_x_872_, lean_object* v_x_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(v_x_872_, v_x_873_);
lean_dec(v_x_873_);
lean_dec_ref(v_x_872_);
return v_res_874_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0));
v___x_877_ = l_Lean_stringToMessageData(v___x_876_);
return v___x_877_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2));
v___x_880_ = l_Lean_stringToMessageData(v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4));
v___x_883_ = l_Lean_stringToMessageData(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12(void){
_start:
{
lean_object* v_cls_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_cls_894_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9));
v___x_895_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11));
v___x_896_ = l_Lean_Name_append(v___x_895_, v_cls_894_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t v_recursive_897_, lean_object* v_declName_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_){
_start:
{
lean_object* v___y_908_; uint8_t v_inlineIfReduce_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v_toCold_1031_; lean_object* v_options_1032_; uint8_t v_hasTrace_1033_; 
v_toCold_1031_ = lean_ctor_get(v_a_904_, 0);
v_options_1032_ = lean_ctor_get(v_toCold_1031_, 2);
v_hasTrace_1033_ = lean_ctor_get_uint8(v_options_1032_, sizeof(void*)*1);
if (v_hasTrace_1033_ == 0)
{
v___y_1020_ = v_a_899_;
v___y_1021_ = v_a_900_;
v___y_1022_ = v_a_901_;
v___y_1023_ = v_a_902_;
v___y_1024_ = v_a_903_;
v___y_1025_ = v_a_904_;
v___y_1026_ = v_a_905_;
goto v___jp_1019_;
}
else
{
lean_object* v_inheritedTraceOptions_1034_; lean_object* v_cls_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v_inheritedTraceOptions_1034_ = lean_ctor_get(v_toCold_1031_, 11);
v_cls_1035_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9));
v___x_1036_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12);
v___x_1037_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1034_, v_options_1032_, v___x_1036_);
if (v___x_1037_ == 0)
{
v___y_1020_ = v_a_899_;
v___y_1021_ = v_a_900_;
v___y_1022_ = v_a_901_;
v___y_1023_ = v_a_902_;
v___y_1024_ = v_a_903_;
v___y_1025_ = v_a_904_;
v___y_1026_ = v_a_905_;
goto v___jp_1019_;
}
else
{
uint8_t v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1038_ = 0;
lean_inc(v_declName_898_);
v___x_1039_ = l_Lean_MessageData_ofConstName(v_declName_898_, v___x_1038_);
v___x_1040_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(v_cls_1035_, v___x_1039_, v_a_902_, v_a_903_, v_a_904_, v_a_905_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_dec_ref_known(v___x_1040_, 1);
v___y_1020_ = v_a_899_;
v___y_1021_ = v_a_900_;
v___y_1022_ = v_a_901_;
v___y_1023_ = v_a_902_;
v___y_1024_ = v_a_903_;
v___y_1025_ = v_a_904_;
v___y_1026_ = v_a_905_;
goto v___jp_1019_;
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec(v_declName_898_);
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
v___jp_907_:
{
lean_object* v___x_917_; 
v___x_917_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_913_);
if (lean_obj_tag(v___x_917_) == 0)
{
if (v_recursive_897_ == 0)
{
lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_declName_898_);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_924_ == 0)
{
lean_object* v_unused_925_; 
v_unused_925_ = lean_ctor_get(v___x_917_, 0);
lean_dec(v_unused_925_);
v___x_919_ = v___x_917_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_dec(v___x_917_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___y_908_);
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___y_908_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
else
{
if (v_inlineIfReduce_909_ == 0)
{
lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec(v_declName_898_);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_917_, 0);
lean_dec(v_unused_933_);
v___x_927_ = v___x_917_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_dec(v___x_917_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v___y_908_);
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___y_908_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_975_; 
v_a_934_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_975_ == 0)
{
v___x_936_ = v___x_917_;
v_isShared_937_ = v_isSharedCheck_975_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_917_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_975_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v_maxRecInlineIfReduce_938_; uint8_t v___x_939_; 
v_maxRecInlineIfReduce_938_ = lean_ctor_get(v_a_934_, 2);
lean_inc(v_maxRecInlineIfReduce_938_);
lean_dec(v_a_934_);
v___x_939_ = lean_nat_dec_lt(v_maxRecInlineIfReduce_938_, v___y_908_);
lean_dec(v_maxRecInlineIfReduce_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_941_; 
lean_dec(v_declName_898_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v___y_908_);
v___x_941_ = v___x_936_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v___y_908_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
else
{
lean_object* v___x_943_; 
lean_del_object(v___x_936_);
lean_dec(v___y_908_);
v___x_943_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_913_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v_maxRecInlineIfReduce_945_; lean_object* v___x_946_; uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_943_, 1);
v_maxRecInlineIfReduce_945_ = lean_ctor_get(v_a_944_, 2);
lean_inc(v_maxRecInlineIfReduce_945_);
lean_dec(v_a_944_);
v___x_946_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1);
v___x_947_ = 0;
v___x_948_ = l_Lean_MessageData_ofConstName(v_declName_898_, v___x_947_);
v___x_949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_946_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3);
v___x_951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_949_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = l_Nat_reprFast(v_maxRecInlineIfReduce_945_);
v___x_953_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
v___x_954_ = l_Lean_MessageData_ofFormat(v___x_953_);
v___x_955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_951_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5);
v___x_957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v___x_957_, v___y_913_, v___y_914_, v___y_915_, v___y_916_);
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec(v_declName_898_);
v_a_967_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_943_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_943_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
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
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec(v___y_908_);
lean_dec(v_declName_898_);
v_a_976_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_917_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_917_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
v___jp_984_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_993_ = lean_unsigned_to_nat(1u);
v___x_994_ = lean_nat_add(v___y_992_, v___x_993_);
lean_dec(v___y_992_);
v___x_995_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_988_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; uint8_t v___x_997_; lean_object* v___x_998_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v___x_997_ = lean_unbox(v_a_996_);
lean_dec(v_a_996_);
lean_inc(v_declName_898_);
v___x_998_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_898_, v___x_997_, v___y_989_, v___y_991_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_998_, 1);
if (lean_obj_tag(v_a_999_) == 1)
{
lean_object* v_val_1000_; uint8_t v___x_1001_; 
v_val_1000_ = lean_ctor_get(v_a_999_, 0);
lean_inc(v_val_1000_);
lean_dec_ref_known(v_a_999_, 1);
v___x_1001_ = l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(v_val_1000_);
lean_dec(v_val_1000_);
v___y_908_ = v___x_994_;
v_inlineIfReduce_909_ = v___x_1001_;
v___y_910_ = v___y_986_;
v___y_911_ = v___y_985_;
v___y_912_ = v___y_990_;
v___y_913_ = v___y_988_;
v___y_914_ = v___y_987_;
v___y_915_ = v___y_989_;
v___y_916_ = v___y_991_;
goto v___jp_907_;
}
else
{
uint8_t v___x_1002_; 
lean_dec(v_a_999_);
v___x_1002_ = 0;
v___y_908_ = v___x_994_;
v_inlineIfReduce_909_ = v___x_1002_;
v___y_910_ = v___y_986_;
v___y_911_ = v___y_985_;
v___y_912_ = v___y_990_;
v___y_913_ = v___y_988_;
v___y_914_ = v___y_987_;
v___y_915_ = v___y_989_;
v___y_916_ = v___y_991_;
goto v___jp_907_;
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec(v___x_994_);
lean_dec(v_declName_898_);
v_a_1003_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_998_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_998_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v___x_994_);
lean_dec(v_declName_898_);
v_a_1011_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_995_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_995_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
v___jp_1019_:
{
lean_object* v_inlineStackOccs_1027_; lean_object* v___x_1028_; 
v_inlineStackOccs_1027_ = lean_ctor_get(v___y_1020_, 3);
v___x_1028_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(v_inlineStackOccs_1027_, v_declName_898_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_unsigned_to_nat(0u);
v___y_985_ = v___y_1021_;
v___y_986_ = v___y_1020_;
v___y_987_ = v___y_1024_;
v___y_988_ = v___y_1023_;
v___y_989_ = v___y_1025_;
v___y_990_ = v___y_1022_;
v___y_991_ = v___y_1026_;
v___y_992_ = v___x_1029_;
goto v___jp_984_;
}
else
{
lean_object* v_val_1030_; 
v_val_1030_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v___x_1028_, 1);
v___y_985_ = v___y_1021_;
v___y_986_ = v___y_1020_;
v___y_987_ = v___y_1024_;
v___y_988_ = v___y_1023_;
v___y_989_ = v___y_1025_;
v___y_990_ = v___y_1022_;
v___y_991_ = v___y_1026_;
v___y_992_ = v_val_1030_;
goto v___jp_984_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___boxed(lean_object* v_recursive_1049_, lean_object* v_declName_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_){
_start:
{
uint8_t v_recursive_boxed_1059_; lean_object* v_res_1060_; 
v_recursive_boxed_1059_ = lean_unbox(v_recursive_1049_);
v_res_1060_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_boxed_1059_, v_declName_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1(lean_object* v_00_u03b2_1061_, lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(v_x_1062_, v_x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___boxed(lean_object* v_00_u03b2_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1(v_00_u03b2_1065_, v_x_1066_, v_x_1067_);
lean_dec(v_x_1067_);
lean_dec_ref(v_x_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1(lean_object* v_00_u03b2_1069_, lean_object* v_x_1070_, size_t v_x_1071_, lean_object* v_x_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(v_x_1070_, v_x_1071_, v_x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1074_, lean_object* v_x_1075_, lean_object* v_x_1076_, lean_object* v_x_1077_){
_start:
{
size_t v_x_7440__boxed_1078_; lean_object* v_res_1079_; 
v_x_7440__boxed_1078_ = lean_unbox_usize(v_x_1076_);
lean_dec(v_x_1076_);
v_res_1079_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1(v_00_u03b2_1074_, v_x_1075_, v_x_7440__boxed_1078_, v_x_1077_);
lean_dec(v_x_1077_);
lean_dec_ref(v_x_1075_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1080_, lean_object* v_keys_1081_, lean_object* v_vals_1082_, lean_object* v_heq_1083_, lean_object* v_i_1084_, lean_object* v_k_1085_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(v_keys_1081_, v_vals_1082_, v_i_1084_, v_k_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1087_, lean_object* v_keys_1088_, lean_object* v_vals_1089_, lean_object* v_heq_1090_, lean_object* v_i_1091_, lean_object* v_k_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3(v_00_u03b2_1087_, v_keys_1088_, v_vals_1089_, v_heq_1090_, v_i_1091_, v_k_1092_);
lean_dec(v_k_1092_);
lean_dec_ref(v_vals_1089_);
lean_dec_ref(v_keys_1088_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg(lean_object* v_value_1096_, uint8_t v_recursive_1097_, lean_object* v_x_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_){
_start:
{
if (lean_obj_tag(v_value_1096_) == 3)
{
lean_object* v_declName_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v_declName_1107_ = lean_ctor_get(v_value_1096_, 0);
lean_inc_n(v_declName_1107_, 2);
lean_dec_ref_known(v_value_1096_, 3);
v___x_1108_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0));
v___x_1109_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1));
v___x_1110_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1097_, v_declName_1107_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v_declName_1112_; lean_object* v_config_1113_; lean_object* v_inlineStack_1114_; lean_object* v_inlineStackOccs_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
lean_dec_ref_known(v___x_1110_, 1);
v_declName_1112_ = lean_ctor_get(v_a_1099_, 0);
v_config_1113_ = lean_ctor_get(v_a_1099_, 1);
v_inlineStack_1114_ = lean_ctor_get(v_a_1099_, 2);
v_inlineStackOccs_1115_ = lean_ctor_get(v_a_1099_, 3);
lean_inc(v_inlineStack_1114_);
lean_inc(v_declName_1107_);
v___x_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1116_, 0, v_declName_1107_);
lean_ctor_set(v___x_1116_, 1, v_inlineStack_1114_);
lean_inc_ref(v_inlineStackOccs_1115_);
v___x_1117_ = l_Lean_PersistentHashMap_insert___redArg(v___x_1108_, v___x_1109_, v_inlineStackOccs_1115_, v_declName_1107_, v_a_1111_);
lean_inc_ref(v_config_1113_);
lean_inc(v_declName_1112_);
v___x_1118_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1118_, 0, v_declName_1112_);
lean_ctor_set(v___x_1118_, 1, v_config_1113_);
lean_ctor_set(v___x_1118_, 2, v___x_1116_);
lean_ctor_set(v___x_1118_, 3, v___x_1117_);
lean_inc(v_a_1105_);
lean_inc_ref(v_a_1104_);
lean_inc(v_a_1103_);
lean_inc_ref(v_a_1102_);
lean_inc_ref(v_a_1101_);
lean_inc(v_a_1100_);
v___x_1119_ = lean_apply_8(v_x_1098_, v___x_1118_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, lean_box(0));
return v___x_1119_;
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec(v_declName_1107_);
lean_dec_ref(v_x_1098_);
v_a_1120_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1110_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1110_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
else
{
lean_object* v___x_1128_; 
lean_dec(v_value_1096_);
lean_inc(v_a_1105_);
lean_inc_ref(v_a_1104_);
lean_inc(v_a_1103_);
lean_inc_ref(v_a_1102_);
lean_inc_ref(v_a_1101_);
lean_inc(v_a_1100_);
lean_inc_ref(v_a_1099_);
v___x_1128_ = lean_apply_8(v_x_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, lean_box(0));
return v___x_1128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___boxed(lean_object* v_value_1129_, lean_object* v_recursive_1130_, lean_object* v_x_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
uint8_t v_recursive_boxed_1140_; lean_object* v_res_1141_; 
v_recursive_boxed_1140_ = lean_unbox(v_recursive_1130_);
v_res_1141_ = l_Lean_Compiler_LCNF_Simp_withInlining___redArg(v_value_1129_, v_recursive_boxed_1140_, v_x_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
lean_dec(v_a_1136_);
lean_dec_ref(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining(lean_object* v_00_u03b1_1142_, lean_object* v_value_1143_, uint8_t v_recursive_1144_, lean_object* v_x_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
if (lean_obj_tag(v_value_1143_) == 3)
{
lean_object* v_declName_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_declName_1154_ = lean_ctor_get(v_value_1143_, 0);
lean_inc_n(v_declName_1154_, 2);
lean_dec_ref_known(v_value_1143_, 3);
v___x_1155_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0));
v___x_1156_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1));
v___x_1157_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1144_, v_declName_1154_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v_declName_1159_; lean_object* v_config_1160_; lean_object* v_inlineStack_1161_; lean_object* v_inlineStackOccs_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v_declName_1159_ = lean_ctor_get(v_a_1146_, 0);
v_config_1160_ = lean_ctor_get(v_a_1146_, 1);
v_inlineStack_1161_ = lean_ctor_get(v_a_1146_, 2);
v_inlineStackOccs_1162_ = lean_ctor_get(v_a_1146_, 3);
lean_inc(v_inlineStack_1161_);
lean_inc(v_declName_1154_);
v___x_1163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1163_, 0, v_declName_1154_);
lean_ctor_set(v___x_1163_, 1, v_inlineStack_1161_);
lean_inc_ref(v_inlineStackOccs_1162_);
v___x_1164_ = l_Lean_PersistentHashMap_insert___redArg(v___x_1155_, v___x_1156_, v_inlineStackOccs_1162_, v_declName_1154_, v_a_1158_);
lean_inc_ref(v_config_1160_);
lean_inc(v_declName_1159_);
v___x_1165_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1165_, 0, v_declName_1159_);
lean_ctor_set(v___x_1165_, 1, v_config_1160_);
lean_ctor_set(v___x_1165_, 2, v___x_1163_);
lean_ctor_set(v___x_1165_, 3, v___x_1164_);
lean_inc(v_a_1152_);
lean_inc_ref(v_a_1151_);
lean_inc(v_a_1150_);
lean_inc_ref(v_a_1149_);
lean_inc_ref(v_a_1148_);
lean_inc(v_a_1147_);
v___x_1166_ = lean_apply_8(v_x_1145_, v___x_1165_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, lean_box(0));
return v___x_1166_;
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec(v_declName_1154_);
lean_dec_ref(v_x_1145_);
v_a_1167_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1157_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1157_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
else
{
lean_object* v___x_1175_; 
lean_dec(v_value_1143_);
lean_inc(v_a_1152_);
lean_inc_ref(v_a_1151_);
lean_inc(v_a_1150_);
lean_inc_ref(v_a_1149_);
lean_inc_ref(v_a_1148_);
lean_inc(v_a_1147_);
lean_inc_ref(v_a_1146_);
v___x_1175_ = lean_apply_8(v_x_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, lean_box(0));
return v___x_1175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___boxed(lean_object* v_00_u03b1_1176_, lean_object* v_value_1177_, lean_object* v_recursive_1178_, lean_object* v_x_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_){
_start:
{
uint8_t v_recursive_boxed_1188_; lean_object* v_res_1189_; 
v_recursive_boxed_1188_ = lean_unbox(v_recursive_1178_);
v_res_1189_ = l_Lean_Compiler_LCNF_Simp_withInlining(v_00_u03b1_1176_, v_value_1177_, v_recursive_boxed_1188_, v_x_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
return v_res_1189_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0));
v___x_1192_ = l_Lean_stringToMessageData(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3));
v___x_1197_ = l_Lean_MessageData_ofFormat(v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(lean_object* v_as_x27_1198_, lean_object* v_b_1199_){
_start:
{
if (lean_obj_tag(v_as_x27_1198_) == 0)
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v_b_1199_);
return v___x_1201_;
}
else
{
lean_object* v_snd_1202_; lean_object* v_head_1203_; lean_object* v_tail_1204_; lean_object* v_fst_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1246_; 
v_snd_1202_ = lean_ctor_get(v_b_1199_, 1);
lean_inc(v_snd_1202_);
v_head_1203_ = lean_ctor_get(v_as_x27_1198_, 0);
v_tail_1204_ = lean_ctor_get(v_as_x27_1198_, 1);
v_fst_1205_ = lean_ctor_get(v_b_1199_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_b_1199_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v_b_1199_, 1);
lean_dec(v_unused_1247_);
v___x_1207_ = v_b_1199_;
v_isShared_1208_ = v_isSharedCheck_1246_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_fst_1205_);
lean_dec(v_b_1199_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1246_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_fst_1209_; lean_object* v_snd_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1245_; 
v_fst_1209_ = lean_ctor_get(v_snd_1202_, 0);
v_snd_1210_ = lean_ctor_get(v_snd_1202_, 1);
v_isSharedCheck_1245_ = !lean_is_exclusive(v_snd_1202_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1212_ = v_snd_1202_;
v_isShared_1213_ = v_isSharedCheck_1245_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_snd_1210_);
lean_inc(v_fst_1209_);
lean_dec(v_snd_1202_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1245_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
uint8_t v___x_1214_; 
v___x_1214_ = lean_name_eq(v_fst_1209_, v_head_1203_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1221_; 
lean_dec(v_snd_1210_);
lean_dec(v_fst_1209_);
v___x_1215_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1);
lean_inc_n(v_head_1203_, 2);
v___x_1216_ = l_Lean_MessageData_ofConstName(v_head_1203_, v___x_1214_);
v___x_1217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
lean_ctor_set(v___x_1217_, 1, v___x_1215_);
v___x_1218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1218_, 0, v_fst_1205_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = lean_box(v___x_1214_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v___x_1219_);
lean_ctor_set(v___x_1212_, 0, v_head_1203_);
v___x_1221_ = v___x_1212_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_head_1203_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1219_);
v___x_1221_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
lean_object* v___x_1223_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1221_);
lean_ctor_set(v___x_1207_, 0, v___x_1218_);
v___x_1223_ = v___x_1207_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1218_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
v_as_x27_1198_ = v_tail_1204_;
v_b_1199_ = v___x_1223_;
goto _start;
}
}
}
else
{
uint8_t v___x_1227_; 
v___x_1227_ = lean_unbox(v_snd_1210_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1232_; 
lean_dec(v_snd_1210_);
v___x_1228_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4);
v___x_1229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1229_, 0, v_fst_1205_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = lean_box(v___x_1214_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v___x_1230_);
v___x_1232_ = v___x_1212_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_fst_1209_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v___x_1230_);
v___x_1232_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1234_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1232_);
lean_ctor_set(v___x_1207_, 0, v___x_1229_);
v___x_1234_ = v___x_1207_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_as_x27_1198_ = v_tail_1204_;
v_b_1199_ = v___x_1234_;
goto _start;
}
}
}
else
{
lean_object* v___x_1239_; 
if (v_isShared_1213_ == 0)
{
v___x_1239_ = v___x_1212_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_fst_1209_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v_snd_1210_);
v___x_1239_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
lean_object* v___x_1241_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1239_);
v___x_1241_ = v___x_1207_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_fst_1205_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
v_as_x27_1198_ = v_tail_1204_;
v_b_1199_ = v___x_1241_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___boxed(lean_object* v_as_x27_1248_, lean_object* v_b_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(v_as_x27_1248_, v_b_1249_);
lean_dec(v_as_x27_1248_);
return v_res_1251_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = l_Lean_maxRecDepthErrorMessage;
v___x_1253_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0);
v___x_1255_ = l_Lean_MessageData_ofFormat(v___x_1254_);
return v___x_1255_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2));
v___x_1258_ = l_Lean_stringToMessageData(v___x_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v_inlineStack_1267_; 
v_inlineStack_1267_ = lean_ctor_get(v_a_1259_, 2);
if (lean_obj_tag(v_inlineStack_1267_) == 0)
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1);
v___x_1269_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v___x_1268_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
return v___x_1269_;
}
else
{
lean_object* v_head_1270_; lean_object* v_tail_1271_; uint8_t v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v_a_1280_; lean_object* v_fst_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1290_; 
v_head_1270_ = lean_ctor_get(v_inlineStack_1267_, 0);
v_tail_1271_ = lean_ctor_get(v_inlineStack_1267_, 1);
v___x_1272_ = 0;
lean_inc_n(v_head_1270_, 2);
v___x_1273_ = l_Lean_MessageData_ofConstName(v_head_1270_, v___x_1272_);
v___x_1274_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1);
v___x_1275_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_box(v___x_1272_);
v___x_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1277_, 0, v_head_1270_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1275_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(v_tail_1271_, v___x_1278_);
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref(v___x_1279_);
v_fst_1281_ = lean_ctor_get(v_a_1280_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_a_1280_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; 
v_unused_1291_ = lean_ctor_get(v_a_1280_, 1);
lean_dec(v_unused_1291_);
v___x_1283_ = v_a_1280_;
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_fst_1281_);
lean_dec(v_a_1280_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1285_; lean_object* v___x_1287_; 
v___x_1285_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3);
if (v_isShared_1284_ == 0)
{
lean_ctor_set_tag(v___x_1283_, 7);
lean_ctor_set(v___x_1283_, 1, v_fst_1281_);
lean_ctor_set(v___x_1283_, 0, v___x_1285_);
v___x_1287_ = v___x_1283_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_fst_1281_);
v___x_1287_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v___x_1287_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___boxed(lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
lean_dec(v_a_1296_);
lean_dec_ref(v_a_1295_);
lean_dec_ref(v_a_1294_);
lean_dec(v_a_1293_);
lean_dec_ref(v_a_1292_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object* v_00_u03b1_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___boxed(lean_object* v_00_u03b1_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(v_00_u03b1_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_);
lean_dec(v_a_1318_);
lean_dec_ref(v_a_1317_);
lean_dec(v_a_1316_);
lean_dec_ref(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec_ref(v_a_1312_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0(lean_object* v_as_1321_, lean_object* v_as_x27_1322_, lean_object* v_b_1323_, lean_object* v_a_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(v_as_x27_1322_, v_b_1323_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___boxed(lean_object* v_as_1334_, lean_object* v_as_x27_1335_, lean_object* v_b_1336_, lean_object* v_a_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0(v_as_1334_, v_as_x27_1335_, v_b_1336_, v_a_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v_as_x27_1335_);
lean_dec(v_as_1334_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg(lean_object* v_x_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_){
_start:
{
lean_object* v_toCold_1356_; lean_object* v_currRecDepth_1357_; lean_object* v_ref_1358_; uint8_t v_diag_1359_; uint8_t v_suppressElabErrors_1360_; lean_object* v_maxRecDepth_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; 
v_toCold_1356_ = lean_ctor_get(v_a_1353_, 0);
v_currRecDepth_1357_ = lean_ctor_get(v_a_1353_, 1);
v_ref_1358_ = lean_ctor_get(v_a_1353_, 2);
v_diag_1359_ = lean_ctor_get_uint8(v_a_1353_, sizeof(void*)*3);
v_suppressElabErrors_1360_ = lean_ctor_get_uint8(v_a_1353_, sizeof(void*)*3 + 1);
v_maxRecDepth_1366_ = lean_ctor_get(v_toCold_1356_, 3);
v___x_1367_ = lean_unsigned_to_nat(0u);
v___x_1368_ = lean_nat_dec_eq(v_maxRecDepth_1366_, v___x_1367_);
if (v___x_1368_ == 0)
{
uint8_t v___x_1369_; 
v___x_1369_ = lean_nat_dec_eq(v_currRecDepth_1357_, v_maxRecDepth_1366_);
if (v___x_1369_ == 0)
{
goto v___jp_1361_;
}
else
{
lean_object* v___x_1370_; 
lean_dec_ref(v_x_1347_);
v___x_1370_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_, v_a_1354_);
return v___x_1370_;
}
}
else
{
goto v___jp_1361_;
}
v___jp_1361_:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1362_ = lean_unsigned_to_nat(1u);
v___x_1363_ = lean_nat_add(v_currRecDepth_1357_, v___x_1362_);
lean_inc(v_ref_1358_);
lean_inc_ref(v_toCold_1356_);
v___x_1364_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1364_, 0, v_toCold_1356_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
lean_ctor_set(v___x_1364_, 2, v_ref_1358_);
lean_ctor_set_uint8(v___x_1364_, sizeof(void*)*3, v_diag_1359_);
lean_ctor_set_uint8(v___x_1364_, sizeof(void*)*3 + 1, v_suppressElabErrors_1360_);
lean_inc(v_a_1354_);
lean_inc(v_a_1352_);
lean_inc_ref(v_a_1351_);
lean_inc_ref(v_a_1350_);
lean_inc(v_a_1349_);
lean_inc_ref(v_a_1348_);
v___x_1365_ = lean_apply_8(v_x_1347_, v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_, v_a_1352_, v___x_1364_, v_a_1354_, lean_box(0));
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg___boxed(lean_object* v_x_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_){
_start:
{
lean_object* v_res_1380_; 
v_res_1380_ = l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg(v_x_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
lean_dec(v_a_1378_);
lean_dec_ref(v_a_1377_);
lean_dec(v_a_1376_);
lean_dec_ref(v_a_1375_);
lean_dec_ref(v_a_1374_);
lean_dec(v_a_1373_);
lean_dec_ref(v_a_1372_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth(lean_object* v_00_u03b1_1381_, lean_object* v_x_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v_toCold_1391_; lean_object* v_currRecDepth_1392_; lean_object* v_ref_1393_; uint8_t v_diag_1394_; uint8_t v_suppressElabErrors_1395_; lean_object* v_maxRecDepth_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v_toCold_1391_ = lean_ctor_get(v_a_1388_, 0);
v_currRecDepth_1392_ = lean_ctor_get(v_a_1388_, 1);
v_ref_1393_ = lean_ctor_get(v_a_1388_, 2);
v_diag_1394_ = lean_ctor_get_uint8(v_a_1388_, sizeof(void*)*3);
v_suppressElabErrors_1395_ = lean_ctor_get_uint8(v_a_1388_, sizeof(void*)*3 + 1);
v_maxRecDepth_1401_ = lean_ctor_get(v_toCold_1391_, 3);
v___x_1402_ = lean_unsigned_to_nat(0u);
v___x_1403_ = lean_nat_dec_eq(v_maxRecDepth_1401_, v___x_1402_);
if (v___x_1403_ == 0)
{
uint8_t v___x_1404_; 
v___x_1404_ = lean_nat_dec_eq(v_currRecDepth_1392_, v_maxRecDepth_1401_);
if (v___x_1404_ == 0)
{
goto v___jp_1396_;
}
else
{
lean_object* v___x_1405_; 
lean_dec_ref(v_x_1382_);
v___x_1405_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
return v___x_1405_;
}
}
else
{
goto v___jp_1396_;
}
v___jp_1396_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1397_ = lean_unsigned_to_nat(1u);
v___x_1398_ = lean_nat_add(v_currRecDepth_1392_, v___x_1397_);
lean_inc(v_ref_1393_);
lean_inc_ref(v_toCold_1391_);
v___x_1399_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1399_, 0, v_toCold_1391_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
lean_ctor_set(v___x_1399_, 2, v_ref_1393_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*3, v_diag_1394_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*3 + 1, v_suppressElabErrors_1395_);
lean_inc(v_a_1389_);
lean_inc(v_a_1387_);
lean_inc_ref(v_a_1386_);
lean_inc_ref(v_a_1385_);
lean_inc(v_a_1384_);
lean_inc_ref(v_a_1383_);
v___x_1400_ = lean_apply_8(v_x_1382_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v___x_1399_, v_a_1389_, lean_box(0));
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___boxed(lean_object* v_00_u03b1_1406_, lean_object* v_x_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lean_Compiler_LCNF_Simp_withIncRecDepth(v_00_u03b1_1406_, v_x_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec_ref(v_a_1410_);
lean_dec(v_a_1409_);
lean_dec_ref(v_a_1408_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(lean_object* v_a_1417_, lean_object* v_fvarId_1418_, lean_object* v___x_1419_, lean_object* v_a_x3f_1420_){
_start:
{
lean_object* v___x_1422_; lean_object* v_subst_1423_; lean_object* v_used_1424_; lean_object* v_binderRenaming_1425_; lean_object* v_funDeclInfoMap_1426_; uint8_t v_simplified_1427_; lean_object* v_visited_1428_; lean_object* v_inline_1429_; lean_object* v_inlineLocal_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1441_; 
v___x_1422_ = lean_st_ref_take(v_a_1417_);
v_subst_1423_ = lean_ctor_get(v___x_1422_, 0);
v_used_1424_ = lean_ctor_get(v___x_1422_, 1);
v_binderRenaming_1425_ = lean_ctor_get(v___x_1422_, 2);
v_funDeclInfoMap_1426_ = lean_ctor_get(v___x_1422_, 3);
v_simplified_1427_ = lean_ctor_get_uint8(v___x_1422_, sizeof(void*)*7);
v_visited_1428_ = lean_ctor_get(v___x_1422_, 4);
v_inline_1429_ = lean_ctor_get(v___x_1422_, 5);
v_inlineLocal_1430_ = lean_ctor_get(v___x_1422_, 6);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1432_ = v___x_1422_;
v_isShared_1433_ = v_isSharedCheck_1441_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_inlineLocal_1430_);
lean_inc(v_inline_1429_);
lean_inc(v_visited_1428_);
lean_inc(v_funDeclInfoMap_1426_);
lean_inc(v_binderRenaming_1425_);
lean_inc(v_used_1424_);
lean_inc(v_subst_1423_);
lean_dec(v___x_1422_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1441_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1434_ = lean_box(0);
v___x_1435_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_restore(v_funDeclInfoMap_1426_, v_fvarId_1418_, v___x_1419_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 3, v___x_1435_);
v___x_1437_ = v___x_1432_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_subst_1423_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_used_1424_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_binderRenaming_1425_);
lean_ctor_set(v_reuseFailAlloc_1440_, 3, v___x_1435_);
lean_ctor_set(v_reuseFailAlloc_1440_, 4, v_visited_1428_);
lean_ctor_set(v_reuseFailAlloc_1440_, 5, v_inline_1429_);
lean_ctor_set(v_reuseFailAlloc_1440_, 6, v_inlineLocal_1430_);
lean_ctor_set_uint8(v_reuseFailAlloc_1440_, sizeof(void*)*7, v_simplified_1427_);
v___x_1437_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_st_ref_put(v_a_1417_, v___x_1437_);
v___x_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1434_);
return v___x_1439_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0___boxed(lean_object* v_a_1442_, lean_object* v_fvarId_1443_, lean_object* v___x_1444_, lean_object* v_a_x3f_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(v_a_1442_, v_fvarId_1443_, v___x_1444_, v_a_x3f_1445_);
lean_dec(v_a_x3f_1445_);
lean_dec(v_a_1442_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(lean_object* v_a_1448_, lean_object* v_x_1449_){
_start:
{
if (lean_obj_tag(v_x_1449_) == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_box(0);
return v___x_1450_;
}
else
{
lean_object* v_key_1451_; lean_object* v_value_1452_; lean_object* v_tail_1453_; uint8_t v___x_1454_; 
v_key_1451_ = lean_ctor_get(v_x_1449_, 0);
v_value_1452_ = lean_ctor_get(v_x_1449_, 1);
v_tail_1453_ = lean_ctor_get(v_x_1449_, 2);
v___x_1454_ = l_Lean_instBEqFVarId_beq(v_key_1451_, v_a_1448_);
if (v___x_1454_ == 0)
{
v_x_1449_ = v_tail_1453_;
goto _start;
}
else
{
lean_object* v___x_1456_; 
lean_inc(v_value_1452_);
v___x_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1456_, 0, v_value_1452_);
return v___x_1456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg___boxed(lean_object* v_a_1457_, lean_object* v_x_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(v_a_1457_, v_x_1458_);
lean_dec(v_x_1458_);
lean_dec(v_a_1457_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(lean_object* v_m_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_buckets_1462_; lean_object* v___x_1463_; uint64_t v___x_1464_; uint64_t v___x_1465_; uint64_t v___x_1466_; uint64_t v_fold_1467_; uint64_t v___x_1468_; uint64_t v___x_1469_; uint64_t v___x_1470_; size_t v___x_1471_; size_t v___x_1472_; size_t v___x_1473_; size_t v___x_1474_; size_t v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_buckets_1462_ = lean_ctor_get(v_m_1460_, 1);
v___x_1463_ = lean_array_get_size(v_buckets_1462_);
v___x_1464_ = l_Lean_instHashableFVarId_hash(v_a_1461_);
v___x_1465_ = 32ULL;
v___x_1466_ = lean_uint64_shift_right(v___x_1464_, v___x_1465_);
v_fold_1467_ = lean_uint64_xor(v___x_1464_, v___x_1466_);
v___x_1468_ = 16ULL;
v___x_1469_ = lean_uint64_shift_right(v_fold_1467_, v___x_1468_);
v___x_1470_ = lean_uint64_xor(v_fold_1467_, v___x_1469_);
v___x_1471_ = lean_uint64_to_usize(v___x_1470_);
v___x_1472_ = lean_usize_of_nat(v___x_1463_);
v___x_1473_ = ((size_t)1ULL);
v___x_1474_ = lean_usize_sub(v___x_1472_, v___x_1473_);
v___x_1475_ = lean_usize_land(v___x_1471_, v___x_1474_);
v___x_1476_ = lean_array_uget_borrowed(v_buckets_1462_, v___x_1475_);
v___x_1477_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(v_a_1461_, v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg___boxed(lean_object* v_m_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_m_1478_, v_a_1479_);
lean_dec(v_a_1479_);
lean_dec_ref(v_m_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(lean_object* v_fvarId_1481_, lean_object* v_x_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v___x_1491_; lean_object* v_funDeclInfoMap_1492_; lean_object* v___x_1493_; lean_object* v_a_1495_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1491_ = lean_st_ref_get(v_a_1484_);
v_funDeclInfoMap_1492_ = lean_ctor_get(v___x_1491_, 3);
lean_inc_ref(v_funDeclInfoMap_1492_);
lean_dec(v___x_1491_);
v___x_1493_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_funDeclInfoMap_1492_, v_fvarId_1481_);
lean_dec_ref(v_funDeclInfoMap_1492_);
lean_inc(v_fvarId_1481_);
v___x_1506_ = l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(v_fvarId_1481_, v_a_1484_);
lean_dec_ref(v___x_1506_);
lean_inc(v_a_1489_);
lean_inc_ref(v_a_1488_);
lean_inc(v_a_1487_);
lean_inc_ref(v_a_1486_);
lean_inc_ref(v_a_1485_);
lean_inc(v_a_1484_);
lean_inc_ref(v_a_1483_);
v___x_1507_ = lean_apply_8(v_x_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, lean_box(0));
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1524_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1510_ = v___x_1507_;
v_isShared_1511_ = v_isSharedCheck_1524_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1507_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1524_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
lean_inc(v_a_1508_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set_tag(v___x_1510_, 1);
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
lean_object* v___x_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v___x_1514_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(v_a_1484_, v_fvarId_1481_, v___x_1493_, v___x_1513_);
lean_dec_ref(v___x_1513_);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; 
v_unused_1522_ = lean_ctor_get(v___x_1514_, 0);
lean_dec(v_unused_1522_);
v___x_1516_ = v___x_1514_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_dec(v___x_1514_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v_a_1508_);
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1508_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
}
else
{
lean_object* v_a_1525_; 
v_a_1525_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1507_, 1);
v_a_1495_ = v_a_1525_;
goto v___jp_1494_;
}
v___jp_1494_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
v___x_1496_ = lean_box(0);
v___x_1497_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(v_a_1484_, v_fvarId_1481_, v___x_1493_, v___x_1496_);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1504_ == 0)
{
lean_object* v_unused_1505_; 
v_unused_1505_ = lean_ctor_get(v___x_1497_, 0);
lean_dec(v_unused_1505_);
v___x_1499_ = v___x_1497_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_dec(v___x_1497_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 1);
lean_ctor_set(v___x_1499_, 0, v_a_1495_);
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1495_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___boxed(lean_object* v_fvarId_1526_, lean_object* v_x_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(v_fvarId_1526_, v_x_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_);
lean_dec(v_a_1534_);
lean_dec_ref(v_a_1533_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec_ref(v_a_1530_);
lean_dec(v_a_1529_);
lean_dec_ref(v_a_1528_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline(lean_object* v_00_u03b1_1537_, lean_object* v_fvarId_1538_, lean_object* v_x_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(v_fvarId_1538_, v_x_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___boxed(lean_object* v_00_u03b1_1549_, lean_object* v_fvarId_1550_, lean_object* v_x_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline(v_00_u03b1_1549_, v_fvarId_1550_, v_x_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_);
lean_dec(v_a_1558_);
lean_dec_ref(v_a_1557_);
lean_dec(v_a_1556_);
lean_dec_ref(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0(lean_object* v_00_u03b2_1561_, lean_object* v_m_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_m_1562_, v_a_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___boxed(lean_object* v_00_u03b2_1565_, lean_object* v_m_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0(v_00_u03b2_1565_, v_m_1566_, v_a_1567_);
lean_dec(v_a_1567_);
lean_dec_ref(v_m_1566_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0(lean_object* v_00_u03b2_1569_, lean_object* v_a_1570_, lean_object* v_x_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(v_a_1570_, v_x_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1573_, lean_object* v_a_1574_, lean_object* v_x_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0(v_00_u03b2_1573_, v_a_1574_, v_x_1575_);
lean_dec(v_x_1575_);
lean_dec(v_a_1574_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object* v_fvarId_1577_, lean_object* v_a_1578_){
_start:
{
lean_object* v___x_1588_; lean_object* v_funDeclInfoMap_1589_; lean_object* v___x_1590_; 
v___x_1588_ = lean_st_ref_get(v_a_1578_);
v_funDeclInfoMap_1589_ = lean_ctor_get(v___x_1588_, 3);
lean_inc_ref(v_funDeclInfoMap_1589_);
lean_dec(v___x_1588_);
v___x_1590_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_funDeclInfoMap_1589_, v_fvarId_1577_);
lean_dec_ref(v_funDeclInfoMap_1589_);
if (lean_obj_tag(v___x_1590_) == 1)
{
lean_object* v_val_1591_; uint8_t v___x_1592_; 
v_val_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_val_1591_);
lean_dec_ref_known(v___x_1590_, 1);
v___x_1592_ = lean_unbox(v_val_1591_);
lean_dec(v_val_1591_);
switch(v___x_1592_)
{
case 0:
{
goto v___jp_1584_;
}
case 2:
{
goto v___jp_1584_;
}
default: 
{
goto v___jp_1580_;
}
}
}
else
{
lean_dec(v___x_1590_);
goto v___jp_1580_;
}
v___jp_1580_:
{
uint8_t v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = 0;
v___x_1582_ = lean_box(v___x_1581_);
v___x_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
return v___x_1583_;
}
v___jp_1584_:
{
uint8_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1585_ = 1;
v___x_1586_ = lean_box(v___x_1585_);
v___x_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1586_);
return v___x_1587_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg___boxed(lean_object* v_fvarId_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_1593_, v_a_1594_);
lean_dec(v_a_1594_);
lean_dec(v_fvarId_1593_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline(lean_object* v_fvarId_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_1597_, v_a_1599_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___boxed(lean_object* v_fvarId_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline(v_fvarId_1607_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
lean_dec_ref(v_a_1610_);
lean_dec(v_a_1609_);
lean_dec_ref(v_a_1608_);
lean_dec(v_fvarId_1607_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg(lean_object* v_code_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_1618_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1632_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1623_ = v___x_1620_;
v_isShared_1624_ = v_isSharedCheck_1632_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1620_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1632_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v_smallThreshold_1625_; uint8_t v___x_1626_; uint8_t v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1630_; 
v_smallThreshold_1625_ = lean_ctor_get(v_a_1621_, 0);
lean_inc(v_smallThreshold_1625_);
lean_dec(v_a_1621_);
v___x_1626_ = 0;
v___x_1627_ = l_Lean_Compiler_LCNF_Code_sizeLe(v___x_1626_, v_code_1617_, v_smallThreshold_1625_);
lean_dec(v_smallThreshold_1625_);
v___x_1628_ = lean_box(v___x_1627_);
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 0, v___x_1628_);
v___x_1630_ = v___x_1623_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
v_a_1633_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1620_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1620_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg___boxed(lean_object* v_code_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_code_1641_, v_a_1642_);
lean_dec_ref(v_a_1642_);
lean_dec_ref(v_code_1641_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall(lean_object* v_code_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_code_1645_, v_a_1649_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___boxed(lean_object* v_code_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_Compiler_LCNF_Simp_isSmall(v_code_1655_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_, v_a_1661_, v_a_1662_);
lean_dec(v_a_1662_);
lean_dec_ref(v_a_1661_);
lean_dec(v_a_1660_);
lean_dec_ref(v_a_1659_);
lean_dec_ref(v_a_1658_);
lean_dec(v_a_1657_);
lean_dec_ref(v_a_1656_);
lean_dec_ref(v_code_1655_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object* v_decl_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v_fvarId_1669_; lean_object* v_value_1670_; lean_object* v___x_1671_; lean_object* v_a_1672_; uint8_t v___x_1673_; 
v_fvarId_1669_ = lean_ctor_get(v_decl_1665_, 0);
v_value_1670_ = lean_ctor_get(v_decl_1665_, 4);
v___x_1671_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_1669_, v_a_1666_);
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1672_);
v___x_1673_ = lean_unbox(v_a_1672_);
lean_dec(v_a_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
lean_dec_ref(v___x_1671_);
v___x_1674_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_value_1670_, v_a_1667_);
return v___x_1674_;
}
else
{
return v___x_1671_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg___boxed(lean_object* v_decl_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_decl_1675_, v_a_1676_, v_a_1677_);
lean_dec_ref(v_a_1677_);
lean_dec(v_a_1676_);
lean_dec_ref(v_decl_1675_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal(lean_object* v_decl_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_decl_1680_, v_a_1682_, v_a_1684_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___boxed(lean_object* v_decl_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal(v_decl_1690_, v_a_1691_, v_a_1692_, v_a_1693_, v_a_1694_, v_a_1695_, v_a_1696_, v_a_1697_);
lean_dec(v_a_1697_);
lean_dec_ref(v_a_1696_);
lean_dec(v_a_1695_);
lean_dec_ref(v_a_1694_);
lean_dec_ref(v_a_1693_);
lean_dec(v_a_1692_);
lean_dec_ref(v_a_1691_);
lean_dec_ref(v_decl_1690_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(lean_object* v_a_1700_, lean_object* v_b_1701_, lean_object* v_x_1702_){
_start:
{
if (lean_obj_tag(v_x_1702_) == 0)
{
lean_dec(v_b_1701_);
lean_dec(v_a_1700_);
return v_x_1702_;
}
else
{
lean_object* v_key_1703_; lean_object* v_value_1704_; lean_object* v_tail_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1717_; 
v_key_1703_ = lean_ctor_get(v_x_1702_, 0);
v_value_1704_ = lean_ctor_get(v_x_1702_, 1);
v_tail_1705_ = lean_ctor_get(v_x_1702_, 2);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_x_1702_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1707_ = v_x_1702_;
v_isShared_1708_ = v_isSharedCheck_1717_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_tail_1705_);
lean_inc(v_value_1704_);
lean_inc(v_key_1703_);
lean_dec(v_x_1702_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1717_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
uint8_t v___x_1709_; 
v___x_1709_ = l_Lean_instBEqFVarId_beq(v_key_1703_, v_a_1700_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; lean_object* v___x_1712_; 
v___x_1710_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(v_a_1700_, v_b_1701_, v_tail_1705_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 2, v___x_1710_);
v___x_1712_ = v___x_1707_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_key_1703_);
lean_ctor_set(v_reuseFailAlloc_1713_, 1, v_value_1704_);
lean_ctor_set(v_reuseFailAlloc_1713_, 2, v___x_1710_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
else
{
lean_object* v___x_1715_; 
lean_dec(v_value_1704_);
lean_dec(v_key_1703_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 1, v_b_1701_);
lean_ctor_set(v___x_1707_, 0, v_a_1700_);
v___x_1715_ = v___x_1707_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1700_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v_b_1701_);
lean_ctor_set(v_reuseFailAlloc_1716_, 2, v_tail_1705_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(lean_object* v_a_1718_, lean_object* v_x_1719_){
_start:
{
if (lean_obj_tag(v_x_1719_) == 0)
{
uint8_t v___x_1720_; 
v___x_1720_ = 0;
return v___x_1720_;
}
else
{
lean_object* v_key_1721_; lean_object* v_tail_1722_; uint8_t v___x_1723_; 
v_key_1721_ = lean_ctor_get(v_x_1719_, 0);
v_tail_1722_ = lean_ctor_get(v_x_1719_, 2);
v___x_1723_ = l_Lean_instBEqFVarId_beq(v_key_1721_, v_a_1718_);
if (v___x_1723_ == 0)
{
v_x_1719_ = v_tail_1722_;
goto _start;
}
else
{
return v___x_1723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg___boxed(lean_object* v_a_1725_, lean_object* v_x_1726_){
_start:
{
uint8_t v_res_1727_; lean_object* v_r_1728_; 
v_res_1727_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(v_a_1725_, v_x_1726_);
lean_dec(v_x_1726_);
lean_dec(v_a_1725_);
v_r_1728_ = lean_box(v_res_1727_);
return v_r_1728_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_1729_, lean_object* v_x_1730_){
_start:
{
if (lean_obj_tag(v_x_1730_) == 0)
{
return v_x_1729_;
}
else
{
lean_object* v_key_1731_; lean_object* v_value_1732_; lean_object* v_tail_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1756_; 
v_key_1731_ = lean_ctor_get(v_x_1730_, 0);
v_value_1732_ = lean_ctor_get(v_x_1730_, 1);
v_tail_1733_ = lean_ctor_get(v_x_1730_, 2);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_x_1730_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1735_ = v_x_1730_;
v_isShared_1736_ = v_isSharedCheck_1756_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_tail_1733_);
lean_inc(v_value_1732_);
lean_inc(v_key_1731_);
lean_dec(v_x_1730_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1756_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; uint64_t v___x_1738_; uint64_t v___x_1739_; uint64_t v___x_1740_; uint64_t v_fold_1741_; uint64_t v___x_1742_; uint64_t v___x_1743_; uint64_t v___x_1744_; size_t v___x_1745_; size_t v___x_1746_; size_t v___x_1747_; size_t v___x_1748_; size_t v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1737_ = lean_array_get_size(v_x_1729_);
v___x_1738_ = l_Lean_instHashableFVarId_hash(v_key_1731_);
v___x_1739_ = 32ULL;
v___x_1740_ = lean_uint64_shift_right(v___x_1738_, v___x_1739_);
v_fold_1741_ = lean_uint64_xor(v___x_1738_, v___x_1740_);
v___x_1742_ = 16ULL;
v___x_1743_ = lean_uint64_shift_right(v_fold_1741_, v___x_1742_);
v___x_1744_ = lean_uint64_xor(v_fold_1741_, v___x_1743_);
v___x_1745_ = lean_uint64_to_usize(v___x_1744_);
v___x_1746_ = lean_usize_of_nat(v___x_1737_);
v___x_1747_ = ((size_t)1ULL);
v___x_1748_ = lean_usize_sub(v___x_1746_, v___x_1747_);
v___x_1749_ = lean_usize_land(v___x_1745_, v___x_1748_);
v___x_1750_ = lean_array_uget_borrowed(v_x_1729_, v___x_1749_);
lean_inc(v___x_1750_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 2, v___x_1750_);
v___x_1752_ = v___x_1735_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_key_1731_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v_value_1732_);
lean_ctor_set(v_reuseFailAlloc_1755_, 2, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_array_uset(v_x_1729_, v___x_1749_, v___x_1752_);
v_x_1729_ = v___x_1753_;
v_x_1730_ = v_tail_1733_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1757_, lean_object* v_source_1758_, lean_object* v_target_1759_){
_start:
{
lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1760_ = lean_array_get_size(v_source_1758_);
v___x_1761_ = lean_nat_dec_lt(v_i_1757_, v___x_1760_);
if (v___x_1761_ == 0)
{
lean_dec_ref(v_source_1758_);
lean_dec(v_i_1757_);
return v_target_1759_;
}
else
{
lean_object* v_es_1762_; lean_object* v___x_1763_; lean_object* v_source_1764_; lean_object* v_target_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_es_1762_ = lean_array_fget(v_source_1758_, v_i_1757_);
v___x_1763_ = lean_box(0);
v_source_1764_ = lean_array_fset(v_source_1758_, v_i_1757_, v___x_1763_);
v_target_1765_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(v_target_1759_, v_es_1762_);
v___x_1766_ = lean_unsigned_to_nat(1u);
v___x_1767_ = lean_nat_add(v_i_1757_, v___x_1766_);
lean_dec(v_i_1757_);
v_i_1757_ = v___x_1767_;
v_source_1758_ = v_source_1764_;
v_target_1759_ = v_target_1765_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(lean_object* v_data_1769_){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v_nbuckets_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1770_ = lean_array_get_size(v_data_1769_);
v___x_1771_ = lean_unsigned_to_nat(2u);
v_nbuckets_1772_ = lean_nat_mul(v___x_1770_, v___x_1771_);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_box(0);
v___x_1775_ = lean_mk_array(v_nbuckets_1772_, v___x_1774_);
v___x_1776_ = lean_array_propagate_mark(v_data_1769_, v___x_1775_);
v___x_1777_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(v___x_1773_, v_data_1769_, v___x_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(lean_object* v_m_1778_, lean_object* v_a_1779_, lean_object* v_b_1780_){
_start:
{
lean_object* v_size_1781_; lean_object* v_buckets_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1825_; 
v_size_1781_ = lean_ctor_get(v_m_1778_, 0);
v_buckets_1782_ = lean_ctor_get(v_m_1778_, 1);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_m_1778_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1784_ = v_m_1778_;
v_isShared_1785_ = v_isSharedCheck_1825_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_buckets_1782_);
lean_inc(v_size_1781_);
lean_dec(v_m_1778_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1825_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1786_; uint64_t v___x_1787_; uint64_t v___x_1788_; uint64_t v___x_1789_; uint64_t v_fold_1790_; uint64_t v___x_1791_; uint64_t v___x_1792_; uint64_t v___x_1793_; size_t v___x_1794_; size_t v___x_1795_; size_t v___x_1796_; size_t v___x_1797_; size_t v___x_1798_; lean_object* v_bkt_1799_; uint8_t v___x_1800_; 
v___x_1786_ = lean_array_get_size(v_buckets_1782_);
v___x_1787_ = l_Lean_instHashableFVarId_hash(v_a_1779_);
v___x_1788_ = 32ULL;
v___x_1789_ = lean_uint64_shift_right(v___x_1787_, v___x_1788_);
v_fold_1790_ = lean_uint64_xor(v___x_1787_, v___x_1789_);
v___x_1791_ = 16ULL;
v___x_1792_ = lean_uint64_shift_right(v_fold_1790_, v___x_1791_);
v___x_1793_ = lean_uint64_xor(v_fold_1790_, v___x_1792_);
v___x_1794_ = lean_uint64_to_usize(v___x_1793_);
v___x_1795_ = lean_usize_of_nat(v___x_1786_);
v___x_1796_ = ((size_t)1ULL);
v___x_1797_ = lean_usize_sub(v___x_1795_, v___x_1796_);
v___x_1798_ = lean_usize_land(v___x_1794_, v___x_1797_);
v_bkt_1799_ = lean_array_uget_borrowed(v_buckets_1782_, v___x_1798_);
v___x_1800_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(v_a_1779_, v_bkt_1799_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v_size_x27_1802_; lean_object* v___x_1803_; lean_object* v_buckets_x27_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1801_ = lean_unsigned_to_nat(1u);
v_size_x27_1802_ = lean_nat_add(v_size_1781_, v___x_1801_);
lean_dec(v_size_1781_);
lean_inc(v_bkt_1799_);
v___x_1803_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1803_, 0, v_a_1779_);
lean_ctor_set(v___x_1803_, 1, v_b_1780_);
lean_ctor_set(v___x_1803_, 2, v_bkt_1799_);
v_buckets_x27_1804_ = lean_array_uset(v_buckets_1782_, v___x_1798_, v___x_1803_);
v___x_1805_ = lean_unsigned_to_nat(4u);
v___x_1806_ = lean_nat_mul(v_size_x27_1802_, v___x_1805_);
v___x_1807_ = lean_unsigned_to_nat(3u);
v___x_1808_ = lean_nat_div(v___x_1806_, v___x_1807_);
lean_dec(v___x_1806_);
v___x_1809_ = lean_array_get_size(v_buckets_x27_1804_);
v___x_1810_ = lean_nat_dec_le(v___x_1808_, v___x_1809_);
lean_dec(v___x_1808_);
if (v___x_1810_ == 0)
{
lean_object* v_val_1811_; lean_object* v___x_1813_; 
v_val_1811_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(v_buckets_x27_1804_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 1, v_val_1811_);
lean_ctor_set(v___x_1784_, 0, v_size_x27_1802_);
v___x_1813_ = v___x_1784_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_size_x27_1802_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_val_1811_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
else
{
lean_object* v___x_1816_; 
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 1, v_buckets_x27_1804_);
lean_ctor_set(v___x_1784_, 0, v_size_x27_1802_);
v___x_1816_ = v___x_1784_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_size_x27_1802_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v_buckets_x27_1804_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
else
{
lean_object* v___x_1818_; lean_object* v_buckets_x27_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1823_; 
lean_inc(v_bkt_1799_);
v___x_1818_ = lean_box(0);
v_buckets_x27_1819_ = lean_array_uset(v_buckets_1782_, v___x_1798_, v___x_1818_);
v___x_1820_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(v_a_1779_, v_b_1780_, v_bkt_1799_);
v___x_1821_ = lean_array_uset(v_buckets_x27_1819_, v___x_1798_, v___x_1820_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 1, v___x_1821_);
v___x_1823_ = v___x_1784_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_size_1781_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(lean_object* v_as_1826_, size_t v_sz_1827_, size_t v_i_1828_, lean_object* v_b_1829_){
_start:
{
uint8_t v___x_1831_; 
v___x_1831_ = lean_usize_dec_lt(v_i_1828_, v_sz_1827_);
if (v___x_1831_ == 0)
{
lean_object* v___x_1832_; 
v___x_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1832_, 0, v_b_1829_);
return v___x_1832_;
}
else
{
lean_object* v_snd_1833_; lean_object* v_fst_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1868_; 
v_snd_1833_ = lean_ctor_get(v_b_1829_, 1);
v_fst_1834_ = lean_ctor_get(v_b_1829_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v_b_1829_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1836_ = v_b_1829_;
v_isShared_1837_ = v_isSharedCheck_1868_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_snd_1833_);
lean_inc(v_fst_1834_);
lean_dec(v_b_1829_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1868_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v_array_1838_; lean_object* v_start_1839_; lean_object* v_stop_1840_; uint8_t v___x_1841_; 
v_array_1838_ = lean_ctor_get(v_snd_1833_, 0);
v_start_1839_ = lean_ctor_get(v_snd_1833_, 1);
v_stop_1840_ = lean_ctor_get(v_snd_1833_, 2);
v___x_1841_ = lean_nat_dec_lt(v_start_1839_, v_stop_1840_);
if (v___x_1841_ == 0)
{
lean_object* v___x_1843_; 
if (v_isShared_1837_ == 0)
{
v___x_1843_ = v___x_1836_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_fst_1834_);
lean_ctor_set(v_reuseFailAlloc_1845_, 1, v_snd_1833_);
v___x_1843_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1844_; 
v___x_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
return v___x_1844_;
}
}
else
{
lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1864_; 
lean_inc(v_stop_1840_);
lean_inc(v_start_1839_);
lean_inc_ref(v_array_1838_);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_snd_1833_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; lean_object* v_unused_1866_; lean_object* v_unused_1867_; 
v_unused_1865_ = lean_ctor_get(v_snd_1833_, 2);
lean_dec(v_unused_1865_);
v_unused_1866_ = lean_ctor_get(v_snd_1833_, 1);
lean_dec(v_unused_1866_);
v_unused_1867_ = lean_ctor_get(v_snd_1833_, 0);
lean_dec(v_unused_1867_);
v___x_1847_ = v_snd_1833_;
v_isShared_1848_ = v_isSharedCheck_1864_;
goto v_resetjp_1846_;
}
else
{
lean_dec(v_snd_1833_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1864_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v_a_1849_; lean_object* v_fvarId_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
v_a_1849_ = lean_array_uget_borrowed(v_as_1826_, v_i_1828_);
v_fvarId_1850_ = lean_ctor_get(v_a_1849_, 0);
v___x_1851_ = lean_array_fget(v_array_1838_, v_start_1839_);
v___x_1852_ = lean_unsigned_to_nat(1u);
v___x_1853_ = lean_nat_add(v_start_1839_, v___x_1852_);
lean_dec(v_start_1839_);
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 1, v___x_1853_);
v___x_1855_ = v___x_1847_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_array_1838_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_stop_1840_);
v___x_1855_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1856_; lean_object* v___x_1858_; 
lean_inc(v_fvarId_1850_);
v___x_1856_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(v_fst_1834_, v_fvarId_1850_, v___x_1851_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1855_);
lean_ctor_set(v___x_1836_, 0, v___x_1856_);
v___x_1858_ = v___x_1836_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1855_);
v___x_1858_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
size_t v___x_1859_; size_t v___x_1860_; 
v___x_1859_ = ((size_t)1ULL);
v___x_1860_ = lean_usize_add(v_i_1828_, v___x_1859_);
v_i_1828_ = v___x_1860_;
v_b_1829_ = v___x_1858_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg___boxed(lean_object* v_as_1869_, lean_object* v_sz_1870_, lean_object* v_i_1871_, lean_object* v_b_1872_, lean_object* v___y_1873_){
_start:
{
size_t v_sz_boxed_1874_; size_t v_i_boxed_1875_; lean_object* v_res_1876_; 
v_sz_boxed_1874_ = lean_unbox_usize(v_sz_1870_);
lean_dec(v_sz_1870_);
v_i_boxed_1875_ = lean_unbox_usize(v_i_1871_);
lean_dec(v_i_1871_);
v_res_1876_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(v_as_1869_, v_sz_boxed_1874_, v_i_boxed_1875_, v_b_1872_);
lean_dec_ref(v_as_1869_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object* v_params_1877_, lean_object* v_code_1878_, lean_object* v_args_1879_, uint8_t v_mustInline_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_){
_start:
{
lean_object* v___x_1889_; lean_object* v_subst_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; size_t v_sz_1894_; size_t v___x_1895_; lean_object* v___x_1896_; 
v___x_1889_ = lean_unsigned_to_nat(0u);
v_subst_1890_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1, &l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1);
v___x_1891_ = lean_array_get_size(v_args_1879_);
v___x_1892_ = l_Array_toSubarray___redArg(v_args_1879_, v___x_1889_, v___x_1891_);
v___x_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1893_, 0, v_subst_1890_);
lean_ctor_set(v___x_1893_, 1, v___x_1892_);
v_sz_1894_ = lean_array_size(v_params_1877_);
v___x_1895_ = ((size_t)0ULL);
v___x_1896_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(v_params_1877_, v_sz_1894_, v___x_1895_, v___x_1893_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v_fst_1898_; uint8_t v___x_1899_; uint8_t v___x_1900_; lean_object* v___x_1901_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v_fst_1898_ = lean_ctor_get(v_a_1897_, 0);
lean_inc(v_fst_1898_);
lean_dec(v_a_1897_);
v___x_1899_ = 0;
v___x_1900_ = 0;
v___x_1901_ = l_Lean_Compiler_LCNF_Code_internalize(v___x_1899_, v_code_1878_, v_fst_1898_, v___x_1900_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1903_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc_n(v_a_1902_, 2);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_a_1902_, v_mustInline_1880_, v_a_1882_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1910_ == 0)
{
lean_object* v_unused_1911_; 
v_unused_1911_ = lean_ctor_get(v___x_1903_, 0);
lean_dec(v_unused_1911_);
v___x_1905_ = v___x_1903_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_dec(v___x_1903_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 0, v_a_1902_);
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1902_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec(v_a_1902_);
v_a_1912_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1903_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1903_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
else
{
return v___x_1901_;
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec_ref(v_code_1878_);
v_a_1920_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1896_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1896_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce___boxed(lean_object* v_params_1928_, lean_object* v_code_1929_, lean_object* v_args_1930_, lean_object* v_mustInline_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
uint8_t v_mustInline_boxed_1940_; lean_object* v_res_1941_; 
v_mustInline_boxed_1940_ = lean_unbox(v_mustInline_1931_);
v_res_1941_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_1928_, v_code_1929_, v_args_1930_, v_mustInline_boxed_1940_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
lean_dec(v_a_1938_);
lean_dec_ref(v_a_1937_);
lean_dec(v_a_1936_);
lean_dec_ref(v_a_1935_);
lean_dec_ref(v_a_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_a_1932_);
lean_dec_ref(v_params_1928_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0(lean_object* v_00_u03b2_1942_, lean_object* v_m_1943_, lean_object* v_a_1944_, lean_object* v_b_1945_){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(v_m_1943_, v_a_1944_, v_b_1945_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1(lean_object* v_as_1947_, size_t v_sz_1948_, size_t v_i_1949_, lean_object* v_b_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(v_as_1947_, v_sz_1948_, v_i_1949_, v_b_1950_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___boxed(lean_object* v_as_1960_, lean_object* v_sz_1961_, lean_object* v_i_1962_, lean_object* v_b_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
size_t v_sz_boxed_1972_; size_t v_i_boxed_1973_; lean_object* v_res_1974_; 
v_sz_boxed_1972_ = lean_unbox_usize(v_sz_1961_);
lean_dec(v_sz_1961_);
v_i_boxed_1973_ = lean_unbox_usize(v_i_1962_);
lean_dec(v_i_1962_);
v_res_1974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1(v_as_1960_, v_sz_boxed_1972_, v_i_boxed_1973_, v_b_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v_as_1960_);
return v_res_1974_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0(lean_object* v_00_u03b2_1975_, lean_object* v_a_1976_, lean_object* v_x_1977_){
_start:
{
uint8_t v___x_1978_; 
v___x_1978_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(v_a_1976_, v_x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1979_, lean_object* v_a_1980_, lean_object* v_x_1981_){
_start:
{
uint8_t v_res_1982_; lean_object* v_r_1983_; 
v_res_1982_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0(v_00_u03b2_1979_, v_a_1980_, v_x_1981_);
lean_dec(v_x_1981_);
lean_dec(v_a_1980_);
v_r_1983_ = lean_box(v_res_1982_);
return v_r_1983_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1(lean_object* v_00_u03b2_1984_, lean_object* v_data_1985_){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(v_data_1985_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2(lean_object* v_00_u03b2_1987_, lean_object* v_a_1988_, lean_object* v_b_1989_, lean_object* v_x_1990_){
_start:
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(v_a_1988_, v_b_1989_, v_x_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1992_, lean_object* v_i_1993_, lean_object* v_source_1994_, lean_object* v_target_1995_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(v_i_1993_, v_source_1994_, v_target_1995_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1997_, lean_object* v_x_1998_, lean_object* v_x_1999_){
_start:
{
lean_object* v___x_2000_; 
v___x_2000_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1998_, v_x_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object* v_decl_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
uint8_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = 0;
v___x_2006_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v___x_2005_, v_decl_2001_, v_a_2003_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v___x_2007_; 
lean_dec_ref_known(v___x_2006_, 1);
v___x_2007_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_2002_);
return v___x_2007_;
}
else
{
return v___x_2006_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg___boxed(lean_object* v_decl_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2008_, v_a_2009_, v_a_2010_);
lean_dec(v_a_2010_);
lean_dec(v_a_2009_);
lean_dec_ref(v_decl_2008_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl(lean_object* v_decl_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2013_, v_a_2015_, v_a_2018_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___boxed(lean_object* v_decl_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl(v_decl_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec_ref(v_a_2026_);
lean_dec(v_a_2025_);
lean_dec_ref(v_a_2024_);
lean_dec_ref(v_decl_2023_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object* v_decl_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_){
_start:
{
uint8_t v___x_2037_; uint8_t v___x_2038_; lean_object* v___x_2039_; 
v___x_2037_ = 0;
v___x_2038_ = 1;
v___x_2039_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v___x_2037_, v_decl_2033_, v___x_2038_, v_a_2035_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v___x_2040_; 
lean_dec_ref_known(v___x_2039_, 1);
v___x_2040_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_2034_);
return v___x_2040_;
}
else
{
return v___x_2039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg___boxed(lean_object* v_decl_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2041_, v_a_2042_, v_a_2043_);
lean_dec(v_a_2043_);
lean_dec(v_a_2042_);
lean_dec_ref(v_decl_2041_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl(lean_object* v_decl_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_){
_start:
{
lean_object* v___x_2055_; 
v___x_2055_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2046_, v_a_2048_, v_a_2051_);
return v___x_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___boxed(lean_object* v_decl_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl(v_decl_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_, v_a_2061_, v_a_2062_, v_a_2063_);
lean_dec(v_a_2063_);
lean_dec_ref(v_a_2062_);
lean_dec(v_a_2061_);
lean_dec_ref(v_a_2060_);
lean_dec_ref(v_a_2059_);
lean_dec(v_a_2058_);
lean_dec_ref(v_a_2057_);
lean_dec_ref(v_decl_2056_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object* v_fvarId_2066_, lean_object* v_fvarId_x27_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
lean_object* v___x_2074_; lean_object* v_subst_2075_; lean_object* v_used_2076_; lean_object* v_binderRenaming_2077_; lean_object* v_funDeclInfoMap_2078_; uint8_t v_simplified_2079_; lean_object* v_visited_2080_; lean_object* v_inline_2081_; lean_object* v_inlineLocal_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2152_; 
v___x_2074_ = lean_st_ref_take(v_a_2068_);
v_subst_2075_ = lean_ctor_get(v___x_2074_, 0);
v_used_2076_ = lean_ctor_get(v___x_2074_, 1);
v_binderRenaming_2077_ = lean_ctor_get(v___x_2074_, 2);
v_funDeclInfoMap_2078_ = lean_ctor_get(v___x_2074_, 3);
v_simplified_2079_ = lean_ctor_get_uint8(v___x_2074_, sizeof(void*)*7);
v_visited_2080_ = lean_ctor_get(v___x_2074_, 4);
v_inline_2081_ = lean_ctor_get(v___x_2074_, 5);
v_inlineLocal_2082_ = lean_ctor_get(v___x_2074_, 6);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2084_ = v___x_2074_;
v_isShared_2085_ = v_isSharedCheck_2152_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_inlineLocal_2082_);
lean_inc(v_inline_2081_);
lean_inc(v_visited_2080_);
lean_inc(v_funDeclInfoMap_2078_);
lean_inc(v_binderRenaming_2077_);
lean_inc(v_used_2076_);
lean_inc(v_subst_2075_);
lean_dec(v___x_2074_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2152_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
lean_inc(v_fvarId_x27_2067_);
v___x_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2086_, 0, v_fvarId_x27_2067_);
lean_inc(v_fvarId_2066_);
v___x_2087_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(v_subst_2075_, v_fvarId_2066_, v___x_2086_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 0, v___x_2087_);
v___x_2089_ = v___x_2084_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_used_2076_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_binderRenaming_2077_);
lean_ctor_set(v_reuseFailAlloc_2151_, 3, v_funDeclInfoMap_2078_);
lean_ctor_set(v_reuseFailAlloc_2151_, 4, v_visited_2080_);
lean_ctor_set(v_reuseFailAlloc_2151_, 5, v_inline_2081_);
lean_ctor_set(v_reuseFailAlloc_2151_, 6, v_inlineLocal_2082_);
lean_ctor_set_uint8(v_reuseFailAlloc_2151_, sizeof(void*)*7, v_simplified_2079_);
v___x_2089_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = lean_st_ref_put(v_a_2068_, v___x_2089_);
v___x_2091_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_2066_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2142_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2142_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2142_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
uint8_t v___x_2096_; 
v___x_2096_ = l_Lean_Name_isInternal(v_a_2092_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
lean_del_object(v___x_2094_);
lean_inc(v_fvarId_x27_2067_);
v___x_2097_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_x27_2067_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2129_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2100_ = v___x_2097_;
v_isShared_2101_ = v_isSharedCheck_2129_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2097_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2129_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
uint8_t v___x_2102_; 
v___x_2102_ = l_Lean_Name_isInternal(v_a_2098_);
lean_dec(v_a_2098_);
if (v___x_2102_ == 0)
{
lean_object* v___x_2103_; lean_object* v___x_2105_; 
lean_dec(v_a_2092_);
lean_dec(v_fvarId_x27_2067_);
v___x_2103_ = lean_box(0);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 0, v___x_2103_);
v___x_2105_ = v___x_2100_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
else
{
lean_object* v___x_2107_; lean_object* v_subst_2108_; lean_object* v_used_2109_; lean_object* v_binderRenaming_2110_; lean_object* v_funDeclInfoMap_2111_; uint8_t v_simplified_2112_; lean_object* v_visited_2113_; lean_object* v_inline_2114_; lean_object* v_inlineLocal_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2128_; 
v___x_2107_ = lean_st_ref_take(v_a_2068_);
v_subst_2108_ = lean_ctor_get(v___x_2107_, 0);
v_used_2109_ = lean_ctor_get(v___x_2107_, 1);
v_binderRenaming_2110_ = lean_ctor_get(v___x_2107_, 2);
v_funDeclInfoMap_2111_ = lean_ctor_get(v___x_2107_, 3);
v_simplified_2112_ = lean_ctor_get_uint8(v___x_2107_, sizeof(void*)*7);
v_visited_2113_ = lean_ctor_get(v___x_2107_, 4);
v_inline_2114_ = lean_ctor_get(v___x_2107_, 5);
v_inlineLocal_2115_ = lean_ctor_get(v___x_2107_, 6);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2117_ = v___x_2107_;
v_isShared_2118_ = v_isSharedCheck_2128_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_inlineLocal_2115_);
lean_inc(v_inline_2114_);
lean_inc(v_visited_2113_);
lean_inc(v_funDeclInfoMap_2111_);
lean_inc(v_binderRenaming_2110_);
lean_inc(v_used_2109_);
lean_inc(v_subst_2108_);
lean_dec(v___x_2107_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2128_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2122_; 
v___x_2119_ = lean_box(0);
v___x_2120_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_x27_2067_, v_a_2092_, v_binderRenaming_2110_);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 2, v___x_2120_);
v___x_2122_ = v___x_2117_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_subst_2108_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v_used_2109_);
lean_ctor_set(v_reuseFailAlloc_2127_, 2, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2127_, 3, v_funDeclInfoMap_2111_);
lean_ctor_set(v_reuseFailAlloc_2127_, 4, v_visited_2113_);
lean_ctor_set(v_reuseFailAlloc_2127_, 5, v_inline_2114_);
lean_ctor_set(v_reuseFailAlloc_2127_, 6, v_inlineLocal_2115_);
lean_ctor_set_uint8(v_reuseFailAlloc_2127_, sizeof(void*)*7, v_simplified_2112_);
v___x_2122_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2123_ = lean_st_ref_put(v_a_2068_, v___x_2122_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 0, v___x_2119_);
v___x_2125_ = v___x_2100_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2119_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
}
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
lean_dec(v_a_2092_);
lean_dec(v_fvarId_x27_2067_);
v_a_2130_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2097_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2097_);
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
else
{
lean_object* v___x_2138_; lean_object* v___x_2140_; 
lean_dec(v_a_2092_);
lean_dec(v_fvarId_x27_2067_);
v___x_2138_ = lean_box(0);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2138_);
v___x_2140_ = v___x_2094_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_2138_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec(v_fvarId_x27_2067_);
v_a_2143_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2091_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2091_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg___boxed(lean_object* v_fvarId_2153_, lean_object* v_fvarId_x27_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2153_, v_fvarId_x27_2154_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_);
lean_dec(v_a_2159_);
lean_dec_ref(v_a_2158_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
lean_dec(v_a_2155_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst(lean_object* v_fvarId_2162_, lean_object* v_fvarId_x27_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2162_, v_fvarId_x27_2163_, v_a_2165_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___boxed(lean_object* v_fvarId_2173_, lean_object* v_fvarId_x27_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v_res_2183_; 
v_res_2183_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst(v_fvarId_2173_, v_fvarId_x27_2174_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_);
lean_dec(v_a_2181_);
lean_dec_ref(v_a_2180_);
lean_dec(v_a_2179_);
lean_dec_ref(v_a_2178_);
lean_dec_ref(v_a_2177_);
lean_dec(v_a_2176_);
lean_dec_ref(v_a_2175_);
return v_res_2183_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_Simp_instMonadSimpM = _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_instMonadSimpM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Compiler.LCNF.FloatLetIn
// Imports: public import Lean.Compiler.LCNF.FVarUtil public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.PhaseExt
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
uint8_t l_Lean_Expr_hasFVar(lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedPass;
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.default"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.dont"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.unknown"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.arm"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.FVarUtil"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.forFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "EST"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Out"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2_value),LEAN_SCALAR_PTR_LITERAL(9, 80, 83, 99, 239, 159, 42, 46)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 22, 165, 44, 41, 63, 187, 255)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ST"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5_value),LEAN_SCALAR_PTR_LITERAL(251, 141, 99, 66, 199, 185, 233, 139)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 82, 234, 1, 110, 68, 195, 153)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0_spec__1(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "floatLetIn"};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 137, 209, 28, 15, 13, 59, 120)}};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Size of code that was pushed into arm: "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(224, 143, 131, 10, 85, 239, 135, 125)}};
static const lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_floatLetIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_floatLetIn___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_floatLetIn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FloatLetIn"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx(v_x_6_);
lean_dec(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
if (lean_obj_tag(v_t_8_) == 0)
{
lean_object* v_name_10_; lean_object* v___x_11_; 
v_name_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_name_10_);
lean_dec_ref_known(v_t_8_, 1);
v___x_11_ = lean_apply_1(v_k_9_, v_name_10_);
return v___x_11_;
}
else
{
lean_dec(v_t_8_);
return v_k_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim___redArg(lean_object* v_t_24_, lean_object* v_arm_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_24_, v_arm_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_arm_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_28_, v_arm_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim___redArg(lean_object* v_t_32_, lean_object* v_default_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_32_, v_default_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_default_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_36_, v_default_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim___redArg(lean_object* v_t_40_, lean_object* v_dont_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_40_, v_dont_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_dont_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_44_, v_dont_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim___redArg(lean_object* v_t_48_, lean_object* v_unknown_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_48_, v_unknown_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_unknown_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_52_, v_unknown_54_);
return v___x_55_;
}
}
static uint64_t _init_l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___closed__0(void){
_start:
{
uint64_t v___x_56_; uint64_t v___x_57_; uint64_t v___x_58_; 
v___x_56_ = 1723ULL;
v___x_57_ = 0ULL;
v___x_58_ = lean_uint64_mix_hash(v___x_57_, v___x_56_);
return v___x_58_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(lean_object* v_x_59_){
_start:
{
switch(lean_obj_tag(v_x_59_))
{
case 0:
{
lean_object* v_name_60_; uint64_t v___x_61_; lean_object* v___x_62_; 
v_name_60_ = lean_ctor_get(v_x_59_, 0);
v___x_61_ = 0ULL;
v___x_62_ = l_unsafeCast___redArg(v_name_60_);
if (lean_obj_tag(v___x_62_) == 0)
{
uint64_t v___x_63_; 
v___x_63_ = lean_uint64_once(&l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___closed__0, &l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___closed__0_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___closed__0);
return v___x_63_;
}
else
{
uint64_t v_hash_64_; uint64_t v___x_65_; 
v_hash_64_ = lean_ctor_get_uint64(v___x_62_, sizeof(void*)*2);
lean_dec(v___x_62_);
v___x_65_ = lean_uint64_mix_hash(v___x_61_, v_hash_64_);
return v___x_65_;
}
}
case 1:
{
uint64_t v___x_66_; 
v___x_66_ = 1ULL;
return v___x_66_;
}
case 2:
{
uint64_t v___x_67_; 
v___x_67_ = 2ULL;
return v___x_67_;
}
default: 
{
uint64_t v___x_68_; 
v___x_68_ = 3ULL;
return v___x_68_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___boxed(lean_object* v_x_69_){
_start:
{
uint64_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_x_69_);
lean_dec(v_x_69_);
v_r_71_ = lean_box_uint64(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
switch(lean_obj_tag(v_x_74_))
{
case 0:
{
if (lean_obj_tag(v_x_75_) == 0)
{
lean_object* v_name_76_; lean_object* v_name_77_; uint8_t v___x_78_; 
v_name_76_ = lean_ctor_get(v_x_74_, 0);
v_name_77_ = lean_ctor_get(v_x_75_, 0);
v___x_78_ = lean_name_eq(v_name_76_, v_name_77_);
return v___x_78_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = 0;
return v___x_79_;
}
}
case 1:
{
if (lean_obj_tag(v_x_75_) == 1)
{
uint8_t v___x_80_; 
v___x_80_ = 1;
return v___x_80_;
}
else
{
uint8_t v___x_81_; 
v___x_81_ = 0;
return v___x_81_;
}
}
case 2:
{
if (lean_obj_tag(v_x_75_) == 2)
{
uint8_t v___x_82_; 
v___x_82_ = 1;
return v___x_82_;
}
else
{
uint8_t v___x_83_; 
v___x_83_ = 0;
return v___x_83_;
}
}
default: 
{
if (lean_obj_tag(v_x_75_) == 3)
{
uint8_t v___x_84_; 
v___x_84_ = 1;
return v___x_84_;
}
else
{
uint8_t v___x_85_; 
v___x_85_ = 0;
return v___x_85_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq___boxed(lean_object* v_x_86_, lean_object* v_x_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_x_86_, v_x_87_);
lean_dec(v_x_87_);
lean_dec(v_x_86_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_box(0);
v___x_93_ = l_unsafeCast___redArg(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0, &l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__1, &l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__1_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__1);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default;
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_unsigned_to_nat(2u);
v___x_114_ = lean_nat_to_int(v___x_113_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_to_int(v___x_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(lean_object* v_x_117_, lean_object* v_prec_118_){
_start:
{
lean_object* v___y_120_; lean_object* v___y_127_; lean_object* v___y_134_; 
switch(lean_obj_tag(v_x_117_))
{
case 0:
{
lean_object* v_name_140_; lean_object* v___y_142_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_name_140_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_name_140_);
lean_dec_ref_known(v_x_117_, 1);
v___x_151_ = lean_unsigned_to_nat(1024u);
v___x_152_ = lean_nat_dec_le(v___x_151_, v_prec_118_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_142_ = v___x_153_;
goto v___jp_141_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_142_ = v___x_154_;
goto v___jp_141_;
}
v___jp_141_:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_143_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8));
v___x_144_ = lean_unsigned_to_nat(1024u);
v___x_145_ = l_Lean_Name_reprPrec(v_name_140_, v___x_144_);
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_143_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
lean_inc(v___y_142_);
v___x_147_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_147_, 0, v___y_142_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = 0;
v___x_149_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set_uint8(v___x_149_, sizeof(void*)*1, v___x_148_);
v___x_150_ = l_Repr_addAppParen(v___x_149_, v_prec_118_);
return v___x_150_;
}
}
case 1:
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(1024u);
v___x_156_ = lean_nat_dec_le(v___x_155_, v_prec_118_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_120_ = v___x_157_;
goto v___jp_119_;
}
else
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_120_ = v___x_158_;
goto v___jp_119_;
}
}
case 2:
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(1024u);
v___x_160_ = lean_nat_dec_le(v___x_159_, v_prec_118_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
v___x_161_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_127_ = v___x_161_;
goto v___jp_126_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_127_ = v___x_162_;
goto v___jp_126_;
}
}
default: 
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(1024u);
v___x_164_ = lean_nat_dec_le(v___x_163_, v_prec_118_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_134_ = v___x_165_;
goto v___jp_133_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_134_ = v___x_166_;
goto v___jp_133_;
}
}
}
v___jp_119_:
{
lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_121_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1));
lean_inc(v___y_120_);
v___x_122_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_122_, 0, v___y_120_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = 0;
v___x_124_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set_uint8(v___x_124_, sizeof(void*)*1, v___x_123_);
v___x_125_ = l_Repr_addAppParen(v___x_124_, v_prec_118_);
return v___x_125_;
}
v___jp_126_:
{
lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_128_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3));
lean_inc(v___y_127_);
v___x_129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_129_, 0, v___y_127_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = 0;
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_130_);
v___x_132_ = l_Repr_addAppParen(v___x_131_, v_prec_118_);
return v___x_132_;
}
v___jp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5));
lean_inc(v___y_134_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___y_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = 0;
v___x_138_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_138_, sizeof(void*)*1, v___x_137_);
v___x_139_ = l_Repr_addAppParen(v___x_138_, v_prec_118_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___boxed(lean_object* v_x_167_, lean_object* v_prec_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(v_x_167_, v_prec_168_);
lean_dec(v_prec_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(lean_object* v_x_172_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
lean_object* v_ctorName_173_; lean_object* v___x_174_; 
v_ctorName_173_ = lean_ctor_get(v_x_172_, 0);
lean_inc(v_ctorName_173_);
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v_ctorName_173_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; 
v___x_175_ = lean_box(1);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt___boxed(lean_object* v_x_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v_x_176_);
lean_dec_ref(v_x_176_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(lean_object* v_decl_178_, lean_object* v_x_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc(v_a_180_);
v___x_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_186_, 0, v_decl_178_);
lean_ctor_set(v___x_186_, 1, v_a_180_);
lean_inc(v_a_184_);
lean_inc_ref(v_a_183_);
lean_inc(v_a_182_);
lean_inc_ref(v_a_181_);
v___x_187_ = lean_apply_6(v_x_179_, v___x_186_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, lean_box(0));
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg___boxed(lean_object* v_decl_188_, lean_object* v_x_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v_decl_188_, v_x_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate(lean_object* v_00_u03b1_197_, lean_object* v_decl_198_, lean_object* v_x_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v_decl_198_, v_x_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___boxed(lean_object* v_00_u03b1_207_, lean_object* v_decl_208_, lean_object* v_x_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate(v_00_u03b1_207_, v_decl_208_, v_x_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_);
lean_dec(v_a_214_);
lean_dec_ref(v_a_213_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(lean_object* v_x_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_box(0);
lean_inc(v_a_221_);
lean_inc_ref(v_a_220_);
lean_inc(v_a_219_);
lean_inc_ref(v_a_218_);
v___x_224_ = lean_apply_6(v_x_217_, v___x_223_, v_a_218_, v_a_219_, v_a_220_, v_a_221_, lean_box(0));
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg___boxed(lean_object* v_x_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v_x_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope(lean_object* v_00_u03b1_232_, lean_object* v_x_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v_x_233_, v_a_235_, v_a_236_, v_a_237_, v_a_238_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___boxed(lean_object* v_00_u03b1_241_, lean_object* v_x_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope(v_00_u03b1_241_, v_x_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(lean_object* v_decl_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_type_256_; lean_object* v_value_257_; lean_object* v___x_258_; 
v_type_256_ = lean_ctor_get(v_decl_250_, 2);
lean_inc_ref(v_type_256_);
v_value_257_ = lean_ctor_get(v_decl_250_, 3);
lean_inc(v_value_257_);
lean_dec_ref(v_decl_250_);
v___x_258_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_type_256_, v_a_254_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_307_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_307_ == 0)
{
v___x_261_ = v___x_258_;
v_isShared_262_ = v_isSharedCheck_307_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_307_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
if (lean_obj_tag(v_a_259_) == 0)
{
uint8_t v___x_263_; 
v___x_263_ = 0;
if (lean_obj_tag(v_value_257_) == 2)
{
lean_object* v_struct_264_; lean_object* v___x_265_; 
lean_del_object(v___x_261_);
v_struct_264_ = lean_ctor_get(v_value_257_, 2);
lean_inc(v_struct_264_);
lean_dec_ref_known(v_value_257_, 3);
v___x_265_ = l_Lean_Compiler_LCNF_getType(v_struct_264_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_267_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___x_267_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_a_266_, v_a_254_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_281_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_281_ == 0)
{
v___x_270_ = v___x_267_;
v_isShared_271_ = v_isSharedCheck_281_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_281_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
if (lean_obj_tag(v_a_268_) == 0)
{
lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_272_ = lean_box(v___x_263_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v___x_272_);
v___x_274_ = v___x_270_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
else
{
uint8_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
lean_dec_ref_known(v_a_268_, 1);
v___x_276_ = 1;
v___x_277_ = lean_box(v___x_276_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v___x_277_);
v___x_279_ = v___x_270_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_a_282_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_267_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_267_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
v_a_290_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_265_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_265_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
else
{
lean_object* v___x_298_; lean_object* v___x_300_; 
lean_dec(v_value_257_);
v___x_298_ = lean_box(v___x_263_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_298_);
v___x_300_ = v___x_261_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
else
{
uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_305_; 
lean_dec_ref_known(v_a_259_, 1);
lean_dec(v_value_257_);
v___x_302_ = 1;
v___x_303_ = lean_box(v___x_302_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_303_);
v___x_305_ = v___x_261_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v_value_257_);
v_a_308_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_258_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_258_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg___boxed(lean_object* v_decl_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(v_decl_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f(lean_object* v_decl_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(v_decl_323_, v_a_325_, v_a_326_, v_a_327_, v_a_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___boxed(lean_object* v_decl_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f(v_decl_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
return v_res_338_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(lean_object* v_a_339_, lean_object* v_x_340_){
_start:
{
if (lean_obj_tag(v_x_340_) == 0)
{
uint8_t v___x_341_; 
v___x_341_ = 0;
return v___x_341_;
}
else
{
lean_object* v_key_342_; lean_object* v_tail_343_; uint8_t v___x_344_; 
v_key_342_ = lean_ctor_get(v_x_340_, 0);
v_tail_343_ = lean_ctor_get(v_x_340_, 2);
v___x_344_ = l_Lean_instBEqFVarId_beq(v_key_342_, v_a_339_);
if (v___x_344_ == 0)
{
v_x_340_ = v_tail_343_;
goto _start;
}
else
{
return v___x_344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg___boxed(lean_object* v_a_346_, lean_object* v_x_347_){
_start:
{
uint8_t v_res_348_; lean_object* v_r_349_; 
v_res_348_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_346_, v_x_347_);
lean_dec(v_x_347_);
lean_dec(v_a_346_);
v_r_349_ = lean_box(v_res_348_);
return v_r_349_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(lean_object* v_m_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_buckets_352_; lean_object* v___x_353_; uint64_t v___x_354_; uint64_t v___x_355_; uint64_t v___x_356_; uint64_t v_fold_357_; uint64_t v___x_358_; uint64_t v___x_359_; uint64_t v___x_360_; size_t v___x_361_; size_t v___x_362_; size_t v___x_363_; size_t v___x_364_; size_t v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_buckets_352_ = lean_ctor_get(v_m_350_, 1);
v___x_353_ = lean_array_get_size(v_buckets_352_);
v___x_354_ = l_Lean_instHashableFVarId_hash(v_a_351_);
v___x_355_ = 32ULL;
v___x_356_ = lean_uint64_shift_right(v___x_354_, v___x_355_);
v_fold_357_ = lean_uint64_xor(v___x_354_, v___x_356_);
v___x_358_ = 16ULL;
v___x_359_ = lean_uint64_shift_right(v_fold_357_, v___x_358_);
v___x_360_ = lean_uint64_xor(v_fold_357_, v___x_359_);
v___x_361_ = lean_uint64_to_usize(v___x_360_);
v___x_362_ = lean_usize_of_nat(v___x_353_);
v___x_363_ = ((size_t)1ULL);
v___x_364_ = lean_usize_sub(v___x_362_, v___x_363_);
v___x_365_ = lean_usize_land(v___x_361_, v___x_364_);
v___x_366_ = lean_array_uget_borrowed(v_buckets_352_, v___x_365_);
v___x_367_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_351_, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg___boxed(lean_object* v_m_368_, lean_object* v_a_369_){
_start:
{
uint8_t v_res_370_; lean_object* v_r_371_; 
v_res_370_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_m_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_m_368_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
if (lean_obj_tag(v_x_373_) == 0)
{
return v_x_372_;
}
else
{
lean_object* v_key_374_; lean_object* v_value_375_; lean_object* v_tail_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_399_; 
v_key_374_ = lean_ctor_get(v_x_373_, 0);
v_value_375_ = lean_ctor_get(v_x_373_, 1);
v_tail_376_ = lean_ctor_get(v_x_373_, 2);
v_isSharedCheck_399_ = !lean_is_exclusive(v_x_373_);
if (v_isSharedCheck_399_ == 0)
{
v___x_378_ = v_x_373_;
v_isShared_379_ = v_isSharedCheck_399_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_tail_376_);
lean_inc(v_value_375_);
lean_inc(v_key_374_);
lean_dec(v_x_373_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_399_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; uint64_t v___x_381_; uint64_t v___x_382_; uint64_t v___x_383_; uint64_t v_fold_384_; uint64_t v___x_385_; uint64_t v___x_386_; uint64_t v___x_387_; size_t v___x_388_; size_t v___x_389_; size_t v___x_390_; size_t v___x_391_; size_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_380_ = lean_array_get_size(v_x_372_);
v___x_381_ = l_Lean_instHashableFVarId_hash(v_key_374_);
v___x_382_ = 32ULL;
v___x_383_ = lean_uint64_shift_right(v___x_381_, v___x_382_);
v_fold_384_ = lean_uint64_xor(v___x_381_, v___x_383_);
v___x_385_ = 16ULL;
v___x_386_ = lean_uint64_shift_right(v_fold_384_, v___x_385_);
v___x_387_ = lean_uint64_xor(v_fold_384_, v___x_386_);
v___x_388_ = lean_uint64_to_usize(v___x_387_);
v___x_389_ = lean_usize_of_nat(v___x_380_);
v___x_390_ = ((size_t)1ULL);
v___x_391_ = lean_usize_sub(v___x_389_, v___x_390_);
v___x_392_ = lean_usize_land(v___x_388_, v___x_391_);
v___x_393_ = lean_array_uget_borrowed(v_x_372_, v___x_392_);
lean_inc(v___x_393_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 2, v___x_393_);
v___x_395_ = v___x_378_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_key_374_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_value_375_);
lean_ctor_set(v_reuseFailAlloc_398_, 2, v___x_393_);
v___x_395_ = v_reuseFailAlloc_398_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; 
v___x_396_ = lean_array_uset(v_x_372_, v___x_392_, v___x_395_);
v_x_372_ = v___x_396_;
v_x_373_ = v_tail_376_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(lean_object* v_i_400_, lean_object* v_source_401_, lean_object* v_target_402_){
_start:
{
lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_403_ = lean_array_get_size(v_source_401_);
v___x_404_ = lean_nat_dec_lt(v_i_400_, v___x_403_);
if (v___x_404_ == 0)
{
lean_dec_ref(v_source_401_);
lean_dec(v_i_400_);
return v_target_402_;
}
else
{
lean_object* v_es_405_; lean_object* v___x_406_; lean_object* v_source_407_; lean_object* v_target_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v_es_405_ = lean_array_fget(v_source_401_, v_i_400_);
v___x_406_ = lean_box(0);
v_source_407_ = lean_array_fset(v_source_401_, v_i_400_, v___x_406_);
v_target_408_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(v_target_402_, v_es_405_);
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_nat_add(v_i_400_, v___x_409_);
lean_dec(v_i_400_);
v_i_400_ = v___x_410_;
v_source_401_ = v_source_407_;
v_target_402_ = v_target_408_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(lean_object* v_data_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v_nbuckets_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_413_ = lean_array_get_size(v_data_412_);
v___x_414_ = lean_unsigned_to_nat(2u);
v_nbuckets_415_ = lean_nat_mul(v___x_413_, v___x_414_);
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = lean_box(0);
v___x_418_ = lean_mk_array(v_nbuckets_415_, v___x_417_);
v___x_419_ = lean_array_propagate_mark(v_data_412_, v___x_418_);
v___x_420_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(v___x_416_, v_data_412_, v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(lean_object* v_m_421_, lean_object* v_a_422_, lean_object* v_b_423_){
_start:
{
lean_object* v_size_424_; lean_object* v_buckets_425_; lean_object* v___x_426_; uint64_t v___x_427_; uint64_t v___x_428_; uint64_t v___x_429_; uint64_t v_fold_430_; uint64_t v___x_431_; uint64_t v___x_432_; uint64_t v___x_433_; size_t v___x_434_; size_t v___x_435_; size_t v___x_436_; size_t v___x_437_; size_t v___x_438_; lean_object* v_bkt_439_; uint8_t v___x_440_; 
v_size_424_ = lean_ctor_get(v_m_421_, 0);
v_buckets_425_ = lean_ctor_get(v_m_421_, 1);
v___x_426_ = lean_array_get_size(v_buckets_425_);
v___x_427_ = l_Lean_instHashableFVarId_hash(v_a_422_);
v___x_428_ = 32ULL;
v___x_429_ = lean_uint64_shift_right(v___x_427_, v___x_428_);
v_fold_430_ = lean_uint64_xor(v___x_427_, v___x_429_);
v___x_431_ = 16ULL;
v___x_432_ = lean_uint64_shift_right(v_fold_430_, v___x_431_);
v___x_433_ = lean_uint64_xor(v_fold_430_, v___x_432_);
v___x_434_ = lean_uint64_to_usize(v___x_433_);
v___x_435_ = lean_usize_of_nat(v___x_426_);
v___x_436_ = ((size_t)1ULL);
v___x_437_ = lean_usize_sub(v___x_435_, v___x_436_);
v___x_438_ = lean_usize_land(v___x_434_, v___x_437_);
v_bkt_439_ = lean_array_uget_borrowed(v_buckets_425_, v___x_438_);
v___x_440_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_422_, v_bkt_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_461_; 
lean_inc_ref(v_buckets_425_);
lean_inc(v_size_424_);
v_isSharedCheck_461_ = !lean_is_exclusive(v_m_421_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; lean_object* v_unused_463_; 
v_unused_462_ = lean_ctor_get(v_m_421_, 1);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v_m_421_, 0);
lean_dec(v_unused_463_);
v___x_442_ = v_m_421_;
v_isShared_443_ = v_isSharedCheck_461_;
goto v_resetjp_441_;
}
else
{
lean_dec(v_m_421_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_461_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v_size_x27_445_; lean_object* v___x_446_; lean_object* v_buckets_x27_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_444_ = lean_unsigned_to_nat(1u);
v_size_x27_445_ = lean_nat_add(v_size_424_, v___x_444_);
lean_dec(v_size_424_);
lean_inc(v_bkt_439_);
v___x_446_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_446_, 0, v_a_422_);
lean_ctor_set(v___x_446_, 1, v_b_423_);
lean_ctor_set(v___x_446_, 2, v_bkt_439_);
v_buckets_x27_447_ = lean_array_uset(v_buckets_425_, v___x_438_, v___x_446_);
v___x_448_ = lean_unsigned_to_nat(4u);
v___x_449_ = lean_nat_mul(v_size_x27_445_, v___x_448_);
v___x_450_ = lean_unsigned_to_nat(3u);
v___x_451_ = lean_nat_div(v___x_449_, v___x_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_array_get_size(v_buckets_x27_447_);
v___x_453_ = lean_nat_dec_le(v___x_451_, v___x_452_);
lean_dec(v___x_451_);
if (v___x_453_ == 0)
{
lean_object* v_val_454_; lean_object* v___x_456_; 
v_val_454_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(v_buckets_x27_447_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v_val_454_);
lean_ctor_set(v___x_442_, 0, v_size_x27_445_);
v___x_456_ = v___x_442_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_size_x27_445_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_val_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
else
{
lean_object* v___x_459_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v_buckets_x27_447_);
lean_ctor_set(v___x_442_, 0, v_size_x27_445_);
v___x_459_ = v___x_442_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_size_x27_445_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_buckets_x27_447_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
else
{
lean_dec(v_b_423_);
lean_dec(v_a_422_);
return v_m_421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(lean_object* v_var_464_, uint8_t v_borrowed_465_, lean_object* v_a_466_){
_start:
{
if (lean_obj_tag(v_var_464_) == 1)
{
lean_object* v_fvarId_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_486_; 
v_fvarId_468_ = lean_ctor_get(v_var_464_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v_var_464_);
if (v_isSharedCheck_486_ == 0)
{
v___x_470_ = v_var_464_;
v_isShared_471_ = v_isSharedCheck_486_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_fvarId_468_);
lean_dec(v_var_464_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_486_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_472_ = lean_st_ref_get(v_a_466_);
v___x_473_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v___x_472_, v_fvarId_468_);
lean_dec(v___x_472_);
if (v_borrowed_465_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_474_ = lean_st_ref_take(v_a_466_);
v___x_475_ = lean_box(0);
v___x_476_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(v___x_474_, v_fvarId_468_, v___x_475_);
v___x_477_ = lean_st_ref_put(v_a_466_, v___x_476_);
v___x_478_ = lean_box(v___x_473_);
if (v_isShared_471_ == 0)
{
lean_ctor_set_tag(v___x_470_, 0);
lean_ctor_set(v___x_470_, 0, v___x_478_);
v___x_480_ = v___x_470_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
else
{
lean_object* v___x_482_; lean_object* v___x_484_; 
lean_dec(v_fvarId_468_);
v___x_482_ = lean_box(v___x_473_);
if (v_isShared_471_ == 0)
{
lean_ctor_set_tag(v___x_470_, 0);
lean_ctor_set(v___x_470_, 0, v___x_482_);
v___x_484_ = v___x_470_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
uint8_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
lean_dec(v_var_464_);
v___x_487_ = 0;
v___x_488_ = lean_box(v___x_487_);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg___boxed(lean_object* v_var_490_, lean_object* v_borrowed_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
uint8_t v_borrowed_boxed_494_; lean_object* v_res_495_; 
v_borrowed_boxed_494_ = lean_unbox(v_borrowed_491_);
v_res_495_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v_var_490_, v_borrowed_boxed_494_, v_a_492_);
lean_dec(v_a_492_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg(lean_object* v_var_496_, uint8_t v_borrowed_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v_var_496_, v_borrowed_497_, v_a_498_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___boxed(lean_object* v_var_505_, lean_object* v_borrowed_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_){
_start:
{
uint8_t v_borrowed_boxed_513_; lean_object* v_res_514_; 
v_borrowed_boxed_513_ = lean_unbox(v_borrowed_506_);
v_res_514_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg(v_var_505_, v_borrowed_boxed_513_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
lean_dec(v_a_511_);
lean_dec_ref(v_a_510_);
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
return v_res_514_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0(lean_object* v_00_u03b2_515_, lean_object* v_m_516_, lean_object* v_a_517_){
_start:
{
uint8_t v___x_518_; 
v___x_518_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_m_516_, v_a_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___boxed(lean_object* v_00_u03b2_519_, lean_object* v_m_520_, lean_object* v_a_521_){
_start:
{
uint8_t v_res_522_; lean_object* v_r_523_; 
v_res_522_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0(v_00_u03b2_519_, v_m_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_m_520_);
v_r_523_ = lean_box(v_res_522_);
return v_r_523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1(lean_object* v_00_u03b2_524_, lean_object* v_m_525_, lean_object* v_a_526_, lean_object* v_b_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(v_m_525_, v_a_526_, v_b_527_);
return v___x_528_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0(lean_object* v_00_u03b2_529_, lean_object* v_a_530_, lean_object* v_x_531_){
_start:
{
uint8_t v___x_532_; 
v___x_532_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_530_, v_x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___boxed(lean_object* v_00_u03b2_533_, lean_object* v_a_534_, lean_object* v_x_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0(v_00_u03b2_533_, v_a_534_, v_x_535_);
lean_dec(v_x_535_);
lean_dec(v_a_534_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2(lean_object* v_00_u03b2_538_, lean_object* v_data_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(v_data_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_541_, lean_object* v_i_542_, lean_object* v_source_543_, lean_object* v_target_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(v_i_542_, v_source_543_, v_target_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_546_, lean_object* v_x_547_, lean_object* v_x_548_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(v_x_547_, v_x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(lean_object* v_as_550_, size_t v_i_551_, size_t v_stop_552_, uint8_t v_b_553_, lean_object* v___y_554_){
_start:
{
uint8_t v_a_557_; lean_object* v___y_562_; uint8_t v___x_565_; 
v___x_565_ = lean_usize_dec_eq(v_i_551_, v_stop_552_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_array_uget_borrowed(v_as_550_, v_i_551_);
lean_inc(v___x_566_);
v___x_567_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_566_, v___x_565_, v___y_554_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; uint8_t v___x_569_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
v___x_569_ = lean_unbox(v_a_568_);
lean_dec(v_a_568_);
if (v___x_569_ == 0)
{
lean_dec_ref_known(v___x_567_, 1);
v_a_557_ = v_b_553_;
goto v___jp_556_;
}
else
{
v___y_562_ = v___x_567_;
goto v___jp_561_;
}
}
else
{
v___y_562_ = v___x_567_;
goto v___jp_561_;
}
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_box(v_b_553_);
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
v___jp_556_:
{
size_t v___x_558_; size_t v___x_559_; 
v___x_558_ = ((size_t)1ULL);
v___x_559_ = lean_usize_add(v_i_551_, v___x_558_);
v_i_551_ = v___x_559_;
v_b_553_ = v_a_557_;
goto _start;
}
v___jp_561_:
{
if (lean_obj_tag(v___y_562_) == 0)
{
lean_object* v_a_563_; uint8_t v___x_564_; 
v_a_563_ = lean_ctor_get(v___y_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___y_562_, 1);
v___x_564_ = lean_unbox(v_a_563_);
lean_dec(v_a_563_);
v_a_557_ = v___x_564_;
goto v___jp_556_;
}
else
{
return v___y_562_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg___boxed(lean_object* v_as_572_, lean_object* v_i_573_, lean_object* v_stop_574_, lean_object* v_b_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
size_t v_i_boxed_578_; size_t v_stop_boxed_579_; uint8_t v_b_boxed_580_; lean_object* v_res_581_; 
v_i_boxed_578_ = lean_unbox_usize(v_i_573_);
lean_dec(v_i_573_);
v_stop_boxed_579_ = lean_unbox_usize(v_stop_574_);
lean_dec(v_stop_574_);
v_b_boxed_580_ = lean_unbox(v_b_575_);
v_res_581_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_as_572_, v_i_boxed_578_, v_stop_boxed_579_, v_b_boxed_580_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v_as_572_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(lean_object* v_upperBound_582_, lean_object* v_args_583_, lean_object* v_val_584_, lean_object* v_a_585_, uint8_t v_b_586_, lean_object* v___y_587_){
_start:
{
uint8_t v_a_590_; uint8_t v___x_594_; 
v___x_594_ = lean_nat_dec_lt(v_a_585_, v_upperBound_582_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec(v_a_585_);
v___x_595_ = lean_box(v_b_586_);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
else
{
lean_object* v_params_597_; lean_object* v___x_598_; uint8_t v___y_600_; lean_object* v___x_604_; uint8_t v___x_605_; 
v_params_597_ = lean_ctor_get(v_val_584_, 3);
v___x_598_ = lean_array_fget_borrowed(v_args_583_, v_a_585_);
v___x_604_ = lean_array_get_size(v_params_597_);
v___x_605_ = lean_nat_dec_lt(v_a_585_, v___x_604_);
if (v___x_605_ == 0)
{
v___y_600_ = v___x_605_;
goto v___jp_599_;
}
else
{
lean_object* v___x_606_; uint8_t v_borrow_607_; 
v___x_606_ = lean_array_fget_borrowed(v_params_597_, v_a_585_);
v_borrow_607_ = lean_ctor_get_uint8(v___x_606_, sizeof(void*)*3);
v___y_600_ = v_borrow_607_;
goto v___jp_599_;
}
v___jp_599_:
{
lean_object* v___x_601_; 
lean_inc(v___x_598_);
v___x_601_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_598_, v___y_600_, v___y_587_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; uint8_t v___x_603_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = lean_unbox(v_a_602_);
lean_dec(v_a_602_);
if (v___x_603_ == 0)
{
v_a_590_ = v_b_586_;
goto v___jp_589_;
}
else
{
v_a_590_ = v___x_594_;
goto v___jp_589_;
}
}
else
{
lean_dec(v_a_585_);
return v___x_601_;
}
}
}
v___jp_589_:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_unsigned_to_nat(1u);
v___x_592_ = lean_nat_add(v_a_585_, v___x_591_);
lean_dec(v_a_585_);
v_a_585_ = v___x_592_;
v_b_586_ = v_a_590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg___boxed(lean_object* v_upperBound_608_, lean_object* v_args_609_, lean_object* v_val_610_, lean_object* v_a_611_, lean_object* v_b_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
uint8_t v_b_boxed_615_; lean_object* v_res_616_; 
v_b_boxed_615_ = lean_unbox(v_b_612_);
v_res_616_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(v_upperBound_608_, v_args_609_, v_val_610_, v_a_611_, v_b_boxed_615_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v_val_610_);
lean_dec_ref(v_args_609_);
lean_dec(v_upperBound_608_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(lean_object* v_as_617_, size_t v_i_618_, size_t v_stop_619_, uint8_t v_b_620_, lean_object* v___y_621_){
_start:
{
uint8_t v_a_624_; lean_object* v___y_629_; uint8_t v___x_632_; 
v___x_632_ = lean_usize_dec_eq(v_i_618_, v_stop_619_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_array_uget_borrowed(v_as_617_, v_i_618_);
lean_inc(v___x_633_);
v___x_634_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_633_, v___x_632_, v___y_621_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; uint8_t v___x_636_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_a_635_);
v___x_636_ = lean_unbox(v_a_635_);
lean_dec(v_a_635_);
if (v___x_636_ == 0)
{
lean_dec_ref_known(v___x_634_, 1);
v_a_624_ = v_b_620_;
goto v___jp_623_;
}
else
{
v___y_629_ = v___x_634_;
goto v___jp_628_;
}
}
else
{
v___y_629_ = v___x_634_;
goto v___jp_628_;
}
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_box(v_b_620_);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
v___jp_623_:
{
size_t v___x_625_; size_t v___x_626_; 
v___x_625_ = ((size_t)1ULL);
v___x_626_ = lean_usize_add(v_i_618_, v___x_625_);
v_i_618_ = v___x_626_;
v_b_620_ = v_a_624_;
goto _start;
}
v___jp_628_:
{
if (lean_obj_tag(v___y_629_) == 0)
{
lean_object* v_a_630_; uint8_t v___x_631_; 
v_a_630_ = lean_ctor_get(v___y_629_, 0);
lean_inc(v_a_630_);
lean_dec_ref_known(v___y_629_, 1);
v___x_631_ = lean_unbox(v_a_630_);
lean_dec(v_a_630_);
v_a_624_ = v___x_631_;
goto v___jp_623_;
}
else
{
return v___y_629_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg___boxed(lean_object* v_as_639_, lean_object* v_i_640_, lean_object* v_stop_641_, lean_object* v_b_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
size_t v_i_boxed_645_; size_t v_stop_boxed_646_; uint8_t v_b_boxed_647_; lean_object* v_res_648_; 
v_i_boxed_645_ = lean_unbox_usize(v_i_640_);
lean_dec(v_i_640_);
v_stop_boxed_646_ = lean_unbox_usize(v_stop_641_);
lean_dec(v_stop_641_);
v_b_boxed_647_ = lean_unbox(v_b_642_);
v_res_648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_as_639_, v_i_boxed_645_, v_stop_boxed_646_, v_b_boxed_647_, v___y_643_);
lean_dec(v___y_643_);
lean_dec_ref(v_as_639_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(lean_object* v_value_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
switch(lean_obj_tag(v_value_649_))
{
case 0:
{
lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_664_; 
v_isSharedCheck_664_ = !lean_is_exclusive(v_value_649_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v_value_649_, 0);
lean_dec(v_unused_665_);
v___x_657_ = v_value_649_;
v_isShared_658_ = v_isSharedCheck_664_;
goto v_resetjp_656_;
}
else
{
lean_dec(v_value_649_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_664_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
uint8_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_662_; 
v___x_659_ = 0;
v___x_660_ = lean_box(v___x_659_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v___x_660_);
v___x_662_ = v___x_657_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_660_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
case 1:
{
uint8_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_666_ = 0;
v___x_667_ = lean_box(v___x_666_);
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
case 2:
{
lean_object* v_struct_669_; lean_object* v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; 
v_struct_669_ = lean_ctor_get(v_value_649_, 2);
lean_inc(v_struct_669_);
lean_dec_ref_known(v_value_649_, 3);
v___x_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_670_, 0, v_struct_669_);
v___x_671_ = 1;
v___x_672_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_670_, v___x_671_, v_a_650_);
return v___x_672_;
}
case 3:
{
lean_object* v_declName_673_; lean_object* v_args_674_; lean_object* v___x_675_; 
v_declName_673_ = lean_ctor_get(v_value_649_, 0);
lean_inc(v_declName_673_);
v_args_674_ = lean_ctor_get(v_value_649_, 2);
lean_inc_ref(v_args_674_);
lean_dec_ref_known(v_value_649_, 3);
v___x_675_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_673_, v_a_654_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_704_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_704_ == 0)
{
v___x_678_ = v___x_675_;
v_isShared_679_ = v_isSharedCheck_704_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_675_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_704_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
if (lean_obj_tag(v_a_676_) == 0)
{
uint8_t v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_680_ = 0;
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = lean_array_get_size(v_args_674_);
v___x_683_ = lean_nat_dec_lt(v___x_681_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_686_; 
lean_dec_ref(v_args_674_);
v___x_684_ = lean_box(v___x_680_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_684_);
v___x_686_ = v___x_678_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
else
{
uint8_t v___x_688_; 
v___x_688_ = lean_nat_dec_le(v___x_682_, v___x_682_);
if (v___x_688_ == 0)
{
if (v___x_683_ == 0)
{
lean_object* v___x_689_; lean_object* v___x_691_; 
lean_dec_ref(v_args_674_);
v___x_689_ = lean_box(v___x_680_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_689_);
v___x_691_ = v___x_678_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
else
{
size_t v___x_693_; size_t v___x_694_; lean_object* v___x_695_; 
lean_del_object(v___x_678_);
v___x_693_ = ((size_t)0ULL);
v___x_694_ = lean_usize_of_nat(v___x_682_);
v___x_695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_args_674_, v___x_693_, v___x_694_, v___x_680_, v_a_650_);
lean_dec_ref(v_args_674_);
return v___x_695_;
}
}
else
{
size_t v___x_696_; size_t v___x_697_; lean_object* v___x_698_; 
lean_del_object(v___x_678_);
v___x_696_ = ((size_t)0ULL);
v___x_697_ = lean_usize_of_nat(v___x_682_);
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_args_674_, v___x_696_, v___x_697_, v___x_680_, v_a_650_);
lean_dec_ref(v_args_674_);
return v___x_698_;
}
}
}
else
{
lean_object* v_val_699_; lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; lean_object* v___x_703_; 
lean_del_object(v___x_678_);
v_val_699_ = lean_ctor_get(v_a_676_, 0);
lean_inc(v_val_699_);
lean_dec_ref_known(v_a_676_, 1);
v___x_700_ = lean_array_get_size(v_args_674_);
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = 0;
v___x_703_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(v___x_700_, v_args_674_, v_val_699_, v___x_701_, v___x_702_, v_a_650_);
lean_dec(v_val_699_);
lean_dec_ref(v_args_674_);
return v___x_703_;
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
lean_dec_ref(v_args_674_);
v_a_705_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_675_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_675_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
default: 
{
lean_object* v_fvarId_713_; lean_object* v_args_714_; lean_object* v___x_715_; uint8_t v___x_716_; lean_object* v___x_717_; lean_object* v_a_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_fvarId_713_ = lean_ctor_get(v_value_649_, 0);
lean_inc(v_fvarId_713_);
v_args_714_ = lean_ctor_get(v_value_649_, 1);
lean_inc_ref(v_args_714_);
lean_dec_ref_known(v_value_649_, 2);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v_fvarId_713_);
v___x_716_ = 0;
v___x_717_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_715_, v___x_716_, v_a_650_);
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = lean_array_get_size(v_args_714_);
v___x_721_ = lean_nat_dec_lt(v___x_719_, v___x_720_);
if (v___x_721_ == 0)
{
lean_dec(v_a_718_);
lean_dec_ref(v_args_714_);
return v___x_717_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_le(v___x_720_, v___x_720_);
if (v___x_722_ == 0)
{
if (v___x_721_ == 0)
{
lean_dec(v_a_718_);
lean_dec_ref(v_args_714_);
return v___x_717_;
}
else
{
size_t v___x_723_; size_t v___x_724_; uint8_t v___x_725_; lean_object* v___x_726_; 
lean_dec_ref(v___x_717_);
v___x_723_ = ((size_t)0ULL);
v___x_724_ = lean_usize_of_nat(v___x_720_);
v___x_725_ = lean_unbox(v_a_718_);
lean_dec(v_a_718_);
v___x_726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_args_714_, v___x_723_, v___x_724_, v___x_725_, v_a_650_);
lean_dec_ref(v_args_714_);
return v___x_726_;
}
}
else
{
size_t v___x_727_; size_t v___x_728_; uint8_t v___x_729_; lean_object* v___x_730_; 
lean_dec_ref(v___x_717_);
v___x_727_ = ((size_t)0ULL);
v___x_728_ = lean_usize_of_nat(v___x_720_);
v___x_729_ = lean_unbox(v_a_718_);
lean_dec(v_a_718_);
v___x_730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_args_714_, v___x_727_, v___x_728_, v___x_729_, v_a_650_);
lean_dec_ref(v_args_714_);
return v___x_730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg___boxed(lean_object* v_value_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(v_value_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue(lean_object* v_env_739_, lean_object* v_value_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(v_value_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___boxed(lean_object* v_env_748_, lean_object* v_value_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue(v_env_748_, v_value_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
lean_dec(v_a_750_);
lean_dec_ref(v_env_748_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0(lean_object* v_as_757_, size_t v_i_758_, size_t v_stop_759_, uint8_t v_b_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_as_757_, v_i_758_, v_stop_759_, v_b_760_, v___y_761_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___boxed(lean_object* v_as_768_, lean_object* v_i_769_, lean_object* v_stop_770_, lean_object* v_b_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
size_t v_i_boxed_778_; size_t v_stop_boxed_779_; uint8_t v_b_boxed_780_; lean_object* v_res_781_; 
v_i_boxed_778_ = lean_unbox_usize(v_i_769_);
lean_dec(v_i_769_);
v_stop_boxed_779_ = lean_unbox_usize(v_stop_770_);
lean_dec(v_stop_770_);
v_b_boxed_780_ = lean_unbox(v_b_771_);
v_res_781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0(v_as_768_, v_i_boxed_778_, v_stop_boxed_779_, v_b_boxed_780_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v_as_768_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1(lean_object* v_upperBound_782_, lean_object* v_args_783_, lean_object* v_val_784_, lean_object* v_inst_785_, lean_object* v_R_786_, lean_object* v_a_787_, uint8_t v_b_788_, lean_object* v_c_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(v_upperBound_782_, v_args_783_, v_val_784_, v_a_787_, v_b_788_, v___y_790_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___boxed(lean_object* v_upperBound_797_, lean_object* v_args_798_, lean_object* v_val_799_, lean_object* v_inst_800_, lean_object* v_R_801_, lean_object* v_a_802_, lean_object* v_b_803_, lean_object* v_c_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
uint8_t v_b_boxed_811_; lean_object* v_res_812_; 
v_b_boxed_811_ = lean_unbox(v_b_803_);
v_res_812_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1(v_upperBound_797_, v_args_798_, v_val_799_, v_inst_800_, v_R_801_, v_a_802_, v_b_boxed_811_, v_c_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v_val_799_);
lean_dec_ref(v_args_798_);
lean_dec(v_upperBound_797_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2(lean_object* v_as_813_, size_t v_i_814_, size_t v_stop_815_, uint8_t v_b_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_as_813_, v_i_814_, v_stop_815_, v_b_816_, v___y_817_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___boxed(lean_object* v_as_824_, lean_object* v_i_825_, lean_object* v_stop_826_, lean_object* v_b_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
size_t v_i_boxed_834_; size_t v_stop_boxed_835_; uint8_t v_b_boxed_836_; lean_object* v_res_837_; 
v_i_boxed_834_ = lean_unbox_usize(v_i_825_);
lean_dec(v_i_825_);
v_stop_boxed_835_ = lean_unbox_usize(v_stop_826_);
lean_dec(v_stop_826_);
v_b_boxed_836_ = lean_unbox(v_b_827_);
v_res_837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2(v_as_824_, v_i_boxed_834_, v_stop_boxed_835_, v_b_boxed_836_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v_as_824_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(lean_object* v_value_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
if (lean_obj_tag(v_value_838_) == 0)
{
lean_object* v_decl_845_; lean_object* v_value_846_; lean_object* v___x_847_; 
v_decl_845_ = lean_ctor_get(v_value_838_, 0);
lean_inc_ref(v_decl_845_);
lean_dec_ref_known(v_value_838_, 1);
v_value_846_ = lean_ctor_get(v_decl_845_, 3);
lean_inc(v_value_846_);
lean_dec_ref(v_decl_845_);
v___x_847_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(v_value_846_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_);
return v___x_847_;
}
else
{
uint8_t v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
lean_dec_ref(v_value_838_);
v___x_848_ = 0;
v___x_849_ = lean_box(v___x_848_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg___boxed(lean_object* v_value_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(v_value_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
lean_dec_ref(v_a_853_);
lean_dec(v_a_852_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl(lean_object* v_env_859_, lean_object* v_value_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(v_value_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___boxed(lean_object* v_env_868_, lean_object* v_value_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl(v_env_868_, v_value_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
lean_dec(v_a_870_);
lean_dec_ref(v_env_868_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(lean_object* v_a_877_, lean_object* v_b_878_, lean_object* v_x_879_){
_start:
{
if (lean_obj_tag(v_x_879_) == 0)
{
lean_dec(v_b_878_);
lean_dec(v_a_877_);
return v_x_879_;
}
else
{
lean_object* v_key_880_; lean_object* v_value_881_; lean_object* v_tail_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_894_; 
v_key_880_ = lean_ctor_get(v_x_879_, 0);
v_value_881_ = lean_ctor_get(v_x_879_, 1);
v_tail_882_ = lean_ctor_get(v_x_879_, 2);
v_isSharedCheck_894_ = !lean_is_exclusive(v_x_879_);
if (v_isSharedCheck_894_ == 0)
{
v___x_884_ = v_x_879_;
v_isShared_885_ = v_isSharedCheck_894_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_tail_882_);
lean_inc(v_value_881_);
lean_inc(v_key_880_);
lean_dec(v_x_879_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_894_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
uint8_t v___x_886_; 
v___x_886_ = l_Lean_instBEqFVarId_beq(v_key_880_, v_a_877_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_887_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(v_a_877_, v_b_878_, v_tail_882_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 2, v___x_887_);
v___x_889_ = v___x_884_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_key_880_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_value_881_);
lean_ctor_set(v_reuseFailAlloc_890_, 2, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
else
{
lean_object* v___x_892_; 
lean_dec(v_value_881_);
lean_dec(v_key_880_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 1, v_b_878_);
lean_ctor_set(v___x_884_, 0, v_a_877_);
v___x_892_ = v___x_884_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_877_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_b_878_);
lean_ctor_set(v_reuseFailAlloc_893_, 2, v_tail_882_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(lean_object* v_m_895_, lean_object* v_a_896_, lean_object* v_b_897_){
_start:
{
lean_object* v_size_898_; lean_object* v_buckets_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_942_; 
v_size_898_ = lean_ctor_get(v_m_895_, 0);
v_buckets_899_ = lean_ctor_get(v_m_895_, 1);
v_isSharedCheck_942_ = !lean_is_exclusive(v_m_895_);
if (v_isSharedCheck_942_ == 0)
{
v___x_901_ = v_m_895_;
v_isShared_902_ = v_isSharedCheck_942_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_buckets_899_);
lean_inc(v_size_898_);
lean_dec(v_m_895_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_942_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; uint64_t v___x_904_; uint64_t v___x_905_; uint64_t v___x_906_; uint64_t v_fold_907_; uint64_t v___x_908_; uint64_t v___x_909_; uint64_t v___x_910_; size_t v___x_911_; size_t v___x_912_; size_t v___x_913_; size_t v___x_914_; size_t v___x_915_; lean_object* v_bkt_916_; uint8_t v___x_917_; 
v___x_903_ = lean_array_get_size(v_buckets_899_);
v___x_904_ = l_Lean_instHashableFVarId_hash(v_a_896_);
v___x_905_ = 32ULL;
v___x_906_ = lean_uint64_shift_right(v___x_904_, v___x_905_);
v_fold_907_ = lean_uint64_xor(v___x_904_, v___x_906_);
v___x_908_ = 16ULL;
v___x_909_ = lean_uint64_shift_right(v_fold_907_, v___x_908_);
v___x_910_ = lean_uint64_xor(v_fold_907_, v___x_909_);
v___x_911_ = lean_uint64_to_usize(v___x_910_);
v___x_912_ = lean_usize_of_nat(v___x_903_);
v___x_913_ = ((size_t)1ULL);
v___x_914_ = lean_usize_sub(v___x_912_, v___x_913_);
v___x_915_ = lean_usize_land(v___x_911_, v___x_914_);
v_bkt_916_ = lean_array_uget_borrowed(v_buckets_899_, v___x_915_);
v___x_917_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_896_, v_bkt_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; lean_object* v_size_x27_919_; lean_object* v___x_920_; lean_object* v_buckets_x27_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; uint8_t v___x_927_; 
v___x_918_ = lean_unsigned_to_nat(1u);
v_size_x27_919_ = lean_nat_add(v_size_898_, v___x_918_);
lean_dec(v_size_898_);
lean_inc(v_bkt_916_);
v___x_920_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_920_, 0, v_a_896_);
lean_ctor_set(v___x_920_, 1, v_b_897_);
lean_ctor_set(v___x_920_, 2, v_bkt_916_);
v_buckets_x27_921_ = lean_array_uset(v_buckets_899_, v___x_915_, v___x_920_);
v___x_922_ = lean_unsigned_to_nat(4u);
v___x_923_ = lean_nat_mul(v_size_x27_919_, v___x_922_);
v___x_924_ = lean_unsigned_to_nat(3u);
v___x_925_ = lean_nat_div(v___x_923_, v___x_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_array_get_size(v_buckets_x27_921_);
v___x_927_ = lean_nat_dec_le(v___x_925_, v___x_926_);
lean_dec(v___x_925_);
if (v___x_927_ == 0)
{
lean_object* v_val_928_; lean_object* v___x_930_; 
v_val_928_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(v_buckets_x27_921_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 1, v_val_928_);
lean_ctor_set(v___x_901_, 0, v_size_x27_919_);
v___x_930_ = v___x_901_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_size_x27_919_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_val_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
else
{
lean_object* v___x_933_; 
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 1, v_buckets_x27_921_);
lean_ctor_set(v___x_901_, 0, v_size_x27_919_);
v___x_933_ = v___x_901_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_size_x27_919_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_buckets_x27_921_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v___x_935_; lean_object* v_buckets_x27_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_940_; 
lean_inc(v_bkt_916_);
v___x_935_ = lean_box(0);
v_buckets_x27_936_ = lean_array_uset(v_buckets_899_, v___x_915_, v___x_935_);
v___x_937_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(v_a_896_, v_b_897_, v_bkt_916_);
v___x_938_ = lean_array_uset(v_buckets_x27_936_, v___x_915_, v___x_937_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 1, v___x_938_);
v___x_940_ = v___x_901_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_size_898_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v___x_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(lean_object* v_a_943_, lean_object* v_x_944_){
_start:
{
if (lean_obj_tag(v_x_944_) == 0)
{
lean_object* v___x_945_; 
v___x_945_ = lean_box(0);
return v___x_945_;
}
else
{
lean_object* v_key_946_; lean_object* v_value_947_; lean_object* v_tail_948_; uint8_t v___x_949_; 
v_key_946_ = lean_ctor_get(v_x_944_, 0);
v_value_947_ = lean_ctor_get(v_x_944_, 1);
v_tail_948_ = lean_ctor_get(v_x_944_, 2);
v___x_949_ = l_Lean_instBEqFVarId_beq(v_key_946_, v_a_943_);
if (v___x_949_ == 0)
{
v_x_944_ = v_tail_948_;
goto _start;
}
else
{
lean_object* v___x_951_; 
lean_inc(v_value_947_);
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v_value_947_);
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_952_, lean_object* v_x_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(v_a_952_, v_x_953_);
lean_dec(v_x_953_);
lean_dec(v_a_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(lean_object* v_m_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_buckets_957_; lean_object* v___x_958_; uint64_t v___x_959_; uint64_t v___x_960_; uint64_t v___x_961_; uint64_t v_fold_962_; uint64_t v___x_963_; uint64_t v___x_964_; uint64_t v___x_965_; size_t v___x_966_; size_t v___x_967_; size_t v___x_968_; size_t v___x_969_; size_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_buckets_957_ = lean_ctor_get(v_m_955_, 1);
v___x_958_ = lean_array_get_size(v_buckets_957_);
v___x_959_ = l_Lean_instHashableFVarId_hash(v_a_956_);
v___x_960_ = 32ULL;
v___x_961_ = lean_uint64_shift_right(v___x_959_, v___x_960_);
v_fold_962_ = lean_uint64_xor(v___x_959_, v___x_961_);
v___x_963_ = 16ULL;
v___x_964_ = lean_uint64_shift_right(v_fold_962_, v___x_963_);
v___x_965_ = lean_uint64_xor(v_fold_962_, v___x_964_);
v___x_966_ = lean_uint64_to_usize(v___x_965_);
v___x_967_ = lean_usize_of_nat(v___x_958_);
v___x_968_ = ((size_t)1ULL);
v___x_969_ = lean_usize_sub(v___x_967_, v___x_968_);
v___x_970_ = lean_usize_land(v___x_966_, v___x_969_);
v___x_971_ = lean_array_uget_borrowed(v_buckets_957_, v___x_970_);
v___x_972_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(v_a_956_, v___x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg___boxed(lean_object* v_m_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v_m_973_, v_a_974_);
lean_dec(v_a_974_);
lean_dec_ref(v_m_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(lean_object* v_plannedDecision_976_, lean_object* v_var_977_, lean_object* v_a_978_){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = lean_st_ref_get(v_a_978_);
v___x_981_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v___x_980_, v_var_977_);
lean_dec(v___x_980_);
if (lean_obj_tag(v___x_981_) == 1)
{
lean_object* v_val_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1006_; 
v_val_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_1006_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_val_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1006_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
if (lean_obj_tag(v_val_982_) == 3)
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_986_ = lean_st_ref_take(v_a_978_);
v___x_987_ = lean_box(0);
v___x_988_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v___x_986_, v_var_977_, v_plannedDecision_976_);
v___x_989_ = lean_st_ref_put(v_a_978_, v___x_988_);
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 0);
lean_ctor_set(v___x_984_, 0, v___x_987_);
v___x_991_ = v___x_984_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_987_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
else
{
uint8_t v___x_993_; 
v___x_993_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_val_982_, v_plannedDecision_976_);
lean_dec(v_plannedDecision_976_);
lean_dec(v_val_982_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_994_ = lean_st_ref_take(v_a_978_);
v___x_995_ = lean_box(0);
v___x_996_ = lean_box(2);
v___x_997_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v___x_994_, v_var_977_, v___x_996_);
v___x_998_ = lean_st_ref_put(v_a_978_, v___x_997_);
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 0);
lean_ctor_set(v___x_984_, 0, v___x_995_);
v___x_1000_ = v___x_984_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1004_; 
lean_dec(v_var_977_);
v___x_1002_ = lean_box(0);
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 0);
lean_ctor_set(v___x_984_, 0, v___x_1002_);
v___x_1004_ = v___x_984_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec(v___x_981_);
lean_dec(v_var_977_);
lean_dec(v_plannedDecision_976_);
v___x_1007_ = lean_box(0);
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg___boxed(lean_object* v_plannedDecision_1009_, lean_object* v_var_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(v_plannedDecision_1009_, v_var_1010_, v_a_1011_);
lean_dec(v_a_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar(lean_object* v_plannedDecision_1014_, lean_object* v_var_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(v_plannedDecision_1014_, v_var_1015_, v_a_1016_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed(lean_object* v_plannedDecision_1024_, lean_object* v_var_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar(v_plannedDecision_1024_, v_var_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec(v_a_1026_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0(lean_object* v_00_u03b2_1034_, lean_object* v_m_1035_, lean_object* v_a_1036_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v_m_1035_, v_a_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___boxed(lean_object* v_00_u03b2_1038_, lean_object* v_m_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0(v_00_u03b2_1038_, v_m_1039_, v_a_1040_);
lean_dec(v_a_1040_);
lean_dec_ref(v_m_1039_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1(lean_object* v_00_u03b2_1042_, lean_object* v_m_1043_, lean_object* v_a_1044_, lean_object* v_b_1045_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_m_1043_, v_a_1044_, v_b_1045_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0(lean_object* v_00_u03b2_1047_, lean_object* v_a_1048_, lean_object* v_x_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(v_a_1048_, v_x_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1051_, lean_object* v_a_1052_, lean_object* v_x_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0(v_00_u03b2_1051_, v_a_1052_, v_x_1053_);
lean_dec(v_x_1053_);
lean_dec(v_a_1052_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2(lean_object* v_00_u03b2_1055_, lean_object* v_a_1056_, lean_object* v_b_1057_, lean_object* v_x_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(v_a_1056_, v_b_1057_, v_x_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(lean_object* v_alt_1060_, lean_object* v_f_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
switch(lean_obj_tag(v_alt_1060_))
{
case 0:
{
lean_object* v_code_1069_; lean_object* v___x_1070_; 
v_code_1069_ = lean_ctor_get(v_alt_1060_, 2);
lean_inc_ref(v_code_1069_);
lean_dec_ref_known(v_alt_1060_, 3);
lean_inc(v___y_1067_);
lean_inc_ref(v___y_1066_);
lean_inc(v___y_1065_);
lean_inc_ref(v___y_1064_);
lean_inc(v___y_1063_);
lean_inc(v___y_1062_);
v___x_1070_ = lean_apply_8(v_f_1061_, v_code_1069_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, lean_box(0));
return v___x_1070_;
}
case 1:
{
lean_object* v_code_1071_; lean_object* v___x_1072_; 
v_code_1071_ = lean_ctor_get(v_alt_1060_, 1);
lean_inc_ref(v_code_1071_);
lean_dec_ref_known(v_alt_1060_, 2);
lean_inc(v___y_1067_);
lean_inc_ref(v___y_1066_);
lean_inc(v___y_1065_);
lean_inc_ref(v___y_1064_);
lean_inc(v___y_1063_);
lean_inc(v___y_1062_);
v___x_1072_ = lean_apply_8(v_f_1061_, v_code_1071_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, lean_box(0));
return v___x_1072_;
}
default: 
{
lean_object* v_code_1073_; lean_object* v___x_1074_; 
v_code_1073_ = lean_ctor_get(v_alt_1060_, 0);
lean_inc_ref(v_code_1073_);
lean_dec_ref_known(v_alt_1060_, 1);
lean_inc(v___y_1067_);
lean_inc_ref(v___y_1066_);
lean_inc(v___y_1065_);
lean_inc_ref(v___y_1064_);
lean_inc(v___y_1063_);
lean_inc(v___y_1062_);
v___x_1074_ = lean_apply_8(v_f_1061_, v_code_1073_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, lean_box(0));
return v___x_1074_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg___boxed(lean_object* v_alt_1075_, lean_object* v_f_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(v_alt_1075_, v_f_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec(v___y_1077_);
return v_res_1084_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_instMonadEIO___redArg();
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(lean_object* v_msg_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v_toApplicative_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1163_; 
v___x_1098_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0);
v___x_1099_ = l_StateRefT_x27_instMonad___redArg(v___x_1098_);
v_toApplicative_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1163_ == 0)
{
lean_object* v_unused_1164_; 
v_unused_1164_ = lean_ctor_get(v___x_1099_, 1);
lean_dec(v_unused_1164_);
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1163_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_toApplicative_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1163_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v_toFunctor_1104_; lean_object* v_toSeq_1105_; lean_object* v_toSeqLeft_1106_; lean_object* v_toSeqRight_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1161_; 
v_toFunctor_1104_ = lean_ctor_get(v_toApplicative_1100_, 0);
v_toSeq_1105_ = lean_ctor_get(v_toApplicative_1100_, 2);
v_toSeqLeft_1106_ = lean_ctor_get(v_toApplicative_1100_, 3);
v_toSeqRight_1107_ = lean_ctor_get(v_toApplicative_1100_, 4);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_toApplicative_1100_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; 
v_unused_1162_ = lean_ctor_get(v_toApplicative_1100_, 1);
lean_dec(v_unused_1162_);
v___x_1109_ = v_toApplicative_1100_;
v_isShared_1110_ = v_isSharedCheck_1161_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_toSeqRight_1107_);
lean_inc(v_toSeqLeft_1106_);
lean_inc(v_toSeq_1105_);
lean_inc(v_toFunctor_1104_);
lean_dec(v_toApplicative_1100_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1161_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___f_1111_; lean_object* v___f_1112_; lean_object* v___f_1113_; lean_object* v___f_1114_; lean_object* v___x_1115_; lean_object* v___f_1116_; lean_object* v___f_1117_; lean_object* v___f_1118_; lean_object* v___x_1120_; 
v___f_1111_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1));
v___f_1112_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1104_);
v___f_1113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1113_, 0, v_toFunctor_1104_);
v___f_1114_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1114_, 0, v_toFunctor_1104_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___f_1113_);
lean_ctor_set(v___x_1115_, 1, v___f_1114_);
v___f_1116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1116_, 0, v_toSeqRight_1107_);
v___f_1117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1117_, 0, v_toSeqLeft_1106_);
v___f_1118_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1118_, 0, v_toSeq_1105_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 4, v___f_1116_);
lean_ctor_set(v___x_1109_, 3, v___f_1117_);
lean_ctor_set(v___x_1109_, 2, v___f_1118_);
lean_ctor_set(v___x_1109_, 1, v___f_1111_);
lean_ctor_set(v___x_1109_, 0, v___x_1115_);
v___x_1120_ = v___x_1109_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1115_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___f_1111_);
lean_ctor_set(v_reuseFailAlloc_1160_, 2, v___f_1118_);
lean_ctor_set(v_reuseFailAlloc_1160_, 3, v___f_1117_);
lean_ctor_set(v_reuseFailAlloc_1160_, 4, v___f_1116_);
v___x_1120_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
lean_object* v___x_1122_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v___f_1112_);
lean_ctor_set(v___x_1102_, 0, v___x_1120_);
v___x_1122_ = v___x_1102_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v___f_1112_);
v___x_1122_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1123_; lean_object* v_toApplicative_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1157_; 
v___x_1123_ = l_StateRefT_x27_instMonad___redArg(v___x_1122_);
v_toApplicative_1124_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1157_ == 0)
{
lean_object* v_unused_1158_; 
v_unused_1158_ = lean_ctor_get(v___x_1123_, 1);
lean_dec(v_unused_1158_);
v___x_1126_ = v___x_1123_;
v_isShared_1127_ = v_isSharedCheck_1157_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_toApplicative_1124_);
lean_dec(v___x_1123_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1157_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v_toFunctor_1128_; lean_object* v_toSeq_1129_; lean_object* v_toSeqLeft_1130_; lean_object* v_toSeqRight_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1155_; 
v_toFunctor_1128_ = lean_ctor_get(v_toApplicative_1124_, 0);
v_toSeq_1129_ = lean_ctor_get(v_toApplicative_1124_, 2);
v_toSeqLeft_1130_ = lean_ctor_get(v_toApplicative_1124_, 3);
v_toSeqRight_1131_ = lean_ctor_get(v_toApplicative_1124_, 4);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_toApplicative_1124_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; 
v_unused_1156_ = lean_ctor_get(v_toApplicative_1124_, 1);
lean_dec(v_unused_1156_);
v___x_1133_ = v_toApplicative_1124_;
v_isShared_1134_ = v_isSharedCheck_1155_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_toSeqRight_1131_);
lean_inc(v_toSeqLeft_1130_);
lean_inc(v_toSeq_1129_);
lean_inc(v_toFunctor_1128_);
lean_dec(v_toApplicative_1124_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1155_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___f_1135_; lean_object* v___f_1136_; lean_object* v___f_1137_; lean_object* v___f_1138_; lean_object* v___x_1139_; lean_object* v___f_1140_; lean_object* v___f_1141_; lean_object* v___f_1142_; lean_object* v___x_1144_; 
v___f_1135_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3));
v___f_1136_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1128_);
v___f_1137_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1137_, 0, v_toFunctor_1128_);
v___f_1138_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1138_, 0, v_toFunctor_1128_);
v___x_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___f_1137_);
lean_ctor_set(v___x_1139_, 1, v___f_1138_);
v___f_1140_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1140_, 0, v_toSeqRight_1131_);
v___f_1141_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1141_, 0, v_toSeqLeft_1130_);
v___f_1142_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1142_, 0, v_toSeq_1129_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 4, v___f_1140_);
lean_ctor_set(v___x_1133_, 3, v___f_1141_);
lean_ctor_set(v___x_1133_, 2, v___f_1142_);
lean_ctor_set(v___x_1133_, 1, v___f_1135_);
lean_ctor_set(v___x_1133_, 0, v___x_1139_);
v___x_1144_ = v___x_1133_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1139_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v___f_1135_);
lean_ctor_set(v_reuseFailAlloc_1154_, 2, v___f_1142_);
lean_ctor_set(v_reuseFailAlloc_1154_, 3, v___f_1141_);
lean_ctor_set(v_reuseFailAlloc_1154_, 4, v___f_1140_);
v___x_1144_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1146_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 1, v___f_1136_);
lean_ctor_set(v___x_1126_, 0, v___x_1144_);
v___x_1146_ = v___x_1126_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v___f_1136_);
v___x_1146_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_8047__overap_1151_; lean_object* v___x_1152_; 
v___x_1147_ = l_ReaderT_instMonad___redArg(v___x_1146_);
v___x_1148_ = l_StateRefT_x27_instMonad___redArg(v___x_1147_);
v___x_1149_ = lean_box(0);
v___x_1150_ = l_instInhabitedOfMonad___redArg(v___x_1148_, v___x_1149_);
v___x_8047__overap_1151_ = lean_panic_fn_borrowed(v___x_1150_, v_msg_1090_);
lean_dec(v___x_1150_);
lean_inc(v___y_1096_);
lean_inc_ref(v___y_1095_);
lean_inc(v___y_1094_);
lean_inc_ref(v___y_1093_);
lean_inc(v___y_1092_);
lean_inc(v___y_1091_);
v___x_1152_ = lean_apply_7(v___x_8047__overap_1151_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, lean_box(0));
return v___x_1152_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v_msg_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec(v___y_1166_);
return v_res_1173_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1177_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2));
v___x_1178_ = lean_unsigned_to_nat(40u);
v___x_1179_ = lean_unsigned_to_nat(49u);
v___x_1180_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1));
v___x_1181_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0));
v___x_1182_ = l_mkPanicMessageWithDecl(v___x_1181_, v___x_1180_, v___x_1179_, v___x_1178_, v___x_1177_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(lean_object* v_f_1183_, lean_object* v_e_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_ty_1193_; lean_object* v_body_1194_; uint8_t v___x_1197_; 
v___x_1197_ = l_Lean_Expr_hasFVar(v_e_1184_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref(v_e_1184_);
lean_dec_ref(v_f_1183_);
v___x_1198_ = lean_box(0);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
else
{
switch(lean_obj_tag(v_e_1184_))
{
case 1:
{
lean_object* v_fvarId_1200_; lean_object* v___x_1201_; 
v_fvarId_1200_ = lean_ctor_get(v_e_1184_, 0);
lean_inc(v_fvarId_1200_);
lean_dec_ref_known(v_e_1184_, 1);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v___y_1187_);
lean_inc(v___y_1186_);
lean_inc(v___y_1185_);
v___x_1201_ = lean_apply_8(v_f_1183_, v_fvarId_1200_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, lean_box(0));
return v___x_1201_;
}
case 2:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_dec_ref_known(v_e_1184_, 1);
lean_dec_ref(v_f_1183_);
v___x_1202_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_1203_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v___x_1202_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1203_;
}
case 5:
{
lean_object* v_fn_1204_; lean_object* v_arg_1205_; lean_object* v___x_1206_; 
v_fn_1204_ = lean_ctor_get(v_e_1184_, 0);
lean_inc_ref(v_fn_1204_);
v_arg_1205_ = lean_ctor_get(v_e_1184_, 1);
lean_inc_ref(v_arg_1205_);
lean_dec_ref_known(v_e_1184_, 2);
lean_inc_ref(v_f_1183_);
v___x_1206_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1183_, v_fn_1204_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_dec_ref_known(v___x_1206_, 1);
v_e_1184_ = v_arg_1205_;
goto _start;
}
else
{
lean_dec_ref(v_arg_1205_);
lean_dec_ref(v_f_1183_);
return v___x_1206_;
}
}
case 6:
{
lean_object* v_binderType_1208_; lean_object* v_body_1209_; 
v_binderType_1208_ = lean_ctor_get(v_e_1184_, 1);
lean_inc_ref(v_binderType_1208_);
v_body_1209_ = lean_ctor_get(v_e_1184_, 2);
lean_inc_ref(v_body_1209_);
lean_dec_ref_known(v_e_1184_, 3);
v_ty_1193_ = v_binderType_1208_;
v_body_1194_ = v_body_1209_;
goto v___jp_1192_;
}
case 7:
{
lean_object* v_binderType_1210_; lean_object* v_body_1211_; 
v_binderType_1210_ = lean_ctor_get(v_e_1184_, 1);
lean_inc_ref(v_binderType_1210_);
v_body_1211_ = lean_ctor_get(v_e_1184_, 2);
lean_inc_ref(v_body_1211_);
lean_dec_ref_known(v_e_1184_, 3);
v_ty_1193_ = v_binderType_1210_;
v_body_1194_ = v_body_1211_;
goto v___jp_1192_;
}
case 8:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_dec_ref_known(v_e_1184_, 4);
lean_dec_ref(v_f_1183_);
v___x_1212_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_1213_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v___x_1212_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1213_;
}
case 11:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
lean_dec_ref_known(v_e_1184_, 3);
lean_dec_ref(v_f_1183_);
v___x_1214_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_1215_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v___x_1214_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1215_;
}
default: 
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_dec_ref(v_e_1184_);
lean_dec_ref(v_f_1183_);
v___x_1216_ = lean_box(0);
v___x_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
return v___x_1217_;
}
}
}
v___jp_1192_:
{
lean_object* v___x_1195_; 
lean_inc_ref(v_f_1183_);
v___x_1195_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1183_, v_ty_1193_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_dec_ref_known(v___x_1195_, 1);
v_e_1184_ = v_body_1194_;
goto _start;
}
else
{
lean_dec_ref(v_body_1194_);
lean_dec_ref(v_f_1183_);
return v___x_1195_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___boxed(lean_object* v_f_1218_, lean_object* v_e_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1218_, v_e_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec(v___y_1220_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(lean_object* v_f_1228_, lean_object* v_param_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_type_1237_; lean_object* v___x_1238_; 
v_type_1237_ = lean_ctor_get(v_param_1229_, 2);
lean_inc_ref(v_type_1237_);
lean_dec_ref(v_param_1229_);
v___x_1238_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1228_, v_type_1237_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg___boxed(lean_object* v_f_1239_, lean_object* v_param_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v_f_1239_, v_param_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec(v___y_1241_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(uint8_t v_pu_1249_, lean_object* v_f_1250_, lean_object* v_as_1251_, size_t v_i_1252_, size_t v_stop_1253_, lean_object* v_b_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
uint8_t v___x_1262_; 
v___x_1262_ = lean_usize_dec_eq(v_i_1252_, v_stop_1253_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = lean_array_uget_borrowed(v_as_1251_, v_i_1252_);
lean_inc(v___x_1263_);
lean_inc_ref(v_f_1250_);
v___x_1264_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v_f_1250_, v___x_1263_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; size_t v___x_1266_; size_t v___x_1267_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v___x_1266_ = ((size_t)1ULL);
v___x_1267_ = lean_usize_add(v_i_1252_, v___x_1266_);
v_i_1252_ = v___x_1267_;
v_b_1254_ = v_a_1265_;
goto _start;
}
else
{
lean_dec_ref(v_f_1250_);
return v___x_1264_;
}
}
else
{
lean_object* v___x_1269_; 
lean_dec_ref(v_f_1250_);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_b_1254_);
return v___x_1269_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5___boxed(lean_object* v_pu_1270_, lean_object* v_f_1271_, lean_object* v_as_1272_, lean_object* v_i_1273_, lean_object* v_stop_1274_, lean_object* v_b_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v_pu_boxed_1283_; size_t v_i_boxed_1284_; size_t v_stop_boxed_1285_; lean_object* v_res_1286_; 
v_pu_boxed_1283_ = lean_unbox(v_pu_1270_);
v_i_boxed_1284_ = lean_unbox_usize(v_i_1273_);
lean_dec(v_i_1273_);
v_stop_boxed_1285_ = lean_unbox_usize(v_stop_1274_);
lean_dec(v_stop_1274_);
v_res_1286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(v_pu_boxed_1283_, v_f_1271_, v_as_1272_, v_i_boxed_1284_, v_stop_boxed_1285_, v_b_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v_as_1272_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(lean_object* v_f_1287_, lean_object* v_arg_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
switch(lean_obj_tag(v_arg_1288_))
{
case 0:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
lean_dec_ref(v_f_1287_);
v___x_1296_ = lean_box(0);
v___x_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
case 1:
{
lean_object* v_fvarId_1298_; lean_object* v___x_1299_; 
v_fvarId_1298_ = lean_ctor_get(v_arg_1288_, 0);
lean_inc(v_fvarId_1298_);
lean_dec_ref_known(v_arg_1288_, 1);
lean_inc(v___y_1294_);
lean_inc_ref(v___y_1293_);
lean_inc(v___y_1292_);
lean_inc_ref(v___y_1291_);
lean_inc(v___y_1290_);
lean_inc(v___y_1289_);
v___x_1299_ = lean_apply_8(v_f_1287_, v_fvarId_1298_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, lean_box(0));
return v___x_1299_;
}
default: 
{
lean_object* v_expr_1300_; lean_object* v___x_1301_; 
v_expr_1300_ = lean_ctor_get(v_arg_1288_, 0);
lean_inc_ref(v_expr_1300_);
lean_dec_ref_known(v_arg_1288_, 1);
v___x_1301_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1287_, v_expr_1300_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
return v___x_1301_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg___boxed(lean_object* v_f_1302_, lean_object* v_arg_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1302_, v_arg_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec(v___y_1304_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(uint8_t v_pu_1312_, lean_object* v_f_1313_, lean_object* v_as_1314_, size_t v_i_1315_, size_t v_stop_1316_, lean_object* v_b_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
uint8_t v___x_1325_; 
v___x_1325_ = lean_usize_dec_eq(v_i_1315_, v_stop_1316_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_array_uget_borrowed(v_as_1314_, v_i_1315_);
lean_inc(v___x_1326_);
lean_inc_ref(v_f_1313_);
v___x_1327_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1313_, v___x_1326_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; size_t v___x_1329_; size_t v___x_1330_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v___x_1327_, 1);
v___x_1329_ = ((size_t)1ULL);
v___x_1330_ = lean_usize_add(v_i_1315_, v___x_1329_);
v_i_1315_ = v___x_1330_;
v_b_1317_ = v_a_1328_;
goto _start;
}
else
{
lean_dec_ref(v_f_1313_);
return v___x_1327_;
}
}
else
{
lean_object* v___x_1332_; 
lean_dec_ref(v_f_1313_);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_b_1317_);
return v___x_1332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6___boxed(lean_object* v_pu_1333_, lean_object* v_f_1334_, lean_object* v_as_1335_, lean_object* v_i_1336_, lean_object* v_stop_1337_, lean_object* v_b_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
uint8_t v_pu_boxed_1346_; size_t v_i_boxed_1347_; size_t v_stop_boxed_1348_; lean_object* v_res_1349_; 
v_pu_boxed_1346_ = lean_unbox(v_pu_1333_);
v_i_boxed_1347_ = lean_unbox_usize(v_i_1336_);
lean_dec(v_i_1336_);
v_stop_boxed_1348_ = lean_unbox_usize(v_stop_1337_);
lean_dec(v_stop_1337_);
v_res_1349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_boxed_1346_, v_f_1334_, v_as_1335_, v_i_boxed_1347_, v_stop_boxed_1348_, v_b_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v_as_1335_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(uint8_t v_pu_1350_, lean_object* v_f_1351_, lean_object* v_e_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_args_1361_; 
switch(lean_obj_tag(v_e_1352_))
{
case 2:
{
lean_object* v_struct_1370_; lean_object* v___x_1371_; 
v_struct_1370_ = lean_ctor_get(v_e_1352_, 2);
lean_inc(v_struct_1370_);
lean_dec_ref_known(v_e_1352_, 3);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1371_ = lean_apply_8(v_f_1351_, v_struct_1370_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1371_;
}
case 3:
{
lean_object* v_args_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v_args_1372_ = lean_ctor_get(v_e_1352_, 2);
lean_inc_ref(v_args_1372_);
lean_dec_ref_known(v_e_1352_, 3);
v___x_1373_ = lean_unsigned_to_nat(0u);
v___x_1374_ = lean_array_get_size(v_args_1372_);
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_nat_dec_lt(v___x_1373_, v___x_1374_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; 
lean_dec_ref(v_args_1372_);
lean_dec_ref(v_f_1351_);
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1375_);
return v___x_1377_;
}
else
{
size_t v___x_1378_; size_t v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = ((size_t)0ULL);
v___x_1379_ = lean_usize_of_nat(v___x_1374_);
v___x_1380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1350_, v_f_1351_, v_args_1372_, v___x_1378_, v___x_1379_, v___x_1375_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec_ref(v_args_1372_);
return v___x_1380_;
}
}
case 4:
{
lean_object* v_fvarId_1381_; lean_object* v_args_1382_; lean_object* v___x_1383_; 
v_fvarId_1381_ = lean_ctor_get(v_e_1352_, 0);
lean_inc(v_fvarId_1381_);
v_args_1382_ = lean_ctor_get(v_e_1352_, 1);
lean_inc_ref(v_args_1382_);
lean_dec_ref_known(v_e_1352_, 2);
lean_inc_ref(v_f_1351_);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1383_ = lean_apply_8(v_f_1351_, v_fvarId_1381_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1397_; 
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v___x_1383_, 0);
lean_dec(v_unused_1398_);
v___x_1385_ = v___x_1383_;
v_isShared_1386_ = v_isSharedCheck_1397_;
goto v_resetjp_1384_;
}
else
{
lean_dec(v___x_1383_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1397_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_array_get_size(v_args_1382_);
v___x_1389_ = lean_box(0);
v___x_1390_ = lean_nat_dec_lt(v___x_1387_, v___x_1388_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1392_; 
lean_dec_ref(v_args_1382_);
lean_dec_ref(v_f_1351_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1389_);
v___x_1392_ = v___x_1385_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1389_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
else
{
size_t v___x_1394_; size_t v___x_1395_; lean_object* v___x_1396_; 
lean_del_object(v___x_1385_);
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = lean_usize_of_nat(v___x_1388_);
v___x_1396_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1350_, v_f_1351_, v_args_1382_, v___x_1394_, v___x_1395_, v___x_1389_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec_ref(v_args_1382_);
return v___x_1396_;
}
}
}
else
{
lean_dec_ref(v_args_1382_);
lean_dec_ref(v_f_1351_);
return v___x_1383_;
}
}
case 5:
{
lean_object* v_args_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v_args_1399_ = lean_ctor_get(v_e_1352_, 1);
lean_inc_ref(v_args_1399_);
lean_dec_ref_known(v_e_1352_, 2);
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = lean_array_get_size(v_args_1399_);
v___x_1402_ = lean_box(0);
v___x_1403_ = lean_nat_dec_lt(v___x_1400_, v___x_1401_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; 
lean_dec_ref(v_args_1399_);
lean_dec_ref(v_f_1351_);
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1402_);
return v___x_1404_;
}
else
{
size_t v___x_1405_; size_t v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = ((size_t)0ULL);
v___x_1406_ = lean_usize_of_nat(v___x_1401_);
v___x_1407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1350_, v_f_1351_, v_args_1399_, v___x_1405_, v___x_1406_, v___x_1402_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec_ref(v_args_1399_);
return v___x_1407_;
}
}
case 6:
{
lean_object* v_var_1408_; lean_object* v___x_1409_; 
v_var_1408_ = lean_ctor_get(v_e_1352_, 1);
lean_inc(v_var_1408_);
lean_dec_ref_known(v_e_1352_, 2);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1409_ = lean_apply_8(v_f_1351_, v_var_1408_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1409_;
}
case 7:
{
lean_object* v_var_1410_; lean_object* v___x_1411_; 
v_var_1410_ = lean_ctor_get(v_e_1352_, 1);
lean_inc(v_var_1410_);
lean_dec_ref_known(v_e_1352_, 2);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1411_ = lean_apply_8(v_f_1351_, v_var_1410_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1411_;
}
case 8:
{
lean_object* v_var_1412_; lean_object* v___x_1413_; 
v_var_1412_ = lean_ctor_get(v_e_1352_, 2);
lean_inc(v_var_1412_);
lean_dec_ref_known(v_e_1352_, 3);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1413_ = lean_apply_8(v_f_1351_, v_var_1412_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1413_;
}
case 9:
{
lean_object* v_args_1414_; 
v_args_1414_ = lean_ctor_get(v_e_1352_, 1);
lean_inc_ref(v_args_1414_);
lean_dec_ref_known(v_e_1352_, 2);
v_args_1361_ = v_args_1414_;
goto v___jp_1360_;
}
case 10:
{
lean_object* v_args_1415_; 
v_args_1415_ = lean_ctor_get(v_e_1352_, 1);
lean_inc_ref(v_args_1415_);
lean_dec_ref_known(v_e_1352_, 2);
v_args_1361_ = v_args_1415_;
goto v___jp_1360_;
}
case 11:
{
lean_object* v_var_1416_; lean_object* v___x_1417_; 
v_var_1416_ = lean_ctor_get(v_e_1352_, 1);
lean_inc(v_var_1416_);
lean_dec_ref_known(v_e_1352_, 2);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1417_ = lean_apply_8(v_f_1351_, v_var_1416_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1417_;
}
case 12:
{
lean_object* v_var_1418_; lean_object* v_args_1419_; lean_object* v___x_1420_; 
v_var_1418_ = lean_ctor_get(v_e_1352_, 0);
lean_inc(v_var_1418_);
v_args_1419_ = lean_ctor_get(v_e_1352_, 2);
lean_inc_ref(v_args_1419_);
lean_dec_ref_known(v_e_1352_, 3);
lean_inc_ref(v_f_1351_);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1420_ = lean_apply_8(v_f_1351_, v_var_1418_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1434_; 
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1434_ == 0)
{
lean_object* v_unused_1435_; 
v_unused_1435_ = lean_ctor_get(v___x_1420_, 0);
lean_dec(v_unused_1435_);
v___x_1422_ = v___x_1420_;
v_isShared_1423_ = v_isSharedCheck_1434_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v___x_1420_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1434_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1424_ = lean_unsigned_to_nat(0u);
v___x_1425_ = lean_array_get_size(v_args_1419_);
v___x_1426_ = lean_box(0);
v___x_1427_ = lean_nat_dec_lt(v___x_1424_, v___x_1425_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1429_; 
lean_dec_ref(v_args_1419_);
lean_dec_ref(v_f_1351_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1426_);
v___x_1429_ = v___x_1422_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1426_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
else
{
size_t v___x_1431_; size_t v___x_1432_; lean_object* v___x_1433_; 
lean_del_object(v___x_1422_);
v___x_1431_ = ((size_t)0ULL);
v___x_1432_ = lean_usize_of_nat(v___x_1425_);
v___x_1433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1350_, v_f_1351_, v_args_1419_, v___x_1431_, v___x_1432_, v___x_1426_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec_ref(v_args_1419_);
return v___x_1433_;
}
}
}
else
{
lean_dec_ref(v_args_1419_);
lean_dec_ref(v_f_1351_);
return v___x_1420_;
}
}
case 13:
{
lean_object* v_fvarId_1436_; lean_object* v___x_1437_; 
v_fvarId_1436_ = lean_ctor_get(v_e_1352_, 1);
lean_inc(v_fvarId_1436_);
lean_dec_ref_known(v_e_1352_, 2);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1437_ = lean_apply_8(v_f_1351_, v_fvarId_1436_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1437_;
}
case 14:
{
lean_object* v_fvarId_1438_; lean_object* v___x_1439_; 
v_fvarId_1438_ = lean_ctor_get(v_e_1352_, 0);
lean_inc(v_fvarId_1438_);
lean_dec_ref_known(v_e_1352_, 1);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1439_ = lean_apply_8(v_f_1351_, v_fvarId_1438_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1439_;
}
case 15:
{
lean_object* v_fvarId_1440_; lean_object* v___x_1441_; 
v_fvarId_1440_ = lean_ctor_get(v_e_1352_, 0);
lean_inc(v_fvarId_1440_);
lean_dec_ref_known(v_e_1352_, 1);
lean_inc(v___y_1358_);
lean_inc_ref(v___y_1357_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc(v___y_1353_);
v___x_1441_ = lean_apply_8(v_f_1351_, v_fvarId_1440_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, lean_box(0));
return v___x_1441_;
}
default: 
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec(v_e_1352_);
lean_dec_ref(v_f_1351_);
v___x_1442_ = lean_box(0);
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
return v___x_1443_;
}
}
v___jp_1360_:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; uint8_t v___x_1365_; 
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = lean_array_get_size(v_args_1361_);
v___x_1364_ = lean_box(0);
v___x_1365_ = lean_nat_dec_lt(v___x_1362_, v___x_1363_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; 
lean_dec_ref(v_args_1361_);
lean_dec_ref(v_f_1351_);
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1364_);
return v___x_1366_;
}
else
{
size_t v___x_1367_; size_t v___x_1368_; lean_object* v___x_1369_; 
v___x_1367_ = ((size_t)0ULL);
v___x_1368_ = lean_usize_of_nat(v___x_1363_);
v___x_1369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1350_, v_f_1351_, v_args_1361_, v___x_1367_, v___x_1368_, v___x_1364_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec_ref(v_args_1361_);
return v___x_1369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6___boxed(lean_object* v_pu_1444_, lean_object* v_f_1445_, lean_object* v_e_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
uint8_t v_pu_boxed_1454_; lean_object* v_res_1455_; 
v_pu_boxed_1454_ = lean_unbox(v_pu_1444_);
v_res_1455_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(v_pu_boxed_1454_, v_f_1445_, v_e_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec(v___y_1447_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(uint8_t v_pu_1456_, lean_object* v_f_1457_, lean_object* v_decl_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_type_1466_; lean_object* v_value_1467_; lean_object* v___x_1468_; 
v_type_1466_ = lean_ctor_get(v_decl_1458_, 2);
lean_inc_ref(v_type_1466_);
v_value_1467_ = lean_ctor_get(v_decl_1458_, 3);
lean_inc(v_value_1467_);
lean_dec_ref(v_decl_1458_);
lean_inc_ref(v_f_1457_);
v___x_1468_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1457_, v_type_1466_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v___x_1469_; 
lean_dec_ref_known(v___x_1468_, 1);
v___x_1469_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(v_pu_1456_, v_f_1457_, v_value_1467_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1469_;
}
else
{
lean_dec(v_value_1467_);
lean_dec_ref(v_f_1457_);
return v___x_1468_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4___boxed(lean_object* v_pu_1470_, lean_object* v_f_1471_, lean_object* v_decl_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
uint8_t v_pu_boxed_1480_; lean_object* v_res_1481_; 
v_pu_boxed_1480_ = lean_unbox(v_pu_1470_);
v_res_1481_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(v_pu_boxed_1480_, v_f_1471_, v_decl_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec(v___y_1473_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0___boxed(lean_object* v_pu_1482_, lean_object* v_f_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
uint8_t v_pu_boxed_1492_; lean_object* v_res_1493_; 
v_pu_boxed_1492_ = lean_unbox(v_pu_1482_);
v_res_1493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0(v_pu_boxed_1492_, v_f_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec(v___y_1485_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(uint8_t v_pu_1494_, lean_object* v_f_1495_, lean_object* v_as_1496_, size_t v_i_1497_, size_t v_stop_1498_, lean_object* v_b_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
uint8_t v___x_1507_; 
v___x_1507_ = lean_usize_dec_eq(v_i_1497_, v_stop_1498_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; lean_object* v___f_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1508_ = lean_box(v_pu_1494_);
lean_inc_ref(v_f_1495_);
v___f_1509_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1509_, 0, v___x_1508_);
lean_closure_set(v___f_1509_, 1, v_f_1495_);
v___x_1510_ = lean_array_uget_borrowed(v_as_1496_, v_i_1497_);
lean_inc(v___x_1510_);
v___x_1511_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(v___x_1510_, v___f_1509_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; size_t v___x_1513_; size_t v___x_1514_; 
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1513_ = ((size_t)1ULL);
v___x_1514_ = lean_usize_add(v_i_1497_, v___x_1513_);
v_i_1497_ = v___x_1514_;
v_b_1499_ = v_a_1512_;
goto _start;
}
else
{
lean_dec_ref(v_f_1495_);
return v___x_1511_;
}
}
else
{
lean_object* v___x_1516_; 
lean_dec_ref(v_f_1495_);
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v_b_1499_);
return v___x_1516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(uint8_t v_pu_1517_, lean_object* v_f_1518_, lean_object* v_c_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
switch(lean_obj_tag(v_c_1519_))
{
case 0:
{
lean_object* v_decl_1527_; lean_object* v_k_1528_; lean_object* v___x_1529_; 
v_decl_1527_ = lean_ctor_get(v_c_1519_, 0);
lean_inc_ref(v_decl_1527_);
v_k_1528_ = lean_ctor_get(v_c_1519_, 1);
lean_inc_ref(v_k_1528_);
lean_dec_ref_known(v_c_1519_, 2);
lean_inc_ref(v_f_1518_);
v___x_1529_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(v_pu_1517_, v_f_1518_, v_decl_1527_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_dec_ref_known(v___x_1529_, 1);
v_c_1519_ = v_k_1528_;
goto _start;
}
else
{
lean_dec_ref(v_k_1528_);
lean_dec_ref(v_f_1518_);
return v___x_1529_;
}
}
case 3:
{
lean_object* v_fvarId_1531_; lean_object* v_args_1532_; lean_object* v___x_1533_; 
v_fvarId_1531_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1531_);
v_args_1532_ = lean_ctor_get(v_c_1519_, 1);
lean_inc_ref(v_args_1532_);
lean_dec_ref_known(v_c_1519_, 2);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1533_ = lean_apply_8(v_f_1518_, v_fvarId_1531_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1547_; 
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1547_ == 0)
{
lean_object* v_unused_1548_; 
v_unused_1548_ = lean_ctor_get(v___x_1533_, 0);
lean_dec(v_unused_1548_);
v___x_1535_ = v___x_1533_;
v_isShared_1536_ = v_isSharedCheck_1547_;
goto v_resetjp_1534_;
}
else
{
lean_dec(v___x_1533_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1547_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; uint8_t v___x_1540_; 
v___x_1537_ = lean_unsigned_to_nat(0u);
v___x_1538_ = lean_array_get_size(v_args_1532_);
v___x_1539_ = lean_box(0);
v___x_1540_ = lean_nat_dec_lt(v___x_1537_, v___x_1538_);
if (v___x_1540_ == 0)
{
lean_object* v___x_1542_; 
lean_dec_ref(v_args_1532_);
lean_dec_ref(v_f_1518_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1539_);
v___x_1542_ = v___x_1535_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1539_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
else
{
size_t v___x_1544_; size_t v___x_1545_; lean_object* v___x_1546_; 
lean_del_object(v___x_1535_);
v___x_1544_ = ((size_t)0ULL);
v___x_1545_ = lean_usize_of_nat(v___x_1538_);
v___x_1546_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1517_, v_f_1518_, v_args_1532_, v___x_1544_, v___x_1545_, v___x_1539_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec_ref(v_args_1532_);
return v___x_1546_;
}
}
}
else
{
lean_dec_ref(v_args_1532_);
lean_dec_ref(v_f_1518_);
return v___x_1533_;
}
}
case 4:
{
lean_object* v_cases_1549_; lean_object* v_resultType_1550_; lean_object* v_discr_1551_; lean_object* v_alts_1552_; lean_object* v___x_1553_; 
v_cases_1549_ = lean_ctor_get(v_c_1519_, 0);
lean_inc_ref(v_cases_1549_);
lean_dec_ref_known(v_c_1519_, 1);
v_resultType_1550_ = lean_ctor_get(v_cases_1549_, 1);
lean_inc_ref(v_resultType_1550_);
v_discr_1551_ = lean_ctor_get(v_cases_1549_, 2);
lean_inc(v_discr_1551_);
v_alts_1552_ = lean_ctor_get(v_cases_1549_, 3);
lean_inc_ref(v_alts_1552_);
lean_dec_ref(v_cases_1549_);
lean_inc_ref(v_f_1518_);
v___x_1553_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1518_, v_resultType_1550_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1554_; 
lean_dec_ref_known(v___x_1553_, 1);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1554_ = lean_apply_8(v_f_1518_, v_discr_1551_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1568_; 
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1568_ == 0)
{
lean_object* v_unused_1569_; 
v_unused_1569_ = lean_ctor_get(v___x_1554_, 0);
lean_dec(v_unused_1569_);
v___x_1556_ = v___x_1554_;
v_isShared_1557_ = v_isSharedCheck_1568_;
goto v_resetjp_1555_;
}
else
{
lean_dec(v___x_1554_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1568_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1558_ = lean_unsigned_to_nat(0u);
v___x_1559_ = lean_array_get_size(v_alts_1552_);
v___x_1560_ = lean_box(0);
v___x_1561_ = lean_nat_dec_lt(v___x_1558_, v___x_1559_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1563_; 
lean_dec_ref(v_alts_1552_);
lean_dec_ref(v_f_1518_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1560_);
v___x_1563_ = v___x_1556_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1560_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
else
{
size_t v___x_1565_; size_t v___x_1566_; lean_object* v___x_1567_; 
lean_del_object(v___x_1556_);
v___x_1565_ = ((size_t)0ULL);
v___x_1566_ = lean_usize_of_nat(v___x_1559_);
v___x_1567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(v_pu_1517_, v_f_1518_, v_alts_1552_, v___x_1565_, v___x_1566_, v___x_1560_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec_ref(v_alts_1552_);
return v___x_1567_;
}
}
}
else
{
lean_dec_ref(v_alts_1552_);
lean_dec_ref(v_f_1518_);
return v___x_1554_;
}
}
else
{
lean_dec_ref(v_alts_1552_);
lean_dec(v_discr_1551_);
lean_dec_ref(v_f_1518_);
return v___x_1553_;
}
}
case 5:
{
lean_object* v_fvarId_1570_; lean_object* v___x_1571_; 
v_fvarId_1570_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1570_);
lean_dec_ref_known(v_c_1519_, 1);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1571_ = lean_apply_8(v_f_1518_, v_fvarId_1570_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
return v___x_1571_;
}
case 6:
{
lean_object* v_type_1572_; lean_object* v___x_1573_; 
v_type_1572_ = lean_ctor_get(v_c_1519_, 0);
lean_inc_ref(v_type_1572_);
lean_dec_ref_known(v_c_1519_, 1);
v___x_1573_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1518_, v_type_1572_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
return v___x_1573_;
}
case 7:
{
lean_object* v_fvarId_1574_; lean_object* v_y_1575_; lean_object* v_k_1576_; lean_object* v___x_1577_; 
v_fvarId_1574_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1574_);
v_y_1575_ = lean_ctor_get(v_c_1519_, 2);
lean_inc(v_y_1575_);
v_k_1576_ = lean_ctor_get(v_c_1519_, 3);
lean_inc_ref(v_k_1576_);
lean_dec_ref_known(v_c_1519_, 4);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1577_ = lean_apply_8(v_f_1518_, v_fvarId_1574_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v___x_1578_; 
lean_dec_ref_known(v___x_1577_, 1);
lean_inc_ref(v_f_1518_);
v___x_1578_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1518_, v_y_1575_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_dec_ref_known(v___x_1578_, 1);
v_c_1519_ = v_k_1576_;
goto _start;
}
else
{
lean_dec_ref(v_k_1576_);
lean_dec_ref(v_f_1518_);
return v___x_1578_;
}
}
else
{
lean_dec_ref(v_k_1576_);
lean_dec(v_y_1575_);
lean_dec_ref(v_f_1518_);
return v___x_1577_;
}
}
case 8:
{
lean_object* v_fvarId_1580_; lean_object* v_y_1581_; lean_object* v_k_1582_; lean_object* v___x_1583_; 
v_fvarId_1580_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1580_);
v_y_1581_ = lean_ctor_get(v_c_1519_, 2);
lean_inc(v_y_1581_);
v_k_1582_ = lean_ctor_get(v_c_1519_, 3);
lean_inc_ref(v_k_1582_);
lean_dec_ref_known(v_c_1519_, 4);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1583_ = lean_apply_8(v_f_1518_, v_fvarId_1580_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v___x_1584_; 
lean_dec_ref_known(v___x_1583_, 1);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1584_ = lean_apply_8(v_f_1518_, v_y_1581_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_dec_ref_known(v___x_1584_, 1);
v_c_1519_ = v_k_1582_;
goto _start;
}
else
{
lean_dec_ref(v_k_1582_);
lean_dec_ref(v_f_1518_);
return v___x_1584_;
}
}
else
{
lean_dec_ref(v_k_1582_);
lean_dec(v_y_1581_);
lean_dec_ref(v_f_1518_);
return v___x_1583_;
}
}
case 9:
{
lean_object* v_fvarId_1586_; lean_object* v_y_1587_; lean_object* v_ty_1588_; lean_object* v_k_1589_; lean_object* v___x_1590_; 
v_fvarId_1586_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1586_);
v_y_1587_ = lean_ctor_get(v_c_1519_, 3);
lean_inc(v_y_1587_);
v_ty_1588_ = lean_ctor_get(v_c_1519_, 4);
lean_inc_ref(v_ty_1588_);
v_k_1589_ = lean_ctor_get(v_c_1519_, 5);
lean_inc_ref(v_k_1589_);
lean_dec_ref_known(v_c_1519_, 6);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1590_ = lean_apply_8(v_f_1518_, v_fvarId_1586_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v___x_1591_; 
lean_dec_ref_known(v___x_1590_, 1);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1591_ = lean_apply_8(v_f_1518_, v_y_1587_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v___x_1592_; 
lean_dec_ref_known(v___x_1591_, 1);
lean_inc_ref(v_f_1518_);
v___x_1592_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1518_, v_ty_1588_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_dec_ref_known(v___x_1592_, 1);
v_c_1519_ = v_k_1589_;
goto _start;
}
else
{
lean_dec_ref(v_k_1589_);
lean_dec_ref(v_f_1518_);
return v___x_1592_;
}
}
else
{
lean_dec_ref(v_k_1589_);
lean_dec_ref(v_ty_1588_);
lean_dec_ref(v_f_1518_);
return v___x_1591_;
}
}
else
{
lean_dec_ref(v_k_1589_);
lean_dec_ref(v_ty_1588_);
lean_dec(v_y_1587_);
lean_dec_ref(v_f_1518_);
return v___x_1590_;
}
}
case 10:
{
lean_object* v_fvarId_1594_; lean_object* v_k_1595_; lean_object* v___x_1596_; 
v_fvarId_1594_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1594_);
v_k_1595_ = lean_ctor_get(v_c_1519_, 2);
lean_inc_ref(v_k_1595_);
lean_dec_ref_known(v_c_1519_, 3);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1596_ = lean_apply_8(v_f_1518_, v_fvarId_1594_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_dec_ref_known(v___x_1596_, 1);
v_c_1519_ = v_k_1595_;
goto _start;
}
else
{
lean_dec_ref(v_k_1595_);
lean_dec_ref(v_f_1518_);
return v___x_1596_;
}
}
case 11:
{
lean_object* v_fvarId_1598_; lean_object* v_k_1599_; lean_object* v___x_1600_; 
v_fvarId_1598_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1598_);
v_k_1599_ = lean_ctor_get(v_c_1519_, 2);
lean_inc_ref(v_k_1599_);
lean_dec_ref_known(v_c_1519_, 3);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1600_ = lean_apply_8(v_f_1518_, v_fvarId_1598_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_dec_ref_known(v___x_1600_, 1);
v_c_1519_ = v_k_1599_;
goto _start;
}
else
{
lean_dec_ref(v_k_1599_);
lean_dec_ref(v_f_1518_);
return v___x_1600_;
}
}
case 12:
{
lean_object* v_fvarId_1602_; lean_object* v_k_1603_; lean_object* v___x_1604_; 
v_fvarId_1602_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1602_);
v_k_1603_ = lean_ctor_get(v_c_1519_, 3);
lean_inc_ref(v_k_1603_);
lean_dec_ref_known(v_c_1519_, 4);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1604_ = lean_apply_8(v_f_1518_, v_fvarId_1602_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_dec_ref_known(v___x_1604_, 1);
v_c_1519_ = v_k_1603_;
goto _start;
}
else
{
lean_dec_ref(v_k_1603_);
lean_dec_ref(v_f_1518_);
return v___x_1604_;
}
}
case 13:
{
lean_object* v_fvarId_1606_; lean_object* v_k_1607_; lean_object* v___x_1608_; 
v_fvarId_1606_ = lean_ctor_get(v_c_1519_, 0);
lean_inc(v_fvarId_1606_);
v_k_1607_ = lean_ctor_get(v_c_1519_, 1);
lean_inc_ref(v_k_1607_);
lean_dec_ref_known(v_c_1519_, 2);
lean_inc_ref(v_f_1518_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc(v___y_1520_);
v___x_1608_ = lean_apply_8(v_f_1518_, v_fvarId_1606_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_dec_ref_known(v___x_1608_, 1);
v_c_1519_ = v_k_1607_;
goto _start;
}
else
{
lean_dec_ref(v_k_1607_);
lean_dec_ref(v_f_1518_);
return v___x_1608_;
}
}
default: 
{
lean_object* v_decl_1610_; lean_object* v_k_1611_; lean_object* v_params_1612_; lean_object* v_type_1613_; lean_object* v_value_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v_decl_1610_ = lean_ctor_get(v_c_1519_, 0);
lean_inc_ref(v_decl_1610_);
v_k_1611_ = lean_ctor_get(v_c_1519_, 1);
lean_inc_ref(v_k_1611_);
lean_dec_ref(v_c_1519_);
v_params_1612_ = lean_ctor_get(v_decl_1610_, 2);
lean_inc_ref(v_params_1612_);
v_type_1613_ = lean_ctor_get(v_decl_1610_, 3);
lean_inc_ref(v_type_1613_);
v_value_1614_ = lean_ctor_get(v_decl_1610_, 4);
lean_inc_ref(v_value_1614_);
lean_dec_ref(v_decl_1610_);
v___x_1615_ = lean_unsigned_to_nat(0u);
v___x_1616_ = lean_array_get_size(v_params_1612_);
v___x_1617_ = lean_nat_dec_lt(v___x_1615_, v___x_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
lean_dec_ref(v_params_1612_);
lean_inc_ref(v_f_1518_);
v___x_1618_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1518_, v_type_1613_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v___x_1619_; 
lean_dec_ref_known(v___x_1618_, 1);
lean_inc_ref(v_f_1518_);
v___x_1619_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_1517_, v_f_1518_, v_value_1614_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_dec_ref_known(v___x_1619_, 1);
v_c_1519_ = v_k_1611_;
goto _start;
}
else
{
lean_dec_ref(v_k_1611_);
lean_dec_ref(v_f_1518_);
return v___x_1619_;
}
}
else
{
lean_dec_ref(v_value_1614_);
lean_dec_ref(v_k_1611_);
lean_dec_ref(v_f_1518_);
return v___x_1618_;
}
}
else
{
lean_object* v___x_1621_; size_t v___x_1622_; size_t v___x_1623_; lean_object* v___x_1624_; 
v___x_1621_ = lean_box(0);
v___x_1622_ = ((size_t)0ULL);
v___x_1623_ = lean_usize_of_nat(v___x_1616_);
lean_inc_ref(v_f_1518_);
v___x_1624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(v_pu_1517_, v_f_1518_, v_params_1612_, v___x_1622_, v___x_1623_, v___x_1621_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec_ref(v_params_1612_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v___x_1625_; 
lean_dec_ref_known(v___x_1624_, 1);
lean_inc_ref(v_f_1518_);
v___x_1625_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1518_, v_type_1613_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v___x_1626_; 
lean_dec_ref_known(v___x_1625_, 1);
lean_inc_ref(v_f_1518_);
v___x_1626_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_1517_, v_f_1518_, v_value_1614_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_dec_ref_known(v___x_1626_, 1);
v_c_1519_ = v_k_1611_;
goto _start;
}
else
{
lean_dec_ref(v_k_1611_);
lean_dec_ref(v_f_1518_);
return v___x_1626_;
}
}
else
{
lean_dec_ref(v_value_1614_);
lean_dec_ref(v_k_1611_);
lean_dec_ref(v_f_1518_);
return v___x_1625_;
}
}
else
{
lean_dec_ref(v_value_1614_);
lean_dec_ref(v_type_1613_);
lean_dec_ref(v_k_1611_);
lean_dec_ref(v_f_1518_);
return v___x_1624_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0(uint8_t v_pu_1628_, lean_object* v_f_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_1628_, v_f_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___boxed(lean_object* v_pu_1639_, lean_object* v_f_1640_, lean_object* v_as_1641_, lean_object* v_i_1642_, lean_object* v_stop_1643_, lean_object* v_b_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
uint8_t v_pu_boxed_1652_; size_t v_i_boxed_1653_; size_t v_stop_boxed_1654_; lean_object* v_res_1655_; 
v_pu_boxed_1652_ = lean_unbox(v_pu_1639_);
v_i_boxed_1653_ = lean_unbox_usize(v_i_1642_);
lean_dec(v_i_1642_);
v_stop_boxed_1654_ = lean_unbox_usize(v_stop_1643_);
lean_dec(v_stop_1643_);
v_res_1655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(v_pu_boxed_1652_, v_f_1640_, v_as_1641_, v_i_boxed_1653_, v_stop_boxed_1654_, v_b_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v_as_1641_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1___boxed(lean_object* v_pu_1656_, lean_object* v_f_1657_, lean_object* v_c_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
uint8_t v_pu_boxed_1666_; lean_object* v_res_1667_; 
v_pu_boxed_1666_ = lean_unbox(v_pu_1656_);
v_res_1667_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_boxed_1666_, v_f_1657_, v_c_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec(v___y_1659_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(lean_object* v___x_1668_, lean_object* v_as_1669_, size_t v_i_1670_, size_t v_stop_1671_, lean_object* v_b_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
uint8_t v___x_1680_; 
v___x_1680_ = lean_usize_dec_eq(v_i_1670_, v_stop_1671_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
lean_inc(v___x_1668_);
v___x_1681_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed), 9, 1);
lean_closure_set(v___x_1681_, 0, v___x_1668_);
v___x_1682_ = lean_array_uget_borrowed(v_as_1669_, v_i_1670_);
lean_inc(v___x_1682_);
v___x_1683_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v___x_1681_, v___x_1682_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; size_t v___x_1685_; size_t v___x_1686_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = ((size_t)1ULL);
v___x_1686_ = lean_usize_add(v_i_1670_, v___x_1685_);
v_i_1670_ = v___x_1686_;
v_b_1672_ = v_a_1684_;
goto _start;
}
else
{
lean_dec(v___x_1668_);
return v___x_1683_;
}
}
else
{
lean_object* v___x_1688_; 
lean_dec(v___x_1668_);
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v_b_1672_);
return v___x_1688_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2___boxed(lean_object* v___x_1689_, lean_object* v_as_1690_, lean_object* v_i_1691_, lean_object* v_stop_1692_, lean_object* v_b_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
size_t v_i_boxed_1701_; size_t v_stop_boxed_1702_; lean_object* v_res_1703_; 
v_i_boxed_1701_ = lean_unbox_usize(v_i_1691_);
lean_dec(v_i_1691_);
v_stop_boxed_1702_ = lean_unbox_usize(v_stop_1692_);
lean_dec(v_stop_1692_);
v_res_1703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(v___x_1689_, v_as_1690_, v_i_boxed_1701_, v_stop_boxed_1702_, v_b_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v_as_1690_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(lean_object* v_alt_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
uint8_t v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = 0;
v___x_1713_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v_alt_1704_);
lean_inc(v___x_1713_);
v___x_1714_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed), 9, 1);
lean_closure_set(v___x_1714_, 0, v___x_1713_);
switch(lean_obj_tag(v_alt_1704_))
{
case 0:
{
lean_object* v_params_1715_; lean_object* v_code_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v_params_1715_ = lean_ctor_get(v_alt_1704_, 1);
lean_inc_ref(v_params_1715_);
v_code_1716_ = lean_ctor_get(v_alt_1704_, 2);
lean_inc_ref(v_code_1716_);
lean_dec_ref_known(v_alt_1704_, 3);
v___x_1717_ = lean_unsigned_to_nat(0u);
v___x_1718_ = lean_array_get_size(v_params_1715_);
v___x_1719_ = lean_nat_dec_lt(v___x_1717_, v___x_1718_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; 
lean_dec_ref(v_params_1715_);
lean_dec(v___x_1713_);
v___x_1720_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1712_, v___x_1714_, v_code_1716_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
return v___x_1720_;
}
else
{
lean_object* v___x_1721_; size_t v___x_1722_; size_t v___x_1723_; lean_object* v___x_1724_; 
v___x_1721_ = lean_box(0);
v___x_1722_ = ((size_t)0ULL);
v___x_1723_ = lean_usize_of_nat(v___x_1718_);
v___x_1724_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(v___x_1713_, v_params_1715_, v___x_1722_, v___x_1723_, v___x_1721_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
lean_dec_ref(v_params_1715_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v___x_1725_; 
lean_dec_ref_known(v___x_1724_, 1);
v___x_1725_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1712_, v___x_1714_, v_code_1716_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
return v___x_1725_;
}
else
{
lean_dec_ref(v_code_1716_);
lean_dec_ref(v___x_1714_);
return v___x_1724_;
}
}
}
case 1:
{
lean_object* v_code_1726_; lean_object* v___x_1727_; 
lean_dec(v___x_1713_);
v_code_1726_ = lean_ctor_get(v_alt_1704_, 1);
lean_inc_ref(v_code_1726_);
lean_dec_ref_known(v_alt_1704_, 2);
v___x_1727_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1712_, v___x_1714_, v_code_1726_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
return v___x_1727_;
}
default: 
{
lean_object* v_code_1728_; lean_object* v___x_1729_; 
lean_dec(v___x_1713_);
v_code_1728_ = lean_ctor_get(v_alt_1704_, 0);
lean_inc_ref(v_code_1728_);
lean_dec_ref_known(v_alt_1704_, 1);
v___x_1729_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1712_, v___x_1714_, v_code_1728_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
return v___x_1729_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt___boxed(lean_object* v_alt_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(v_alt_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
lean_dec(v_a_1732_);
lean_dec(v_a_1731_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0(uint8_t v_pu_1739_, lean_object* v_f_1740_, lean_object* v_param_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v_f_1740_, v_param_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___boxed(lean_object* v_pu_1750_, lean_object* v_f_1751_, lean_object* v_param_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
uint8_t v_pu_boxed_1760_; lean_object* v_res_1761_; 
v_pu_boxed_1760_ = lean_unbox(v_pu_1750_);
v_res_1761_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0(v_pu_boxed_1760_, v_f_1751_, v_param_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec(v___y_1753_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3(uint8_t v_pu_1762_, lean_object* v_alt_1763_, lean_object* v_f_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(v_alt_1763_, v_f_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___boxed(lean_object* v_pu_1773_, lean_object* v_alt_1774_, lean_object* v_f_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_){
_start:
{
uint8_t v_pu_boxed_1783_; lean_object* v_res_1784_; 
v_pu_boxed_1783_ = lean_unbox(v_pu_1773_);
v_res_1784_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3(v_pu_boxed_1783_, v_alt_1774_, v_f_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec(v___y_1776_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2(uint8_t v_pu_1785_, lean_object* v_f_1786_, lean_object* v_arg_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1786_, v_arg_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___boxed(lean_object* v_pu_1796_, lean_object* v_f_1797_, lean_object* v_arg_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v_pu_boxed_1806_; lean_object* v_res_1807_; 
v_pu_boxed_1806_ = lean_unbox(v_pu_1796_);
v_res_1807_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2(v_pu_boxed_1806_, v_f_1797_, v_arg_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec(v___y_1799_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(lean_object* v_as_1808_, size_t v_i_1809_, size_t v_stop_1810_, lean_object* v_b_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v___x_1819_; 
v___x_1819_ = lean_usize_dec_eq(v_i_1809_, v_stop_1810_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = lean_array_uget_borrowed(v_as_1808_, v_i_1809_);
lean_inc(v___x_1820_);
v___x_1821_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(v___x_1820_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; size_t v___x_1823_; size_t v___x_1824_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
v___x_1823_ = ((size_t)1ULL);
v___x_1824_ = lean_usize_add(v_i_1809_, v___x_1823_);
v_i_1809_ = v___x_1824_;
v_b_1811_ = v_a_1822_;
goto _start;
}
else
{
return v___x_1821_;
}
}
else
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_b_1811_);
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0___boxed(lean_object* v_as_1827_, lean_object* v_i_1828_, lean_object* v_stop_1829_, lean_object* v_b_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
size_t v_i_boxed_1838_; size_t v_stop_boxed_1839_; lean_object* v_res_1840_; 
v_i_boxed_1838_ = lean_unbox_usize(v_i_1828_);
lean_dec(v_i_1828_);
v_stop_boxed_1839_ = lean_unbox_usize(v_stop_1829_);
lean_dec(v_stop_1829_);
v_res_1840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(v_as_1827_, v_i_boxed_1838_, v_stop_boxed_1839_, v_b_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v_as_1827_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(lean_object* v_cs_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_alts_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; uint8_t v___x_1853_; 
v_alts_1849_ = lean_ctor_get(v_cs_1841_, 3);
v___x_1850_ = lean_unsigned_to_nat(0u);
v___x_1851_ = lean_array_get_size(v_alts_1849_);
v___x_1852_ = lean_box(0);
v___x_1853_ = lean_nat_dec_lt(v___x_1850_, v___x_1851_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1852_);
return v___x_1854_;
}
else
{
uint8_t v___x_1855_; 
v___x_1855_ = lean_nat_dec_le(v___x_1851_, v___x_1851_);
if (v___x_1855_ == 0)
{
if (v___x_1853_ == 0)
{
lean_object* v___x_1856_; 
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1852_);
return v___x_1856_;
}
else
{
size_t v___x_1857_; size_t v___x_1858_; lean_object* v___x_1859_; 
v___x_1857_ = ((size_t)0ULL);
v___x_1858_ = lean_usize_of_nat(v___x_1851_);
v___x_1859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(v_alts_1849_, v___x_1857_, v___x_1858_, v___x_1852_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
return v___x_1859_;
}
}
else
{
size_t v___x_1860_; size_t v___x_1861_; lean_object* v___x_1862_; 
v___x_1860_ = ((size_t)0ULL);
v___x_1861_ = lean_usize_of_nat(v___x_1851_);
v___x_1862_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(v_alts_1849_, v___x_1860_, v___x_1861_, v___x_1852_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
return v___x_1862_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases___boxed(lean_object* v_cs_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(v_cs_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_);
lean_dec(v_a_1869_);
lean_dec_ref(v_a_1868_);
lean_dec(v_a_1867_);
lean_dec_ref(v_a_1866_);
lean_dec(v_a_1865_);
lean_dec(v_a_1864_);
lean_dec_ref(v_cs_1863_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg(lean_object* v_as_x27_1872_, lean_object* v_b_1873_){
_start:
{
if (lean_obj_tag(v_as_x27_1872_) == 0)
{
return v_b_1873_;
}
else
{
lean_object* v_head_1874_; lean_object* v_tail_1875_; lean_object* v_fst_1876_; lean_object* v_snd_1877_; lean_object* v_r_1878_; 
v_head_1874_ = lean_ctor_get(v_as_x27_1872_, 0);
v_tail_1875_ = lean_ctor_get(v_as_x27_1872_, 1);
v_fst_1876_ = lean_ctor_get(v_head_1874_, 0);
v_snd_1877_ = lean_ctor_get(v_head_1874_, 1);
lean_inc(v_snd_1877_);
lean_inc(v_fst_1876_);
v_r_1878_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_b_1873_, v_fst_1876_, v_snd_1877_);
v_as_x27_1872_ = v_tail_1875_;
v_b_1873_ = v_r_1878_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg___boxed(lean_object* v_as_x27_1880_, lean_object* v_b_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg(v_as_x27_1880_, v_b_1881_);
lean_dec(v_as_x27_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2(lean_object* v_m_1883_, lean_object* v_l_1884_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg(v_l_1884_, v_m_1883_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___boxed(lean_object* v_m_1886_, lean_object* v_l_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2(v_m_1886_, v_l_1887_);
lean_dec(v_l_1887_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1(lean_object* v_a_1889_, lean_object* v_a_1890_){
_start:
{
if (lean_obj_tag(v_a_1889_) == 0)
{
lean_object* v___x_1891_; 
v___x_1891_ = l_List_reverse___redArg(v_a_1890_);
return v___x_1891_;
}
else
{
lean_object* v_head_1892_; lean_object* v_tail_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1904_; 
v_head_1892_ = lean_ctor_get(v_a_1889_, 0);
v_tail_1893_ = lean_ctor_get(v_a_1889_, 1);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_a_1889_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1895_ = v_a_1889_;
v_isShared_1896_ = v_isSharedCheck_1904_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_tail_1893_);
lean_inc(v_head_1892_);
lean_dec(v_a_1889_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1904_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1897_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_1892_);
lean_dec(v_head_1892_);
v___x_1898_ = lean_box(2);
v___x_1899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 1, v_a_1890_);
lean_ctor_set(v___x_1895_, 0, v___x_1899_);
v___x_1901_ = v___x_1895_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1899_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_a_1890_);
v___x_1901_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
v_a_1889_ = v_tail_1893_;
v_a_1890_ = v___x_1901_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg(lean_object* v_x_1905_, lean_object* v_x_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
if (lean_obj_tag(v_x_1906_) == 0)
{
lean_object* v___x_1912_; 
v___x_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1912_, 0, v_x_1905_);
return v___x_1912_;
}
else
{
lean_object* v_head_1913_; lean_object* v_tail_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1976_; 
v_head_1913_ = lean_ctor_get(v_x_1906_, 0);
v_tail_1914_ = lean_ctor_get(v_x_1906_, 1);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_x_1906_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1916_ = v_x_1906_;
v_isShared_1917_ = v_isSharedCheck_1976_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_tail_1914_);
lean_inc(v_head_1913_);
lean_dec(v_x_1906_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1976_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v_fst_1918_; lean_object* v_snd_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1975_; 
v_fst_1918_ = lean_ctor_get(v_x_1905_, 0);
v_snd_1919_ = lean_ctor_get(v_x_1905_, 1);
v_isSharedCheck_1975_ = !lean_is_exclusive(v_x_1905_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1921_ = v_x_1905_;
v_isShared_1922_ = v_isSharedCheck_1975_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_snd_1919_);
lean_inc(v_fst_1918_);
lean_dec(v_x_1905_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1975_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; 
if (lean_obj_tag(v_head_1913_) == 0)
{
lean_object* v_decl_1956_; lean_object* v___x_1957_; 
v_decl_1956_ = lean_ctor_get(v_head_1913_, 0);
lean_inc_ref(v_decl_1956_);
v___x_1957_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(v_decl_1956_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; uint8_t v___x_1959_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = lean_unbox(v_a_1958_);
lean_dec(v_a_1958_);
if (v___x_1959_ == 0)
{
lean_del_object(v___x_1916_);
v___y_1924_ = v___y_1907_;
v___y_1925_ = v___y_1908_;
v___y_1926_ = v___y_1909_;
v___y_1927_ = v___y_1910_;
goto v___jp_1923_;
}
else
{
lean_object* v_fvarId_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1964_; 
lean_inc_ref(v_decl_1956_);
lean_dec_ref_known(v_head_1913_, 1);
lean_del_object(v___x_1921_);
v_fvarId_1960_ = lean_ctor_get(v_decl_1956_, 0);
lean_inc(v_fvarId_1960_);
lean_dec_ref(v_decl_1956_);
v___x_1961_ = lean_box(2);
v___x_1962_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_1918_, v_fvarId_1960_, v___x_1961_);
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 0);
lean_ctor_set(v___x_1916_, 1, v_snd_1919_);
lean_ctor_set(v___x_1916_, 0, v___x_1962_);
v___x_1964_ = v___x_1916_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1966_, 1, v_snd_1919_);
v___x_1964_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
v_x_1905_ = v___x_1964_;
v_x_1906_ = v_tail_1914_;
goto _start;
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec_ref_known(v_head_1913_, 1);
lean_del_object(v___x_1921_);
lean_dec(v_snd_1919_);
lean_dec(v_fst_1918_);
lean_del_object(v___x_1916_);
lean_dec(v_tail_1914_);
v_a_1967_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1957_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1957_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
else
{
lean_del_object(v___x_1916_);
v___y_1924_ = v___y_1907_;
v___y_1925_ = v___y_1908_;
v___y_1926_ = v___y_1909_;
v___y_1927_ = v___y_1910_;
goto v___jp_1923_;
}
v___jp_1923_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1928_ = lean_st_ref_get(v___y_1927_);
lean_dec(v___x_1928_);
v___x_1929_ = lean_st_mk_ref(v_snd_1919_);
lean_inc(v_head_1913_);
v___x_1930_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(v_head_1913_, v___x_1929_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = lean_st_ref_get(v___x_1929_);
lean_dec(v___x_1929_);
v___x_1933_ = lean_unbox(v_a_1931_);
lean_dec(v_a_1931_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1938_; 
v___x_1934_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_1913_);
lean_dec(v_head_1913_);
v___x_1935_ = lean_box(3);
v___x_1936_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_1918_, v___x_1934_, v___x_1935_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 1, v___x_1932_);
lean_ctor_set(v___x_1921_, 0, v___x_1936_);
v___x_1938_ = v___x_1921_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1936_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v___x_1932_);
v___x_1938_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
v_x_1905_ = v___x_1938_;
v_x_1906_ = v_tail_1914_;
goto _start;
}
}
else
{
lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1941_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_1913_);
lean_dec(v_head_1913_);
v___x_1942_ = lean_box(2);
v___x_1943_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_1918_, v___x_1941_, v___x_1942_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 1, v___x_1932_);
lean_ctor_set(v___x_1921_, 0, v___x_1943_);
v___x_1945_ = v___x_1921_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1943_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v___x_1932_);
v___x_1945_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
v_x_1905_ = v___x_1945_;
v_x_1906_ = v_tail_1914_;
goto _start;
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec(v___x_1929_);
lean_del_object(v___x_1921_);
lean_dec(v_fst_1918_);
lean_dec(v_tail_1914_);
lean_dec(v_head_1913_);
v_a_1948_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1930_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1930_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg___boxed(lean_object* v_x_1977_, lean_object* v_x_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg(v_x_1977_, v_x_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
return v_res_1984_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1985_ = lean_box(0);
v___x_1986_ = lean_unsigned_to_nat(16u);
v___x_1987_ = lean_mk_array(v___x_1986_, v___x_1985_);
return v___x_1987_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1988_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0, &l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0);
v___x_1989_ = lean_unsigned_to_nat(0u);
v___x_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1989_);
lean_ctor_set(v___x_1990_, 1, v___x_1988_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(lean_object* v_cs_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_){
_start:
{
lean_object* v_map_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v_typeName_2033_; lean_object* v_discr_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; uint8_t v___y_2047_; lean_object* v___x_2067_; uint8_t v___x_2068_; 
v_typeName_2033_ = lean_ctor_get(v_cs_2000_, 0);
v_discr_2034_ = lean_ctor_get(v_cs_2000_, 2);
v___x_2035_ = l_List_lengthTR___redArg(v_a_2001_);
v___x_2036_ = lean_unsigned_to_nat(0u);
v___x_2037_ = lean_unsigned_to_nat(4u);
v___x_2038_ = lean_nat_mul(v___x_2035_, v___x_2037_);
lean_dec(v___x_2035_);
v___x_2039_ = lean_unsigned_to_nat(3u);
v___x_2040_ = lean_nat_div(v___x_2038_, v___x_2039_);
lean_dec(v___x_2038_);
v___x_2041_ = l_Nat_nextPowerOfTwo(v___x_2040_);
lean_dec(v___x_2040_);
v___x_2042_ = lean_box(0);
v___x_2043_ = lean_mk_array(v___x_2041_, v___x_2042_);
v___x_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2036_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1, &l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1);
v___x_2067_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4));
v___x_2068_ = lean_name_eq(v_typeName_2033_, v___x_2067_);
if (v___x_2068_ == 0)
{
lean_object* v___x_2069_; uint8_t v___x_2070_; 
v___x_2069_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6));
v___x_2070_ = lean_name_eq(v_typeName_2033_, v___x_2069_);
v___y_2047_ = v___x_2070_;
goto v___jp_2046_;
}
else
{
v___y_2047_ = v___x_2068_;
goto v___jp_2046_;
}
v___jp_2007_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = lean_st_mk_ref(v_map_2008_);
v___x_2015_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(v_cs_2000_, v___x_2014_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec_ref(v_cs_2000_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2023_; 
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2023_ == 0)
{
lean_object* v_unused_2024_; 
v_unused_2024_ = lean_ctor_get(v___x_2015_, 0);
lean_dec(v_unused_2024_);
v___x_2017_ = v___x_2015_;
v_isShared_2018_ = v_isSharedCheck_2023_;
goto v_resetjp_2016_;
}
else
{
lean_dec(v___x_2015_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2023_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2019_; lean_object* v___x_2021_; 
v___x_2019_ = lean_st_ref_get(v___x_2014_);
lean_dec(v___x_2014_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v___x_2019_);
v___x_2021_ = v___x_2017_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec(v___x_2014_);
v_a_2025_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2015_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2015_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
v___jp_2046_:
{
if (v___y_2047_ == 0)
{
lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2044_);
lean_ctor_set(v___x_2048_, 1, v___x_2045_);
lean_inc(v_a_2001_);
v___x_2049_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg(v___x_2048_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v_fst_2051_; uint8_t v___x_2052_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v_fst_2051_ = lean_ctor_get(v_a_2050_, 0);
lean_inc(v_fst_2051_);
lean_dec(v_a_2050_);
v___x_2052_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_fst_2051_, v_discr_2034_);
if (v___x_2052_ == 0)
{
v_map_2008_ = v_fst_2051_;
v___y_2009_ = v_a_2001_;
v___y_2010_ = v_a_2002_;
v___y_2011_ = v_a_2003_;
v___y_2012_ = v_a_2004_;
v___y_2013_ = v_a_2005_;
goto v___jp_2007_;
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = lean_box(2);
lean_inc(v_discr_2034_);
v___x_2054_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_2051_, v_discr_2034_, v___x_2053_);
v_map_2008_ = v___x_2054_;
v___y_2009_ = v_a_2001_;
v___y_2010_ = v_a_2002_;
v___y_2011_ = v_a_2003_;
v___y_2012_ = v_a_2004_;
v___y_2013_ = v_a_2005_;
goto v___jp_2007_;
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec_ref(v_cs_2000_);
v_a_2055_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2049_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2049_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
lean_dec_ref_known(v___x_2044_, 2);
lean_dec_ref(v_cs_2000_);
v___x_2063_ = lean_box(0);
lean_inc(v_a_2001_);
v___x_2064_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1(v_a_2001_, v___x_2063_);
v___x_2065_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg(v___x_2064_, v___x_2045_);
lean_dec(v___x_2064_);
v___x_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
return v___x_2066_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___boxed(lean_object* v_cs_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(v_cs_2071_, v_a_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
lean_dec(v_a_2074_);
lean_dec_ref(v_a_2073_);
lean_dec(v_a_2072_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0(lean_object* v_x_2079_, lean_object* v_x_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
lean_object* v___x_2087_; 
v___x_2087_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___redArg(v_x_2079_, v_x_2080_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0___boxed(lean_object* v_x_2088_, lean_object* v_x_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0(v_x_2088_, v_x_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
lean_dec(v___y_2090_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2(lean_object* v_as_2097_, lean_object* v_as_x27_2098_, lean_object* v_b_2099_, lean_object* v_a_2100_){
_start:
{
lean_object* v___x_2101_; 
v___x_2101_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___redArg(v_as_x27_2098_, v_b_2099_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2___boxed(lean_object* v_as_2102_, lean_object* v_as_x27_2103_, lean_object* v_b_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2_spec__2(v_as_2102_, v_as_x27_2103_, v_b_2104_, v_a_2105_);
lean_dec(v_as_x27_2103_);
lean_dec(v_as_2102_);
return v_res_2106_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(lean_object* v_a_2107_, lean_object* v_x_2108_){
_start:
{
if (lean_obj_tag(v_x_2108_) == 0)
{
uint8_t v___x_2109_; 
v___x_2109_ = 0;
return v___x_2109_;
}
else
{
lean_object* v_key_2110_; lean_object* v_tail_2111_; uint8_t v___x_2112_; 
v_key_2110_ = lean_ctor_get(v_x_2108_, 0);
v_tail_2111_ = lean_ctor_get(v_x_2108_, 2);
v___x_2112_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_key_2110_, v_a_2107_);
if (v___x_2112_ == 0)
{
v_x_2108_ = v_tail_2111_;
goto _start;
}
else
{
return v___x_2112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg___boxed(lean_object* v_a_2114_, lean_object* v_x_2115_){
_start:
{
uint8_t v_res_2116_; lean_object* v_r_2117_; 
v_res_2116_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(v_a_2114_, v_x_2115_);
lean_dec(v_x_2115_);
lean_dec(v_a_2114_);
v_r_2117_ = lean_box(v_res_2116_);
return v_r_2117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(lean_object* v_a_2118_, lean_object* v_b_2119_, lean_object* v_x_2120_){
_start:
{
if (lean_obj_tag(v_x_2120_) == 0)
{
lean_dec(v_b_2119_);
lean_dec(v_a_2118_);
return v_x_2120_;
}
else
{
lean_object* v_key_2121_; lean_object* v_value_2122_; lean_object* v_tail_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2135_; 
v_key_2121_ = lean_ctor_get(v_x_2120_, 0);
v_value_2122_ = lean_ctor_get(v_x_2120_, 1);
v_tail_2123_ = lean_ctor_get(v_x_2120_, 2);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_x_2120_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2125_ = v_x_2120_;
v_isShared_2126_ = v_isSharedCheck_2135_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_tail_2123_);
lean_inc(v_value_2122_);
lean_inc(v_key_2121_);
lean_dec(v_x_2120_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2135_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
uint8_t v___x_2127_; 
v___x_2127_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_key_2121_, v_a_2118_);
if (v___x_2127_ == 0)
{
lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2128_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(v_a_2118_, v_b_2119_, v_tail_2123_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 2, v___x_2128_);
v___x_2130_ = v___x_2125_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_key_2121_);
lean_ctor_set(v_reuseFailAlloc_2131_, 1, v_value_2122_);
lean_ctor_set(v_reuseFailAlloc_2131_, 2, v___x_2128_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
else
{
lean_object* v___x_2133_; 
lean_dec(v_value_2122_);
lean_dec(v_key_2121_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v_b_2119_);
lean_ctor_set(v___x_2125_, 0, v_a_2118_);
v___x_2133_ = v___x_2125_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2118_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_b_2119_);
lean_ctor_set(v_reuseFailAlloc_2134_, 2, v_tail_2123_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_2136_, lean_object* v_x_2137_){
_start:
{
if (lean_obj_tag(v_x_2137_) == 0)
{
return v_x_2136_;
}
else
{
lean_object* v_key_2138_; lean_object* v_value_2139_; lean_object* v_tail_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2163_; 
v_key_2138_ = lean_ctor_get(v_x_2137_, 0);
v_value_2139_ = lean_ctor_get(v_x_2137_, 1);
v_tail_2140_ = lean_ctor_get(v_x_2137_, 2);
v_isSharedCheck_2163_ = !lean_is_exclusive(v_x_2137_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2142_ = v_x_2137_;
v_isShared_2143_ = v_isSharedCheck_2163_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_tail_2140_);
lean_inc(v_value_2139_);
lean_inc(v_key_2138_);
lean_dec(v_x_2137_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2163_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2144_; uint64_t v___x_2145_; uint64_t v___x_2146_; uint64_t v___x_2147_; uint64_t v_fold_2148_; uint64_t v___x_2149_; uint64_t v___x_2150_; uint64_t v___x_2151_; size_t v___x_2152_; size_t v___x_2153_; size_t v___x_2154_; size_t v___x_2155_; size_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2159_; 
v___x_2144_ = lean_array_get_size(v_x_2136_);
v___x_2145_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_key_2138_);
v___x_2146_ = 32ULL;
v___x_2147_ = lean_uint64_shift_right(v___x_2145_, v___x_2146_);
v_fold_2148_ = lean_uint64_xor(v___x_2145_, v___x_2147_);
v___x_2149_ = 16ULL;
v___x_2150_ = lean_uint64_shift_right(v_fold_2148_, v___x_2149_);
v___x_2151_ = lean_uint64_xor(v_fold_2148_, v___x_2150_);
v___x_2152_ = lean_uint64_to_usize(v___x_2151_);
v___x_2153_ = lean_usize_of_nat(v___x_2144_);
v___x_2154_ = ((size_t)1ULL);
v___x_2155_ = lean_usize_sub(v___x_2153_, v___x_2154_);
v___x_2156_ = lean_usize_land(v___x_2152_, v___x_2155_);
v___x_2157_ = lean_array_uget_borrowed(v_x_2136_, v___x_2156_);
lean_inc(v___x_2157_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 2, v___x_2157_);
v___x_2159_ = v___x_2142_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_key_2138_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v_value_2139_);
lean_ctor_set(v_reuseFailAlloc_2162_, 2, v___x_2157_);
v___x_2159_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2160_; 
v___x_2160_ = lean_array_uset(v_x_2136_, v___x_2156_, v___x_2159_);
v_x_2136_ = v___x_2160_;
v_x_2137_ = v_tail_2140_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2164_, lean_object* v_source_2165_, lean_object* v_target_2166_){
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
v_target_2172_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(v_target_2166_, v_es_2169_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(lean_object* v_data_2176_){
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
v___x_2184_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(v___x_2180_, v_data_2176_, v___x_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(lean_object* v_m_2185_, lean_object* v_a_2186_, lean_object* v_b_2187_){
_start:
{
lean_object* v_size_2188_; lean_object* v_buckets_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2232_; 
v_size_2188_ = lean_ctor_get(v_m_2185_, 0);
v_buckets_2189_ = lean_ctor_get(v_m_2185_, 1);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_m_2185_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2191_ = v_m_2185_;
v_isShared_2192_ = v_isSharedCheck_2232_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_buckets_2189_);
lean_inc(v_size_2188_);
lean_dec(v_m_2185_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2232_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2193_; uint64_t v___x_2194_; uint64_t v___x_2195_; uint64_t v___x_2196_; uint64_t v_fold_2197_; uint64_t v___x_2198_; uint64_t v___x_2199_; uint64_t v___x_2200_; size_t v___x_2201_; size_t v___x_2202_; size_t v___x_2203_; size_t v___x_2204_; size_t v___x_2205_; lean_object* v_bkt_2206_; uint8_t v___x_2207_; 
v___x_2193_ = lean_array_get_size(v_buckets_2189_);
v___x_2194_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_a_2186_);
v___x_2195_ = 32ULL;
v___x_2196_ = lean_uint64_shift_right(v___x_2194_, v___x_2195_);
v_fold_2197_ = lean_uint64_xor(v___x_2194_, v___x_2196_);
v___x_2198_ = 16ULL;
v___x_2199_ = lean_uint64_shift_right(v_fold_2197_, v___x_2198_);
v___x_2200_ = lean_uint64_xor(v_fold_2197_, v___x_2199_);
v___x_2201_ = lean_uint64_to_usize(v___x_2200_);
v___x_2202_ = lean_usize_of_nat(v___x_2193_);
v___x_2203_ = ((size_t)1ULL);
v___x_2204_ = lean_usize_sub(v___x_2202_, v___x_2203_);
v___x_2205_ = lean_usize_land(v___x_2201_, v___x_2204_);
v_bkt_2206_ = lean_array_uget_borrowed(v_buckets_2189_, v___x_2205_);
v___x_2207_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(v_a_2186_, v_bkt_2206_);
if (v___x_2207_ == 0)
{
lean_object* v___x_2208_; lean_object* v_size_x27_2209_; lean_object* v___x_2210_; lean_object* v_buckets_x27_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; uint8_t v___x_2217_; 
v___x_2208_ = lean_unsigned_to_nat(1u);
v_size_x27_2209_ = lean_nat_add(v_size_2188_, v___x_2208_);
lean_dec(v_size_2188_);
lean_inc(v_bkt_2206_);
v___x_2210_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2210_, 0, v_a_2186_);
lean_ctor_set(v___x_2210_, 1, v_b_2187_);
lean_ctor_set(v___x_2210_, 2, v_bkt_2206_);
v_buckets_x27_2211_ = lean_array_uset(v_buckets_2189_, v___x_2205_, v___x_2210_);
v___x_2212_ = lean_unsigned_to_nat(4u);
v___x_2213_ = lean_nat_mul(v_size_x27_2209_, v___x_2212_);
v___x_2214_ = lean_unsigned_to_nat(3u);
v___x_2215_ = lean_nat_div(v___x_2213_, v___x_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_array_get_size(v_buckets_x27_2211_);
v___x_2217_ = lean_nat_dec_le(v___x_2215_, v___x_2216_);
lean_dec(v___x_2215_);
if (v___x_2217_ == 0)
{
lean_object* v_val_2218_; lean_object* v___x_2220_; 
v_val_2218_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(v_buckets_x27_2211_);
if (v_isShared_2192_ == 0)
{
lean_ctor_set(v___x_2191_, 1, v_val_2218_);
lean_ctor_set(v___x_2191_, 0, v_size_x27_2209_);
v___x_2220_ = v___x_2191_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_size_x27_2209_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v_val_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
else
{
lean_object* v___x_2223_; 
if (v_isShared_2192_ == 0)
{
lean_ctor_set(v___x_2191_, 1, v_buckets_x27_2211_);
lean_ctor_set(v___x_2191_, 0, v_size_x27_2209_);
v___x_2223_ = v___x_2191_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_size_x27_2209_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v_buckets_x27_2211_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
else
{
lean_object* v___x_2225_; lean_object* v_buckets_x27_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2230_; 
lean_inc(v_bkt_2206_);
v___x_2225_ = lean_box(0);
v_buckets_x27_2226_ = lean_array_uset(v_buckets_2189_, v___x_2205_, v___x_2225_);
v___x_2227_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(v_a_2186_, v_b_2187_, v_bkt_2206_);
v___x_2228_ = lean_array_uset(v_buckets_x27_2226_, v___x_2205_, v___x_2227_);
if (v_isShared_2192_ == 0)
{
lean_ctor_set(v___x_2191_, 1, v___x_2228_);
v___x_2230_ = v___x_2191_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_size_2188_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v___x_2228_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(lean_object* v_as_2233_, size_t v_i_2234_, size_t v_stop_2235_, lean_object* v_b_2236_){
_start:
{
uint8_t v___x_2237_; 
v___x_2237_ = lean_usize_dec_eq(v_i_2234_, v_stop_2235_);
if (v___x_2237_ == 0)
{
lean_object* v___x_2238_; size_t v___x_2239_; size_t v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2238_ = lean_box(0);
v___x_2239_ = ((size_t)1ULL);
v___x_2240_ = lean_usize_sub(v_i_2234_, v___x_2239_);
v___x_2241_ = lean_array_uget_borrowed(v_as_2233_, v___x_2240_);
v___x_2242_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v___x_2241_);
v___x_2243_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_b_2236_, v___x_2242_, v___x_2238_);
v_i_2234_ = v___x_2240_;
v_b_2236_ = v___x_2243_;
goto _start;
}
else
{
return v_b_2236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1___boxed(lean_object* v_as_2245_, lean_object* v_i_2246_, lean_object* v_stop_2247_, lean_object* v_b_2248_){
_start:
{
size_t v_i_boxed_2249_; size_t v_stop_boxed_2250_; lean_object* v_res_2251_; 
v_i_boxed_2249_ = lean_unbox_usize(v_i_2246_);
lean_dec(v_i_2246_);
v_stop_boxed_2250_ = lean_unbox_usize(v_stop_2247_);
lean_dec(v_stop_2247_);
v_res_2251_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(v_as_2245_, v_i_boxed_2249_, v_stop_boxed_2250_, v_b_2248_);
lean_dec_ref(v_as_2245_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(lean_object* v_cs_2252_){
_start:
{
lean_object* v_alts_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v_map_2268_; uint8_t v___x_2269_; 
v_alts_2253_ = lean_ctor_get(v_cs_2252_, 3);
v___x_2254_ = lean_array_get_size(v_alts_2253_);
v___x_2255_ = lean_unsigned_to_nat(1u);
v___x_2256_ = lean_nat_add(v___x_2254_, v___x_2255_);
v___x_2257_ = lean_unsigned_to_nat(0u);
v___x_2258_ = lean_unsigned_to_nat(4u);
v___x_2259_ = lean_nat_mul(v___x_2256_, v___x_2258_);
lean_dec(v___x_2256_);
v___x_2260_ = lean_unsigned_to_nat(3u);
v___x_2261_ = lean_nat_div(v___x_2259_, v___x_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = l_Nat_nextPowerOfTwo(v___x_2261_);
lean_dec(v___x_2261_);
v___x_2263_ = lean_box(0);
v___x_2264_ = lean_mk_array(v___x_2262_, v___x_2263_);
v___x_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2257_);
lean_ctor_set(v___x_2265_, 1, v___x_2264_);
v___x_2266_ = lean_box(2);
v___x_2267_ = lean_box(0);
v_map_2268_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v___x_2265_, v___x_2266_, v___x_2267_);
v___x_2269_ = lean_nat_dec_lt(v___x_2257_, v___x_2254_);
if (v___x_2269_ == 0)
{
return v_map_2268_;
}
else
{
size_t v___x_2270_; size_t v___x_2271_; lean_object* v___x_2272_; 
v___x_2270_ = lean_usize_of_nat(v___x_2254_);
v___x_2271_ = ((size_t)0ULL);
v___x_2272_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(v_alts_2253_, v___x_2270_, v___x_2271_, v_map_2268_);
return v___x_2272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms___boxed(lean_object* v_cs_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(v_cs_2273_);
lean_dec_ref(v_cs_2273_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0(lean_object* v_00_u03b2_2275_, lean_object* v_m_2276_, lean_object* v_a_2277_, lean_object* v_b_2278_){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_m_2276_, v_a_2277_, v_b_2278_);
return v___x_2279_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0(lean_object* v_00_u03b2_2280_, lean_object* v_a_2281_, lean_object* v_x_2282_){
_start:
{
uint8_t v___x_2283_; 
v___x_2283_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(v_a_2281_, v_x_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2284_, lean_object* v_a_2285_, lean_object* v_x_2286_){
_start:
{
uint8_t v_res_2287_; lean_object* v_r_2288_; 
v_res_2287_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0(v_00_u03b2_2284_, v_a_2285_, v_x_2286_);
lean_dec(v_x_2286_);
lean_dec(v_a_2285_);
v_r_2288_ = lean_box(v_res_2287_);
return v_r_2288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1(lean_object* v_00_u03b2_2289_, lean_object* v_data_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(v_data_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2(lean_object* v_00_u03b2_2292_, lean_object* v_a_2293_, lean_object* v_b_2294_, lean_object* v_x_2295_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(v_a_2293_, v_b_2294_, v_x_2295_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2297_, lean_object* v_i_2298_, lean_object* v_source_2299_, lean_object* v_target_2300_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(v_i_2298_, v_source_2299_, v_target_2300_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2302_, lean_object* v_x_2303_, lean_object* v_x_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(v_x_2303_, v_x_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(lean_object* v_fvar_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v___x_2309_; lean_object* v_decision_2310_; uint8_t v___x_2311_; 
v___x_2309_ = lean_st_ref_get(v_a_2307_);
v_decision_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc_ref(v_decision_2310_);
lean_dec(v___x_2309_);
v___x_2311_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_decision_2310_, v_fvar_2306_);
lean_dec_ref(v_decision_2310_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
lean_dec(v_fvar_2306_);
v___x_2312_ = lean_box(0);
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
return v___x_2313_;
}
else
{
lean_object* v___x_2314_; lean_object* v_decision_2315_; lean_object* v_newArms_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2328_; 
v___x_2314_ = lean_st_ref_take(v_a_2307_);
v_decision_2315_ = lean_ctor_get(v___x_2314_, 0);
v_newArms_2316_ = lean_ctor_get(v___x_2314_, 1);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2318_ = v___x_2314_;
v_isShared_2319_ = v_isSharedCheck_2328_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_newArms_2316_);
lean_inc(v_decision_2315_);
lean_dec(v___x_2314_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2328_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2324_; 
v___x_2320_ = lean_box(0);
v___x_2321_ = lean_box(2);
v___x_2322_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_decision_2315_, v_fvar_2306_, v___x_2321_);
if (v_isShared_2319_ == 0)
{
lean_ctor_set(v___x_2318_, 0, v___x_2322_);
v___x_2324_ = v___x_2318_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v___x_2322_);
lean_ctor_set(v_reuseFailAlloc_2327_, 1, v_newArms_2316_);
v___x_2324_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = lean_st_ref_put(v_a_2307_, v___x_2324_);
v___x_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2320_);
return v___x_2326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg___boxed(lean_object* v_fvar_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvar_2329_, v_a_2330_);
lean_dec(v_a_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar(lean_object* v_fvar_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvar_2333_, v_a_2334_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___boxed(lean_object* v_fvar_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_){
_start:
{
lean_object* v_res_2350_; 
v_res_2350_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar(v_fvar_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_);
lean_dec(v_a_2348_);
lean_dec_ref(v_a_2347_);
lean_dec(v_a_2346_);
lean_dec_ref(v_a_2345_);
lean_dec(v_a_2344_);
lean_dec(v_a_2343_);
return v_res_2350_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(lean_object* v_msg_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v_toApplicative_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2424_; 
v___x_2359_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0);
v___x_2360_ = l_StateRefT_x27_instMonad___redArg(v___x_2359_);
v_toApplicative_2361_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2424_ == 0)
{
lean_object* v_unused_2425_; 
v_unused_2425_ = lean_ctor_get(v___x_2360_, 1);
lean_dec(v_unused_2425_);
v___x_2363_ = v___x_2360_;
v_isShared_2364_ = v_isSharedCheck_2424_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_toApplicative_2361_);
lean_dec(v___x_2360_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2424_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v_toFunctor_2365_; lean_object* v_toSeq_2366_; lean_object* v_toSeqLeft_2367_; lean_object* v_toSeqRight_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2422_; 
v_toFunctor_2365_ = lean_ctor_get(v_toApplicative_2361_, 0);
v_toSeq_2366_ = lean_ctor_get(v_toApplicative_2361_, 2);
v_toSeqLeft_2367_ = lean_ctor_get(v_toApplicative_2361_, 3);
v_toSeqRight_2368_ = lean_ctor_get(v_toApplicative_2361_, 4);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_toApplicative_2361_);
if (v_isSharedCheck_2422_ == 0)
{
lean_object* v_unused_2423_; 
v_unused_2423_ = lean_ctor_get(v_toApplicative_2361_, 1);
lean_dec(v_unused_2423_);
v___x_2370_ = v_toApplicative_2361_;
v_isShared_2371_ = v_isSharedCheck_2422_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_toSeqRight_2368_);
lean_inc(v_toSeqLeft_2367_);
lean_inc(v_toSeq_2366_);
lean_inc(v_toFunctor_2365_);
lean_dec(v_toApplicative_2361_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2422_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___f_2372_; lean_object* v___f_2373_; lean_object* v___f_2374_; lean_object* v___f_2375_; lean_object* v___x_2376_; lean_object* v___f_2377_; lean_object* v___f_2378_; lean_object* v___f_2379_; lean_object* v___x_2381_; 
v___f_2372_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1));
v___f_2373_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_2365_);
v___f_2374_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2374_, 0, v_toFunctor_2365_);
v___f_2375_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2375_, 0, v_toFunctor_2365_);
v___x_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2376_, 0, v___f_2374_);
lean_ctor_set(v___x_2376_, 1, v___f_2375_);
v___f_2377_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2377_, 0, v_toSeqRight_2368_);
v___f_2378_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2378_, 0, v_toSeqLeft_2367_);
v___f_2379_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2379_, 0, v_toSeq_2366_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 4, v___f_2377_);
lean_ctor_set(v___x_2370_, 3, v___f_2378_);
lean_ctor_set(v___x_2370_, 2, v___f_2379_);
lean_ctor_set(v___x_2370_, 1, v___f_2372_);
lean_ctor_set(v___x_2370_, 0, v___x_2376_);
v___x_2381_ = v___x_2370_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2376_);
lean_ctor_set(v_reuseFailAlloc_2421_, 1, v___f_2372_);
lean_ctor_set(v_reuseFailAlloc_2421_, 2, v___f_2379_);
lean_ctor_set(v_reuseFailAlloc_2421_, 3, v___f_2378_);
lean_ctor_set(v_reuseFailAlloc_2421_, 4, v___f_2377_);
v___x_2381_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
lean_object* v___x_2383_; 
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 1, v___f_2373_);
lean_ctor_set(v___x_2363_, 0, v___x_2381_);
v___x_2383_ = v___x_2363_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2381_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v___f_2373_);
v___x_2383_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
lean_object* v___x_2384_; lean_object* v_toApplicative_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2418_; 
v___x_2384_ = l_StateRefT_x27_instMonad___redArg(v___x_2383_);
v_toApplicative_2385_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; 
v_unused_2419_ = lean_ctor_get(v___x_2384_, 1);
lean_dec(v_unused_2419_);
v___x_2387_ = v___x_2384_;
v_isShared_2388_ = v_isSharedCheck_2418_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_toApplicative_2385_);
lean_dec(v___x_2384_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2418_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v_toFunctor_2389_; lean_object* v_toSeq_2390_; lean_object* v_toSeqLeft_2391_; lean_object* v_toSeqRight_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2416_; 
v_toFunctor_2389_ = lean_ctor_get(v_toApplicative_2385_, 0);
v_toSeq_2390_ = lean_ctor_get(v_toApplicative_2385_, 2);
v_toSeqLeft_2391_ = lean_ctor_get(v_toApplicative_2385_, 3);
v_toSeqRight_2392_ = lean_ctor_get(v_toApplicative_2385_, 4);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_toApplicative_2385_);
if (v_isSharedCheck_2416_ == 0)
{
lean_object* v_unused_2417_; 
v_unused_2417_ = lean_ctor_get(v_toApplicative_2385_, 1);
lean_dec(v_unused_2417_);
v___x_2394_ = v_toApplicative_2385_;
v_isShared_2395_ = v_isSharedCheck_2416_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_toSeqRight_2392_);
lean_inc(v_toSeqLeft_2391_);
lean_inc(v_toSeq_2390_);
lean_inc(v_toFunctor_2389_);
lean_dec(v_toApplicative_2385_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2416_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___f_2396_; lean_object* v___f_2397_; lean_object* v___f_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; lean_object* v___f_2401_; lean_object* v___f_2402_; lean_object* v___f_2403_; lean_object* v___x_2405_; 
v___f_2396_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3));
v___f_2397_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_2389_);
v___f_2398_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2398_, 0, v_toFunctor_2389_);
v___f_2399_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2399_, 0, v_toFunctor_2389_);
v___x_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2400_, 0, v___f_2398_);
lean_ctor_set(v___x_2400_, 1, v___f_2399_);
v___f_2401_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2401_, 0, v_toSeqRight_2392_);
v___f_2402_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2402_, 0, v_toSeqLeft_2391_);
v___f_2403_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2403_, 0, v_toSeq_2390_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 4, v___f_2401_);
lean_ctor_set(v___x_2394_, 3, v___f_2402_);
lean_ctor_set(v___x_2394_, 2, v___f_2403_);
lean_ctor_set(v___x_2394_, 1, v___f_2396_);
lean_ctor_set(v___x_2394_, 0, v___x_2400_);
v___x_2405_ = v___x_2394_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2400_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___f_2396_);
lean_ctor_set(v_reuseFailAlloc_2415_, 2, v___f_2403_);
lean_ctor_set(v_reuseFailAlloc_2415_, 3, v___f_2402_);
lean_ctor_set(v_reuseFailAlloc_2415_, 4, v___f_2401_);
v___x_2405_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
lean_object* v___x_2407_; 
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___f_2397_);
lean_ctor_set(v___x_2387_, 0, v___x_2405_);
v___x_2407_ = v___x_2387_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2405_);
lean_ctor_set(v_reuseFailAlloc_2414_, 1, v___f_2397_);
v___x_2407_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_10720__overap_2412_; lean_object* v___x_2413_; 
v___x_2408_ = l_ReaderT_instMonad___redArg(v___x_2407_);
v___x_2409_ = l_StateRefT_x27_instMonad___redArg(v___x_2408_);
v___x_2410_ = lean_box(0);
v___x_2411_ = l_instInhabitedOfMonad___redArg(v___x_2409_, v___x_2410_);
v___x_10720__overap_2412_ = lean_panic_fn_borrowed(v___x_2411_, v_msg_2351_);
lean_dec(v___x_2411_);
lean_inc(v___y_2357_);
lean_inc_ref(v___y_2356_);
lean_inc(v___y_2355_);
lean_inc_ref(v___y_2354_);
lean_inc(v___y_2353_);
lean_inc(v___y_2352_);
v___x_2413_ = lean_apply_7(v___x_10720__overap_2412_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, lean_box(0));
return v___x_2413_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9___boxed(lean_object* v_msg_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v_msg_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec(v___y_2428_);
lean_dec(v___y_2427_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(lean_object* v_f_2435_, lean_object* v_e_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_ty_2445_; lean_object* v_body_2446_; uint8_t v___x_2449_; 
v___x_2449_ = l_Lean_Expr_hasFVar(v_e_2436_);
if (v___x_2449_ == 0)
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
lean_dec_ref(v_e_2436_);
lean_dec_ref(v_f_2435_);
v___x_2450_ = lean_box(0);
v___x_2451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2450_);
return v___x_2451_;
}
else
{
switch(lean_obj_tag(v_e_2436_))
{
case 1:
{
lean_object* v_fvarId_2452_; lean_object* v___x_2453_; 
v_fvarId_2452_ = lean_ctor_get(v_e_2436_, 0);
lean_inc(v_fvarId_2452_);
lean_dec_ref_known(v_e_2436_, 1);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
lean_inc(v___y_2440_);
lean_inc_ref(v___y_2439_);
lean_inc(v___y_2438_);
lean_inc(v___y_2437_);
v___x_2453_ = lean_apply_8(v_f_2435_, v_fvarId_2452_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, lean_box(0));
return v___x_2453_;
}
case 2:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
lean_dec_ref_known(v_e_2436_, 1);
lean_dec_ref(v_f_2435_);
v___x_2454_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_2455_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v___x_2454_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
return v___x_2455_;
}
case 5:
{
lean_object* v_fn_2456_; lean_object* v_arg_2457_; lean_object* v___x_2458_; 
v_fn_2456_ = lean_ctor_get(v_e_2436_, 0);
lean_inc_ref(v_fn_2456_);
v_arg_2457_ = lean_ctor_get(v_e_2436_, 1);
lean_inc_ref(v_arg_2457_);
lean_dec_ref_known(v_e_2436_, 2);
lean_inc_ref(v_f_2435_);
v___x_2458_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2435_, v_fn_2456_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_dec_ref_known(v___x_2458_, 1);
v_e_2436_ = v_arg_2457_;
goto _start;
}
else
{
lean_dec_ref(v_arg_2457_);
lean_dec_ref(v_f_2435_);
return v___x_2458_;
}
}
case 6:
{
lean_object* v_binderType_2460_; lean_object* v_body_2461_; 
v_binderType_2460_ = lean_ctor_get(v_e_2436_, 1);
lean_inc_ref(v_binderType_2460_);
v_body_2461_ = lean_ctor_get(v_e_2436_, 2);
lean_inc_ref(v_body_2461_);
lean_dec_ref_known(v_e_2436_, 3);
v_ty_2445_ = v_binderType_2460_;
v_body_2446_ = v_body_2461_;
goto v___jp_2444_;
}
case 7:
{
lean_object* v_binderType_2462_; lean_object* v_body_2463_; 
v_binderType_2462_ = lean_ctor_get(v_e_2436_, 1);
lean_inc_ref(v_binderType_2462_);
v_body_2463_ = lean_ctor_get(v_e_2436_, 2);
lean_inc_ref(v_body_2463_);
lean_dec_ref_known(v_e_2436_, 3);
v_ty_2445_ = v_binderType_2462_;
v_body_2446_ = v_body_2463_;
goto v___jp_2444_;
}
case 8:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_dec_ref_known(v_e_2436_, 4);
lean_dec_ref(v_f_2435_);
v___x_2464_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_2465_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v___x_2464_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
return v___x_2465_;
}
case 11:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
lean_dec_ref_known(v_e_2436_, 3);
lean_dec_ref(v_f_2435_);
v___x_2466_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_2467_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v___x_2466_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
return v___x_2467_;
}
default: 
{
lean_object* v___x_2468_; lean_object* v___x_2469_; 
lean_dec_ref(v_e_2436_);
lean_dec_ref(v_f_2435_);
v___x_2468_ = lean_box(0);
v___x_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2468_);
return v___x_2469_;
}
}
}
v___jp_2444_:
{
lean_object* v___x_2447_; 
lean_inc_ref(v_f_2435_);
v___x_2447_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2435_, v_ty_2445_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_dec_ref_known(v___x_2447_, 1);
v_e_2436_ = v_body_2446_;
goto _start;
}
else
{
lean_dec_ref(v_body_2446_);
lean_dec_ref(v_f_2435_);
return v___x_2447_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4___boxed(lean_object* v_f_2470_, lean_object* v_e_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2470_, v_e_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec(v___y_2472_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(lean_object* v_f_2480_, lean_object* v_arg_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
switch(lean_obj_tag(v_arg_2481_))
{
case 0:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
lean_dec_ref(v_f_2480_);
v___x_2489_ = lean_box(0);
v___x_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
return v___x_2490_;
}
case 1:
{
lean_object* v_fvarId_2491_; lean_object* v___x_2492_; 
v_fvarId_2491_ = lean_ctor_get(v_arg_2481_, 0);
lean_inc(v_fvarId_2491_);
lean_dec_ref_known(v_arg_2481_, 1);
lean_inc(v___y_2487_);
lean_inc_ref(v___y_2486_);
lean_inc(v___y_2485_);
lean_inc_ref(v___y_2484_);
lean_inc(v___y_2483_);
lean_inc(v___y_2482_);
v___x_2492_ = lean_apply_8(v_f_2480_, v_fvarId_2491_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, lean_box(0));
return v___x_2492_;
}
default: 
{
lean_object* v_expr_2493_; lean_object* v___x_2494_; 
v_expr_2493_ = lean_ctor_get(v_arg_2481_, 0);
lean_inc_ref(v_expr_2493_);
lean_dec_ref_known(v_arg_2481_, 1);
v___x_2494_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2480_, v_expr_2493_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
return v___x_2494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg___boxed(lean_object* v_f_2495_, lean_object* v_arg_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_2495_, v_arg_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec(v___y_2498_);
lean_dec(v___y_2497_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(lean_object* v_f_2505_, lean_object* v_param_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_type_2514_; lean_object* v___x_2515_; 
v_type_2514_ = lean_ctor_get(v_param_2506_, 2);
lean_inc_ref(v_type_2514_);
lean_dec_ref(v_param_2506_);
v___x_2515_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2505_, v_type_2514_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg___boxed(lean_object* v_f_2516_, lean_object* v_param_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(v_f_2516_, v_param_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2519_);
lean_dec(v___y_2518_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(uint8_t v_pu_2526_, lean_object* v_f_2527_, lean_object* v_as_2528_, size_t v_i_2529_, size_t v_stop_2530_, lean_object* v_b_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
uint8_t v___x_2539_; 
v___x_2539_ = lean_usize_dec_eq(v_i_2529_, v_stop_2530_);
if (v___x_2539_ == 0)
{
lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2540_ = lean_array_uget_borrowed(v_as_2528_, v_i_2529_);
lean_inc(v___x_2540_);
lean_inc_ref(v_f_2527_);
v___x_2541_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(v_f_2527_, v___x_2540_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; size_t v___x_2543_; size_t v___x_2544_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2541_, 1);
v___x_2543_ = ((size_t)1ULL);
v___x_2544_ = lean_usize_add(v_i_2529_, v___x_2543_);
v_i_2529_ = v___x_2544_;
v_b_2531_ = v_a_2542_;
goto _start;
}
else
{
lean_dec_ref(v_f_2527_);
return v___x_2541_;
}
}
else
{
lean_object* v___x_2546_; 
lean_dec_ref(v_f_2527_);
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v_b_2531_);
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6___boxed(lean_object* v_pu_2547_, lean_object* v_f_2548_, lean_object* v_as_2549_, lean_object* v_i_2550_, lean_object* v_stop_2551_, lean_object* v_b_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
uint8_t v_pu_boxed_2560_; size_t v_i_boxed_2561_; size_t v_stop_boxed_2562_; lean_object* v_res_2563_; 
v_pu_boxed_2560_ = lean_unbox(v_pu_2547_);
v_i_boxed_2561_ = lean_unbox_usize(v_i_2550_);
lean_dec(v_i_2550_);
v_stop_boxed_2562_ = lean_unbox_usize(v_stop_2551_);
lean_dec(v_stop_2551_);
v_res_2563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(v_pu_boxed_2560_, v_f_2548_, v_as_2549_, v_i_boxed_2561_, v_stop_boxed_2562_, v_b_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec(v___y_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v_as_2549_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(uint8_t v_pu_2564_, lean_object* v_f_2565_, lean_object* v_as_2566_, size_t v_i_2567_, size_t v_stop_2568_, lean_object* v_b_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
uint8_t v___x_2577_; 
v___x_2577_ = lean_usize_dec_eq(v_i_2567_, v_stop_2568_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = lean_array_uget_borrowed(v_as_2566_, v_i_2567_);
lean_inc(v___x_2578_);
lean_inc_ref(v_f_2565_);
v___x_2579_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_2565_, v___x_2578_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; size_t v___x_2581_; size_t v___x_2582_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
v___x_2581_ = ((size_t)1ULL);
v___x_2582_ = lean_usize_add(v_i_2567_, v___x_2581_);
v_i_2567_ = v___x_2582_;
v_b_2569_ = v_a_2580_;
goto _start;
}
else
{
lean_dec_ref(v_f_2565_);
return v___x_2579_;
}
}
else
{
lean_object* v___x_2584_; 
lean_dec_ref(v_f_2565_);
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_b_2569_);
return v___x_2584_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4___boxed(lean_object* v_pu_2585_, lean_object* v_f_2586_, lean_object* v_as_2587_, lean_object* v_i_2588_, lean_object* v_stop_2589_, lean_object* v_b_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
uint8_t v_pu_boxed_2598_; size_t v_i_boxed_2599_; size_t v_stop_boxed_2600_; lean_object* v_res_2601_; 
v_pu_boxed_2598_ = lean_unbox(v_pu_2585_);
v_i_boxed_2599_ = lean_unbox_usize(v_i_2588_);
lean_dec(v_i_2588_);
v_stop_boxed_2600_ = lean_unbox_usize(v_stop_2589_);
lean_dec(v_stop_2589_);
v_res_2601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_boxed_2598_, v_f_2586_, v_as_2587_, v_i_boxed_2599_, v_stop_boxed_2600_, v_b_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
lean_dec(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v_as_2587_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(uint8_t v_pu_2602_, lean_object* v_f_2603_, lean_object* v_e_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v_args_2613_; 
switch(lean_obj_tag(v_e_2604_))
{
case 2:
{
lean_object* v_struct_2622_; lean_object* v___x_2623_; 
v_struct_2622_ = lean_ctor_get(v_e_2604_, 2);
lean_inc(v_struct_2622_);
lean_dec_ref_known(v_e_2604_, 3);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2623_ = lean_apply_8(v_f_2603_, v_struct_2622_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2623_;
}
case 3:
{
lean_object* v_args_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; uint8_t v___x_2628_; 
v_args_2624_ = lean_ctor_get(v_e_2604_, 2);
lean_inc_ref(v_args_2624_);
lean_dec_ref_known(v_e_2604_, 3);
v___x_2625_ = lean_unsigned_to_nat(0u);
v___x_2626_ = lean_array_get_size(v_args_2624_);
v___x_2627_ = lean_box(0);
v___x_2628_ = lean_nat_dec_lt(v___x_2625_, v___x_2626_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; 
lean_dec_ref(v_args_2624_);
lean_dec_ref(v_f_2603_);
v___x_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
return v___x_2629_;
}
else
{
size_t v___x_2630_; size_t v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = ((size_t)0ULL);
v___x_2631_ = lean_usize_of_nat(v___x_2626_);
v___x_2632_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2602_, v_f_2603_, v_args_2624_, v___x_2630_, v___x_2631_, v___x_2627_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec_ref(v_args_2624_);
return v___x_2632_;
}
}
case 4:
{
lean_object* v_fvarId_2633_; lean_object* v_args_2634_; lean_object* v___x_2635_; 
v_fvarId_2633_ = lean_ctor_get(v_e_2604_, 0);
lean_inc(v_fvarId_2633_);
v_args_2634_ = lean_ctor_get(v_e_2604_, 1);
lean_inc_ref(v_args_2634_);
lean_dec_ref_known(v_e_2604_, 2);
lean_inc_ref(v_f_2603_);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2635_ = lean_apply_8(v_f_2603_, v_fvarId_2633_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2649_; 
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; 
v_unused_2650_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2650_);
v___x_2637_ = v___x_2635_;
v_isShared_2638_ = v_isSharedCheck_2649_;
goto v_resetjp_2636_;
}
else
{
lean_dec(v___x_2635_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2649_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2639_ = lean_unsigned_to_nat(0u);
v___x_2640_ = lean_array_get_size(v_args_2634_);
v___x_2641_ = lean_box(0);
v___x_2642_ = lean_nat_dec_lt(v___x_2639_, v___x_2640_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2644_; 
lean_dec_ref(v_args_2634_);
lean_dec_ref(v_f_2603_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 0, v___x_2641_);
v___x_2644_ = v___x_2637_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2641_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
else
{
size_t v___x_2646_; size_t v___x_2647_; lean_object* v___x_2648_; 
lean_del_object(v___x_2637_);
v___x_2646_ = ((size_t)0ULL);
v___x_2647_ = lean_usize_of_nat(v___x_2640_);
v___x_2648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2602_, v_f_2603_, v_args_2634_, v___x_2646_, v___x_2647_, v___x_2641_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec_ref(v_args_2634_);
return v___x_2648_;
}
}
}
else
{
lean_dec_ref(v_args_2634_);
lean_dec_ref(v_f_2603_);
return v___x_2635_;
}
}
case 5:
{
lean_object* v_args_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; 
v_args_2651_ = lean_ctor_get(v_e_2604_, 1);
lean_inc_ref(v_args_2651_);
lean_dec_ref_known(v_e_2604_, 2);
v___x_2652_ = lean_unsigned_to_nat(0u);
v___x_2653_ = lean_array_get_size(v_args_2651_);
v___x_2654_ = lean_box(0);
v___x_2655_ = lean_nat_dec_lt(v___x_2652_, v___x_2653_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; 
lean_dec_ref(v_args_2651_);
lean_dec_ref(v_f_2603_);
v___x_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
return v___x_2656_;
}
else
{
size_t v___x_2657_; size_t v___x_2658_; lean_object* v___x_2659_; 
v___x_2657_ = ((size_t)0ULL);
v___x_2658_ = lean_usize_of_nat(v___x_2653_);
v___x_2659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2602_, v_f_2603_, v_args_2651_, v___x_2657_, v___x_2658_, v___x_2654_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec_ref(v_args_2651_);
return v___x_2659_;
}
}
case 6:
{
lean_object* v_var_2660_; lean_object* v___x_2661_; 
v_var_2660_ = lean_ctor_get(v_e_2604_, 1);
lean_inc(v_var_2660_);
lean_dec_ref_known(v_e_2604_, 2);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2661_ = lean_apply_8(v_f_2603_, v_var_2660_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2661_;
}
case 7:
{
lean_object* v_var_2662_; lean_object* v___x_2663_; 
v_var_2662_ = lean_ctor_get(v_e_2604_, 1);
lean_inc(v_var_2662_);
lean_dec_ref_known(v_e_2604_, 2);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2663_ = lean_apply_8(v_f_2603_, v_var_2662_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2663_;
}
case 8:
{
lean_object* v_var_2664_; lean_object* v___x_2665_; 
v_var_2664_ = lean_ctor_get(v_e_2604_, 2);
lean_inc(v_var_2664_);
lean_dec_ref_known(v_e_2604_, 3);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2665_ = lean_apply_8(v_f_2603_, v_var_2664_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2665_;
}
case 9:
{
lean_object* v_args_2666_; 
v_args_2666_ = lean_ctor_get(v_e_2604_, 1);
lean_inc_ref(v_args_2666_);
lean_dec_ref_known(v_e_2604_, 2);
v_args_2613_ = v_args_2666_;
goto v___jp_2612_;
}
case 10:
{
lean_object* v_args_2667_; 
v_args_2667_ = lean_ctor_get(v_e_2604_, 1);
lean_inc_ref(v_args_2667_);
lean_dec_ref_known(v_e_2604_, 2);
v_args_2613_ = v_args_2667_;
goto v___jp_2612_;
}
case 11:
{
lean_object* v_var_2668_; lean_object* v___x_2669_; 
v_var_2668_ = lean_ctor_get(v_e_2604_, 1);
lean_inc(v_var_2668_);
lean_dec_ref_known(v_e_2604_, 2);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2669_ = lean_apply_8(v_f_2603_, v_var_2668_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2669_;
}
case 12:
{
lean_object* v_var_2670_; lean_object* v_args_2671_; lean_object* v___x_2672_; 
v_var_2670_ = lean_ctor_get(v_e_2604_, 0);
lean_inc(v_var_2670_);
v_args_2671_ = lean_ctor_get(v_e_2604_, 2);
lean_inc_ref(v_args_2671_);
lean_dec_ref_known(v_e_2604_, 3);
lean_inc_ref(v_f_2603_);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2672_ = lean_apply_8(v_f_2603_, v_var_2670_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2686_; 
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2686_ == 0)
{
lean_object* v_unused_2687_; 
v_unused_2687_ = lean_ctor_get(v___x_2672_, 0);
lean_dec(v_unused_2687_);
v___x_2674_ = v___x_2672_;
v_isShared_2675_ = v_isSharedCheck_2686_;
goto v_resetjp_2673_;
}
else
{
lean_dec(v___x_2672_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2686_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2676_ = lean_unsigned_to_nat(0u);
v___x_2677_ = lean_array_get_size(v_args_2671_);
v___x_2678_ = lean_box(0);
v___x_2679_ = lean_nat_dec_lt(v___x_2676_, v___x_2677_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2681_; 
lean_dec_ref(v_args_2671_);
lean_dec_ref(v_f_2603_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2678_);
v___x_2681_ = v___x_2674_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2678_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
else
{
size_t v___x_2683_; size_t v___x_2684_; lean_object* v___x_2685_; 
lean_del_object(v___x_2674_);
v___x_2683_ = ((size_t)0ULL);
v___x_2684_ = lean_usize_of_nat(v___x_2677_);
v___x_2685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2602_, v_f_2603_, v_args_2671_, v___x_2683_, v___x_2684_, v___x_2678_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec_ref(v_args_2671_);
return v___x_2685_;
}
}
}
else
{
lean_dec_ref(v_args_2671_);
lean_dec_ref(v_f_2603_);
return v___x_2672_;
}
}
case 13:
{
lean_object* v_fvarId_2688_; lean_object* v___x_2689_; 
v_fvarId_2688_ = lean_ctor_get(v_e_2604_, 1);
lean_inc(v_fvarId_2688_);
lean_dec_ref_known(v_e_2604_, 2);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2689_ = lean_apply_8(v_f_2603_, v_fvarId_2688_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2689_;
}
case 14:
{
lean_object* v_fvarId_2690_; lean_object* v___x_2691_; 
v_fvarId_2690_ = lean_ctor_get(v_e_2604_, 0);
lean_inc(v_fvarId_2690_);
lean_dec_ref_known(v_e_2604_, 1);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2691_ = lean_apply_8(v_f_2603_, v_fvarId_2690_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2691_;
}
case 15:
{
lean_object* v_fvarId_2692_; lean_object* v___x_2693_; 
v_fvarId_2692_ = lean_ctor_get(v_e_2604_, 0);
lean_inc(v_fvarId_2692_);
lean_dec_ref_known(v_e_2604_, 1);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc(v___y_2605_);
v___x_2693_ = lean_apply_8(v_f_2603_, v_fvarId_2692_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, lean_box(0));
return v___x_2693_;
}
default: 
{
lean_object* v___x_2694_; lean_object* v___x_2695_; 
lean_dec(v_e_2604_);
lean_dec_ref(v_f_2603_);
v___x_2694_ = lean_box(0);
v___x_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
return v___x_2695_;
}
}
v___jp_2612_:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v___x_2614_ = lean_unsigned_to_nat(0u);
v___x_2615_ = lean_array_get_size(v_args_2613_);
v___x_2616_ = lean_box(0);
v___x_2617_ = lean_nat_dec_lt(v___x_2614_, v___x_2615_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; 
lean_dec_ref(v_args_2613_);
lean_dec_ref(v_f_2603_);
v___x_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
return v___x_2618_;
}
else
{
size_t v___x_2619_; size_t v___x_2620_; lean_object* v___x_2621_; 
v___x_2619_ = ((size_t)0ULL);
v___x_2620_ = lean_usize_of_nat(v___x_2615_);
v___x_2621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2602_, v_f_2603_, v_args_2613_, v___x_2619_, v___x_2620_, v___x_2616_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec_ref(v_args_2613_);
return v___x_2621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2___boxed(lean_object* v_pu_2696_, lean_object* v_f_2697_, lean_object* v_e_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
uint8_t v_pu_boxed_2706_; lean_object* v_res_2707_; 
v_pu_boxed_2706_ = lean_unbox(v_pu_2696_);
v_res_2707_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(v_pu_boxed_2706_, v_f_2697_, v_e_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec(v___y_2699_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(uint8_t v_pu_2708_, lean_object* v_f_2709_, lean_object* v_decl_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v_type_2718_; lean_object* v_value_2719_; lean_object* v___x_2720_; 
v_type_2718_ = lean_ctor_get(v_decl_2710_, 2);
lean_inc_ref(v_type_2718_);
v_value_2719_ = lean_ctor_get(v_decl_2710_, 3);
lean_inc(v_value_2719_);
lean_dec_ref(v_decl_2710_);
lean_inc_ref(v_f_2709_);
v___x_2720_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2709_, v_type_2718_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v___x_2721_; 
lean_dec_ref_known(v___x_2720_, 1);
v___x_2721_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(v_pu_2708_, v_f_2709_, v_value_2719_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
return v___x_2721_;
}
else
{
lean_dec(v_value_2719_);
lean_dec_ref(v_f_2709_);
return v___x_2720_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1___boxed(lean_object* v_pu_2722_, lean_object* v_f_2723_, lean_object* v_decl_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
uint8_t v_pu_boxed_2732_; lean_object* v_res_2733_; 
v_pu_boxed_2732_ = lean_unbox(v_pu_2722_);
v_res_2733_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v_pu_boxed_2732_, v_f_2723_, v_decl_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec(v___y_2725_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(lean_object* v_alt_2734_, lean_object* v_f_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_){
_start:
{
switch(lean_obj_tag(v_alt_2734_))
{
case 0:
{
lean_object* v_code_2743_; lean_object* v___x_2744_; 
v_code_2743_ = lean_ctor_get(v_alt_2734_, 2);
lean_inc_ref(v_code_2743_);
lean_dec_ref_known(v_alt_2734_, 3);
lean_inc(v___y_2741_);
lean_inc_ref(v___y_2740_);
lean_inc(v___y_2739_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc(v___y_2736_);
v___x_2744_ = lean_apply_8(v_f_2735_, v_code_2743_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, lean_box(0));
return v___x_2744_;
}
case 1:
{
lean_object* v_code_2745_; lean_object* v___x_2746_; 
v_code_2745_ = lean_ctor_get(v_alt_2734_, 1);
lean_inc_ref(v_code_2745_);
lean_dec_ref_known(v_alt_2734_, 2);
lean_inc(v___y_2741_);
lean_inc_ref(v___y_2740_);
lean_inc(v___y_2739_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc(v___y_2736_);
v___x_2746_ = lean_apply_8(v_f_2735_, v_code_2745_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, lean_box(0));
return v___x_2746_;
}
default: 
{
lean_object* v_code_2747_; lean_object* v___x_2748_; 
v_code_2747_ = lean_ctor_get(v_alt_2734_, 0);
lean_inc_ref(v_code_2747_);
lean_dec_ref_known(v_alt_2734_, 1);
lean_inc(v___y_2741_);
lean_inc_ref(v___y_2740_);
lean_inc(v___y_2739_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc(v___y_2736_);
v___x_2748_ = lean_apply_8(v_f_2735_, v_code_2747_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, lean_box(0));
return v___x_2748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_alt_2749_, lean_object* v_f_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(v_alt_2749_, v_f_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v___y_2751_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0___boxed(lean_object* v_pu_2759_, lean_object* v_f_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
uint8_t v_pu_boxed_2769_; lean_object* v_res_2770_; 
v_pu_boxed_2769_ = lean_unbox(v_pu_2759_);
v_res_2770_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0(v_pu_boxed_2769_, v_f_2760_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec(v___y_2762_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(uint8_t v_pu_2771_, lean_object* v_f_2772_, lean_object* v_as_2773_, size_t v_i_2774_, size_t v_stop_2775_, lean_object* v_b_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
uint8_t v___x_2784_; 
v___x_2784_ = lean_usize_dec_eq(v_i_2774_, v_stop_2775_);
if (v___x_2784_ == 0)
{
lean_object* v___x_2785_; lean_object* v___f_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2785_ = lean_box(v_pu_2771_);
lean_inc_ref(v_f_2772_);
v___f_2786_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2786_, 0, v___x_2785_);
lean_closure_set(v___f_2786_, 1, v_f_2772_);
v___x_2787_ = lean_array_uget_borrowed(v_as_2773_, v_i_2774_);
lean_inc(v___x_2787_);
v___x_2788_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(v___x_2787_, v___f_2786_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v_a_2789_; size_t v___x_2790_; size_t v___x_2791_; 
v_a_2789_ = lean_ctor_get(v___x_2788_, 0);
lean_inc(v_a_2789_);
lean_dec_ref_known(v___x_2788_, 1);
v___x_2790_ = ((size_t)1ULL);
v___x_2791_ = lean_usize_add(v_i_2774_, v___x_2790_);
v_i_2774_ = v___x_2791_;
v_b_2776_ = v_a_2789_;
goto _start;
}
else
{
lean_dec_ref(v_f_2772_);
return v___x_2788_;
}
}
else
{
lean_object* v___x_2793_; 
lean_dec_ref(v_f_2772_);
v___x_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2793_, 0, v_b_2776_);
return v___x_2793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(uint8_t v_pu_2794_, lean_object* v_f_2795_, lean_object* v_c_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
switch(lean_obj_tag(v_c_2796_))
{
case 0:
{
lean_object* v_decl_2804_; lean_object* v_k_2805_; lean_object* v___x_2806_; 
v_decl_2804_ = lean_ctor_get(v_c_2796_, 0);
lean_inc_ref(v_decl_2804_);
v_k_2805_ = lean_ctor_get(v_c_2796_, 1);
lean_inc_ref(v_k_2805_);
lean_dec_ref_known(v_c_2796_, 2);
lean_inc_ref(v_f_2795_);
v___x_2806_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v_pu_2794_, v_f_2795_, v_decl_2804_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_dec_ref_known(v___x_2806_, 1);
v_c_2796_ = v_k_2805_;
goto _start;
}
else
{
lean_dec_ref(v_k_2805_);
lean_dec_ref(v_f_2795_);
return v___x_2806_;
}
}
case 3:
{
lean_object* v_fvarId_2808_; lean_object* v_args_2809_; lean_object* v___x_2810_; 
v_fvarId_2808_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2808_);
v_args_2809_ = lean_ctor_get(v_c_2796_, 1);
lean_inc_ref(v_args_2809_);
lean_dec_ref_known(v_c_2796_, 2);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2810_ = lean_apply_8(v_f_2795_, v_fvarId_2808_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2824_; 
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2824_ == 0)
{
lean_object* v_unused_2825_; 
v_unused_2825_ = lean_ctor_get(v___x_2810_, 0);
lean_dec(v_unused_2825_);
v___x_2812_ = v___x_2810_;
v_isShared_2813_ = v_isSharedCheck_2824_;
goto v_resetjp_2811_;
}
else
{
lean_dec(v___x_2810_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2824_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; 
v___x_2814_ = lean_unsigned_to_nat(0u);
v___x_2815_ = lean_array_get_size(v_args_2809_);
v___x_2816_ = lean_box(0);
v___x_2817_ = lean_nat_dec_lt(v___x_2814_, v___x_2815_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2819_; 
lean_dec_ref(v_args_2809_);
lean_dec_ref(v_f_2795_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v___x_2816_);
v___x_2819_ = v___x_2812_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2816_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
else
{
size_t v___x_2821_; size_t v___x_2822_; lean_object* v___x_2823_; 
lean_del_object(v___x_2812_);
v___x_2821_ = ((size_t)0ULL);
v___x_2822_ = lean_usize_of_nat(v___x_2815_);
v___x_2823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2794_, v_f_2795_, v_args_2809_, v___x_2821_, v___x_2822_, v___x_2816_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
lean_dec_ref(v_args_2809_);
return v___x_2823_;
}
}
}
else
{
lean_dec_ref(v_args_2809_);
lean_dec_ref(v_f_2795_);
return v___x_2810_;
}
}
case 4:
{
lean_object* v_cases_2826_; lean_object* v_resultType_2827_; lean_object* v_discr_2828_; lean_object* v_alts_2829_; lean_object* v___x_2830_; 
v_cases_2826_ = lean_ctor_get(v_c_2796_, 0);
lean_inc_ref(v_cases_2826_);
lean_dec_ref_known(v_c_2796_, 1);
v_resultType_2827_ = lean_ctor_get(v_cases_2826_, 1);
lean_inc_ref(v_resultType_2827_);
v_discr_2828_ = lean_ctor_get(v_cases_2826_, 2);
lean_inc(v_discr_2828_);
v_alts_2829_ = lean_ctor_get(v_cases_2826_, 3);
lean_inc_ref(v_alts_2829_);
lean_dec_ref(v_cases_2826_);
lean_inc_ref(v_f_2795_);
v___x_2830_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2795_, v_resultType_2827_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v___x_2831_; 
lean_dec_ref_known(v___x_2830_, 1);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2831_ = lean_apply_8(v_f_2795_, v_discr_2828_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2845_; 
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2845_ == 0)
{
lean_object* v_unused_2846_; 
v_unused_2846_ = lean_ctor_get(v___x_2831_, 0);
lean_dec(v_unused_2846_);
v___x_2833_ = v___x_2831_;
v_isShared_2834_ = v_isSharedCheck_2845_;
goto v_resetjp_2832_;
}
else
{
lean_dec(v___x_2831_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2845_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; uint8_t v___x_2838_; 
v___x_2835_ = lean_unsigned_to_nat(0u);
v___x_2836_ = lean_array_get_size(v_alts_2829_);
v___x_2837_ = lean_box(0);
v___x_2838_ = lean_nat_dec_lt(v___x_2835_, v___x_2836_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2840_; 
lean_dec_ref(v_alts_2829_);
lean_dec_ref(v_f_2795_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 0, v___x_2837_);
v___x_2840_ = v___x_2833_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2837_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
else
{
size_t v___x_2842_; size_t v___x_2843_; lean_object* v___x_2844_; 
lean_del_object(v___x_2833_);
v___x_2842_ = ((size_t)0ULL);
v___x_2843_ = lean_usize_of_nat(v___x_2836_);
v___x_2844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(v_pu_2794_, v_f_2795_, v_alts_2829_, v___x_2842_, v___x_2843_, v___x_2837_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
lean_dec_ref(v_alts_2829_);
return v___x_2844_;
}
}
}
else
{
lean_dec_ref(v_alts_2829_);
lean_dec_ref(v_f_2795_);
return v___x_2831_;
}
}
else
{
lean_dec_ref(v_alts_2829_);
lean_dec(v_discr_2828_);
lean_dec_ref(v_f_2795_);
return v___x_2830_;
}
}
case 5:
{
lean_object* v_fvarId_2847_; lean_object* v___x_2848_; 
v_fvarId_2847_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2847_);
lean_dec_ref_known(v_c_2796_, 1);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2848_ = lean_apply_8(v_f_2795_, v_fvarId_2847_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
return v___x_2848_;
}
case 6:
{
lean_object* v_type_2849_; lean_object* v___x_2850_; 
v_type_2849_ = lean_ctor_get(v_c_2796_, 0);
lean_inc_ref(v_type_2849_);
lean_dec_ref_known(v_c_2796_, 1);
v___x_2850_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2795_, v_type_2849_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
return v___x_2850_;
}
case 7:
{
lean_object* v_fvarId_2851_; lean_object* v_y_2852_; lean_object* v_k_2853_; lean_object* v___x_2854_; 
v_fvarId_2851_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2851_);
v_y_2852_ = lean_ctor_get(v_c_2796_, 2);
lean_inc(v_y_2852_);
v_k_2853_ = lean_ctor_get(v_c_2796_, 3);
lean_inc_ref(v_k_2853_);
lean_dec_ref_known(v_c_2796_, 4);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2854_ = lean_apply_8(v_f_2795_, v_fvarId_2851_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v___x_2855_; 
lean_dec_ref_known(v___x_2854_, 1);
lean_inc_ref(v_f_2795_);
v___x_2855_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_2795_, v_y_2852_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_dec_ref_known(v___x_2855_, 1);
v_c_2796_ = v_k_2853_;
goto _start;
}
else
{
lean_dec_ref(v_k_2853_);
lean_dec_ref(v_f_2795_);
return v___x_2855_;
}
}
else
{
lean_dec_ref(v_k_2853_);
lean_dec(v_y_2852_);
lean_dec_ref(v_f_2795_);
return v___x_2854_;
}
}
case 8:
{
lean_object* v_fvarId_2857_; lean_object* v_y_2858_; lean_object* v_k_2859_; lean_object* v___x_2860_; 
v_fvarId_2857_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2857_);
v_y_2858_ = lean_ctor_get(v_c_2796_, 2);
lean_inc(v_y_2858_);
v_k_2859_ = lean_ctor_get(v_c_2796_, 3);
lean_inc_ref(v_k_2859_);
lean_dec_ref_known(v_c_2796_, 4);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2860_ = lean_apply_8(v_f_2795_, v_fvarId_2857_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v___x_2861_; 
lean_dec_ref_known(v___x_2860_, 1);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2861_ = lean_apply_8(v_f_2795_, v_y_2858_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_dec_ref_known(v___x_2861_, 1);
v_c_2796_ = v_k_2859_;
goto _start;
}
else
{
lean_dec_ref(v_k_2859_);
lean_dec_ref(v_f_2795_);
return v___x_2861_;
}
}
else
{
lean_dec_ref(v_k_2859_);
lean_dec(v_y_2858_);
lean_dec_ref(v_f_2795_);
return v___x_2860_;
}
}
case 9:
{
lean_object* v_fvarId_2863_; lean_object* v_y_2864_; lean_object* v_ty_2865_; lean_object* v_k_2866_; lean_object* v___x_2867_; 
v_fvarId_2863_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2863_);
v_y_2864_ = lean_ctor_get(v_c_2796_, 3);
lean_inc(v_y_2864_);
v_ty_2865_ = lean_ctor_get(v_c_2796_, 4);
lean_inc_ref(v_ty_2865_);
v_k_2866_ = lean_ctor_get(v_c_2796_, 5);
lean_inc_ref(v_k_2866_);
lean_dec_ref_known(v_c_2796_, 6);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2867_ = lean_apply_8(v_f_2795_, v_fvarId_2863_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v___x_2868_; 
lean_dec_ref_known(v___x_2867_, 1);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2868_ = lean_apply_8(v_f_2795_, v_y_2864_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v___x_2869_; 
lean_dec_ref_known(v___x_2868_, 1);
lean_inc_ref(v_f_2795_);
v___x_2869_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2795_, v_ty_2865_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_dec_ref_known(v___x_2869_, 1);
v_c_2796_ = v_k_2866_;
goto _start;
}
else
{
lean_dec_ref(v_k_2866_);
lean_dec_ref(v_f_2795_);
return v___x_2869_;
}
}
else
{
lean_dec_ref(v_k_2866_);
lean_dec_ref(v_ty_2865_);
lean_dec_ref(v_f_2795_);
return v___x_2868_;
}
}
else
{
lean_dec_ref(v_k_2866_);
lean_dec_ref(v_ty_2865_);
lean_dec(v_y_2864_);
lean_dec_ref(v_f_2795_);
return v___x_2867_;
}
}
case 10:
{
lean_object* v_fvarId_2871_; lean_object* v_k_2872_; lean_object* v___x_2873_; 
v_fvarId_2871_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2871_);
v_k_2872_ = lean_ctor_get(v_c_2796_, 2);
lean_inc_ref(v_k_2872_);
lean_dec_ref_known(v_c_2796_, 3);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2873_ = lean_apply_8(v_f_2795_, v_fvarId_2871_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_dec_ref_known(v___x_2873_, 1);
v_c_2796_ = v_k_2872_;
goto _start;
}
else
{
lean_dec_ref(v_k_2872_);
lean_dec_ref(v_f_2795_);
return v___x_2873_;
}
}
case 11:
{
lean_object* v_fvarId_2875_; lean_object* v_k_2876_; lean_object* v___x_2877_; 
v_fvarId_2875_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2875_);
v_k_2876_ = lean_ctor_get(v_c_2796_, 2);
lean_inc_ref(v_k_2876_);
lean_dec_ref_known(v_c_2796_, 3);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2877_ = lean_apply_8(v_f_2795_, v_fvarId_2875_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_dec_ref_known(v___x_2877_, 1);
v_c_2796_ = v_k_2876_;
goto _start;
}
else
{
lean_dec_ref(v_k_2876_);
lean_dec_ref(v_f_2795_);
return v___x_2877_;
}
}
case 12:
{
lean_object* v_fvarId_2879_; lean_object* v_k_2880_; lean_object* v___x_2881_; 
v_fvarId_2879_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2879_);
v_k_2880_ = lean_ctor_get(v_c_2796_, 3);
lean_inc_ref(v_k_2880_);
lean_dec_ref_known(v_c_2796_, 4);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2881_ = lean_apply_8(v_f_2795_, v_fvarId_2879_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_dec_ref_known(v___x_2881_, 1);
v_c_2796_ = v_k_2880_;
goto _start;
}
else
{
lean_dec_ref(v_k_2880_);
lean_dec_ref(v_f_2795_);
return v___x_2881_;
}
}
case 13:
{
lean_object* v_fvarId_2883_; lean_object* v_k_2884_; lean_object* v___x_2885_; 
v_fvarId_2883_ = lean_ctor_get(v_c_2796_, 0);
lean_inc(v_fvarId_2883_);
v_k_2884_ = lean_ctor_get(v_c_2796_, 1);
lean_inc_ref(v_k_2884_);
lean_dec_ref_known(v_c_2796_, 2);
lean_inc_ref(v_f_2795_);
lean_inc(v___y_2802_);
lean_inc_ref(v___y_2801_);
lean_inc(v___y_2800_);
lean_inc_ref(v___y_2799_);
lean_inc(v___y_2798_);
lean_inc(v___y_2797_);
v___x_2885_ = lean_apply_8(v_f_2795_, v_fvarId_2883_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, lean_box(0));
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_dec_ref_known(v___x_2885_, 1);
v_c_2796_ = v_k_2884_;
goto _start;
}
else
{
lean_dec_ref(v_k_2884_);
lean_dec_ref(v_f_2795_);
return v___x_2885_;
}
}
default: 
{
lean_object* v_decl_2887_; lean_object* v_k_2888_; lean_object* v_params_2889_; lean_object* v_type_2890_; lean_object* v_value_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; 
v_decl_2887_ = lean_ctor_get(v_c_2796_, 0);
lean_inc_ref(v_decl_2887_);
v_k_2888_ = lean_ctor_get(v_c_2796_, 1);
lean_inc_ref(v_k_2888_);
lean_dec_ref(v_c_2796_);
v_params_2889_ = lean_ctor_get(v_decl_2887_, 2);
lean_inc_ref(v_params_2889_);
v_type_2890_ = lean_ctor_get(v_decl_2887_, 3);
lean_inc_ref(v_type_2890_);
v_value_2891_ = lean_ctor_get(v_decl_2887_, 4);
lean_inc_ref(v_value_2891_);
lean_dec_ref(v_decl_2887_);
v___x_2892_ = lean_unsigned_to_nat(0u);
v___x_2893_ = lean_array_get_size(v_params_2889_);
v___x_2894_ = lean_nat_dec_lt(v___x_2892_, v___x_2893_);
if (v___x_2894_ == 0)
{
lean_object* v___x_2895_; 
lean_dec_ref(v_params_2889_);
lean_inc_ref(v_f_2795_);
v___x_2895_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2795_, v_type_2890_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v___x_2896_; 
lean_dec_ref_known(v___x_2895_, 1);
lean_inc_ref(v_f_2795_);
v___x_2896_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2794_, v_f_2795_, v_value_2891_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_dec_ref_known(v___x_2896_, 1);
v_c_2796_ = v_k_2888_;
goto _start;
}
else
{
lean_dec_ref(v_k_2888_);
lean_dec_ref(v_f_2795_);
return v___x_2896_;
}
}
else
{
lean_dec_ref(v_value_2891_);
lean_dec_ref(v_k_2888_);
lean_dec_ref(v_f_2795_);
return v___x_2895_;
}
}
else
{
lean_object* v___x_2898_; size_t v___x_2899_; size_t v___x_2900_; lean_object* v___x_2901_; 
v___x_2898_ = lean_box(0);
v___x_2899_ = ((size_t)0ULL);
v___x_2900_ = lean_usize_of_nat(v___x_2893_);
lean_inc_ref(v_f_2795_);
v___x_2901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(v_pu_2794_, v_f_2795_, v_params_2889_, v___x_2899_, v___x_2900_, v___x_2898_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
lean_dec_ref(v_params_2889_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v___x_2902_; 
lean_dec_ref_known(v___x_2901_, 1);
lean_inc_ref(v_f_2795_);
v___x_2902_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2795_, v_type_2890_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2902_) == 0)
{
lean_object* v___x_2903_; 
lean_dec_ref_known(v___x_2902_, 1);
lean_inc_ref(v_f_2795_);
v___x_2903_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2794_, v_f_2795_, v_value_2891_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_dec_ref_known(v___x_2903_, 1);
v_c_2796_ = v_k_2888_;
goto _start;
}
else
{
lean_dec_ref(v_k_2888_);
lean_dec_ref(v_f_2795_);
return v___x_2903_;
}
}
else
{
lean_dec_ref(v_value_2891_);
lean_dec_ref(v_k_2888_);
lean_dec_ref(v_f_2795_);
return v___x_2902_;
}
}
else
{
lean_dec_ref(v_value_2891_);
lean_dec_ref(v_type_2890_);
lean_dec_ref(v_k_2888_);
lean_dec_ref(v_f_2795_);
return v___x_2901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0(uint8_t v_pu_2905_, lean_object* v_f_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2905_, v_f_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___boxed(lean_object* v_pu_2916_, lean_object* v_f_2917_, lean_object* v_as_2918_, lean_object* v_i_2919_, lean_object* v_stop_2920_, lean_object* v_b_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
uint8_t v_pu_boxed_2929_; size_t v_i_boxed_2930_; size_t v_stop_boxed_2931_; lean_object* v_res_2932_; 
v_pu_boxed_2929_ = lean_unbox(v_pu_2916_);
v_i_boxed_2930_ = lean_unbox_usize(v_i_2919_);
lean_dec(v_i_2919_);
v_stop_boxed_2931_ = lean_unbox_usize(v_stop_2920_);
lean_dec(v_stop_2920_);
v_res_2932_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(v_pu_boxed_2929_, v_f_2917_, v_as_2918_, v_i_boxed_2930_, v_stop_boxed_2931_, v_b_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v_as_2918_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5___boxed(lean_object* v_pu_2933_, lean_object* v_f_2934_, lean_object* v_c_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
uint8_t v_pu_boxed_2943_; lean_object* v_res_2944_; 
v_pu_boxed_2943_ = lean_unbox(v_pu_2933_);
v_res_2944_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_boxed_2943_, v_f_2934_, v_c_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___y_2941_);
lean_dec_ref(v___y_2940_);
lean_dec(v___y_2939_);
lean_dec_ref(v___y_2938_);
lean_dec(v___y_2937_);
lean_dec(v___y_2936_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(uint8_t v_pu_2945_, lean_object* v_f_2946_, lean_object* v_decl_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_params_2955_; lean_object* v_type_2956_; lean_object* v_value_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; uint8_t v___x_2960_; 
v_params_2955_ = lean_ctor_get(v_decl_2947_, 2);
lean_inc_ref(v_params_2955_);
v_type_2956_ = lean_ctor_get(v_decl_2947_, 3);
lean_inc_ref(v_type_2956_);
v_value_2957_ = lean_ctor_get(v_decl_2947_, 4);
lean_inc_ref(v_value_2957_);
lean_dec_ref(v_decl_2947_);
v___x_2958_ = lean_unsigned_to_nat(0u);
v___x_2959_ = lean_array_get_size(v_params_2955_);
v___x_2960_ = lean_nat_dec_lt(v___x_2958_, v___x_2959_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; 
lean_dec_ref(v_params_2955_);
lean_inc_ref(v_f_2946_);
v___x_2961_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2946_, v_type_2956_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v___x_2962_; 
lean_dec_ref_known(v___x_2961_, 1);
v___x_2962_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2945_, v_f_2946_, v_value_2957_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
return v___x_2962_;
}
else
{
lean_dec_ref(v_value_2957_);
lean_dec_ref(v_f_2946_);
return v___x_2961_;
}
}
else
{
lean_object* v___x_2963_; size_t v___x_2964_; size_t v___x_2965_; lean_object* v___x_2966_; 
v___x_2963_ = lean_box(0);
v___x_2964_ = ((size_t)0ULL);
v___x_2965_ = lean_usize_of_nat(v___x_2959_);
lean_inc_ref(v_f_2946_);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(v_pu_2945_, v_f_2946_, v_params_2955_, v___x_2964_, v___x_2965_, v___x_2963_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
lean_dec_ref(v_params_2955_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v___x_2967_; 
lean_dec_ref_known(v___x_2966_, 1);
lean_inc_ref(v_f_2946_);
v___x_2967_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2946_, v_type_2956_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v___x_2968_; 
lean_dec_ref_known(v___x_2967_, 1);
v___x_2968_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2945_, v_f_2946_, v_value_2957_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
return v___x_2968_;
}
else
{
lean_dec_ref(v_value_2957_);
lean_dec_ref(v_f_2946_);
return v___x_2967_;
}
}
else
{
lean_dec_ref(v_value_2957_);
lean_dec_ref(v_type_2956_);
lean_dec_ref(v_f_2946_);
return v___x_2966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2___boxed(lean_object* v_pu_2969_, lean_object* v_f_2970_, lean_object* v_decl_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_){
_start:
{
uint8_t v_pu_boxed_2979_; lean_object* v_res_2980_; 
v_pu_boxed_2979_ = lean_unbox(v_pu_2969_);
v_res_2980_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v_pu_boxed_2979_, v_f_2970_, v_decl_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec(v___y_2973_);
lean_dec(v___y_2972_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0_spec__1(lean_object* v_msg_2981_){
_start:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2982_ = lean_box(0);
v___x_2983_ = lean_panic_fn_borrowed(v___x_2982_, v_msg_2981_);
return v___x_2983_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2987_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2));
v___x_2988_ = lean_unsigned_to_nat(11u);
v___x_2989_ = lean_unsigned_to_nat(163u);
v___x_2990_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1));
v___x_2991_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0));
v___x_2992_ = l_mkPanicMessageWithDecl(v___x_2991_, v___x_2990_, v___x_2989_, v___x_2988_, v___x_2987_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(lean_object* v_a_2993_, lean_object* v_x_2994_){
_start:
{
if (lean_obj_tag(v_x_2994_) == 0)
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2995_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3);
v___x_2996_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0_spec__1(v___x_2995_);
return v___x_2996_;
}
else
{
lean_object* v_key_2997_; lean_object* v_value_2998_; lean_object* v_tail_2999_; uint8_t v___x_3000_; 
v_key_2997_ = lean_ctor_get(v_x_2994_, 0);
v_value_2998_ = lean_ctor_get(v_x_2994_, 1);
v_tail_2999_ = lean_ctor_get(v_x_2994_, 2);
v___x_3000_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_key_2997_, v_a_2993_);
if (v___x_3000_ == 0)
{
v_x_2994_ = v_tail_2999_;
goto _start;
}
else
{
lean_inc(v_value_2998_);
return v_value_2998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___boxed(lean_object* v_a_3002_, lean_object* v_x_3003_){
_start:
{
lean_object* v_res_3004_; 
v_res_3004_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(v_a_3002_, v_x_3003_);
lean_dec(v_x_3003_);
lean_dec(v_a_3002_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(lean_object* v_m_3005_, lean_object* v_a_3006_){
_start:
{
lean_object* v_buckets_3007_; lean_object* v___x_3008_; uint64_t v___x_3009_; uint64_t v___x_3010_; uint64_t v___x_3011_; uint64_t v_fold_3012_; uint64_t v___x_3013_; uint64_t v___x_3014_; uint64_t v___x_3015_; size_t v___x_3016_; size_t v___x_3017_; size_t v___x_3018_; size_t v___x_3019_; size_t v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v_buckets_3007_ = lean_ctor_get(v_m_3005_, 1);
v___x_3008_ = lean_array_get_size(v_buckets_3007_);
v___x_3009_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_a_3006_);
v___x_3010_ = 32ULL;
v___x_3011_ = lean_uint64_shift_right(v___x_3009_, v___x_3010_);
v_fold_3012_ = lean_uint64_xor(v___x_3009_, v___x_3011_);
v___x_3013_ = 16ULL;
v___x_3014_ = lean_uint64_shift_right(v_fold_3012_, v___x_3013_);
v___x_3015_ = lean_uint64_xor(v_fold_3012_, v___x_3014_);
v___x_3016_ = lean_uint64_to_usize(v___x_3015_);
v___x_3017_ = lean_usize_of_nat(v___x_3008_);
v___x_3018_ = ((size_t)1ULL);
v___x_3019_ = lean_usize_sub(v___x_3017_, v___x_3018_);
v___x_3020_ = lean_usize_land(v___x_3016_, v___x_3019_);
v___x_3021_ = lean_array_uget_borrowed(v_buckets_3007_, v___x_3020_);
v___x_3022_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(v_a_3006_, v___x_3021_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0___boxed(lean_object* v_m_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_m_3023_, v_a_3024_);
lean_dec(v_a_3024_);
lean_dec_ref(v_m_3023_);
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(lean_object* v_decl_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_){
_start:
{
lean_object* v___y_3036_; uint8_t v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = 0;
v___x_3062_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0));
switch(lean_obj_tag(v_decl_3027_))
{
case 0:
{
lean_object* v_decl_3063_; lean_object* v___x_3064_; 
v_decl_3063_ = lean_ctor_get(v_decl_3027_, 0);
lean_inc_ref(v_decl_3063_);
v___x_3064_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v___x_3061_, v___x_3062_, v_decl_3063_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
v___y_3036_ = v___x_3064_;
goto v___jp_3035_;
}
case 1:
{
lean_object* v_decl_3065_; lean_object* v___x_3066_; 
v_decl_3065_ = lean_ctor_get(v_decl_3027_, 0);
lean_inc_ref(v_decl_3065_);
v___x_3066_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3061_, v___x_3062_, v_decl_3065_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
v___y_3036_ = v___x_3066_;
goto v___jp_3035_;
}
case 2:
{
lean_object* v_decl_3067_; lean_object* v___x_3068_; 
v_decl_3067_ = lean_ctor_get(v_decl_3027_, 0);
lean_inc_ref(v_decl_3067_);
v___x_3068_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3061_, v___x_3062_, v_decl_3067_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
v___y_3036_ = v___x_3068_;
goto v___jp_3035_;
}
case 3:
{
lean_object* v_fvarId_3069_; lean_object* v_y_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v_fvarId_3069_ = lean_ctor_get(v_decl_3027_, 0);
v_y_3070_ = lean_ctor_get(v_decl_3027_, 2);
lean_inc(v_fvarId_3069_);
v___x_3071_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3069_, v_a_3028_);
lean_dec_ref(v___x_3071_);
lean_inc(v_y_3070_);
v___x_3072_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v___x_3062_, v_y_3070_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
v___y_3036_ = v___x_3072_;
goto v___jp_3035_;
}
case 4:
{
lean_object* v_fvarId_3073_; lean_object* v_y_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v_fvarId_3073_ = lean_ctor_get(v_decl_3027_, 0);
v_y_3074_ = lean_ctor_get(v_decl_3027_, 2);
lean_inc(v_fvarId_3073_);
v___x_3075_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3073_, v_a_3028_);
lean_dec_ref(v___x_3075_);
lean_inc(v_y_3074_);
v___x_3076_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_y_3074_, v_a_3028_);
v___y_3036_ = v___x_3076_;
goto v___jp_3035_;
}
case 5:
{
lean_object* v_fvarId_3077_; lean_object* v_y_3078_; lean_object* v_ty_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v_fvarId_3077_ = lean_ctor_get(v_decl_3027_, 0);
v_y_3078_ = lean_ctor_get(v_decl_3027_, 3);
v_ty_3079_ = lean_ctor_get(v_decl_3027_, 4);
lean_inc(v_fvarId_3077_);
v___x_3080_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3077_, v_a_3028_);
lean_dec_ref(v___x_3080_);
lean_inc(v_y_3078_);
v___x_3081_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_y_3078_, v_a_3028_);
lean_dec_ref(v___x_3081_);
lean_inc_ref(v_ty_3079_);
v___x_3082_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v___x_3062_, v_ty_3079_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
v___y_3036_ = v___x_3082_;
goto v___jp_3035_;
}
default: 
{
lean_object* v_fvarId_3083_; lean_object* v___x_3084_; 
v_fvarId_3083_ = lean_ctor_get(v_decl_3027_, 0);
lean_inc(v_fvarId_3083_);
v___x_3084_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3083_, v_a_3028_);
v___y_3036_ = v___x_3084_;
goto v___jp_3035_;
}
}
v___jp_3035_:
{
if (lean_obj_tag(v___y_3036_) == 0)
{
lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3059_; 
v_isSharedCheck_3059_ = !lean_is_exclusive(v___y_3036_);
if (v_isSharedCheck_3059_ == 0)
{
lean_object* v_unused_3060_; 
v_unused_3060_ = lean_ctor_get(v___y_3036_, 0);
lean_dec(v_unused_3060_);
v___x_3038_ = v___y_3036_;
v_isShared_3039_ = v_isSharedCheck_3059_;
goto v_resetjp_3037_;
}
else
{
lean_dec(v___y_3036_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3059_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3040_; lean_object* v_decision_3041_; lean_object* v_newArms_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3058_; 
v___x_3040_ = lean_st_ref_take(v_a_3028_);
v_decision_3041_ = lean_ctor_get(v___x_3040_, 0);
v_newArms_3042_ = lean_ctor_get(v___x_3040_, 1);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3044_ = v___x_3040_;
v_isShared_3045_ = v_isSharedCheck_3058_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_newArms_3042_);
lean_inc(v_decision_3041_);
lean_dec(v___x_3040_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3058_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3052_; 
v___x_3046_ = lean_box(0);
v___x_3047_ = lean_box(2);
v___x_3048_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_newArms_3042_, v___x_3047_);
v___x_3049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3049_, 0, v_decl_3027_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
v___x_3050_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_newArms_3042_, v___x_3047_, v___x_3049_);
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 1, v___x_3050_);
v___x_3052_ = v___x_3044_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_decision_3041_);
lean_ctor_set(v_reuseFailAlloc_3057_, 1, v___x_3050_);
v___x_3052_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
lean_object* v___x_3053_; lean_object* v___x_3055_; 
v___x_3053_ = lean_st_ref_put(v_a_3028_, v___x_3052_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 0, v___x_3046_);
v___x_3055_ = v___x_3038_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3046_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
}
else
{
lean_dec_ref(v_decl_3027_);
return v___y_3036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___boxed(lean_object* v_decl_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(v_decl_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_, v_a_3090_, v_a_3091_);
lean_dec(v_a_3091_);
lean_dec_ref(v_a_3090_);
lean_dec(v_a_3089_);
lean_dec_ref(v_a_3088_);
lean_dec(v_a_3087_);
lean_dec(v_a_3086_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3(uint8_t v_pu_3094_, lean_object* v_f_3095_, lean_object* v_arg_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_3095_, v_arg_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___boxed(lean_object* v_pu_3105_, lean_object* v_f_3106_, lean_object* v_arg_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
uint8_t v_pu_boxed_3115_; lean_object* v_res_3116_; 
v_pu_boxed_3115_ = lean_unbox(v_pu_3105_);
v_res_3116_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3(v_pu_boxed_3115_, v_f_3106_, v_arg_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
lean_dec(v___y_3109_);
lean_dec(v___y_3108_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4(uint8_t v_pu_3117_, lean_object* v_f_3118_, lean_object* v_param_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v___x_3127_; 
v___x_3127_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(v_f_3118_, v_param_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___boxed(lean_object* v_pu_3128_, lean_object* v_f_3129_, lean_object* v_param_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_){
_start:
{
uint8_t v_pu_boxed_3138_; lean_object* v_res_3139_; 
v_pu_boxed_3138_ = lean_unbox(v_pu_3128_);
v_res_3139_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4(v_pu_boxed_3138_, v_f_3129_, v_param_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec(v___y_3132_);
lean_dec(v___y_3131_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8(uint8_t v_pu_3140_, lean_object* v_alt_3141_, lean_object* v_f_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(v_alt_3141_, v_f_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___boxed(lean_object* v_pu_3151_, lean_object* v_alt_3152_, lean_object* v_f_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
uint8_t v_pu_boxed_3161_; lean_object* v_res_3162_; 
v_pu_boxed_3161_ = lean_unbox(v_pu_3151_);
v_res_3162_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8(v_pu_boxed_3161_, v_alt_3152_, v_f_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec(v___y_3154_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(lean_object* v_fvar_3163_, lean_object* v_arm_3164_, lean_object* v_a_3165_){
_start:
{
lean_object* v___x_3167_; lean_object* v_decision_3184_; lean_object* v___x_3185_; 
v___x_3167_ = lean_st_ref_get(v_a_3165_);
v_decision_3184_ = lean_ctor_get(v___x_3167_, 0);
lean_inc_ref(v_decision_3184_);
lean_dec(v___x_3167_);
v___x_3185_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v_decision_3184_, v_fvar_3163_);
lean_dec_ref(v_decision_3184_);
if (lean_obj_tag(v___x_3185_) == 1)
{
lean_object* v_val_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3213_; 
v_val_3186_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3188_ = v___x_3185_;
v_isShared_3189_ = v_isSharedCheck_3213_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_val_3186_);
lean_dec(v___x_3185_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3213_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3190_; uint8_t v___x_3191_; 
v___x_3190_ = lean_box(3);
v___x_3191_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_val_3186_, v___x_3190_);
if (v___x_3191_ == 0)
{
uint8_t v___x_3192_; 
v___x_3192_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_val_3186_, v_arm_3164_);
lean_dec(v_arm_3164_);
lean_dec(v_val_3186_);
if (v___x_3192_ == 0)
{
lean_del_object(v___x_3188_);
goto v___jp_3168_;
}
else
{
if (v___x_3191_ == 0)
{
lean_object* v___x_3193_; lean_object* v___x_3195_; 
lean_dec(v_fvar_3163_);
v___x_3193_ = lean_box(0);
if (v_isShared_3189_ == 0)
{
lean_ctor_set_tag(v___x_3188_, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3193_);
v___x_3195_ = v___x_3188_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v___x_3193_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
else
{
lean_del_object(v___x_3188_);
goto v___jp_3168_;
}
}
}
else
{
lean_object* v___x_3197_; lean_object* v_decision_3198_; lean_object* v_newArms_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3212_; 
lean_dec(v_val_3186_);
v___x_3197_ = lean_st_ref_take(v_a_3165_);
v_decision_3198_ = lean_ctor_get(v___x_3197_, 0);
v_newArms_3199_ = lean_ctor_get(v___x_3197_, 1);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3201_ = v___x_3197_;
v_isShared_3202_ = v_isSharedCheck_3212_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_newArms_3199_);
lean_inc(v_decision_3198_);
lean_dec(v___x_3197_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3212_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3206_; 
v___x_3203_ = lean_box(0);
v___x_3204_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_decision_3198_, v_fvar_3163_, v_arm_3164_);
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v___x_3204_);
v___x_3206_ = v___x_3201_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3204_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v_newArms_3199_);
v___x_3206_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
lean_object* v___x_3207_; lean_object* v___x_3209_; 
v___x_3207_ = lean_st_ref_put(v_a_3165_, v___x_3206_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set_tag(v___x_3188_, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3203_);
v___x_3209_ = v___x_3188_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3203_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
}
}
else
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
lean_dec(v___x_3185_);
lean_dec(v_arm_3164_);
lean_dec(v_fvar_3163_);
v___x_3214_ = lean_box(0);
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
return v___x_3215_;
}
v___jp_3168_:
{
lean_object* v___x_3169_; lean_object* v_decision_3170_; lean_object* v_newArms_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3183_; 
v___x_3169_ = lean_st_ref_take(v_a_3165_);
v_decision_3170_ = lean_ctor_get(v___x_3169_, 0);
v_newArms_3171_ = lean_ctor_get(v___x_3169_, 1);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3173_ = v___x_3169_;
v_isShared_3174_ = v_isSharedCheck_3183_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_newArms_3171_);
lean_inc(v_decision_3170_);
lean_dec(v___x_3169_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3183_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3179_; 
v___x_3175_ = lean_box(0);
v___x_3176_ = lean_box(2);
v___x_3177_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_decision_3170_, v_fvar_3163_, v___x_3176_);
if (v_isShared_3174_ == 0)
{
lean_ctor_set(v___x_3173_, 0, v___x_3177_);
v___x_3179_ = v___x_3173_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3177_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_newArms_3171_);
v___x_3179_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3180_ = lean_st_ref_put(v_a_3165_, v___x_3179_);
v___x_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3175_);
return v___x_3181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg___boxed(lean_object* v_fvar_3216_, lean_object* v_arm_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvar_3216_, v_arm_3217_, v_a_3218_);
lean_dec(v_a_3218_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar(lean_object* v_fvar_3221_, lean_object* v_arm_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvar_3221_, v_arm_3222_, v_a_3223_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___boxed(lean_object* v_fvar_3231_, lean_object* v_arm_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar(v_fvar_3231_, v_arm_3232_, v_a_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_);
lean_dec(v_a_3238_);
lean_dec_ref(v_a_3237_);
lean_dec(v_a_3236_);
lean_dec_ref(v_a_3235_);
lean_dec(v_a_3234_);
lean_dec(v_a_3233_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0(lean_object* v___x_3241_, lean_object* v_x_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_){
_start:
{
lean_object* v___x_3250_; 
v___x_3250_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_x_3242_, v___x_3241_, v___y_3243_);
return v___x_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0___boxed(lean_object* v___x_3251_, lean_object* v_x_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0(v___x_3251_, v_x_3252_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3255_);
lean_dec(v___y_3254_);
lean_dec(v___y_3253_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0_spec__1(lean_object* v_msg_3261_){
_start:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3262_ = l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default;
v___x_3263_ = lean_panic_fn_borrowed(v___x_3262_, v_msg_3261_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(lean_object* v_a_3264_, lean_object* v_x_3265_){
_start:
{
if (lean_obj_tag(v_x_3265_) == 0)
{
lean_object* v___x_3266_; lean_object* v___x_3267_; 
v___x_3266_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3);
v___x_3267_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0_spec__1(v___x_3266_);
return v___x_3267_;
}
else
{
lean_object* v_key_3268_; lean_object* v_value_3269_; lean_object* v_tail_3270_; uint8_t v___x_3271_; 
v_key_3268_ = lean_ctor_get(v_x_3265_, 0);
v_value_3269_ = lean_ctor_get(v_x_3265_, 1);
v_tail_3270_ = lean_ctor_get(v_x_3265_, 2);
v___x_3271_ = l_Lean_instBEqFVarId_beq(v_key_3268_, v_a_3264_);
if (v___x_3271_ == 0)
{
v_x_3265_ = v_tail_3270_;
goto _start;
}
else
{
lean_inc(v_value_3269_);
return v_value_3269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0___boxed(lean_object* v_a_3273_, lean_object* v_x_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(v_a_3273_, v_x_3274_);
lean_dec(v_x_3274_);
lean_dec(v_a_3273_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(lean_object* v_m_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v_buckets_3278_; lean_object* v___x_3279_; uint64_t v___x_3280_; uint64_t v___x_3281_; uint64_t v___x_3282_; uint64_t v_fold_3283_; uint64_t v___x_3284_; uint64_t v___x_3285_; uint64_t v___x_3286_; size_t v___x_3287_; size_t v___x_3288_; size_t v___x_3289_; size_t v___x_3290_; size_t v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v_buckets_3278_ = lean_ctor_get(v_m_3276_, 1);
v___x_3279_ = lean_array_get_size(v_buckets_3278_);
v___x_3280_ = l_Lean_instHashableFVarId_hash(v_a_3277_);
v___x_3281_ = 32ULL;
v___x_3282_ = lean_uint64_shift_right(v___x_3280_, v___x_3281_);
v_fold_3283_ = lean_uint64_xor(v___x_3280_, v___x_3282_);
v___x_3284_ = 16ULL;
v___x_3285_ = lean_uint64_shift_right(v_fold_3283_, v___x_3284_);
v___x_3286_ = lean_uint64_xor(v_fold_3283_, v___x_3285_);
v___x_3287_ = lean_uint64_to_usize(v___x_3286_);
v___x_3288_ = lean_usize_of_nat(v___x_3279_);
v___x_3289_ = ((size_t)1ULL);
v___x_3290_ = lean_usize_sub(v___x_3288_, v___x_3289_);
v___x_3291_ = lean_usize_land(v___x_3287_, v___x_3290_);
v___x_3292_ = lean_array_uget_borrowed(v_buckets_3278_, v___x_3291_);
v___x_3293_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(v_a_3277_, v___x_3292_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0___boxed(lean_object* v_m_3294_, lean_object* v_a_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(v_m_3294_, v_a_3295_);
lean_dec(v_a_3295_);
lean_dec_ref(v_m_3294_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float(lean_object* v_decl_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_){
_start:
{
lean_object* v___x_3305_; lean_object* v_decision_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3363_; 
v___x_3305_ = lean_st_ref_get(v_a_3298_);
v_decision_3306_ = lean_ctor_get(v___x_3305_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3305_);
if (v_isSharedCheck_3363_ == 0)
{
lean_object* v_unused_3364_; 
v_unused_3364_ = lean_ctor_get(v___x_3305_, 1);
lean_dec(v_unused_3364_);
v___x_3308_ = v___x_3305_;
v_isShared_3309_ = v_isSharedCheck_3363_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_decision_3306_);
lean_dec(v___x_3305_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3363_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
uint8_t v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___y_3314_; lean_object* v___f_3340_; 
v___x_3310_ = 0;
v___x_3311_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_decl_3297_);
v___x_3312_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(v_decision_3306_, v___x_3311_);
lean_dec(v___x_3311_);
lean_dec_ref(v_decision_3306_);
lean_inc(v___x_3312_);
v___f_3340_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3340_, 0, v___x_3312_);
switch(lean_obj_tag(v_decl_3297_))
{
case 0:
{
lean_object* v_decl_3341_; lean_object* v___x_3342_; 
v_decl_3341_ = lean_ctor_get(v_decl_3297_, 0);
lean_inc_ref(v_decl_3341_);
v___x_3342_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v___x_3310_, v___f_3340_, v_decl_3341_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
v___y_3314_ = v___x_3342_;
goto v___jp_3313_;
}
case 1:
{
lean_object* v_decl_3343_; lean_object* v___x_3344_; 
v_decl_3343_ = lean_ctor_get(v_decl_3297_, 0);
lean_inc_ref(v_decl_3343_);
v___x_3344_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3310_, v___f_3340_, v_decl_3343_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
v___y_3314_ = v___x_3344_;
goto v___jp_3313_;
}
case 2:
{
lean_object* v_decl_3345_; lean_object* v___x_3346_; 
v_decl_3345_ = lean_ctor_get(v_decl_3297_, 0);
lean_inc_ref(v_decl_3345_);
v___x_3346_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3310_, v___f_3340_, v_decl_3345_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
v___y_3314_ = v___x_3346_;
goto v___jp_3313_;
}
case 3:
{
lean_object* v_fvarId_3347_; lean_object* v_y_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
v_fvarId_3347_ = lean_ctor_get(v_decl_3297_, 0);
v_y_3348_ = lean_ctor_get(v_decl_3297_, 2);
lean_inc(v___x_3312_);
lean_inc(v_fvarId_3347_);
v___x_3349_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3347_, v___x_3312_, v_a_3298_);
lean_dec_ref(v___x_3349_);
lean_inc(v_y_3348_);
v___x_3350_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v___f_3340_, v_y_3348_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
v___y_3314_ = v___x_3350_;
goto v___jp_3313_;
}
case 4:
{
lean_object* v_fvarId_3351_; lean_object* v_y_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
lean_dec_ref(v___f_3340_);
v_fvarId_3351_ = lean_ctor_get(v_decl_3297_, 0);
v_y_3352_ = lean_ctor_get(v_decl_3297_, 2);
lean_inc_n(v___x_3312_, 2);
lean_inc(v_fvarId_3351_);
v___x_3353_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3351_, v___x_3312_, v_a_3298_);
lean_dec_ref(v___x_3353_);
lean_inc(v_y_3352_);
v___x_3354_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_y_3352_, v___x_3312_, v_a_3298_);
v___y_3314_ = v___x_3354_;
goto v___jp_3313_;
}
case 5:
{
lean_object* v_fvarId_3355_; lean_object* v_y_3356_; lean_object* v_ty_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v_fvarId_3355_ = lean_ctor_get(v_decl_3297_, 0);
v_y_3356_ = lean_ctor_get(v_decl_3297_, 3);
v_ty_3357_ = lean_ctor_get(v_decl_3297_, 4);
lean_inc_n(v___x_3312_, 2);
lean_inc(v_fvarId_3355_);
v___x_3358_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3355_, v___x_3312_, v_a_3298_);
lean_dec_ref(v___x_3358_);
lean_inc(v_y_3356_);
v___x_3359_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_y_3356_, v___x_3312_, v_a_3298_);
lean_dec_ref(v___x_3359_);
lean_inc_ref(v_ty_3357_);
v___x_3360_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v___f_3340_, v_ty_3357_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
v___y_3314_ = v___x_3360_;
goto v___jp_3313_;
}
default: 
{
lean_object* v_fvarId_3361_; lean_object* v___x_3362_; 
lean_dec_ref(v___f_3340_);
v_fvarId_3361_ = lean_ctor_get(v_decl_3297_, 0);
lean_inc(v___x_3312_);
lean_inc(v_fvarId_3361_);
v___x_3362_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3361_, v___x_3312_, v_a_3298_);
v___y_3314_ = v___x_3362_;
goto v___jp_3313_;
}
}
v___jp_3313_:
{
if (lean_obj_tag(v___y_3314_) == 0)
{
lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3338_; 
v_isSharedCheck_3338_ = !lean_is_exclusive(v___y_3314_);
if (v_isSharedCheck_3338_ == 0)
{
lean_object* v_unused_3339_; 
v_unused_3339_ = lean_ctor_get(v___y_3314_, 0);
lean_dec(v_unused_3339_);
v___x_3316_ = v___y_3314_;
v_isShared_3317_ = v_isSharedCheck_3338_;
goto v_resetjp_3315_;
}
else
{
lean_dec(v___y_3314_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3338_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3318_; lean_object* v_decision_3319_; lean_object* v_newArms_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3337_; 
v___x_3318_ = lean_st_ref_take(v_a_3298_);
v_decision_3319_ = lean_ctor_get(v___x_3318_, 0);
v_newArms_3320_ = lean_ctor_get(v___x_3318_, 1);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3322_ = v___x_3318_;
v_isShared_3323_ = v_isSharedCheck_3337_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_newArms_3320_);
lean_inc(v_decision_3319_);
lean_dec(v___x_3318_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3337_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3327_; 
v___x_3324_ = lean_box(0);
v___x_3325_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_newArms_3320_, v___x_3312_);
if (v_isShared_3309_ == 0)
{
lean_ctor_set_tag(v___x_3308_, 1);
lean_ctor_set(v___x_3308_, 1, v___x_3325_);
lean_ctor_set(v___x_3308_, 0, v_decl_3297_);
v___x_3327_ = v___x_3308_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_decl_3297_);
lean_ctor_set(v_reuseFailAlloc_3336_, 1, v___x_3325_);
v___x_3327_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
lean_object* v___x_3328_; lean_object* v___x_3330_; 
v___x_3328_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_newArms_3320_, v___x_3312_, v___x_3327_);
if (v_isShared_3323_ == 0)
{
lean_ctor_set(v___x_3322_, 1, v___x_3328_);
v___x_3330_ = v___x_3322_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_decision_3319_);
lean_ctor_set(v_reuseFailAlloc_3335_, 1, v___x_3328_);
v___x_3330_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
lean_object* v___x_3331_; lean_object* v___x_3333_; 
v___x_3331_ = lean_st_ref_put(v_a_3298_, v___x_3330_);
if (v_isShared_3317_ == 0)
{
lean_ctor_set(v___x_3316_, 0, v___x_3324_);
v___x_3333_ = v___x_3316_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3324_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
}
}
else
{
lean_dec(v___x_3312_);
lean_del_object(v___x_3308_);
lean_dec_ref(v_decl_3297_);
return v___y_3314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___boxed(lean_object* v_decl_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_){
_start:
{
lean_object* v_res_3373_; 
v_res_3373_ = l_Lean_Compiler_LCNF_FloatLetIn_float(v_decl_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
lean_dec(v_a_3371_);
lean_dec_ref(v_a_3370_);
lean_dec(v_a_3369_);
lean_dec_ref(v_a_3368_);
lean_dec(v_a_3367_);
lean_dec(v_a_3366_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(lean_object* v_as_x27_3374_, lean_object* v_b_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
if (lean_obj_tag(v_as_x27_3374_) == 0)
{
lean_object* v___x_3383_; 
v___x_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3383_, 0, v_b_3375_);
return v___x_3383_;
}
else
{
lean_object* v_head_3384_; lean_object* v_tail_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v_decision_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v_head_3384_ = lean_ctor_get(v_as_x27_3374_, 0);
v_tail_3385_ = lean_ctor_get(v_as_x27_3374_, 1);
v___x_3386_ = lean_box(0);
v___x_3387_ = lean_st_ref_get(v___y_3376_);
v_decision_3388_ = lean_ctor_get(v___x_3387_, 0);
lean_inc_ref(v_decision_3388_);
lean_dec(v___x_3387_);
v___x_3389_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_3384_);
v___x_3390_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(v_decision_3388_, v___x_3389_);
lean_dec(v___x_3389_);
lean_dec_ref(v_decision_3388_);
v___x_3391_ = lean_box(3);
v___x_3392_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v___x_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; uint8_t v___x_3394_; 
v___x_3393_ = lean_box(2);
v___x_3394_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v___x_3390_, v___x_3393_);
lean_dec(v___x_3390_);
if (v___x_3394_ == 0)
{
lean_object* v___x_3395_; 
lean_inc(v_head_3384_);
v___x_3395_ = l_Lean_Compiler_LCNF_FloatLetIn_float(v_head_3384_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_dec_ref_known(v___x_3395_, 1);
v_as_x27_3374_ = v_tail_3385_;
v_b_3375_ = v___x_3386_;
goto _start;
}
else
{
return v___x_3395_;
}
}
else
{
lean_object* v___x_3397_; 
lean_inc(v_head_3384_);
v___x_3397_ = l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(v_head_3384_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_dec_ref_known(v___x_3397_, 1);
v_as_x27_3374_ = v_tail_3385_;
v_b_3375_ = v___x_3386_;
goto _start;
}
else
{
return v___x_3397_;
}
}
}
else
{
uint8_t v___x_3399_; lean_object* v___x_3400_; 
lean_dec(v___x_3390_);
v___x_3399_ = 0;
v___x_3400_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v___x_3399_, v_head_3384_, v___y_3379_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_dec_ref_known(v___x_3400_, 1);
v_as_x27_3374_ = v_tail_3385_;
v_b_3375_ = v___x_3386_;
goto _start;
}
else
{
return v___x_3400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg___boxed(lean_object* v_as_x27_3402_, lean_object* v_b_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(v_as_x27_3402_, v_b_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_);
lean_dec(v___y_3409_);
lean_dec_ref(v___y_3408_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
lean_dec(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec(v_as_x27_3402_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = lean_box(0);
v___x_3420_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(v_a_3413_, v___x_3419_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3427_ == 0)
{
lean_object* v_unused_3428_; 
v_unused_3428_ = lean_ctor_get(v___x_3420_, 0);
lean_dec(v_unused_3428_);
v___x_3422_ = v___x_3420_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_dec(v___x_3420_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v___x_3419_);
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3419_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
else
{
return v___x_3420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases___boxed(lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_){
_start:
{
lean_object* v_res_3436_; 
v_res_3436_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_);
lean_dec(v_a_3434_);
lean_dec_ref(v_a_3433_);
lean_dec(v_a_3432_);
lean_dec_ref(v_a_3431_);
lean_dec(v_a_3430_);
lean_dec(v_a_3429_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0(lean_object* v_as_3437_, lean_object* v_as_x27_3438_, lean_object* v_b_3439_, lean_object* v_a_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v___x_3448_; 
v___x_3448_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(v_as_x27_3438_, v_b_3439_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___boxed(lean_object* v_as_3449_, lean_object* v_as_x27_3450_, lean_object* v_b_3451_, lean_object* v_a_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0(v_as_3449_, v_as_x27_3450_, v_b_3451_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
lean_dec(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec(v___y_3453_);
lean_dec(v_as_x27_3450_);
lean_dec(v_as_3449_);
return v_res_3460_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3461_; 
v___x_3461_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3461_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3462_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0);
v___x_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3462_);
return v___x_3463_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3464_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1);
v___x_3465_ = lean_unsigned_to_nat(0u);
v___x_3466_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
lean_ctor_set(v___x_3466_, 1, v___x_3465_);
lean_ctor_set(v___x_3466_, 2, v___x_3465_);
lean_ctor_set(v___x_3466_, 3, v___x_3465_);
lean_ctor_set(v___x_3466_, 4, v___x_3464_);
lean_ctor_set(v___x_3466_, 5, v___x_3464_);
lean_ctor_set(v___x_3466_, 6, v___x_3464_);
lean_ctor_set(v___x_3466_, 7, v___x_3464_);
lean_ctor_set(v___x_3466_, 8, v___x_3464_);
lean_ctor_set(v___x_3466_, 9, v___x_3464_);
lean_ctor_set(v___x_3466_, 10, v___x_3464_);
return v___x_3466_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3467_; double v___x_3468_; 
v___x_3467_ = lean_unsigned_to_nat(0u);
v___x_3468_ = lean_float_of_nat(v___x_3467_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(lean_object* v_cls_3472_, lean_object* v_msg_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v_toCold_3479_; lean_object* v_ref_3480_; lean_object* v___x_3481_; lean_object* v_env_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v_toCold_3479_ = lean_ctor_get(v___y_3476_, 0);
v_ref_3480_ = lean_ctor_get(v___y_3476_, 2);
v___x_3481_ = lean_st_ref_get(v___y_3477_);
v_env_3482_ = lean_ctor_get(v___x_3481_, 0);
lean_inc_ref(v_env_3482_);
lean_dec(v___x_3481_);
v___x_3483_ = lean_st_ref_get(v___y_3475_);
v___x_3484_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_3474_);
if (lean_obj_tag(v___x_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3543_; 
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3487_ = v___x_3484_;
v_isShared_3488_ = v_isSharedCheck_3543_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3543_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v_lctx_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3541_; 
v_lctx_3489_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3541_ == 0)
{
lean_object* v_unused_3542_; 
v_unused_3542_ = lean_ctor_get(v___x_3483_, 1);
lean_dec(v_unused_3542_);
v___x_3491_ = v___x_3483_;
v_isShared_3492_ = v_isSharedCheck_3541_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_lctx_3489_);
lean_dec(v___x_3483_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3541_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v_options_3493_; uint8_t v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3499_; 
v_options_3493_ = lean_ctor_get(v_toCold_3479_, 2);
v___x_3494_ = lean_unbox(v_a_3485_);
lean_dec(v_a_3485_);
v___x_3495_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_3489_, v___x_3494_);
lean_dec_ref(v_lctx_3489_);
v___x_3496_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2);
lean_inc_ref(v_options_3493_);
v___x_3497_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3497_, 0, v_env_3482_);
lean_ctor_set(v___x_3497_, 1, v___x_3496_);
lean_ctor_set(v___x_3497_, 2, v___x_3495_);
lean_ctor_set(v___x_3497_, 3, v_options_3493_);
if (v_isShared_3492_ == 0)
{
lean_ctor_set_tag(v___x_3491_, 3);
lean_ctor_set(v___x_3491_, 1, v_msg_3473_);
lean_ctor_set(v___x_3491_, 0, v___x_3497_);
v___x_3499_ = v___x_3491_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3497_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v_msg_3473_);
v___x_3499_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
lean_object* v___x_3500_; lean_object* v_traceState_3501_; lean_object* v_env_3502_; lean_object* v_nextMacroScope_3503_; lean_object* v_ngen_3504_; lean_object* v_auxDeclNGen_3505_; lean_object* v_cache_3506_; lean_object* v_messages_3507_; lean_object* v_infoState_3508_; lean_object* v_snapshotTasks_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3539_; 
v___x_3500_ = lean_st_ref_take(v___y_3477_);
v_traceState_3501_ = lean_ctor_get(v___x_3500_, 4);
v_env_3502_ = lean_ctor_get(v___x_3500_, 0);
v_nextMacroScope_3503_ = lean_ctor_get(v___x_3500_, 1);
v_ngen_3504_ = lean_ctor_get(v___x_3500_, 2);
v_auxDeclNGen_3505_ = lean_ctor_get(v___x_3500_, 3);
v_cache_3506_ = lean_ctor_get(v___x_3500_, 5);
v_messages_3507_ = lean_ctor_get(v___x_3500_, 6);
v_infoState_3508_ = lean_ctor_get(v___x_3500_, 7);
v_snapshotTasks_3509_ = lean_ctor_get(v___x_3500_, 8);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3511_ = v___x_3500_;
v_isShared_3512_ = v_isSharedCheck_3539_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_snapshotTasks_3509_);
lean_inc(v_infoState_3508_);
lean_inc(v_messages_3507_);
lean_inc(v_cache_3506_);
lean_inc(v_traceState_3501_);
lean_inc(v_auxDeclNGen_3505_);
lean_inc(v_ngen_3504_);
lean_inc(v_nextMacroScope_3503_);
lean_inc(v_env_3502_);
lean_dec(v___x_3500_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3539_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
uint64_t v_tid_3513_; lean_object* v_traces_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3538_; 
v_tid_3513_ = lean_ctor_get_uint64(v_traceState_3501_, sizeof(void*)*1);
v_traces_3514_ = lean_ctor_get(v_traceState_3501_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_traceState_3501_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3516_ = v_traceState_3501_;
v_isShared_3517_ = v_isSharedCheck_3538_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_traces_3514_);
lean_dec(v_traceState_3501_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3538_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; double v___x_3520_; uint8_t v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3529_; 
v___x_3518_ = lean_box(0);
v___x_3519_ = lean_box(0);
v___x_3520_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3);
v___x_3521_ = 0;
v___x_3522_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4));
v___x_3523_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3523_, 0, v_cls_3472_);
lean_ctor_set(v___x_3523_, 1, v___x_3519_);
lean_ctor_set(v___x_3523_, 2, v___x_3522_);
lean_ctor_set_float(v___x_3523_, sizeof(void*)*3, v___x_3520_);
lean_ctor_set_float(v___x_3523_, sizeof(void*)*3 + 8, v___x_3520_);
lean_ctor_set_uint8(v___x_3523_, sizeof(void*)*3 + 16, v___x_3521_);
v___x_3524_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5));
v___x_3525_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3523_);
lean_ctor_set(v___x_3525_, 1, v___x_3499_);
lean_ctor_set(v___x_3525_, 2, v___x_3524_);
lean_inc(v_ref_3480_);
v___x_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3526_, 0, v_ref_3480_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = l_Lean_PersistentArray_push___redArg(v_traces_3514_, v___x_3526_);
if (v_isShared_3517_ == 0)
{
lean_ctor_set(v___x_3516_, 0, v___x_3527_);
v___x_3529_ = v___x_3516_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3527_);
lean_ctor_set_uint64(v_reuseFailAlloc_3537_, sizeof(void*)*1, v_tid_3513_);
v___x_3529_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
lean_object* v___x_3531_; 
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 4, v___x_3529_);
v___x_3531_ = v___x_3511_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_env_3502_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v_nextMacroScope_3503_);
lean_ctor_set(v_reuseFailAlloc_3536_, 2, v_ngen_3504_);
lean_ctor_set(v_reuseFailAlloc_3536_, 3, v_auxDeclNGen_3505_);
lean_ctor_set(v_reuseFailAlloc_3536_, 4, v___x_3529_);
lean_ctor_set(v_reuseFailAlloc_3536_, 5, v_cache_3506_);
lean_ctor_set(v_reuseFailAlloc_3536_, 6, v_messages_3507_);
lean_ctor_set(v_reuseFailAlloc_3536_, 7, v_infoState_3508_);
lean_ctor_set(v_reuseFailAlloc_3536_, 8, v_snapshotTasks_3509_);
v___x_3531_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
lean_object* v___x_3532_; lean_object* v___x_3534_; 
v___x_3532_ = lean_st_ref_put(v___y_3477_, v___x_3531_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v___x_3518_);
v___x_3534_ = v___x_3487_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___x_3518_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
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
lean_object* v_a_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3551_; 
lean_dec(v___x_3483_);
lean_dec_ref(v_env_3482_);
lean_dec_ref(v_msg_3473_);
lean_dec(v_cls_3472_);
v_a_3544_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3546_ = v___x_3484_;
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_a_3544_);
lean_dec(v___x_3484_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3544_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___boxed(lean_object* v_cls_3552_, lean_object* v_msg_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(v_cls_3552_, v_msg_3553_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
lean_dec(v___y_3557_);
lean_dec_ref(v___y_3556_);
lean_dec(v___y_3555_);
lean_dec_ref(v___y_3554_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0(lean_object* v_cls_3560_, lean_object* v_msg_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(v_cls_3560_, v_msg_3561_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___boxed(lean_object* v_cls_3569_, lean_object* v_msg_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0(v_cls_3569_, v_msg_3570_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec(v___y_3571_);
return v_res_3577_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2));
v___x_3587_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4));
v___x_3588_ = l_Lean_Name_append(v___x_3587_, v___x_3586_);
return v___x_3588_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7(void){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3590_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6));
v___x_3591_ = l_Lean_stringToMessageData(v___x_3590_);
return v___x_3591_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9(void){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3593_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8));
v___x_3594_ = l_Lean_stringToMessageData(v___x_3593_);
return v___x_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go(lean_object* v_code_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_){
_start:
{
switch(lean_obj_tag(v_code_3595_))
{
case 0:
{
lean_object* v_decl_3602_; lean_object* v_k_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v_decl_3602_ = lean_ctor_get(v_code_3595_, 0);
lean_inc_ref(v_decl_3602_);
v_k_3603_ = lean_ctor_get(v_code_3595_, 1);
lean_inc_ref(v_k_3603_);
lean_dec_ref_known(v_code_3595_, 2);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v_decl_3602_);
v___x_3605_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3605_, 0, v_k_3603_);
v___x_3606_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v___x_3604_, v___x_3605_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3606_;
}
case 1:
{
lean_object* v_decl_3607_; lean_object* v_k_3608_; lean_object* v_params_3609_; lean_object* v_type_3610_; lean_object* v_value_3611_; uint8_t v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v_decl_3607_ = lean_ctor_get(v_code_3595_, 0);
lean_inc_ref(v_decl_3607_);
v_k_3608_ = lean_ctor_get(v_code_3595_, 1);
lean_inc_ref(v_k_3608_);
lean_dec_ref_known(v_code_3595_, 2);
v_params_3609_ = lean_ctor_get(v_decl_3607_, 2);
lean_inc_ref(v_params_3609_);
v_type_3610_ = lean_ctor_get(v_decl_3607_, 3);
lean_inc_ref(v_type_3610_);
v_value_3611_ = lean_ctor_get(v_decl_3607_, 4);
v___x_3612_ = 0;
lean_inc_ref(v_value_3611_);
v___x_3613_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3613_, 0, v_value_3611_);
v___x_3614_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v___x_3613_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3634_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3617_ = v___x_3614_;
v_isShared_3618_ = v_isSharedCheck_3634_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3614_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3634_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3619_; 
v___x_3619_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3612_, v_decl_3607_, v_type_3610_, v_params_3609_, v_a_3615_, v_a_3598_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3622_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_a_3620_);
lean_dec_ref_known(v___x_3619_, 1);
if (v_isShared_3618_ == 0)
{
lean_ctor_set_tag(v___x_3617_, 1);
lean_ctor_set(v___x_3617_, 0, v_a_3620_);
v___x_3622_ = v___x_3617_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3620_);
v___x_3622_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3623_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3623_, 0, v_k_3608_);
v___x_3624_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v___x_3622_, v___x_3623_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3624_;
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
lean_del_object(v___x_3617_);
lean_dec_ref(v_k_3608_);
v_a_3626_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3619_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3619_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_3610_);
lean_dec_ref(v_params_3609_);
lean_dec_ref(v_k_3608_);
lean_dec_ref(v_decl_3607_);
return v___x_3614_;
}
}
case 2:
{
lean_object* v_decl_3635_; lean_object* v_k_3636_; lean_object* v_params_3637_; lean_object* v_type_3638_; lean_object* v_value_3639_; uint8_t v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v_decl_3635_ = lean_ctor_get(v_code_3595_, 0);
lean_inc_ref(v_decl_3635_);
v_k_3636_ = lean_ctor_get(v_code_3595_, 1);
lean_inc_ref(v_k_3636_);
lean_dec_ref_known(v_code_3595_, 2);
v_params_3637_ = lean_ctor_get(v_decl_3635_, 2);
lean_inc_ref(v_params_3637_);
v_type_3638_ = lean_ctor_get(v_decl_3635_, 3);
lean_inc_ref(v_type_3638_);
v_value_3639_ = lean_ctor_get(v_decl_3635_, 4);
v___x_3640_ = 0;
lean_inc_ref(v_value_3639_);
v___x_3641_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3641_, 0, v_value_3639_);
v___x_3642_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v___x_3641_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3662_; 
v_a_3643_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3645_ = v___x_3642_;
v_isShared_3646_ = v_isSharedCheck_3662_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3642_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3662_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3647_; 
v___x_3647_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3640_, v_decl_3635_, v_type_3638_, v_params_3637_, v_a_3643_, v_a_3598_);
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_object* v_a_3648_; lean_object* v___x_3650_; 
v_a_3648_ = lean_ctor_get(v___x_3647_, 0);
lean_inc(v_a_3648_);
lean_dec_ref_known(v___x_3647_, 1);
if (v_isShared_3646_ == 0)
{
lean_ctor_set_tag(v___x_3645_, 2);
lean_ctor_set(v___x_3645_, 0, v_a_3648_);
v___x_3650_ = v___x_3645_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3648_);
v___x_3650_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3651_, 0, v_k_3636_);
v___x_3652_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v___x_3650_, v___x_3651_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3652_;
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_del_object(v___x_3645_);
lean_dec_ref(v_k_3636_);
v_a_3654_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3647_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3647_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_3638_);
lean_dec_ref(v_params_3637_);
lean_dec_ref(v_k_3636_);
lean_dec_ref(v_decl_3635_);
return v___x_3642_;
}
}
case 4:
{
lean_object* v_cases_3663_; lean_object* v___x_3664_; 
v_cases_3663_ = lean_ctor_get(v_code_3595_, 0);
lean_inc_ref_n(v_cases_3663_, 2);
v___x_3664_ = l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(v_cases_3663_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v___x_3664_, 1);
v___x_3666_ = l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(v_cases_3663_);
v___x_3667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3667_, 0, v_a_3665_);
lean_ctor_set(v___x_3667_, 1, v___x_3666_);
v___x_3668_ = lean_st_mk_ref(v___x_3667_);
v___x_3669_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(v___x_3668_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v___x_3670_; lean_object* v_typeName_3671_; lean_object* v_resultType_3672_; lean_object* v_discr_3673_; lean_object* v_alts_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3714_; 
lean_dec_ref_known(v___x_3669_, 1);
v___x_3670_ = lean_st_ref_get(v___x_3668_);
lean_dec(v___x_3668_);
v_typeName_3671_ = lean_ctor_get(v_cases_3663_, 0);
v_resultType_3672_ = lean_ctor_get(v_cases_3663_, 1);
v_discr_3673_ = lean_ctor_get(v_cases_3663_, 2);
v_alts_3674_ = lean_ctor_get(v_cases_3663_, 3);
v_isSharedCheck_3714_ = !lean_is_exclusive(v_cases_3663_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3676_ = v_cases_3663_;
v_isShared_3677_ = v_isSharedCheck_3714_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_alts_3674_);
lean_inc(v_discr_3673_);
lean_inc(v_resultType_3672_);
lean_inc(v_typeName_3671_);
lean_dec(v_cases_3663_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3714_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v_newArms_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v_newArms_3678_ = lean_ctor_get(v___x_3670_, 1);
lean_inc_ref(v_newArms_3678_);
lean_dec(v___x_3670_);
v___x_3679_ = lean_box(2);
v___x_3680_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_newArms_3678_, v___x_3679_);
v___x_3681_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3674_);
v___x_3682_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(v_newArms_3678_, v___x_3681_, v_alts_3674_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
lean_dec_ref(v_newArms_3678_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3705_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3705_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3705_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___y_3688_; size_t v___x_3699_; size_t v___x_3700_; uint8_t v___x_3701_; 
v___x_3699_ = lean_ptr_addr(v_alts_3674_);
lean_dec_ref(v_alts_3674_);
v___x_3700_ = lean_ptr_addr(v_a_3683_);
v___x_3701_ = lean_usize_dec_eq(v___x_3699_, v___x_3700_);
if (v___x_3701_ == 0)
{
lean_dec_ref_known(v_code_3595_, 1);
goto v___jp_3694_;
}
else
{
size_t v___x_3702_; uint8_t v___x_3703_; 
v___x_3702_ = lean_ptr_addr(v_resultType_3672_);
v___x_3703_ = lean_usize_dec_eq(v___x_3702_, v___x_3702_);
if (v___x_3703_ == 0)
{
lean_dec_ref_known(v_code_3595_, 1);
goto v___jp_3694_;
}
else
{
uint8_t v___x_3704_; 
v___x_3704_ = l_Lean_instBEqFVarId_beq(v_discr_3673_, v_discr_3673_);
if (v___x_3704_ == 0)
{
lean_dec_ref_known(v_code_3595_, 1);
goto v___jp_3694_;
}
else
{
lean_dec(v_a_3683_);
lean_del_object(v___x_3676_);
lean_dec(v_discr_3673_);
lean_dec_ref(v_resultType_3672_);
lean_dec(v_typeName_3671_);
v___y_3688_ = v_code_3595_;
goto v___jp_3687_;
}
}
}
v___jp_3687_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3689_ = lean_array_mk(v___x_3680_);
v___x_3690_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_3689_, v___y_3688_);
lean_dec_ref(v___x_3689_);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3690_);
v___x_3692_ = v___x_3685_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
v___jp_3694_:
{
lean_object* v___x_3696_; 
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 3, v_a_3683_);
v___x_3696_ = v___x_3676_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_typeName_3671_);
lean_ctor_set(v_reuseFailAlloc_3698_, 1, v_resultType_3672_);
lean_ctor_set(v_reuseFailAlloc_3698_, 2, v_discr_3673_);
lean_ctor_set(v_reuseFailAlloc_3698_, 3, v_a_3683_);
v___x_3696_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
lean_object* v___x_3697_; 
v___x_3697_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3697_, 0, v___x_3696_);
v___y_3688_ = v___x_3697_;
goto v___jp_3687_;
}
}
}
}
else
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3713_; 
lean_dec(v___x_3680_);
lean_del_object(v___x_3676_);
lean_dec_ref(v_alts_3674_);
lean_dec(v_discr_3673_);
lean_dec_ref(v_resultType_3672_);
lean_dec(v_typeName_3671_);
lean_dec_ref_known(v_code_3595_, 1);
v_a_3706_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3708_ = v___x_3682_;
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v___x_3682_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
}
else
{
lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3722_; 
lean_dec(v___x_3668_);
lean_dec_ref(v_cases_3663_);
lean_dec_ref_known(v_code_3595_, 1);
v_a_3715_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3717_ = v___x_3669_;
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v___x_3669_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3720_; 
if (v_isShared_3718_ == 0)
{
v___x_3720_ = v___x_3717_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v_a_3715_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
lean_dec_ref(v_cases_3663_);
lean_dec_ref_known(v_code_3595_, 1);
v_a_3723_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3664_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3664_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
default: 
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
lean_inc(v_a_3596_);
v___x_3731_ = lean_array_mk(v_a_3596_);
v___x_3732_ = l_Array_reverse___redArg(v___x_3731_);
v___x_3733_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_3732_, v_code_3595_);
lean_dec_ref(v___x_3732_);
v___x_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3733_);
return v___x_3734_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed(lean_object* v_code_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go(v_code_3735_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_, v_a_3740_);
lean_dec(v_a_3740_);
lean_dec_ref(v_a_3739_);
lean_dec(v_a_3738_);
lean_dec_ref(v_a_3737_);
lean_dec(v_a_3736_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(lean_object* v___x_3743_, lean_object* v_i_3744_, lean_object* v_as_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3752_ = lean_array_get_size(v_as_3745_);
v___x_3753_ = lean_nat_dec_lt(v_i_3744_, v___x_3752_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; 
lean_dec(v_i_3744_);
v___x_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3754_, 0, v_as_3745_);
return v___x_3754_;
}
else
{
lean_object* v_toCold_3755_; lean_object* v_options_3756_; lean_object* v_inheritedTraceOptions_3757_; uint8_t v_hasTrace_3758_; lean_object* v_a_3759_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___y_3793_; lean_object* v___y_3794_; lean_object* v___y_3795_; lean_object* v___y_3796_; 
v_toCold_3755_ = lean_ctor_get(v___y_3749_, 0);
v_options_3756_ = lean_ctor_get(v_toCold_3755_, 2);
v_inheritedTraceOptions_3757_ = lean_ctor_get(v_toCold_3755_, 11);
v_hasTrace_3758_ = lean_ctor_get_uint8(v_options_3756_, sizeof(void*)*1);
v_a_3759_ = lean_array_fget_borrowed(v_as_3745_, v_i_3744_);
v___x_3790_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v_a_3759_);
v___x_3791_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v___x_3743_, v___x_3790_);
if (v_hasTrace_3758_ == 0)
{
lean_dec(v___x_3790_);
v___y_3793_ = v___y_3747_;
v___y_3794_ = v___y_3748_;
v___y_3795_ = v___y_3749_;
v___y_3796_ = v___y_3750_;
goto v___jp_3792_;
}
else
{
lean_object* v___x_3801_; lean_object* v___x_3802_; uint8_t v___x_3803_; 
v___x_3801_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2));
v___x_3802_ = lean_obj_once(&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5, &l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5_once, _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5);
v___x_3803_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3757_, v_options_3756_, v___x_3802_);
if (v___x_3803_ == 0)
{
lean_dec(v___x_3790_);
v___y_3793_ = v___y_3747_;
v___y_3794_ = v___y_3748_;
v___y_3795_ = v___y_3749_;
v___y_3796_ = v___y_3750_;
goto v___jp_3792_;
}
else
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3804_ = lean_obj_once(&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7, &l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7_once, _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7);
v___x_3805_ = lean_unsigned_to_nat(0u);
v___x_3806_ = l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(v___x_3790_, v___x_3805_);
v___x_3807_ = l_Lean_MessageData_ofFormat(v___x_3806_);
v___x_3808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3804_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = lean_obj_once(&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9, &l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9_once, _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9);
v___x_3810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3808_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
v___x_3811_ = l_List_lengthTR___redArg(v___x_3791_);
v___x_3812_ = l_Nat_reprFast(v___x_3811_);
v___x_3813_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3812_);
v___x_3814_ = l_Lean_MessageData_ofFormat(v___x_3813_);
v___x_3815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3810_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
v___x_3816_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(v___x_3801_, v___x_3815_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_dec_ref_known(v___x_3816_, 1);
v___y_3793_ = v___y_3747_;
v___y_3794_ = v___y_3748_;
v___y_3795_ = v___y_3749_;
v___y_3796_ = v___y_3750_;
goto v___jp_3792_;
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v___x_3791_);
lean_dec_ref(v_as_3745_);
lean_dec(v_i_3744_);
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3816_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3816_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
}
v___jp_3760_:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3767_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___y_3764_, v___y_3766_);
lean_dec_ref(v___y_3764_);
v___x_3768_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3768_, 0, v___x_3767_);
v___x_3769_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v___x_3768_, v___y_3763_, v___y_3765_, v___y_3761_, v___y_3762_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3771_; size_t v___x_3772_; size_t v___x_3773_; uint8_t v___x_3774_; 
v_a_3770_ = lean_ctor_get(v___x_3769_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v___x_3769_, 1);
lean_inc(v_a_3759_);
v___x_3771_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_3759_, v_a_3770_);
v___x_3772_ = lean_ptr_addr(v_a_3759_);
v___x_3773_ = lean_ptr_addr(v___x_3771_);
v___x_3774_ = lean_usize_dec_eq(v___x_3772_, v___x_3773_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3775_ = lean_unsigned_to_nat(1u);
v___x_3776_ = lean_nat_add(v_i_3744_, v___x_3775_);
v___x_3777_ = lean_array_fset(v_as_3745_, v_i_3744_, v___x_3771_);
lean_dec(v_i_3744_);
v_i_3744_ = v___x_3776_;
v_as_3745_ = v___x_3777_;
goto _start;
}
else
{
lean_object* v___x_3779_; lean_object* v___x_3780_; 
lean_dec_ref(v___x_3771_);
v___x_3779_ = lean_unsigned_to_nat(1u);
v___x_3780_ = lean_nat_add(v_i_3744_, v___x_3779_);
lean_dec(v_i_3744_);
v_i_3744_ = v___x_3780_;
goto _start;
}
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
lean_dec_ref(v_as_3745_);
lean_dec(v_i_3744_);
v_a_3782_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3769_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3769_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
v___jp_3792_:
{
lean_object* v___x_3797_; 
v___x_3797_ = lean_array_mk(v___x_3791_);
switch(lean_obj_tag(v_a_3759_))
{
case 0:
{
lean_object* v_code_3798_; 
v_code_3798_ = lean_ctor_get(v_a_3759_, 2);
lean_inc_ref(v_code_3798_);
v___y_3761_ = v___y_3795_;
v___y_3762_ = v___y_3796_;
v___y_3763_ = v___y_3793_;
v___y_3764_ = v___x_3797_;
v___y_3765_ = v___y_3794_;
v___y_3766_ = v_code_3798_;
goto v___jp_3760_;
}
case 1:
{
lean_object* v_code_3799_; 
v_code_3799_ = lean_ctor_get(v_a_3759_, 1);
lean_inc_ref(v_code_3799_);
v___y_3761_ = v___y_3795_;
v___y_3762_ = v___y_3796_;
v___y_3763_ = v___y_3793_;
v___y_3764_ = v___x_3797_;
v___y_3765_ = v___y_3794_;
v___y_3766_ = v_code_3799_;
goto v___jp_3760_;
}
default: 
{
lean_object* v_code_3800_; 
v_code_3800_ = lean_ctor_get(v_a_3759_, 0);
lean_inc_ref(v_code_3800_);
v___y_3761_ = v___y_3795_;
v___y_3762_ = v___y_3796_;
v___y_3763_ = v___y_3793_;
v___y_3764_ = v___x_3797_;
v___y_3765_ = v___y_3794_;
v___y_3766_ = v_code_3800_;
goto v___jp_3760_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___boxed(lean_object* v___x_3825_, lean_object* v_i_3826_, lean_object* v_as_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(v___x_3825_, v_i_3826_, v_as_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___x_3825_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(lean_object* v_f_3835_, lean_object* v_v_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
if (lean_obj_tag(v_v_3836_) == 0)
{
lean_object* v_code_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3867_; 
v_code_3843_ = lean_ctor_get(v_v_3836_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v_v_3836_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3845_ = v_v_3836_;
v_isShared_3846_ = v_isSharedCheck_3867_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_code_3843_);
lean_dec(v_v_3836_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3867_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3847_; 
lean_inc(v___y_3841_);
lean_inc_ref(v___y_3840_);
lean_inc(v___y_3839_);
lean_inc_ref(v___y_3838_);
lean_inc(v___y_3837_);
v___x_3847_ = lean_apply_7(v_f_3835_, v_code_3843_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, lean_box(0));
if (lean_obj_tag(v___x_3847_) == 0)
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3858_; 
v_a_3848_ = lean_ctor_get(v___x_3847_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3847_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3850_ = v___x_3847_;
v_isShared_3851_ = v_isSharedCheck_3858_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3847_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3858_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3846_ == 0)
{
lean_ctor_set(v___x_3845_, 0, v_a_3848_);
v___x_3853_ = v___x_3845_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
lean_object* v___x_3855_; 
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 0, v___x_3853_);
v___x_3855_ = v___x_3850_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3853_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
lean_del_object(v___x_3845_);
v_a_3859_ = lean_ctor_get(v___x_3847_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3847_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3847_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3847_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
}
else
{
lean_object* v___x_3868_; 
lean_dec_ref(v_f_3835_);
v___x_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3868_, 0, v_v_3836_);
return v___x_3868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg___boxed(lean_object* v_f_3869_, lean_object* v_v_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(v_f_3869_, v_v_3870_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0(uint8_t v_pu_3878_, lean_object* v_f_3879_, lean_object* v_v_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v___x_3887_; 
v___x_3887_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(v_f_3879_, v_v_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___boxed(lean_object* v_pu_3888_, lean_object* v_f_3889_, lean_object* v_v_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
uint8_t v_pu_boxed_3897_; lean_object* v_res_3898_; 
v_pu_boxed_3897_ = lean_unbox(v_pu_3888_);
v_res_3898_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0(v_pu_boxed_3897_, v_f_3889_, v_v_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec(v___y_3895_);
lean_dec_ref(v___y_3894_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(lean_object* v_decl_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_){
_start:
{
lean_object* v_toSignature_3906_; lean_object* v_value_3907_; uint8_t v_recursive_3908_; lean_object* v_inlineAttr_x3f_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3935_; 
v_toSignature_3906_ = lean_ctor_get(v_decl_3900_, 0);
v_value_3907_ = lean_ctor_get(v_decl_3900_, 1);
v_recursive_3908_ = lean_ctor_get_uint8(v_decl_3900_, sizeof(void*)*3);
v_inlineAttr_x3f_3909_ = lean_ctor_get(v_decl_3900_, 2);
v_isSharedCheck_3935_ = !lean_is_exclusive(v_decl_3900_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3911_ = v_decl_3900_;
v_isShared_3912_ = v_isSharedCheck_3935_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_inlineAttr_x3f_3909_);
lean_inc(v_value_3907_);
lean_inc(v_toSignature_3906_);
lean_dec(v_decl_3900_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3935_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0));
v___x_3914_ = lean_box(0);
v___x_3915_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(v___x_3913_, v_value_3907_, v___x_3914_, v_a_3901_, v_a_3902_, v_a_3903_, v_a_3904_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3926_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3926_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3926_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3921_; 
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 1, v_a_3916_);
v___x_3921_ = v___x_3911_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_toSignature_3906_);
lean_ctor_set(v_reuseFailAlloc_3925_, 1, v_a_3916_);
lean_ctor_set(v_reuseFailAlloc_3925_, 2, v_inlineAttr_x3f_3909_);
lean_ctor_set_uint8(v_reuseFailAlloc_3925_, sizeof(void*)*3, v_recursive_3908_);
v___x_3921_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
lean_object* v___x_3923_; 
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 0, v___x_3921_);
v___x_3923_ = v___x_3918_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v___x_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
return v___x_3923_;
}
}
}
}
else
{
lean_object* v_a_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3934_; 
lean_del_object(v___x_3911_);
lean_dec(v_inlineAttr_x3f_3909_);
lean_dec_ref(v_toSignature_3906_);
v_a_3927_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3929_ = v___x_3915_;
v_isShared_3930_ = v_isSharedCheck_3934_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_a_3927_);
lean_dec(v___x_3915_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3934_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3932_; 
if (v_isShared_3930_ == 0)
{
v___x_3932_ = v___x_3929_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_a_3927_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___boxed(lean_object* v_decl_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(v_decl_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_);
lean_dec(v_a_3940_);
lean_dec_ref(v_a_3939_);
lean_dec(v_a_3938_);
lean_dec_ref(v_a_3937_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn(lean_object* v_decl_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_){
_start:
{
lean_object* v___x_3949_; 
v___x_3949_ = l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(v_decl_3943_, v_a_3944_, v_a_3945_, v_a_3946_, v_a_3947_);
return v___x_3949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn___boxed(lean_object* v_decl_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Lean_Compiler_LCNF_Decl_floatLetIn(v_decl_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_);
lean_dec(v_a_3954_);
lean_dec_ref(v_a_3953_);
lean_dec(v_a_3952_);
lean_dec_ref(v_a_3951_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0(uint8_t v_phase_3959_, lean_object* v___f_3960_, lean_object* v_occurrence_3961_, lean_object* v_h_3962_){
_start:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3963_ = ((lean_object*)(l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0));
v___x_3964_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_3963_, v_phase_3959_, v___f_3960_, v_occurrence_3961_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0___boxed(lean_object* v_phase_3965_, lean_object* v___f_3966_, lean_object* v_occurrence_3967_, lean_object* v_h_3968_){
_start:
{
uint8_t v_phase_boxed_3969_; lean_object* v_res_3970_; 
v_phase_boxed_3969_ = lean_unbox(v_phase_3965_);
v_res_3970_ = l_Lean_Compiler_LCNF_floatLetIn___lam__0(v_phase_boxed_3969_, v___f_3966_, v_occurrence_3967_, v_h_3968_);
return v_res_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn(uint8_t v_phase_3972_, lean_object* v_occurrence_3973_){
_start:
{
lean_object* v___f_3974_; lean_object* v___x_3975_; lean_object* v___f_3976_; lean_object* v___x_3977_; uint8_t v___x_3978_; lean_object* v___x_3979_; 
v___f_3974_ = ((lean_object*)(l_Lean_Compiler_LCNF_floatLetIn___closed__0));
v___x_3975_ = lean_box(v_phase_3972_);
v___f_3976_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_floatLetIn___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3976_, 0, v___x_3975_);
lean_closure_set(v___f_3976_, 1, v___f_3974_);
lean_closure_set(v___f_3976_, 2, v_occurrence_3973_);
v___x_3977_ = l_Lean_Compiler_LCNF_instInhabitedPass;
v___x_3978_ = 0;
v___x_3979_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_3977_, v_phase_3972_, v___x_3978_, v___f_3976_);
return v___x_3979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___boxed(lean_object* v_phase_3980_, lean_object* v_occurrence_3981_){
_start:
{
uint8_t v_phase_boxed_3982_; lean_object* v_res_3983_; 
v_phase_boxed_3982_ = lean_unbox(v_phase_3980_);
v_res_3983_ = l_Lean_Compiler_LCNF_floatLetIn(v_phase_boxed_3982_, v_occurrence_3981_);
return v_res_3983_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3985_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_3986_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0, &l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0);
v___x_3987_ = l_Lean_Name_str___override(v___x_3986_, v___x_3985_);
return v___x_3987_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; 
v___x_3989_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_3990_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_3991_ = l_Lean_Name_str___override(v___x_3990_, v___x_3989_);
return v___x_3991_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; 
v___x_3992_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0));
v___x_3993_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_3994_ = l_Lean_Name_str___override(v___x_3993_, v___x_3992_);
return v___x_3994_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v___x_3996_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_3997_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_3998_ = l_Lean_Name_str___override(v___x_3997_, v___x_3996_);
return v___x_3998_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4000_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4001_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4002_ = l_Lean_Name_str___override(v___x_4001_, v___x_4000_);
return v___x_4002_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4003_ = lean_unsigned_to_nat(0u);
v___x_4004_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4005_ = l_Lean_Name_num___override(v___x_4004_, v___x_4003_);
return v___x_4005_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4006_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4007_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4008_ = l_Lean_Name_str___override(v___x_4007_, v___x_4006_);
return v___x_4008_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4009_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0));
v___x_4010_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4011_ = l_Lean_Name_str___override(v___x_4010_, v___x_4009_);
return v___x_4011_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4012_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4013_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4014_ = l_Lean_Name_str___override(v___x_4013_, v___x_4012_);
return v___x_4014_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4016_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4017_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4018_ = l_Lean_Name_str___override(v___x_4017_, v___x_4016_);
return v___x_4018_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4020_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4021_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4022_ = l_Lean_Name_str___override(v___x_4021_, v___x_4020_);
return v___x_4022_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; 
v___x_4023_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4024_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4025_ = l_Lean_Name_str___override(v___x_4024_, v___x_4023_);
return v___x_4025_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4026_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0));
v___x_4027_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4028_ = l_Lean_Name_str___override(v___x_4027_, v___x_4026_);
return v___x_4028_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
v___x_4029_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4030_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4031_ = l_Lean_Name_str___override(v___x_4030_, v___x_4029_);
return v___x_4031_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v___x_4032_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4033_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4034_ = l_Lean_Name_str___override(v___x_4033_, v___x_4032_);
return v___x_4034_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4035_ = lean_unsigned_to_nat(3411573818u);
v___x_4036_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4037_ = l_Lean_Name_num___override(v___x_4036_, v___x_4035_);
return v___x_4037_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4039_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4040_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4041_ = l_Lean_Name_str___override(v___x_4040_, v___x_4039_);
return v___x_4041_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4043_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4044_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4045_ = l_Lean_Name_str___override(v___x_4044_, v___x_4043_);
return v___x_4045_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4046_ = lean_unsigned_to_nat(2u);
v___x_4047_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4048_ = l_Lean_Name_num___override(v___x_4047_, v___x_4046_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4050_; uint8_t v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4050_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2));
v___x_4051_ = 1;
v___x_4052_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4053_ = l_Lean_registerTraceClass(v___x_4050_, v___x_4051_, v___x_4052_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2____boxed(lean_object* v_a_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_();
return v_res_4055_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FloatLetIn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default = _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default);
l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision = _init_l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision();
lean_mark_persistent(l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision);
res = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FloatLetIn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FloatLetIn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FloatLetIn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FloatLetIn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FloatLetIn(builtin);
}
#ifdef __cplusplus
}
#endif

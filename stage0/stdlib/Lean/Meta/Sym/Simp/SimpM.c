// Lean compiler output
// Module: Lean.Meta.Sym.Simp.SimpM
// Imports: public import Lean.Meta.Sym.Pattern
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42;
static const lean_string_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<default>"};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object* v_x_6_){
_start:
{
if (lean_obj_tag(v_x_6_) == 0)
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(0u);
return v___x_7_;
}
else
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(1u);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_Sym_Simp_Result_ctorIdx(v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
uint8_t v_done_13_; uint8_t v_contextDependent_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_done_13_ = lean_ctor_get_uint8(v_t_11_, 0);
v_contextDependent_14_ = lean_ctor_get_uint8(v_t_11_, 1);
lean_dec_ref_known(v_t_11_, 0);
v___x_15_ = lean_box(v_done_13_);
v___x_16_ = lean_box(v_contextDependent_14_);
v___x_17_ = lean_apply_2(v_k_12_, v___x_15_, v___x_16_);
return v___x_17_;
}
else
{
lean_object* v_e_x27_18_; lean_object* v_proof_19_; uint8_t v_done_20_; uint8_t v_contextDependent_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_e_x27_18_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_e_x27_18_);
v_proof_19_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_proof_19_);
v_done_20_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*2);
v_contextDependent_21_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_t_11_, 2);
v___x_22_ = lean_box(v_done_20_);
v___x_23_ = lean_box(v_contextDependent_21_);
v___x_24_ = lean_apply_4(v_k_12_, v_e_x27_18_, v_proof_19_, v___x_22_, v___x_23_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_Sym_Simp_Result_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object* v_t_37_, lean_object* v_rfl_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_37_, v_rfl_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_rfl_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_41_, v_rfl_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object* v_t_45_, lean_object* v_step_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_45_, v_step_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_step_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_49_, v_step_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t v_done_57_, uint8_t v_contextDependent_58_){
_start:
{
if (v_done_57_ == 0)
{
if (v_contextDependent_58_ == 0)
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_59_, 0, v_contextDependent_58_);
lean_ctor_set_uint8(v___x_59_, 1, v_contextDependent_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; 
v___x_60_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_60_, 0, v_done_57_);
lean_ctor_set_uint8(v___x_60_, 1, v_contextDependent_58_);
return v___x_60_;
}
}
else
{
if (v_contextDependent_58_ == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_61_, 0, v_done_57_);
lean_ctor_set_uint8(v___x_61_, 1, v_contextDependent_58_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_62_, 0, v_contextDependent_58_);
lean_ctor_set_uint8(v___x_62_, 1, v_contextDependent_58_);
return v___x_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object* v_done_63_, lean_object* v_contextDependent_64_){
_start:
{
uint8_t v_done_boxed_65_; uint8_t v_contextDependent_boxed_66_; lean_object* v_res_67_; 
v_done_boxed_65_ = lean_unbox(v_done_63_);
v_contextDependent_boxed_66_ = lean_unbox(v_contextDependent_64_);
v_res_67_ = l_Lean_Meta_Sym_Simp_mkRflResult(v_done_boxed_65_, v_contextDependent_boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t v_contextDependent_68_){
_start:
{
if (v_contextDependent_68_ == 0)
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_69_, 0, v_contextDependent_68_);
lean_ctor_set_uint8(v___x_69_, 1, v_contextDependent_68_);
return v___x_69_;
}
else
{
uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_70_ = 0;
v___x_71_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_71_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_71_, 1, v_contextDependent_68_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object* v_contextDependent_72_){
_start:
{
uint8_t v_contextDependent_boxed_73_; lean_object* v_res_74_; 
v_contextDependent_boxed_73_ = lean_unbox(v_contextDependent_72_);
v_res_74_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_boxed_73_);
return v_res_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
uint8_t v_contextDependent_76_; 
v_contextDependent_76_ = lean_ctor_get_uint8(v_x_75_, 1);
return v_contextDependent_76_;
}
else
{
uint8_t v_contextDependent_77_; 
v_contextDependent_77_ = lean_ctor_get_uint8(v_x_75_, sizeof(void*)*2 + 1);
return v_contextDependent_77_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object* v_x_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Meta_Sym_Simp_Result_isContextDependent(v_x_78_);
lean_dec_ref(v_x_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object* v_x_81_){
_start:
{
if (lean_obj_tag(v_x_81_) == 0)
{
uint8_t v_done_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_done_82_ = lean_ctor_get_uint8(v_x_81_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v_x_81_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_dec(v_x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
uint8_t v___x_86_; lean_object* v___x_88_; 
v___x_86_ = 1;
if (v_isShared_85_ == 0)
{
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_89_, 0, v_done_82_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
lean_ctor_set_uint8(v___x_88_, 1, v___x_86_);
return v___x_88_;
}
}
}
else
{
lean_object* v_e_x27_91_; lean_object* v_proof_92_; uint8_t v_done_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v_e_x27_91_ = lean_ctor_get(v_x_81_, 0);
v_proof_92_ = lean_ctor_get(v_x_81_, 1);
v_done_93_ = lean_ctor_get_uint8(v_x_81_, sizeof(void*)*2);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v_x_81_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_proof_92_);
lean_inc(v_e_x27_91_);
lean_dec(v_x_81_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
uint8_t v___x_97_; lean_object* v___x_99_; 
v___x_97_ = 1;
if (v_isShared_96_ == 0)
{
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_e_x27_91_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_proof_92_);
lean_ctor_set_uint8(v_reuseFailAlloc_100_, sizeof(void*)*2, v_done_93_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*2 + 1, v___x_97_);
return v___x_99_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_box(0);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_instMonadEIO___redArg();
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0);
v___x_105_ = l_StateRefT_x27_instMonad___redArg(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6(void){
_start:
{
lean_object* v___x_110_; lean_object* v___f_111_; 
v___x_110_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_111_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_111_, 0, v___x_110_);
return v___f_111_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7(void){
_start:
{
lean_object* v___x_112_; lean_object* v___f_113_; 
v___x_112_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_113_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_113_, 0, v___x_112_);
return v___f_113_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8(void){
_start:
{
lean_object* v___f_114_; lean_object* v___f_115_; lean_object* v___x_116_; 
v___f_114_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7);
v___f_115_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___f_115_);
lean_ctor_set(v___x_116_, 1, v___f_114_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9(void){
_start:
{
lean_object* v___x_117_; lean_object* v___f_118_; 
v___x_117_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8);
v___f_118_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_118_, 0, v___x_117_);
return v___f_118_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10(void){
_start:
{
lean_object* v___x_119_; lean_object* v___f_120_; 
v___x_119_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8);
v___f_120_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_120_, 0, v___x_119_);
return v___f_120_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11(void){
_start:
{
lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___x_123_; 
v___f_121_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10);
v___f_122_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___f_122_);
lean_ctor_set(v___x_123_, 1, v___f_121_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12(void){
_start:
{
lean_object* v___x_124_; lean_object* v___f_125_; 
v___x_124_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11);
v___f_125_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_125_, 0, v___x_124_);
return v___f_125_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13(void){
_start:
{
lean_object* v___x_126_; lean_object* v___f_127_; 
v___x_126_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11);
v___f_127_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_127_, 0, v___x_126_);
return v___f_127_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14(void){
_start:
{
lean_object* v___f_128_; lean_object* v___f_129_; lean_object* v___x_130_; 
v___f_128_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13);
v___f_129_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___f_129_);
lean_ctor_set(v___x_130_, 1, v___f_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15(void){
_start:
{
lean_object* v___x_131_; lean_object* v___f_132_; 
v___x_131_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14);
v___f_132_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_132_, 0, v___x_131_);
return v___f_132_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16(void){
_start:
{
lean_object* v___x_133_; lean_object* v___f_134_; 
v___x_133_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14);
v___f_134_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_134_, 0, v___x_133_);
return v___f_134_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17(void){
_start:
{
lean_object* v___f_135_; lean_object* v___f_136_; lean_object* v___x_137_; 
v___f_135_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16);
v___f_136_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v___f_136_);
lean_ctor_set(v___x_137_, 1, v___f_135_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18(void){
_start:
{
lean_object* v___x_138_; lean_object* v___f_139_; 
v___x_138_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17);
v___f_139_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_139_, 0, v___x_138_);
return v___f_139_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19(void){
_start:
{
lean_object* v___x_140_; lean_object* v___f_141_; 
v___x_140_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17);
v___f_141_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_141_, 0, v___x_140_);
return v___f_141_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20(void){
_start:
{
lean_object* v___f_142_; lean_object* v___f_143_; lean_object* v___x_144_; 
v___f_142_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19);
v___f_143_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___f_143_);
lean_ctor_set(v___x_144_, 1, v___f_142_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21(void){
_start:
{
lean_object* v___x_145_; lean_object* v___f_146_; 
v___x_145_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_146_, 0, v___x_145_);
return v___f_146_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22(void){
_start:
{
lean_object* v___x_147_; lean_object* v___f_148_; 
v___x_147_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20);
v___f_148_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_148_, 0, v___x_147_);
return v___f_148_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23(void){
_start:
{
lean_object* v___f_149_; lean_object* v___f_150_; lean_object* v___x_151_; 
v___f_149_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22);
v___f_150_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___f_150_);
lean_ctor_set(v___x_151_, 1, v___f_149_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24(void){
_start:
{
lean_object* v___x_152_; lean_object* v___f_153_; 
v___x_152_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23);
v___f_153_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_153_, 0, v___x_152_);
return v___f_153_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25(void){
_start:
{
lean_object* v___x_154_; lean_object* v___f_155_; 
v___x_154_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23);
v___f_155_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_155_, 0, v___x_154_);
return v___f_155_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26(void){
_start:
{
lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___x_158_; 
v___f_156_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25);
v___f_157_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24);
v___x_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_158_, 0, v___f_157_);
lean_ctor_set(v___x_158_, 1, v___f_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_164_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30));
v___x_165_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29));
v___x_166_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_165_, v___x_164_, v___x_163_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32(void){
_start:
{
lean_object* v___x_167_; lean_object* v___f_168_; lean_object* v___f_169_; lean_object* v___x_170_; 
v___x_167_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31);
v___f_168_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_169_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27));
v___x_170_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_169_, v___f_168_, v___x_167_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_171_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32);
v___x_172_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30));
v___x_173_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29));
v___x_174_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_173_, v___x_172_, v___x_171_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34(void){
_start:
{
lean_object* v___x_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33);
v___f_176_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_177_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27));
v___x_178_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_177_, v___f_176_, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_179_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34);
v___x_180_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30));
v___x_181_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29));
v___x_182_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_181_, v___x_180_, v___x_179_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36(void){
_start:
{
lean_object* v___x_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___x_186_; 
v___x_183_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35);
v___f_184_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_185_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27));
v___x_186_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_185_, v___f_184_, v___x_183_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37(void){
_start:
{
lean_object* v___x_187_; lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___x_190_; 
v___x_187_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36);
v___f_188_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_189_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27));
v___x_190_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_189_, v___f_188_, v___x_187_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___f_193_; 
v___x_191_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30));
v___x_192_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_193_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_193_, 0, v___x_192_);
lean_closure_set(v___f_193_, 1, v___x_191_);
return v___f_193_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39(void){
_start:
{
lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___f_196_; 
v___f_194_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_195_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38);
v___f_196_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_196_, 0, v___f_195_);
lean_closure_set(v___f_196_, 1, v___f_194_);
return v___f_196_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40(void){
_start:
{
lean_object* v___x_197_; lean_object* v___f_198_; lean_object* v___f_199_; 
v___x_197_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30));
v___f_198_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39);
v___f_199_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_199_, 0, v___f_198_);
lean_closure_set(v___f_199_, 1, v___x_197_);
return v___f_199_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41(void){
_start:
{
lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___f_202_; 
v___f_200_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_201_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40);
v___f_202_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_202_, 0, v___f_201_);
lean_closure_set(v___f_202_, 1, v___f_200_);
return v___f_202_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42(void){
_start:
{
lean_object* v___f_203_; lean_object* v___f_204_; lean_object* v___f_205_; 
v___f_203_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28));
v___f_204_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41);
v___f_205_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_205_, 0, v___f_204_);
lean_closure_set(v___f_205_, 1, v___f_203_);
return v___f_205_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43));
v___x_208_ = l_Lean_stringToMessageData(v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg(){
_start:
{
lean_object* v___x_210_; lean_object* v_toApplicative_211_; lean_object* v_toFunctor_212_; lean_object* v_toSeq_213_; lean_object* v_toSeqLeft_214_; lean_object* v_toSeqRight_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___x_220_; lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_toApplicative_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_267_; 
v___x_210_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1);
v_toApplicative_211_ = lean_ctor_get(v___x_210_, 0);
v_toFunctor_212_ = lean_ctor_get(v_toApplicative_211_, 0);
v_toSeq_213_ = lean_ctor_get(v_toApplicative_211_, 2);
v_toSeqLeft_214_ = lean_ctor_get(v_toApplicative_211_, 3);
v_toSeqRight_215_ = lean_ctor_get(v_toApplicative_211_, 4);
v___f_216_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2));
v___f_217_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_212_, 2);
v___f_218_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_218_, 0, v_toFunctor_212_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_219_, 0, v_toFunctor_212_);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___f_218_);
lean_ctor_set(v___x_220_, 1, v___f_219_);
lean_inc(v_toSeqRight_215_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_221_, 0, v_toSeqRight_215_);
lean_inc(v_toSeqLeft_214_);
v___f_222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_222_, 0, v_toSeqLeft_214_);
lean_inc(v_toSeq_213_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeq_213_);
v___x_224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_224_, 0, v___x_220_);
lean_ctor_set(v___x_224_, 1, v___f_216_);
lean_ctor_set(v___x_224_, 2, v___f_223_);
lean_ctor_set(v___x_224_, 3, v___f_222_);
lean_ctor_set(v___x_224_, 4, v___f_221_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___f_217_);
v___x_226_ = l_StateRefT_x27_instMonad___redArg(v___x_225_);
v_toApplicative_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; 
v_unused_268_ = lean_ctor_get(v___x_226_, 1);
lean_dec(v_unused_268_);
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_267_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_toApplicative_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_267_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v_toFunctor_231_; lean_object* v_toSeq_232_; lean_object* v_toSeqLeft_233_; lean_object* v_toSeqRight_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_265_; 
v_toFunctor_231_ = lean_ctor_get(v_toApplicative_227_, 0);
v_toSeq_232_ = lean_ctor_get(v_toApplicative_227_, 2);
v_toSeqLeft_233_ = lean_ctor_get(v_toApplicative_227_, 3);
v_toSeqRight_234_ = lean_ctor_get(v_toApplicative_227_, 4);
v_isSharedCheck_265_ = !lean_is_exclusive(v_toApplicative_227_);
if (v_isSharedCheck_265_ == 0)
{
lean_object* v_unused_266_; 
v_unused_266_ = lean_ctor_get(v_toApplicative_227_, 1);
lean_dec(v_unused_266_);
v___x_236_ = v_toApplicative_227_;
v_isShared_237_ = v_isSharedCheck_265_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_toSeqRight_234_);
lean_inc(v_toSeqLeft_233_);
lean_inc(v_toSeq_232_);
lean_inc(v_toFunctor_231_);
lean_dec(v_toApplicative_227_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_265_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___f_238_; lean_object* v___f_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v___f_243_; lean_object* v___f_244_; lean_object* v___f_245_; lean_object* v___x_247_; 
v___f_238_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4));
v___f_239_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5));
lean_inc_ref(v_toFunctor_231_);
v___f_240_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_240_, 0, v_toFunctor_231_);
v___f_241_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_241_, 0, v_toFunctor_231_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___f_240_);
lean_ctor_set(v___x_242_, 1, v___f_241_);
v___f_243_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_243_, 0, v_toSeqRight_234_);
v___f_244_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_244_, 0, v_toSeqLeft_233_);
v___f_245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_245_, 0, v_toSeq_232_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 4, v___f_243_);
lean_ctor_set(v___x_236_, 3, v___f_244_);
lean_ctor_set(v___x_236_, 2, v___f_245_);
lean_ctor_set(v___x_236_, 1, v___f_238_);
lean_ctor_set(v___x_236_, 0, v___x_242_);
v___x_247_ = v___x_236_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___f_238_);
lean_ctor_set(v_reuseFailAlloc_264_, 2, v___f_245_);
lean_ctor_set(v_reuseFailAlloc_264_, 3, v___f_244_);
lean_ctor_set(v_reuseFailAlloc_264_, 4, v___f_243_);
v___x_247_ = v_reuseFailAlloc_264_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_249_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 1, v___f_239_);
lean_ctor_set(v___x_229_, 0, v___x_247_);
v___x_249_ = v___x_229_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___f_239_);
v___x_249_ = v_reuseFailAlloc_263_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v_toMonadRef_257_; lean_object* v___f_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_250_ = l_StateRefT_x27_instMonad___redArg(v___x_249_);
v___x_251_ = l_ReaderT_instMonad___redArg(v___x_250_);
v___x_252_ = l_StateRefT_x27_instMonad___redArg(v___x_251_);
v___x_253_ = l_ReaderT_instMonad___redArg(v___x_252_);
v___x_254_ = l_ReaderT_instMonad___redArg(v___x_253_);
v___x_255_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26);
v___x_256_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37);
v_toMonadRef_257_ = lean_ctor_get(v___x_256_, 0);
v___f_258_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42);
lean_inc_ref(v___x_254_);
v___x_259_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_258_, v___x_254_);
lean_inc_ref(v_toMonadRef_257_);
v___x_260_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_260_, 0, v___x_255_);
lean_ctor_set(v___x_260_, 1, v_toMonadRef_257_);
lean_ctor_set(v___x_260_, 2, v___x_259_);
v___x_261_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44);
v___x_262_ = l_Lean_throwError___redArg(v___x_254_, v___x_260_, v___x_261_);
return v___x_262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___boxed(lean_object* v___dummy_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v_res_270_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0(void){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object* v_00_u03b1_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object* v_x_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0));
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object* v_x_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(v_x_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v_x_287_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object* v_m_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_unsafeCast___redArg(v_m_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object* v_m_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(v_m_306_);
lean_dec_ref(v_m_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object* v_m_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_unsafeCast___redArg(v_m_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object* v_m_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(v_m_310_);
lean_dec(v_m_310_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object* v_a_312_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = l_unsafeCast___redArg(v_a_312_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v_a_316_);
lean_dec(v_a_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v_a_319_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_Sym_Simp_getMethods(v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
return v_res_340_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_341_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object* v_x_344_, lean_object* v_methods_345_, lean_object* v_config_346_, lean_object* v_s_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_lctx_355_; lean_object* v_decls_356_; lean_object* v_size_357_; lean_object* v_persistentCache_358_; lean_object* v_funext_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_390_; 
v_lctx_355_ = lean_ctor_get(v_a_350_, 2);
v_decls_356_ = lean_ctor_get(v_lctx_355_, 1);
v_size_357_ = lean_ctor_get(v_decls_356_, 2);
v_persistentCache_358_ = lean_ctor_get(v_s_347_, 1);
v_funext_359_ = lean_ctor_get(v_s_347_, 3);
v_isSharedCheck_390_ = !lean_is_exclusive(v_s_347_);
if (v_isSharedCheck_390_ == 0)
{
lean_object* v_unused_391_; lean_object* v_unused_392_; 
v_unused_391_ = lean_ctor_get(v_s_347_, 2);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_s_347_, 0);
lean_dec(v_unused_392_);
v___x_361_ = v_s_347_;
v_isShared_362_ = v_isSharedCheck_390_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_funext_359_);
lean_inc(v_persistentCache_358_);
lean_dec(v_s_347_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_390_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_363_ = l_unsafeCast___redArg(v_methods_345_);
v___x_364_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_357_);
v___x_365_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_365_, 0, v_config_346_);
lean_ctor_set(v___x_365_, 1, v_size_357_);
lean_ctor_set(v___x_365_, 2, v___x_364_);
v___x_366_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 2, v___x_366_);
lean_ctor_set(v___x_361_, 0, v___x_364_);
v___x_368_ = v___x_361_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_persistentCache_358_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_389_, 3, v_funext_359_);
v___x_368_ = v_reuseFailAlloc_389_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_st_mk_ref(v___x_368_);
lean_inc(v_a_353_);
lean_inc_ref(v_a_352_);
lean_inc(v_a_351_);
lean_inc_ref(v_a_350_);
lean_inc(v_a_349_);
lean_inc_ref(v_a_348_);
lean_inc(v___x_369_);
v___x_370_ = lean_apply_10(v_x_344_, v___x_363_, v___x_365_, v___x_369_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, lean_box(0));
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_380_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_380_ == 0)
{
v___x_373_ = v___x_370_;
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_370_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_375_ = lean_st_ref_get(v___x_369_);
lean_dec(v___x_369_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v_a_371_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 0, v___x_376_);
v___x_378_ = v___x_373_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
lean_dec(v___x_369_);
v_a_381_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_370_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_370_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object* v_x_393_, lean_object* v_methods_394_, lean_object* v_config_395_, lean_object* v_s_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_393_, v_methods_394_, v_config_395_, v_s_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
lean_dec(v_a_398_);
lean_dec_ref(v_a_397_);
lean_dec_ref(v_methods_394_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object* v_00_u03b1_405_, lean_object* v_x_406_, lean_object* v_methods_407_, lean_object* v_config_408_, lean_object* v_s_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_406_, v_methods_407_, v_config_408_, v_s_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object* v_00_u03b1_418_, lean_object* v_x_419_, lean_object* v_methods_420_, lean_object* v_config_421_, lean_object* v_s_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_Meta_Sym_Simp_SimpM_run(v_00_u03b1_418_, v_x_419_, v_methods_420_, v_config_421_, v_s_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec_ref(v_methods_420_);
return v_res_430_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___x_431_);
lean_ctor_set(v___x_433_, 2, v___x_431_);
lean_ctor_set(v___x_433_, 3, v___x_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object* v_x_434_, lean_object* v_methods_435_, lean_object* v_config_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_lctx_444_; lean_object* v_decls_445_; lean_object* v_size_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_lctx_444_ = lean_ctor_get(v_a_439_, 2);
v_decls_445_ = lean_ctor_get(v_lctx_444_, 1);
v_size_446_ = lean_ctor_get(v_decls_445_, 2);
v___x_447_ = l_unsafeCast___redArg(v_methods_435_);
v___x_448_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_446_);
v___x_449_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_449_, 0, v_config_436_);
lean_ctor_set(v___x_449_, 1, v_size_446_);
lean_ctor_set(v___x_449_, 2, v___x_448_);
v___x_450_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0);
v___x_451_ = lean_st_mk_ref(v___x_450_);
lean_inc(v_a_442_);
lean_inc_ref(v_a_441_);
lean_inc(v_a_440_);
lean_inc_ref(v_a_439_);
lean_inc(v_a_438_);
lean_inc_ref(v_a_437_);
lean_inc(v___x_451_);
v___x_452_ = lean_apply_10(v_x_434_, v___x_447_, v___x_449_, v___x_451_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, lean_box(0));
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_461_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_461_ == 0)
{
v___x_455_ = v___x_452_;
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_452_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_457_ = lean_st_ref_get(v___x_451_);
lean_dec(v___x_451_);
lean_dec(v___x_457_);
if (v_isShared_456_ == 0)
{
v___x_459_ = v___x_455_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_453_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
else
{
lean_dec(v___x_451_);
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object* v_x_462_, lean_object* v_methods_463_, lean_object* v_config_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_462_, v_methods_463_, v_config_464_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
lean_dec(v_a_466_);
lean_dec_ref(v_a_465_);
lean_dec_ref(v_methods_463_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object* v_00_u03b1_473_, lean_object* v_x_474_, lean_object* v_methods_475_, lean_object* v_config_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_474_, v_methods_475_, v_config_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object* v_00_u03b1_485_, lean_object* v_x_486_, lean_object* v_methods_487_, lean_object* v_config_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27(v_00_u03b1_485_, v_x_486_, v_methods_487_, v_config_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_491_);
lean_dec(v_a_490_);
lean_dec_ref(v_a_489_);
lean_dec_ref(v_methods_487_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object* v_a_00___x40___internal___hyg_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_00___x40___internal___hyg_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = lean_sym_simp(v_a_00___x40___internal___hyg_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object* v_a_520_){
_start:
{
lean_object* v_config_522_; lean_object* v___x_523_; 
v_config_522_ = lean_ctor_get(v_a_520_, 0);
lean_inc_ref(v_config_522_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v_config_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_524_);
lean_dec_ref(v_a_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_528_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lean_Meta_Sym_Simp_getConfig(v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object* v_e_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v___x_560_; lean_object* v_a_561_; lean_object* v_pre_562_; lean_object* v___x_563_; 
v___x_560_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v_a_550_);
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref(v___x_560_);
v_pre_562_ = lean_ctor_get(v_a_561_, 0);
lean_inc_ref(v_pre_562_);
lean_dec(v_a_561_);
lean_inc(v_a_558_);
lean_inc_ref(v_a_557_);
lean_inc(v_a_556_);
lean_inc_ref(v_a_555_);
lean_inc(v_a_554_);
lean_inc_ref(v_a_553_);
lean_inc(v_a_552_);
lean_inc_ref(v_a_551_);
lean_inc(v_a_550_);
v___x_563_ = lean_apply_11(v_pre_562_, v_e_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, lean_box(0));
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object* v_e_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lean_Meta_Sym_Simp_pre(v_e_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_);
lean_dec(v_a_573_);
lean_dec_ref(v_a_572_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
lean_dec(v_a_565_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object* v_e_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_587_; lean_object* v_a_588_; lean_object* v_post_589_; lean_object* v___x_590_; 
v___x_587_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v_a_577_);
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref(v___x_587_);
v_post_589_ = lean_ctor_get(v_a_588_, 1);
lean_inc_ref(v_post_589_);
lean_dec(v_a_588_);
lean_inc(v_a_585_);
lean_inc_ref(v_a_584_);
lean_inc(v_a_583_);
lean_inc_ref(v_a_582_);
lean_inc(v_a_581_);
lean_inc_ref(v_a_580_);
lean_inc(v_a_579_);
lean_inc_ref(v_a_578_);
lean_inc(v_a_577_);
v___x_590_ = lean_apply_11(v_post_589_, v_e_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, lean_box(0));
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object* v_e_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Meta_Sym_Simp_post(v_e_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object* v_a_603_, lean_object* v_persistentCache_604_, lean_object* v_transientCache_605_, lean_object* v_funext_606_, lean_object* v_a_x3f_607_){
_start:
{
lean_object* v___x_609_; lean_object* v_numSteps_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_620_; 
v___x_609_ = lean_st_ref_take(v_a_603_);
v_numSteps_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; lean_object* v_unused_622_; lean_object* v_unused_623_; 
v_unused_621_ = lean_ctor_get(v___x_609_, 3);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v___x_609_, 2);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v___x_609_, 1);
lean_dec(v_unused_623_);
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_620_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_numSteps_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_620_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = lean_box(0);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 3, v_funext_606_);
lean_ctor_set(v___x_612_, 2, v_transientCache_605_);
lean_ctor_set(v___x_612_, 1, v_persistentCache_604_);
v___x_616_ = v___x_612_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_numSteps_610_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_persistentCache_604_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_transientCache_605_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_funext_606_);
v___x_616_ = v_reuseFailAlloc_619_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_st_ref_put(v_a_603_, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_614_);
return v___x_618_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object* v_a_624_, lean_object* v_persistentCache_625_, lean_object* v_transientCache_626_, lean_object* v_funext_627_, lean_object* v_a_x3f_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_624_, v_persistentCache_625_, v_transientCache_626_, v_funext_627_, v_a_x3f_628_);
lean_dec(v_a_x3f_628_);
lean_dec(v_a_624_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object* v_k_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
lean_object* v___x_642_; lean_object* v_persistentCache_643_; lean_object* v___x_644_; lean_object* v_transientCache_645_; lean_object* v___x_646_; lean_object* v_funext_647_; lean_object* v_r_648_; 
v___x_642_ = lean_st_ref_get(v_a_634_);
v_persistentCache_643_ = lean_ctor_get(v___x_642_, 1);
lean_inc_ref(v_persistentCache_643_);
lean_dec(v___x_642_);
v___x_644_ = lean_st_ref_get(v_a_634_);
v_transientCache_645_ = lean_ctor_get(v___x_644_, 2);
lean_inc_ref(v_transientCache_645_);
lean_dec(v___x_644_);
v___x_646_ = lean_st_ref_get(v_a_634_);
v_funext_647_ = lean_ctor_get(v___x_646_, 3);
lean_inc_ref(v_funext_647_);
lean_dec(v___x_646_);
lean_inc(v_a_640_);
lean_inc_ref(v_a_639_);
lean_inc(v_a_638_);
lean_inc_ref(v_a_637_);
lean_inc(v_a_636_);
lean_inc_ref(v_a_635_);
lean_inc(v_a_634_);
lean_inc_ref(v_a_633_);
lean_inc(v_a_632_);
v_r_648_ = lean_apply_10(v_k_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_, lean_box(0));
if (lean_obj_tag(v_r_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_665_; 
v_a_649_ = lean_ctor_get(v_r_648_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v_r_648_);
if (v_isSharedCheck_665_ == 0)
{
v___x_651_ = v_r_648_;
v_isShared_652_ = v_isSharedCheck_665_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v_r_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_665_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
lean_inc(v_a_649_);
if (v_isShared_652_ == 0)
{
lean_ctor_set_tag(v___x_651_, 1);
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_664_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
v___x_655_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_634_, v_persistentCache_643_, v_transientCache_645_, v_funext_647_, v___x_654_);
lean_dec_ref(v___x_654_);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; 
v_unused_663_ = lean_ctor_get(v___x_655_, 0);
lean_dec(v_unused_663_);
v___x_657_ = v___x_655_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_dec(v___x_655_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v_a_649_);
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_649_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
v_a_666_ = lean_ctor_get(v_r_648_, 0);
lean_inc(v_a_666_);
lean_dec_ref_known(v_r_648_, 1);
v___x_667_ = lean_box(0);
v___x_668_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_634_, v_persistentCache_643_, v_transientCache_645_, v_funext_647_, v___x_667_);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v___x_668_, 0);
lean_dec(v_unused_676_);
v___x_670_ = v___x_668_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_dec(v___x_668_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 1);
lean_ctor_set(v___x_670_, 0, v_a_666_);
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_666_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object* v_k_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(v_k_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object* v_00_u03b1_689_, lean_object* v_k_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_){
_start:
{
lean_object* v___x_701_; lean_object* v_persistentCache_702_; lean_object* v___x_703_; lean_object* v_transientCache_704_; lean_object* v___x_705_; lean_object* v_funext_706_; lean_object* v_r_707_; 
v___x_701_ = lean_st_ref_get(v_a_693_);
v_persistentCache_702_ = lean_ctor_get(v___x_701_, 1);
lean_inc_ref(v_persistentCache_702_);
lean_dec(v___x_701_);
v___x_703_ = lean_st_ref_get(v_a_693_);
v_transientCache_704_ = lean_ctor_get(v___x_703_, 2);
lean_inc_ref(v_transientCache_704_);
lean_dec(v___x_703_);
v___x_705_ = lean_st_ref_get(v_a_693_);
v_funext_706_ = lean_ctor_get(v___x_705_, 3);
lean_inc_ref(v_funext_706_);
lean_dec(v___x_705_);
lean_inc(v_a_699_);
lean_inc_ref(v_a_698_);
lean_inc(v_a_697_);
lean_inc_ref(v_a_696_);
lean_inc(v_a_695_);
lean_inc_ref(v_a_694_);
lean_inc(v_a_693_);
lean_inc_ref(v_a_692_);
lean_inc(v_a_691_);
v_r_707_ = lean_apply_10(v_k_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, lean_box(0));
if (lean_obj_tag(v_r_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_724_; 
v_a_708_ = lean_ctor_get(v_r_707_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_r_707_);
if (v_isSharedCheck_724_ == 0)
{
v___x_710_ = v_r_707_;
v_isShared_711_ = v_isSharedCheck_724_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v_r_707_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_724_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
lean_inc(v_a_708_);
if (v_isShared_711_ == 0)
{
lean_ctor_set_tag(v___x_710_, 1);
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_723_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
v___x_714_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_693_, v_persistentCache_702_, v_transientCache_704_, v_funext_706_, v___x_713_);
lean_dec_ref(v___x_713_);
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
lean_ctor_set(v___x_716_, 0, v_a_708_);
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_708_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
}
else
{
lean_object* v_a_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
v_a_725_ = lean_ctor_get(v_r_707_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v_r_707_, 1);
v___x_726_ = lean_box(0);
v___x_727_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_693_, v_persistentCache_702_, v_transientCache_704_, v_funext_706_, v___x_726_);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; 
v_unused_735_ = lean_ctor_get(v___x_727_, 0);
lean_dec(v_unused_735_);
v___x_729_ = v___x_727_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_dec(v___x_727_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 1);
lean_ctor_set(v___x_729_, 0, v_a_725_);
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_725_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object* v_00_u03b1_736_, lean_object* v_k_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache(v_00_u03b1_736_, v_k_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_a_744_);
lean_dec_ref(v_a_743_);
lean_dec(v_a_742_);
lean_dec_ref(v_a_741_);
lean_dec(v_a_740_);
lean_dec_ref(v_a_739_);
lean_dec(v_a_738_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object* v_a_749_, lean_object* v_transientCache_750_, lean_object* v_funext_751_, lean_object* v_a_x3f_752_){
_start:
{
lean_object* v___x_754_; lean_object* v_numSteps_755_; lean_object* v_persistentCache_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_766_; 
v___x_754_ = lean_st_ref_take(v_a_749_);
v_numSteps_755_ = lean_ctor_get(v___x_754_, 0);
v_persistentCache_756_ = lean_ctor_get(v___x_754_, 1);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; lean_object* v_unused_768_; 
v_unused_767_ = lean_ctor_get(v___x_754_, 3);
lean_dec(v_unused_767_);
v_unused_768_ = lean_ctor_get(v___x_754_, 2);
lean_dec(v_unused_768_);
v___x_758_ = v___x_754_;
v_isShared_759_ = v_isSharedCheck_766_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_persistentCache_756_);
lean_inc(v_numSteps_755_);
lean_dec(v___x_754_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_766_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_760_ = lean_box(0);
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 3, v_funext_751_);
lean_ctor_set(v___x_758_, 2, v_transientCache_750_);
v___x_762_ = v___x_758_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_numSteps_755_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_persistentCache_756_);
lean_ctor_set(v_reuseFailAlloc_765_, 2, v_transientCache_750_);
lean_ctor_set(v_reuseFailAlloc_765_, 3, v_funext_751_);
v___x_762_ = v_reuseFailAlloc_765_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = lean_st_ref_put(v_a_749_, v___x_762_);
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_760_);
return v___x_764_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object* v_a_769_, lean_object* v_transientCache_770_, lean_object* v_funext_771_, lean_object* v_a_x3f_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_769_, v_transientCache_770_, v_funext_771_, v_a_x3f_772_);
lean_dec(v_a_x3f_772_);
lean_dec(v_a_769_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object* v_k_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_){
_start:
{
lean_object* v___x_786_; lean_object* v_transientCache_787_; lean_object* v___x_788_; lean_object* v_funext_789_; lean_object* v_r_790_; 
v___x_786_ = lean_st_ref_get(v_a_778_);
v_transientCache_787_ = lean_ctor_get(v___x_786_, 2);
lean_inc_ref(v_transientCache_787_);
lean_dec(v___x_786_);
v___x_788_ = lean_st_ref_get(v_a_778_);
v_funext_789_ = lean_ctor_get(v___x_788_, 3);
lean_inc_ref(v_funext_789_);
lean_dec(v___x_788_);
lean_inc(v_a_784_);
lean_inc_ref(v_a_783_);
lean_inc(v_a_782_);
lean_inc_ref(v_a_781_);
lean_inc(v_a_780_);
lean_inc_ref(v_a_779_);
lean_inc(v_a_778_);
lean_inc_ref(v_a_777_);
lean_inc(v_a_776_);
v_r_790_ = lean_apply_10(v_k_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, lean_box(0));
if (lean_obj_tag(v_r_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_807_; 
v_a_791_ = lean_ctor_get(v_r_790_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v_r_790_);
if (v_isSharedCheck_807_ == 0)
{
v___x_793_ = v_r_790_;
v_isShared_794_ = v_isSharedCheck_807_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v_r_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_807_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
lean_inc(v_a_791_);
if (v_isShared_794_ == 0)
{
lean_ctor_set_tag(v___x_793_, 1);
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_806_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
v___x_797_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_778_, v_transientCache_787_, v_funext_789_, v___x_796_);
lean_dec_ref(v___x_796_);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; 
v_unused_805_ = lean_ctor_get(v___x_797_, 0);
lean_dec(v_unused_805_);
v___x_799_ = v___x_797_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_dec(v___x_797_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v_a_791_);
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_791_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v_a_808_ = lean_ctor_get(v_r_790_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v_r_790_, 1);
v___x_809_ = lean_box(0);
v___x_810_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_778_, v_transientCache_787_, v_funext_789_, v___x_809_);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; 
v_unused_818_ = lean_ctor_get(v___x_810_, 0);
lean_dec(v_unused_818_);
v___x_812_ = v___x_810_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_dec(v___x_810_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set_tag(v___x_812_, 1);
lean_ctor_set(v___x_812_, 0, v_a_808_);
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_808_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object* v_k_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(v_k_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
lean_dec(v_a_828_);
lean_dec_ref(v_a_827_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object* v_00_u03b1_831_, lean_object* v_k_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_){
_start:
{
lean_object* v___x_843_; lean_object* v_transientCache_844_; lean_object* v___x_845_; lean_object* v_funext_846_; lean_object* v_r_847_; 
v___x_843_ = lean_st_ref_get(v_a_835_);
v_transientCache_844_ = lean_ctor_get(v___x_843_, 2);
lean_inc_ref(v_transientCache_844_);
lean_dec(v___x_843_);
v___x_845_ = lean_st_ref_get(v_a_835_);
v_funext_846_ = lean_ctor_get(v___x_845_, 3);
lean_inc_ref(v_funext_846_);
lean_dec(v___x_845_);
lean_inc(v_a_841_);
lean_inc_ref(v_a_840_);
lean_inc(v_a_839_);
lean_inc_ref(v_a_838_);
lean_inc(v_a_837_);
lean_inc_ref(v_a_836_);
lean_inc(v_a_835_);
lean_inc_ref(v_a_834_);
lean_inc(v_a_833_);
v_r_847_ = lean_apply_10(v_k_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, lean_box(0));
if (lean_obj_tag(v_r_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_864_; 
v_a_848_ = lean_ctor_get(v_r_847_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v_r_847_);
if (v_isSharedCheck_864_ == 0)
{
v___x_850_ = v_r_847_;
v_isShared_851_ = v_isSharedCheck_864_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v_r_847_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_864_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
lean_inc(v_a_848_);
if (v_isShared_851_ == 0)
{
lean_ctor_set_tag(v___x_850_, 1);
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_863_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v___x_854_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_835_, v_transientCache_844_, v_funext_846_, v___x_853_);
lean_dec_ref(v___x_853_);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_861_ == 0)
{
lean_object* v_unused_862_; 
v_unused_862_ = lean_ctor_get(v___x_854_, 0);
lean_dec(v_unused_862_);
v___x_856_ = v___x_854_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_dec(v___x_854_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 0, v_a_848_);
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_848_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
v_a_865_ = lean_ctor_get(v_r_847_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v_r_847_, 1);
v___x_866_ = lean_box(0);
v___x_867_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_835_, v_transientCache_844_, v_funext_846_, v___x_866_);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; 
v_unused_875_ = lean_ctor_get(v___x_867_, 0);
lean_dec(v_unused_875_);
v___x_869_ = v___x_867_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_dec(v___x_867_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set_tag(v___x_869_, 1);
lean_ctor_set(v___x_869_, 0, v_a_865_);
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_865_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object* v_00_u03b1_876_, lean_object* v_k_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache(v_00_u03b1_876_, v_k_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
lean_dec(v_a_886_);
lean_dec_ref(v_a_885_);
lean_dec(v_a_884_);
lean_dec_ref(v_a_883_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object* v_e_889_, lean_object* v_methods_890_, lean_object* v_config_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_899_, 0, v_e_889_);
v___x_900_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_899_, v_methods_890_, v_config_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object* v_e_901_, lean_object* v_methods_902_, lean_object* v_config_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lean_Meta_Sym_simp(v_e_901_, v_methods_902_, v_config_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec_ref(v_methods_902_);
return v_res_911_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed = _init_l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Sym.DSimp.DSimpM
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.ExprPtr
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
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedConfig = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedResult_default = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedResult = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_DSimpM_0__Lean_Meta_Sym_DSimp_MethodsRefPointed;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42;
static const lean_string_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<default>"};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx(lean_object* v_x_6_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_Sym_DSimp_Result_ctorIdx(v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
uint8_t v_done_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_done_13_ = lean_ctor_get_uint8(v_t_11_, 0);
lean_dec_ref_known(v_t_11_, 0);
v___x_14_ = lean_box(v_done_13_);
v___x_15_ = lean_apply_1(v_k_12_, v___x_14_);
return v___x_15_;
}
else
{
lean_object* v_e_x27_16_; uint8_t v_done_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_e_x27_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_e_x27_16_);
v_done_17_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*1);
lean_dec_ref_known(v_t_11_, 1);
v___x_18_ = lean_box(v_done_17_);
v___x_19_ = lean_apply_2(v_k_12_, v_e_x27_16_, v___x_18_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_22_, v_k_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___boxed(lean_object* v_motive_26_, lean_object* v_ctorIdx_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim(v_motive_26_, v_ctorIdx_27_, v_t_28_, v_h_29_, v_k_30_);
lean_dec(v_ctorIdx_27_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim___redArg(lean_object* v_t_32_, lean_object* v_rfl_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_32_, v_rfl_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_rfl_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_36_, v_rfl_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim___redArg(lean_object* v_t_40_, lean_object* v_step_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_40_, v_step_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_step_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_44_, v_step_46_);
return v___x_47_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_DSimp_DSimpM_0__Lean_Meta_Sym_DSimp_MethodsRefPointed(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_box(0);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_instMonadEIO___redArg();
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0);
v___x_55_ = l_StateRefT_x27_instMonad___redArg(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6(void){
_start:
{
lean_object* v___x_60_; lean_object* v___f_61_; 
v___x_60_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_61_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_61_, 0, v___x_60_);
return v___f_61_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7(void){
_start:
{
lean_object* v___x_62_; lean_object* v___f_63_; 
v___x_62_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_63_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_63_, 0, v___x_62_);
return v___f_63_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8(void){
_start:
{
lean_object* v___f_64_; lean_object* v___f_65_; lean_object* v___x_66_; 
v___f_64_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7);
v___f_65_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v___f_65_);
lean_ctor_set(v___x_66_, 1, v___f_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9(void){
_start:
{
lean_object* v___x_67_; lean_object* v___f_68_; 
v___x_67_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8);
v___f_68_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_68_, 0, v___x_67_);
return v___f_68_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10(void){
_start:
{
lean_object* v___x_69_; lean_object* v___f_70_; 
v___x_69_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8);
v___f_70_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_70_, 0, v___x_69_);
return v___f_70_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11(void){
_start:
{
lean_object* v___f_71_; lean_object* v___f_72_; lean_object* v___x_73_; 
v___f_71_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10);
v___f_72_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v___f_72_);
lean_ctor_set(v___x_73_, 1, v___f_71_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12(void){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; 
v___x_74_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11);
v___f_75_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_75_, 0, v___x_74_);
return v___f_75_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13(void){
_start:
{
lean_object* v___x_76_; lean_object* v___f_77_; 
v___x_76_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11);
v___f_77_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_77_, 0, v___x_76_);
return v___f_77_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14(void){
_start:
{
lean_object* v___f_78_; lean_object* v___f_79_; lean_object* v___x_80_; 
v___f_78_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13);
v___f_79_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12);
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___f_79_);
lean_ctor_set(v___x_80_, 1, v___f_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15(void){
_start:
{
lean_object* v___x_81_; lean_object* v___f_82_; 
v___x_81_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14);
v___f_82_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_82_, 0, v___x_81_);
return v___f_82_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16(void){
_start:
{
lean_object* v___x_83_; lean_object* v___f_84_; 
v___x_83_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14);
v___f_84_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_84_, 0, v___x_83_);
return v___f_84_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17(void){
_start:
{
lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___x_87_; 
v___f_85_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16);
v___f_86_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v___f_86_);
lean_ctor_set(v___x_87_, 1, v___f_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18(void){
_start:
{
lean_object* v___x_88_; lean_object* v___f_89_; 
v___x_88_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17);
v___f_89_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_89_, 0, v___x_88_);
return v___f_89_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19(void){
_start:
{
lean_object* v___x_90_; lean_object* v___f_91_; 
v___x_90_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17);
v___f_91_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_91_, 0, v___x_90_);
return v___f_91_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20(void){
_start:
{
lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; 
v___f_92_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19);
v___f_93_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v___f_93_);
lean_ctor_set(v___x_94_, 1, v___f_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21(void){
_start:
{
lean_object* v___x_95_; lean_object* v___f_96_; 
v___x_95_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20);
v___f_96_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_96_, 0, v___x_95_);
return v___f_96_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22(void){
_start:
{
lean_object* v___x_97_; lean_object* v___f_98_; 
v___x_97_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_98_, 0, v___x_97_);
return v___f_98_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23(void){
_start:
{
lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___x_101_; 
v___f_99_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22);
v___f_100_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___f_100_);
lean_ctor_set(v___x_101_, 1, v___f_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24(void){
_start:
{
lean_object* v___x_102_; lean_object* v___f_103_; 
v___x_102_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23);
v___f_103_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_103_, 0, v___x_102_);
return v___f_103_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25(void){
_start:
{
lean_object* v___x_104_; lean_object* v___f_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23);
v___f_105_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_105_, 0, v___x_104_);
return v___f_105_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26(void){
_start:
{
lean_object* v___f_106_; lean_object* v___f_107_; lean_object* v___x_108_; 
v___f_106_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25);
v___f_107_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___f_107_);
lean_ctor_set(v___x_108_, 1, v___f_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_113_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_114_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30));
v___x_115_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29));
v___x_116_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_115_, v___x_114_, v___x_113_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32(void){
_start:
{
lean_object* v___x_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31);
v___f_118_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_119_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27));
v___x_120_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_119_, v___f_118_, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32);
v___x_122_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30));
v___x_123_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29));
v___x_124_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_123_, v___x_122_, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34(void){
_start:
{
lean_object* v___x_125_; lean_object* v___f_126_; lean_object* v___f_127_; lean_object* v___x_128_; 
v___x_125_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33);
v___f_126_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_127_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27));
v___x_128_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_127_, v___f_126_, v___x_125_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34);
v___x_130_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30));
v___x_131_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29));
v___x_132_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_131_, v___x_130_, v___x_129_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36(void){
_start:
{
lean_object* v___x_133_; lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___x_136_; 
v___x_133_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35);
v___f_134_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_135_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27));
v___x_136_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_135_, v___f_134_, v___x_133_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37(void){
_start:
{
lean_object* v___x_137_; lean_object* v___f_138_; lean_object* v___f_139_; lean_object* v___x_140_; 
v___x_137_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36);
v___f_138_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_139_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27));
v___x_140_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_139_, v___f_138_, v___x_137_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___f_143_; 
v___x_141_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30));
v___x_142_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_143_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_143_, 0, v___x_142_);
lean_closure_set(v___f_143_, 1, v___x_141_);
return v___f_143_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39(void){
_start:
{
lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___f_146_; 
v___f_144_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_145_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38);
v___f_146_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_146_, 0, v___f_145_);
lean_closure_set(v___f_146_, 1, v___f_144_);
return v___f_146_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40(void){
_start:
{
lean_object* v___x_147_; lean_object* v___f_148_; lean_object* v___f_149_; 
v___x_147_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30));
v___f_148_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39);
v___f_149_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_149_, 0, v___f_148_);
lean_closure_set(v___f_149_, 1, v___x_147_);
return v___f_149_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41(void){
_start:
{
lean_object* v___f_150_; lean_object* v___f_151_; lean_object* v___f_152_; 
v___f_150_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_151_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40);
v___f_152_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_152_, 0, v___f_151_);
lean_closure_set(v___f_152_, 1, v___f_150_);
return v___f_152_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42(void){
_start:
{
lean_object* v___f_153_; lean_object* v___f_154_; lean_object* v___f_155_; 
v___f_153_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28));
v___f_154_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41);
v___f_155_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_155_, 0, v___f_154_);
lean_closure_set(v___f_155_, 1, v___f_153_);
return v___f_155_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43));
v___x_158_ = l_Lean_stringToMessageData(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg(){
_start:
{
lean_object* v___x_160_; lean_object* v_toApplicative_161_; lean_object* v_toFunctor_162_; lean_object* v_toSeq_163_; lean_object* v_toSeqLeft_164_; lean_object* v_toSeqRight_165_; lean_object* v___f_166_; lean_object* v___f_167_; lean_object* v___f_168_; lean_object* v___f_169_; lean_object* v___x_170_; lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v_toApplicative_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_217_; 
v___x_160_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1);
v_toApplicative_161_ = lean_ctor_get(v___x_160_, 0);
v_toFunctor_162_ = lean_ctor_get(v_toApplicative_161_, 0);
v_toSeq_163_ = lean_ctor_get(v_toApplicative_161_, 2);
v_toSeqLeft_164_ = lean_ctor_get(v_toApplicative_161_, 3);
v_toSeqRight_165_ = lean_ctor_get(v_toApplicative_161_, 4);
v___f_166_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2));
v___f_167_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_162_, 2);
v___f_168_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_168_, 0, v_toFunctor_162_);
v___f_169_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_169_, 0, v_toFunctor_162_);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___f_168_);
lean_ctor_set(v___x_170_, 1, v___f_169_);
lean_inc(v_toSeqRight_165_);
v___f_171_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_171_, 0, v_toSeqRight_165_);
lean_inc(v_toSeqLeft_164_);
v___f_172_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_172_, 0, v_toSeqLeft_164_);
lean_inc(v_toSeq_163_);
v___f_173_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_173_, 0, v_toSeq_163_);
v___x_174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_174_, 0, v___x_170_);
lean_ctor_set(v___x_174_, 1, v___f_166_);
lean_ctor_set(v___x_174_, 2, v___f_173_);
lean_ctor_set(v___x_174_, 3, v___f_172_);
lean_ctor_set(v___x_174_, 4, v___f_171_);
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___f_167_);
v___x_176_ = l_StateRefT_x27_instMonad___redArg(v___x_175_);
v_toApplicative_177_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; 
v_unused_218_ = lean_ctor_get(v___x_176_, 1);
lean_dec(v_unused_218_);
v___x_179_ = v___x_176_;
v_isShared_180_ = v_isSharedCheck_217_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_toApplicative_177_);
lean_dec(v___x_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_217_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v_toFunctor_181_; lean_object* v_toSeq_182_; lean_object* v_toSeqLeft_183_; lean_object* v_toSeqRight_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_215_; 
v_toFunctor_181_ = lean_ctor_get(v_toApplicative_177_, 0);
v_toSeq_182_ = lean_ctor_get(v_toApplicative_177_, 2);
v_toSeqLeft_183_ = lean_ctor_get(v_toApplicative_177_, 3);
v_toSeqRight_184_ = lean_ctor_get(v_toApplicative_177_, 4);
v_isSharedCheck_215_ = !lean_is_exclusive(v_toApplicative_177_);
if (v_isSharedCheck_215_ == 0)
{
lean_object* v_unused_216_; 
v_unused_216_ = lean_ctor_get(v_toApplicative_177_, 1);
lean_dec(v_unused_216_);
v___x_186_ = v_toApplicative_177_;
v_isShared_187_ = v_isSharedCheck_215_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_toSeqRight_184_);
lean_inc(v_toSeqLeft_183_);
lean_inc(v_toSeq_182_);
lean_inc(v_toFunctor_181_);
lean_dec(v_toApplicative_177_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_215_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___x_197_; 
v___f_188_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4));
v___f_189_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5));
lean_inc_ref(v_toFunctor_181_);
v___f_190_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_190_, 0, v_toFunctor_181_);
v___f_191_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_191_, 0, v_toFunctor_181_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___f_190_);
lean_ctor_set(v___x_192_, 1, v___f_191_);
v___f_193_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_193_, 0, v_toSeqRight_184_);
v___f_194_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_194_, 0, v_toSeqLeft_183_);
v___f_195_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_195_, 0, v_toSeq_182_);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 4, v___f_193_);
lean_ctor_set(v___x_186_, 3, v___f_194_);
lean_ctor_set(v___x_186_, 2, v___f_195_);
lean_ctor_set(v___x_186_, 1, v___f_188_);
lean_ctor_set(v___x_186_, 0, v___x_192_);
v___x_197_ = v___x_186_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___f_188_);
lean_ctor_set(v_reuseFailAlloc_214_, 2, v___f_195_);
lean_ctor_set(v_reuseFailAlloc_214_, 3, v___f_194_);
lean_ctor_set(v_reuseFailAlloc_214_, 4, v___f_193_);
v___x_197_ = v_reuseFailAlloc_214_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_199_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v___f_189_);
lean_ctor_set(v___x_179_, 0, v___x_197_);
v___x_199_ = v___x_179_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___f_189_);
v___x_199_ = v_reuseFailAlloc_213_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_toMonadRef_207_; lean_object* v___f_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_200_ = l_StateRefT_x27_instMonad___redArg(v___x_199_);
v___x_201_ = l_ReaderT_instMonad___redArg(v___x_200_);
v___x_202_ = l_StateRefT_x27_instMonad___redArg(v___x_201_);
v___x_203_ = l_ReaderT_instMonad___redArg(v___x_202_);
v___x_204_ = l_ReaderT_instMonad___redArg(v___x_203_);
v___x_205_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26);
v___x_206_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37);
v_toMonadRef_207_ = lean_ctor_get(v___x_206_, 0);
v___f_208_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42);
lean_inc_ref(v___x_204_);
v___x_209_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_208_, v___x_204_);
lean_inc_ref(v_toMonadRef_207_);
v___x_210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_210_, 0, v___x_205_);
lean_ctor_set(v___x_210_, 1, v_toMonadRef_207_);
lean_ctor_set(v___x_210_, 2, v___x_209_);
v___x_211_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44);
v___x_212_ = l_Lean_throwError___redArg(v___x_204_, v___x_210_, v___x_211_);
return v___x_212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___boxed(lean_object* v___dummy_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg();
return v_res_220_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg();
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM(lean_object* v_00_u03b1_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0(lean_object* v_x_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0));
v___x_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0___boxed(lean_object* v_x_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0(v_x_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
lean_dec(v___y_238_);
lean_dec_ref(v_x_237_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl(lean_object* v_m_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_unsafeCast___redArg(v_m_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl___boxed(lean_object* v_m_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl(v_m_256_);
lean_dec_ref(v_m_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl(lean_object* v_m_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_unsafeCast___redArg(v_m_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl___boxed(lean_object* v_m_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl(v_m_260_);
lean_dec(v_m_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg(lean_object* v_a_262_){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = l_unsafeCast___redArg(v_a_262_);
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg___boxed(lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Meta_Sym_DSimp_getMethods___redArg(v_a_266_);
lean_dec(v_a_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods(lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_Meta_Sym_DSimp_getMethods___redArg(v_a_269_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___boxed(lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Meta_Sym_DSimp_getMethods(v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_);
lean_dec(v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object* v_x_291_, lean_object* v_methods_292_, lean_object* v_config_293_, lean_object* v_s_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_cache_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_331_; 
v_cache_302_ = lean_ctor_get(v_s_294_, 1);
v_isSharedCheck_331_ = !lean_is_exclusive(v_s_294_);
if (v_isSharedCheck_331_ == 0)
{
lean_object* v_unused_332_; 
v_unused_332_ = lean_ctor_get(v_s_294_, 0);
lean_dec(v_unused_332_);
v___x_304_ = v_s_294_;
v_isShared_305_ = v_isSharedCheck_331_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_cache_302_);
lean_dec(v_s_294_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_331_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = l_unsafeCast___redArg(v_methods_292_);
v___x_307_ = lean_unsigned_to_nat(0u);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_cache_302_);
v___x_309_ = v_reuseFailAlloc_330_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_st_mk_ref(v___x_309_);
lean_inc(v_a_300_);
lean_inc_ref(v_a_299_);
lean_inc(v_a_298_);
lean_inc_ref(v_a_297_);
lean_inc(v_a_296_);
lean_inc_ref(v_a_295_);
lean_inc(v___x_310_);
v___x_311_ = lean_apply_10(v_x_291_, v___x_306_, v_config_293_, v___x_310_, v_a_295_, v_a_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, lean_box(0));
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_321_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_321_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_321_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_321_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_319_; 
v___x_316_ = lean_st_ref_get(v___x_310_);
lean_dec(v___x_310_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v_a_312_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_317_);
v___x_319_ = v___x_314_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
lean_dec(v___x_310_);
v_a_322_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_311_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_311_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg___boxed(lean_object* v_x_333_, lean_object* v_methods_334_, lean_object* v_config_335_, lean_object* v_s_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v_x_333_, v_methods_334_, v_config_335_, v_s_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec_ref(v_methods_334_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run(lean_object* v_00_u03b1_345_, lean_object* v_x_346_, lean_object* v_methods_347_, lean_object* v_config_348_, lean_object* v_s_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v_x_346_, v_methods_347_, v_config_348_, v_s_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___boxed(lean_object* v_00_u03b1_358_, lean_object* v_x_359_, lean_object* v_methods_360_, lean_object* v_config_361_, lean_object* v_s_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_Meta_Sym_DSimp_DSimpM_run(v_00_u03b1_358_, v_x_359_, v_methods_360_, v_config_361_, v_s_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec_ref(v_methods_360_);
return v_res_370_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_371_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0, &l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0_once, _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1, &l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1_once, _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1);
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v___x_374_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(lean_object* v_x_377_, lean_object* v_methods_378_, lean_object* v_config_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_387_ = l_unsafeCast___redArg(v_methods_378_);
v___x_388_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2, &l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2_once, _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2);
v___x_389_ = lean_st_mk_ref(v___x_388_);
lean_inc(v_a_385_);
lean_inc_ref(v_a_384_);
lean_inc(v_a_383_);
lean_inc_ref(v_a_382_);
lean_inc(v_a_381_);
lean_inc_ref(v_a_380_);
lean_inc(v___x_389_);
v___x_390_ = lean_apply_10(v_x_377_, v___x_387_, v_config_379_, v___x_389_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, lean_box(0));
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_399_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_399_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_395_ = lean_st_ref_get(v___x_389_);
lean_dec(v___x_389_);
lean_dec(v___x_395_);
if (v_isShared_394_ == 0)
{
v___x_397_ = v___x_393_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_391_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
else
{
lean_dec(v___x_389_);
return v___x_390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___boxed(lean_object* v_x_400_, lean_object* v_methods_401_, lean_object* v_config_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(v_x_400_, v_methods_401_, v_config_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec_ref(v_methods_401_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27(lean_object* v_00_u03b1_411_, lean_object* v_x_412_, lean_object* v_methods_413_, lean_object* v_config_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(v_x_412_, v_methods_413_, v_config_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___boxed(lean_object* v_00_u03b1_423_, lean_object* v_x_424_, lean_object* v_methods_425_, lean_object* v_config_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27(v_00_u03b1_423_, v_x_424_, v_methods_425_, v_config_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
lean_dec_ref(v_methods_425_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object* v_a_00___x40___internal___hyg_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_00___x40___internal___hyg_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = lean_sym_dsimp(v_a_00___x40___internal___hyg_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg(lean_object* v_a_458_){
_start:
{
lean_object* v___x_460_; 
lean_inc_ref(v_a_458_);
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v_a_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg___boxed(lean_object* v_a_461_, lean_object* v_a_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Meta_Sym_DSimp_getConfig___redArg(v_a_461_);
lean_dec_ref(v_a_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig(lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___x_474_; 
lean_inc_ref(v_a_465_);
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v_a_465_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___boxed(lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Meta_Sym_DSimp_getConfig(v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
lean_dec(v_a_481_);
lean_dec_ref(v_a_480_);
lean_dec(v_a_479_);
lean_dec_ref(v_a_478_);
lean_dec(v_a_477_);
lean_dec_ref(v_a_476_);
lean_dec(v_a_475_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre(lean_object* v_e_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v___x_497_; lean_object* v_a_498_; lean_object* v_pre_499_; lean_object* v___x_500_; 
v___x_497_ = l_Lean_Meta_Sym_DSimp_getMethods___redArg(v_a_487_);
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref(v___x_497_);
v_pre_499_ = lean_ctor_get(v_a_498_, 0);
lean_inc_ref(v_pre_499_);
lean_dec(v_a_498_);
lean_inc(v_a_495_);
lean_inc_ref(v_a_494_);
lean_inc(v_a_493_);
lean_inc_ref(v_a_492_);
lean_inc(v_a_491_);
lean_inc_ref(v_a_490_);
lean_inc(v_a_489_);
lean_inc_ref(v_a_488_);
lean_inc(v_a_487_);
v___x_500_ = lean_apply_11(v_pre_499_, v_e_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, lean_box(0));
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre___boxed(lean_object* v_e_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_Meta_Sym_DSimp_pre(v_e_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_);
lean_dec(v_a_510_);
lean_dec_ref(v_a_509_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post(lean_object* v_e_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v___x_524_; lean_object* v_a_525_; lean_object* v_post_526_; lean_object* v___x_527_; 
v___x_524_ = l_Lean_Meta_Sym_DSimp_getMethods___redArg(v_a_514_);
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref(v___x_524_);
v_post_526_ = lean_ctor_get(v_a_525_, 1);
lean_inc_ref(v_post_526_);
lean_dec(v_a_525_);
lean_inc(v_a_522_);
lean_inc_ref(v_a_521_);
lean_inc(v_a_520_);
lean_inc_ref(v_a_519_);
lean_inc(v_a_518_);
lean_inc_ref(v_a_517_);
lean_inc(v_a_516_);
lean_inc_ref(v_a_515_);
lean_inc(v_a_514_);
v___x_527_ = lean_apply_11(v_post_526_, v_e_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, lean_box(0));
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post___boxed(lean_object* v_e_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_Meta_Sym_DSimp_post(v_e_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
lean_dec(v_a_529_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp(lean_object* v_e_540_, lean_object* v_methods_541_, lean_object* v_config_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
lean_inc_ref(v_e_540_);
v___x_550_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_550_, 0, v_e_540_);
v___x_551_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(v___x_550_, v_methods_541_, v_config_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_563_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_563_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
if (lean_obj_tag(v_a_552_) == 0)
{
lean_object* v___x_557_; 
lean_dec_ref_known(v_a_552_, 0);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_e_540_);
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_e_540_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
else
{
lean_object* v_e_x27_559_; lean_object* v___x_561_; 
lean_dec_ref(v_e_540_);
v_e_x27_559_ = lean_ctor_get(v_a_552_, 0);
lean_inc_ref(v_e_x27_559_);
lean_dec_ref_known(v_a_552_, 1);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_e_x27_559_);
v___x_561_ = v___x_554_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_e_x27_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec_ref(v_e_540_);
v_a_564_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_551_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_551_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp___boxed(lean_object* v_e_572_, lean_object* v_methods_573_, lean_object* v_config_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Meta_Sym_dsimp(v_e_572_, v_methods_573_, v_config_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
lean_dec_ref(v_methods_573_);
return v_res_582_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_DSimp_DSimpM_0__Lean_Meta_Sym_DSimp_MethodsRefPointed = _init_l___private_Lean_Meta_Sym_DSimp_DSimpM_0__Lean_Meta_Sym_DSimp_MethodsRefPointed();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
}
#ifdef __cplusplus
}
#endif

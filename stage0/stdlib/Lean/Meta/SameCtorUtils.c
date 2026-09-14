// Lean compiler output
// Module: Lean.Meta.SameCtorUtils
// Imports: public import Lean.Meta.Basic import Lean.Meta.Transform
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
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_occursOrInType_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_occursOrInType_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_occursOrInType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_occursOrInType___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_occursInCtorTypeMask_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_occursInCtorTypeMask_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_occursInCtorTypeMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_occursInCtorTypeMask___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_occursInCtorTypeMask___closed__0 = (const lean_object*)&l_Lean_Meta_occursInCtorTypeMask___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: t.isForall\n        "};
static const lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Meta.SameCtorUtils.0.Lean.Meta.withSharedCtorIndices.go"};
static const lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.SameCtorUtils"};
static const lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__1;
static const lean_array_object l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_occursOrInType_go(lean_object* v_lctx_1_, lean_object* v_e_2_, lean_object* v_s_3_){
_start:
{
if (lean_obj_tag(v_s_3_) == 1)
{
lean_object* v_fvarId_4_; lean_object* v___x_5_; 
v_fvarId_4_ = lean_ctor_get(v_s_3_, 0);
lean_inc(v_fvarId_4_);
v___x_5_ = lean_local_ctx_find(v_lctx_1_, v_fvarId_4_);
if (lean_obj_tag(v___x_5_) == 1)
{
lean_object* v_val_6_; uint8_t v___x_7_; 
v_val_6_ = lean_ctor_get(v___x_5_, 0);
lean_inc(v_val_6_);
lean_dec_ref_known(v___x_5_, 1);
v___x_7_ = lean_expr_eqv(v_s_3_, v_e_2_);
lean_dec_ref_known(v_s_3_, 1);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = l_Lean_LocalDecl_type(v_val_6_);
lean_dec(v_val_6_);
v___x_9_ = l_Lean_Expr_occurs(v_e_2_, v___x_8_);
lean_dec_ref(v___x_8_);
return v___x_9_;
}
else
{
lean_dec(v_val_6_);
lean_dec_ref(v_e_2_);
return v___x_7_;
}
}
else
{
uint8_t v___x_10_; 
lean_dec(v___x_5_);
v___x_10_ = lean_expr_eqv(v_s_3_, v_e_2_);
lean_dec_ref(v_e_2_);
lean_dec_ref_known(v_s_3_, 1);
return v___x_10_;
}
}
else
{
uint8_t v___x_11_; 
lean_dec_ref(v_lctx_1_);
v___x_11_ = lean_expr_eqv(v_s_3_, v_e_2_);
lean_dec_ref(v_e_2_);
lean_dec_ref(v_s_3_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_occursOrInType_go___boxed(lean_object* v_lctx_12_, lean_object* v_e_13_, lean_object* v_s_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_occursOrInType_go(v_lctx_12_, v_e_13_, v_s_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_occursOrInType(lean_object* v_lctx_17_, lean_object* v_e_18_, lean_object* v_t_19_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_alloc_closure((void*)(l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_occursOrInType_go___boxed), 3, 2);
lean_closure_set(v___x_20_, 0, v_lctx_17_);
lean_closure_set(v___x_20_, 1, v_e_18_);
v___x_21_ = lean_find_expr(v___x_20_, v_t_19_);
lean_dec_ref(v___x_20_);
if (lean_obj_tag(v___x_21_) == 0)
{
uint8_t v___x_22_; 
v___x_22_ = 0;
return v___x_22_;
}
else
{
uint8_t v___x_23_; 
lean_dec_ref_known(v___x_21_, 1);
v___x_23_ = 1;
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursOrInType___boxed(lean_object* v_lctx_24_, lean_object* v_e_25_, lean_object* v_t_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l_Lean_Meta_occursOrInType(v_lctx_24_, v_e_25_, v_t_26_);
lean_dec_ref(v_t_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0(lean_object* v_k_29_, lean_object* v_b_30_, lean_object* v_c_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; 
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
v___x_37_ = lean_apply_7(v_k_29_, v_b_30_, v_c_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, lean_box(0));
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0___boxed(lean_object* v_k_38_, lean_object* v_b_39_, lean_object* v_c_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0(v_k_38_, v_b_39_, v_c_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg(lean_object* v_type_47_, lean_object* v_maxFVars_x3f_48_, lean_object* v_k_49_, uint8_t v_cleanupAnnotations_50_, uint8_t v_whnfType_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___f_57_; lean_object* v___x_58_; 
v___f_57_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_57_, 0, v_k_49_);
v___x_58_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_47_, v_maxFVars_x3f_48_, v___f_57_, v_cleanupAnnotations_50_, v_whnfType_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v_a_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_66_; 
v_a_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_66_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_66_ == 0)
{
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_66_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_a_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_66_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_64_; 
if (v_isShared_62_ == 0)
{
v___x_64_ = v___x_61_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_a_59_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
else
{
lean_object* v_a_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_74_; 
v_a_67_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_74_ == 0)
{
v___x_69_ = v___x_58_;
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_a_67_);
lean_dec(v___x_58_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_72_; 
if (v_isShared_70_ == 0)
{
v___x_72_ = v___x_69_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_a_67_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___boxed(lean_object* v_type_75_, lean_object* v_maxFVars_x3f_76_, lean_object* v_k_77_, lean_object* v_cleanupAnnotations_78_, lean_object* v_whnfType_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_85_; uint8_t v_whnfType_boxed_86_; lean_object* v_res_87_; 
v_cleanupAnnotations_boxed_85_ = lean_unbox(v_cleanupAnnotations_78_);
v_whnfType_boxed_86_ = lean_unbox(v_whnfType_79_);
v_res_87_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg(v_type_75_, v_maxFVars_x3f_76_, v_k_77_, v_cleanupAnnotations_boxed_85_, v_whnfType_boxed_86_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2(lean_object* v_00_u03b1_88_, lean_object* v_type_89_, lean_object* v_maxFVars_x3f_90_, lean_object* v_k_91_, uint8_t v_cleanupAnnotations_92_, uint8_t v_whnfType_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg(v_type_89_, v_maxFVars_x3f_90_, v_k_91_, v_cleanupAnnotations_92_, v_whnfType_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___boxed(lean_object* v_00_u03b1_100_, lean_object* v_type_101_, lean_object* v_maxFVars_x3f_102_, lean_object* v_k_103_, lean_object* v_cleanupAnnotations_104_, lean_object* v_whnfType_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_111_; uint8_t v_whnfType_boxed_112_; lean_object* v_res_113_; 
v_cleanupAnnotations_boxed_111_ = lean_unbox(v_cleanupAnnotations_104_);
v_whnfType_boxed_112_ = lean_unbox(v_whnfType_105_);
v_res_113_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2(v_00_u03b1_100_, v_type_101_, v_maxFVars_x3f_102_, v_k_103_, v_cleanupAnnotations_boxed_111_, v_whnfType_boxed_112_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_occursInCtorTypeMask_spec__0(lean_object* v___x_114_, lean_object* v_a_115_, size_t v_sz_116_, size_t v_i_117_, lean_object* v_bs_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_usize_dec_lt(v_i_117_, v_sz_116_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
lean_dec_ref(v___x_114_);
v___x_120_ = l_unsafeCast___redArg(v_bs_118_);
lean_dec_ref(v_bs_118_);
return v___x_120_;
}
else
{
lean_object* v_v_121_; lean_object* v___x_122_; lean_object* v_bs_x27_123_; lean_object* v___x_124_; uint8_t v___x_125_; size_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_v_121_ = lean_array_uget(v_bs_118_, v_i_117_);
v___x_122_ = lean_unsigned_to_nat(0u);
v_bs_x27_123_ = lean_array_uset(v_bs_118_, v_i_117_, v___x_122_);
v___x_124_ = l_unsafeCast___redArg(v_v_121_);
lean_dec(v_v_121_);
lean_inc_ref(v___x_114_);
v___x_125_ = l_Lean_Meta_occursOrInType(v___x_114_, v___x_124_, v_a_115_);
v___x_126_ = ((size_t)1ULL);
v___x_127_ = lean_usize_add(v_i_117_, v___x_126_);
v___x_128_ = lean_box(v___x_125_);
v___x_129_ = l_unsafeCast___redArg(v___x_128_);
lean_dec(v___x_128_);
v___x_130_ = lean_array_uset(v_bs_x27_123_, v_i_117_, v___x_129_);
v_i_117_ = v___x_127_;
v_bs_118_ = v___x_130_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_occursInCtorTypeMask_spec__0___boxed(lean_object* v___x_132_, lean_object* v_a_133_, lean_object* v_sz_134_, lean_object* v_i_135_, lean_object* v_bs_136_){
_start:
{
size_t v_sz_boxed_137_; size_t v_i_boxed_138_; lean_object* v_res_139_; 
v_sz_boxed_137_ = lean_unbox_usize(v_sz_134_);
lean_dec(v_sz_134_);
v_i_boxed_138_ = lean_unbox_usize(v_i_135_);
lean_dec(v_i_135_);
v_res_139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_occursInCtorTypeMask_spec__0(v___x_132_, v_a_133_, v_sz_boxed_137_, v_i_boxed_138_, v_bs_136_);
lean_dec_ref(v_a_133_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__0(lean_object* v_ys_140_, lean_object* v_ctorRet_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_143_);
lean_inc_ref(v___y_142_);
v___x_147_ = lean_whnf(v_ctorRet_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_149_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_147_, 1);
v___x_149_ = l_Lean_Core_betaReduce(v_a_148_, v___y_144_, v___y_145_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_163_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_163_ == 0)
{
v___x_152_ = v___x_149_;
v_isShared_153_ = v_isSharedCheck_163_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_163_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v_lctx_154_; size_t v_sz_155_; size_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_161_; 
v_lctx_154_ = lean_ctor_get(v___y_142_, 2);
v_sz_155_ = lean_array_size(v_ys_140_);
v___x_156_ = ((size_t)0ULL);
v___x_157_ = l_unsafeCast___redArg(v_ys_140_);
lean_inc_ref(v_lctx_154_);
v___x_158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_occursInCtorTypeMask_spec__0(v_lctx_154_, v_a_150_, v_sz_155_, v___x_156_, v___x_157_);
lean_dec(v_a_150_);
v___x_159_ = l_unsafeCast___redArg(v___x_158_);
lean_dec_ref(v___x_158_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_159_);
v___x_161_ = v___x_152_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
v_a_164_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_149_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_149_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_a_172_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_147_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_147_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__0___boxed(lean_object* v_ys_180_, lean_object* v_ctorRet_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Meta_occursInCtorTypeMask___lam__0(v_ys_180_, v_ctorRet_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec_ref(v_ys_180_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__1(lean_object* v_numFields_188_, lean_object* v___f_189_, lean_object* v_x_190_, lean_object* v_ctorRet_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; 
v___x_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_197_, 0, v_numFields_188_);
v___x_198_ = 0;
v___x_199_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg(v_ctorRet_191_, v___x_197_, v___f_189_, v___x_198_, v___x_198_, v___y_192_, v___y_193_, v___y_194_, v___y_195_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___lam__1___boxed(lean_object* v_numFields_200_, lean_object* v___f_201_, lean_object* v_x_202_, lean_object* v_ctorRet_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Meta_occursInCtorTypeMask___lam__1(v_numFields_200_, v___f_201_, v_x_202_, v_ctorRet_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
lean_dec_ref(v_x_202_);
return v_res_209_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_instMonadEIO___redArg();
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2(lean_object* v_msg_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v_toApplicative_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_284_; 
v___x_221_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__0);
v___x_222_ = l_StateRefT_x27_instMonad___redArg(v___x_221_);
v_toApplicative_223_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; 
v_unused_285_ = lean_ctor_get(v___x_222_, 1);
lean_dec(v_unused_285_);
v___x_225_ = v___x_222_;
v_isShared_226_ = v_isSharedCheck_284_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_toApplicative_223_);
lean_dec(v___x_222_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_284_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v_toFunctor_227_; lean_object* v_toSeq_228_; lean_object* v_toSeqLeft_229_; lean_object* v_toSeqRight_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_282_; 
v_toFunctor_227_ = lean_ctor_get(v_toApplicative_223_, 0);
v_toSeq_228_ = lean_ctor_get(v_toApplicative_223_, 2);
v_toSeqLeft_229_ = lean_ctor_get(v_toApplicative_223_, 3);
v_toSeqRight_230_ = lean_ctor_get(v_toApplicative_223_, 4);
v_isSharedCheck_282_ = !lean_is_exclusive(v_toApplicative_223_);
if (v_isSharedCheck_282_ == 0)
{
lean_object* v_unused_283_; 
v_unused_283_ = lean_ctor_get(v_toApplicative_223_, 1);
lean_dec(v_unused_283_);
v___x_232_ = v_toApplicative_223_;
v_isShared_233_ = v_isSharedCheck_282_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_toSeqRight_230_);
lean_inc(v_toSeqLeft_229_);
lean_inc(v_toSeq_228_);
lean_inc(v_toFunctor_227_);
lean_dec(v_toApplicative_223_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_282_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___f_234_; lean_object* v___f_235_; lean_object* v___f_236_; lean_object* v___f_237_; lean_object* v___x_238_; lean_object* v___f_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___x_243_; 
v___f_234_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__1));
v___f_235_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__2));
lean_inc_ref(v_toFunctor_227_);
v___f_236_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_236_, 0, v_toFunctor_227_);
v___f_237_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_237_, 0, v_toFunctor_227_);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___f_236_);
lean_ctor_set(v___x_238_, 1, v___f_237_);
v___f_239_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_239_, 0, v_toSeqRight_230_);
v___f_240_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_240_, 0, v_toSeqLeft_229_);
v___f_241_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_241_, 0, v_toSeq_228_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 4, v___f_239_);
lean_ctor_set(v___x_232_, 3, v___f_240_);
lean_ctor_set(v___x_232_, 2, v___f_241_);
lean_ctor_set(v___x_232_, 1, v___f_234_);
lean_ctor_set(v___x_232_, 0, v___x_238_);
v___x_243_ = v___x_232_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v___f_234_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v___f_241_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v___f_240_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v___f_239_);
v___x_243_ = v_reuseFailAlloc_281_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 1, v___f_235_);
lean_ctor_set(v___x_225_, 0, v___x_243_);
v___x_245_ = v___x_225_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v___f_235_);
v___x_245_ = v_reuseFailAlloc_280_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_246_; lean_object* v_toApplicative_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_278_; 
v___x_246_ = l_StateRefT_x27_instMonad___redArg(v___x_245_);
v_toApplicative_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_278_ == 0)
{
lean_object* v_unused_279_; 
v_unused_279_ = lean_ctor_get(v___x_246_, 1);
lean_dec(v_unused_279_);
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_278_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_toApplicative_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_278_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v_toFunctor_251_; lean_object* v_toSeq_252_; lean_object* v_toSeqLeft_253_; lean_object* v_toSeqRight_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_276_; 
v_toFunctor_251_ = lean_ctor_get(v_toApplicative_247_, 0);
v_toSeq_252_ = lean_ctor_get(v_toApplicative_247_, 2);
v_toSeqLeft_253_ = lean_ctor_get(v_toApplicative_247_, 3);
v_toSeqRight_254_ = lean_ctor_get(v_toApplicative_247_, 4);
v_isSharedCheck_276_ = !lean_is_exclusive(v_toApplicative_247_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; 
v_unused_277_ = lean_ctor_get(v_toApplicative_247_, 1);
lean_dec(v_unused_277_);
v___x_256_ = v_toApplicative_247_;
v_isShared_257_ = v_isSharedCheck_276_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_toSeqRight_254_);
lean_inc(v_toSeqLeft_253_);
lean_inc(v_toSeq_252_);
lean_inc(v_toFunctor_251_);
lean_dec(v_toApplicative_247_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_276_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___f_263_; lean_object* v___f_264_; lean_object* v___f_265_; lean_object* v___x_267_; 
v___f_258_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__3));
v___f_259_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___closed__4));
lean_inc_ref(v_toFunctor_251_);
v___f_260_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_260_, 0, v_toFunctor_251_);
v___f_261_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_261_, 0, v_toFunctor_251_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___f_260_);
lean_ctor_set(v___x_262_, 1, v___f_261_);
v___f_263_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_263_, 0, v_toSeqRight_254_);
v___f_264_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_264_, 0, v_toSeqLeft_253_);
v___f_265_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_265_, 0, v_toSeq_252_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v___f_263_);
lean_ctor_set(v___x_256_, 3, v___f_264_);
lean_ctor_set(v___x_256_, 2, v___f_265_);
lean_ctor_set(v___x_256_, 1, v___f_258_);
lean_ctor_set(v___x_256_, 0, v___x_262_);
v___x_267_ = v___x_256_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___f_258_);
lean_ctor_set(v_reuseFailAlloc_275_, 2, v___f_265_);
lean_ctor_set(v_reuseFailAlloc_275_, 3, v___f_264_);
lean_ctor_set(v_reuseFailAlloc_275_, 4, v___f_263_);
v___x_267_ = v_reuseFailAlloc_275_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_object* v___x_269_; 
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v___f_259_);
lean_ctor_set(v___x_249_, 0, v___x_267_);
v___x_269_ = v___x_249_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v___f_259_);
v___x_269_ = v_reuseFailAlloc_274_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_2077__overap_272_; lean_object* v___x_273_; 
v___x_270_ = lean_box(0);
v___x_271_ = l_instInhabitedOfMonad___redArg(v___x_269_, v___x_270_);
v___x_2077__overap_272_ = lean_panic_fn_borrowed(v___x_271_, v_msg_215_);
lean_dec(v___x_271_);
lean_inc(v___y_219_);
lean_inc_ref(v___y_218_);
lean_inc(v___y_217_);
lean_inc_ref(v___y_216_);
v___x_273_ = lean_apply_5(v___x_2077__overap_272_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, lean_box(0));
return v___x_273_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2___boxed(lean_object* v_msg_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2(v_msg_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1_spec__3(lean_object* v_msgData_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; lean_object* v_env_300_; lean_object* v___x_301_; lean_object* v_toCold_302_; lean_object* v_mctx_303_; lean_object* v_lctx_304_; lean_object* v_options_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_299_ = lean_st_ref_get(v___y_297_);
v_env_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc_ref(v_env_300_);
lean_dec(v___x_299_);
v___x_301_ = lean_st_ref_get(v___y_295_);
v_toCold_302_ = lean_ctor_get(v___y_296_, 0);
v_mctx_303_ = lean_ctor_get(v___x_301_, 0);
lean_inc_ref(v_mctx_303_);
lean_dec(v___x_301_);
v_lctx_304_ = lean_ctor_get(v___y_294_, 2);
v_options_305_ = lean_ctor_get(v_toCold_302_, 2);
lean_inc_ref(v_options_305_);
lean_inc_ref(v_lctx_304_);
v___x_306_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_306_, 0, v_env_300_);
lean_ctor_set(v___x_306_, 1, v_mctx_303_);
lean_ctor_set(v___x_306_, 2, v_lctx_304_);
lean_ctor_set(v___x_306_, 3, v_options_305_);
v___x_307_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v_msgData_293_);
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1_spec__3(v_msgData_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg(lean_object* v_msg_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_ref_322_; lean_object* v___x_323_; lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_332_; 
v_ref_322_ = lean_ctor_get(v___y_319_, 2);
v___x_323_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1_spec__3(v_msg_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_332_ == 0)
{
v___x_326_ = v___x_323_;
v_isShared_327_ = v_isSharedCheck_332_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_332_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v___x_330_; 
lean_inc(v_ref_322_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v_ref_322_);
lean_ctor_set(v___x_328_, 1, v_a_324_);
if (v_isShared_327_ == 0)
{
lean_ctor_set_tag(v___x_326_, 1);
lean_ctor_set(v___x_326_, 0, v___x_328_);
v___x_330_ = v___x_326_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg___boxed(lean_object* v_msg_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg(v_msg_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
return v_res_339_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__0));
v___x_342_ = l_Lean_stringToMessageData(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__3(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__2));
v___x_345_ = l_Lean_stringToMessageData(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__7(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_349_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__6));
v___x_350_ = lean_unsigned_to_nat(11u);
v___x_351_ = lean_unsigned_to_nat(122u);
v___x_352_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__5));
v___x_353_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__4));
v___x_354_ = l_mkPanicMessageWithDecl(v___x_353_, v___x_352_, v___x_351_, v___x_350_, v___x_349_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1(lean_object* v_constName_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v___x_369_; lean_object* v_env_370_; uint8_t v___x_371_; lean_object* v___x_372_; 
v___x_369_ = lean_st_ref_get(v___y_359_);
v_env_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc_ref(v_env_370_);
lean_dec(v___x_369_);
v___x_371_ = 0;
lean_inc(v_constName_355_);
v___x_372_ = l_Lean_Environment_findAsync_x3f(v_env_370_, v_constName_355_, v___x_371_);
if (lean_obj_tag(v___x_372_) == 1)
{
lean_object* v_val_373_; uint8_t v_kind_374_; 
v_val_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_val_373_);
lean_dec_ref_known(v___x_372_, 1);
v_kind_374_ = lean_ctor_get_uint8(v_val_373_, sizeof(void*)*3);
if (v_kind_374_ == 6)
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_373_);
if (lean_obj_tag(v___x_375_) == 6)
{
lean_object* v_val_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec(v_constName_355_);
v_val_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_val_376_);
lean_dec(v___x_375_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 0);
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_val_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_object* v___x_384_; lean_object* v___x_385_; 
lean_dec_ref(v___x_375_);
v___x_384_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__7);
v___x_385_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__2(v___x_384_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_394_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_394_ == 0)
{
v___x_388_ = v___x_385_;
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
if (lean_obj_tag(v_a_386_) == 0)
{
lean_del_object(v___x_388_);
goto v___jp_361_;
}
else
{
lean_object* v_val_390_; lean_object* v___x_392_; 
lean_dec(v_constName_355_);
v_val_390_ = lean_ctor_get(v_a_386_, 0);
lean_inc(v_val_390_);
lean_dec_ref_known(v_a_386_, 1);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v_val_390_);
v___x_392_ = v___x_388_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_val_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_constName_355_);
v_a_395_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_385_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_385_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
else
{
lean_dec(v_val_373_);
goto v___jp_361_;
}
}
else
{
lean_dec(v___x_372_);
goto v___jp_361_;
}
v___jp_361_:
{
lean_object* v___x_362_; uint8_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_362_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1);
v___x_363_ = 0;
v___x_364_ = l_Lean_MessageData_ofConstName(v_constName_355_, v___x_363_);
v___x_365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_362_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__3);
v___x_367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg(v___x_367_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___boxed(lean_object* v_constName_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1(v_constName_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask(lean_object* v_ctorName_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v___f_417_; lean_object* v___x_418_; 
v___f_417_ = ((lean_object*)(l_Lean_Meta_occursInCtorTypeMask___closed__0));
v___x_418_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1(v_ctorName_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v_toConstantVal_420_; lean_object* v_numParams_421_; lean_object* v_numFields_422_; lean_object* v_type_423_; lean_object* v___f_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_418_, 1);
v_toConstantVal_420_ = lean_ctor_get(v_a_419_, 0);
lean_inc_ref(v_toConstantVal_420_);
v_numParams_421_ = lean_ctor_get(v_a_419_, 3);
lean_inc(v_numParams_421_);
v_numFields_422_ = lean_ctor_get(v_a_419_, 4);
lean_inc(v_numFields_422_);
lean_dec(v_a_419_);
v_type_423_ = lean_ctor_get(v_toConstantVal_420_, 2);
lean_inc_ref(v_type_423_);
lean_dec_ref(v_toConstantVal_420_);
v___f_424_ = lean_alloc_closure((void*)(l_Lean_Meta_occursInCtorTypeMask___lam__1___boxed), 9, 2);
lean_closure_set(v___f_424_, 0, v_numFields_422_);
lean_closure_set(v___f_424_, 1, v___f_417_);
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v_numParams_421_);
v___x_426_ = 0;
v___x_427_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg(v_type_423_, v___x_425_, v___f_424_, v___x_426_, v___x_426_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
return v___x_427_;
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
v_a_428_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_418_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_418_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_occursInCtorTypeMask___boxed(lean_object* v_ctorName_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_Meta_occursInCtorTypeMask(v_ctorName_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1(lean_object* v_00_u03b1_443_, lean_object* v_msg_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg(v_msg_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___boxed(lean_object* v_00_u03b1_451_, lean_object* v_msg_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1(v_00_u03b1_451_, v_msg_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg(lean_object* v_msg_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v___f_466_; lean_object* v___x_536__overap_467_; lean_object* v___x_468_; 
v___f_466_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg___closed__0));
v___x_536__overap_467_ = lean_panic_fn_borrowed(v___f_466_, v_msg_460_);
lean_inc(v___y_464_);
lean_inc_ref(v___y_463_);
lean_inc(v___y_462_);
lean_inc_ref(v___y_461_);
v___x_468_ = lean_apply_5(v___x_536__overap_467_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, lean_box(0));
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg___boxed(lean_object* v_msg_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg(v_msg_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0(lean_object* v_00_u03b1_476_, lean_object* v_msg_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg(v_msg_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___boxed(lean_object* v_00_u03b1_484_, lean_object* v_msg_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0(v_00_u03b1_484_, v_msg_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___lam__0(lean_object* v_k_492_, lean_object* v_b_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___x_499_; 
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
lean_inc(v___y_495_);
lean_inc_ref(v___y_494_);
v___x_499_ = lean_apply_6(v_k_492_, v_b_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, lean_box(0));
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_k_500_, lean_object* v_b_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___lam__0(v_k_500_, v_b_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg(lean_object* v_name_508_, uint8_t v_bi_509_, lean_object* v_type_510_, lean_object* v_k_511_, uint8_t v_kind_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v___f_518_; lean_object* v___x_519_; 
v___f_518_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_518_, 0, v_k_511_);
v___x_519_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_508_, v_bi_509_, v_type_510_, v___f_518_, v_kind_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_519_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
v_a_528_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_519_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_519_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg___boxed(lean_object* v_name_536_, lean_object* v_bi_537_, lean_object* v_type_538_, lean_object* v_k_539_, lean_object* v_kind_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
uint8_t v_bi_boxed_546_; uint8_t v_kind_boxed_547_; lean_object* v_res_548_; 
v_bi_boxed_546_ = lean_unbox(v_bi_537_);
v_kind_boxed_547_ = lean_unbox(v_kind_540_);
v_res_548_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg(v_name_536_, v_bi_boxed_546_, v_type_538_, v_k_539_, v_kind_boxed_547_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg(lean_object* v_name_549_, lean_object* v_type_550_, lean_object* v_k_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
uint8_t v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; 
v___x_557_ = 0;
v___x_558_ = 0;
v___x_559_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg(v_name_549_, v___x_557_, v_type_550_, v_k_551_, v___x_558_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg___boxed(lean_object* v_name_560_, lean_object* v_type_561_, lean_object* v_k_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg(v_name_560_, v_type_561_, v_k_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___lam__0___boxed(lean_object* v_zs2_569_, lean_object* v_acc_570_, lean_object* v_ctor_571_, lean_object* v_k_572_, lean_object* v_zs_573_, lean_object* v_indices_574_, lean_object* v_tail_575_, lean_object* v_tail_576_, lean_object* v_z_x27_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___lam__0(v_zs2_569_, v_acc_570_, v_ctor_571_, v_k_572_, v_zs_573_, v_indices_574_, v_tail_575_, v_tail_576_, v_z_x27_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
return v_res_583_;
}
}
static lean_object* _init_l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__3(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_587_ = ((lean_object*)(l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__2));
v___x_588_ = lean_unsigned_to_nat(8u);
v___x_589_ = lean_unsigned_to_nat(91u);
v___x_590_ = ((lean_object*)(l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__1));
v___x_591_ = ((lean_object*)(l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__0));
v___x_592_ = l_mkPanicMessageWithDecl(v___x_591_, v___x_590_, v___x_589_, v___x_588_, v___x_587_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg(lean_object* v_ctor_594_, lean_object* v_k_595_, lean_object* v_zs_596_, lean_object* v_indices_597_, lean_object* v_zs2_598_, lean_object* v_mask_599_, lean_object* v_todo_600_, lean_object* v_acc_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
if (lean_obj_tag(v_mask_599_) == 1)
{
lean_object* v_head_607_; uint8_t v___x_608_; 
v_head_607_ = lean_ctor_get(v_mask_599_, 0);
v___x_608_ = lean_unbox(v_head_607_);
if (v___x_608_ == 0)
{
if (lean_obj_tag(v_todo_600_) == 1)
{
lean_object* v_tail_609_; lean_object* v_tail_610_; lean_object* v___f_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v_tail_609_ = lean_ctor_get(v_mask_599_, 1);
lean_inc(v_tail_609_);
lean_dec_ref_known(v_mask_599_, 2);
v_tail_610_ = lean_ctor_get(v_todo_600_, 1);
lean_inc(v_tail_610_);
lean_dec_ref_known(v_todo_600_, 2);
lean_inc_ref(v_ctor_594_);
lean_inc_ref(v_zs2_598_);
v___f_611_ = lean_alloc_closure((void*)(l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___lam__0___boxed), 14, 8);
lean_closure_set(v___f_611_, 0, v_zs2_598_);
lean_closure_set(v___f_611_, 1, v_acc_601_);
lean_closure_set(v___f_611_, 2, v_ctor_594_);
lean_closure_set(v___f_611_, 3, v_k_595_);
lean_closure_set(v___f_611_, 4, v_zs_596_);
lean_closure_set(v___f_611_, 5, v_indices_597_);
lean_closure_set(v___f_611_, 6, v_tail_609_);
lean_closure_set(v___f_611_, 7, v_tail_610_);
v___x_612_ = l_Lean_mkAppN(v_ctor_594_, v_zs2_598_);
lean_dec_ref(v_zs2_598_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
v___x_613_ = lean_infer_type(v___x_612_, v_a_602_, v_a_603_, v_a_604_, v_a_605_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_615_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_a_614_);
lean_dec_ref_known(v___x_613_, 1);
v___x_615_ = l_Lean_Meta_whnfForall(v_a_614_, v_a_602_, v_a_603_, v_a_604_, v_a_605_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; uint8_t v___x_617_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v___x_615_, 1);
v___x_617_ = l_Lean_Expr_isForall(v_a_616_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_619_; 
lean_dec(v_a_616_);
lean_dec_ref(v___f_611_);
v___x_618_ = lean_obj_once(&l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__3, &l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__3_once, _init_l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__3);
v___x_619_ = l_panic___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__0___redArg(v___x_618_, v_a_602_, v_a_603_, v_a_604_, v_a_605_);
return v___x_619_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_620_ = l_Lean_Expr_bindingName_x21(v_a_616_);
v___x_621_ = ((lean_object*)(l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___closed__4));
v___x_622_ = lean_name_append_after(v___x_620_, v___x_621_);
v___x_623_ = l_Lean_Expr_bindingDomain_x21(v_a_616_);
lean_dec(v_a_616_);
v___x_624_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg(v___x_622_, v___x_623_, v___f_611_, v_a_602_, v_a_603_, v_a_604_, v_a_605_);
return v___x_624_;
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref(v___f_611_);
v_a_625_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_615_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_615_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec_ref(v___f_611_);
v_a_633_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_613_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_613_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
lean_object* v___x_641_; 
lean_dec_ref_known(v_mask_599_, 2);
lean_dec(v_todo_600_);
lean_dec_ref(v_ctor_594_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
v___x_641_ = lean_apply_9(v_k_595_, v_acc_601_, v_indices_597_, v_zs_596_, v_zs2_598_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
return v___x_641_;
}
}
else
{
if (lean_obj_tag(v_todo_600_) == 1)
{
lean_object* v_tail_642_; lean_object* v_head_643_; lean_object* v_tail_644_; lean_object* v___x_645_; 
v_tail_642_ = lean_ctor_get(v_mask_599_, 1);
lean_inc(v_tail_642_);
lean_dec_ref_known(v_mask_599_, 2);
v_head_643_ = lean_ctor_get(v_todo_600_, 0);
lean_inc(v_head_643_);
v_tail_644_ = lean_ctor_get(v_todo_600_, 1);
lean_inc(v_tail_644_);
lean_dec_ref_known(v_todo_600_, 2);
v___x_645_ = lean_array_push(v_zs2_598_, v_head_643_);
v_zs2_598_ = v___x_645_;
v_mask_599_ = v_tail_642_;
v_todo_600_ = v_tail_644_;
goto _start;
}
else
{
lean_object* v___x_647_; 
lean_dec_ref_known(v_mask_599_, 2);
lean_dec(v_todo_600_);
lean_dec_ref(v_ctor_594_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
v___x_647_ = lean_apply_9(v_k_595_, v_acc_601_, v_indices_597_, v_zs_596_, v_zs2_598_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
return v___x_647_;
}
}
}
else
{
lean_object* v___x_648_; 
lean_dec(v_todo_600_);
lean_dec(v_mask_599_);
lean_dec_ref(v_ctor_594_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
v___x_648_ = lean_apply_9(v_k_595_, v_acc_601_, v_indices_597_, v_zs_596_, v_zs2_598_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
return v___x_648_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___lam__0(lean_object* v_zs2_649_, lean_object* v_acc_650_, lean_object* v_ctor_651_, lean_object* v_k_652_, lean_object* v_zs_653_, lean_object* v_indices_654_, lean_object* v_tail_655_, lean_object* v_tail_656_, lean_object* v_z_x27_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
lean_inc_ref(v_z_x27_657_);
v___x_663_ = lean_array_push(v_zs2_649_, v_z_x27_657_);
v___x_664_ = lean_array_push(v_acc_650_, v_z_x27_657_);
v___x_665_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg(v_ctor_651_, v_k_652_, v_zs_653_, v_indices_654_, v___x_663_, v_tail_655_, v_tail_656_, v___x_664_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg___boxed(lean_object* v_ctor_666_, lean_object* v_k_667_, lean_object* v_zs_668_, lean_object* v_indices_669_, lean_object* v_zs2_670_, lean_object* v_mask_671_, lean_object* v_todo_672_, lean_object* v_acc_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg(v_ctor_666_, v_k_667_, v_zs_668_, v_indices_669_, v_zs2_670_, v_mask_671_, v_todo_672_, v_acc_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go(lean_object* v_00_u03b1_680_, lean_object* v_ctor_681_, lean_object* v_k_682_, lean_object* v_zs_683_, lean_object* v_indices_684_, lean_object* v_zs2_685_, lean_object* v_mask_686_, lean_object* v_todo_687_, lean_object* v_acc_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg(v_ctor_681_, v_k_682_, v_zs_683_, v_indices_684_, v_zs2_685_, v_mask_686_, v_todo_687_, v_acc_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___boxed(lean_object* v_00_u03b1_695_, lean_object* v_ctor_696_, lean_object* v_k_697_, lean_object* v_zs_698_, lean_object* v_indices_699_, lean_object* v_zs2_700_, lean_object* v_mask_701_, lean_object* v_todo_702_, lean_object* v_acc_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go(v_00_u03b1_695_, v_ctor_696_, v_k_697_, v_zs_698_, v_indices_699_, v_zs2_700_, v_mask_701_, v_todo_702_, v_acc_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1(lean_object* v_00_u03b1_710_, lean_object* v_name_711_, uint8_t v_bi_712_, lean_object* v_type_713_, lean_object* v_k_714_, uint8_t v_kind_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___redArg(v_name_711_, v_bi_712_, v_type_713_, v_k_714_, v_kind_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1___boxed(lean_object* v_00_u03b1_722_, lean_object* v_name_723_, lean_object* v_bi_724_, lean_object* v_type_725_, lean_object* v_k_726_, lean_object* v_kind_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
uint8_t v_bi_boxed_733_; uint8_t v_kind_boxed_734_; lean_object* v_res_735_; 
v_bi_boxed_733_ = lean_unbox(v_bi_724_);
v_kind_boxed_734_ = lean_unbox(v_kind_727_);
v_res_735_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1_spec__1(v_00_u03b1_722_, v_name_723_, v_bi_boxed_733_, v_type_725_, v_k_726_, v_kind_boxed_734_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1(lean_object* v_00_u03b1_736_, lean_object* v_name_737_, lean_object* v_type_738_, lean_object* v_k_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___redArg(v_name_737_, v_type_738_, v_k_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1___boxed(lean_object* v_00_u03b1_746_, lean_object* v_name_747_, lean_object* v_type_748_, lean_object* v_k_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go_spec__1(v_00_u03b1_746_, v_name_747_, v_type_748_, v_k_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg(lean_object* v_type_756_, lean_object* v_k_757_, uint8_t v_cleanupAnnotations_758_, uint8_t v_whnfType_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___f_765_; lean_object* v___x_766_; 
v___f_765_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_occursInCtorTypeMask_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_765_, 0, v_k_757_);
v___x_766_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_756_, v___f_765_, v_cleanupAnnotations_758_, v_whnfType_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_766_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_766_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg___boxed(lean_object* v_type_783_, lean_object* v_k_784_, lean_object* v_cleanupAnnotations_785_, lean_object* v_whnfType_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_792_; uint8_t v_whnfType_boxed_793_; lean_object* v_res_794_; 
v_cleanupAnnotations_boxed_792_ = lean_unbox(v_cleanupAnnotations_785_);
v_whnfType_boxed_793_ = lean_unbox(v_whnfType_786_);
v_res_794_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg(v_type_783_, v_k_784_, v_cleanupAnnotations_boxed_792_, v_whnfType_boxed_793_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1(lean_object* v_00_u03b1_795_, lean_object* v_type_796_, lean_object* v_k_797_, uint8_t v_cleanupAnnotations_798_, uint8_t v_whnfType_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg(v_type_796_, v_k_797_, v_cleanupAnnotations_798_, v_whnfType_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___boxed(lean_object* v_00_u03b1_806_, lean_object* v_type_807_, lean_object* v_k_808_, lean_object* v_cleanupAnnotations_809_, lean_object* v_whnfType_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_816_; uint8_t v_whnfType_boxed_817_; lean_object* v_res_818_; 
v_cleanupAnnotations_boxed_816_ = lean_unbox(v_cleanupAnnotations_809_);
v_whnfType_boxed_817_ = lean_unbox(v_whnfType_810_);
v_res_818_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1(v_00_u03b1_806_, v_type_807_, v_k_808_, v_cleanupAnnotations_boxed_816_, v_whnfType_boxed_817_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
return v_res_818_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__1(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__0));
v___x_821_ = l_Lean_stringToMessageData(v___x_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0(lean_object* v_constName_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___x_828_; lean_object* v_env_829_; lean_object* v___x_830_; 
v___x_828_ = lean_st_ref_get(v___y_826_);
v_env_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc_ref(v_env_829_);
lean_dec(v___x_828_);
lean_inc(v_constName_822_);
v___x_830_ = l_Lean_isInductiveCore_x3f(v_env_829_, v_constName_822_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_831_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1___closed__1);
v___x_832_ = 0;
v___x_833_ = l_Lean_MessageData_ofConstName(v_constName_822_, v___x_832_);
v___x_834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_831_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___closed__1);
v___x_836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_occursInCtorTypeMask_spec__1_spec__1___redArg(v___x_836_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
return v___x_837_;
}
else
{
lean_object* v_val_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
lean_dec(v_constName_822_);
v_val_838_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_830_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_val_838_);
lean_dec(v___x_830_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
lean_ctor_set_tag(v___x_840_, 0);
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_val_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0___boxed(lean_object* v_constName_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0(v_constName_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
return v_res_852_;
}
}
static lean_object* _init_l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_box(0);
v___x_854_ = l_unsafeCast___redArg(v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_855_; lean_object* v_dummy_856_; 
v___x_855_ = lean_obj_once(&l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__0, &l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__0);
v_dummy_856_ = l_Lean_Expr_sort___override(v___x_855_);
return v_dummy_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0(lean_object* v_ctor_859_, lean_object* v_k_860_, lean_object* v_zs_861_, lean_object* v_ctorRet_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_868_; 
lean_inc(v___y_866_);
lean_inc_ref(v___y_865_);
lean_inc(v___y_864_);
lean_inc_ref(v___y_863_);
v___x_868_ = lean_whnf(v_ctorRet_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = l_Lean_Core_betaReduce(v_a_869_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l_Lean_Expr_getAppFn(v_a_871_);
v___x_873_ = l_Lean_Expr_constName_x21(v___x_872_);
lean_dec_ref(v___x_872_);
v___x_874_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_withSharedCtorIndices_spec__0(v___x_873_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v_numIndices_876_; lean_object* v_dummy_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_874_, 1);
v_numIndices_876_ = lean_ctor_get(v_a_875_, 2);
lean_inc_n(v_numIndices_876_, 2);
lean_dec(v_a_875_);
v_dummy_877_ = lean_obj_once(&l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__1, &l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__1);
v___x_878_ = lean_mk_array(v_numIndices_876_, v_dummy_877_);
v___x_879_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(v_numIndices_876_, v_a_871_, v___x_878_);
v___x_880_ = l_Lean_Expr_getAppFn(v_ctor_859_);
v___x_881_ = l_Lean_Expr_constName_x21(v___x_880_);
lean_dec_ref(v___x_880_);
v___x_882_ = l_Lean_Meta_occursInCtorTypeMask(v___x_881_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = ((lean_object*)(l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___closed__2));
v___x_885_ = lean_array_to_list(v_a_883_);
lean_inc_ref_n(v_zs_861_, 2);
v___x_886_ = lean_array_to_list(v_zs_861_);
v___x_887_ = l___private_Lean_Meta_SameCtorUtils_0__Lean_Meta_withSharedCtorIndices_go___redArg(v_ctor_859_, v_k_860_, v_zs_861_, v___x_879_, v___x_884_, v___x_885_, v___x_886_, v_zs_861_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
return v___x_887_;
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec_ref(v___x_879_);
lean_dec_ref(v_zs_861_);
lean_dec_ref(v_k_860_);
lean_dec_ref(v_ctor_859_);
v_a_888_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_882_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_882_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_a_871_);
lean_dec_ref(v_zs_861_);
lean_dec_ref(v_k_860_);
lean_dec_ref(v_ctor_859_);
v_a_896_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_874_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_874_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_zs_861_);
lean_dec_ref(v_k_860_);
lean_dec_ref(v_ctor_859_);
v_a_904_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_870_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_870_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec_ref(v_zs_861_);
lean_dec_ref(v_k_860_);
lean_dec_ref(v_ctor_859_);
v_a_912_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_868_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_868_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___boxed(lean_object* v_ctor_920_, lean_object* v_k_921_, lean_object* v_zs_922_, lean_object* v_ctorRet_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lean_Meta_withSharedCtorIndices___redArg___lam__0(v_ctor_920_, v_k_921_, v_zs_922_, v_ctorRet_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg(lean_object* v_ctor_930_, lean_object* v_k_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
lean_object* v___f_937_; lean_object* v___x_938_; 
lean_inc_ref(v_ctor_930_);
v___f_937_ = lean_alloc_closure((void*)(l_Lean_Meta_withSharedCtorIndices___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_937_, 0, v_ctor_930_);
lean_closure_set(v___f_937_, 1, v_k_931_);
lean_inc(v_a_935_);
lean_inc_ref(v_a_934_);
lean_inc(v_a_933_);
lean_inc_ref(v_a_932_);
v___x_938_ = lean_infer_type(v_ctor_930_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; uint8_t v___x_940_; lean_object* v___x_941_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_938_, 1);
v___x_940_ = 0;
v___x_941_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_withSharedCtorIndices_spec__1___redArg(v_a_939_, v___f_937_, v___x_940_, v___x_940_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
return v___x_941_;
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec_ref(v___f_937_);
v_a_942_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_938_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_938_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___redArg___boxed(lean_object* v_ctor_950_, lean_object* v_k_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Meta_withSharedCtorIndices___redArg(v_ctor_950_, v_k_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices(lean_object* v_00_u03b1_958_, lean_object* v_ctor_959_, lean_object* v_k_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Lean_Meta_withSharedCtorIndices___redArg(v_ctor_959_, v_k_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withSharedCtorIndices___boxed(lean_object* v_00_u03b1_967_, lean_object* v_ctor_968_, lean_object* v_k_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Meta_withSharedCtorIndices(v_00_u03b1_967_, v_ctor_968_, v_k_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
lean_dec(v_a_971_);
lean_dec_ref(v_a_970_);
return v_res_975_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_SameCtorUtils(builtin);
}
#ifdef __cplusplus
}
#endif

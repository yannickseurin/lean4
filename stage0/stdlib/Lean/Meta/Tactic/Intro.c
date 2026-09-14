// Lean compiler output
// Module: Lean.Meta.Tactic.Intro
// Imports: public import Lean.Meta.Tactic.Util
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
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getUnusedName(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadMCtxMetaM;
extern lean_object* l_Lean_Core_instMonadNameGeneratorCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assign___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshFVarId___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21___boxed(lean_object*);
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "introN"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 179, 69, 171, 232, 145, 98, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "There are no additional binders or `let` bindings in the goal to introduce"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__8;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__1_value),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__8_value),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__3_value),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__4_value),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__9_value),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_fvarId_x21___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hygienic"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(106, 53, 183, 57, 182, 192, 14, 150)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "make sure tactics are hygienic"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 82, 89, 96, 183, 68, 254, 125)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 184, 241, 48, 181, 222, 216, 48)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_tactic_hygienic;
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_introNCore_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_introNCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_introNCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_introNCore___closed__0 = (const lean_object*)&l_Lean_Meta_introNCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introNP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introNP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_intro1Core___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1P(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1P___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_intro1___00spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_intro1___00spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_intro1___00__lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "intro1_: expected arrow type\n"};
static const lean_object* l_Lean_MVarId_intro1___00__lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_intro1___00__lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_intro1___00__lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_intro1___00__lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___00__lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___00__lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1__(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___00__boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getIntrosSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getIntrosSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__0(lean_object* v_mvarId_1_, lean_object* v_type_2_, lean_object* v_fvars_3_, uint8_t v_isZero_4_, lean_object* v___x_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc(v_mvarId_1_);
v___x_11_ = l_Lean_MVarId_getTag(v_mvarId_1_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_a_12_ = lean_ctor_get(v___x_11_, 0);
lean_inc(v_a_12_);
lean_dec_ref_known(v___x_11_, 1);
v___x_13_ = l_Lean_Expr_headBeta(v_type_2_);
v___x_14_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_13_, v_a_12_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v_a_15_; uint8_t v___x_16_; uint8_t v___x_17_; lean_object* v___x_18_; 
v_a_15_ = lean_ctor_get(v___x_14_, 0);
lean_inc_n(v_a_15_, 2);
lean_dec_ref_known(v___x_14_, 1);
v___x_16_ = 0;
v___x_17_ = 1;
lean_inc_ref(v_fvars_3_);
v___x_18_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3_, v_a_15_, v___x_16_, v_isZero_4_, v___x_16_, v_isZero_4_, v___x_17_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_1425__overap_20_; lean_object* v___x_21_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_a_19_);
lean_dec_ref_known(v___x_18_, 1);
v___x_1425__overap_20_ = l_Lean_MVarId_assign___redArg(v___x_5_, v_mvarId_1_, v_a_19_);
v___x_21_ = lean_apply_5(v___x_1425__overap_20_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, lean_box(0));
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_30_; 
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_30_ == 0)
{
lean_object* v_unused_31_; 
v_unused_31_ = lean_ctor_get(v___x_21_, 0);
lean_dec(v_unused_31_);
v___x_23_ = v___x_21_;
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
else
{
lean_dec(v___x_21_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_25_ = l_Lean_Expr_mvarId_x21(v_a_15_);
lean_dec(v_a_15_);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v_fvars_3_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_26_);
v___x_28_ = v___x_23_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
lean_dec(v_a_15_);
lean_dec_ref(v_fvars_3_);
v_a_32_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_21_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_21_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_32_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
else
{
lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_47_; 
lean_dec(v_a_15_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v___y_7_);
lean_dec_ref(v___y_6_);
lean_dec_ref(v___x_5_);
lean_dec_ref(v_fvars_3_);
lean_dec(v_mvarId_1_);
v_a_40_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_47_ == 0)
{
v___x_42_ = v___x_18_;
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v___x_18_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_a_40_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
else
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v___y_7_);
lean_dec_ref(v___y_6_);
lean_dec_ref(v___x_5_);
lean_dec_ref(v_fvars_3_);
lean_dec(v_mvarId_1_);
v_a_48_ = lean_ctor_get(v___x_14_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_14_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_14_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v___y_7_);
lean_dec_ref(v___y_6_);
lean_dec_ref(v___x_5_);
lean_dec_ref(v_fvars_3_);
lean_dec_ref(v_type_2_);
lean_dec(v_mvarId_1_);
v_a_56_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_11_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_11_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__0___boxed(lean_object* v_mvarId_64_, lean_object* v_type_65_, lean_object* v_fvars_66_, lean_object* v_isZero_67_, lean_object* v___x_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
uint8_t v_isZero_boxed_74_; lean_object* v_res_75_; 
v_isZero_boxed_74_ = lean_unbox(v_isZero_67_);
v_res_75_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__0(v_mvarId_64_, v_type_65_, v_fvars_66_, v_isZero_boxed_74_, v___x_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
return v_res_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__2));
v___x_81_ = l_Lean_stringToMessageData(v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__3);
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__0(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_instMonadEIO___redArg();
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__0, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__0);
v___x_86_ = l_StateRefT_x27_instMonad___redArg(v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__8(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = l_Lean_Core_instMonadNameGeneratorCoreM;
v___x_93_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__7));
v___x_94_ = l_Lean_monadNameGeneratorLift___redArg(v___x_93_, v___x_92_);
return v___x_94_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__9(void){
_start:
{
lean_object* v___x_96_; lean_object* v___f_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__8, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__8_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__8);
v___f_97_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__6));
v___x_98_ = l_Lean_monadNameGeneratorLift___redArg(v___f_97_, v___x_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___boxed(lean_object* v___x_99_, lean_object* v___x_100_, lean_object* v_type_101_, lean_object* v_mvarId_102_, lean_object* v_n_103_, lean_object* v_mkName_104_, lean_object* v_lctx_105_, lean_object* v_fvars_106_, lean_object* v___x_107_, lean_object* v_s_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1(v___x_99_, v___x_100_, v_type_101_, v_mvarId_102_, v_n_103_, v_mkName_104_, v_lctx_105_, v_fvars_106_, v___x_107_, v_s_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
lean_dec(v_n_103_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(lean_object* v_mvarId_115_, lean_object* v_mkName_116_, lean_object* v_i_117_, lean_object* v_lctx_118_, lean_object* v_fvars_119_, lean_object* v_j_120_, lean_object* v_s_121_, lean_object* v_type_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v___x_128_; lean_object* v_toApplicative_129_; lean_object* v_toFunctor_130_; lean_object* v_toSeq_131_; lean_object* v_toSeqLeft_132_; lean_object* v_toSeqRight_133_; lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___f_136_; lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___f_139_; lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v_toApplicative_147_; lean_object* v_toFunctor_148_; lean_object* v_toSeq_149_; lean_object* v_toSeqLeft_150_; lean_object* v_toSeqRight_151_; lean_object* v___f_152_; lean_object* v___f_153_; lean_object* v___x_154_; lean_object* v___f_155_; lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v_toApplicative_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_282_; 
v___x_128_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1);
v_toApplicative_129_ = lean_ctor_get(v___x_128_, 0);
v_toFunctor_130_ = lean_ctor_get(v_toApplicative_129_, 0);
v_toSeq_131_ = lean_ctor_get(v_toApplicative_129_, 2);
v_toSeqLeft_132_ = lean_ctor_get(v_toApplicative_129_, 3);
v_toSeqRight_133_ = lean_ctor_get(v_toApplicative_129_, 4);
v___f_134_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__2));
v___f_135_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_130_, 2);
v___f_136_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_136_, 0, v_toFunctor_130_);
v___f_137_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_137_, 0, v_toFunctor_130_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___f_136_);
lean_ctor_set(v___x_138_, 1, v___f_137_);
lean_inc(v_toSeqRight_133_);
v___f_139_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_139_, 0, v_toSeqRight_133_);
lean_inc(v_toSeqLeft_132_);
v___f_140_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_140_, 0, v_toSeqLeft_132_);
lean_inc(v_toSeq_131_);
v___f_141_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_141_, 0, v_toSeq_131_);
v___x_142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_142_, 0, v___x_138_);
lean_ctor_set(v___x_142_, 1, v___f_134_);
lean_ctor_set(v___x_142_, 2, v___f_141_);
lean_ctor_set(v___x_142_, 3, v___f_140_);
lean_ctor_set(v___x_142_, 4, v___f_139_);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___f_135_);
v___x_144_ = l_StateRefT_x27_instMonad___redArg(v___x_143_);
v___x_145_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_145_, 0, lean_box(0));
lean_closure_set(v___x_145_, 1, lean_box(0));
lean_closure_set(v___x_145_, 2, v___x_144_);
v___x_146_ = l_instMonadControlTOfPure___redArg(v___x_145_);
v_toApplicative_147_ = lean_ctor_get(v___x_128_, 0);
v_toFunctor_148_ = lean_ctor_get(v_toApplicative_147_, 0);
v_toSeq_149_ = lean_ctor_get(v_toApplicative_147_, 2);
v_toSeqLeft_150_ = lean_ctor_get(v_toApplicative_147_, 3);
v_toSeqRight_151_ = lean_ctor_get(v_toApplicative_147_, 4);
lean_inc_ref_n(v_toFunctor_148_, 2);
v___f_152_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_152_, 0, v_toFunctor_148_);
v___f_153_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_153_, 0, v_toFunctor_148_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v___f_152_);
lean_ctor_set(v___x_154_, 1, v___f_153_);
lean_inc(v_toSeqRight_151_);
v___f_155_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_155_, 0, v_toSeqRight_151_);
lean_inc(v_toSeqLeft_150_);
v___f_156_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_156_, 0, v_toSeqLeft_150_);
lean_inc(v_toSeq_149_);
v___f_157_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_157_, 0, v_toSeq_149_);
v___x_158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_158_, 0, v___x_154_);
lean_ctor_set(v___x_158_, 1, v___f_134_);
lean_ctor_set(v___x_158_, 2, v___f_157_);
lean_ctor_set(v___x_158_, 3, v___f_156_);
lean_ctor_set(v___x_158_, 4, v___f_155_);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
lean_ctor_set(v___x_159_, 1, v___f_135_);
v___x_160_ = l_StateRefT_x27_instMonad___redArg(v___x_159_);
v_toApplicative_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_282_ == 0)
{
lean_object* v_unused_283_; 
v_unused_283_ = lean_ctor_get(v___x_160_, 1);
lean_dec(v_unused_283_);
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_282_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_toApplicative_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_282_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v_toFunctor_165_; lean_object* v_toSeq_166_; lean_object* v_toSeqLeft_167_; lean_object* v_toSeqRight_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_280_; 
v_toFunctor_165_ = lean_ctor_get(v_toApplicative_161_, 0);
v_toSeq_166_ = lean_ctor_get(v_toApplicative_161_, 2);
v_toSeqLeft_167_ = lean_ctor_get(v_toApplicative_161_, 3);
v_toSeqRight_168_ = lean_ctor_get(v_toApplicative_161_, 4);
v_isSharedCheck_280_ = !lean_is_exclusive(v_toApplicative_161_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v_toApplicative_161_, 1);
lean_dec(v_unused_281_);
v___x_170_ = v_toApplicative_161_;
v_isShared_171_ = v_isSharedCheck_280_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_toSeqRight_168_);
lean_inc(v_toSeqLeft_167_);
lean_inc(v_toSeq_166_);
lean_inc(v_toFunctor_165_);
lean_dec(v_toApplicative_161_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_280_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___f_174_; lean_object* v___f_175_; lean_object* v___x_176_; lean_object* v___f_177_; lean_object* v___f_178_; lean_object* v___f_179_; lean_object* v___x_181_; 
v___f_172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__4));
v___f_173_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__5));
lean_inc_ref(v_toFunctor_165_);
v___f_174_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_174_, 0, v_toFunctor_165_);
v___f_175_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_175_, 0, v_toFunctor_165_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___f_174_);
lean_ctor_set(v___x_176_, 1, v___f_175_);
v___f_177_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_177_, 0, v_toSeqRight_168_);
v___f_178_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_178_, 0, v_toSeqLeft_167_);
v___f_179_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_179_, 0, v_toSeq_166_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 4, v___f_177_);
lean_ctor_set(v___x_170_, 3, v___f_178_);
lean_ctor_set(v___x_170_, 2, v___f_179_);
lean_ctor_set(v___x_170_, 1, v___f_172_);
lean_ctor_set(v___x_170_, 0, v___x_176_);
v___x_181_ = v___x_170_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v___f_172_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v___f_179_);
lean_ctor_set(v_reuseFailAlloc_279_, 3, v___f_178_);
lean_ctor_set(v_reuseFailAlloc_279_, 4, v___f_177_);
v___x_181_ = v_reuseFailAlloc_279_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_183_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 1, v___f_173_);
lean_ctor_set(v___x_163_, 0, v___x_181_);
v___x_183_ = v___x_163_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v___f_173_);
v___x_183_ = v_reuseFailAlloc_278_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v_zero_186_; uint8_t v_isZero_187_; 
v___x_184_ = l_Lean_Meta_instMonadMCtxMetaM;
v___x_185_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__9, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__9_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__9);
v_zero_186_ = lean_unsigned_to_nat(0u);
v_isZero_187_ = lean_nat_dec_eq(v_i_117_, v_zero_186_);
if (v_isZero_187_ == 1)
{
lean_object* v___x_188_; lean_object* v_type_189_; lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___x_1394__overap_193_; lean_object* v___x_194_; 
lean_dec(v_s_121_);
lean_dec(v_i_117_);
lean_dec_ref(v_mkName_116_);
v___x_188_ = lean_array_get_size(v_fvars_119_);
v_type_189_ = lean_expr_instantiate_rev_range(v_type_122_, v_j_120_, v___x_188_, v_fvars_119_);
lean_dec_ref(v_type_122_);
v___x_190_ = lean_box(v_isZero_187_);
lean_inc_ref(v_fvars_119_);
v___f_191_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_191_, 0, v_mvarId_115_);
lean_closure_set(v___f_191_, 1, v_type_189_);
lean_closure_set(v___f_191_, 2, v_fvars_119_);
lean_closure_set(v___f_191_, 3, v___x_190_);
lean_closure_set(v___f_191_, 4, v___x_184_);
lean_inc_ref(v___x_183_);
lean_inc_ref(v___x_146_);
v___x_192_ = l_Lean_Meta_withNewLocalInstances___redArg(v___x_146_, v___x_183_, v_fvars_119_, v_j_120_, v___f_191_);
v___x_1394__overap_193_ = l_Lean_Meta_withLCtx_x27___redArg(v___x_146_, v___x_183_, v_lctx_118_, v___x_192_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_a_124_);
lean_inc_ref(v_a_123_);
v___x_194_ = lean_apply_5(v___x_1394__overap_193_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, lean_box(0));
return v___x_194_;
}
else
{
lean_object* v_one_195_; lean_object* v_n_196_; 
v_one_195_ = lean_unsigned_to_nat(1u);
v_n_196_ = lean_nat_sub(v_i_117_, v_one_195_);
lean_dec(v_i_117_);
switch(lean_obj_tag(v_type_122_))
{
case 8:
{
lean_object* v_declName_197_; lean_object* v_type_198_; lean_object* v_value_199_; lean_object* v_body_200_; lean_object* v___x_201_; lean_object* v_type_202_; lean_object* v_type_203_; lean_object* v_val_204_; lean_object* v___x_1396__overap_205_; lean_object* v___x_206_; 
lean_dec_ref(v___x_146_);
v_declName_197_ = lean_ctor_get(v_type_122_, 0);
lean_inc(v_declName_197_);
v_type_198_ = lean_ctor_get(v_type_122_, 1);
lean_inc_ref(v_type_198_);
v_value_199_ = lean_ctor_get(v_type_122_, 2);
lean_inc_ref(v_value_199_);
v_body_200_ = lean_ctor_get(v_type_122_, 3);
lean_inc_ref(v_body_200_);
lean_dec_ref_known(v_type_122_, 4);
v___x_201_ = lean_array_get_size(v_fvars_119_);
v_type_202_ = lean_expr_instantiate_rev_range(v_type_198_, v_j_120_, v___x_201_, v_fvars_119_);
lean_dec_ref(v_type_198_);
v_type_203_ = l_Lean_Expr_headBeta(v_type_202_);
v_val_204_ = lean_expr_instantiate_rev_range(v_value_199_, v_j_120_, v___x_201_, v_fvars_119_);
lean_dec_ref(v_value_199_);
v___x_1396__overap_205_ = l_Lean_mkFreshFVarId___redArg(v___x_183_, v___x_185_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_a_124_);
lean_inc_ref(v_a_123_);
v___x_206_ = lean_apply_5(v___x_1396__overap_205_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, lean_box(0));
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; uint8_t v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_206_, 1);
v___x_208_ = 1;
v___x_209_ = lean_box(v___x_208_);
lean_inc_ref(v_mkName_116_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_a_124_);
lean_inc_ref(v_a_123_);
lean_inc_ref(v_lctx_118_);
v___x_210_ = lean_apply_9(v_mkName_116_, v_lctx_118_, v_declName_197_, v___x_209_, v_s_121_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, lean_box(0));
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v_fst_212_; lean_object* v_snd_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_210_, 1);
v_fst_212_ = lean_ctor_get(v_a_211_, 0);
lean_inc(v_fst_212_);
v_snd_213_ = lean_ctor_get(v_a_211_, 1);
lean_inc(v_snd_213_);
lean_dec(v_a_211_);
v___x_214_ = 0;
lean_inc(v_a_207_);
v___x_215_ = l_Lean_LocalContext_mkLetDecl(v_lctx_118_, v_a_207_, v_fst_212_, v_type_203_, v_val_204_, v_isZero_187_, v___x_214_);
v___x_216_ = l_Lean_mkFVar(v_a_207_);
v___x_217_ = lean_array_push(v_fvars_119_, v___x_216_);
v_i_117_ = v_n_196_;
v_lctx_118_ = v___x_215_;
v_fvars_119_ = v___x_217_;
v_s_121_ = v_snd_213_;
v_type_122_ = v_body_200_;
goto _start;
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec(v_a_207_);
lean_dec_ref(v_val_204_);
lean_dec_ref(v_type_203_);
lean_dec_ref(v_body_200_);
lean_dec(v_n_196_);
lean_dec(v_j_120_);
lean_dec_ref(v_fvars_119_);
lean_dec_ref(v_lctx_118_);
lean_dec_ref(v_mkName_116_);
lean_dec(v_mvarId_115_);
v_a_219_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_210_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_210_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
lean_dec_ref(v_val_204_);
lean_dec_ref(v_type_203_);
lean_dec_ref(v_body_200_);
lean_dec(v_declName_197_);
lean_dec(v_n_196_);
lean_dec(v_s_121_);
lean_dec(v_j_120_);
lean_dec_ref(v_fvars_119_);
lean_dec_ref(v_lctx_118_);
lean_dec_ref(v_mkName_116_);
lean_dec(v_mvarId_115_);
v_a_227_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_206_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_206_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
case 7:
{
lean_object* v_binderName_235_; lean_object* v_binderType_236_; lean_object* v_body_237_; uint8_t v_binderInfo_238_; lean_object* v___x_239_; lean_object* v_type_240_; lean_object* v_type_241_; lean_object* v___x_1398__overap_242_; lean_object* v___x_243_; 
lean_dec_ref(v___x_146_);
v_binderName_235_ = lean_ctor_get(v_type_122_, 0);
lean_inc(v_binderName_235_);
v_binderType_236_ = lean_ctor_get(v_type_122_, 1);
lean_inc_ref(v_binderType_236_);
v_body_237_ = lean_ctor_get(v_type_122_, 2);
lean_inc_ref(v_body_237_);
v_binderInfo_238_ = lean_ctor_get_uint8(v_type_122_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_122_, 3);
v___x_239_ = lean_array_get_size(v_fvars_119_);
v_type_240_ = lean_expr_instantiate_rev_range(v_binderType_236_, v_j_120_, v___x_239_, v_fvars_119_);
lean_dec_ref(v_binderType_236_);
v_type_241_ = l_Lean_Expr_headBeta(v_type_240_);
v___x_1398__overap_242_ = l_Lean_mkFreshFVarId___redArg(v___x_183_, v___x_185_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_a_124_);
lean_inc_ref(v_a_123_);
v___x_243_ = lean_apply_5(v___x_1398__overap_242_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, lean_box(0));
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; uint8_t v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_a_244_);
lean_dec_ref_known(v___x_243_, 1);
v___x_245_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_238_);
v___x_246_ = lean_box(v___x_245_);
lean_inc_ref(v_mkName_116_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_a_124_);
lean_inc_ref(v_a_123_);
lean_inc_ref(v_lctx_118_);
v___x_247_ = lean_apply_9(v_mkName_116_, v_lctx_118_, v_binderName_235_, v___x_246_, v_s_121_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, lean_box(0));
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v_fst_249_; lean_object* v_snd_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_248_);
lean_dec_ref_known(v___x_247_, 1);
v_fst_249_ = lean_ctor_get(v_a_248_, 0);
lean_inc(v_fst_249_);
v_snd_250_ = lean_ctor_get(v_a_248_, 1);
lean_inc(v_snd_250_);
lean_dec(v_a_248_);
v___x_251_ = 0;
lean_inc(v_a_244_);
v___x_252_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_118_, v_a_244_, v_fst_249_, v_type_241_, v_binderInfo_238_, v___x_251_);
v___x_253_ = l_Lean_mkFVar(v_a_244_);
v___x_254_ = lean_array_push(v_fvars_119_, v___x_253_);
v_i_117_ = v_n_196_;
v_lctx_118_ = v___x_252_;
v_fvars_119_ = v___x_254_;
v_s_121_ = v_snd_250_;
v_type_122_ = v_body_237_;
goto _start;
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_a_244_);
lean_dec_ref(v_type_241_);
lean_dec_ref(v_body_237_);
lean_dec(v_n_196_);
lean_dec(v_j_120_);
lean_dec_ref(v_fvars_119_);
lean_dec_ref(v_lctx_118_);
lean_dec_ref(v_mkName_116_);
lean_dec(v_mvarId_115_);
v_a_256_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_247_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_247_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_type_241_);
lean_dec_ref(v_body_237_);
lean_dec(v_binderName_235_);
lean_dec(v_n_196_);
lean_dec(v_s_121_);
lean_dec(v_j_120_);
lean_dec_ref(v_fvars_119_);
lean_dec_ref(v_lctx_118_);
lean_dec_ref(v_mkName_116_);
lean_dec(v_mvarId_115_);
v_a_264_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_243_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_243_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
default: 
{
lean_object* v___x_272_; lean_object* v_type_273_; lean_object* v___f_274_; lean_object* v___x_275_; lean_object* v___x_1404__overap_276_; lean_object* v___x_277_; 
v___x_272_ = lean_array_get_size(v_fvars_119_);
v_type_273_ = lean_expr_instantiate_rev_range(v_type_122_, v_j_120_, v___x_272_, v_fvars_119_);
lean_dec_ref(v_type_122_);
lean_inc_ref(v_fvars_119_);
lean_inc_ref(v_lctx_118_);
lean_inc_ref_n(v___x_183_, 2);
v___f_274_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___boxed), 15, 10);
lean_closure_set(v___f_274_, 0, v___x_183_);
lean_closure_set(v___f_274_, 1, v___x_184_);
lean_closure_set(v___f_274_, 2, v_type_273_);
lean_closure_set(v___f_274_, 3, v_mvarId_115_);
lean_closure_set(v___f_274_, 4, v_n_196_);
lean_closure_set(v___f_274_, 5, v_mkName_116_);
lean_closure_set(v___f_274_, 6, v_lctx_118_);
lean_closure_set(v___f_274_, 7, v_fvars_119_);
lean_closure_set(v___f_274_, 8, v___x_272_);
lean_closure_set(v___f_274_, 9, v_s_121_);
lean_inc_ref(v___x_146_);
v___x_275_ = l_Lean_Meta_withNewLocalInstances___redArg(v___x_146_, v___x_183_, v_fvars_119_, v_j_120_, v___f_274_);
v___x_1404__overap_276_ = l_Lean_Meta_withLCtx_x27___redArg(v___x_146_, v___x_183_, v_lctx_118_, v___x_275_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_a_124_);
lean_inc_ref(v_a_123_);
v___x_277_ = lean_apply_5(v___x_1404__overap_276_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, lean_box(0));
return v___x_277_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1(lean_object* v___x_284_, lean_object* v___x_285_, lean_object* v_type_286_, lean_object* v_mvarId_287_, lean_object* v_n_288_, lean_object* v_mkName_289_, lean_object* v_lctx_290_, lean_object* v_fvars_291_, lean_object* v___x_292_, lean_object* v_s_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_1452__overap_299_; lean_object* v___x_300_; 
v___x_1452__overap_299_ = l_Lean_instantiateMVars___redArg(v___x_284_, v___x_285_, v_type_286_);
lean_inc(v___y_297_);
lean_inc_ref(v___y_296_);
lean_inc(v___y_295_);
lean_inc_ref(v___y_294_);
v___x_300_ = lean_apply_5(v___x_1452__overap_299_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, lean_box(0));
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_302_; uint8_t v___y_304_; uint8_t v___x_325_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_a_301_);
lean_dec_ref_known(v___x_300_, 1);
v___x_302_ = l_Lean_Expr_cleanupAnnotations(v_a_301_);
v___x_325_ = l_Lean_Expr_isForall(v___x_302_);
if (v___x_325_ == 0)
{
uint8_t v___x_326_; 
v___x_326_ = l_Lean_Expr_isLet(v___x_302_);
v___y_304_ = v___x_326_;
goto v___jp_303_;
}
else
{
v___y_304_ = v___x_325_;
goto v___jp_303_;
}
v___jp_303_:
{
if (v___y_304_ == 0)
{
lean_object* v___x_305_; 
lean_inc(v___y_297_);
lean_inc_ref(v___y_296_);
lean_inc(v___y_295_);
lean_inc_ref(v___y_294_);
v___x_305_ = lean_whnf(v___x_302_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; uint8_t v___x_307_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_a_306_);
lean_dec_ref_known(v___x_305_, 1);
v___x_307_ = l_Lean_Expr_isForall(v_a_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
lean_dec(v_a_306_);
lean_dec(v_s_293_);
lean_dec(v___x_292_);
lean_dec_ref(v_fvars_291_);
lean_dec_ref(v_lctx_290_);
lean_dec_ref(v_mkName_289_);
v___x_308_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1));
v___x_309_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4);
v___x_310_ = l_Lean_Meta_throwTacticEx___redArg(v___x_308_, v_mvarId_287_, v___x_309_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v___x_310_;
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_unsigned_to_nat(1u);
v___x_312_ = lean_nat_add(v_n_288_, v___x_311_);
v___x_313_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(v_mvarId_287_, v_mkName_289_, v___x_312_, v_lctx_290_, v_fvars_291_, v___x_292_, v_s_293_, v_a_306_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v___x_313_;
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v_s_293_);
lean_dec(v___x_292_);
lean_dec_ref(v_fvars_291_);
lean_dec_ref(v_lctx_290_);
lean_dec_ref(v_mkName_289_);
lean_dec(v_mvarId_287_);
v_a_314_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_305_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_305_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_add(v_n_288_, v___x_322_);
v___x_324_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(v_mvarId_287_, v_mkName_289_, v___x_323_, v_lctx_290_, v_fvars_291_, v___x_292_, v_s_293_, v___x_302_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v___x_324_;
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v_s_293_);
lean_dec(v___x_292_);
lean_dec_ref(v_fvars_291_);
lean_dec_ref(v_lctx_290_);
lean_dec_ref(v_mkName_289_);
lean_dec(v_mvarId_287_);
v_a_327_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_300_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_300_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___boxed(lean_object* v_mvarId_335_, lean_object* v_mkName_336_, lean_object* v_i_337_, lean_object* v_lctx_338_, lean_object* v_fvars_339_, lean_object* v_j_340_, lean_object* v_s_341_, lean_object* v_type_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(v_mvarId_335_, v_mkName_336_, v_i_337_, v_lctx_338_, v_fvars_339_, v_j_340_, v_s_341_, v_type_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop(lean_object* v_00_u03c3_349_, lean_object* v_mvarId_350_, lean_object* v_mkName_351_, lean_object* v_i_352_, lean_object* v_lctx_353_, lean_object* v_fvars_354_, lean_object* v_j_355_, lean_object* v_s_356_, lean_object* v_type_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(v_mvarId_350_, v_mkName_351_, v_i_352_, v_lctx_353_, v_fvars_354_, v_j_355_, v_s_356_, v_type_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___boxed(lean_object* v_00_u03c3_364_, lean_object* v_mvarId_365_, lean_object* v_mkName_366_, lean_object* v_i_367_, lean_object* v_lctx_368_, lean_object* v_fvars_369_, lean_object* v_j_370_, lean_object* v_s_371_, lean_object* v_type_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop(v_00_u03c3_364_, v_mvarId_365_, v_mkName_366_, v_i_367_, v_lctx_368_, v_fvars_369_, v_j_370_, v_s_371_, v_type_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
lean_dec(v_a_376_);
lean_dec_ref(v_a_375_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0(lean_object* v_mvarId_400_, lean_object* v___x_401_, lean_object* v_mkName_402_, lean_object* v_n_403_, lean_object* v_s_404_, lean_object* v___f_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; 
lean_inc(v_mvarId_400_);
v___x_411_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_400_, v___x_401_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_412_; 
lean_dec_ref_known(v___x_411_, 1);
lean_inc(v_mvarId_400_);
v___x_412_ = l_Lean_MVarId_getType(v_mvarId_400_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v_lctx_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
v_lctx_414_ = lean_ctor_get(v___y_406_, 2);
lean_inc_ref(v_lctx_414_);
v___x_415_ = lean_unsigned_to_nat(0u);
v___x_416_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__0));
v___x_417_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg(v_mvarId_400_, v_mkName_402_, v_n_403_, v_lctx_414_, v___x_416_, v___x_415_, v_s_404_, v_a_413_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec_ref(v___y_406_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_440_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_440_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_440_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_440_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v_fst_422_; lean_object* v_snd_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_439_; 
v_fst_422_ = lean_ctor_get(v_a_418_, 0);
v_snd_423_ = lean_ctor_get(v_a_418_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_a_418_);
if (v_isSharedCheck_439_ == 0)
{
v___x_425_ = v_a_418_;
v_isShared_426_ = v_isSharedCheck_439_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_snd_423_);
lean_inc(v_fst_422_);
lean_dec(v_a_418_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_439_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; size_t v_sz_428_; size_t v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_427_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___closed__10));
v_sz_428_ = lean_array_size(v_fst_422_);
v___x_429_ = ((size_t)0ULL);
v___x_430_ = l_unsafeCast___redArg(v_fst_422_);
lean_dec(v_fst_422_);
v___x_431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_427_, v___f_405_, v_sz_428_, v___x_429_, v___x_430_);
v___x_432_ = l_unsafeCast___redArg(v___x_431_);
lean_dec(v___x_431_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_432_);
v___x_434_ = v___x_425_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_432_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_snd_423_);
v___x_434_ = v_reuseFailAlloc_438_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
lean_object* v___x_436_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_434_);
v___x_436_ = v___x_420_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_dec_ref(v___f_405_);
v_a_441_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_417_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_417_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec_ref(v___y_406_);
lean_dec_ref(v___f_405_);
lean_dec(v_s_404_);
lean_dec(v_n_403_);
lean_dec_ref(v_mkName_402_);
lean_dec(v_mvarId_400_);
v_a_449_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_412_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_412_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v___y_406_);
lean_dec_ref(v___f_405_);
lean_dec(v_s_404_);
lean_dec(v_n_403_);
lean_dec_ref(v_mkName_402_);
lean_dec(v_mvarId_400_);
v_a_457_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_411_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_411_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___boxed(lean_object* v_mvarId_465_, lean_object* v___x_466_, lean_object* v_mkName_467_, lean_object* v_n_468_, lean_object* v_s_469_, lean_object* v___f_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0(v_mvarId_465_, v___x_466_, v_mkName_467_, v_n_468_, v_s_469_, v___f_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg(lean_object* v_mvarId_478_, lean_object* v_n_479_, lean_object* v_mkName_480_, lean_object* v_s_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v___x_487_; lean_object* v_toApplicative_488_; lean_object* v_toFunctor_489_; lean_object* v_toSeq_490_; lean_object* v_toSeqLeft_491_; lean_object* v_toSeqRight_492_; lean_object* v___f_493_; lean_object* v___f_494_; lean_object* v___f_495_; lean_object* v___f_496_; lean_object* v___x_497_; lean_object* v___f_498_; lean_object* v___f_499_; lean_object* v___f_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v_toApplicative_506_; lean_object* v_toFunctor_507_; lean_object* v_toSeq_508_; lean_object* v_toSeqLeft_509_; lean_object* v_toSeqRight_510_; lean_object* v___f_511_; lean_object* v___f_512_; lean_object* v___x_513_; lean_object* v___f_514_; lean_object* v___f_515_; lean_object* v___f_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v_toApplicative_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_552_; 
v___x_487_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1);
v_toApplicative_488_ = lean_ctor_get(v___x_487_, 0);
v_toFunctor_489_ = lean_ctor_get(v_toApplicative_488_, 0);
v_toSeq_490_ = lean_ctor_get(v_toApplicative_488_, 2);
v_toSeqLeft_491_ = lean_ctor_get(v_toApplicative_488_, 3);
v_toSeqRight_492_ = lean_ctor_get(v_toApplicative_488_, 4);
v___f_493_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__2));
v___f_494_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_489_, 2);
v___f_495_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_495_, 0, v_toFunctor_489_);
v___f_496_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_496_, 0, v_toFunctor_489_);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___f_495_);
lean_ctor_set(v___x_497_, 1, v___f_496_);
lean_inc(v_toSeqRight_492_);
v___f_498_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_498_, 0, v_toSeqRight_492_);
lean_inc(v_toSeqLeft_491_);
v___f_499_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_499_, 0, v_toSeqLeft_491_);
lean_inc(v_toSeq_490_);
v___f_500_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_500_, 0, v_toSeq_490_);
v___x_501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_501_, 0, v___x_497_);
lean_ctor_set(v___x_501_, 1, v___f_493_);
lean_ctor_set(v___x_501_, 2, v___f_500_);
lean_ctor_set(v___x_501_, 3, v___f_499_);
lean_ctor_set(v___x_501_, 4, v___f_498_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
lean_ctor_set(v___x_502_, 1, v___f_494_);
v___x_503_ = l_StateRefT_x27_instMonad___redArg(v___x_502_);
v___x_504_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_504_, 0, lean_box(0));
lean_closure_set(v___x_504_, 1, lean_box(0));
lean_closure_set(v___x_504_, 2, v___x_503_);
v___x_505_ = l_instMonadControlTOfPure___redArg(v___x_504_);
v_toApplicative_506_ = lean_ctor_get(v___x_487_, 0);
v_toFunctor_507_ = lean_ctor_get(v_toApplicative_506_, 0);
v_toSeq_508_ = lean_ctor_get(v_toApplicative_506_, 2);
v_toSeqLeft_509_ = lean_ctor_get(v_toApplicative_506_, 3);
v_toSeqRight_510_ = lean_ctor_get(v_toApplicative_506_, 4);
lean_inc_ref_n(v_toFunctor_507_, 2);
v___f_511_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_511_, 0, v_toFunctor_507_);
v___f_512_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_512_, 0, v_toFunctor_507_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___f_511_);
lean_ctor_set(v___x_513_, 1, v___f_512_);
lean_inc(v_toSeqRight_510_);
v___f_514_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_514_, 0, v_toSeqRight_510_);
lean_inc(v_toSeqLeft_509_);
v___f_515_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_515_, 0, v_toSeqLeft_509_);
lean_inc(v_toSeq_508_);
v___f_516_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_516_, 0, v_toSeq_508_);
v___x_517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_517_, 0, v___x_513_);
lean_ctor_set(v___x_517_, 1, v___f_493_);
lean_ctor_set(v___x_517_, 2, v___f_516_);
lean_ctor_set(v___x_517_, 3, v___f_515_);
lean_ctor_set(v___x_517_, 4, v___f_514_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v___f_494_);
v___x_519_ = l_StateRefT_x27_instMonad___redArg(v___x_518_);
v_toApplicative_520_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_552_ == 0)
{
lean_object* v_unused_553_; 
v_unused_553_ = lean_ctor_get(v___x_519_, 1);
lean_dec(v_unused_553_);
v___x_522_ = v___x_519_;
v_isShared_523_ = v_isSharedCheck_552_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_toApplicative_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_552_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v_toFunctor_524_; lean_object* v_toSeq_525_; lean_object* v_toSeqLeft_526_; lean_object* v_toSeqRight_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_550_; 
v_toFunctor_524_ = lean_ctor_get(v_toApplicative_520_, 0);
v_toSeq_525_ = lean_ctor_get(v_toApplicative_520_, 2);
v_toSeqLeft_526_ = lean_ctor_get(v_toApplicative_520_, 3);
v_toSeqRight_527_ = lean_ctor_get(v_toApplicative_520_, 4);
v_isSharedCheck_550_ = !lean_is_exclusive(v_toApplicative_520_);
if (v_isSharedCheck_550_ == 0)
{
lean_object* v_unused_551_; 
v_unused_551_ = lean_ctor_get(v_toApplicative_520_, 1);
lean_dec(v_unused_551_);
v___x_529_ = v_toApplicative_520_;
v_isShared_530_ = v_isSharedCheck_550_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_toSeqRight_527_);
lean_inc(v_toSeqLeft_526_);
lean_inc(v_toSeq_525_);
lean_inc(v_toFunctor_524_);
lean_dec(v_toApplicative_520_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_550_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___f_531_; lean_object* v___f_532_; lean_object* v___f_533_; lean_object* v___f_534_; lean_object* v___f_535_; lean_object* v___x_536_; lean_object* v___f_537_; lean_object* v___f_538_; lean_object* v___f_539_; lean_object* v___x_541_; 
v___f_531_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___closed__0));
v___f_532_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__4));
v___f_533_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__5));
lean_inc_ref(v_toFunctor_524_);
v___f_534_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_534_, 0, v_toFunctor_524_);
v___f_535_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_535_, 0, v_toFunctor_524_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v___f_534_);
lean_ctor_set(v___x_536_, 1, v___f_535_);
v___f_537_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_537_, 0, v_toSeqRight_527_);
v___f_538_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_538_, 0, v_toSeqLeft_526_);
v___f_539_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_539_, 0, v_toSeq_525_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 4, v___f_537_);
lean_ctor_set(v___x_529_, 3, v___f_538_);
lean_ctor_set(v___x_529_, 2, v___f_539_);
lean_ctor_set(v___x_529_, 1, v___f_532_);
lean_ctor_set(v___x_529_, 0, v___x_536_);
v___x_541_ = v___x_529_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___f_532_);
lean_ctor_set(v_reuseFailAlloc_549_, 2, v___f_539_);
lean_ctor_set(v_reuseFailAlloc_549_, 3, v___f_538_);
lean_ctor_set(v_reuseFailAlloc_549_, 4, v___f_537_);
v___x_541_ = v_reuseFailAlloc_549_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_543_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 1, v___f_533_);
lean_ctor_set(v___x_522_, 0, v___x_541_);
v___x_543_ = v___x_522_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v___f_533_);
v___x_543_ = v_reuseFailAlloc_548_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; lean_object* v___f_545_; lean_object* v___x_554__overap_546_; lean_object* v___x_547_; 
v___x_544_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1));
lean_inc(v_mvarId_478_);
v___f_545_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_545_, 0, v_mvarId_478_);
lean_closure_set(v___f_545_, 1, v___x_544_);
lean_closure_set(v___f_545_, 2, v_mkName_480_);
lean_closure_set(v___f_545_, 3, v_n_479_);
lean_closure_set(v___f_545_, 4, v_s_481_);
lean_closure_set(v___f_545_, 5, v___f_531_);
v___x_554__overap_546_ = l_Lean_MVarId_withContext___redArg(v___x_505_, v___x_543_, v_mvarId_478_, v___f_545_);
lean_inc(v_a_485_);
lean_inc_ref(v_a_484_);
lean_inc(v_a_483_);
lean_inc_ref(v_a_482_);
v___x_547_ = lean_apply_5(v___x_554__overap_546_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, lean_box(0));
return v___x_547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___boxed(lean_object* v_mvarId_554_, lean_object* v_n_555_, lean_object* v_mkName_556_, lean_object* v_s_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg(v_mvarId_554_, v_n_555_, v_mkName_556_, v_s_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp(lean_object* v_00_u03c3_564_, lean_object* v_mvarId_565_, lean_object* v_n_566_, lean_object* v_mkName_567_, lean_object* v_s_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v___x_574_; lean_object* v_toApplicative_575_; lean_object* v_toFunctor_576_; lean_object* v_toSeq_577_; lean_object* v_toSeqLeft_578_; lean_object* v_toSeqRight_579_; lean_object* v___f_580_; lean_object* v___f_581_; lean_object* v___f_582_; lean_object* v___f_583_; lean_object* v___x_584_; lean_object* v___f_585_; lean_object* v___f_586_; lean_object* v___f_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v_toApplicative_593_; lean_object* v_toFunctor_594_; lean_object* v_toSeq_595_; lean_object* v_toSeqLeft_596_; lean_object* v_toSeqRight_597_; lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___x_600_; lean_object* v___f_601_; lean_object* v___f_602_; lean_object* v___f_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_toApplicative_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_639_; 
v___x_574_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__1);
v_toApplicative_575_ = lean_ctor_get(v___x_574_, 0);
v_toFunctor_576_ = lean_ctor_get(v_toApplicative_575_, 0);
v_toSeq_577_ = lean_ctor_get(v_toApplicative_575_, 2);
v_toSeqLeft_578_ = lean_ctor_get(v_toApplicative_575_, 3);
v_toSeqRight_579_ = lean_ctor_get(v_toApplicative_575_, 4);
v___f_580_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__2));
v___f_581_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_576_, 2);
v___f_582_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_582_, 0, v_toFunctor_576_);
v___f_583_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_583_, 0, v_toFunctor_576_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___f_582_);
lean_ctor_set(v___x_584_, 1, v___f_583_);
lean_inc(v_toSeqRight_579_);
v___f_585_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_585_, 0, v_toSeqRight_579_);
lean_inc(v_toSeqLeft_578_);
v___f_586_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_586_, 0, v_toSeqLeft_578_);
lean_inc(v_toSeq_577_);
v___f_587_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_587_, 0, v_toSeq_577_);
v___x_588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_588_, 0, v___x_584_);
lean_ctor_set(v___x_588_, 1, v___f_580_);
lean_ctor_set(v___x_588_, 2, v___f_587_);
lean_ctor_set(v___x_588_, 3, v___f_586_);
lean_ctor_set(v___x_588_, 4, v___f_585_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___f_581_);
v___x_590_ = l_StateRefT_x27_instMonad___redArg(v___x_589_);
v___x_591_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_591_, 0, lean_box(0));
lean_closure_set(v___x_591_, 1, lean_box(0));
lean_closure_set(v___x_591_, 2, v___x_590_);
v___x_592_ = l_instMonadControlTOfPure___redArg(v___x_591_);
v_toApplicative_593_ = lean_ctor_get(v___x_574_, 0);
v_toFunctor_594_ = lean_ctor_get(v_toApplicative_593_, 0);
v_toSeq_595_ = lean_ctor_get(v_toApplicative_593_, 2);
v_toSeqLeft_596_ = lean_ctor_get(v_toApplicative_593_, 3);
v_toSeqRight_597_ = lean_ctor_get(v_toApplicative_593_, 4);
lean_inc_ref_n(v_toFunctor_594_, 2);
v___f_598_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_598_, 0, v_toFunctor_594_);
v___f_599_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_599_, 0, v_toFunctor_594_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___f_598_);
lean_ctor_set(v___x_600_, 1, v___f_599_);
lean_inc(v_toSeqRight_597_);
v___f_601_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_601_, 0, v_toSeqRight_597_);
lean_inc(v_toSeqLeft_596_);
v___f_602_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_602_, 0, v_toSeqLeft_596_);
lean_inc(v_toSeq_595_);
v___f_603_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_603_, 0, v_toSeq_595_);
v___x_604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_604_, 0, v___x_600_);
lean_ctor_set(v___x_604_, 1, v___f_580_);
lean_ctor_set(v___x_604_, 2, v___f_603_);
lean_ctor_set(v___x_604_, 3, v___f_602_);
lean_ctor_set(v___x_604_, 4, v___f_601_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___f_581_);
v___x_606_ = l_StateRefT_x27_instMonad___redArg(v___x_605_);
v_toApplicative_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_639_ == 0)
{
lean_object* v_unused_640_; 
v_unused_640_ = lean_ctor_get(v___x_606_, 1);
lean_dec(v_unused_640_);
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_639_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_toApplicative_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_639_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v_toFunctor_611_; lean_object* v_toSeq_612_; lean_object* v_toSeqLeft_613_; lean_object* v_toSeqRight_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_637_; 
v_toFunctor_611_ = lean_ctor_get(v_toApplicative_607_, 0);
v_toSeq_612_ = lean_ctor_get(v_toApplicative_607_, 2);
v_toSeqLeft_613_ = lean_ctor_get(v_toApplicative_607_, 3);
v_toSeqRight_614_ = lean_ctor_get(v_toApplicative_607_, 4);
v_isSharedCheck_637_ = !lean_is_exclusive(v_toApplicative_607_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; 
v_unused_638_ = lean_ctor_get(v_toApplicative_607_, 1);
lean_dec(v_unused_638_);
v___x_616_ = v_toApplicative_607_;
v_isShared_617_ = v_isSharedCheck_637_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_toSeqRight_614_);
lean_inc(v_toSeqLeft_613_);
lean_inc(v_toSeq_612_);
lean_inc(v_toFunctor_611_);
lean_dec(v_toApplicative_607_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_637_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___f_620_; lean_object* v___f_621_; lean_object* v___f_622_; lean_object* v___x_623_; lean_object* v___f_624_; lean_object* v___f_625_; lean_object* v___f_626_; lean_object* v___x_628_; 
v___f_618_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___closed__0));
v___f_619_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__4));
v___f_620_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___closed__5));
lean_inc_ref(v_toFunctor_611_);
v___f_621_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_621_, 0, v_toFunctor_611_);
v___f_622_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_622_, 0, v_toFunctor_611_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v___f_621_);
lean_ctor_set(v___x_623_, 1, v___f_622_);
v___f_624_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_624_, 0, v_toSeqRight_614_);
v___f_625_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_625_, 0, v_toSeqLeft_613_);
v___f_626_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_626_, 0, v_toSeq_612_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 4, v___f_624_);
lean_ctor_set(v___x_616_, 3, v___f_625_);
lean_ctor_set(v___x_616_, 2, v___f_626_);
lean_ctor_set(v___x_616_, 1, v___f_619_);
lean_ctor_set(v___x_616_, 0, v___x_623_);
v___x_628_ = v___x_616_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___f_619_);
lean_ctor_set(v_reuseFailAlloc_636_, 2, v___f_626_);
lean_ctor_set(v_reuseFailAlloc_636_, 3, v___f_625_);
lean_ctor_set(v_reuseFailAlloc_636_, 4, v___f_624_);
v___x_628_ = v_reuseFailAlloc_636_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___f_620_);
lean_ctor_set(v___x_609_, 0, v___x_628_);
v___x_630_ = v___x_609_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v___f_620_);
v___x_630_ = v_reuseFailAlloc_635_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___f_632_; lean_object* v___x_644__overap_633_; lean_object* v___x_634_; 
v___x_631_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1));
lean_inc(v_mvarId_565_);
v___f_632_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_632_, 0, v_mvarId_565_);
lean_closure_set(v___f_632_, 1, v___x_631_);
lean_closure_set(v___f_632_, 2, v_mkName_567_);
lean_closure_set(v___f_632_, 3, v_n_566_);
lean_closure_set(v___f_632_, 4, v_s_568_);
lean_closure_set(v___f_632_, 5, v___f_618_);
v___x_644__overap_633_ = l_Lean_MVarId_withContext___redArg(v___x_592_, v___x_630_, v_mvarId_565_, v___f_632_);
lean_inc(v_a_572_);
lean_inc_ref(v_a_571_);
lean_inc(v_a_570_);
lean_inc_ref(v_a_569_);
v___x_634_ = lean_apply_5(v___x_644__overap_633_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, lean_box(0));
return v___x_634_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___boxed(lean_object* v_00_u03c3_641_, lean_object* v_mvarId_642_, lean_object* v_n_643_, lean_object* v_mkName_644_, lean_object* v_s_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp(v_00_u03c3_641_, v_mvarId_642_, v_n_643_, v_mkName_644_, v_s_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_);
lean_dec(v_a_649_);
lean_dec_ref(v_a_648_);
lean_dec(v_a_647_);
lean_dec_ref(v_a_646_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__spec__0(lean_object* v_name_652_, lean_object* v_decl_653_, lean_object* v_ref_654_){
_start:
{
lean_object* v_defValue_656_; lean_object* v_descr_657_; lean_object* v_deprecation_x3f_658_; lean_object* v___x_659_; uint8_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_defValue_656_ = lean_ctor_get(v_decl_653_, 0);
v_descr_657_ = lean_ctor_get(v_decl_653_, 1);
v_deprecation_x3f_658_ = lean_ctor_get(v_decl_653_, 2);
v___x_659_ = lean_alloc_ctor(1, 0, 1);
v___x_660_ = lean_unbox(v_defValue_656_);
lean_ctor_set_uint8(v___x_659_, 0, v___x_660_);
lean_inc(v_deprecation_x3f_658_);
lean_inc_ref(v_descr_657_);
lean_inc_n(v_name_652_, 2);
v___x_661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_661_, 0, v_name_652_);
lean_ctor_set(v___x_661_, 1, v_ref_654_);
lean_ctor_set(v___x_661_, 2, v___x_659_);
lean_ctor_set(v___x_661_, 3, v_descr_657_);
lean_ctor_set(v___x_661_, 4, v_deprecation_x3f_658_);
v___x_662_ = lean_register_option(v_name_652_, v___x_661_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_670_; 
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_670_ == 0)
{
lean_object* v_unused_671_; 
v_unused_671_ = lean_ctor_get(v___x_662_, 0);
lean_dec(v_unused_671_);
v___x_664_ = v___x_662_;
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
else
{
lean_dec(v___x_662_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_666_; lean_object* v___x_668_; 
lean_inc(v_defValue_656_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_name_652_);
lean_ctor_set(v___x_666_, 1, v_defValue_656_);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 0, v___x_666_);
v___x_668_ = v___x_664_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec(v_name_652_);
v_a_672_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_662_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_662_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_680_, lean_object* v_decl_681_, lean_object* v_ref_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__spec__0(v_name_680_, v_decl_681_, v_ref_682_);
lean_dec_ref(v_decl_681_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_704_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_));
v___x_705_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_));
v___x_706_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_));
v___x_707_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4__spec__0(v___x_704_, v___x_705_, v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4____boxed(lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_();
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(lean_object* v_lctx_710_, lean_object* v_binderName_711_, uint8_t v_hygienic_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
if (v_hygienic_712_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = l_Lean_LocalContext_getUnusedName(v_lctx_710_, v_binderName_711_);
lean_dec(v_binderName_711_);
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; 
v___x_718_ = l_Lean_Core_mkFreshUserName(v_binderName_711_, v_a_713_, v_a_714_);
return v___x_718_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg___boxed(lean_object* v_lctx_719_, lean_object* v_binderName_720_, lean_object* v_hygienic_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
uint8_t v_hygienic_boxed_725_; lean_object* v_res_726_; 
v_hygienic_boxed_725_ = lean_unbox(v_hygienic_721_);
v_res_726_ = l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(v_lctx_719_, v_binderName_720_, v_hygienic_boxed_725_, v_a_722_, v_a_723_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
lean_dec_ref(v_lctx_719_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore(lean_object* v_lctx_727_, lean_object* v_binderName_728_, uint8_t v_hygienic_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
lean_object* v___x_735_; 
v___x_735_ = l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(v_lctx_727_, v_binderName_728_, v_hygienic_729_, v_a_732_, v_a_733_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___boxed(lean_object* v_lctx_736_, lean_object* v_binderName_737_, lean_object* v_hygienic_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
uint8_t v_hygienic_boxed_744_; lean_object* v_res_745_; 
v_hygienic_boxed_744_ = lean_unbox(v_hygienic_738_);
v_res_745_ = l_Lean_Meta_mkFreshBinderNameForTacticCore(v_lctx_736_, v_binderName_737_, v_hygienic_boxed_744_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
lean_dec(v_a_742_);
lean_dec_ref(v_a_741_);
lean_dec(v_a_740_);
lean_dec_ref(v_a_739_);
lean_dec_ref(v_lctx_736_);
return v_res_745_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0(lean_object* v_opts_746_, lean_object* v_opt_747_){
_start:
{
lean_object* v_name_748_; lean_object* v_defValue_749_; lean_object* v_map_750_; lean_object* v___x_751_; 
v_name_748_ = lean_ctor_get(v_opt_747_, 0);
v_defValue_749_ = lean_ctor_get(v_opt_747_, 1);
v_map_750_ = lean_ctor_get(v_opts_746_, 0);
v___x_751_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_750_, v_name_748_);
if (lean_obj_tag(v___x_751_) == 0)
{
uint8_t v___x_752_; 
v___x_752_ = lean_unbox(v_defValue_749_);
return v___x_752_;
}
else
{
lean_object* v_val_753_; 
v_val_753_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_val_753_);
lean_dec_ref_known(v___x_751_, 1);
if (lean_obj_tag(v_val_753_) == 1)
{
uint8_t v_v_754_; 
v_v_754_ = lean_ctor_get_uint8(v_val_753_, 0);
lean_dec_ref_known(v_val_753_, 0);
return v_v_754_;
}
else
{
uint8_t v___x_755_; 
lean_dec(v_val_753_);
v___x_755_ = lean_unbox(v_defValue_749_);
return v___x_755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0___boxed(lean_object* v_opts_756_, lean_object* v_opt_757_){
_start:
{
uint8_t v_res_758_; lean_object* v_r_759_; 
v_res_758_ = l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0(v_opts_756_, v_opt_757_);
lean_dec_ref(v_opt_757_);
lean_dec_ref(v_opts_756_);
v_r_759_ = lean_box(v_res_758_);
return v_r_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg(lean_object* v_binderName_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_toCold_765_; lean_object* v_lctx_766_; lean_object* v_options_767_; lean_object* v___x_768_; uint8_t v___x_769_; lean_object* v___x_770_; 
v_toCold_765_ = lean_ctor_get(v_a_762_, 0);
v_lctx_766_ = lean_ctor_get(v_a_761_, 2);
v_options_767_ = lean_ctor_get(v_toCold_765_, 2);
v___x_768_ = l_Lean_Meta_tactic_hygienic;
v___x_769_ = l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0(v_options_767_, v___x_768_);
v___x_770_ = l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(v_lctx_766_, v_binderName_760_, v___x_769_, v_a_762_, v_a_763_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg___boxed(lean_object* v_binderName_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_Meta_mkFreshBinderNameForTactic___redArg(v_binderName_771_, v_a_772_, v_a_773_, v_a_774_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
lean_dec_ref(v_a_772_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic(lean_object* v_binderName_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lean_Meta_mkFreshBinderNameForTactic___redArg(v_binderName_777_, v_a_778_, v_a_780_, v_a_781_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___boxed(lean_object* v_binderName_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_Meta_mkFreshBinderNameForTactic(v_binderName_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(uint8_t v_preserveBinderNames_794_, uint8_t v_hygienic_795_, lean_object* v_lctx_796_, lean_object* v_binderName_797_, lean_object* v_rest_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
lean_object* v_binderName_803_; lean_object* v___y_804_; lean_object* v___y_805_; uint8_t v___x_826_; 
v___x_826_ = l_Lean_Name_isAnonymous(v_binderName_797_);
if (v___x_826_ == 0)
{
v_binderName_803_ = v_binderName_797_;
v___y_804_ = v_a_799_;
v___y_805_ = v_a_800_;
goto v___jp_802_;
}
else
{
lean_object* v___x_827_; lean_object* v___x_828_; 
lean_dec(v_binderName_797_);
v___x_827_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___closed__1));
v___x_828_ = l_Lean_Core_mkFreshUserName(v___x_827_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
v_binderName_803_ = v_a_829_;
v___y_804_ = v_a_799_;
v___y_805_ = v_a_800_;
goto v___jp_802_;
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_dec(v_rest_798_);
v_a_830_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_828_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_828_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
v___jp_802_:
{
if (v_preserveBinderNames_794_ == 0)
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(v_lctx_796_, v_binderName_803_, v_hygienic_795_, v___y_804_, v___y_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_815_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_815_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_811_, 0, v_a_807_);
lean_ctor_set(v___x_811_, 1, v_rest_798_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_811_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
lean_dec(v_rest_798_);
v_a_816_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_806_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_806_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
else
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v_binderName_803_);
lean_ctor_set(v___x_824_, 1, v_rest_798_);
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg___boxed(lean_object* v_preserveBinderNames_838_, lean_object* v_hygienic_839_, lean_object* v_lctx_840_, lean_object* v_binderName_841_, lean_object* v_rest_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
uint8_t v_preserveBinderNames_boxed_846_; uint8_t v_hygienic_boxed_847_; lean_object* v_res_848_; 
v_preserveBinderNames_boxed_846_ = lean_unbox(v_preserveBinderNames_838_);
v_hygienic_boxed_847_ = lean_unbox(v_hygienic_839_);
v_res_848_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(v_preserveBinderNames_boxed_846_, v_hygienic_boxed_847_, v_lctx_840_, v_binderName_841_, v_rest_842_, v_a_843_, v_a_844_);
lean_dec(v_a_844_);
lean_dec_ref(v_a_843_);
lean_dec_ref(v_lctx_840_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName(uint8_t v_preserveBinderNames_849_, uint8_t v_hygienic_850_, lean_object* v_lctx_851_, lean_object* v_binderName_852_, lean_object* v_rest_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v___x_859_; 
v___x_859_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(v_preserveBinderNames_849_, v_hygienic_850_, v_lctx_851_, v_binderName_852_, v_rest_853_, v_a_856_, v_a_857_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___boxed(lean_object* v_preserveBinderNames_860_, lean_object* v_hygienic_861_, lean_object* v_lctx_862_, lean_object* v_binderName_863_, lean_object* v_rest_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_){
_start:
{
uint8_t v_preserveBinderNames_boxed_870_; uint8_t v_hygienic_boxed_871_; lean_object* v_res_872_; 
v_preserveBinderNames_boxed_870_ = lean_unbox(v_preserveBinderNames_860_);
v_hygienic_boxed_871_ = lean_unbox(v_hygienic_861_);
v_res_872_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName(v_preserveBinderNames_boxed_870_, v_hygienic_boxed_871_, v_lctx_862_, v_binderName_863_, v_rest_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
lean_dec(v_a_868_);
lean_dec_ref(v_a_867_);
lean_dec(v_a_866_);
lean_dec_ref(v_a_865_);
lean_dec_ref(v_lctx_862_);
return v_res_872_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_box(0);
v___x_875_ = l_unsafeCast___redArg(v___x_874_);
return v___x_875_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__2(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_876_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__0));
v___x_877_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__1);
v___x_878_ = l_Lean_Name_str___override(v___x_877_, v___x_876_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg(uint8_t v_preserveBinderNames_879_, uint8_t v_hygienic_880_, uint8_t v_useNamesForExplicitOnly_881_, lean_object* v_lctx_882_, lean_object* v_binderName_883_, uint8_t v_isExplicit_884_, lean_object* v_x_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
if (lean_obj_tag(v_x_885_) == 0)
{
lean_object* v___x_889_; 
v___x_889_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(v_preserveBinderNames_879_, v_hygienic_880_, v_lctx_882_, v_binderName_883_, v_x_885_, v_a_886_, v_a_887_);
return v___x_889_;
}
else
{
lean_object* v_head_890_; lean_object* v_tail_891_; 
v_head_890_ = lean_ctor_get(v_x_885_, 0);
v_tail_891_ = lean_ctor_get(v_x_885_, 1);
if (v_useNamesForExplicitOnly_881_ == 0)
{
lean_inc(v_tail_891_);
lean_inc(v_head_890_);
lean_dec_ref_known(v_x_885_, 2);
goto v___jp_892_;
}
else
{
if (v_isExplicit_884_ == 0)
{
lean_object* v___x_898_; 
v___x_898_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(v_preserveBinderNames_879_, v_hygienic_880_, v_lctx_882_, v_binderName_883_, v_x_885_, v_a_886_, v_a_887_);
return v___x_898_;
}
else
{
lean_inc(v_tail_891_);
lean_inc(v_head_890_);
lean_dec_ref_known(v_x_885_, 2);
goto v___jp_892_;
}
}
v___jp_892_:
{
lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_893_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__2, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___closed__2);
v___x_894_ = lean_name_eq(v_head_890_, v___x_893_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v_binderName_883_);
v___x_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_895_, 0, v_head_890_);
lean_ctor_set(v___x_895_, 1, v_tail_891_);
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; 
lean_dec(v_head_890_);
v___x_897_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp_mkAuxNameWithoutGivenName___redArg(v_preserveBinderNames_879_, v_hygienic_880_, v_lctx_882_, v_binderName_883_, v_tail_891_, v_a_886_, v_a_887_);
return v___x_897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg___boxed(lean_object* v_preserveBinderNames_899_, lean_object* v_hygienic_900_, lean_object* v_useNamesForExplicitOnly_901_, lean_object* v_lctx_902_, lean_object* v_binderName_903_, lean_object* v_isExplicit_904_, lean_object* v_x_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
uint8_t v_preserveBinderNames_boxed_909_; uint8_t v_hygienic_boxed_910_; uint8_t v_useNamesForExplicitOnly_boxed_911_; uint8_t v_isExplicit_boxed_912_; lean_object* v_res_913_; 
v_preserveBinderNames_boxed_909_ = lean_unbox(v_preserveBinderNames_899_);
v_hygienic_boxed_910_ = lean_unbox(v_hygienic_900_);
v_useNamesForExplicitOnly_boxed_911_ = lean_unbox(v_useNamesForExplicitOnly_901_);
v_isExplicit_boxed_912_ = lean_unbox(v_isExplicit_904_);
v_res_913_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg(v_preserveBinderNames_boxed_909_, v_hygienic_boxed_910_, v_useNamesForExplicitOnly_boxed_911_, v_lctx_902_, v_binderName_903_, v_isExplicit_boxed_912_, v_x_905_, v_a_906_, v_a_907_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec_ref(v_lctx_902_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp(uint8_t v_preserveBinderNames_914_, uint8_t v_hygienic_915_, uint8_t v_useNamesForExplicitOnly_916_, lean_object* v_lctx_917_, lean_object* v_binderName_918_, uint8_t v_isExplicit_919_, lean_object* v_x_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg(v_preserveBinderNames_914_, v_hygienic_915_, v_useNamesForExplicitOnly_916_, v_lctx_917_, v_binderName_918_, v_isExplicit_919_, v_x_920_, v_a_923_, v_a_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___boxed(lean_object* v_preserveBinderNames_927_, lean_object* v_hygienic_928_, lean_object* v_useNamesForExplicitOnly_929_, lean_object* v_lctx_930_, lean_object* v_binderName_931_, lean_object* v_isExplicit_932_, lean_object* v_x_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
uint8_t v_preserveBinderNames_boxed_939_; uint8_t v_hygienic_boxed_940_; uint8_t v_useNamesForExplicitOnly_boxed_941_; uint8_t v_isExplicit_boxed_942_; lean_object* v_res_943_; 
v_preserveBinderNames_boxed_939_ = lean_unbox(v_preserveBinderNames_927_);
v_hygienic_boxed_940_ = lean_unbox(v_hygienic_928_);
v_useNamesForExplicitOnly_boxed_941_ = lean_unbox(v_useNamesForExplicitOnly_929_);
v_isExplicit_boxed_942_ = lean_unbox(v_isExplicit_932_);
v_res_943_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp(v_preserveBinderNames_boxed_939_, v_hygienic_boxed_940_, v_useNamesForExplicitOnly_boxed_941_, v_lctx_930_, v_binderName_931_, v_isExplicit_boxed_942_, v_x_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec_ref(v_lctx_930_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg(lean_object* v_mvarId_944_, lean_object* v_x_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_944_, v_x_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_951_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_951_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
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
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
v_a_960_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_951_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_951_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg___boxed(lean_object* v_mvarId_968_, lean_object* v_x_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg(v_mvarId_968_, v_x_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2(lean_object* v_00_u03b1_976_, lean_object* v_mvarId_977_, lean_object* v_x_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg(v_mvarId_977_, v_x_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___boxed(lean_object* v_00_u03b1_985_, lean_object* v_mvarId_986_, lean_object* v_x_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2(v_00_u03b1_985_, v_mvarId_986_, v_x_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_introNCore_spec__1(size_t v_sz_994_, size_t v_i_995_, lean_object* v_bs_996_){
_start:
{
uint8_t v___x_997_; 
v___x_997_ = lean_usize_dec_lt(v_i_995_, v_sz_994_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; 
v___x_998_ = l_unsafeCast___redArg(v_bs_996_);
lean_dec_ref(v_bs_996_);
return v___x_998_;
}
else
{
lean_object* v_v_999_; lean_object* v___x_1000_; lean_object* v_bs_x27_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; size_t v___x_1004_; size_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_v_999_ = lean_array_uget(v_bs_996_, v_i_995_);
v___x_1000_ = lean_unsigned_to_nat(0u);
v_bs_x27_1001_ = lean_array_uset(v_bs_996_, v_i_995_, v___x_1000_);
v___x_1002_ = l_unsafeCast___redArg(v_v_999_);
lean_dec(v_v_999_);
v___x_1003_ = l_Lean_Expr_fvarId_x21(v___x_1002_);
lean_dec(v___x_1002_);
v___x_1004_ = ((size_t)1ULL);
v___x_1005_ = lean_usize_add(v_i_995_, v___x_1004_);
v___x_1006_ = l_unsafeCast___redArg(v___x_1003_);
lean_dec(v___x_1003_);
v___x_1007_ = lean_array_uset(v_bs_x27_1001_, v_i_995_, v___x_1006_);
v_i_995_ = v___x_1005_;
v_bs_996_ = v___x_1007_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_introNCore_spec__1___boxed(lean_object* v_sz_1009_, lean_object* v_i_1010_, lean_object* v_bs_1011_){
_start:
{
size_t v_sz_boxed_1012_; size_t v_i_boxed_1013_; lean_object* v_res_1014_; 
v_sz_boxed_1012_ = lean_unbox_usize(v_sz_1009_);
lean_dec(v_sz_1009_);
v_i_boxed_1013_ = lean_unbox_usize(v_i_1010_);
lean_dec(v_i_1010_);
v_res_1014_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_introNCore_spec__1(v_sz_boxed_1012_, v_i_boxed_1013_, v_bs_1011_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg(lean_object* v_e_1015_, lean_object* v___y_1016_){
_start:
{
uint8_t v___x_1018_; 
v___x_1018_ = l_Lean_Expr_hasMVar(v_e_1015_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1019_, 0, v_e_1015_);
return v___x_1019_;
}
else
{
lean_object* v___x_1020_; lean_object* v_mctx_1021_; lean_object* v___x_1022_; lean_object* v_fst_1023_; lean_object* v_snd_1024_; lean_object* v___x_1025_; lean_object* v_cache_1026_; lean_object* v_zetaDeltaFVarIds_1027_; lean_object* v_postponed_1028_; lean_object* v_diag_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1038_; 
v___x_1020_ = lean_st_ref_get(v___y_1016_);
v_mctx_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc_ref(v_mctx_1021_);
lean_dec(v___x_1020_);
v___x_1022_ = l_Lean_instantiateMVarsCore(v_mctx_1021_, v_e_1015_);
v_fst_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_fst_1023_);
v_snd_1024_ = lean_ctor_get(v___x_1022_, 1);
lean_inc(v_snd_1024_);
lean_dec_ref(v___x_1022_);
v___x_1025_ = lean_st_ref_take(v___y_1016_);
v_cache_1026_ = lean_ctor_get(v___x_1025_, 1);
v_zetaDeltaFVarIds_1027_ = lean_ctor_get(v___x_1025_, 2);
v_postponed_1028_ = lean_ctor_get(v___x_1025_, 3);
v_diag_1029_ = lean_ctor_get(v___x_1025_, 4);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1038_ == 0)
{
lean_object* v_unused_1039_; 
v_unused_1039_ = lean_ctor_get(v___x_1025_, 0);
lean_dec(v_unused_1039_);
v___x_1031_ = v___x_1025_;
v_isShared_1032_ = v_isSharedCheck_1038_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_diag_1029_);
lean_inc(v_postponed_1028_);
lean_inc(v_zetaDeltaFVarIds_1027_);
lean_inc(v_cache_1026_);
lean_dec(v___x_1025_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1038_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_snd_1024_);
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_snd_1024_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_cache_1026_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v_zetaDeltaFVarIds_1027_);
lean_ctor_set(v_reuseFailAlloc_1037_, 3, v_postponed_1028_);
lean_ctor_set(v_reuseFailAlloc_1037_, 4, v_diag_1029_);
v___x_1034_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_st_ref_put(v___y_1016_, v___x_1034_);
v___x_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1036_, 0, v_fst_1023_);
return v___x_1036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg___boxed(lean_object* v_e_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg(v_e_1040_, v___y_1041_);
lean_dec(v___y_1041_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg(lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; lean_object* v_ngen_1047_; lean_object* v_namePrefix_1048_; lean_object* v_idx_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1078_; 
v___x_1046_ = lean_st_ref_get(v___y_1044_);
v_ngen_1047_ = lean_ctor_get(v___x_1046_, 2);
lean_inc_ref(v_ngen_1047_);
lean_dec(v___x_1046_);
v_namePrefix_1048_ = lean_ctor_get(v_ngen_1047_, 0);
v_idx_1049_ = lean_ctor_get(v_ngen_1047_, 1);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_ngen_1047_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1051_ = v_ngen_1047_;
v_isShared_1052_ = v_isSharedCheck_1078_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_idx_1049_);
lean_inc(v_namePrefix_1048_);
lean_dec(v_ngen_1047_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1078_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v_r_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_inc(v_idx_1049_);
lean_inc(v_namePrefix_1048_);
v_r_1053_ = l_Lean_Name_num___override(v_namePrefix_1048_, v_idx_1049_);
v___x_1054_ = lean_unsigned_to_nat(1u);
v___x_1055_ = lean_nat_add(v_idx_1049_, v___x_1054_);
lean_dec(v_idx_1049_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 1, v___x_1055_);
v___x_1057_ = v___x_1051_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_namePrefix_1048_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1058_; lean_object* v_env_1059_; lean_object* v_nextMacroScope_1060_; lean_object* v_auxDeclNGen_1061_; lean_object* v_traceState_1062_; lean_object* v_cache_1063_; lean_object* v_messages_1064_; lean_object* v_infoState_1065_; lean_object* v_snapshotTasks_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1075_; 
v___x_1058_ = lean_st_ref_take(v___y_1044_);
v_env_1059_ = lean_ctor_get(v___x_1058_, 0);
v_nextMacroScope_1060_ = lean_ctor_get(v___x_1058_, 1);
v_auxDeclNGen_1061_ = lean_ctor_get(v___x_1058_, 3);
v_traceState_1062_ = lean_ctor_get(v___x_1058_, 4);
v_cache_1063_ = lean_ctor_get(v___x_1058_, 5);
v_messages_1064_ = lean_ctor_get(v___x_1058_, 6);
v_infoState_1065_ = lean_ctor_get(v___x_1058_, 7);
v_snapshotTasks_1066_ = lean_ctor_get(v___x_1058_, 8);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v___x_1058_, 2);
lean_dec(v_unused_1076_);
v___x_1068_ = v___x_1058_;
v_isShared_1069_ = v_isSharedCheck_1075_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_snapshotTasks_1066_);
lean_inc(v_infoState_1065_);
lean_inc(v_messages_1064_);
lean_inc(v_cache_1063_);
lean_inc(v_traceState_1062_);
lean_inc(v_auxDeclNGen_1061_);
lean_inc(v_nextMacroScope_1060_);
lean_inc(v_env_1059_);
lean_dec(v___x_1058_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1075_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 2, v___x_1057_);
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_env_1059_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v_nextMacroScope_1060_);
lean_ctor_set(v_reuseFailAlloc_1074_, 2, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1074_, 3, v_auxDeclNGen_1061_);
lean_ctor_set(v_reuseFailAlloc_1074_, 4, v_traceState_1062_);
lean_ctor_set(v_reuseFailAlloc_1074_, 5, v_cache_1063_);
lean_ctor_set(v_reuseFailAlloc_1074_, 6, v_messages_1064_);
lean_ctor_set(v_reuseFailAlloc_1074_, 7, v_infoState_1065_);
lean_ctor_set(v_reuseFailAlloc_1074_, 8, v_snapshotTasks_1066_);
v___x_1071_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = lean_st_ref_put(v___y_1044_, v___x_1071_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_r_1053_);
return v___x_1073_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg___boxed(lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg(v___y_1079_);
lean_dec(v___y_1079_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3(lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___x_1087_; lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
v___x_1087_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg(v___y_1085_);
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3___boxed(lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3(v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg(lean_object* v_fvars_1102_, lean_object* v_j_1103_, lean_object* v_x_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp(lean_box(0), v_fvars_1102_, v_j_1103_, v_x_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1110_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1110_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1110_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_fvars_1127_, lean_object* v_j_1128_, lean_object* v_x_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg(v_fvars_1127_, v_j_1128_, v_x_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___redArg(lean_object* v_fvars_1136_, lean_object* v_j_1137_, lean_object* v_x_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg(v_fvars_1136_, v_j_1137_, v_x_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
v_a_1153_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1144_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1144_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___redArg___boxed(lean_object* v_fvars_1161_, lean_object* v_j_1162_, lean_object* v_x_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___redArg(v_fvars_1161_, v_j_1162_, v_x_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1(lean_object* v_00_u03b1_1170_, lean_object* v_fvars_1171_, lean_object* v_j_1172_, lean_object* v_x_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___redArg(v_fvars_1171_, v_j_1172_, v_x_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1180_, lean_object* v_fvars_1181_, lean_object* v_j_1182_, lean_object* v_x_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1(v_00_u03b1_1180_, v_fvars_1181_, v_j_1182_, v_x_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11_spec__12___redArg(lean_object* v_x_1190_, lean_object* v_x_1191_, lean_object* v_x_1192_, lean_object* v_x_1193_){
_start:
{
lean_object* v_ks_1194_; lean_object* v_vs_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1219_; 
v_ks_1194_ = lean_ctor_get(v_x_1190_, 0);
v_vs_1195_ = lean_ctor_get(v_x_1190_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_x_1190_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1197_ = v_x_1190_;
v_isShared_1198_ = v_isSharedCheck_1219_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_vs_1195_);
lean_inc(v_ks_1194_);
lean_dec(v_x_1190_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1219_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = lean_array_get_size(v_ks_1194_);
v___x_1200_ = lean_nat_dec_lt(v_x_1191_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; 
lean_dec(v_x_1191_);
v___x_1201_ = lean_array_push(v_ks_1194_, v_x_1192_);
v___x_1202_ = lean_array_push(v_vs_1195_, v_x_1193_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 1, v___x_1202_);
lean_ctor_set(v___x_1197_, 0, v___x_1201_);
v___x_1204_ = v___x_1197_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v___x_1202_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
else
{
lean_object* v_k_x27_1206_; uint8_t v___x_1207_; 
v_k_x27_1206_ = lean_array_fget_borrowed(v_ks_1194_, v_x_1191_);
v___x_1207_ = l_Lean_instBEqMVarId_beq(v_x_1192_, v_k_x27_1206_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1209_; 
if (v_isShared_1198_ == 0)
{
v___x_1209_ = v___x_1197_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_ks_1194_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v_vs_1195_);
v___x_1209_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_unsigned_to_nat(1u);
v___x_1211_ = lean_nat_add(v_x_1191_, v___x_1210_);
lean_dec(v_x_1191_);
v_x_1190_ = v___x_1209_;
v_x_1191_ = v___x_1211_;
goto _start;
}
}
else
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1217_; 
v___x_1214_ = lean_array_fset(v_ks_1194_, v_x_1191_, v_x_1192_);
v___x_1215_ = lean_array_fset(v_vs_1195_, v_x_1191_, v_x_1193_);
lean_dec(v_x_1191_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 1, v___x_1215_);
lean_ctor_set(v___x_1197_, 0, v___x_1214_);
v___x_1217_ = v___x_1197_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1214_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(lean_object* v_n_1220_, lean_object* v_k_1221_, lean_object* v_v_1222_){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_unsigned_to_nat(0u);
v___x_1224_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11_spec__12___redArg(v_n_1220_, v___x_1223_, v_k_1221_, v_v_1222_);
return v___x_1224_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_box(0);
v___x_1226_ = l_unsafeCast___redArg(v___x_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_x_1228_, size_t v_x_1229_, size_t v_x_1230_, lean_object* v_x_1231_, lean_object* v_x_1232_){
_start:
{
if (lean_obj_tag(v_x_1228_) == 0)
{
lean_object* v_es_1233_; size_t v___x_1234_; size_t v___x_1235_; lean_object* v_j_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v_es_1233_ = lean_ctor_get(v_x_1228_, 0);
v___x_1234_ = ((size_t)31ULL);
v___x_1235_ = lean_usize_land(v_x_1229_, v___x_1234_);
v_j_1236_ = lean_usize_to_nat(v___x_1235_);
v___x_1237_ = lean_array_get_size(v_es_1233_);
v___x_1238_ = lean_nat_dec_lt(v_j_1236_, v___x_1237_);
if (v___x_1238_ == 0)
{
lean_dec(v_j_1236_);
lean_dec(v_x_1232_);
lean_dec(v_x_1231_);
return v_x_1228_;
}
else
{
lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1277_; 
lean_inc_ref(v_es_1233_);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_x_1228_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v_x_1228_, 0);
lean_dec(v_unused_1278_);
v___x_1240_ = v_x_1228_;
v_isShared_1241_ = v_isSharedCheck_1277_;
goto v_resetjp_1239_;
}
else
{
lean_dec(v_x_1228_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1277_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v_v_1242_; lean_object* v___x_1243_; lean_object* v_xs_x27_1244_; lean_object* v___y_1246_; 
v_v_1242_ = lean_array_fget(v_es_1233_, v_j_1236_);
v___x_1243_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__0);
v_xs_x27_1244_ = lean_array_fset(v_es_1233_, v_j_1236_, v___x_1243_);
switch(lean_obj_tag(v_v_1242_))
{
case 0:
{
lean_object* v_key_1251_; lean_object* v_val_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1262_; 
v_key_1251_ = lean_ctor_get(v_v_1242_, 0);
v_val_1252_ = lean_ctor_get(v_v_1242_, 1);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_v_1242_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1254_ = v_v_1242_;
v_isShared_1255_ = v_isSharedCheck_1262_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_val_1252_);
lean_inc(v_key_1251_);
lean_dec(v_v_1242_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1262_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
uint8_t v___x_1256_; 
v___x_1256_ = l_Lean_instBEqMVarId_beq(v_x_1231_, v_key_1251_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_del_object(v___x_1254_);
v___x_1257_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1251_, v_val_1252_, v_x_1231_, v_x_1232_);
v___x_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
v___y_1246_ = v___x_1258_;
goto v___jp_1245_;
}
else
{
lean_object* v___x_1260_; 
lean_dec(v_val_1252_);
lean_dec(v_key_1251_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v_x_1232_);
lean_ctor_set(v___x_1254_, 0, v_x_1231_);
v___x_1260_ = v___x_1254_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_x_1231_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v_x_1232_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
v___y_1246_ = v___x_1260_;
goto v___jp_1245_;
}
}
}
}
case 1:
{
lean_object* v_node_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1275_; 
v_node_1263_ = lean_ctor_get(v_v_1242_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_v_1242_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1265_ = v_v_1242_;
v_isShared_1266_ = v_isSharedCheck_1275_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_node_1263_);
lean_dec(v_v_1242_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1275_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
size_t v___x_1267_; size_t v___x_1268_; size_t v___x_1269_; size_t v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1273_; 
v___x_1267_ = ((size_t)5ULL);
v___x_1268_ = lean_usize_shift_right(v_x_1229_, v___x_1267_);
v___x_1269_ = ((size_t)1ULL);
v___x_1270_ = lean_usize_add(v_x_1230_, v___x_1269_);
v___x_1271_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(v_node_1263_, v___x_1268_, v___x_1270_, v_x_1231_, v_x_1232_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v___x_1271_);
v___x_1273_ = v___x_1265_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
v___y_1246_ = v___x_1273_;
goto v___jp_1245_;
}
}
}
default: 
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1276_, 0, v_x_1231_);
lean_ctor_set(v___x_1276_, 1, v_x_1232_);
v___y_1246_ = v___x_1276_;
goto v___jp_1245_;
}
}
v___jp_1245_:
{
lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1247_ = lean_array_fset(v_xs_x27_1244_, v_j_1236_, v___y_1246_);
lean_dec(v_j_1236_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v___x_1247_);
v___x_1249_ = v___x_1240_;
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
}
}
else
{
lean_object* v_ks_1279_; lean_object* v_vs_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1298_; 
v_ks_1279_ = lean_ctor_get(v_x_1228_, 0);
v_vs_1280_ = lean_ctor_get(v_x_1228_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_x_1228_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1282_ = v_x_1228_;
v_isShared_1283_ = v_isSharedCheck_1298_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_vs_1280_);
lean_inc(v_ks_1279_);
lean_dec(v_x_1228_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1298_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_ks_1279_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_vs_1280_);
v___x_1285_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v_newNode_1286_; size_t v___x_1287_; uint8_t v___x_1288_; 
v_newNode_1286_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(v___x_1285_, v_x_1231_, v_x_1232_);
v___x_1287_ = ((size_t)7ULL);
v___x_1288_ = lean_usize_dec_le(v___x_1287_, v_x_1230_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1289_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1286_);
v___x_1290_ = lean_unsigned_to_nat(4u);
v___x_1291_ = lean_nat_dec_lt(v___x_1289_, v___x_1290_);
lean_dec(v___x_1289_);
if (v___x_1291_ == 0)
{
lean_object* v_ks_1292_; lean_object* v_vs_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v_ks_1292_ = lean_ctor_get(v_newNode_1286_, 0);
lean_inc_ref(v_ks_1292_);
v_vs_1293_ = lean_ctor_get(v_newNode_1286_, 1);
lean_inc_ref(v_vs_1293_);
lean_dec_ref(v_newNode_1286_);
v___x_1294_ = lean_unsigned_to_nat(0u);
v___x_1295_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___closed__1);
v___x_1296_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(v_x_1230_, v_ks_1292_, v_vs_1293_, v___x_1294_, v___x_1295_);
lean_dec_ref(v_vs_1293_);
lean_dec_ref(v_ks_1292_);
return v___x_1296_;
}
else
{
return v_newNode_1286_;
}
}
else
{
return v_newNode_1286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(size_t v_depth_1299_, lean_object* v_keys_1300_, lean_object* v_vals_1301_, lean_object* v_i_1302_, lean_object* v_entries_1303_){
_start:
{
lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = lean_array_get_size(v_keys_1300_);
v___x_1305_ = lean_nat_dec_lt(v_i_1302_, v___x_1304_);
if (v___x_1305_ == 0)
{
lean_dec(v_i_1302_);
return v_entries_1303_;
}
else
{
lean_object* v_k_1306_; lean_object* v_v_1307_; uint64_t v___x_1308_; size_t v_h_1309_; size_t v___x_1310_; lean_object* v___x_1311_; size_t v___x_1312_; size_t v___x_1313_; size_t v___x_1314_; size_t v_h_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v_k_1306_ = lean_array_fget_borrowed(v_keys_1300_, v_i_1302_);
v_v_1307_ = lean_array_fget_borrowed(v_vals_1301_, v_i_1302_);
v___x_1308_ = l_Lean_instHashableMVarId_hash(v_k_1306_);
v_h_1309_ = lean_uint64_to_usize(v___x_1308_);
v___x_1310_ = ((size_t)5ULL);
v___x_1311_ = lean_unsigned_to_nat(1u);
v___x_1312_ = ((size_t)1ULL);
v___x_1313_ = lean_usize_sub(v_depth_1299_, v___x_1312_);
v___x_1314_ = lean_usize_mul(v___x_1310_, v___x_1313_);
v_h_1315_ = lean_usize_shift_right(v_h_1309_, v___x_1314_);
v___x_1316_ = lean_nat_add(v_i_1302_, v___x_1311_);
lean_dec(v_i_1302_);
lean_inc(v_v_1307_);
lean_inc(v_k_1306_);
v___x_1317_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(v_entries_1303_, v_h_1315_, v_depth_1299_, v_k_1306_, v_v_1307_);
v_i_1302_ = v___x_1316_;
v_entries_1303_ = v___x_1317_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object* v_depth_1319_, lean_object* v_keys_1320_, lean_object* v_vals_1321_, lean_object* v_i_1322_, lean_object* v_entries_1323_){
_start:
{
size_t v_depth_boxed_1324_; lean_object* v_res_1325_; 
v_depth_boxed_1324_ = lean_unbox_usize(v_depth_1319_);
lean_dec(v_depth_1319_);
v_res_1325_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(v_depth_boxed_1324_, v_keys_1320_, v_vals_1321_, v_i_1322_, v_entries_1323_);
lean_dec_ref(v_vals_1321_);
lean_dec_ref(v_keys_1320_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_x_1326_, lean_object* v_x_1327_, lean_object* v_x_1328_, lean_object* v_x_1329_, lean_object* v_x_1330_){
_start:
{
size_t v_x_3887__boxed_1331_; size_t v_x_3888__boxed_1332_; lean_object* v_res_1333_; 
v_x_3887__boxed_1331_ = lean_unbox_usize(v_x_1327_);
lean_dec(v_x_1327_);
v_x_3888__boxed_1332_ = lean_unbox_usize(v_x_1328_);
lean_dec(v_x_1328_);
v_res_1333_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(v_x_1326_, v_x_3887__boxed_1331_, v_x_3888__boxed_1332_, v_x_1329_, v_x_1330_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2___redArg(lean_object* v_x_1334_, lean_object* v_x_1335_, lean_object* v_x_1336_){
_start:
{
uint64_t v___x_1337_; size_t v___x_1338_; size_t v___x_1339_; lean_object* v___x_1340_; 
v___x_1337_ = l_Lean_instHashableMVarId_hash(v_x_1335_);
v___x_1338_ = lean_uint64_to_usize(v___x_1337_);
v___x_1339_ = ((size_t)1ULL);
v___x_1340_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(v_x_1334_, v___x_1338_, v___x_1339_, v_x_1335_, v_x_1336_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg(lean_object* v_mvarId_1341_, lean_object* v_val_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v___x_1345_; lean_object* v_mctx_1346_; lean_object* v_cache_1347_; lean_object* v_zetaDeltaFVarIds_1348_; lean_object* v_postponed_1349_; lean_object* v_diag_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1379_; 
v___x_1345_ = lean_st_ref_take(v___y_1343_);
v_mctx_1346_ = lean_ctor_get(v___x_1345_, 0);
v_cache_1347_ = lean_ctor_get(v___x_1345_, 1);
v_zetaDeltaFVarIds_1348_ = lean_ctor_get(v___x_1345_, 2);
v_postponed_1349_ = lean_ctor_get(v___x_1345_, 3);
v_diag_1350_ = lean_ctor_get(v___x_1345_, 4);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1352_ = v___x_1345_;
v_isShared_1353_ = v_isSharedCheck_1379_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_diag_1350_);
lean_inc(v_postponed_1349_);
lean_inc(v_zetaDeltaFVarIds_1348_);
lean_inc(v_cache_1347_);
lean_inc(v_mctx_1346_);
lean_dec(v___x_1345_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1379_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v_depth_1354_; lean_object* v_levelAssignDepth_1355_; lean_object* v_lmvarCounter_1356_; lean_object* v_mvarCounter_1357_; lean_object* v_lDecls_1358_; lean_object* v_decls_1359_; lean_object* v_userNames_1360_; lean_object* v_lAssignment_1361_; lean_object* v_eAssignment_1362_; lean_object* v_dAssignment_1363_; lean_object* v_instanceTypedMVars_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1378_; 
v_depth_1354_ = lean_ctor_get(v_mctx_1346_, 0);
v_levelAssignDepth_1355_ = lean_ctor_get(v_mctx_1346_, 1);
v_lmvarCounter_1356_ = lean_ctor_get(v_mctx_1346_, 2);
v_mvarCounter_1357_ = lean_ctor_get(v_mctx_1346_, 3);
v_lDecls_1358_ = lean_ctor_get(v_mctx_1346_, 4);
v_decls_1359_ = lean_ctor_get(v_mctx_1346_, 5);
v_userNames_1360_ = lean_ctor_get(v_mctx_1346_, 6);
v_lAssignment_1361_ = lean_ctor_get(v_mctx_1346_, 7);
v_eAssignment_1362_ = lean_ctor_get(v_mctx_1346_, 8);
v_dAssignment_1363_ = lean_ctor_get(v_mctx_1346_, 9);
v_instanceTypedMVars_1364_ = lean_ctor_get(v_mctx_1346_, 10);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_mctx_1346_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1366_ = v_mctx_1346_;
v_isShared_1367_ = v_isSharedCheck_1378_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_instanceTypedMVars_1364_);
lean_inc(v_dAssignment_1363_);
lean_inc(v_eAssignment_1362_);
lean_inc(v_lAssignment_1361_);
lean_inc(v_userNames_1360_);
lean_inc(v_decls_1359_);
lean_inc(v_lDecls_1358_);
lean_inc(v_mvarCounter_1357_);
lean_inc(v_lmvarCounter_1356_);
lean_inc(v_levelAssignDepth_1355_);
lean_inc(v_depth_1354_);
lean_dec(v_mctx_1346_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1378_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1368_ = lean_box(0);
v___x_1369_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2___redArg(v_eAssignment_1362_, v_mvarId_1341_, v_val_1342_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 8, v___x_1369_);
v___x_1371_ = v___x_1366_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_depth_1354_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_levelAssignDepth_1355_);
lean_ctor_set(v_reuseFailAlloc_1377_, 2, v_lmvarCounter_1356_);
lean_ctor_set(v_reuseFailAlloc_1377_, 3, v_mvarCounter_1357_);
lean_ctor_set(v_reuseFailAlloc_1377_, 4, v_lDecls_1358_);
lean_ctor_set(v_reuseFailAlloc_1377_, 5, v_decls_1359_);
lean_ctor_set(v_reuseFailAlloc_1377_, 6, v_userNames_1360_);
lean_ctor_set(v_reuseFailAlloc_1377_, 7, v_lAssignment_1361_);
lean_ctor_set(v_reuseFailAlloc_1377_, 8, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1377_, 9, v_dAssignment_1363_);
lean_ctor_set(v_reuseFailAlloc_1377_, 10, v_instanceTypedMVars_1364_);
v___x_1371_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
lean_object* v___x_1373_; 
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 0, v___x_1371_);
v___x_1373_ = v___x_1352_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_cache_1347_);
lean_ctor_set(v_reuseFailAlloc_1376_, 2, v_zetaDeltaFVarIds_1348_);
lean_ctor_set(v_reuseFailAlloc_1376_, 3, v_postponed_1349_);
lean_ctor_set(v_reuseFailAlloc_1376_, 4, v_diag_1350_);
v___x_1373_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_st_ref_put(v___y_1343_, v___x_1373_);
v___x_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1368_);
return v___x_1375_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg___boxed(lean_object* v_mvarId_1380_, lean_object* v_val_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg(v_mvarId_1380_, v_val_1381_, v___y_1382_);
lean_dec(v___y_1382_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__0(lean_object* v_mvarId_1385_, lean_object* v_type_1386_, lean_object* v_fvars_1387_, uint8_t v_isZero_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; 
lean_inc(v_mvarId_1385_);
v___x_1394_ = l_Lean_MVarId_getTag(v_mvarId_1385_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1396_ = l_Lean_Expr_headBeta(v_type_1386_);
v___x_1397_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1396_, v_a_1395_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; uint8_t v___x_1399_; uint8_t v___x_1400_; lean_object* v___x_1401_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
lean_inc_n(v_a_1398_, 2);
lean_dec_ref_known(v___x_1397_, 1);
v___x_1399_ = 0;
v___x_1400_ = 1;
lean_inc_ref(v_fvars_1387_);
v___x_1401_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1387_, v_a_1398_, v___x_1399_, v_isZero_1388_, v___x_1399_, v_isZero_1388_, v___x_1400_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1403_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref_known(v___x_1401_, 1);
v___x_1403_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg(v_mvarId_1385_, v_a_1402_, v___y_1390_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1412_; 
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1412_ == 0)
{
lean_object* v_unused_1413_; 
v_unused_1413_ = lean_ctor_get(v___x_1403_, 0);
lean_dec(v_unused_1413_);
v___x_1405_ = v___x_1403_;
v_isShared_1406_ = v_isSharedCheck_1412_;
goto v_resetjp_1404_;
}
else
{
lean_dec(v___x_1403_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1412_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1407_ = l_Lean_Expr_mvarId_x21(v_a_1398_);
lean_dec(v_a_1398_);
v___x_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1408_, 0, v_fvars_1387_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1408_);
v___x_1410_ = v___x_1405_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_a_1398_);
lean_dec_ref(v_fvars_1387_);
v_a_1414_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1403_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1403_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec(v_a_1398_);
lean_dec_ref(v_fvars_1387_);
lean_dec(v_mvarId_1385_);
v_a_1422_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1401_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1401_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec_ref(v_fvars_1387_);
lean_dec(v_mvarId_1385_);
v_a_1430_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1397_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1397_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v_fvars_1387_);
lean_dec_ref(v_type_1386_);
lean_dec(v_mvarId_1385_);
v_a_1438_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1394_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1394_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__0___boxed(lean_object* v_mvarId_1446_, lean_object* v_type_1447_, lean_object* v_fvars_1448_, lean_object* v_isZero_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
uint8_t v_isZero_boxed_1455_; lean_object* v_res_1456_; 
v_isZero_boxed_1455_ = lean_unbox(v_isZero_1449_);
v_res_1456_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__0(v_mvarId_1446_, v_type_1447_, v_fvars_1448_, v_isZero_boxed_1455_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg(lean_object* v_lctx_1457_, lean_object* v_x_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_keyedConfig_1464_; uint8_t v_trackZetaDelta_1465_; lean_object* v_zetaDeltaSet_1466_; lean_object* v_localInstances_1467_; lean_object* v_defEqCtx_x3f_1468_; lean_object* v_synthPendingDepth_1469_; lean_object* v_customCanUnfoldPredicate_x3f_1470_; uint8_t v_univApprox_1471_; uint8_t v_inTypeClassResolution_1472_; uint8_t v_cacheInferType_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_keyedConfig_1464_ = lean_ctor_get(v___y_1459_, 0);
v_trackZetaDelta_1465_ = lean_ctor_get_uint8(v___y_1459_, sizeof(void*)*7);
v_zetaDeltaSet_1466_ = lean_ctor_get(v___y_1459_, 1);
v_localInstances_1467_ = lean_ctor_get(v___y_1459_, 3);
v_defEqCtx_x3f_1468_ = lean_ctor_get(v___y_1459_, 4);
v_synthPendingDepth_1469_ = lean_ctor_get(v___y_1459_, 5);
v_customCanUnfoldPredicate_x3f_1470_ = lean_ctor_get(v___y_1459_, 6);
v_univApprox_1471_ = lean_ctor_get_uint8(v___y_1459_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1472_ = lean_ctor_get_uint8(v___y_1459_, sizeof(void*)*7 + 2);
v_cacheInferType_1473_ = lean_ctor_get_uint8(v___y_1459_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1470_);
lean_inc(v_synthPendingDepth_1469_);
lean_inc(v_defEqCtx_x3f_1468_);
lean_inc_ref(v_localInstances_1467_);
lean_inc(v_zetaDeltaSet_1466_);
lean_inc_ref(v_keyedConfig_1464_);
v___x_1474_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1474_, 0, v_keyedConfig_1464_);
lean_ctor_set(v___x_1474_, 1, v_zetaDeltaSet_1466_);
lean_ctor_set(v___x_1474_, 2, v_lctx_1457_);
lean_ctor_set(v___x_1474_, 3, v_localInstances_1467_);
lean_ctor_set(v___x_1474_, 4, v_defEqCtx_x3f_1468_);
lean_ctor_set(v___x_1474_, 5, v_synthPendingDepth_1469_);
lean_ctor_set(v___x_1474_, 6, v_customCanUnfoldPredicate_x3f_1470_);
lean_ctor_set_uint8(v___x_1474_, sizeof(void*)*7, v_trackZetaDelta_1465_);
lean_ctor_set_uint8(v___x_1474_, sizeof(void*)*7 + 1, v_univApprox_1471_);
lean_ctor_set_uint8(v___x_1474_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1472_);
lean_ctor_set_uint8(v___x_1474_, sizeof(void*)*7 + 3, v_cacheInferType_1473_);
lean_inc(v___y_1462_);
lean_inc_ref(v___y_1461_);
lean_inc(v___y_1460_);
v___x_1475_ = lean_apply_5(v_x_1458_, v___x_1474_, v___y_1460_, v___y_1461_, v___y_1462_, lean_box(0));
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg___boxed(lean_object* v_lctx_1476_, lean_object* v_x_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg(v_lctx_1476_, v_x_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__1___boxed(lean_object* v_type_1484_, lean_object* v_mvarId_1485_, lean_object* v_n_1486_, lean_object* v_preserveBinderNames_1487_, lean_object* v___x_1488_, lean_object* v_useNamesForExplicitOnly_1489_, lean_object* v_lctx_1490_, lean_object* v_fvars_1491_, lean_object* v___x_1492_, lean_object* v_s_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
uint8_t v_preserveBinderNames_boxed_1499_; uint8_t v___x_4246__boxed_1500_; uint8_t v_useNamesForExplicitOnly_boxed_1501_; lean_object* v_res_1502_; 
v_preserveBinderNames_boxed_1499_ = lean_unbox(v_preserveBinderNames_1487_);
v___x_4246__boxed_1500_ = lean_unbox(v___x_1488_);
v_useNamesForExplicitOnly_boxed_1501_ = lean_unbox(v_useNamesForExplicitOnly_1489_);
v_res_1502_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__1(v_type_1484_, v_mvarId_1485_, v_n_1486_, v_preserveBinderNames_boxed_1499_, v___x_4246__boxed_1500_, v_useNamesForExplicitOnly_boxed_1501_, v_lctx_1490_, v_fvars_1491_, v___x_1492_, v_s_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v_n_1486_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0(uint8_t v_preserveBinderNames_1503_, uint8_t v___x_1504_, uint8_t v_useNamesForExplicitOnly_1505_, lean_object* v_mvarId_1506_, lean_object* v_i_1507_, lean_object* v_lctx_1508_, lean_object* v_fvars_1509_, lean_object* v_j_1510_, lean_object* v_s_1511_, lean_object* v_type_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_zero_1518_; uint8_t v_isZero_1519_; 
v_zero_1518_ = lean_unsigned_to_nat(0u);
v_isZero_1519_ = lean_nat_dec_eq(v_i_1507_, v_zero_1518_);
if (v_isZero_1519_ == 1)
{
lean_object* v___x_1520_; lean_object* v_type_1521_; lean_object* v___x_1522_; lean_object* v___f_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
lean_dec(v_s_1511_);
lean_dec(v_i_1507_);
v___x_1520_ = lean_array_get_size(v_fvars_1509_);
v_type_1521_ = lean_expr_instantiate_rev_range(v_type_1512_, v_j_1510_, v___x_1520_, v_fvars_1509_);
lean_dec_ref(v_type_1512_);
v___x_1522_ = lean_box(v_isZero_1519_);
lean_inc_ref(v_fvars_1509_);
v___f_1523_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1523_, 0, v_mvarId_1506_);
lean_closure_set(v___f_1523_, 1, v_type_1521_);
lean_closure_set(v___f_1523_, 2, v_fvars_1509_);
lean_closure_set(v___f_1523_, 3, v___x_1522_);
v___x_1524_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___boxed), 9, 4);
lean_closure_set(v___x_1524_, 0, lean_box(0));
lean_closure_set(v___x_1524_, 1, v_fvars_1509_);
lean_closure_set(v___x_1524_, 2, v_j_1510_);
lean_closure_set(v___x_1524_, 3, v___f_1523_);
v___x_1525_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg(v_lctx_1508_, v___x_1524_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
return v___x_1525_;
}
else
{
lean_object* v_one_1526_; lean_object* v_n_1527_; 
v_one_1526_ = lean_unsigned_to_nat(1u);
v_n_1527_ = lean_nat_sub(v_i_1507_, v_one_1526_);
lean_dec(v_i_1507_);
switch(lean_obj_tag(v_type_1512_))
{
case 8:
{
lean_object* v_declName_1528_; lean_object* v_type_1529_; lean_object* v_value_1530_; lean_object* v_body_1531_; lean_object* v___x_1532_; lean_object* v_type_1533_; lean_object* v_type_1534_; lean_object* v_val_1535_; lean_object* v___x_1536_; 
v_declName_1528_ = lean_ctor_get(v_type_1512_, 0);
lean_inc(v_declName_1528_);
v_type_1529_ = lean_ctor_get(v_type_1512_, 1);
lean_inc_ref(v_type_1529_);
v_value_1530_ = lean_ctor_get(v_type_1512_, 2);
lean_inc_ref(v_value_1530_);
v_body_1531_ = lean_ctor_get(v_type_1512_, 3);
lean_inc_ref(v_body_1531_);
lean_dec_ref_known(v_type_1512_, 4);
v___x_1532_ = lean_array_get_size(v_fvars_1509_);
v_type_1533_ = lean_expr_instantiate_rev_range(v_type_1529_, v_j_1510_, v___x_1532_, v_fvars_1509_);
lean_dec_ref(v_type_1529_);
v_type_1534_ = l_Lean_Expr_headBeta(v_type_1533_);
v_val_1535_ = lean_expr_instantiate_rev_range(v_value_1530_, v_j_1510_, v___x_1532_, v_fvars_1509_);
lean_dec_ref(v_value_1530_);
v___x_1536_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3(v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1538_ = 1;
v___x_1539_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg(v_preserveBinderNames_1503_, v___x_1504_, v_useNamesForExplicitOnly_1505_, v_lctx_1508_, v_declName_1528_, v___x_1538_, v_s_1511_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v_fst_1541_; lean_object* v_snd_1542_; uint8_t v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v_fst_1541_ = lean_ctor_get(v_a_1540_, 0);
lean_inc(v_fst_1541_);
v_snd_1542_ = lean_ctor_get(v_a_1540_, 1);
lean_inc(v_snd_1542_);
lean_dec(v_a_1540_);
v___x_1543_ = 0;
lean_inc(v_a_1537_);
v___x_1544_ = l_Lean_LocalContext_mkLetDecl(v_lctx_1508_, v_a_1537_, v_fst_1541_, v_type_1534_, v_val_1535_, v_isZero_1519_, v___x_1543_);
v___x_1545_ = l_Lean_mkFVar(v_a_1537_);
v___x_1546_ = lean_array_push(v_fvars_1509_, v___x_1545_);
v_i_1507_ = v_n_1527_;
v_lctx_1508_ = v___x_1544_;
v_fvars_1509_ = v___x_1546_;
v_s_1511_ = v_snd_1542_;
v_type_1512_ = v_body_1531_;
goto _start;
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec(v_a_1537_);
lean_dec_ref(v_val_1535_);
lean_dec_ref(v_type_1534_);
lean_dec_ref(v_body_1531_);
lean_dec(v_n_1527_);
lean_dec(v_j_1510_);
lean_dec_ref(v_fvars_1509_);
lean_dec_ref(v_lctx_1508_);
lean_dec(v_mvarId_1506_);
v_a_1548_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1539_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1539_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec_ref(v_val_1535_);
lean_dec_ref(v_type_1534_);
lean_dec_ref(v_body_1531_);
lean_dec(v_declName_1528_);
lean_dec(v_n_1527_);
lean_dec(v_s_1511_);
lean_dec(v_j_1510_);
lean_dec_ref(v_fvars_1509_);
lean_dec_ref(v_lctx_1508_);
lean_dec(v_mvarId_1506_);
v_a_1556_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1536_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1536_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
case 7:
{
lean_object* v_binderName_1564_; lean_object* v_binderType_1565_; lean_object* v_body_1566_; uint8_t v_binderInfo_1567_; lean_object* v___x_1568_; lean_object* v_type_1569_; lean_object* v_type_1570_; lean_object* v___x_1571_; 
v_binderName_1564_ = lean_ctor_get(v_type_1512_, 0);
lean_inc(v_binderName_1564_);
v_binderType_1565_ = lean_ctor_get(v_type_1512_, 1);
lean_inc_ref(v_binderType_1565_);
v_body_1566_ = lean_ctor_get(v_type_1512_, 2);
lean_inc_ref(v_body_1566_);
v_binderInfo_1567_ = lean_ctor_get_uint8(v_type_1512_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_1512_, 3);
v___x_1568_ = lean_array_get_size(v_fvars_1509_);
v_type_1569_ = lean_expr_instantiate_rev_range(v_binderType_1565_, v_j_1510_, v___x_1568_, v_fvars_1509_);
lean_dec_ref(v_binderType_1565_);
v_type_1570_ = l_Lean_Expr_headBeta(v_type_1569_);
v___x_1571_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3(v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; uint8_t v___x_1573_; lean_object* v___x_1574_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1571_, 1);
v___x_1573_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_1567_);
v___x_1574_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_mkAuxNameImp___redArg(v_preserveBinderNames_1503_, v___x_1504_, v_useNamesForExplicitOnly_1505_, v_lctx_1508_, v_binderName_1564_, v___x_1573_, v_s_1511_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v_fst_1576_; lean_object* v_snd_1577_; uint8_t v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1574_, 1);
v_fst_1576_ = lean_ctor_get(v_a_1575_, 0);
lean_inc(v_fst_1576_);
v_snd_1577_ = lean_ctor_get(v_a_1575_, 1);
lean_inc(v_snd_1577_);
lean_dec(v_a_1575_);
v___x_1578_ = 0;
lean_inc(v_a_1572_);
v___x_1579_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_1508_, v_a_1572_, v_fst_1576_, v_type_1570_, v_binderInfo_1567_, v___x_1578_);
v___x_1580_ = l_Lean_mkFVar(v_a_1572_);
v___x_1581_ = lean_array_push(v_fvars_1509_, v___x_1580_);
v_i_1507_ = v_n_1527_;
v_lctx_1508_ = v___x_1579_;
v_fvars_1509_ = v___x_1581_;
v_s_1511_ = v_snd_1577_;
v_type_1512_ = v_body_1566_;
goto _start;
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec(v_a_1572_);
lean_dec_ref(v_type_1570_);
lean_dec_ref(v_body_1566_);
lean_dec(v_n_1527_);
lean_dec(v_j_1510_);
lean_dec_ref(v_fvars_1509_);
lean_dec_ref(v_lctx_1508_);
lean_dec(v_mvarId_1506_);
v_a_1583_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1574_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1574_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec_ref(v_type_1570_);
lean_dec_ref(v_body_1566_);
lean_dec(v_binderName_1564_);
lean_dec(v_n_1527_);
lean_dec(v_s_1511_);
lean_dec(v_j_1510_);
lean_dec_ref(v_fvars_1509_);
lean_dec_ref(v_lctx_1508_);
lean_dec(v_mvarId_1506_);
v_a_1591_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1571_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1571_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
default: 
{
lean_object* v___x_1599_; lean_object* v_type_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___f_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1599_ = lean_array_get_size(v_fvars_1509_);
v_type_1600_ = lean_expr_instantiate_rev_range(v_type_1512_, v_j_1510_, v___x_1599_, v_fvars_1509_);
lean_dec_ref(v_type_1512_);
v___x_1601_ = lean_box(v_preserveBinderNames_1503_);
v___x_1602_ = lean_box(v___x_1504_);
v___x_1603_ = lean_box(v_useNamesForExplicitOnly_1505_);
lean_inc_ref(v_fvars_1509_);
lean_inc_ref(v_lctx_1508_);
v___f_1604_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__1___boxed), 15, 10);
lean_closure_set(v___f_1604_, 0, v_type_1600_);
lean_closure_set(v___f_1604_, 1, v_mvarId_1506_);
lean_closure_set(v___f_1604_, 2, v_n_1527_);
lean_closure_set(v___f_1604_, 3, v___x_1601_);
lean_closure_set(v___f_1604_, 4, v___x_1602_);
lean_closure_set(v___f_1604_, 5, v___x_1603_);
lean_closure_set(v___f_1604_, 6, v_lctx_1508_);
lean_closure_set(v___f_1604_, 7, v_fvars_1509_);
lean_closure_set(v___f_1604_, 8, v___x_1599_);
lean_closure_set(v___f_1604_, 9, v_s_1511_);
v___x_1605_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1___boxed), 9, 4);
lean_closure_set(v___x_1605_, 0, lean_box(0));
lean_closure_set(v___x_1605_, 1, v_fvars_1509_);
lean_closure_set(v___x_1605_, 2, v_j_1510_);
lean_closure_set(v___x_1605_, 3, v___f_1604_);
v___x_1606_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg(v_lctx_1508_, v___x_1605_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
return v___x_1606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___lam__1(lean_object* v_type_1607_, lean_object* v_mvarId_1608_, lean_object* v_n_1609_, uint8_t v_preserveBinderNames_1610_, uint8_t v___x_1611_, uint8_t v_useNamesForExplicitOnly_1612_, lean_object* v_lctx_1613_, lean_object* v_fvars_1614_, lean_object* v___x_1615_, lean_object* v_s_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg(v_type_1607_, v___y_1618_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1624_; uint8_t v___y_1626_; uint8_t v___x_1647_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1623_);
lean_dec_ref_known(v___x_1622_, 1);
v___x_1624_ = l_Lean_Expr_cleanupAnnotations(v_a_1623_);
v___x_1647_ = l_Lean_Expr_isForall(v___x_1624_);
if (v___x_1647_ == 0)
{
uint8_t v___x_1648_; 
v___x_1648_ = l_Lean_Expr_isLet(v___x_1624_);
v___y_1626_ = v___x_1648_;
goto v___jp_1625_;
}
else
{
v___y_1626_ = v___x_1647_;
goto v___jp_1625_;
}
v___jp_1625_:
{
if (v___y_1626_ == 0)
{
lean_object* v___x_1627_; 
lean_inc(v___y_1620_);
lean_inc_ref(v___y_1619_);
lean_inc(v___y_1618_);
lean_inc_ref(v___y_1617_);
v___x_1627_ = lean_whnf(v___x_1624_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; uint8_t v___x_1629_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1629_ = l_Lean_Expr_isForall(v_a_1628_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
lean_dec(v_a_1628_);
lean_dec(v_s_1616_);
lean_dec(v___x_1615_);
lean_dec_ref(v_fvars_1614_);
lean_dec_ref(v_lctx_1613_);
v___x_1630_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1));
v___x_1631_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__4);
v___x_1632_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1630_, v_mvarId_1608_, v___x_1631_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v___x_1632_;
}
else
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1633_ = lean_unsigned_to_nat(1u);
v___x_1634_ = lean_nat_add(v_n_1609_, v___x_1633_);
v___x_1635_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0(v_preserveBinderNames_1610_, v___x_1611_, v_useNamesForExplicitOnly_1612_, v_mvarId_1608_, v___x_1634_, v_lctx_1613_, v_fvars_1614_, v___x_1615_, v_s_1616_, v_a_1628_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v___x_1635_;
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v_s_1616_);
lean_dec(v___x_1615_);
lean_dec_ref(v_fvars_1614_);
lean_dec_ref(v_lctx_1613_);
lean_dec(v_mvarId_1608_);
v_a_1636_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1627_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1627_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = lean_unsigned_to_nat(1u);
v___x_1645_ = lean_nat_add(v_n_1609_, v___x_1644_);
v___x_1646_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0(v_preserveBinderNames_1610_, v___x_1611_, v_useNamesForExplicitOnly_1612_, v_mvarId_1608_, v___x_1645_, v_lctx_1613_, v_fvars_1614_, v___x_1615_, v_s_1616_, v___x_1624_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v___x_1646_;
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v_s_1616_);
lean_dec(v___x_1615_);
lean_dec_ref(v_fvars_1614_);
lean_dec_ref(v_lctx_1613_);
lean_dec(v_mvarId_1608_);
v_a_1649_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1622_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1622_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0___boxed(lean_object* v_preserveBinderNames_1657_, lean_object* v___x_1658_, lean_object* v_useNamesForExplicitOnly_1659_, lean_object* v_mvarId_1660_, lean_object* v_i_1661_, lean_object* v_lctx_1662_, lean_object* v_fvars_1663_, lean_object* v_j_1664_, lean_object* v_s_1665_, lean_object* v_type_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
uint8_t v_preserveBinderNames_boxed_1672_; uint8_t v___x_4279__boxed_1673_; uint8_t v_useNamesForExplicitOnly_boxed_1674_; lean_object* v_res_1675_; 
v_preserveBinderNames_boxed_1672_ = lean_unbox(v_preserveBinderNames_1657_);
v___x_4279__boxed_1673_ = lean_unbox(v___x_1658_);
v_useNamesForExplicitOnly_boxed_1674_ = lean_unbox(v_useNamesForExplicitOnly_1659_);
v_res_1675_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0(v_preserveBinderNames_boxed_1672_, v___x_4279__boxed_1673_, v_useNamesForExplicitOnly_boxed_1674_, v_mvarId_1660_, v_i_1661_, v_lctx_1662_, v_fvars_1663_, v_j_1664_, v_s_1665_, v_type_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec_ref(v_a_1667_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore___lam__0(lean_object* v_mvarId_1676_, lean_object* v___x_1677_, lean_object* v___x_1678_, uint8_t v_preserveBinderNames_1679_, uint8_t v___x_1680_, uint8_t v_useNamesForExplicitOnly_1681_, lean_object* v_n_1682_, lean_object* v_givenNames_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v___x_1689_; 
lean_inc(v_mvarId_1676_);
v___x_1689_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1676_, v___x_1677_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v___x_1690_; 
lean_dec_ref_known(v___x_1689_, 1);
lean_inc(v_mvarId_1676_);
v___x_1690_ = l_Lean_MVarId_getType(v_mvarId_1676_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v_lctx_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v_lctx_1692_ = lean_ctor_get(v___y_1684_, 2);
lean_inc_ref(v_lctx_1692_);
v___x_1693_ = lean_mk_empty_array_with_capacity(v___x_1678_);
v___x_1694_ = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0(v_preserveBinderNames_1679_, v___x_1680_, v_useNamesForExplicitOnly_1681_, v_mvarId_1676_, v_n_1682_, v_lctx_1692_, v___x_1693_, v___x_1678_, v_givenNames_1683_, v_a_1691_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
lean_dec_ref(v___y_1684_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1716_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1716_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1716_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v_fst_1699_; lean_object* v_snd_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1715_; 
v_fst_1699_ = lean_ctor_get(v_a_1695_, 0);
v_snd_1700_ = lean_ctor_get(v_a_1695_, 1);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_a_1695_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1702_ = v_a_1695_;
v_isShared_1703_ = v_isSharedCheck_1715_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_snd_1700_);
lean_inc(v_fst_1699_);
lean_dec(v_a_1695_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1715_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
size_t v_sz_1704_; size_t v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1710_; 
v_sz_1704_ = lean_array_size(v_fst_1699_);
v___x_1705_ = ((size_t)0ULL);
v___x_1706_ = l_unsafeCast___redArg(v_fst_1699_);
lean_dec(v_fst_1699_);
v___x_1707_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_introNCore_spec__1(v_sz_1704_, v___x_1705_, v___x_1706_);
v___x_1708_ = l_unsafeCast___redArg(v___x_1707_);
lean_dec_ref(v___x_1707_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 0, v___x_1708_);
v___x_1710_ = v___x_1702_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1714_, 1, v_snd_1700_);
v___x_1710_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1712_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1710_);
v___x_1712_ = v___x_1697_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1710_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
v_a_1717_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1694_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1694_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec_ref(v___y_1684_);
lean_dec(v_givenNames_1683_);
lean_dec(v_n_1682_);
lean_dec(v___x_1678_);
lean_dec(v_mvarId_1676_);
v_a_1725_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1690_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1690_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
lean_dec_ref(v___y_1684_);
lean_dec(v_givenNames_1683_);
lean_dec(v_n_1682_);
lean_dec(v___x_1678_);
lean_dec(v_mvarId_1676_);
v_a_1733_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1689_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1689_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore___lam__0___boxed(lean_object* v_mvarId_1741_, lean_object* v___x_1742_, lean_object* v___x_1743_, lean_object* v_preserveBinderNames_1744_, lean_object* v___x_1745_, lean_object* v_useNamesForExplicitOnly_1746_, lean_object* v_n_1747_, lean_object* v_givenNames_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
uint8_t v_preserveBinderNames_boxed_1754_; uint8_t v___x_4509__boxed_1755_; uint8_t v_useNamesForExplicitOnly_boxed_1756_; lean_object* v_res_1757_; 
v_preserveBinderNames_boxed_1754_ = lean_unbox(v_preserveBinderNames_1744_);
v___x_4509__boxed_1755_ = lean_unbox(v___x_1745_);
v_useNamesForExplicitOnly_boxed_1756_ = lean_unbox(v_useNamesForExplicitOnly_1746_);
v_res_1757_ = l_Lean_Meta_introNCore___lam__0(v_mvarId_1741_, v___x_1742_, v___x_1743_, v_preserveBinderNames_boxed_1754_, v___x_4509__boxed_1755_, v_useNamesForExplicitOnly_boxed_1756_, v_n_1747_, v_givenNames_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore(lean_object* v_mvarId_1760_, lean_object* v_n_1761_, lean_object* v_givenNames_1762_, uint8_t v_useNamesForExplicitOnly_1763_, uint8_t v_preserveBinderNames_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v___x_1770_; uint8_t v___x_1771_; 
v___x_1770_ = lean_unsigned_to_nat(0u);
v___x_1771_ = lean_nat_dec_eq(v_n_1761_, v___x_1770_);
if (v___x_1771_ == 0)
{
lean_object* v_toCold_1772_; lean_object* v_options_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___f_1780_; lean_object* v___x_1781_; 
v_toCold_1772_ = lean_ctor_get(v_a_1767_, 0);
v_options_1773_ = lean_ctor_get(v_toCold_1772_, 2);
v___x_1774_ = l_Lean_Meta_tactic_hygienic;
v___x_1775_ = l_Lean_Option_get___at___00Lean_Meta_mkFreshBinderNameForTactic_spec__0(v_options_1773_, v___x_1774_);
v___x_1776_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___redArg___lam__1___closed__1));
v___x_1777_ = lean_box(v_preserveBinderNames_1764_);
v___x_1778_ = lean_box(v___x_1775_);
v___x_1779_ = lean_box(v_useNamesForExplicitOnly_1763_);
lean_inc(v_mvarId_1760_);
v___f_1780_ = lean_alloc_closure((void*)(l_Lean_Meta_introNCore___lam__0___boxed), 13, 8);
lean_closure_set(v___f_1780_, 0, v_mvarId_1760_);
lean_closure_set(v___f_1780_, 1, v___x_1776_);
lean_closure_set(v___f_1780_, 2, v___x_1770_);
lean_closure_set(v___f_1780_, 3, v___x_1777_);
lean_closure_set(v___f_1780_, 4, v___x_1778_);
lean_closure_set(v___f_1780_, 5, v___x_1779_);
lean_closure_set(v___f_1780_, 6, v_n_1761_);
lean_closure_set(v___f_1780_, 7, v_givenNames_1762_);
v___x_1781_ = l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg(v_mvarId_1760_, v___f_1780_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_);
return v___x_1781_;
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_dec(v_givenNames_1762_);
lean_dec(v_n_1761_);
v___x_1782_ = ((lean_object*)(l_Lean_Meta_introNCore___closed__0));
v___x_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1782_);
lean_ctor_set(v___x_1783_, 1, v_mvarId_1760_);
v___x_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1783_);
return v___x_1784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introNCore___boxed(lean_object* v_mvarId_1785_, lean_object* v_n_1786_, lean_object* v_givenNames_1787_, lean_object* v_useNamesForExplicitOnly_1788_, lean_object* v_preserveBinderNames_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_){
_start:
{
uint8_t v_useNamesForExplicitOnly_boxed_1795_; uint8_t v_preserveBinderNames_boxed_1796_; lean_object* v_res_1797_; 
v_useNamesForExplicitOnly_boxed_1795_ = lean_unbox(v_useNamesForExplicitOnly_1788_);
v_preserveBinderNames_boxed_1796_ = lean_unbox(v_preserveBinderNames_1789_);
v_res_1797_ = l_Lean_Meta_introNCore(v_mvarId_1785_, v_n_1786_, v_givenNames_1787_, v_useNamesForExplicitOnly_boxed_1795_, v_preserveBinderNames_boxed_1796_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
lean_dec(v_a_1793_);
lean_dec_ref(v_a_1792_);
lean_dec(v_a_1791_);
lean_dec_ref(v_a_1790_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2(lean_object* v_00_u03b1_1798_, lean_object* v_lctx_1799_, lean_object* v_x_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___redArg(v_lctx_1799_, v_x_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1807_, lean_object* v_lctx_1808_, lean_object* v_x_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__2(v_00_u03b1_1807_, v_lctx_1808_, v_x_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4(lean_object* v_e_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v___x_1822_; 
v___x_1822_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg(v_e_1816_, v___y_1818_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___boxed(lean_object* v_e_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4(v_e_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0(lean_object* v_mvarId_1830_, lean_object* v_val_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v___x_1837_; 
v___x_1837_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg(v_mvarId_1830_, v_val_1831_, v___y_1833_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___boxed(lean_object* v_mvarId_1838_, lean_object* v_val_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0(v_mvarId_1838_, v_val_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_1846_, lean_object* v_fvars_1847_, lean_object* v_j_1848_, lean_object* v_x_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___redArg(v_fvars_1847_, v_j_1848_, v_x_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1856_, lean_object* v_fvars_1857_, lean_object* v_j_1858_, lean_object* v_x_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at___00Lean_Meta_withNewLocalInstances___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__1_spec__4(v_00_u03b1_1856_, v_fvars_1857_, v_j_1858_, v_x_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7(lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___redArg(v___y_1869_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7___boxed(lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__3_spec__7(v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1878_, lean_object* v_x_1879_, lean_object* v_x_1880_, lean_object* v_x_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2___redArg(v_x_1879_, v_x_1880_, v_x_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1883_, lean_object* v_x_1884_, size_t v_x_1885_, size_t v_x_1886_, lean_object* v_x_1887_, lean_object* v_x_1888_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___redArg(v_x_1884_, v_x_1885_, v_x_1886_, v_x_1887_, v_x_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1890_, lean_object* v_x_1891_, lean_object* v_x_1892_, lean_object* v_x_1893_, lean_object* v_x_1894_, lean_object* v_x_1895_){
_start:
{
size_t v_x_4764__boxed_1896_; size_t v_x_4765__boxed_1897_; lean_object* v_res_1898_; 
v_x_4764__boxed_1896_ = lean_unbox_usize(v_x_1892_);
lean_dec(v_x_1892_);
v_x_4765__boxed_1897_ = lean_unbox_usize(v_x_1893_);
lean_dec(v_x_1893_);
v_res_1898_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6(v_00_u03b2_1890_, v_x_1891_, v_x_4764__boxed_1896_, v_x_4765__boxed_1897_, v_x_1894_, v_x_1895_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11(lean_object* v_00_u03b2_1899_, lean_object* v_n_1900_, lean_object* v_k_1901_, lean_object* v_v_1902_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(v_n_1900_, v_k_1901_, v_v_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12(lean_object* v_00_u03b2_1904_, size_t v_depth_1905_, lean_object* v_keys_1906_, lean_object* v_vals_1907_, lean_object* v_heq_1908_, lean_object* v_i_1909_, lean_object* v_entries_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(v_depth_1905_, v_keys_1906_, v_vals_1907_, v_i_1909_, v_entries_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12___boxed(lean_object* v_00_u03b2_1912_, lean_object* v_depth_1913_, lean_object* v_keys_1914_, lean_object* v_vals_1915_, lean_object* v_heq_1916_, lean_object* v_i_1917_, lean_object* v_entries_1918_){
_start:
{
size_t v_depth_boxed_1919_; lean_object* v_res_1920_; 
v_depth_boxed_1919_ = lean_unbox_usize(v_depth_1913_);
lean_dec(v_depth_1913_);
v_res_1920_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__12(v_00_u03b2_1912_, v_depth_boxed_1919_, v_keys_1914_, v_vals_1915_, v_heq_1916_, v_i_1917_, v_entries_1918_);
lean_dec_ref(v_vals_1915_);
lean_dec_ref(v_keys_1914_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1921_, lean_object* v_x_1922_, lean_object* v_x_1923_, lean_object* v_x_1924_, lean_object* v_x_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0_spec__2_spec__6_spec__11_spec__12___redArg(v_x_1922_, v_x_1923_, v_x_1924_, v_x_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introN(lean_object* v_mvarId_1927_, lean_object* v_n_1928_, lean_object* v_givenNames_1929_, uint8_t v_useNamesForExplicitOnly_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_){
_start:
{
uint8_t v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = 0;
v___x_1937_ = l_Lean_Meta_introNCore(v_mvarId_1927_, v_n_1928_, v_givenNames_1929_, v_useNamesForExplicitOnly_1930_, v___x_1936_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introN___boxed(lean_object* v_mvarId_1938_, lean_object* v_n_1939_, lean_object* v_givenNames_1940_, lean_object* v_useNamesForExplicitOnly_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
uint8_t v_useNamesForExplicitOnly_boxed_1947_; lean_object* v_res_1948_; 
v_useNamesForExplicitOnly_boxed_1947_ = lean_unbox(v_useNamesForExplicitOnly_1941_);
v_res_1948_ = l_Lean_MVarId_introN(v_mvarId_1938_, v_n_1939_, v_givenNames_1940_, v_useNamesForExplicitOnly_boxed_1947_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introNP(lean_object* v_mvarId_1949_, lean_object* v_n_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v___x_1956_; uint8_t v___x_1957_; uint8_t v___x_1958_; lean_object* v___x_1959_; 
v___x_1956_ = lean_box(0);
v___x_1957_ = 0;
v___x_1958_ = 1;
v___x_1959_ = l_Lean_Meta_introNCore(v_mvarId_1949_, v_n_1950_, v___x_1956_, v___x_1957_, v___x_1958_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introNP___boxed(lean_object* v_mvarId_1960_, lean_object* v_n_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Lean_MVarId_introNP(v_mvarId_1960_, v_n_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_);
lean_dec(v_a_1965_);
lean_dec_ref(v_a_1964_);
lean_dec(v_a_1963_);
lean_dec_ref(v_a_1962_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro(lean_object* v_mvarId_1968_, lean_object* v_name_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; lean_object* v___x_1980_; 
v___x_1975_ = l_Lean_instInhabitedFVarId_default;
v___x_1976_ = lean_unsigned_to_nat(1u);
v___x_1977_ = lean_box(0);
v___x_1978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_name_1969_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = 0;
v___x_1980_ = l_Lean_Meta_introNCore(v_mvarId_1968_, v___x_1976_, v___x_1978_, v___x_1979_, v___x_1979_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1999_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_1999_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1999_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v_fst_1985_; lean_object* v_snd_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1998_; 
v_fst_1985_ = lean_ctor_get(v_a_1981_, 0);
v_snd_1986_ = lean_ctor_get(v_a_1981_, 1);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_a_1981_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1988_ = v_a_1981_;
v_isShared_1989_ = v_isSharedCheck_1998_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_snd_1986_);
lean_inc(v_fst_1985_);
lean_dec(v_a_1981_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1998_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1993_; 
v___x_1990_ = lean_unsigned_to_nat(0u);
v___x_1991_ = lean_array_get(v___x_1975_, v_fst_1985_, v___x_1990_);
lean_dec(v_fst_1985_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_1991_);
v___x_1993_ = v___x_1988_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_snd_1986_);
v___x_1993_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
lean_object* v___x_1995_; 
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_1993_);
v___x_1995_ = v___x_1983_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1993_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
v_a_2000_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1980_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1980_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro___boxed(lean_object* v_mvarId_2008_, lean_object* v_name_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_MVarId_intro(v_mvarId_2008_, v_name_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_);
lean_dec(v_a_2013_);
lean_dec_ref(v_a_2012_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_intro1Core(lean_object* v_mvarId_2016_, uint8_t v_preserveBinderNames_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; 
v___x_2023_ = l_Lean_instInhabitedFVarId_default;
v___x_2024_ = lean_unsigned_to_nat(1u);
v___x_2025_ = lean_box(0);
v___x_2026_ = 0;
v___x_2027_ = l_Lean_Meta_introNCore(v_mvarId_2016_, v___x_2024_, v___x_2025_, v___x_2026_, v_preserveBinderNames_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2046_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2046_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2046_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v_fst_2032_; lean_object* v_snd_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2045_; 
v_fst_2032_ = lean_ctor_get(v_a_2028_, 0);
v_snd_2033_ = lean_ctor_get(v_a_2028_, 1);
v_isSharedCheck_2045_ = !lean_is_exclusive(v_a_2028_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2035_ = v_a_2028_;
v_isShared_2036_ = v_isSharedCheck_2045_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_snd_2033_);
lean_inc(v_fst_2032_);
lean_dec(v_a_2028_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2045_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = lean_array_get(v___x_2023_, v_fst_2032_, v___x_2037_);
lean_dec(v_fst_2032_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v___x_2038_);
v___x_2040_ = v___x_2035_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v_snd_2033_);
v___x_2040_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
lean_object* v___x_2042_; 
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2040_);
v___x_2042_ = v___x_2030_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
v_a_2047_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2027_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2027_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_intro1Core___boxed(lean_object* v_mvarId_2055_, lean_object* v_preserveBinderNames_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_){
_start:
{
uint8_t v_preserveBinderNames_boxed_2062_; lean_object* v_res_2063_; 
v_preserveBinderNames_boxed_2062_ = lean_unbox(v_preserveBinderNames_2056_);
v_res_2063_ = l_Lean_Meta_intro1Core(v_mvarId_2055_, v_preserveBinderNames_boxed_2062_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
lean_dec(v_a_2060_);
lean_dec_ref(v_a_2059_);
lean_dec(v_a_2058_);
lean_dec_ref(v_a_2057_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1(lean_object* v_mvarId_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_){
_start:
{
uint8_t v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = 0;
v___x_2071_ = l_Lean_Meta_intro1Core(v_mvarId_2064_, v___x_2070_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___boxed(lean_object* v_mvarId_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lean_MVarId_intro1(v_mvarId_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
lean_dec(v_a_2074_);
lean_dec_ref(v_a_2073_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1P(lean_object* v_mvarId_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
uint8_t v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = 1;
v___x_2086_ = l_Lean_Meta_intro1Core(v_mvarId_2079_, v___x_2085_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1P___boxed(lean_object* v_mvarId_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = l_Lean_MVarId_intro1P(v_mvarId_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
return v_res_2093_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_intro1___00spec__0_spec__0(lean_object* v_msgData_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
lean_object* v___x_2100_; lean_object* v_env_2101_; lean_object* v___x_2102_; lean_object* v_toCold_2103_; lean_object* v_mctx_2104_; lean_object* v_lctx_2105_; lean_object* v_options_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2100_ = lean_st_ref_get(v___y_2098_);
v_env_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc_ref(v_env_2101_);
lean_dec(v___x_2100_);
v___x_2102_ = lean_st_ref_get(v___y_2096_);
v_toCold_2103_ = lean_ctor_get(v___y_2097_, 0);
v_mctx_2104_ = lean_ctor_get(v___x_2102_, 0);
lean_inc_ref(v_mctx_2104_);
lean_dec(v___x_2102_);
v_lctx_2105_ = lean_ctor_get(v___y_2095_, 2);
v_options_2106_ = lean_ctor_get(v_toCold_2103_, 2);
lean_inc_ref(v_options_2106_);
lean_inc_ref(v_lctx_2105_);
v___x_2107_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2107_, 0, v_env_2101_);
lean_ctor_set(v___x_2107_, 1, v_mctx_2104_);
lean_ctor_set(v___x_2107_, 2, v_lctx_2105_);
lean_ctor_set(v___x_2107_, 3, v_options_2106_);
v___x_2108_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
lean_ctor_set(v___x_2108_, 1, v_msgData_2094_);
v___x_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_intro1___00spec__0_spec__0___boxed(lean_object* v_msgData_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_intro1___00spec__0_spec__0(v_msgData_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg(lean_object* v_msg_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v_ref_2123_; lean_object* v___x_2124_; lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2133_; 
v_ref_2123_ = lean_ctor_get(v___y_2120_, 2);
v___x_2124_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_intro1___00spec__0_spec__0(v_msg_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_);
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2127_ = v___x_2124_;
v_isShared_2128_ = v_isSharedCheck_2133_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2124_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2133_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2129_; lean_object* v___x_2131_; 
lean_inc(v_ref_2123_);
v___x_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2129_, 0, v_ref_2123_);
lean_ctor_set(v___x_2129_, 1, v_a_2125_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set_tag(v___x_2127_, 1);
lean_ctor_set(v___x_2127_, 0, v___x_2129_);
v___x_2131_ = v___x_2127_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg___boxed(lean_object* v_msg_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg(v_msg_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
return v_res_2140_;
}
}
static lean_object* _init_l_Lean_MVarId_intro1___00__lam__0___closed__1(void){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = ((lean_object*)(l_Lean_MVarId_intro1___00__lam__0___closed__0));
v___x_2143_ = l_Lean_stringToMessageData(v___x_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___00__lam__0(lean_object* v_mvarId_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v___x_2150_; 
lean_inc(v_mvarId_2144_);
v___x_2150_ = l_Lean_MVarId_getType_x27(v_mvarId_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2150_, 1);
if (lean_obj_tag(v_a_2151_) == 7)
{
lean_object* v_binderName_2152_; lean_object* v_binderType_2153_; lean_object* v_body_2154_; uint8_t v_binderInfo_2155_; lean_object* v___y_2157_; lean_object* v___y_2158_; lean_object* v___y_2159_; lean_object* v___y_2160_; uint8_t v___x_2192_; 
v_binderName_2152_ = lean_ctor_get(v_a_2151_, 0);
lean_inc(v_binderName_2152_);
v_binderType_2153_ = lean_ctor_get(v_a_2151_, 1);
lean_inc_ref(v_binderType_2153_);
v_body_2154_ = lean_ctor_get(v_a_2151_, 2);
lean_inc_ref(v_body_2154_);
v_binderInfo_2155_ = lean_ctor_get_uint8(v_a_2151_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_2151_, 3);
v___x_2192_ = l_Lean_Expr_hasLooseBVars(v_body_2154_);
if (v___x_2192_ == 0)
{
v___y_2157_ = v___y_2145_;
v___y_2158_ = v___y_2146_;
v___y_2159_ = v___y_2147_;
v___y_2160_ = v___y_2148_;
goto v___jp_2156_;
}
else
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_dec_ref(v_body_2154_);
lean_dec_ref(v_binderType_2153_);
lean_dec(v_binderName_2152_);
v___x_2193_ = lean_obj_once(&l_Lean_MVarId_intro1___00__lam__0___closed__1, &l_Lean_MVarId_intro1___00__lam__0___closed__1_once, _init_l_Lean_MVarId_intro1___00__lam__0___closed__1);
v___x_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2194_, 0, v_mvarId_2144_);
v___x_2195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2193_);
lean_ctor_set(v___x_2195_, 1, v___x_2194_);
v___x_2196_ = l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg(v___x_2195_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2196_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2196_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
v___jp_2156_:
{
lean_object* v___x_2161_; 
lean_inc(v_mvarId_2144_);
v___x_2161_ = l_Lean_MVarId_getTag(v_mvarId_2144_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_body_2154_, v_a_2162_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2174_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
lean_inc_n(v_a_2164_, 2);
lean_dec_ref_known(v___x_2163_, 1);
v___x_2165_ = l_Lean_Expr_lam___override(v_binderName_2152_, v_binderType_2153_, v_a_2164_, v_binderInfo_2155_);
v___x_2166_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__0___redArg(v_mvarId_2144_, v___x_2165_, v___y_2158_);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2174_ == 0)
{
lean_object* v_unused_2175_; 
v_unused_2175_ = lean_ctor_get(v___x_2166_, 0);
lean_dec(v_unused_2175_);
v___x_2168_ = v___x_2166_;
v_isShared_2169_ = v_isSharedCheck_2174_;
goto v_resetjp_2167_;
}
else
{
lean_dec(v___x_2166_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2174_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2170_; lean_object* v___x_2172_; 
v___x_2170_ = l_Lean_Expr_mvarId_x21(v_a_2164_);
lean_dec(v_a_2164_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 0, v___x_2170_);
v___x_2172_ = v___x_2168_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2170_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_dec_ref(v_binderType_2153_);
lean_dec(v_binderName_2152_);
lean_dec(v_mvarId_2144_);
v_a_2176_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2163_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2163_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec_ref(v_body_2154_);
lean_dec_ref(v_binderType_2153_);
lean_dec(v_binderName_2152_);
lean_dec(v_mvarId_2144_);
v_a_2184_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2161_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2161_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
lean_dec(v_a_2151_);
v___x_2205_ = lean_obj_once(&l_Lean_MVarId_intro1___00__lam__0___closed__1, &l_Lean_MVarId_intro1___00__lam__0___closed__1_once, _init_l_Lean_MVarId_intro1___00__lam__0___closed__1);
v___x_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2206_, 0, v_mvarId_2144_);
v___x_2207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2205_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg(v___x_2207_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
return v___x_2208_;
}
}
else
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2216_; 
lean_dec(v_mvarId_2144_);
v_a_2209_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2211_ = v___x_2150_;
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2150_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2212_ == 0)
{
v___x_2214_ = v___x_2211_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2209_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___00__lam__0___boxed(lean_object* v_mvarId_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lean_MVarId_intro1___00__lam__0(v_mvarId_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1__(lean_object* v_mvarId_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v___f_2230_; lean_object* v___x_2231_; 
lean_inc(v_mvarId_2224_);
v___f_2230_ = lean_alloc_closure((void*)(l_Lean_MVarId_intro1___00__lam__0___boxed), 6, 1);
lean_closure_set(v___f_2230_, 0, v_mvarId_2224_);
v___x_2231_ = l_Lean_MVarId_withContext___at___00Lean_Meta_introNCore_spec__2___redArg(v_mvarId_2224_, v___f_2230_, v_a_2225_, v_a_2226_, v_a_2227_, v_a_2228_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intro1___00__boxed(lean_object* v_mvarId_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lean_MVarId_intro1__(v_mvarId_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
lean_dec(v_a_2236_);
lean_dec_ref(v_a_2235_);
lean_dec(v_a_2234_);
lean_dec_ref(v_a_2233_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0(lean_object* v_00_u03b1_2239_, lean_object* v_msg_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___redArg(v_msg_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0___boxed(lean_object* v_00_u03b1_2247_, lean_object* v_msg_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_throwError___at___00Lean_MVarId_intro1___00spec__0(v_00_u03b1_2247_, v_msg_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getIntrosSize(lean_object* v_x_2255_){
_start:
{
switch(lean_obj_tag(v_x_2255_))
{
case 7:
{
lean_object* v_body_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_body_2256_ = lean_ctor_get(v_x_2255_, 2);
v___x_2257_ = l_Lean_Meta_getIntrosSize(v_body_2256_);
v___x_2258_ = lean_unsigned_to_nat(1u);
v___x_2259_ = lean_nat_add(v___x_2257_, v___x_2258_);
lean_dec(v___x_2257_);
return v___x_2259_;
}
case 8:
{
lean_object* v_body_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v_body_2260_ = lean_ctor_get(v_x_2255_, 3);
v___x_2261_ = l_Lean_Meta_getIntrosSize(v_body_2260_);
v___x_2262_ = lean_unsigned_to_nat(1u);
v___x_2263_ = lean_nat_add(v___x_2261_, v___x_2262_);
lean_dec(v___x_2261_);
return v___x_2263_;
}
case 10:
{
lean_object* v_expr_2264_; 
v_expr_2264_ = lean_ctor_get(v_x_2255_, 1);
v_x_2255_ = v_expr_2264_;
goto _start;
}
default: 
{
lean_object* v___x_2266_; 
v___x_2266_ = lean_unsigned_to_nat(0u);
return v___x_2266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getIntrosSize___boxed(lean_object* v_x_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lean_Meta_getIntrosSize(v_x_2267_);
lean_dec_ref(v_x_2267_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intros(lean_object* v_mvarId_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_){
_start:
{
lean_object* v___x_2275_; 
lean_inc(v_mvarId_2269_);
v___x_2275_ = l_Lean_MVarId_getType(v_mvarId_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v_a_2276_; lean_object* v___x_2277_; lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2292_; 
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v___x_2275_, 1);
v___x_2277_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp_loop___at___00Lean_Meta_introNCore_spec__0_spec__4___redArg(v_a_2276_, v_a_2271_);
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2282_ = l_Lean_Meta_getIntrosSize(v_a_2278_);
lean_dec(v_a_2278_);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = lean_nat_dec_eq(v___x_2282_, v___x_2283_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
lean_del_object(v___x_2280_);
v___x_2285_ = lean_box(0);
v___x_2286_ = l_Lean_Meta_introNCore(v_mvarId_2269_, v___x_2282_, v___x_2285_, v___x_2284_, v___x_2284_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_);
return v___x_2286_;
}
else
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2290_; 
lean_dec(v___x_2282_);
v___x_2287_ = ((lean_object*)(l_Lean_Meta_introNCore___closed__0));
v___x_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
lean_ctor_set(v___x_2288_, 1, v_mvarId_2269_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 0, v___x_2288_);
v___x_2290_ = v___x_2280_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec(v_mvarId_2269_);
v_a_2293_ = lean_ctor_get(v___x_2275_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2275_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2275_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2275_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_intros___boxed(lean_object* v_mvarId_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lean_MVarId_intros(v_mvarId_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
lean_dec(v_a_2305_);
lean_dec_ref(v_a_2304_);
lean_dec(v_a_2303_);
lean_dec_ref(v_a_2302_);
return v_res_2307_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Intro_3089346791____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_tactic_hygienic = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_tactic_hygienic);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Intro(builtin);
}
#ifdef __cplusplus
}
#endif

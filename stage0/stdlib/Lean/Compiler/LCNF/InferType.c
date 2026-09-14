// Lean compiler output
// Module: Lean.Compiler.LCNF.InferType
// Imports: public import Lean.Compiler.LCNF.PhaseExt public import Lean.Compiler.LCNF.OtherDecl import Init.Omega
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
lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_instantiateTypeLevelParams___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getOtherDeclType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_erasedExpr;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Level_normalize(lean_object*);
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
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t l_Lean_Expr_isAny(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateRevRangeArgs___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Level_isEquiv(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadNameGeneratorCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshFVarId___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_joinTypes(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isPredicateType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1;
static const lean_closure_object l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 218, 234, 194, 194, 57, 75, 5)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferConstType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__6_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__8;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__9_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__11;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__12_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__12_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__13_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__14;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__15_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__15_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__16_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__17;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__18_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__18_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__19 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__19_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__20;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_InferType_Pure_inferType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_InferType_Pure_inferType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLambdaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Compiler.LCNF.InferType.Pure.inferType"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Compiler.LCNF.InferType"};
static const lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferForallType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLambdaType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferArgType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferArgType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid projection"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__0;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__1_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__14;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferProjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferProjType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLetValueType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLetValueType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_inferAppType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Compiler.LCNF.inferAppType"};
static const lean_object* l_Lean_Compiler_LCNF_inferAppType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_inferAppType___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_inferAppType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Infer type for impure unimplemented"};
static const lean_object* l_Lean_Compiler_LCNF_inferAppType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_inferAppType___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_inferAppType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_inferAppType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferAppType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferAppType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Arg_inferType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Arg.inferType"};
static const lean_object* l_Lean_Compiler_LCNF_Arg_inferType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Arg_inferType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Arg_inferType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Arg_inferType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_inferType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.LetValue.inferType"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_inferType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_inferType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_inferType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_inferType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Code_inferType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Compiler.LCNF.Code.inferType"};
static const lean_object* l_Lean_Compiler_LCNF_Code_inferType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_inferType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_inferType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_inferType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferParamType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferParamType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkForallParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Compiler.LCNF.mkForallParams"};
static const lean_object* l_Lean_Compiler_LCNF_mkForallParams___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkForallParams___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkForallParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkForallParams___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkForallParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl_x27(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_mkCasesResultType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkCasesResultType___closed__0;
static const lean_string_object l_Lean_Compiler_LCNF_mkCasesResultType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`Code.bind` failed, empty `cases` found"};
static const lean_object* l_Lean_Compiler_LCNF_mkCasesResultType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkCasesResultType___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkCasesResultType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkCasesResultType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkCasesResultType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkCasesResultType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "_private.Lean.Compiler.LCNF.InferType.0.Lean.Compiler.LCNF.isErasedCompatible.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isErasedCompatible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isErasedCompatible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isEqv___at___00Lean_Compiler_LCNF_eqvTypes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEqv___at___00Lean_Compiler_LCNF_eqvTypes_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_eqvTypes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eqvTypes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getBinderName(lean_object* v_fvarId_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; 
lean_inc(v_fvarId_1_);
lean_inc_ref(v_a_2_);
v___x_8_ = lean_local_ctx_find(v_a_2_, v_fvarId_1_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_18_; 
lean_dec(v_fvarId_1_);
v_val_10_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_18_ == 0)
{
v___x_12_ = v___x_8_;
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_val_10_);
lean_dec(v___x_8_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
v___x_14_ = l_Lean_LocalDecl_userName(v_val_10_);
lean_dec(v_val_10_);
if (v_isShared_13_ == 0)
{
lean_ctor_set_tag(v___x_12_, 0);
lean_ctor_set(v___x_12_, 0, v___x_14_);
v___x_16_ = v___x_12_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_14_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getBinderName___boxed(lean_object* v_fvarId_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Compiler_LCNF_InferType_Pure_getBinderName(v_fvarId_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec_ref(v_a_20_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getType(lean_object* v_fvarId_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_){
_start:
{
lean_object* v___x_34_; 
lean_inc(v_fvarId_27_);
lean_inc_ref(v_a_28_);
v___x_34_ = lean_local_ctx_find(v_a_28_, v_fvarId_27_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Compiler_LCNF_getType(v_fvarId_27_, v_a_29_, v_a_30_, v_a_31_, v_a_32_);
return v___x_35_;
}
else
{
lean_object* v_val_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_44_; 
lean_dec(v_fvarId_27_);
v_val_36_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_44_ == 0)
{
v___x_38_ = v___x_34_;
v_isShared_39_ = v_isSharedCheck_44_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_val_36_);
lean_dec(v___x_34_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_44_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_40_; lean_object* v___x_42_; 
v___x_40_ = l_Lean_LocalDecl_type(v_val_36_);
lean_dec(v_val_36_);
if (v_isShared_39_ == 0)
{
lean_ctor_set_tag(v___x_38_, 0);
lean_ctor_set(v___x_38_, 0, v___x_40_);
v___x_42_ = v___x_38_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_40_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getType___boxed(lean_object* v_fvarId_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_Compiler_LCNF_InferType_Pure_getType(v_fvarId_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_a_46_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg(lean_object* v_xs_53_, lean_object* v_i_54_, lean_object* v_a_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v_zero_62_; uint8_t v_isZero_63_; 
v_zero_62_ = lean_unsigned_to_nat(0u);
v_isZero_63_ = lean_nat_dec_eq(v_i_54_, v_zero_62_);
if (v_isZero_63_ == 1)
{
lean_object* v___x_64_; 
lean_dec(v_i_54_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_a_55_);
return v___x_64_;
}
else
{
lean_object* v_one_65_; lean_object* v_n_66_; lean_object* v_x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_one_65_ = lean_unsigned_to_nat(1u);
v_n_66_ = lean_nat_sub(v_i_54_, v_one_65_);
lean_dec(v_i_54_);
v_x_67_ = lean_array_fget_borrowed(v_xs_53_, v_n_66_);
v___x_68_ = l_Lean_Expr_fvarId_x21(v_x_67_);
lean_inc(v___x_68_);
v___x_69_ = l_Lean_Compiler_LCNF_InferType_Pure_getBinderName(v___x_68_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_);
if (lean_obj_tag(v___x_69_) == 0)
{
lean_object* v_a_70_; lean_object* v___x_71_; 
v_a_70_ = lean_ctor_get(v___x_69_, 0);
lean_inc(v_a_70_);
lean_dec_ref_known(v___x_69_, 1);
v___x_71_ = l_Lean_Compiler_LCNF_InferType_Pure_getType(v___x_68_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_73_; uint8_t v___x_74_; lean_object* v___x_75_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_a_72_);
lean_dec_ref_known(v___x_71_, 1);
v___x_73_ = lean_expr_abstract_range(v_a_72_, v_n_66_, v_xs_53_);
lean_dec(v_a_72_);
v___x_74_ = 0;
v___x_75_ = l_Lean_Expr_forallE___override(v_a_70_, v___x_73_, v_a_55_, v___x_74_);
v_i_54_ = v_n_66_;
v_a_55_ = v___x_75_;
goto _start;
}
else
{
lean_dec(v_a_70_);
lean_dec_ref(v_a_55_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_77_; 
v_a_77_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_a_77_);
lean_dec_ref_known(v___x_71_, 1);
v_i_54_ = v_n_66_;
v_a_55_ = v_a_77_;
goto _start;
}
else
{
lean_dec(v_n_66_);
return v___x_71_;
}
}
}
else
{
lean_object* v_a_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_86_; 
lean_dec(v___x_68_);
lean_dec(v_n_66_);
lean_dec_ref(v_a_55_);
v_a_79_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_86_ == 0)
{
v___x_81_ = v___x_69_;
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_a_79_);
lean_dec(v___x_69_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
if (v_isShared_82_ == 0)
{
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_a_79_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg___boxed(lean_object* v_xs_87_, lean_object* v_i_88_, lean_object* v_a_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg(v_xs_87_, v_i_88_, v_a_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec_ref(v_xs_87_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars(lean_object* v_xs_97_, lean_object* v_type_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_b_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_b_105_ = lean_expr_abstract(v_type_98_, v_xs_97_);
v___x_106_ = lean_array_get_size(v_xs_97_);
v___x_107_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg(v_xs_97_, v___x_106_, v_b_105_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars___boxed(lean_object* v_xs_108_, lean_object* v_type_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars(v_xs_108_, v_type_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_);
lean_dec(v_a_114_);
lean_dec_ref(v_a_113_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec_ref(v_a_110_);
lean_dec_ref(v_type_109_);
lean_dec_ref(v_xs_108_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0(lean_object* v_xs_117_, lean_object* v_n_118_, lean_object* v_i_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___redArg(v_xs_117_, v_i_119_, v_a_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0___boxed(lean_object* v_xs_129_, lean_object* v_n_130_, lean_object* v_i_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallFVars_spec__0(v_xs_129_, v_n_130_, v_i_131_, v_a_132_, v_a_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v_n_130_);
lean_dec_ref(v_xs_129_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0(size_t v_sz_141_, size_t v_i_142_, lean_object* v_bs_143_){
_start:
{
uint8_t v___x_144_; 
v___x_144_ = lean_usize_dec_lt(v_i_142_, v_sz_141_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; 
v___x_145_ = l_unsafeCast___redArg(v_bs_143_);
lean_dec_ref(v_bs_143_);
return v___x_145_;
}
else
{
lean_object* v_v_146_; lean_object* v___x_147_; lean_object* v_fvarId_148_; lean_object* v___x_149_; lean_object* v_bs_x27_150_; lean_object* v___x_151_; size_t v___x_152_; size_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_v_146_ = lean_array_uget_borrowed(v_bs_143_, v_i_142_);
v___x_147_ = l_unsafeCast___redArg(v_v_146_);
v_fvarId_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_fvarId_148_);
lean_dec(v___x_147_);
v___x_149_ = lean_unsigned_to_nat(0u);
v_bs_x27_150_ = lean_array_uset(v_bs_143_, v_i_142_, v___x_149_);
v___x_151_ = l_Lean_Expr_fvar___override(v_fvarId_148_);
v___x_152_ = ((size_t)1ULL);
v___x_153_ = lean_usize_add(v_i_142_, v___x_152_);
v___x_154_ = l_unsafeCast___redArg(v___x_151_);
lean_dec_ref(v___x_151_);
v___x_155_ = lean_array_uset(v_bs_x27_150_, v_i_142_, v___x_154_);
v_i_142_ = v___x_153_;
v_bs_143_ = v___x_155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0___boxed(lean_object* v_sz_157_, lean_object* v_i_158_, lean_object* v_bs_159_){
_start:
{
size_t v_sz_boxed_160_; size_t v_i_boxed_161_; lean_object* v_res_162_; 
v_sz_boxed_160_ = lean_unbox_usize(v_sz_157_);
lean_dec(v_sz_157_);
v_i_boxed_161_ = lean_unbox_usize(v_i_158_);
lean_dec(v_i_158_);
v_res_162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0(v_sz_boxed_160_, v_i_boxed_161_, v_bs_159_);
return v_res_162_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__1(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_unsigned_to_nat(32u);
v___x_167_ = lean_mk_empty_array_with_capacity(v___x_166_);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3(void){
_start:
{
size_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_169_ = ((size_t)5ULL);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lean_unsigned_to_nat(32u);
v___x_172_ = lean_mk_empty_array_with_capacity(v___x_171_);
v___x_173_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__2, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__2);
v___x_174_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___x_170_);
lean_ctor_set(v___x_174_, 3, v___x_170_);
lean_ctor_set_usize(v___x_174_, 4, v___x_169_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_box(1);
v___x_176_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3);
v___x_177_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__1);
v___x_178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set(v___x_178_, 2, v___x_175_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg(lean_object* v_params_179_, lean_object* v_type_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
size_t v_sz_186_; size_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_xs_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v_sz_186_ = lean_array_size(v_params_179_);
v___x_187_ = ((size_t)0ULL);
v___x_188_ = l_unsafeCast___redArg(v_params_179_);
v___x_189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0(v_sz_186_, v___x_187_, v___x_188_);
v_xs_190_ = l_unsafeCast___redArg(v___x_189_);
lean_dec_ref(v___x_189_);
v___x_191_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_192_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars(v_xs_190_, v_type_180_, v___x_191_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_xs_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___boxed(lean_object* v_params_193_, lean_object* v_type_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg(v_params_193_, v_type_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
lean_dec(v_a_196_);
lean_dec_ref(v_a_195_);
lean_dec_ref(v_type_194_);
lean_dec_ref(v_params_193_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams(lean_object* v_params_201_, lean_object* v_type_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg(v_params_201_, v_type_202_, v_a_204_, v_a_205_, v_a_206_, v_a_207_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___boxed(lean_object* v_params_210_, lean_object* v_type_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams(v_params_210_, v_type_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
lean_dec(v_a_216_);
lean_dec_ref(v_a_215_);
lean_dec(v_a_214_);
lean_dec_ref(v_a_213_);
lean_dec_ref(v_a_212_);
lean_dec_ref(v_type_211_);
lean_dec_ref(v_params_210_);
return v_res_218_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__0(void){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_instMonadEIO___redArg();
return v___x_219_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__0, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__0);
v___x_221_ = l_StateRefT_x27_instMonad___redArg(v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__8(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = l_Lean_Core_instMonadNameGeneratorCoreM;
v___x_229_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__7));
v___x_230_ = l_Lean_monadNameGeneratorLift___redArg(v___x_229_, v___x_228_);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__9(void){
_start:
{
lean_object* v___x_231_; lean_object* v___f_232_; lean_object* v___x_233_; 
v___x_231_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__8, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__8);
v___f_232_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__6));
v___x_233_ = l_Lean_monadNameGeneratorLift___redArg(v___f_232_, v___x_231_);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10(void){
_start:
{
lean_object* v___x_234_; lean_object* v___f_235_; lean_object* v___x_236_; 
v___x_234_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__9, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__9);
v___f_235_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__6));
v___x_236_ = l_Lean_monadNameGeneratorLift___redArg(v___f_235_, v___x_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg(lean_object* v_binderName_237_, lean_object* v_type_238_, uint8_t v_binderInfo_239_, lean_object* v_k_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v___x_247_; lean_object* v_toApplicative_248_; lean_object* v_toFunctor_249_; lean_object* v_toSeq_250_; lean_object* v_toSeqLeft_251_; lean_object* v_toSeqRight_252_; lean_object* v___f_253_; lean_object* v___f_254_; lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___x_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_toApplicative_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_308_; 
v___x_247_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1);
v_toApplicative_248_ = lean_ctor_get(v___x_247_, 0);
v_toFunctor_249_ = lean_ctor_get(v_toApplicative_248_, 0);
v_toSeq_250_ = lean_ctor_get(v_toApplicative_248_, 2);
v_toSeqLeft_251_ = lean_ctor_get(v_toApplicative_248_, 3);
v_toSeqRight_252_ = lean_ctor_get(v_toApplicative_248_, 4);
v___f_253_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2));
v___f_254_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_249_, 2);
v___f_255_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_255_, 0, v_toFunctor_249_);
v___f_256_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_256_, 0, v_toFunctor_249_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v___f_255_);
lean_ctor_set(v___x_257_, 1, v___f_256_);
lean_inc(v_toSeqRight_252_);
v___f_258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_258_, 0, v_toSeqRight_252_);
lean_inc(v_toSeqLeft_251_);
v___f_259_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_259_, 0, v_toSeqLeft_251_);
lean_inc(v_toSeq_250_);
v___f_260_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_260_, 0, v_toSeq_250_);
v___x_261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_261_, 0, v___x_257_);
lean_ctor_set(v___x_261_, 1, v___f_253_);
lean_ctor_set(v___x_261_, 2, v___f_260_);
lean_ctor_set(v___x_261_, 3, v___f_259_);
lean_ctor_set(v___x_261_, 4, v___f_258_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___f_254_);
v___x_263_ = l_StateRefT_x27_instMonad___redArg(v___x_262_);
v_toApplicative_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v___x_263_, 1);
lean_dec(v_unused_309_);
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_308_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_toApplicative_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_308_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v_toFunctor_268_; lean_object* v_toSeq_269_; lean_object* v_toSeqLeft_270_; lean_object* v_toSeqRight_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_306_; 
v_toFunctor_268_ = lean_ctor_get(v_toApplicative_264_, 0);
v_toSeq_269_ = lean_ctor_get(v_toApplicative_264_, 2);
v_toSeqLeft_270_ = lean_ctor_get(v_toApplicative_264_, 3);
v_toSeqRight_271_ = lean_ctor_get(v_toApplicative_264_, 4);
v_isSharedCheck_306_ = !lean_is_exclusive(v_toApplicative_264_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; 
v_unused_307_ = lean_ctor_get(v_toApplicative_264_, 1);
lean_dec(v_unused_307_);
v___x_273_ = v_toApplicative_264_;
v_isShared_274_ = v_isSharedCheck_306_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_toSeqRight_271_);
lean_inc(v_toSeqLeft_270_);
lean_inc(v_toSeq_269_);
lean_inc(v_toFunctor_268_);
lean_dec(v_toApplicative_264_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_306_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___f_278_; lean_object* v___x_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___f_282_; lean_object* v___x_284_; 
v___f_275_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__4));
v___f_276_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__5));
lean_inc_ref(v_toFunctor_268_);
v___f_277_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_277_, 0, v_toFunctor_268_);
v___f_278_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_278_, 0, v_toFunctor_268_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v___f_277_);
lean_ctor_set(v___x_279_, 1, v___f_278_);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_280_, 0, v_toSeqRight_271_);
v___f_281_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_281_, 0, v_toSeqLeft_270_);
v___f_282_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_282_, 0, v_toSeq_269_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 4, v___f_280_);
lean_ctor_set(v___x_273_, 3, v___f_281_);
lean_ctor_set(v___x_273_, 2, v___f_282_);
lean_ctor_set(v___x_273_, 1, v___f_275_);
lean_ctor_set(v___x_273_, 0, v___x_279_);
v___x_284_ = v___x_273_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v___f_275_);
lean_ctor_set(v_reuseFailAlloc_305_, 2, v___f_282_);
lean_ctor_set(v_reuseFailAlloc_305_, 3, v___f_281_);
lean_ctor_set(v_reuseFailAlloc_305_, 4, v___f_280_);
v___x_284_ = v_reuseFailAlloc_305_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_286_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v___f_276_);
lean_ctor_set(v___x_266_, 0, v___x_284_);
v___x_286_ = v___x_266_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___f_276_);
v___x_286_ = v_reuseFailAlloc_304_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_198__overap_289_; lean_object* v___x_290_; 
v___x_287_ = l_ReaderT_instMonad___redArg(v___x_286_);
v___x_288_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10);
v___x_198__overap_289_ = l_Lean_mkFreshFVarId___redArg(v___x_287_, v___x_288_);
lean_inc(v_a_245_);
lean_inc_ref(v_a_244_);
lean_inc(v_a_243_);
lean_inc_ref(v_a_242_);
lean_inc_ref(v_a_241_);
v___x_290_ = lean_apply_6(v___x_198__overap_289_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, lean_box(0));
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc_n(v_a_291_, 2);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = l_Lean_Expr_fvar___override(v_a_291_);
v___x_293_ = 0;
lean_inc_ref(v_a_241_);
v___x_294_ = l_Lean_LocalContext_mkLocalDecl(v_a_241_, v_a_291_, v_binderName_237_, v_type_238_, v_binderInfo_239_, v___x_293_);
lean_inc(v_a_245_);
lean_inc_ref(v_a_244_);
lean_inc(v_a_243_);
lean_inc_ref(v_a_242_);
v___x_295_ = lean_apply_7(v_k_240_, v___x_292_, v___x_294_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, lean_box(0));
return v___x_295_;
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec_ref(v_k_240_);
lean_dec_ref(v_type_238_);
lean_dec(v_binderName_237_);
v_a_296_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_290_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_290_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___boxed(lean_object* v_binderName_310_, lean_object* v_type_311_, lean_object* v_binderInfo_312_, lean_object* v_k_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
uint8_t v_binderInfo_boxed_320_; lean_object* v_res_321_; 
v_binderInfo_boxed_320_ = lean_unbox(v_binderInfo_312_);
v_res_321_ = l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg(v_binderName_310_, v_type_311_, v_binderInfo_boxed_320_, v_k_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
lean_dec(v_a_316_);
lean_dec_ref(v_a_315_);
lean_dec_ref(v_a_314_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl(lean_object* v_00_u03b1_322_, lean_object* v_binderName_323_, lean_object* v_type_324_, uint8_t v_binderInfo_325_, lean_object* v_k_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v___x_333_; lean_object* v_toApplicative_334_; lean_object* v_toFunctor_335_; lean_object* v_toSeq_336_; lean_object* v_toSeqLeft_337_; lean_object* v_toSeqRight_338_; lean_object* v___f_339_; lean_object* v___f_340_; lean_object* v___f_341_; lean_object* v___f_342_; lean_object* v___x_343_; lean_object* v___f_344_; lean_object* v___f_345_; lean_object* v___f_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v_toApplicative_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_394_; 
v___x_333_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1);
v_toApplicative_334_ = lean_ctor_get(v___x_333_, 0);
v_toFunctor_335_ = lean_ctor_get(v_toApplicative_334_, 0);
v_toSeq_336_ = lean_ctor_get(v_toApplicative_334_, 2);
v_toSeqLeft_337_ = lean_ctor_get(v_toApplicative_334_, 3);
v_toSeqRight_338_ = lean_ctor_get(v_toApplicative_334_, 4);
v___f_339_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2));
v___f_340_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_335_, 2);
v___f_341_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_341_, 0, v_toFunctor_335_);
v___f_342_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_342_, 0, v_toFunctor_335_);
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v___f_341_);
lean_ctor_set(v___x_343_, 1, v___f_342_);
lean_inc(v_toSeqRight_338_);
v___f_344_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_344_, 0, v_toSeqRight_338_);
lean_inc(v_toSeqLeft_337_);
v___f_345_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_345_, 0, v_toSeqLeft_337_);
lean_inc(v_toSeq_336_);
v___f_346_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_346_, 0, v_toSeq_336_);
v___x_347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_347_, 0, v___x_343_);
lean_ctor_set(v___x_347_, 1, v___f_339_);
lean_ctor_set(v___x_347_, 2, v___f_346_);
lean_ctor_set(v___x_347_, 3, v___f_345_);
lean_ctor_set(v___x_347_, 4, v___f_344_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v___f_340_);
v___x_349_ = l_StateRefT_x27_instMonad___redArg(v___x_348_);
v_toApplicative_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; 
v_unused_395_ = lean_ctor_get(v___x_349_, 1);
lean_dec(v_unused_395_);
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_394_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_toApplicative_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_394_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v_toFunctor_354_; lean_object* v_toSeq_355_; lean_object* v_toSeqLeft_356_; lean_object* v_toSeqRight_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_392_; 
v_toFunctor_354_ = lean_ctor_get(v_toApplicative_350_, 0);
v_toSeq_355_ = lean_ctor_get(v_toApplicative_350_, 2);
v_toSeqLeft_356_ = lean_ctor_get(v_toApplicative_350_, 3);
v_toSeqRight_357_ = lean_ctor_get(v_toApplicative_350_, 4);
v_isSharedCheck_392_ = !lean_is_exclusive(v_toApplicative_350_);
if (v_isSharedCheck_392_ == 0)
{
lean_object* v_unused_393_; 
v_unused_393_ = lean_ctor_get(v_toApplicative_350_, 1);
lean_dec(v_unused_393_);
v___x_359_ = v_toApplicative_350_;
v_isShared_360_ = v_isSharedCheck_392_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_toSeqRight_357_);
lean_inc(v_toSeqLeft_356_);
lean_inc(v_toSeq_355_);
lean_inc(v_toFunctor_354_);
lean_dec(v_toApplicative_350_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_392_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___f_361_; lean_object* v___f_362_; lean_object* v___f_363_; lean_object* v___f_364_; lean_object* v___x_365_; lean_object* v___f_366_; lean_object* v___f_367_; lean_object* v___f_368_; lean_object* v___x_370_; 
v___f_361_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__4));
v___f_362_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__5));
lean_inc_ref(v_toFunctor_354_);
v___f_363_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_363_, 0, v_toFunctor_354_);
v___f_364_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_364_, 0, v_toFunctor_354_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v___f_363_);
lean_ctor_set(v___x_365_, 1, v___f_364_);
v___f_366_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_366_, 0, v_toSeqRight_357_);
v___f_367_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_367_, 0, v_toSeqLeft_356_);
v___f_368_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_368_, 0, v_toSeq_355_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 4, v___f_366_);
lean_ctor_set(v___x_359_, 3, v___f_367_);
lean_ctor_set(v___x_359_, 2, v___f_368_);
lean_ctor_set(v___x_359_, 1, v___f_361_);
lean_ctor_set(v___x_359_, 0, v___x_365_);
v___x_370_ = v___x_359_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v___f_361_);
lean_ctor_set(v_reuseFailAlloc_391_, 2, v___f_368_);
lean_ctor_set(v_reuseFailAlloc_391_, 3, v___f_367_);
lean_ctor_set(v_reuseFailAlloc_391_, 4, v___f_366_);
v___x_370_ = v_reuseFailAlloc_391_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_372_; 
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 1, v___f_362_);
lean_ctor_set(v___x_352_, 0, v___x_370_);
v___x_372_ = v___x_352_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v___f_362_);
v___x_372_ = v_reuseFailAlloc_390_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_232__overap_375_; lean_object* v___x_376_; 
v___x_373_ = l_ReaderT_instMonad___redArg(v___x_372_);
v___x_374_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__10);
v___x_232__overap_375_ = l_Lean_mkFreshFVarId___redArg(v___x_373_, v___x_374_);
lean_inc(v_a_331_);
lean_inc_ref(v_a_330_);
lean_inc(v_a_329_);
lean_inc_ref(v_a_328_);
lean_inc_ref(v_a_327_);
v___x_376_ = lean_apply_6(v___x_232__overap_375_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, lean_box(0));
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_378_; uint8_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc_n(v_a_377_, 2);
lean_dec_ref_known(v___x_376_, 1);
v___x_378_ = l_Lean_Expr_fvar___override(v_a_377_);
v___x_379_ = 0;
lean_inc_ref(v_a_327_);
v___x_380_ = l_Lean_LocalContext_mkLocalDecl(v_a_327_, v_a_377_, v_binderName_323_, v_type_324_, v_binderInfo_325_, v___x_379_);
lean_inc(v_a_331_);
lean_inc_ref(v_a_330_);
lean_inc(v_a_329_);
lean_inc_ref(v_a_328_);
v___x_381_ = lean_apply_7(v_k_326_, v___x_378_, v___x_380_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, lean_box(0));
return v___x_381_;
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
lean_dec_ref(v_k_326_);
lean_dec_ref(v_type_324_);
lean_dec(v_binderName_323_);
v_a_382_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_376_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_376_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___boxed(lean_object* v_00_u03b1_396_, lean_object* v_binderName_397_, lean_object* v_type_398_, lean_object* v_binderInfo_399_, lean_object* v_k_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
uint8_t v_binderInfo_boxed_407_; lean_object* v_res_408_; 
v_binderInfo_boxed_407_ = lean_unbox(v_binderInfo_399_);
v_res_408_ = l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl(v_00_u03b1_396_, v_binderName_397_, v_type_398_, v_binderInfo_boxed_407_, v_k_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
lean_dec_ref(v_a_401_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferConstType(lean_object* v_declName_412_, lean_object* v_us_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_419_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___closed__1));
v___x_420_ = lean_name_eq(v_declName_412_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_414_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; uint8_t v___x_423_; lean_object* v___x_424_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___x_421_, 1);
v___x_423_ = lean_unbox(v_a_422_);
lean_dec(v_a_422_);
lean_inc(v_declName_412_);
v___x_424_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_412_, v___x_423_, v_a_416_, v_a_417_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_435_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_435_ == 0)
{
v___x_427_ = v___x_424_;
v_isShared_428_ = v_isSharedCheck_435_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_435_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
if (lean_obj_tag(v_a_425_) == 1)
{
lean_object* v_val_429_; lean_object* v___x_430_; lean_object* v___x_432_; 
lean_dec(v_declName_412_);
v_val_429_ = lean_ctor_get(v_a_425_, 0);
lean_inc(v_val_429_);
lean_dec_ref_known(v_a_425_, 1);
v___x_430_ = l_Lean_Compiler_LCNF_Decl_instantiateTypeLevelParams___redArg(v_val_429_, v_us_413_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_430_);
v___x_432_ = v___x_427_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
else
{
lean_object* v___x_434_; 
lean_del_object(v___x_427_);
lean_dec(v_a_425_);
v___x_434_ = l_Lean_Compiler_LCNF_getOtherDeclType(v_declName_412_, v_us_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_);
return v___x_434_;
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec(v_us_413_);
lean_dec(v_declName_412_);
v_a_436_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_424_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_424_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
lean_dec(v_us_413_);
lean_dec(v_declName_412_);
v_a_444_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_421_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_421_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; 
lean_dec(v_us_413_);
lean_dec(v_declName_412_);
v___x_452_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferConstType___boxed(lean_object* v_declName_454_, lean_object* v_us_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_Compiler_LCNF_InferType_Pure_inferConstType(v_declName_454_, v_us_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_);
lean_dec(v_a_459_);
lean_dec_ref(v_a_458_);
lean_dec(v_a_457_);
lean_dec_ref(v_a_456_);
return v_res_461_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__2(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_box(0);
v___x_466_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__1));
v___x_467_ = l_Lean_mkConst(v___x_466_, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__5(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_box(0);
v___x_472_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__4));
v___x_473_ = l_Lean_mkConst(v___x_472_, v___x_471_);
return v___x_473_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__8(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = lean_box(0);
v___x_478_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__7));
v___x_479_ = l_Lean_mkConst(v___x_478_, v___x_477_);
return v___x_479_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__11(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_box(0);
v___x_484_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__10));
v___x_485_ = l_Lean_mkConst(v___x_484_, v___x_483_);
return v___x_485_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__14(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_box(0);
v___x_490_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__13));
v___x_491_ = l_Lean_mkConst(v___x_490_, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__17(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_box(0);
v___x_496_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__16));
v___x_497_ = l_Lean_mkConst(v___x_496_, v___x_495_);
return v___x_497_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__20(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_box(0);
v___x_502_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__19));
v___x_503_ = l_Lean_mkConst(v___x_502_, v___x_501_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType(lean_object* v_value_504_){
_start:
{
switch(lean_obj_tag(v_value_504_))
{
case 0:
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__2, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__2_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__2);
return v___x_505_;
}
case 1:
{
lean_object* v___x_506_; 
v___x_506_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__5, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__5_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__5);
return v___x_506_;
}
case 2:
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__8, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__8_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__8);
return v___x_507_;
}
case 3:
{
lean_object* v___x_508_; 
v___x_508_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__11, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__11_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__11);
return v___x_508_;
}
case 4:
{
lean_object* v___x_509_; 
v___x_509_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__14, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__14_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__14);
return v___x_509_;
}
case 5:
{
lean_object* v___x_510_; 
v___x_510_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__17, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__17_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__17);
return v___x_510_;
}
default: 
{
lean_object* v___x_511_; 
v___x_511_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__20, &l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__20_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___closed__20);
return v___x_511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType___boxed(lean_object* v_value_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType(v_value_512_);
lean_dec_ref(v_value_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg(lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; lean_object* v_ngen_517_; lean_object* v_namePrefix_518_; lean_object* v_idx_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_548_; 
v___x_516_ = lean_st_ref_get(v___y_514_);
v_ngen_517_ = lean_ctor_get(v___x_516_, 2);
lean_inc_ref(v_ngen_517_);
lean_dec(v___x_516_);
v_namePrefix_518_ = lean_ctor_get(v_ngen_517_, 0);
v_idx_519_ = lean_ctor_get(v_ngen_517_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v_ngen_517_);
if (v_isSharedCheck_548_ == 0)
{
v___x_521_ = v_ngen_517_;
v_isShared_522_ = v_isSharedCheck_548_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_idx_519_);
lean_inc(v_namePrefix_518_);
lean_dec(v_ngen_517_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_548_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v_r_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
lean_inc(v_idx_519_);
lean_inc(v_namePrefix_518_);
v_r_523_ = l_Lean_Name_num___override(v_namePrefix_518_, v_idx_519_);
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = lean_nat_add(v_idx_519_, v___x_524_);
lean_dec(v_idx_519_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_525_);
v___x_527_ = v___x_521_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_namePrefix_518_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v___x_525_);
v___x_527_ = v_reuseFailAlloc_547_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_528_; lean_object* v_env_529_; lean_object* v_nextMacroScope_530_; lean_object* v_auxDeclNGen_531_; lean_object* v_traceState_532_; lean_object* v_cache_533_; lean_object* v_messages_534_; lean_object* v_infoState_535_; lean_object* v_snapshotTasks_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_545_; 
v___x_528_ = lean_st_ref_take(v___y_514_);
v_env_529_ = lean_ctor_get(v___x_528_, 0);
v_nextMacroScope_530_ = lean_ctor_get(v___x_528_, 1);
v_auxDeclNGen_531_ = lean_ctor_get(v___x_528_, 3);
v_traceState_532_ = lean_ctor_get(v___x_528_, 4);
v_cache_533_ = lean_ctor_get(v___x_528_, 5);
v_messages_534_ = lean_ctor_get(v___x_528_, 6);
v_infoState_535_ = lean_ctor_get(v___x_528_, 7);
v_snapshotTasks_536_ = lean_ctor_get(v___x_528_, 8);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v___x_528_, 2);
lean_dec(v_unused_546_);
v___x_538_ = v___x_528_;
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snapshotTasks_536_);
lean_inc(v_infoState_535_);
lean_inc(v_messages_534_);
lean_inc(v_cache_533_);
lean_inc(v_traceState_532_);
lean_inc(v_auxDeclNGen_531_);
lean_inc(v_nextMacroScope_530_);
lean_inc(v_env_529_);
lean_dec(v___x_528_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 2, v___x_527_);
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_env_529_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_nextMacroScope_530_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_auxDeclNGen_531_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v_traceState_532_);
lean_ctor_set(v_reuseFailAlloc_544_, 5, v_cache_533_);
lean_ctor_set(v_reuseFailAlloc_544_, 6, v_messages_534_);
lean_ctor_set(v_reuseFailAlloc_544_, 7, v_infoState_535_);
lean_ctor_set(v_reuseFailAlloc_544_, 8, v_snapshotTasks_536_);
v___x_541_ = v_reuseFailAlloc_544_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_st_ref_put(v___y_514_, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v_r_523_);
return v___x_543_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg___boxed(lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg(v___y_549_);
lean_dec(v___y_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0(lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v___x_558_; lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
v___x_558_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg(v___y_556_);
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0___boxed(lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0(v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec_ref(v___y_567_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_InferType_Pure_inferType_spec__2(lean_object* v_msg_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; lean_object* v_toApplicative_582_; lean_object* v_toFunctor_583_; lean_object* v_toSeq_584_; lean_object* v_toSeqLeft_585_; lean_object* v_toSeqRight_586_; lean_object* v___f_587_; lean_object* v___f_588_; lean_object* v___f_589_; lean_object* v___f_590_; lean_object* v___x_591_; lean_object* v___f_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___f_600_; lean_object* v___f_601_; lean_object* v___x_6782__overap_602_; lean_object* v___x_603_; 
v___x_581_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1);
v_toApplicative_582_ = lean_ctor_get(v___x_581_, 0);
v_toFunctor_583_ = lean_ctor_get(v_toApplicative_582_, 0);
v_toSeq_584_ = lean_ctor_get(v_toApplicative_582_, 2);
v_toSeqLeft_585_ = lean_ctor_get(v_toApplicative_582_, 3);
v_toSeqRight_586_ = lean_ctor_get(v_toApplicative_582_, 4);
v___f_587_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2));
v___f_588_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_583_, 2);
v___f_589_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_589_, 0, v_toFunctor_583_);
v___f_590_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_590_, 0, v_toFunctor_583_);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v___f_589_);
lean_ctor_set(v___x_591_, 1, v___f_590_);
lean_inc(v_toSeqRight_586_);
v___f_592_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_592_, 0, v_toSeqRight_586_);
lean_inc(v_toSeqLeft_585_);
v___f_593_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_593_, 0, v_toSeqLeft_585_);
lean_inc(v_toSeq_584_);
v___f_594_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_594_, 0, v_toSeq_584_);
v___x_595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_595_, 0, v___x_591_);
lean_ctor_set(v___x_595_, 1, v___f_587_);
lean_ctor_set(v___x_595_, 2, v___f_594_);
lean_ctor_set(v___x_595_, 3, v___f_593_);
lean_ctor_set(v___x_595_, 4, v___f_592_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___f_588_);
v___x_597_ = l_StateRefT_x27_instMonad___redArg(v___x_596_);
v___x_598_ = l_Lean_instInhabitedExpr;
v___x_599_ = l_instInhabitedOfMonad___redArg(v___x_597_, v___x_598_);
v___f_600_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_600_, 0, v___x_599_);
v___f_601_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_601_, 0, v___f_600_);
v___x_6782__overap_602_ = lean_panic_fn_borrowed(v___f_601_, v_msg_574_);
lean_dec_ref(v___f_601_);
lean_inc(v___y_579_);
lean_inc_ref(v___y_578_);
lean_inc(v___y_577_);
lean_inc_ref(v___y_576_);
lean_inc_ref(v___y_575_);
v___x_603_ = lean_apply_6(v___x_6782__overap_602_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, lean_box(0));
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_InferType_Pure_inferType_spec__2___boxed(lean_object* v_msg_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_panic___at___00Lean_Compiler_LCNF_InferType_Pure_inferType_spec__2(v_msg_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec_ref(v___y_605_);
return v_res_611_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg(lean_object* v_upperBound_614_, lean_object* v___x_615_, lean_object* v_a_616_, lean_object* v_b_617_){
_start:
{
lean_object* v_a_620_; uint8_t v___x_624_; 
v___x_624_ = lean_nat_dec_lt(v_a_616_, v_upperBound_614_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
lean_dec(v_a_616_);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v_b_617_);
return v___x_625_;
}
else
{
lean_object* v_snd_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_662_; 
v_snd_626_ = lean_ctor_get(v_b_617_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_b_617_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; 
v_unused_663_ = lean_ctor_get(v_b_617_, 0);
lean_dec(v_unused_663_);
v___x_628_ = v_b_617_;
v_isShared_629_ = v_isSharedCheck_662_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_snd_626_);
lean_dec(v_b_617_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_662_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v_fst_630_; lean_object* v_snd_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_661_; 
v_fst_630_ = lean_ctor_get(v_snd_626_, 0);
v_snd_631_ = lean_ctor_get(v_snd_626_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_snd_626_);
if (v_isSharedCheck_661_ == 0)
{
v___x_633_ = v_snd_626_;
v_isShared_634_ = v_isSharedCheck_661_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_snd_631_);
lean_inc(v_fst_630_);
lean_dec(v_snd_626_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_661_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_box(0);
v___x_636_ = l_Lean_Expr_headBeta(v_snd_631_);
if (lean_obj_tag(v___x_636_) == 7)
{
lean_object* v_body_637_; lean_object* v___x_639_; 
v_body_637_ = lean_ctor_get(v___x_636_, 2);
lean_inc_ref(v_body_637_);
lean_dec_ref_known(v___x_636_, 3);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v_body_637_);
v___x_639_ = v___x_633_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_fst_630_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_body_637_);
v___x_639_ = v_reuseFailAlloc_643_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_641_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_639_);
lean_ctor_set(v___x_628_, 0, v___x_635_);
v___x_641_ = v___x_628_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v___x_639_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
v_a_620_ = v___x_641_;
goto v___jp_619_;
}
}
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_expr_instantiate_rev_range(v___x_636_, v_fst_630_, v_a_616_, v___x_615_);
lean_dec_ref(v___x_636_);
v___x_645_ = l_Lean_Expr_headBeta(v___x_644_);
if (lean_obj_tag(v___x_645_) == 7)
{
lean_object* v_body_646_; lean_object* v___x_648_; 
lean_dec(v_fst_630_);
v_body_646_ = lean_ctor_get(v___x_645_, 2);
lean_inc_ref(v_body_646_);
lean_dec_ref_known(v___x_645_, 3);
lean_inc(v_a_616_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v_body_646_);
lean_ctor_set(v___x_633_, 0, v_a_616_);
v___x_648_ = v___x_633_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_616_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_body_646_);
v___x_648_ = v_reuseFailAlloc_652_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_650_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_648_);
lean_ctor_set(v___x_628_, 0, v___x_635_);
v___x_650_ = v___x_628_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
v_a_620_ = v___x_650_;
goto v___jp_619_;
}
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_655_; 
lean_dec(v_a_616_);
v___x_653_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v___x_645_);
v___x_655_ = v___x_633_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_fst_630_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v___x_645_);
v___x_655_ = v_reuseFailAlloc_660_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_657_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_655_);
lean_ctor_set(v___x_628_, 0, v___x_653_);
v___x_657_ = v___x_628_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_653_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v___x_655_);
v___x_657_ = v_reuseFailAlloc_659_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
}
}
}
}
}
v___jp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_unsigned_to_nat(1u);
v___x_622_ = lean_nat_add(v_a_616_, v___x_621_);
lean_dec(v_a_616_);
v_a_616_ = v___x_622_;
v_b_617_ = v_a_620_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___boxed(lean_object* v_upperBound_664_, lean_object* v___x_665_, lean_object* v_a_666_, lean_object* v_b_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg(v_upperBound_664_, v___x_665_, v_a_666_, v_b_667_);
lean_dec_ref(v___x_665_);
lean_dec(v_upperBound_664_);
return v_res_669_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__0(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_box(0);
v___x_673_ = l_unsafeCast___redArg(v___x_672_);
return v___x_673_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1(void){
_start:
{
lean_object* v___x_674_; lean_object* v_dummy_675_; 
v___x_674_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__0, &l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__0_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__0);
v_dummy_675_ = l_Lean_Expr_sort___override(v___x_674_);
return v_dummy_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppType(lean_object* v_e_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_j_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_j_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = l_Lean_Expr_getAppFn(v_e_676_);
v___x_685_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v___x_684_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v_dummy_687_; lean_object* v_nargs_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_685_, 1);
v_dummy_687_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1);
v_nargs_688_ = l_Lean_Expr_getAppNumArgs(v_e_676_);
lean_inc(v_nargs_688_);
v___x_689_ = lean_mk_array(v_nargs_688_, v_dummy_687_);
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_sub(v_nargs_688_, v___x_690_);
lean_dec(v_nargs_688_);
v___x_692_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_676_, v___x_689_, v___x_691_);
v___x_693_ = lean_array_get_size(v___x_692_);
v___x_694_ = lean_box(0);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_j_683_);
lean_ctor_set(v___x_695_, 1, v_a_686_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg(v___x_693_, v___x_692_, v_j_683_, v___x_696_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_715_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_715_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_715_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_715_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v_fst_702_; 
v_fst_702_ = lean_ctor_get(v_a_698_, 0);
if (lean_obj_tag(v_fst_702_) == 0)
{
lean_object* v_snd_703_; lean_object* v_fst_704_; lean_object* v_snd_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_709_; 
v_snd_703_ = lean_ctor_get(v_a_698_, 1);
lean_inc(v_snd_703_);
lean_dec(v_a_698_);
v_fst_704_ = lean_ctor_get(v_snd_703_, 0);
lean_inc(v_fst_704_);
v_snd_705_ = lean_ctor_get(v_snd_703_, 1);
lean_inc(v_snd_705_);
lean_dec(v_snd_703_);
v___x_706_ = lean_expr_instantiate_rev_range(v_snd_705_, v_fst_704_, v___x_693_, v___x_692_);
lean_dec_ref(v___x_692_);
lean_dec(v_fst_704_);
lean_dec(v_snd_705_);
v___x_707_ = l_Lean_Expr_headBeta(v___x_706_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_707_);
v___x_709_ = v___x_700_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
else
{
lean_object* v_val_711_; lean_object* v___x_713_; 
lean_inc_ref(v_fst_702_);
lean_dec(v_a_698_);
lean_dec_ref(v___x_692_);
v_val_711_ = lean_ctor_get(v_fst_702_, 0);
lean_inc(v_val_711_);
lean_dec_ref_known(v_fst_702_, 1);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v_val_711_);
v___x_713_ = v___x_700_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_val_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref(v___x_692_);
v_a_716_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_697_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_697_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
else
{
lean_dec_ref(v_e_676_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go(lean_object* v_e_724_, lean_object* v_fvars_725_, lean_object* v_all_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
switch(lean_obj_tag(v_e_724_))
{
case 6:
{
lean_object* v_binderName_733_; lean_object* v_binderType_734_; lean_object* v_body_735_; uint8_t v_binderInfo_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_binderName_733_ = lean_ctor_get(v_e_724_, 0);
lean_inc(v_binderName_733_);
v_binderType_734_ = lean_ctor_get(v_e_724_, 1);
lean_inc_ref(v_binderType_734_);
v_body_735_ = lean_ctor_get(v_e_724_, 2);
lean_inc_ref(v_body_735_);
v_binderInfo_736_ = lean_ctor_get_uint8(v_e_724_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_724_, 3);
v___x_737_ = lean_expr_instantiate_rev(v_binderType_734_, v_all_726_);
lean_dec_ref(v_binderType_734_);
v___x_738_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0(v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_740_; uint8_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc_n(v_a_739_, 2);
lean_dec_ref_known(v___x_738_, 1);
v___x_740_ = l_Lean_Expr_fvar___override(v_a_739_);
v___x_741_ = 0;
v___x_742_ = l_Lean_LocalContext_mkLocalDecl(v_a_727_, v_a_739_, v_binderName_733_, v___x_737_, v_binderInfo_736_, v___x_741_);
lean_inc_ref(v___x_740_);
v___x_743_ = lean_array_push(v_fvars_725_, v___x_740_);
v___x_744_ = lean_array_push(v_all_726_, v___x_740_);
v_e_724_ = v_body_735_;
v_fvars_725_ = v___x_743_;
v_all_726_ = v___x_744_;
v_a_727_ = v___x_742_;
goto _start;
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec_ref(v___x_737_);
lean_dec_ref(v_body_735_);
lean_dec(v_binderName_733_);
lean_dec_ref(v_a_727_);
lean_dec_ref(v_all_726_);
lean_dec_ref(v_fvars_725_);
v_a_746_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_738_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_738_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
case 8:
{
lean_object* v_declName_754_; lean_object* v_type_755_; lean_object* v_body_756_; lean_object* v___x_757_; uint8_t v___x_758_; lean_object* v___x_759_; 
v_declName_754_ = lean_ctor_get(v_e_724_, 0);
lean_inc(v_declName_754_);
v_type_755_ = lean_ctor_get(v_e_724_, 1);
lean_inc_ref(v_type_755_);
v_body_756_ = lean_ctor_get(v_e_724_, 3);
lean_inc_ref(v_body_756_);
lean_dec_ref_known(v_e_724_, 4);
v___x_757_ = lean_expr_instantiate_rev(v_type_755_, v_all_726_);
lean_dec_ref(v_type_755_);
v___x_758_ = 0;
v___x_759_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0(v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; uint8_t v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc_n(v_a_760_, 2);
lean_dec_ref_known(v___x_759_, 1);
v___x_761_ = l_Lean_Expr_fvar___override(v_a_760_);
v___x_762_ = 0;
v___x_763_ = l_Lean_LocalContext_mkLocalDecl(v_a_727_, v_a_760_, v_declName_754_, v___x_757_, v___x_758_, v___x_762_);
v___x_764_ = lean_array_push(v_all_726_, v___x_761_);
v_e_724_ = v_body_756_;
v_all_726_ = v___x_764_;
v_a_727_ = v___x_763_;
goto _start;
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec_ref(v___x_757_);
lean_dec_ref(v_body_756_);
lean_dec(v_declName_754_);
lean_dec_ref(v_a_727_);
lean_dec_ref(v_all_726_);
lean_dec_ref(v_fvars_725_);
v_a_766_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_759_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_759_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
default: 
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_expr_instantiate_rev(v_e_724_, v_all_726_);
lean_dec_ref(v_all_726_);
lean_dec_ref(v_e_724_);
v___x_775_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v___x_774_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_777_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_775_, 1);
v___x_777_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars(v_fvars_725_, v_a_776_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
lean_dec_ref(v_a_727_);
lean_dec(v_a_776_);
lean_dec_ref(v_fvars_725_);
return v___x_777_;
}
else
{
lean_dec_ref(v_a_727_);
lean_dec_ref(v_fvars_725_);
return v___x_775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLambdaType(lean_object* v_e_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___closed__0));
lean_inc_ref(v_a_779_);
v___x_786_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go(v_e_778_, v___x_785_, v___x_785_, v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_);
return v___x_786_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__3(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_790_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__2));
v___x_791_ = lean_unsigned_to_nat(73u);
v___x_792_ = lean_unsigned_to_nat(135u);
v___x_793_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__1));
v___x_794_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_795_ = l_mkPanicMessageWithDecl(v___x_794_, v___x_793_, v___x_792_, v___x_791_, v___x_790_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType(lean_object* v_e_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
switch(lean_obj_tag(v_e_796_))
{
case 1:
{
lean_object* v_fvarId_803_; lean_object* v___x_804_; 
v_fvarId_803_ = lean_ctor_get(v_e_796_, 0);
lean_inc(v_fvarId_803_);
lean_dec_ref_known(v_e_796_, 1);
v___x_804_ = l_Lean_Compiler_LCNF_InferType_Pure_getType(v_fvarId_803_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_804_;
}
case 3:
{
lean_object* v_u_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_u_805_ = lean_ctor_get(v_e_796_, 0);
lean_inc(v_u_805_);
lean_dec_ref_known(v_e_796_, 1);
v___x_806_ = l_Lean_Level_succ___override(v_u_805_);
v___x_807_ = l_Lean_Expr_sort___override(v___x_806_);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
case 4:
{
lean_object* v_declName_809_; lean_object* v_us_810_; lean_object* v___x_811_; 
v_declName_809_ = lean_ctor_get(v_e_796_, 0);
lean_inc(v_declName_809_);
v_us_810_ = lean_ctor_get(v_e_796_, 1);
lean_inc(v_us_810_);
lean_dec_ref_known(v_e_796_, 2);
v___x_811_ = l_Lean_Compiler_LCNF_InferType_Pure_inferConstType(v_declName_809_, v_us_810_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_811_;
}
case 5:
{
lean_object* v___x_812_; 
v___x_812_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppType(v_e_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_812_;
}
case 6:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_Compiler_LCNF_InferType_Pure_inferLambdaType(v_e_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_813_;
}
case 7:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_Compiler_LCNF_InferType_Pure_inferForallType(v_e_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_814_;
}
default: 
{
lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec_ref(v_e_796_);
v___x_815_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__3, &l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__3_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__3);
v___x_816_ = l_panic___at___00Lean_Compiler_LCNF_InferType_Pure_inferType_spec__2(v___x_815_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f(lean_object* v_type_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v_type_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_838_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_838_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_838_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_838_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
if (lean_obj_tag(v_a_825_) == 3)
{
lean_object* v_u_829_; lean_object* v___x_830_; lean_object* v___x_832_; 
v_u_829_ = lean_ctor_get(v_a_825_, 0);
lean_inc(v_u_829_);
lean_dec_ref_known(v_a_825_, 1);
v___x_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_830_, 0, v_u_829_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_830_);
v___x_832_ = v___x_827_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
else
{
lean_object* v___x_834_; lean_object* v___x_836_; 
lean_dec(v_a_825_);
v___x_834_ = lean_box(0);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_834_);
v___x_836_ = v___x_827_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_824_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_824_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6(lean_object* v_as_849_, size_t v_sz_850_, size_t v_i_851_, lean_object* v_b_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
uint8_t v___x_859_; 
v___x_859_ = lean_usize_dec_lt(v_i_851_, v_sz_850_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; 
v___x_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_860_, 0, v_b_852_);
return v___x_860_;
}
else
{
lean_object* v_snd_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_906_; 
v_snd_861_ = lean_ctor_get(v_b_852_, 1);
v_isSharedCheck_906_ = !lean_is_exclusive(v_b_852_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; 
v_unused_907_ = lean_ctor_get(v_b_852_, 0);
lean_dec(v_unused_907_);
v___x_863_ = v_b_852_;
v_isShared_864_ = v_isSharedCheck_906_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_snd_861_);
lean_dec(v_b_852_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_906_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_865_; lean_object* v_a_866_; lean_object* v___x_867_; 
v___x_865_ = lean_box(0);
v_a_866_ = lean_array_uget_borrowed(v_as_849_, v_i_851_);
lean_inc(v_a_866_);
v___x_867_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v_a_866_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_869_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f(v_a_868_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_889_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_889_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_889_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_889_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
if (lean_obj_tag(v_a_870_) == 1)
{
lean_object* v_val_874_; lean_object* v___x_875_; lean_object* v___x_877_; 
lean_del_object(v___x_872_);
v_val_874_ = lean_ctor_get(v_a_870_, 0);
lean_inc(v_val_874_);
lean_dec_ref_known(v_a_870_, 1);
v___x_875_ = l_Lean_mkLevelIMax_x27(v_val_874_, v_snd_861_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 1, v___x_875_);
lean_ctor_set(v___x_863_, 0, v___x_865_);
v___x_877_ = v___x_863_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v___x_875_);
v___x_877_ = v_reuseFailAlloc_881_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
size_t v___x_878_; size_t v___x_879_; 
v___x_878_ = ((size_t)1ULL);
v___x_879_ = lean_usize_add(v_i_851_, v___x_878_);
v_i_851_ = v___x_879_;
v_b_852_ = v___x_877_;
goto _start;
}
}
else
{
lean_object* v___x_882_; lean_object* v___x_884_; 
lean_dec(v_a_870_);
v___x_882_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_882_);
v___x_884_ = v___x_863_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_snd_861_);
v___x_884_ = v_reuseFailAlloc_888_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_886_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_884_);
v___x_886_ = v___x_872_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_del_object(v___x_863_);
lean_dec(v_snd_861_);
v_a_890_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_869_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_869_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_del_object(v___x_863_);
lean_dec(v_snd_861_);
v_a_898_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_867_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_867_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go(lean_object* v_e_908_, lean_object* v_fvars_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_){
_start:
{
if (lean_obj_tag(v_e_908_) == 7)
{
lean_object* v_binderName_916_; lean_object* v_binderType_917_; lean_object* v_body_918_; uint8_t v_binderInfo_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_binderName_916_ = lean_ctor_get(v_e_908_, 0);
lean_inc(v_binderName_916_);
v_binderType_917_ = lean_ctor_get(v_e_908_, 1);
lean_inc_ref(v_binderType_917_);
v_body_918_ = lean_ctor_get(v_e_908_, 2);
lean_inc_ref(v_body_918_);
v_binderInfo_919_ = lean_ctor_get_uint8(v_e_908_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_908_, 3);
v___x_920_ = lean_expr_instantiate_rev(v_binderType_917_, v_fvars_909_);
lean_dec_ref(v_binderType_917_);
v___x_921_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0(v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_923_; uint8_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc_n(v_a_922_, 2);
lean_dec_ref_known(v___x_921_, 1);
v___x_923_ = l_Lean_Expr_fvar___override(v_a_922_);
v___x_924_ = 0;
v___x_925_ = l_Lean_LocalContext_mkLocalDecl(v_a_910_, v_a_922_, v_binderName_916_, v___x_920_, v_binderInfo_919_, v___x_924_);
v___x_926_ = lean_array_push(v_fvars_909_, v___x_923_);
v_e_908_ = v_body_918_;
v_fvars_909_ = v___x_926_;
v_a_910_ = v___x_925_;
goto _start;
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref(v___x_920_);
lean_dec_ref(v_body_918_);
lean_dec(v_binderName_916_);
lean_dec_ref(v_a_910_);
lean_dec_ref(v_fvars_909_);
v_a_928_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_921_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_921_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
else
{
lean_object* v_e_936_; lean_object* v___x_937_; 
v_e_936_ = lean_expr_instantiate_rev(v_e_908_, v_fvars_909_);
lean_dec_ref(v_e_908_);
v___x_937_ = l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f(v_e_936_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_977_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_977_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_977_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_977_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
if (lean_obj_tag(v_a_938_) == 1)
{
lean_object* v_val_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; size_t v_sz_946_; size_t v___x_947_; lean_object* v___x_948_; 
lean_del_object(v___x_940_);
v_val_942_ = lean_ctor_get(v_a_938_, 0);
lean_inc(v_val_942_);
lean_dec_ref_known(v_a_938_, 1);
v___x_943_ = l_Array_reverse___redArg(v_fvars_909_);
v___x_944_ = lean_box(0);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
lean_ctor_set(v___x_945_, 1, v_val_942_);
v_sz_946_ = lean_array_size(v___x_943_);
v___x_947_ = ((size_t)0ULL);
v___x_948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6(v___x_943_, v_sz_946_, v___x_947_, v___x_945_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
lean_dec_ref(v_a_910_);
lean_dec_ref(v___x_943_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_964_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_964_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_964_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_964_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v_fst_953_; 
v_fst_953_ = lean_ctor_get(v_a_949_, 0);
if (lean_obj_tag(v_fst_953_) == 0)
{
lean_object* v_snd_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v_snd_954_ = lean_ctor_get(v_a_949_, 1);
lean_inc(v_snd_954_);
lean_dec(v_a_949_);
v___x_955_ = l_Lean_Level_normalize(v_snd_954_);
lean_dec(v_snd_954_);
v___x_956_ = l_Lean_Expr_sort___override(v___x_955_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_956_);
v___x_958_ = v___x_951_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
else
{
lean_object* v_val_960_; lean_object* v___x_962_; 
lean_inc_ref(v_fst_953_);
lean_dec(v_a_949_);
v_val_960_ = lean_ctor_get(v_fst_953_, 0);
lean_inc(v_val_960_);
lean_dec_ref_known(v_fst_953_, 1);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v_val_960_);
v___x_962_ = v___x_951_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_val_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_a_965_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_948_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_948_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
else
{
lean_object* v___x_973_; lean_object* v___x_975_; 
lean_dec(v_a_938_);
lean_dec_ref(v_a_910_);
lean_dec_ref(v_fvars_909_);
v___x_973_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 0, v___x_973_);
v___x_975_ = v___x_940_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec_ref(v_a_910_);
lean_dec_ref(v_fvars_909_);
v_a_978_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_937_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_937_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferForallType(lean_object* v_e_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___closed__0));
lean_inc_ref(v_a_987_);
v___x_994_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go(v_e_986_, v___x_993_, v_a_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferForallType___boxed(lean_object* v_e_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lean_Compiler_LCNF_InferType_Pure_inferForallType(v_e_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec_ref(v_a_996_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLambdaType___boxed(lean_object* v_e_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lean_Compiler_LCNF_InferType_Pure_inferLambdaType(v_e_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
lean_dec(v_a_1008_);
lean_dec_ref(v_a_1007_);
lean_dec(v_a_1006_);
lean_dec_ref(v_a_1005_);
lean_dec_ref(v_a_1004_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f___boxed(lean_object* v_type_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_Compiler_LCNF_InferType_Pure_getLevel_x3f(v_type_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
lean_dec(v_a_1016_);
lean_dec_ref(v_a_1015_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec_ref(v_a_1012_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferType___boxed(lean_object* v_e_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v_e_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_);
lean_dec(v_a_1024_);
lean_dec_ref(v_a_1023_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec_ref(v_a_1020_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___boxed(lean_object* v_as_1027_, lean_object* v_sz_1028_, lean_object* v_i_1029_, lean_object* v_b_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
size_t v_sz_boxed_1037_; size_t v_i_boxed_1038_; lean_object* v_res_1039_; 
v_sz_boxed_1037_ = lean_unbox_usize(v_sz_1028_);
lean_dec(v_sz_1028_);
v_i_boxed_1038_ = lean_unbox_usize(v_i_1029_);
lean_dec(v_i_1029_);
v_res_1039_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6(v_as_1027_, v_sz_boxed_1037_, v_i_boxed_1038_, v_b_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec_ref(v_as_1027_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___boxed(lean_object* v_e_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppType(v_e_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
lean_dec_ref(v_a_1041_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go___boxed(lean_object* v_e_1048_, lean_object* v_fvars_1049_, lean_object* v_all_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go(v_e_1048_, v_fvars_1049_, v_all_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go___boxed(lean_object* v_e_1058_, lean_object* v_fvars_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go(v_e_1058_, v_fvars_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3(lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___redArg(v___y_1071_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3___boxed(lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferLambdaType_go_spec__0_spec__3(v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec_ref(v___y_1074_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9(lean_object* v_upperBound_1081_, lean_object* v___x_1082_, lean_object* v_inst_1083_, lean_object* v_R_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v_c_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg(v_upperBound_1081_, v___x_1082_, v_a_1085_, v_b_1086_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___boxed(lean_object* v_upperBound_1095_, lean_object* v___x_1096_, lean_object* v_inst_1097_, lean_object* v_R_1098_, lean_object* v_a_1099_, lean_object* v_b_1100_, lean_object* v_c_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9(v_upperBound_1095_, v___x_1096_, v_inst_1097_, v_R_1098_, v_a_1099_, v_b_1100_, v_c_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v___x_1096_);
lean_dec(v_upperBound_1095_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferArgType(lean_object* v_arg_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_){
_start:
{
switch(lean_obj_tag(v_arg_1109_))
{
case 0:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
return v___x_1117_;
}
case 1:
{
lean_object* v_fvarId_1118_; lean_object* v___x_1119_; 
v_fvarId_1118_ = lean_ctor_get(v_arg_1109_, 0);
lean_inc(v_fvarId_1118_);
lean_dec_ref_known(v_arg_1109_, 1);
v___x_1119_ = l_Lean_Compiler_LCNF_getType(v_fvarId_1118_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_);
return v___x_1119_;
}
default: 
{
lean_object* v_expr_1120_; lean_object* v___x_1121_; 
v_expr_1120_ = lean_ctor_get(v_arg_1109_, 0);
lean_inc_ref(v_expr_1120_);
lean_dec_ref_known(v_arg_1109_, 1);
v___x_1121_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v_expr_1120_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_);
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferArgType___boxed(lean_object* v_arg_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_Compiler_LCNF_InferType_Pure_inferArgType(v_arg_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_);
lean_dec(v_a_1127_);
lean_dec_ref(v_a_1126_);
lean_dec(v_a_1125_);
lean_dec_ref(v_a_1124_);
lean_dec_ref(v_a_1123_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg(lean_object* v_upperBound_1130_, lean_object* v_args_1131_, lean_object* v_a_1132_, lean_object* v_b_1133_){
_start:
{
lean_object* v_a_1136_; uint8_t v___x_1140_; 
v___x_1140_ = lean_nat_dec_lt(v_a_1132_, v_upperBound_1130_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; 
lean_dec(v_a_1132_);
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v_b_1133_);
return v___x_1141_;
}
else
{
lean_object* v_snd_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1178_; 
v_snd_1142_ = lean_ctor_get(v_b_1133_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_b_1133_);
if (v_isSharedCheck_1178_ == 0)
{
lean_object* v_unused_1179_; 
v_unused_1179_ = lean_ctor_get(v_b_1133_, 0);
lean_dec(v_unused_1179_);
v___x_1144_ = v_b_1133_;
v_isShared_1145_ = v_isSharedCheck_1178_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_snd_1142_);
lean_dec(v_b_1133_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1178_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v_fst_1146_; lean_object* v_snd_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1177_; 
v_fst_1146_ = lean_ctor_get(v_snd_1142_, 0);
v_snd_1147_ = lean_ctor_get(v_snd_1142_, 1);
v_isSharedCheck_1177_ = !lean_is_exclusive(v_snd_1142_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1149_ = v_snd_1142_;
v_isShared_1150_ = v_isSharedCheck_1177_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_snd_1147_);
lean_inc(v_fst_1146_);
lean_dec(v_snd_1142_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1177_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = lean_box(0);
v___x_1152_ = l_Lean_Expr_headBeta(v_snd_1147_);
if (lean_obj_tag(v___x_1152_) == 7)
{
lean_object* v_body_1153_; lean_object* v___x_1155_; 
v_body_1153_ = lean_ctor_get(v___x_1152_, 2);
lean_inc_ref(v_body_1153_);
lean_dec_ref_known(v___x_1152_, 3);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v_body_1153_);
v___x_1155_ = v___x_1149_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_fst_1146_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_body_1153_);
v___x_1155_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1157_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v___x_1155_);
lean_ctor_set(v___x_1144_, 0, v___x_1151_);
v___x_1157_ = v___x_1144_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
v_a_1136_ = v___x_1157_;
goto v___jp_1135_;
}
}
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = l_Lean_Compiler_LCNF_instantiateRevRangeArgs___redArg(v___x_1152_, v_fst_1146_, v_a_1132_, v_args_1131_);
lean_dec_ref(v___x_1152_);
v___x_1161_ = l_Lean_Expr_headBeta(v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 7)
{
lean_object* v_body_1162_; lean_object* v___x_1164_; 
lean_dec(v_fst_1146_);
v_body_1162_ = lean_ctor_get(v___x_1161_, 2);
lean_inc_ref(v_body_1162_);
lean_dec_ref_known(v___x_1161_, 3);
lean_inc(v_a_1132_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v_body_1162_);
lean_ctor_set(v___x_1149_, 0, v_a_1132_);
v___x_1164_ = v___x_1149_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1132_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_body_1162_);
v___x_1164_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1166_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v___x_1164_);
lean_ctor_set(v___x_1144_, 0, v___x_1151_);
v___x_1166_ = v___x_1144_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
v_a_1136_ = v___x_1166_;
goto v___jp_1135_;
}
}
}
else
{
lean_object* v___x_1169_; lean_object* v___x_1171_; 
lean_dec(v_a_1132_);
v___x_1169_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppType_spec__9___redArg___closed__0);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v___x_1161_);
v___x_1171_ = v___x_1149_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_fst_1146_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v___x_1161_);
v___x_1171_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1173_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v___x_1171_);
lean_ctor_set(v___x_1144_, 0, v___x_1169_);
v___x_1173_ = v___x_1144_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v___x_1171_);
v___x_1173_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; 
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
}
}
}
}
}
}
v___jp_1135_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_add(v_a_1132_, v___x_1137_);
lean_dec(v_a_1132_);
v_a_1132_ = v___x_1138_;
v_b_1133_ = v_a_1136_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg___boxed(lean_object* v_upperBound_1180_, lean_object* v_args_1181_, lean_object* v_a_1182_, lean_object* v_b_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg(v_upperBound_1180_, v_args_1181_, v_a_1182_, v_b_1183_);
lean_dec_ref(v_args_1181_);
lean_dec(v_upperBound_1180_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(lean_object* v_fType_1186_, lean_object* v_args_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1194_ = lean_array_get_size(v_args_1187_);
v___x_1195_ = lean_unsigned_to_nat(0u);
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1195_);
lean_ctor_set(v___x_1197_, 1, v_fType_1186_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg(v___x_1194_, v_args_1187_, v___x_1195_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1217_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1217_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1217_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v_fst_1204_; 
v_fst_1204_ = lean_ctor_get(v_a_1200_, 0);
if (lean_obj_tag(v_fst_1204_) == 0)
{
lean_object* v_snd_1205_; lean_object* v_fst_1206_; lean_object* v_snd_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1211_; 
v_snd_1205_ = lean_ctor_get(v_a_1200_, 1);
lean_inc(v_snd_1205_);
lean_dec(v_a_1200_);
v_fst_1206_ = lean_ctor_get(v_snd_1205_, 0);
lean_inc(v_fst_1206_);
v_snd_1207_ = lean_ctor_get(v_snd_1205_, 1);
lean_inc(v_snd_1207_);
lean_dec(v_snd_1205_);
v___x_1208_ = l_Lean_Compiler_LCNF_instantiateRevRangeArgs___redArg(v_snd_1207_, v_fst_1206_, v___x_1194_, v_args_1187_);
lean_dec(v_fst_1206_);
lean_dec(v_snd_1207_);
v___x_1209_ = l_Lean_Expr_headBeta(v___x_1208_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1209_);
v___x_1211_ = v___x_1202_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
else
{
lean_object* v_val_1213_; lean_object* v___x_1215_; 
lean_inc_ref(v_fst_1204_);
lean_dec(v_a_1200_);
v_val_1213_ = lean_ctor_get(v_fst_1204_, 0);
lean_inc(v_val_1213_);
lean_dec_ref_known(v_fst_1204_, 1);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v_val_1213_);
v___x_1215_ = v___x_1202_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_val_1213_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
v_a_1218_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1199_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1199_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore___boxed(lean_object* v_fType_1226_, lean_object* v_args_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(v_fType_1226_, v_args_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec_ref(v_a_1228_);
lean_dec_ref(v_args_1227_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0(lean_object* v_upperBound_1235_, lean_object* v_args_1236_, lean_object* v_inst_1237_, lean_object* v_R_1238_, lean_object* v_a_1239_, lean_object* v_b_1240_, lean_object* v_c_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___redArg(v_upperBound_1235_, v_args_1236_, v_a_1239_, v_b_1240_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0___boxed(lean_object* v_upperBound_1249_, lean_object* v_args_1250_, lean_object* v_inst_1251_, lean_object* v_R_1252_, lean_object* v_a_1253_, lean_object* v_b_1254_, lean_object* v_c_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore_spec__0(v_upperBound_1249_, v_args_1250_, v_inst_1251_, v_R_1252_, v_a_1253_, v_b_1254_, v_c_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec_ref(v_args_1250_);
lean_dec(v_upperBound_1249_);
return v_res_1262_;
}
}
static lean_object* _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__0);
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1265_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0, &l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0);
v___x_1266_ = lean_unsigned_to_nat(0u);
v___x_1267_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
lean_ctor_set(v___x_1267_, 2, v___x_1266_);
lean_ctor_set(v___x_1267_, 3, v___x_1266_);
lean_ctor_set(v___x_1267_, 4, v___x_1265_);
lean_ctor_set(v___x_1267_, 5, v___x_1265_);
lean_ctor_set(v___x_1267_, 6, v___x_1265_);
lean_ctor_set(v___x_1267_, 7, v___x_1265_);
lean_ctor_set(v___x_1267_, 8, v___x_1265_);
lean_ctor_set(v___x_1267_, 9, v___x_1265_);
lean_ctor_set(v___x_1267_, 10, v___x_1265_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(lean_object* v_msg_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_toCold_1274_; lean_object* v_ref_1275_; lean_object* v___x_1276_; lean_object* v_env_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_toCold_1274_ = lean_ctor_get(v___y_1271_, 0);
v_ref_1275_ = lean_ctor_get(v___y_1271_, 2);
v___x_1276_ = lean_st_ref_get(v___y_1272_);
v_env_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc_ref(v_env_1277_);
lean_dec(v___x_1276_);
v___x_1278_ = lean_st_ref_get(v___y_1270_);
v___x_1279_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_1269_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1302_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1282_ = v___x_1279_;
v_isShared_1283_ = v_isSharedCheck_1302_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1279_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1302_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v_lctx_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1300_; 
v_lctx_1284_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v___x_1278_, 1);
lean_dec(v_unused_1301_);
v___x_1286_ = v___x_1278_;
v_isShared_1287_ = v_isSharedCheck_1300_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_lctx_1284_);
lean_dec(v___x_1278_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1300_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v_options_1288_; uint8_t v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v_options_1288_ = lean_ctor_get(v_toCold_1274_, 2);
v___x_1289_ = lean_unbox(v_a_1280_);
lean_dec(v_a_1280_);
v___x_1290_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_1284_, v___x_1289_);
lean_dec_ref(v_lctx_1284_);
v___x_1291_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1, &l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1);
lean_inc_ref(v_options_1288_);
v___x_1292_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1292_, 0, v_env_1277_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
lean_ctor_set(v___x_1292_, 2, v___x_1290_);
lean_ctor_set(v___x_1292_, 3, v_options_1288_);
if (v_isShared_1287_ == 0)
{
lean_ctor_set_tag(v___x_1286_, 3);
lean_ctor_set(v___x_1286_, 1, v_msg_1268_);
lean_ctor_set(v___x_1286_, 0, v___x_1292_);
v___x_1294_ = v___x_1286_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1292_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_msg_1268_);
v___x_1294_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
lean_inc(v_ref_1275_);
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v_ref_1275_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 1);
lean_ctor_set(v___x_1282_, 0, v___x_1295_);
v___x_1297_ = v___x_1282_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
lean_dec(v___x_1278_);
lean_dec_ref(v_env_1277_);
lean_dec_ref(v_msg_1268_);
v_a_1303_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1279_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1279_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___boxed(lean_object* v_msg_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(v_msg_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0(lean_object* v_00_u03b1_1318_, lean_object* v_msg_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(v_msg_1319_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___boxed(lean_object* v_00_u03b1_1327_, lean_object* v_msg_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0(v_00_u03b1_1327_, v_msg_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec_ref(v___y_1329_);
return v_res_1335_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1337_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__0));
v___x_1338_ = l_Lean_stringToMessageData(v___x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg(lean_object* v_upperBound_1339_, lean_object* v_s_1340_, lean_object* v_structName_1341_, lean_object* v_idx_1342_, lean_object* v_a_1343_, lean_object* v_b_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_a_1352_; uint8_t v___x_1356_; 
v___x_1356_ = lean_nat_dec_lt(v_a_1343_, v_upperBound_1339_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; 
lean_dec(v_a_1343_);
lean_dec(v_idx_1342_);
lean_dec(v_structName_1341_);
lean_dec(v_s_1340_);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_b_1344_);
return v___x_1357_;
}
else
{
lean_object* v_snd_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1396_; 
v_snd_1358_ = lean_ctor_get(v_b_1344_, 1);
v_isSharedCheck_1396_ = !lean_is_exclusive(v_b_1344_);
if (v_isSharedCheck_1396_ == 0)
{
lean_object* v_unused_1397_; 
v_unused_1397_ = lean_ctor_get(v_b_1344_, 0);
lean_dec(v_unused_1397_);
v___x_1360_ = v_b_1344_;
v_isShared_1361_ = v_isSharedCheck_1396_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_snd_1358_);
lean_dec(v_b_1344_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1396_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_box(0);
if (lean_obj_tag(v_snd_1358_) == 7)
{
lean_object* v_body_1363_; uint8_t v___x_1364_; 
v_body_1363_ = lean_ctor_get(v_snd_1358_, 2);
lean_inc_ref(v_body_1363_);
lean_dec_ref_known(v_snd_1358_, 3);
v___x_1364_ = l_Lean_Expr_hasLooseBVars(v_body_1363_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1366_; 
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 1, v_body_1363_);
lean_ctor_set(v___x_1360_, 0, v___x_1362_);
v___x_1366_ = v___x_1360_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1362_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_body_1363_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
v_a_1352_ = v___x_1366_;
goto v___jp_1351_;
}
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1368_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1369_ = lean_expr_instantiate1(v_body_1363_, v___x_1368_);
lean_dec_ref(v_body_1363_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 1, v___x_1369_);
lean_ctor_set(v___x_1360_, 0, v___x_1362_);
v___x_1371_ = v___x_1360_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1362_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v___x_1369_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
v_a_1352_ = v___x_1371_;
goto v___jp_1351_;
}
}
}
else
{
uint8_t v___x_1373_; 
v___x_1373_ = l_Lean_Expr_isErased(v_snd_1358_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1374_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1);
lean_inc(v_s_1340_);
v___x_1375_ = l_Lean_mkFVar(v_s_1340_);
lean_inc(v_idx_1342_);
lean_inc(v_structName_1341_);
v___x_1376_ = l_Lean_mkProj(v_structName_1341_, v_idx_1342_, v___x_1375_);
v___x_1377_ = l_Lean_indentExpr(v___x_1376_);
v___x_1378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1374_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
v___x_1379_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(v___x_1378_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v___x_1381_; 
lean_dec_ref_known(v___x_1379_, 1);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1362_);
v___x_1381_ = v___x_1360_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1362_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v_snd_1358_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
v_a_1352_ = v___x_1381_;
goto v___jp_1351_;
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_del_object(v___x_1360_);
lean_dec(v_snd_1358_);
lean_dec(v_a_1343_);
lean_dec(v_idx_1342_);
lean_dec(v_structName_1341_);
lean_dec(v_s_1340_);
v_a_1383_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1379_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1379_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1393_; 
lean_dec(v_a_1343_);
lean_dec(v_idx_1342_);
lean_dec(v_structName_1341_);
lean_dec(v_s_1340_);
v___x_1391_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1391_);
v___x_1393_ = v___x_1360_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v_snd_1358_);
v___x_1393_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
return v___x_1394_;
}
}
}
}
}
v___jp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_unsigned_to_nat(1u);
v___x_1354_ = lean_nat_add(v_a_1343_, v___x_1353_);
lean_dec(v_a_1343_);
v_a_1343_ = v___x_1354_;
v_b_1344_ = v_a_1352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___boxed(lean_object* v_upperBound_1398_, lean_object* v_s_1399_, lean_object* v_structName_1400_, lean_object* v_idx_1401_, lean_object* v_a_1402_, lean_object* v_b_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg(v_upperBound_1398_, v_s_1399_, v_structName_1400_, v_idx_1401_, v_a_1402_, v_b_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v_upperBound_1398_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg(lean_object* v_upperBound_1411_, lean_object* v_s_1412_, lean_object* v_structName_1413_, lean_object* v_idx_1414_, lean_object* v_a_1415_, lean_object* v_b_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_a_1424_; uint8_t v___x_1428_; 
v___x_1428_ = lean_nat_dec_lt(v_a_1415_, v_upperBound_1411_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; 
lean_dec(v_idx_1414_);
lean_dec(v_structName_1413_);
lean_dec(v_s_1412_);
v___x_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1429_, 0, v_b_1416_);
return v___x_1429_;
}
else
{
lean_object* v_snd_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1468_; 
v_snd_1430_ = lean_ctor_get(v_b_1416_, 1);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_b_1416_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; 
v_unused_1469_ = lean_ctor_get(v_b_1416_, 0);
lean_dec(v_unused_1469_);
v___x_1432_ = v_b_1416_;
v_isShared_1433_ = v_isSharedCheck_1468_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_snd_1430_);
lean_dec(v_b_1416_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1468_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_box(0);
if (lean_obj_tag(v_snd_1430_) == 7)
{
lean_object* v_body_1435_; uint8_t v___x_1436_; 
v_body_1435_ = lean_ctor_get(v_snd_1430_, 2);
lean_inc_ref(v_body_1435_);
lean_dec_ref_known(v_snd_1430_, 3);
v___x_1436_ = l_Lean_Expr_hasLooseBVars(v_body_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1438_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 1, v_body_1435_);
lean_ctor_set(v___x_1432_, 0, v___x_1434_);
v___x_1438_ = v___x_1432_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_body_1435_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
v_a_1424_ = v___x_1438_;
goto v___jp_1423_;
}
}
else
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1440_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1441_ = lean_expr_instantiate1(v_body_1435_, v___x_1440_);
lean_dec_ref(v_body_1435_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 1, v___x_1441_);
lean_ctor_set(v___x_1432_, 0, v___x_1434_);
v___x_1443_ = v___x_1432_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
v_a_1424_ = v___x_1443_;
goto v___jp_1423_;
}
}
}
else
{
uint8_t v___x_1445_; 
v___x_1445_ = l_Lean_Expr_isErased(v_snd_1430_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1446_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1);
lean_inc(v_s_1412_);
v___x_1447_ = l_Lean_mkFVar(v_s_1412_);
lean_inc(v_idx_1414_);
lean_inc(v_structName_1413_);
v___x_1448_ = l_Lean_mkProj(v_structName_1413_, v_idx_1414_, v___x_1447_);
v___x_1449_ = l_Lean_indentExpr(v___x_1448_);
v___x_1450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1446_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(v___x_1450_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v___x_1453_; 
lean_dec_ref_known(v___x_1451_, 1);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1434_);
v___x_1453_ = v___x_1432_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_snd_1430_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
v_a_1424_ = v___x_1453_;
goto v___jp_1423_;
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_del_object(v___x_1432_);
lean_dec(v_snd_1430_);
lean_dec(v_idx_1414_);
lean_dec(v_structName_1413_);
lean_dec(v_s_1412_);
v_a_1455_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1451_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1451_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
lean_dec(v_idx_1414_);
lean_dec(v_structName_1413_);
lean_dec(v_s_1412_);
v___x_1463_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_InferType_Pure_inferForallType_go_spec__6___closed__0);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1463_);
v___x_1465_ = v___x_1432_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_snd_1430_);
v___x_1465_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1465_);
return v___x_1466_;
}
}
}
}
}
v___jp_1423_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1425_ = lean_unsigned_to_nat(1u);
v___x_1426_ = lean_nat_add(v_a_1415_, v___x_1425_);
v___x_1427_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg(v_upperBound_1411_, v_s_1412_, v_structName_1413_, v_idx_1414_, v___x_1426_, v_a_1424_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
return v___x_1427_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg___boxed(lean_object* v_upperBound_1470_, lean_object* v_s_1471_, lean_object* v_structName_1472_, lean_object* v_idx_1473_, lean_object* v_a_1474_, lean_object* v_b_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg(v_upperBound_1470_, v_s_1471_, v_structName_1472_, v_idx_1473_, v_a_1474_, v_b_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v_a_1474_);
lean_dec(v_upperBound_1470_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_ref_1483_, lean_object* v_msg_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
lean_object* v_toCold_1491_; lean_object* v_currRecDepth_1492_; lean_object* v_ref_1493_; uint8_t v_diag_1494_; uint8_t v_suppressElabErrors_1495_; lean_object* v_ref_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v_toCold_1491_ = lean_ctor_get(v___y_1488_, 0);
v_currRecDepth_1492_ = lean_ctor_get(v___y_1488_, 1);
v_ref_1493_ = lean_ctor_get(v___y_1488_, 2);
v_diag_1494_ = lean_ctor_get_uint8(v___y_1488_, sizeof(void*)*3);
v_suppressElabErrors_1495_ = lean_ctor_get_uint8(v___y_1488_, sizeof(void*)*3 + 1);
v_ref_1496_ = l_Lean_replaceRef(v_ref_1483_, v_ref_1493_);
lean_inc(v_currRecDepth_1492_);
lean_inc_ref(v_toCold_1491_);
v___x_1497_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1497_, 0, v_toCold_1491_);
lean_ctor_set(v___x_1497_, 1, v_currRecDepth_1492_);
lean_ctor_set(v___x_1497_, 2, v_ref_1496_);
lean_ctor_set_uint8(v___x_1497_, sizeof(void*)*3, v_diag_1494_);
lean_ctor_set_uint8(v___x_1497_, sizeof(void*)*3 + 1, v_suppressElabErrors_1495_);
v___x_1498_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(v_msg_1484_, v___y_1486_, v___y_1487_, v___x_1497_, v___y_1489_);
lean_dec_ref_known(v___x_1497_, 3);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_ref_1499_, lean_object* v_msg_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg(v_ref_1499_, v_msg_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v_ref_1499_);
return v_res_1507_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1508_ = lean_box(1);
v___x_1509_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__3);
v___x_1510_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0, &l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__0);
v___x_1511_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
lean_ctor_set(v___x_1511_, 1, v___x_1509_);
lean_ctor_set(v___x_1511_, 2, v___x_1508_);
return v___x_1511_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__1));
v___x_1514_ = l_Lean_stringToMessageData(v___x_1513_);
return v___x_1514_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__3));
v___x_1517_ = l_Lean_stringToMessageData(v___x_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__6(void){
_start:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__5));
v___x_1520_ = l_Lean_stringToMessageData(v___x_1519_);
return v___x_1520_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__8(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__7));
v___x_1523_ = l_Lean_stringToMessageData(v___x_1522_);
return v___x_1523_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__10(void){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1525_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__9));
v___x_1526_ = l_Lean_stringToMessageData(v___x_1525_);
return v___x_1526_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__12(void){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__11));
v___x_1529_ = l_Lean_stringToMessageData(v___x_1528_);
return v___x_1529_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__14(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__13));
v___x_1532_ = l_Lean_stringToMessageData(v___x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object* v_msg_1533_, lean_object* v_declHint_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v_env_1539_; uint8_t v___x_1540_; 
v___x_1537_ = l_Lean_instInhabitedName;
v___x_1538_ = lean_st_ref_get(v___y_1535_);
v_env_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc_ref(v_env_1539_);
lean_dec(v___x_1538_);
v___x_1540_ = l_Lean_Name_isAnonymous(v_declHint_1534_);
if (v___x_1540_ == 0)
{
uint8_t v_isExporting_1541_; 
v_isExporting_1541_ = lean_ctor_get_uint8(v_env_1539_, sizeof(void*)*8);
if (v_isExporting_1541_ == 0)
{
lean_object* v___x_1542_; 
lean_dec_ref(v_env_1539_);
lean_dec(v_declHint_1534_);
v___x_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1542_, 0, v_msg_1533_);
return v___x_1542_;
}
else
{
lean_object* v___x_1543_; uint8_t v___x_1544_; 
lean_inc_ref(v_env_1539_);
v___x_1543_ = l_Lean_Environment_setExporting(v_env_1539_, v___x_1540_);
lean_inc(v_declHint_1534_);
lean_inc_ref(v___x_1543_);
v___x_1544_ = l_Lean_Environment_contains(v___x_1543_, v_declHint_1534_, v_isExporting_1541_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; 
lean_dec_ref(v___x_1543_);
lean_dec_ref(v_env_1539_);
lean_dec(v_declHint_1534_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v_msg_1533_);
return v___x_1545_;
}
else
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v_c_1551_; lean_object* v___x_1552_; 
v___x_1546_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1, &l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1);
v___x_1547_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__0);
v___x_1548_ = l_Lean_Options_empty;
v___x_1549_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1543_);
lean_ctor_set(v___x_1549_, 1, v___x_1546_);
lean_ctor_set(v___x_1549_, 2, v___x_1547_);
lean_ctor_set(v___x_1549_, 3, v___x_1548_);
lean_inc(v_declHint_1534_);
v___x_1550_ = l_Lean_MessageData_ofConstName(v_declHint_1534_, v___x_1540_);
v_c_1551_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1551_, 0, v___x_1549_);
lean_ctor_set(v_c_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1539_, v_declHint_1534_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
lean_dec_ref(v_env_1539_);
lean_dec(v_declHint_1534_);
v___x_1553_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2);
v___x_1554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
lean_ctor_set(v___x_1554_, 1, v_c_1551_);
v___x_1555_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__4);
v___x_1556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = l_Lean_MessageData_note(v___x_1556_);
v___x_1558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1558_, 0, v_msg_1533_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
else
{
lean_object* v_val_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1594_; 
v_val_1560_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1562_ = v___x_1552_;
v_isShared_1563_ = v_isSharedCheck_1594_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_val_1560_);
lean_dec(v___x_1552_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1594_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v_mod_1566_; uint8_t v___x_1567_; 
v___x_1564_ = l_Lean_Environment_header(v_env_1539_);
lean_dec_ref(v_env_1539_);
v___x_1565_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1564_);
lean_dec_ref(v___x_1564_);
v_mod_1566_ = lean_array_get(v___x_1537_, v___x_1565_, v_val_1560_);
lean_dec(v_val_1560_);
lean_dec_ref(v___x_1565_);
v___x_1567_ = l_Lean_isPrivateName(v_declHint_1534_);
lean_dec(v_declHint_1534_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1579_; 
v___x_1568_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__6);
v___x_1569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
lean_ctor_set(v___x_1569_, 1, v_c_1551_);
v___x_1570_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__8);
v___x_1571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1569_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = l_Lean_MessageData_ofName(v_mod_1566_);
v___x_1573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__10);
v___x_1575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = l_Lean_MessageData_note(v___x_1575_);
v___x_1577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_msg_1533_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set_tag(v___x_1562_, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1577_);
v___x_1579_ = v___x_1562_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
else
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1592_; 
v___x_1581_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__2);
v___x_1582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
lean_ctor_set(v___x_1582_, 1, v_c_1551_);
v___x_1583_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__12);
v___x_1584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1582_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = l_Lean_MessageData_ofName(v_mod_1566_);
v___x_1586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1584_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___closed__14);
v___x_1588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1586_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = l_Lean_MessageData_note(v___x_1588_);
v___x_1590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1590_, 0, v_msg_1533_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set_tag(v___x_1562_, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1590_);
v___x_1592_ = v___x_1562_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v___x_1590_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1595_; 
lean_dec_ref(v_env_1539_);
lean_dec(v_declHint_1534_);
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v_msg_1533_);
return v___x_1595_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg___boxed(lean_object* v_msg_1596_, lean_object* v_declHint_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_msg_1596_, v_declHint_1597_, v___y_1598_);
lean_dec(v___y_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6(lean_object* v_msg_1601_, lean_object* v_declHint_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1619_; 
v___x_1609_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_msg_1601_, v_declHint_1602_, v___y_1607_);
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1612_ = v___x_1609_;
v_isShared_1613_ = v_isSharedCheck_1619_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1609_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1619_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1614_ = l_Lean_unknownIdentifierMessageTag;
v___x_1615_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
lean_ctor_set(v___x_1615_, 1, v_a_1610_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 0, v___x_1615_);
v___x_1617_ = v___x_1612_;
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_msg_1620_, lean_object* v_declHint_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6(v_msg_1620_, v_declHint_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec_ref(v___y_1622_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_1629_, lean_object* v_msg_1630_, lean_object* v_declHint_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; lean_object* v_a_1639_; lean_object* v___x_1640_; 
v___x_1638_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6(v_msg_1630_, v_declHint_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref(v___x_1638_);
v___x_1640_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg(v_ref_1629_, v_a_1639_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_1641_, lean_object* v_msg_1642_, lean_object* v_declHint_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg(v_ref_1641_, v_msg_1642_, v_declHint_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v_ref_1641_);
return v_res_1650_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__0));
v___x_1653_ = l_Lean_stringToMessageData(v___x_1652_);
return v___x_1653_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__2));
v___x_1656_ = l_Lean_stringToMessageData(v___x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg(lean_object* v_ref_1657_, lean_object* v_constName_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v___x_1665_; uint8_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1665_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__1);
v___x_1666_ = 0;
lean_inc(v_constName_1658_);
v___x_1667_ = l_Lean_MessageData_ofConstName(v_constName_1658_, v___x_1666_);
v___x_1668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1665_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___closed__3);
v___x_1670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg(v_ref_1657_, v___x_1670_, v_constName_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1672_, lean_object* v_constName_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg(v_ref_1672_, v_constName_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v_ref_1672_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg(lean_object* v_constName_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_ref_1688_; lean_object* v___x_1689_; 
v_ref_1688_ = lean_ctor_get(v___y_1685_, 2);
v___x_1689_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg(v_ref_1688_, v_constName_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg___boxed(lean_object* v_constName_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg(v_constName_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
lean_dec(v___y_1695_);
lean_dec_ref(v___y_1694_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec_ref(v___y_1691_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1(lean_object* v_constName_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v___x_1705_; lean_object* v_env_1706_; uint8_t v___x_1707_; lean_object* v___x_1708_; 
v___x_1705_ = lean_st_ref_get(v___y_1703_);
v_env_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc_ref(v_env_1706_);
lean_dec(v___x_1705_);
v___x_1707_ = 0;
lean_inc(v_constName_1698_);
v___x_1708_ = l_Lean_Environment_find_x3f(v_env_1706_, v_constName_1698_, v___x_1707_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg(v_constName_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
return v___x_1709_;
}
else
{
lean_object* v_val_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec(v_constName_1698_);
v_val_1710_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1708_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_val_1710_);
lean_dec(v___x_1708_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 0);
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_val_1710_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1___boxed(lean_object* v_constName_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1(v_constName_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec_ref(v___y_1719_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferProjType(lean_object* v_structName_1726_, lean_object* v_idx_1727_, lean_object* v_s_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_){
_start:
{
lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___x_1747_; 
lean_inc(v_s_1728_);
v___x_1747_ = l_Lean_Compiler_LCNF_InferType_Pure_getType(v_s_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1843_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1843_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1843_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1752_ = l_Lean_Expr_headBeta(v_a_1748_);
v___x_1753_ = l_Lean_Expr_isErased(v___x_1752_);
if (v___x_1753_ == 0)
{
uint8_t v___x_1754_; 
v___x_1754_ = l_Lean_Expr_isAny(v___x_1752_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; 
lean_del_object(v___x_1750_);
v___x_1755_ = l_Lean_Expr_getAppFn(v___x_1752_);
if (lean_obj_tag(v___x_1755_) == 4)
{
lean_object* v_declName_1756_; lean_object* v_us_1757_; lean_object* v___x_1758_; lean_object* v_env_1759_; lean_object* v___x_1760_; 
v_declName_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_declName_1756_);
v_us_1757_ = lean_ctor_get(v___x_1755_, 1);
lean_inc(v_us_1757_);
lean_dec_ref_known(v___x_1755_, 2);
v___x_1758_ = lean_st_ref_get(v_a_1733_);
v_env_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc_ref(v_env_1759_);
lean_dec(v___x_1758_);
v___x_1760_ = l_Lean_Environment_find_x3f(v_env_1759_, v_declName_1756_, v___x_1754_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_dec(v_us_1757_);
lean_dec_ref(v___x_1752_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
else
{
lean_object* v_val_1761_; 
v_val_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_val_1761_);
lean_dec_ref_known(v___x_1760_, 1);
if (lean_obj_tag(v_val_1761_) == 5)
{
lean_object* v_val_1762_; lean_object* v_ctors_1763_; 
v_val_1762_ = lean_ctor_get(v_val_1761_, 0);
lean_inc_ref(v_val_1762_);
lean_dec_ref_known(v_val_1761_, 1);
v_ctors_1763_ = lean_ctor_get(v_val_1762_, 4);
lean_inc(v_ctors_1763_);
if (lean_obj_tag(v_ctors_1763_) == 1)
{
lean_object* v_tail_1764_; 
v_tail_1764_ = lean_ctor_get(v_ctors_1763_, 1);
if (lean_obj_tag(v_tail_1764_) == 0)
{
lean_object* v_numParams_1765_; lean_object* v_numIndices_1766_; lean_object* v_head_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1833_; 
v_numParams_1765_ = lean_ctor_get(v_val_1762_, 1);
lean_inc(v_numParams_1765_);
v_numIndices_1766_ = lean_ctor_get(v_val_1762_, 2);
lean_inc(v_numIndices_1766_);
lean_dec_ref(v_val_1762_);
v_head_1767_ = lean_ctor_get(v_ctors_1763_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_ctors_1763_);
if (v_isSharedCheck_1833_ == 0)
{
lean_object* v_unused_1834_; 
v_unused_1834_ = lean_ctor_get(v_ctors_1763_, 1);
lean_dec(v_unused_1834_);
v___x_1769_ = v_ctors_1763_;
v_isShared_1770_ = v_isSharedCheck_1833_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_head_1767_);
lean_dec(v_ctors_1763_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1833_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1(v_head_1767_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
if (lean_obj_tag(v_a_1772_) == 6)
{
lean_object* v_val_1773_; lean_object* v_dummy_1774_; lean_object* v_nargs_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; 
v_val_1773_ = lean_ctor_get(v_a_1772_, 0);
lean_inc_ref(v_val_1773_);
lean_dec_ref_known(v_a_1772_, 1);
v_dummy_1774_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_inferAppType___closed__1);
v_nargs_1775_ = l_Lean_Expr_getAppNumArgs(v___x_1752_);
lean_inc(v_nargs_1775_);
v___x_1776_ = lean_mk_array(v_nargs_1775_, v_dummy_1774_);
v___x_1777_ = lean_unsigned_to_nat(1u);
v___x_1778_ = lean_nat_sub(v_nargs_1775_, v___x_1777_);
lean_dec(v_nargs_1775_);
v___x_1779_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1752_, v___x_1776_, v___x_1778_);
v___x_1780_ = lean_nat_add(v_numParams_1765_, v_numIndices_1766_);
lean_dec(v_numIndices_1766_);
v___x_1781_ = lean_array_get_size(v___x_1779_);
v___x_1782_ = lean_nat_dec_eq(v___x_1780_, v___x_1781_);
lean_dec(v___x_1780_);
if (v___x_1782_ == 0)
{
lean_dec_ref(v___x_1779_);
lean_dec_ref(v_val_1773_);
lean_del_object(v___x_1769_);
lean_dec(v_numParams_1765_);
lean_dec(v_us_1757_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
else
{
if (v___x_1754_ == 0)
{
lean_object* v_toConstantVal_1783_; lean_object* v_name_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v_toConstantVal_1783_ = lean_ctor_get(v_val_1773_, 0);
lean_inc_ref(v_toConstantVal_1783_);
lean_dec_ref(v_val_1773_);
v_name_1784_ = lean_ctor_get(v_toConstantVal_1783_, 0);
lean_inc(v_name_1784_);
lean_dec_ref(v_toConstantVal_1783_);
v___x_1785_ = l_Lean_mkConst(v_name_1784_, v_us_1757_);
v___x_1786_ = lean_unsigned_to_nat(0u);
v___x_1787_ = l_Array_toSubarray___redArg(v___x_1779_, v___x_1786_, v_numParams_1765_);
v___x_1788_ = l_Subarray_copy___redArg(v___x_1787_);
v___x_1789_ = l_Lean_mkAppN(v___x_1785_, v___x_1788_);
lean_dec_ref(v___x_1788_);
v___x_1790_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppType(v___x_1789_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1792_; lean_object* v___x_1794_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1790_, 1);
v___x_1792_ = lean_box(0);
if (v_isShared_1770_ == 0)
{
lean_ctor_set_tag(v___x_1769_, 0);
lean_ctor_set(v___x_1769_, 1, v_a_1791_);
lean_ctor_set(v___x_1769_, 0, v___x_1792_);
v___x_1794_ = v___x_1769_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1792_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_a_1791_);
v___x_1794_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v___x_1795_; 
lean_inc(v_structName_1726_);
lean_inc(v_s_1728_);
lean_inc(v_idx_1727_);
v___x_1795_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg(v_idx_1727_, v_s_1728_, v_structName_1726_, v_idx_1727_, v___x_1786_, v___x_1794_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1815_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1798_ = v___x_1795_;
v_isShared_1799_ = v_isSharedCheck_1815_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1795_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1815_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_fst_1800_; 
v_fst_1800_ = lean_ctor_get(v_a_1796_, 0);
if (lean_obj_tag(v_fst_1800_) == 0)
{
lean_object* v_snd_1801_; 
v_snd_1801_ = lean_ctor_get(v_a_1796_, 1);
lean_inc(v_snd_1801_);
lean_dec(v_a_1796_);
if (lean_obj_tag(v_snd_1801_) == 7)
{
lean_object* v_binderType_1802_; lean_object* v___x_1804_; 
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v_binderType_1802_ = lean_ctor_get(v_snd_1801_, 1);
lean_inc_ref(v_binderType_1802_);
lean_dec_ref_known(v_snd_1801_, 3);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v_binderType_1802_);
v___x_1804_ = v___x_1798_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_binderType_1802_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
else
{
uint8_t v___x_1806_; 
v___x_1806_ = l_Lean_Expr_isErased(v_snd_1801_);
lean_dec(v_snd_1801_);
if (v___x_1806_ == 0)
{
lean_del_object(v___x_1798_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v___x_1807_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1807_);
v___x_1809_ = v___x_1798_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
else
{
lean_object* v_val_1811_; lean_object* v___x_1813_; 
lean_inc_ref(v_fst_1800_);
lean_dec(v_a_1796_);
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v_val_1811_ = lean_ctor_get(v_fst_1800_, 0);
lean_inc(v_val_1811_);
lean_dec_ref_known(v_fst_1800_, 1);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v_val_1811_);
v___x_1813_ = v___x_1798_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_val_1811_);
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
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v_a_1816_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1795_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1795_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
else
{
lean_del_object(v___x_1769_);
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
return v___x_1790_;
}
}
else
{
lean_dec_ref(v___x_1779_);
lean_dec_ref(v_val_1773_);
lean_del_object(v___x_1769_);
lean_dec(v_numParams_1765_);
lean_dec(v_us_1757_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
}
}
else
{
lean_dec(v_a_1772_);
lean_del_object(v___x_1769_);
lean_dec(v_numIndices_1766_);
lean_dec(v_numParams_1765_);
lean_dec(v_us_1757_);
lean_dec_ref(v___x_1752_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
}
else
{
lean_object* v_a_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1832_; 
lean_del_object(v___x_1769_);
lean_dec(v_numIndices_1766_);
lean_dec(v_numParams_1765_);
lean_dec(v_us_1757_);
lean_dec_ref(v___x_1752_);
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v_a_1825_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1827_ = v___x_1771_;
v_isShared_1828_ = v_isSharedCheck_1832_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_a_1825_);
lean_dec(v___x_1771_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1832_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
if (v_isShared_1828_ == 0)
{
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_a_1825_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_1763_, 2);
lean_dec_ref(v_val_1762_);
lean_dec(v_us_1757_);
lean_dec_ref(v___x_1752_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
}
else
{
lean_dec(v_ctors_1763_);
lean_dec_ref(v_val_1762_);
lean_dec(v_us_1757_);
lean_dec_ref(v___x_1752_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
}
else
{
lean_dec(v_val_1761_);
lean_dec(v_us_1757_);
lean_dec_ref(v___x_1752_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
}
}
else
{
lean_dec_ref(v___x_1755_);
lean_dec_ref(v___x_1752_);
v___y_1736_ = v_a_1729_;
v___y_1737_ = v_a_1730_;
v___y_1738_ = v_a_1731_;
v___y_1739_ = v_a_1732_;
v___y_1740_ = v_a_1733_;
goto v___jp_1735_;
}
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1837_; 
lean_dec_ref(v___x_1752_);
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v___x_1835_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1835_);
v___x_1837_ = v___x_1750_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
else
{
lean_object* v___x_1839_; lean_object* v___x_1841_; 
lean_dec_ref(v___x_1752_);
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
v___x_1839_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1839_);
v___x_1841_ = v___x_1750_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
}
else
{
lean_dec(v_s_1728_);
lean_dec(v_idx_1727_);
lean_dec(v_structName_1726_);
return v___x_1747_;
}
v___jp_1735_:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1741_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg___closed__1);
v___x_1742_ = l_Lean_mkFVar(v_s_1728_);
v___x_1743_ = l_Lean_mkProj(v_structName_1726_, v_idx_1727_, v___x_1742_);
v___x_1744_ = l_Lean_indentExpr(v___x_1743_);
v___x_1745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1741_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg(v___x_1745_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
return v___x_1746_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferProjType___boxed(lean_object* v_structName_1844_, lean_object* v_idx_1845_, lean_object* v_s_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_Compiler_LCNF_InferType_Pure_inferProjType(v_structName_1844_, v_idx_1845_, v_s_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_);
lean_dec(v_a_1851_);
lean_dec_ref(v_a_1850_);
lean_dec(v_a_1849_);
lean_dec_ref(v_a_1848_);
lean_dec_ref(v_a_1847_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2(lean_object* v_upperBound_1854_, lean_object* v_s_1855_, lean_object* v_structName_1856_, lean_object* v_idx_1857_, lean_object* v_inst_1858_, lean_object* v_R_1859_, lean_object* v_a_1860_, lean_object* v_b_1861_, lean_object* v_c_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___redArg(v_upperBound_1854_, v_s_1855_, v_structName_1856_, v_idx_1857_, v_a_1860_, v_b_1861_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2___boxed(lean_object* v_upperBound_1870_, lean_object* v_s_1871_, lean_object* v_structName_1872_, lean_object* v_idx_1873_, lean_object* v_inst_1874_, lean_object* v_R_1875_, lean_object* v_a_1876_, lean_object* v_b_1877_, lean_object* v_c_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2(v_upperBound_1870_, v_s_1871_, v_structName_1872_, v_idx_1873_, v_inst_1874_, v_R_1875_, v_a_1876_, v_b_1877_, v_c_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec_ref(v___y_1879_);
lean_dec(v_a_1876_);
lean_dec(v_upperBound_1870_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1(lean_object* v_00_u03b1_1886_, lean_object* v_constName_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___redArg(v_constName_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1895_, lean_object* v_constName_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1(v_00_u03b1_1895_, v_constName_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec_ref(v___y_1897_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3(lean_object* v_upperBound_1904_, lean_object* v_s_1905_, lean_object* v_structName_1906_, lean_object* v_idx_1907_, lean_object* v_inst_1908_, lean_object* v_R_1909_, lean_object* v_a_1910_, lean_object* v_b_1911_, lean_object* v_c_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___redArg(v_upperBound_1904_, v_s_1905_, v_structName_1906_, v_idx_1907_, v_a_1910_, v_b_1911_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3___boxed(lean_object* v_upperBound_1920_, lean_object* v_s_1921_, lean_object* v_structName_1922_, lean_object* v_idx_1923_, lean_object* v_inst_1924_, lean_object* v_R_1925_, lean_object* v_a_1926_, lean_object* v_b_1927_, lean_object* v_c_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__2_spec__3(v_upperBound_1920_, v_s_1921_, v_structName_1922_, v_idx_1923_, v_inst_1924_, v_R_1925_, v_a_1926_, v_b_1927_, v_c_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v_upperBound_1920_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2(lean_object* v_00_u03b1_1936_, lean_object* v_ref_1937_, lean_object* v_constName_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___redArg(v_ref_1937_, v_constName_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1946_, lean_object* v_ref_1947_, lean_object* v_constName_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2(v_00_u03b1_1946_, v_ref_1947_, v_constName_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v_ref_1947_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1956_, lean_object* v_ref_1957_, lean_object* v_msg_1958_, lean_object* v_declHint_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v___x_1966_; 
v___x_1966_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___redArg(v_ref_1957_, v_msg_1958_, v_declHint_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1967_, lean_object* v_ref_1968_, lean_object* v_msg_1969_, lean_object* v_declHint_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4(v_00_u03b1_1967_, v_ref_1968_, v_msg_1969_, v_declHint_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_ref_1968_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_msg_1978_, lean_object* v_declHint_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_msg_1978_, v_declHint_1979_, v___y_1984_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object* v_msg_1987_, lean_object* v_declHint_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__6_spec__7(v_msg_1987_, v_declHint_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec_ref(v___y_1989_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b1_1996_, lean_object* v_ref_1997_, lean_object* v_msg_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v___x_2005_; 
v___x_2005_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___redArg(v_ref_1997_, v_msg_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b1_2006_, lean_object* v_ref_2007_, lean_object* v_msg_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__1_spec__1_spec__2_spec__4_spec__7(v_00_u03b1_2006_, v_ref_2007_, v_msg_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v_ref_2007_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLetValueType(lean_object* v_e_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
switch(lean_obj_tag(v_e_2016_))
{
case 0:
{
lean_object* v_value_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2031_; 
v_value_2023_ = lean_ctor_get(v_e_2016_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v_e_2016_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2025_ = v_e_2016_;
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_value_2023_);
lean_dec(v_e_2016_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; lean_object* v___x_2029_; 
v___x_2027_ = l_Lean_Compiler_LCNF_InferType_Pure_inferLitValueType(v_value_2023_);
lean_dec_ref(v_value_2023_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 0, v___x_2027_);
v___x_2029_ = v___x_2025_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v___x_2027_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
case 1:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2032_);
return v___x_2033_;
}
case 2:
{
lean_object* v_typeName_2034_; lean_object* v_idx_2035_; lean_object* v_struct_2036_; lean_object* v___x_2037_; 
v_typeName_2034_ = lean_ctor_get(v_e_2016_, 0);
lean_inc(v_typeName_2034_);
v_idx_2035_ = lean_ctor_get(v_e_2016_, 1);
lean_inc(v_idx_2035_);
v_struct_2036_ = lean_ctor_get(v_e_2016_, 2);
lean_inc(v_struct_2036_);
lean_dec_ref_known(v_e_2016_, 3);
v___x_2037_ = l_Lean_Compiler_LCNF_InferType_Pure_inferProjType(v_typeName_2034_, v_idx_2035_, v_struct_2036_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
return v___x_2037_;
}
case 3:
{
lean_object* v_declName_2038_; lean_object* v_us_2039_; lean_object* v_args_2040_; lean_object* v___x_2041_; 
v_declName_2038_ = lean_ctor_get(v_e_2016_, 0);
lean_inc(v_declName_2038_);
v_us_2039_ = lean_ctor_get(v_e_2016_, 1);
lean_inc(v_us_2039_);
v_args_2040_ = lean_ctor_get(v_e_2016_, 2);
lean_inc_ref(v_args_2040_);
lean_dec_ref_known(v_e_2016_, 3);
v___x_2041_ = l_Lean_Compiler_LCNF_InferType_Pure_inferConstType(v_declName_2038_, v_us_2039_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(v_a_2042_, v_args_2040_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
lean_dec_ref(v_args_2040_);
return v___x_2043_;
}
else
{
lean_dec_ref(v_args_2040_);
return v___x_2041_;
}
}
default: 
{
lean_object* v_fvarId_2044_; lean_object* v_args_2045_; lean_object* v___x_2046_; 
v_fvarId_2044_ = lean_ctor_get(v_e_2016_, 0);
lean_inc(v_fvarId_2044_);
v_args_2045_ = lean_ctor_get(v_e_2016_, 1);
lean_inc_ref(v_args_2045_);
lean_dec_ref_known(v_e_2016_, 2);
v___x_2046_ = l_Lean_Compiler_LCNF_InferType_Pure_getType(v_fvarId_2044_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2046_, 1);
v___x_2048_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(v_a_2047_, v_args_2045_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
lean_dec_ref(v_args_2045_);
return v___x_2048_;
}
else
{
lean_dec_ref(v_args_2045_);
return v___x_2046_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_InferType_Pure_inferLetValueType___boxed(lean_object* v_e_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Lean_Compiler_LCNF_InferType_Pure_inferLetValueType(v_e_2049_, v_a_2050_, v_a_2051_, v_a_2052_, v_a_2053_, v_a_2054_);
lean_dec(v_a_2054_);
lean_dec_ref(v_a_2053_);
lean_dec(v_a_2052_);
lean_dec_ref(v_a_2051_);
lean_dec_ref(v_a_2050_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferType(lean_object* v_e_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_){
_start:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2063_ = lean_unsigned_to_nat(32u);
v___x_2064_ = lean_mk_empty_array_with_capacity(v___x_2063_);
lean_dec_ref(v___x_2064_);
v___x_2065_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_2066_ = l_Lean_Compiler_LCNF_InferType_Pure_inferType(v_e_2057_, v___x_2065_, v_a_2058_, v_a_2059_, v_a_2060_, v_a_2061_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferType___boxed(lean_object* v_e_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_Compiler_LCNF_inferType(v_e_2067_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(lean_object* v_msg_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v___x_2080_; lean_object* v_toApplicative_2081_; lean_object* v_toFunctor_2082_; lean_object* v_toSeq_2083_; lean_object* v_toSeqLeft_2084_; lean_object* v_toSeqRight_2085_; lean_object* v___f_2086_; lean_object* v___f_2087_; lean_object* v___f_2088_; lean_object* v___f_2089_; lean_object* v___x_2090_; lean_object* v___f_2091_; lean_object* v___f_2092_; lean_object* v___f_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___f_2099_; lean_object* v___x_208__overap_2100_; lean_object* v___x_2101_; 
v___x_2080_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1);
v_toApplicative_2081_ = lean_ctor_get(v___x_2080_, 0);
v_toFunctor_2082_ = lean_ctor_get(v_toApplicative_2081_, 0);
v_toSeq_2083_ = lean_ctor_get(v_toApplicative_2081_, 2);
v_toSeqLeft_2084_ = lean_ctor_get(v_toApplicative_2081_, 3);
v_toSeqRight_2085_ = lean_ctor_get(v_toApplicative_2081_, 4);
v___f_2086_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2));
v___f_2087_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2082_, 2);
v___f_2088_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2088_, 0, v_toFunctor_2082_);
v___f_2089_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2089_, 0, v_toFunctor_2082_);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___f_2088_);
lean_ctor_set(v___x_2090_, 1, v___f_2089_);
lean_inc(v_toSeqRight_2085_);
v___f_2091_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2091_, 0, v_toSeqRight_2085_);
lean_inc(v_toSeqLeft_2084_);
v___f_2092_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2092_, 0, v_toSeqLeft_2084_);
lean_inc(v_toSeq_2083_);
v___f_2093_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2093_, 0, v_toSeq_2083_);
v___x_2094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2090_);
lean_ctor_set(v___x_2094_, 1, v___f_2086_);
lean_ctor_set(v___x_2094_, 2, v___f_2093_);
lean_ctor_set(v___x_2094_, 3, v___f_2092_);
lean_ctor_set(v___x_2094_, 4, v___f_2091_);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v___f_2087_);
v___x_2096_ = l_StateRefT_x27_instMonad___redArg(v___x_2095_);
v___x_2097_ = l_Lean_instInhabitedExpr;
v___x_2098_ = l_instInhabitedOfMonad___redArg(v___x_2096_, v___x_2097_);
v___f_2099_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2099_, 0, v___x_2098_);
v___x_208__overap_2100_ = lean_panic_fn_borrowed(v___f_2099_, v_msg_2074_);
lean_dec_ref(v___f_2099_);
lean_inc(v___y_2078_);
lean_inc_ref(v___y_2077_);
lean_inc(v___y_2076_);
lean_inc_ref(v___y_2075_);
v___x_2101_ = lean_apply_5(v___x_208__overap_2100_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, lean_box(0));
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0___boxed(lean_object* v_msg_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(v_msg_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
return v_res_2108_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_inferAppType___closed__2(void){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2111_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferAppType___closed__1));
v___x_2112_ = lean_unsigned_to_nat(15u);
v___x_2113_ = lean_unsigned_to_nat(258u);
v___x_2114_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferAppType___closed__0));
v___x_2115_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_2116_ = l_mkPanicMessageWithDecl(v___x_2115_, v___x_2114_, v___x_2113_, v___x_2112_, v___x_2111_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferAppType(uint8_t v_pu_2117_, lean_object* v_fnType_2118_, lean_object* v_args_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
if (v_pu_2117_ == 0)
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2125_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_2126_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(v_fnType_2118_, v_args_2119_, v___x_2125_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
return v___x_2126_;
}
else
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
lean_dec_ref(v_fnType_2118_);
v___x_2127_ = lean_obj_once(&l_Lean_Compiler_LCNF_inferAppType___closed__2, &l_Lean_Compiler_LCNF_inferAppType___closed__2_once, _init_l_Lean_Compiler_LCNF_inferAppType___closed__2);
v___x_2128_ = l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(v___x_2127_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
return v___x_2128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferAppType___boxed(lean_object* v_pu_2129_, lean_object* v_fnType_2130_, lean_object* v_args_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
uint8_t v_pu_boxed_2137_; lean_object* v_res_2138_; 
v_pu_boxed_2137_ = lean_unbox(v_pu_2129_);
v_res_2138_ = l_Lean_Compiler_LCNF_inferAppType(v_pu_boxed_2137_, v_fnType_2130_, v_args_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
lean_dec(v_a_2135_);
lean_dec_ref(v_a_2134_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
lean_dec_ref(v_args_2131_);
return v_res_2138_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Arg_inferType___closed__1(void){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2140_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferAppType___closed__1));
v___x_2141_ = lean_unsigned_to_nat(15u);
v___x_2142_ = lean_unsigned_to_nat(263u);
v___x_2143_ = ((lean_object*)(l_Lean_Compiler_LCNF_Arg_inferType___closed__0));
v___x_2144_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_2145_ = l_mkPanicMessageWithDecl(v___x_2144_, v___x_2143_, v___x_2142_, v___x_2141_, v___x_2140_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_inferType(uint8_t v_pu_2146_, lean_object* v_arg_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_){
_start:
{
if (v_pu_2146_ == 0)
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_2154_ = l_Lean_Compiler_LCNF_InferType_Pure_inferArgType(v_arg_2147_, v___x_2153_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2154_;
}
else
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
lean_dec(v_arg_2147_);
v___x_2155_ = lean_obj_once(&l_Lean_Compiler_LCNF_Arg_inferType___closed__1, &l_Lean_Compiler_LCNF_Arg_inferType___closed__1_once, _init_l_Lean_Compiler_LCNF_Arg_inferType___closed__1);
v___x_2156_ = l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(v___x_2155_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2156_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_inferType___boxed(lean_object* v_pu_2157_, lean_object* v_arg_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_){
_start:
{
uint8_t v_pu_boxed_2164_; lean_object* v_res_2165_; 
v_pu_boxed_2164_ = lean_unbox(v_pu_2157_);
v_res_2165_ = l_Lean_Compiler_LCNF_Arg_inferType(v_pu_boxed_2164_, v_arg_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_);
lean_dec(v_a_2162_);
lean_dec_ref(v_a_2161_);
lean_dec(v_a_2160_);
lean_dec_ref(v_a_2159_);
return v_res_2165_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_inferType___closed__1(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2167_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferAppType___closed__1));
v___x_2168_ = lean_unsigned_to_nat(15u);
v___x_2169_ = lean_unsigned_to_nat(268u);
v___x_2170_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_inferType___closed__0));
v___x_2171_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_2172_ = l_mkPanicMessageWithDecl(v___x_2171_, v___x_2170_, v___x_2169_, v___x_2168_, v___x_2167_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_inferType(uint8_t v_pu_2173_, lean_object* v_e_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_){
_start:
{
if (v_pu_2173_ == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2180_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_2181_ = l_Lean_Compiler_LCNF_InferType_Pure_inferLetValueType(v_e_2174_, v___x_2180_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_);
return v___x_2181_;
}
else
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
lean_dec(v_e_2174_);
v___x_2182_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_inferType___closed__1, &l_Lean_Compiler_LCNF_LetValue_inferType___closed__1_once, _init_l_Lean_Compiler_LCNF_LetValue_inferType___closed__1);
v___x_2183_ = l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(v___x_2182_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_);
return v___x_2183_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_inferType___boxed(lean_object* v_pu_2184_, lean_object* v_e_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_){
_start:
{
uint8_t v_pu_boxed_2191_; lean_object* v_res_2192_; 
v_pu_boxed_2191_ = lean_unbox(v_pu_2184_);
v_res_2192_ = l_Lean_Compiler_LCNF_LetValue_inferType(v_pu_boxed_2191_, v_e_2185_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_);
lean_dec(v_a_2189_);
lean_dec_ref(v_a_2188_);
lean_dec(v_a_2187_);
lean_dec_ref(v_a_2186_);
return v_res_2192_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_inferType___closed__1(void){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2194_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferAppType___closed__1));
v___x_2195_ = lean_unsigned_to_nat(15u);
v___x_2196_ = lean_unsigned_to_nat(279u);
v___x_2197_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_inferType___closed__0));
v___x_2198_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_2199_ = l_mkPanicMessageWithDecl(v___x_2198_, v___x_2197_, v___x_2196_, v___x_2195_, v___x_2194_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t v_pu_2200_, lean_object* v_code_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_){
_start:
{
if (v_pu_2200_ == 0)
{
switch(lean_obj_tag(v_code_2201_))
{
case 3:
{
lean_object* v_fvarId_2207_; lean_object* v_args_2208_; lean_object* v___x_2209_; 
v_fvarId_2207_ = lean_ctor_get(v_code_2201_, 0);
lean_inc(v_fvarId_2207_);
v_args_2208_ = lean_ctor_get(v_code_2201_, 1);
lean_inc_ref(v_args_2208_);
lean_dec_ref_known(v_code_2201_, 2);
v___x_2209_ = l_Lean_Compiler_LCNF_getType(v_fvarId_2207_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v___x_2211_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_2212_ = l_Lean_Compiler_LCNF_InferType_Pure_inferAppTypeCore(v_a_2210_, v_args_2208_, v___x_2211_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_);
lean_dec_ref(v_args_2208_);
return v___x_2212_;
}
else
{
lean_dec_ref(v_args_2208_);
return v___x_2209_;
}
}
case 4:
{
lean_object* v_cases_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2221_; 
v_cases_2213_ = lean_ctor_get(v_code_2201_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v_code_2201_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2215_ = v_code_2201_;
v_isShared_2216_ = v_isSharedCheck_2221_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_cases_2213_);
lean_dec(v_code_2201_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2221_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v_resultType_2217_; lean_object* v___x_2219_; 
v_resultType_2217_ = lean_ctor_get(v_cases_2213_, 1);
lean_inc_ref(v_resultType_2217_);
lean_dec_ref(v_cases_2213_);
if (v_isShared_2216_ == 0)
{
lean_ctor_set_tag(v___x_2215_, 0);
lean_ctor_set(v___x_2215_, 0, v_resultType_2217_);
v___x_2219_ = v___x_2215_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_resultType_2217_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
case 5:
{
lean_object* v_fvarId_2222_; lean_object* v___x_2223_; 
v_fvarId_2222_ = lean_ctor_get(v_code_2201_, 0);
lean_inc(v_fvarId_2222_);
lean_dec_ref_known(v_code_2201_, 1);
v___x_2223_ = l_Lean_Compiler_LCNF_getType(v_fvarId_2222_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_);
return v___x_2223_;
}
case 6:
{
lean_object* v_type_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
v_type_2224_ = lean_ctor_get(v_code_2201_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v_code_2201_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v_code_2201_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_type_2224_);
lean_dec(v_code_2201_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
lean_ctor_set_tag(v___x_2226_, 0);
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_type_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
default: 
{
lean_object* v_k_2232_; 
v_k_2232_ = lean_ctor_get(v_code_2201_, 1);
lean_inc_ref(v_k_2232_);
lean_dec_ref(v_code_2201_);
v_code_2201_ = v_k_2232_;
goto _start;
}
}
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
lean_dec_ref(v_code_2201_);
v___x_2234_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_inferType___closed__1, &l_Lean_Compiler_LCNF_Code_inferType___closed__1_once, _init_l_Lean_Compiler_LCNF_Code_inferType___closed__1);
v___x_2235_ = l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(v___x_2234_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_);
return v___x_2235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferType___boxed(lean_object* v_pu_2236_, lean_object* v_code_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
uint8_t v_pu_boxed_2243_; lean_object* v_res_2244_; 
v_pu_boxed_2243_ = lean_unbox(v_pu_2236_);
v_res_2244_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_boxed_2243_, v_code_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_);
lean_dec(v_a_2241_);
lean_dec_ref(v_a_2240_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___redArg(uint8_t v_pu_2245_, lean_object* v_code_2246_, lean_object* v_h__1_2247_, lean_object* v_h__2_2248_){
_start:
{
if (v_pu_2245_ == 0)
{
lean_object* v___x_2249_; 
lean_dec(v_h__2_2248_);
v___x_2249_ = lean_apply_1(v_h__1_2247_, v_code_2246_);
return v___x_2249_;
}
else
{
lean_object* v___x_2250_; 
lean_dec(v_h__1_2247_);
v___x_2250_ = lean_apply_1(v_h__2_2248_, v_code_2246_);
return v___x_2250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___redArg___boxed(lean_object* v_pu_2251_, lean_object* v_code_2252_, lean_object* v_h__1_2253_, lean_object* v_h__2_2254_){
_start:
{
uint8_t v_pu_32__boxed_2255_; lean_object* v_res_2256_; 
v_pu_32__boxed_2255_ = lean_unbox(v_pu_2251_);
v_res_2256_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___redArg(v_pu_32__boxed_2255_, v_code_2252_, v_h__1_2253_, v_h__2_2254_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter(lean_object* v_motive_2257_, uint8_t v_pu_2258_, lean_object* v_code_2259_, lean_object* v_h__1_2260_, lean_object* v_h__2_2261_){
_start:
{
if (v_pu_2258_ == 0)
{
lean_object* v___x_2262_; 
lean_dec(v_h__2_2261_);
v___x_2262_ = lean_apply_1(v_h__1_2260_, v_code_2259_);
return v___x_2262_;
}
else
{
lean_object* v___x_2263_; 
lean_dec(v_h__1_2260_);
v___x_2263_ = lean_apply_1(v_h__2_2261_, v_code_2259_);
return v___x_2263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter___boxed(lean_object* v_motive_2264_, lean_object* v_pu_2265_, lean_object* v_code_2266_, lean_object* v_h__1_2267_, lean_object* v_h__2_2268_){
_start:
{
uint8_t v_pu_39__boxed_2269_; lean_object* v_res_2270_; 
v_pu_39__boxed_2269_ = lean_unbox(v_pu_2265_);
v_res_2270_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__3_splitter(v_motive_2264_, v_pu_39__boxed_2269_, v_code_2266_, v_h__1_2267_, v_h__2_2268_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__1_splitter___redArg(lean_object* v_code_2271_, lean_object* v_h__1_2272_, lean_object* v_h__2_2273_, lean_object* v_h__3_2274_, lean_object* v_h__4_2275_, lean_object* v_h__5_2276_, lean_object* v_h__6_2277_, lean_object* v_h__7_2278_){
_start:
{
switch(lean_obj_tag(v_code_2271_))
{
case 0:
{
lean_object* v_decl_2279_; lean_object* v_k_2280_; lean_object* v___x_2281_; 
lean_dec(v_h__7_2278_);
lean_dec(v_h__6_2277_);
lean_dec(v_h__5_2276_);
lean_dec(v_h__4_2275_);
lean_dec(v_h__3_2274_);
lean_dec(v_h__2_2273_);
v_decl_2279_ = lean_ctor_get(v_code_2271_, 0);
lean_inc_ref(v_decl_2279_);
v_k_2280_ = lean_ctor_get(v_code_2271_, 1);
lean_inc_ref(v_k_2280_);
lean_dec_ref_known(v_code_2271_, 2);
v___x_2281_ = lean_apply_2(v_h__1_2272_, v_decl_2279_, v_k_2280_);
return v___x_2281_;
}
case 1:
{
lean_object* v_decl_2282_; lean_object* v_k_2283_; lean_object* v___x_2284_; 
lean_dec(v_h__7_2278_);
lean_dec(v_h__6_2277_);
lean_dec(v_h__5_2276_);
lean_dec(v_h__4_2275_);
lean_dec(v_h__3_2274_);
lean_dec(v_h__1_2272_);
v_decl_2282_ = lean_ctor_get(v_code_2271_, 0);
lean_inc_ref(v_decl_2282_);
v_k_2283_ = lean_ctor_get(v_code_2271_, 1);
lean_inc_ref(v_k_2283_);
lean_dec_ref_known(v_code_2271_, 2);
v___x_2284_ = lean_apply_3(v_h__2_2273_, v_decl_2282_, v_k_2283_, lean_box(0));
return v___x_2284_;
}
case 2:
{
lean_object* v_decl_2285_; lean_object* v_k_2286_; lean_object* v___x_2287_; 
lean_dec(v_h__7_2278_);
lean_dec(v_h__6_2277_);
lean_dec(v_h__5_2276_);
lean_dec(v_h__4_2275_);
lean_dec(v_h__2_2273_);
lean_dec(v_h__1_2272_);
v_decl_2285_ = lean_ctor_get(v_code_2271_, 0);
lean_inc_ref(v_decl_2285_);
v_k_2286_ = lean_ctor_get(v_code_2271_, 1);
lean_inc_ref(v_k_2286_);
lean_dec_ref_known(v_code_2271_, 2);
v___x_2287_ = lean_apply_2(v_h__3_2274_, v_decl_2285_, v_k_2286_);
return v___x_2287_;
}
case 3:
{
lean_object* v_fvarId_2288_; lean_object* v_args_2289_; lean_object* v___x_2290_; 
lean_dec(v_h__7_2278_);
lean_dec(v_h__6_2277_);
lean_dec(v_h__4_2275_);
lean_dec(v_h__3_2274_);
lean_dec(v_h__2_2273_);
lean_dec(v_h__1_2272_);
v_fvarId_2288_ = lean_ctor_get(v_code_2271_, 0);
lean_inc(v_fvarId_2288_);
v_args_2289_ = lean_ctor_get(v_code_2271_, 1);
lean_inc_ref(v_args_2289_);
lean_dec_ref_known(v_code_2271_, 2);
v___x_2290_ = lean_apply_2(v_h__5_2276_, v_fvarId_2288_, v_args_2289_);
return v___x_2290_;
}
case 4:
{
lean_object* v_cases_2291_; lean_object* v___x_2292_; 
lean_dec(v_h__6_2277_);
lean_dec(v_h__5_2276_);
lean_dec(v_h__4_2275_);
lean_dec(v_h__3_2274_);
lean_dec(v_h__2_2273_);
lean_dec(v_h__1_2272_);
v_cases_2291_ = lean_ctor_get(v_code_2271_, 0);
lean_inc_ref(v_cases_2291_);
lean_dec_ref_known(v_code_2271_, 1);
v___x_2292_ = lean_apply_1(v_h__7_2278_, v_cases_2291_);
return v___x_2292_;
}
case 5:
{
lean_object* v_fvarId_2293_; lean_object* v___x_2294_; 
lean_dec(v_h__7_2278_);
lean_dec(v_h__6_2277_);
lean_dec(v_h__5_2276_);
lean_dec(v_h__3_2274_);
lean_dec(v_h__2_2273_);
lean_dec(v_h__1_2272_);
v_fvarId_2293_ = lean_ctor_get(v_code_2271_, 0);
lean_inc(v_fvarId_2293_);
lean_dec_ref_known(v_code_2271_, 1);
v___x_2294_ = lean_apply_1(v_h__4_2275_, v_fvarId_2293_);
return v___x_2294_;
}
default: 
{
lean_object* v_type_2295_; lean_object* v___x_2296_; 
lean_dec(v_h__7_2278_);
lean_dec(v_h__5_2276_);
lean_dec(v_h__4_2275_);
lean_dec(v_h__3_2274_);
lean_dec(v_h__2_2273_);
lean_dec(v_h__1_2272_);
v_type_2295_ = lean_ctor_get(v_code_2271_, 0);
lean_inc_ref(v_type_2295_);
lean_dec_ref_known(v_code_2271_, 1);
v___x_2296_ = lean_apply_1(v_h__6_2277_, v_type_2295_);
return v___x_2296_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_Code_inferType_match__1_splitter(lean_object* v_motive_2297_, lean_object* v_code_2298_, lean_object* v_h__1_2299_, lean_object* v_h__2_2300_, lean_object* v_h__3_2301_, lean_object* v_h__4_2302_, lean_object* v_h__5_2303_, lean_object* v_h__6_2304_, lean_object* v_h__7_2305_){
_start:
{
switch(lean_obj_tag(v_code_2298_))
{
case 0:
{
lean_object* v_decl_2306_; lean_object* v_k_2307_; lean_object* v___x_2308_; 
lean_dec(v_h__7_2305_);
lean_dec(v_h__6_2304_);
lean_dec(v_h__5_2303_);
lean_dec(v_h__4_2302_);
lean_dec(v_h__3_2301_);
lean_dec(v_h__2_2300_);
v_decl_2306_ = lean_ctor_get(v_code_2298_, 0);
lean_inc_ref(v_decl_2306_);
v_k_2307_ = lean_ctor_get(v_code_2298_, 1);
lean_inc_ref(v_k_2307_);
lean_dec_ref_known(v_code_2298_, 2);
v___x_2308_ = lean_apply_2(v_h__1_2299_, v_decl_2306_, v_k_2307_);
return v___x_2308_;
}
case 1:
{
lean_object* v_decl_2309_; lean_object* v_k_2310_; lean_object* v___x_2311_; 
lean_dec(v_h__7_2305_);
lean_dec(v_h__6_2304_);
lean_dec(v_h__5_2303_);
lean_dec(v_h__4_2302_);
lean_dec(v_h__3_2301_);
lean_dec(v_h__1_2299_);
v_decl_2309_ = lean_ctor_get(v_code_2298_, 0);
lean_inc_ref(v_decl_2309_);
v_k_2310_ = lean_ctor_get(v_code_2298_, 1);
lean_inc_ref(v_k_2310_);
lean_dec_ref_known(v_code_2298_, 2);
v___x_2311_ = lean_apply_3(v_h__2_2300_, v_decl_2309_, v_k_2310_, lean_box(0));
return v___x_2311_;
}
case 2:
{
lean_object* v_decl_2312_; lean_object* v_k_2313_; lean_object* v___x_2314_; 
lean_dec(v_h__7_2305_);
lean_dec(v_h__6_2304_);
lean_dec(v_h__5_2303_);
lean_dec(v_h__4_2302_);
lean_dec(v_h__2_2300_);
lean_dec(v_h__1_2299_);
v_decl_2312_ = lean_ctor_get(v_code_2298_, 0);
lean_inc_ref(v_decl_2312_);
v_k_2313_ = lean_ctor_get(v_code_2298_, 1);
lean_inc_ref(v_k_2313_);
lean_dec_ref_known(v_code_2298_, 2);
v___x_2314_ = lean_apply_2(v_h__3_2301_, v_decl_2312_, v_k_2313_);
return v___x_2314_;
}
case 3:
{
lean_object* v_fvarId_2315_; lean_object* v_args_2316_; lean_object* v___x_2317_; 
lean_dec(v_h__7_2305_);
lean_dec(v_h__6_2304_);
lean_dec(v_h__4_2302_);
lean_dec(v_h__3_2301_);
lean_dec(v_h__2_2300_);
lean_dec(v_h__1_2299_);
v_fvarId_2315_ = lean_ctor_get(v_code_2298_, 0);
lean_inc(v_fvarId_2315_);
v_args_2316_ = lean_ctor_get(v_code_2298_, 1);
lean_inc_ref(v_args_2316_);
lean_dec_ref_known(v_code_2298_, 2);
v___x_2317_ = lean_apply_2(v_h__5_2303_, v_fvarId_2315_, v_args_2316_);
return v___x_2317_;
}
case 4:
{
lean_object* v_cases_2318_; lean_object* v___x_2319_; 
lean_dec(v_h__6_2304_);
lean_dec(v_h__5_2303_);
lean_dec(v_h__4_2302_);
lean_dec(v_h__3_2301_);
lean_dec(v_h__2_2300_);
lean_dec(v_h__1_2299_);
v_cases_2318_ = lean_ctor_get(v_code_2298_, 0);
lean_inc_ref(v_cases_2318_);
lean_dec_ref_known(v_code_2298_, 1);
v___x_2319_ = lean_apply_1(v_h__7_2305_, v_cases_2318_);
return v___x_2319_;
}
case 5:
{
lean_object* v_fvarId_2320_; lean_object* v___x_2321_; 
lean_dec(v_h__7_2305_);
lean_dec(v_h__6_2304_);
lean_dec(v_h__5_2303_);
lean_dec(v_h__3_2301_);
lean_dec(v_h__2_2300_);
lean_dec(v_h__1_2299_);
v_fvarId_2320_ = lean_ctor_get(v_code_2298_, 0);
lean_inc(v_fvarId_2320_);
lean_dec_ref_known(v_code_2298_, 1);
v___x_2321_ = lean_apply_1(v_h__4_2302_, v_fvarId_2320_);
return v___x_2321_;
}
default: 
{
lean_object* v_type_2322_; lean_object* v___x_2323_; 
lean_dec(v_h__7_2305_);
lean_dec(v_h__5_2303_);
lean_dec(v_h__4_2302_);
lean_dec(v_h__3_2301_);
lean_dec(v_h__2_2300_);
lean_dec(v_h__1_2299_);
v_type_2322_ = lean_ctor_get(v_code_2298_, 0);
lean_inc_ref(v_type_2322_);
lean_dec_ref_known(v_code_2298_, 1);
v___x_2323_ = lean_apply_1(v_h__6_2304_, v_type_2322_);
return v___x_2323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferParamType(uint8_t v_pu_2324_, lean_object* v_params_2325_, lean_object* v_code_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_){
_start:
{
lean_object* v___x_2332_; 
v___x_2332_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_2324_, v_code_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; size_t v_sz_2334_; size_t v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v_sz_2334_ = lean_array_size(v_params_2325_);
v___x_2335_ = ((size_t)0ULL);
v___x_2336_ = l_unsafeCast___redArg(v_params_2325_);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_InferType_Pure_mkForallParams_spec__0(v_sz_2334_, v___x_2335_, v___x_2336_);
v___x_2338_ = l_unsafeCast___redArg(v___x_2337_);
lean_dec_ref(v___x_2337_);
v___x_2339_ = lean_unsigned_to_nat(32u);
v___x_2340_ = lean_mk_empty_array_with_capacity(v___x_2339_);
lean_dec_ref(v___x_2340_);
v___x_2341_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4, &l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg___closed__4);
v___x_2342_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallFVars(v___x_2338_, v_a_2333_, v___x_2341_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
lean_dec(v_a_2333_);
lean_dec(v___x_2338_);
return v___x_2342_;
}
else
{
return v___x_2332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_inferParamType___boxed(lean_object* v_pu_2343_, lean_object* v_params_2344_, lean_object* v_code_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
uint8_t v_pu_boxed_2351_; lean_object* v_res_2352_; 
v_pu_boxed_2351_ = lean_unbox(v_pu_2343_);
v_res_2352_ = l_Lean_Compiler_LCNF_Code_inferParamType(v_pu_boxed_2351_, v_params_2344_, v_code_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec(v_a_2347_);
lean_dec_ref(v_a_2346_);
lean_dec_ref(v_params_2344_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_inferType(uint8_t v_pu_2353_, lean_object* v_alt_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_){
_start:
{
switch(lean_obj_tag(v_alt_2354_))
{
case 0:
{
lean_object* v_code_2360_; lean_object* v___x_2361_; 
v_code_2360_ = lean_ctor_get(v_alt_2354_, 2);
lean_inc_ref(v_code_2360_);
lean_dec_ref_known(v_alt_2354_, 3);
v___x_2361_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_2353_, v_code_2360_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_);
return v___x_2361_;
}
case 1:
{
lean_object* v_code_2362_; lean_object* v___x_2363_; 
v_code_2362_ = lean_ctor_get(v_alt_2354_, 1);
lean_inc_ref(v_code_2362_);
lean_dec_ref_known(v_alt_2354_, 2);
v___x_2363_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_2353_, v_code_2362_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_);
return v___x_2363_;
}
default: 
{
lean_object* v_code_2364_; lean_object* v___x_2365_; 
v_code_2364_ = lean_ctor_get(v_alt_2354_, 0);
lean_inc_ref(v_code_2364_);
lean_dec_ref_known(v_alt_2354_, 1);
v___x_2365_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_2353_, v_code_2364_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_);
return v___x_2365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_inferType___boxed(lean_object* v_pu_2366_, lean_object* v_alt_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_){
_start:
{
uint8_t v_pu_boxed_2373_; lean_object* v_res_2374_; 
v_pu_boxed_2373_ = lean_unbox(v_pu_2366_);
v_res_2374_ = l_Lean_Compiler_LCNF_Alt_inferType(v_pu_boxed_2373_, v_alt_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_);
lean_dec(v_a_2371_);
lean_dec_ref(v_a_2370_);
lean_dec(v_a_2369_);
lean_dec_ref(v_a_2368_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t v_pu_2375_, lean_object* v_e_2376_, lean_object* v_prefixName_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_prefixName_2377_, v_a_2379_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; lean_object* v___x_2385_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2383_, 1);
lean_inc(v_e_2376_);
v___x_2385_ = l_Lean_Compiler_LCNF_LetValue_inferType(v_pu_2375_, v_e_2376_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2387_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = l_Lean_Compiler_LCNF_mkLetDecl(v_pu_2375_, v_a_2384_, v_a_2386_, v_e_2376_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_);
return v___x_2387_;
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
lean_dec(v_a_2384_);
lean_dec(v_e_2376_);
v_a_2388_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2385_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2385_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
else
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
lean_dec(v_e_2376_);
v_a_2396_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v___x_2383_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2383_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl___boxed(lean_object* v_pu_2404_, lean_object* v_e_2405_, lean_object* v_prefixName_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
uint8_t v_pu_boxed_2412_; lean_object* v_res_2413_; 
v_pu_boxed_2412_ = lean_unbox(v_pu_2404_);
v_res_2413_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v_pu_boxed_2412_, v_e_2405_, v_prefixName_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_);
lean_dec(v_a_2410_);
lean_dec_ref(v_a_2409_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
return v_res_2413_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkForallParams___closed__1(void){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2415_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferAppType___closed__1));
v___x_2416_ = lean_unsigned_to_nat(15u);
v___x_2417_ = lean_unsigned_to_nat(295u);
v___x_2418_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkForallParams___closed__0));
v___x_2419_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_2420_ = l_mkPanicMessageWithDecl(v___x_2419_, v___x_2418_, v___x_2417_, v___x_2416_, v___x_2415_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t v_pu_2421_, lean_object* v_params_2422_, lean_object* v_type_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_){
_start:
{
if (v_pu_2421_ == 0)
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Lean_Compiler_LCNF_InferType_Pure_mkForallParams___redArg(v_params_2422_, v_type_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
return v___x_2429_;
}
else
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkForallParams___closed__1, &l_Lean_Compiler_LCNF_mkForallParams___closed__1_once, _init_l_Lean_Compiler_LCNF_mkForallParams___closed__1);
v___x_2431_ = l_panic___at___00Lean_Compiler_LCNF_inferAppType_spec__0(v___x_2430_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
return v___x_2431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkForallParams___boxed(lean_object* v_pu_2432_, lean_object* v_params_2433_, lean_object* v_type_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_){
_start:
{
uint8_t v_pu_boxed_2440_; lean_object* v_res_2441_; 
v_pu_boxed_2440_ = lean_unbox(v_pu_2432_);
v_res_2441_ = l_Lean_Compiler_LCNF_mkForallParams(v_pu_boxed_2440_, v_params_2433_, v_type_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_);
lean_dec(v_a_2438_);
lean_dec_ref(v_a_2437_);
lean_dec(v_a_2436_);
lean_dec_ref(v_a_2435_);
lean_dec_ref(v_type_2434_);
lean_dec_ref(v_params_2433_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux(uint8_t v_pu_2442_, lean_object* v_params_2443_, lean_object* v_code_2444_, lean_object* v_prefixName_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v___x_2451_; 
lean_inc_ref(v_code_2444_);
v___x_2451_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_2442_, v_code_2444_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2453_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v___x_2453_ = l_Lean_Compiler_LCNF_mkForallParams(v_pu_2442_, v_params_2443_, v_a_2452_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_);
lean_dec(v_a_2452_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v_a_2454_; lean_object* v___x_2455_; 
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2453_, 1);
v___x_2455_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_prefixName_2445_, v_a_2447_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2457_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref_known(v___x_2455_, 1);
v___x_2457_ = l_Lean_Compiler_LCNF_mkFunDecl(v_pu_2442_, v_a_2456_, v_a_2454_, v_params_2443_, v_code_2444_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_);
return v___x_2457_;
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
lean_dec(v_a_2454_);
lean_dec_ref(v_code_2444_);
lean_dec_ref(v_params_2443_);
v_a_2458_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2455_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2455_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_dec(v_prefixName_2445_);
lean_dec_ref(v_code_2444_);
lean_dec_ref(v_params_2443_);
v_a_2466_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2453_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2453_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
lean_dec(v_prefixName_2445_);
lean_dec_ref(v_code_2444_);
lean_dec_ref(v_params_2443_);
v_a_2474_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2451_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2451_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux___boxed(lean_object* v_pu_2482_, lean_object* v_params_2483_, lean_object* v_code_2484_, lean_object* v_prefixName_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_){
_start:
{
uint8_t v_pu_boxed_2491_; lean_object* v_res_2492_; 
v_pu_boxed_2491_ = lean_unbox(v_pu_2482_);
v_res_2492_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux(v_pu_boxed_2491_, v_params_2483_, v_code_2484_, v_prefixName_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_);
lean_dec(v_a_2489_);
lean_dec_ref(v_a_2488_);
lean_dec(v_a_2487_);
lean_dec_ref(v_a_2486_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl(lean_object* v_params_2493_, lean_object* v_code_2494_, lean_object* v_prefixName_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
uint8_t v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = 0;
v___x_2502_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux(v___x_2501_, v_params_2493_, v_code_2494_, v_prefixName_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl___boxed(lean_object* v_params_2503_, lean_object* v_code_2504_, lean_object* v_prefixName_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_params_2503_, v_code_2504_, v_prefixName_2505_, v_a_2506_, v_a_2507_, v_a_2508_, v_a_2509_);
lean_dec(v_a_2509_);
lean_dec_ref(v_a_2508_);
lean_dec(v_a_2507_);
lean_dec_ref(v_a_2506_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t v_pu_2512_, lean_object* v_params_2513_, lean_object* v_code_2514_, lean_object* v_prefixName_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_){
_start:
{
lean_object* v___x_2521_; 
v___x_2521_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux(v_pu_2512_, v_params_2513_, v_code_2514_, v_prefixName_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl___boxed(lean_object* v_pu_2522_, lean_object* v_params_2523_, lean_object* v_code_2524_, lean_object* v_prefixName_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_){
_start:
{
uint8_t v_pu_boxed_2531_; lean_object* v_res_2532_; 
v_pu_boxed_2531_ = lean_unbox(v_pu_2522_);
v_res_2532_ = l_Lean_Compiler_LCNF_mkAuxJpDecl(v_pu_boxed_2531_, v_params_2523_, v_code_2524_, v_prefixName_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
lean_dec(v_a_2527_);
lean_dec_ref(v_a_2526_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl_x27(uint8_t v_pu_2533_, lean_object* v_param_2534_, lean_object* v_code_2535_, lean_object* v_prefixName_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v_params_2544_; lean_object* v___x_2545_; 
v___x_2542_ = lean_unsigned_to_nat(1u);
v___x_2543_ = lean_mk_empty_array_with_capacity(v___x_2542_);
v_params_2544_ = lean_array_push(v___x_2543_, v_param_2534_);
v___x_2545_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_mkAuxFunDeclAux(v_pu_2533_, v_params_2544_, v_code_2535_, v_prefixName_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_);
return v___x_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl_x27___boxed(lean_object* v_pu_2546_, lean_object* v_param_2547_, lean_object* v_code_2548_, lean_object* v_prefixName_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_){
_start:
{
uint8_t v_pu_boxed_2555_; lean_object* v_res_2556_; 
v_pu_boxed_2555_ = lean_unbox(v_pu_2546_);
v_res_2556_ = l_Lean_Compiler_LCNF_mkAuxJpDecl_x27(v_pu_boxed_2555_, v_param_2547_, v_code_2548_, v_prefixName_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec(v_a_2551_);
lean_dec_ref(v_a_2550_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg(lean_object* v_msg_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v_toCold_2563_; lean_object* v_ref_2564_; lean_object* v___x_2565_; lean_object* v_env_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v_toCold_2563_ = lean_ctor_get(v___y_2560_, 0);
v_ref_2564_ = lean_ctor_get(v___y_2560_, 2);
v___x_2565_ = lean_st_ref_get(v___y_2561_);
v_env_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc_ref(v_env_2566_);
lean_dec(v___x_2565_);
v___x_2567_ = lean_st_ref_get(v___y_2559_);
v___x_2568_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_2558_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2591_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2591_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2591_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v_lctx_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2589_; 
v_lctx_2573_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2589_ == 0)
{
lean_object* v_unused_2590_; 
v_unused_2590_ = lean_ctor_get(v___x_2567_, 1);
lean_dec(v_unused_2590_);
v___x_2575_ = v___x_2567_;
v_isShared_2576_ = v_isSharedCheck_2589_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_lctx_2573_);
lean_dec(v___x_2567_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2589_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v_options_2577_; uint8_t v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2583_; 
v_options_2577_ = lean_ctor_get(v_toCold_2563_, 2);
v___x_2578_ = lean_unbox(v_a_2569_);
lean_dec(v_a_2569_);
v___x_2579_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_2573_, v___x_2578_);
lean_dec_ref(v_lctx_2573_);
v___x_2580_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1, &l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_InferType_Pure_inferProjType_spec__0___redArg___closed__1);
lean_inc_ref(v_options_2577_);
v___x_2581_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2581_, 0, v_env_2566_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
lean_ctor_set(v___x_2581_, 2, v___x_2579_);
lean_ctor_set(v___x_2581_, 3, v_options_2577_);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 3);
lean_ctor_set(v___x_2575_, 1, v_msg_2557_);
lean_ctor_set(v___x_2575_, 0, v___x_2581_);
v___x_2583_ = v___x_2575_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2581_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v_msg_2557_);
v___x_2583_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
lean_inc(v_ref_2564_);
v___x_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2584_, 0, v_ref_2564_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
if (v_isShared_2572_ == 0)
{
lean_ctor_set_tag(v___x_2571_, 1);
lean_ctor_set(v___x_2571_, 0, v___x_2584_);
v___x_2586_ = v___x_2571_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
else
{
lean_object* v_a_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2599_; 
lean_dec(v___x_2567_);
lean_dec_ref(v_env_2566_);
lean_dec_ref(v_msg_2557_);
v_a_2592_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2594_ = v___x_2568_;
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_a_2592_);
lean_dec(v___x_2568_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2597_; 
if (v_isShared_2595_ == 0)
{
v___x_2597_ = v___x_2594_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_a_2592_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg___boxed(lean_object* v_msg_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg(v_msg_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1(lean_object* v_00_u03b1_2607_, lean_object* v_msg_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg(v_msg_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___boxed(lean_object* v_00_u03b1_2615_, lean_object* v_msg_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1(v_00_u03b1_2615_, v_msg_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg(uint8_t v_pu_2623_, lean_object* v_a_2624_, lean_object* v_b_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_){
_start:
{
lean_object* v_array_2631_; lean_object* v_start_2632_; lean_object* v_stop_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2649_; 
v_array_2631_ = lean_ctor_get(v_a_2624_, 0);
v_start_2632_ = lean_ctor_get(v_a_2624_, 1);
v_stop_2633_ = lean_ctor_get(v_a_2624_, 2);
v_isSharedCheck_2649_ = !lean_is_exclusive(v_a_2624_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2635_ = v_a_2624_;
v_isShared_2636_ = v_isSharedCheck_2649_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_stop_2633_);
lean_inc(v_start_2632_);
lean_inc(v_array_2631_);
lean_dec(v_a_2624_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2649_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
uint8_t v___x_2637_; 
v___x_2637_ = lean_nat_dec_lt(v_start_2632_, v_stop_2633_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; 
lean_del_object(v___x_2635_);
lean_dec(v_stop_2633_);
lean_dec(v_start_2632_);
lean_dec_ref(v_array_2631_);
v___x_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2638_, 0, v_b_2625_);
return v___x_2638_;
}
else
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2642_; 
v___x_2639_ = lean_unsigned_to_nat(1u);
v___x_2640_ = lean_nat_add(v_start_2632_, v___x_2639_);
lean_inc_ref(v_array_2631_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 1, v___x_2640_);
v___x_2642_ = v___x_2635_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_array_2631_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v___x_2640_);
lean_ctor_set(v_reuseFailAlloc_2648_, 2, v_stop_2633_);
v___x_2642_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = lean_array_fget(v_array_2631_, v_start_2632_);
lean_dec(v_start_2632_);
lean_dec_ref(v_array_2631_);
v___x_2644_ = l_Lean_Compiler_LCNF_Alt_inferType(v_pu_2623_, v___x_2643_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2646_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = l_Lean_Compiler_LCNF_joinTypes(v_b_2625_, v_a_2645_);
v_a_2624_ = v___x_2642_;
v_b_2625_ = v___x_2646_;
goto _start;
}
else
{
lean_dec_ref(v___x_2642_);
lean_dec_ref(v_b_2625_);
return v___x_2644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg___boxed(lean_object* v_pu_2650_, lean_object* v_a_2651_, lean_object* v_b_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_){
_start:
{
uint8_t v_pu_boxed_2658_; lean_object* v_res_2659_; 
v_pu_boxed_2658_ = lean_unbox(v_pu_2650_);
v_res_2659_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg(v_pu_boxed_2658_, v_a_2651_, v_b_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
return v_res_2659_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkCasesResultType___closed__0(void){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_2660_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkCasesResultType___closed__2(void){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2662_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkCasesResultType___closed__1));
v___x_2663_ = l_Lean_stringToMessageData(v___x_2662_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkCasesResultType(uint8_t v_pu_2664_, lean_object* v_alts_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v___x_2671_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___x_2685_; lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2671_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkCasesResultType___closed__0, &l_Lean_Compiler_LCNF_mkCasesResultType___closed__0_once, _init_l_Lean_Compiler_LCNF_mkCasesResultType___closed__0);
v___x_2685_ = lean_array_get_size(v_alts_2665_);
v___x_2686_ = lean_unsigned_to_nat(0u);
v___x_2687_ = lean_nat_dec_eq(v___x_2685_, v___x_2686_);
if (v___x_2687_ == 0)
{
v___y_2673_ = v_a_2666_;
v___y_2674_ = v_a_2667_;
v___y_2675_ = v_a_2668_;
v___y_2676_ = v_a_2669_;
goto v___jp_2672_;
}
else
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec_ref(v_alts_2665_);
v___x_2688_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkCasesResultType___closed__2, &l_Lean_Compiler_LCNF_mkCasesResultType___closed__2_once, _init_l_Lean_Compiler_LCNF_mkCasesResultType___closed__2);
v___x_2689_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__1___redArg(v___x_2688_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2689_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2689_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
v___jp_2672_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = lean_array_get_borrowed(v___x_2671_, v_alts_2665_, v___x_2677_);
lean_inc(v___x_2678_);
v___x_2679_ = l_Lean_Compiler_LCNF_Alt_inferType(v_pu_2664_, v___x_2678_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2679_, 1);
v___x_2681_ = lean_unsigned_to_nat(1u);
v___x_2682_ = lean_array_get_size(v_alts_2665_);
v___x_2683_ = l_Array_toSubarray___redArg(v_alts_2665_, v___x_2681_, v___x_2682_);
v___x_2684_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg(v_pu_2664_, v___x_2683_, v_a_2680_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
return v___x_2684_;
}
else
{
lean_dec_ref(v_alts_2665_);
return v___x_2679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkCasesResultType___boxed(lean_object* v_pu_2698_, lean_object* v_alts_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
uint8_t v_pu_boxed_2705_; lean_object* v_res_2706_; 
v_pu_boxed_2705_ = lean_unbox(v_pu_2698_);
v_res_2706_ = l_Lean_Compiler_LCNF_mkCasesResultType(v_pu_boxed_2705_, v_alts_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_);
lean_dec(v_a_2703_);
lean_dec_ref(v_a_2702_);
lean_dec(v_a_2701_);
lean_dec_ref(v_a_2700_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0(uint8_t v_pu_2707_, lean_object* v_inst_2708_, lean_object* v_R_2709_, lean_object* v_a_2710_, lean_object* v_b_2711_, lean_object* v_c_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v___x_2718_; 
v___x_2718_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___redArg(v_pu_2707_, v_a_2710_, v_b_2711_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0___boxed(lean_object* v_pu_2719_, lean_object* v_inst_2720_, lean_object* v_R_2721_, lean_object* v_a_2722_, lean_object* v_b_2723_, lean_object* v_c_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
uint8_t v_pu_boxed_2730_; lean_object* v_res_2731_; 
v_pu_boxed_2730_ = lean_unbox(v_pu_2719_);
v_res_2731_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkCasesResultType_spec__0(v_pu_boxed_2730_, v_inst_2720_, v_R_2721_, v_a_2722_, v_b_2723_, v_c_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go_spec__0(lean_object* v_msg_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v___x_2738_; lean_object* v_toApplicative_2739_; lean_object* v_toFunctor_2740_; lean_object* v_toSeq_2741_; lean_object* v_toSeqLeft_2742_; lean_object* v_toSeqRight_2743_; lean_object* v___f_2744_; lean_object* v___f_2745_; lean_object* v___f_2746_; lean_object* v___f_2747_; lean_object* v___x_2748_; lean_object* v___f_2749_; lean_object* v___f_2750_; lean_object* v___f_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; uint8_t v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___f_2758_; lean_object* v___x_970__overap_2759_; lean_object* v___x_2760_; 
v___x_2738_ = lean_obj_once(&l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1, &l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__1);
v_toApplicative_2739_ = lean_ctor_get(v___x_2738_, 0);
v_toFunctor_2740_ = lean_ctor_get(v_toApplicative_2739_, 0);
v_toSeq_2741_ = lean_ctor_get(v_toApplicative_2739_, 2);
v_toSeqLeft_2742_ = lean_ctor_get(v_toApplicative_2739_, 3);
v_toSeqRight_2743_ = lean_ctor_get(v_toApplicative_2739_, 4);
v___f_2744_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__2));
v___f_2745_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_withLocalDecl___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2740_, 2);
v___f_2746_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2746_, 0, v_toFunctor_2740_);
v___f_2747_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2747_, 0, v_toFunctor_2740_);
v___x_2748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___f_2746_);
lean_ctor_set(v___x_2748_, 1, v___f_2747_);
lean_inc(v_toSeqRight_2743_);
v___f_2749_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2749_, 0, v_toSeqRight_2743_);
lean_inc(v_toSeqLeft_2742_);
v___f_2750_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2750_, 0, v_toSeqLeft_2742_);
lean_inc(v_toSeq_2741_);
v___f_2751_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2751_, 0, v_toSeq_2741_);
v___x_2752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2748_);
lean_ctor_set(v___x_2752_, 1, v___f_2744_);
lean_ctor_set(v___x_2752_, 2, v___f_2751_);
lean_ctor_set(v___x_2752_, 3, v___f_2750_);
lean_ctor_set(v___x_2752_, 4, v___f_2749_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
lean_ctor_set(v___x_2753_, 1, v___f_2745_);
v___x_2754_ = l_StateRefT_x27_instMonad___redArg(v___x_2753_);
v___x_2755_ = 0;
v___x_2756_ = lean_box(v___x_2755_);
v___x_2757_ = l_instInhabitedOfMonad___redArg(v___x_2754_, v___x_2756_);
v___f_2758_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2758_, 0, v___x_2757_);
v___x_970__overap_2759_ = lean_panic_fn_borrowed(v___f_2758_, v_msg_2732_);
lean_dec_ref(v___f_2758_);
lean_inc(v___y_2736_);
lean_inc_ref(v___y_2735_);
lean_inc(v___y_2734_);
lean_inc_ref(v___y_2733_);
v___x_2760_ = lean_apply_5(v___x_970__overap_2759_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, lean_box(0));
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go_spec__0___boxed(lean_object* v_msg_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go_spec__0(v_msg_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
return v_res_2767_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__1(void){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2769_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__2));
v___x_2770_ = lean_unsigned_to_nat(50u);
v___x_2771_ = lean_unsigned_to_nat(345u);
v___x_2772_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__0));
v___x_2773_ = ((lean_object*)(l_Lean_Compiler_LCNF_InferType_Pure_inferType___closed__0));
v___x_2774_ = l_mkPanicMessageWithDecl(v___x_2773_, v___x_2772_, v___x_2771_, v___x_2770_, v___x_2769_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go(lean_object* v_type_2775_, lean_object* v_predVars_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_){
_start:
{
lean_object* v_t_2783_; lean_object* v_b_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v_type_2793_; 
v_type_2793_ = l_Lean_Expr_headBeta(v_type_2775_);
switch(lean_obj_tag(v_type_2793_))
{
case 0:
{
lean_object* v_deBruijnIndex_2794_; uint8_t v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v_deBruijnIndex_2794_ = lean_ctor_get(v_type_2793_, 0);
lean_inc(v_deBruijnIndex_2794_);
lean_dec_ref_known(v_type_2793_, 1);
v___x_2795_ = 0;
v___x_2796_ = lean_array_get_size(v_predVars_2776_);
v___x_2797_ = lean_nat_sub(v___x_2796_, v_deBruijnIndex_2794_);
lean_dec(v_deBruijnIndex_2794_);
v___x_2798_ = lean_unsigned_to_nat(1u);
v___x_2799_ = lean_nat_sub(v___x_2797_, v___x_2798_);
lean_dec(v___x_2797_);
v___x_2800_ = lean_box(v___x_2795_);
v___x_2801_ = lean_array_get(v___x_2800_, v_predVars_2776_, v___x_2799_);
lean_dec(v___x_2799_);
lean_dec_ref(v_predVars_2776_);
lean_dec(v___x_2800_);
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
return v___x_2802_;
}
case 1:
{
lean_object* v_fvarId_2803_; lean_object* v___x_2804_; 
lean_dec_ref(v_predVars_2776_);
v_fvarId_2803_ = lean_ctor_get(v_type_2793_, 0);
lean_inc(v_fvarId_2803_);
lean_dec_ref_known(v_type_2793_, 1);
v___x_2804_ = l_Lean_Compiler_LCNF_getType(v_fvarId_2803_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2814_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2807_ = v___x_2804_;
v_isShared_2808_ = v_isSharedCheck_2814_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2804_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2814_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
uint8_t v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2809_ = l_Lean_Compiler_LCNF_isPredicateType(v_a_2805_);
v___x_2810_ = lean_box(v___x_2809_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v___x_2810_);
v___x_2812_ = v___x_2807_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v___x_2810_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
v_a_2815_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2804_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2804_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
case 3:
{
uint8_t v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
lean_dec_ref_known(v_type_2793_, 1);
lean_dec_ref(v_predVars_2776_);
v___x_2823_ = 0;
v___x_2824_ = lean_box(v___x_2823_);
v___x_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2824_);
return v___x_2825_;
}
case 4:
{
uint8_t v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
lean_dec_ref(v_predVars_2776_);
v___x_2826_ = l_Lean_Expr_isErased(v_type_2793_);
lean_dec_ref_known(v_type_2793_, 2);
v___x_2827_ = lean_box(v___x_2826_);
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
return v___x_2828_;
}
case 5:
{
lean_object* v_fn_2829_; 
v_fn_2829_ = lean_ctor_get(v_type_2793_, 0);
lean_inc_ref(v_fn_2829_);
lean_dec_ref_known(v_type_2793_, 2);
v_type_2775_ = v_fn_2829_;
goto _start;
}
case 6:
{
lean_object* v_binderType_2831_; lean_object* v_body_2832_; 
v_binderType_2831_ = lean_ctor_get(v_type_2793_, 1);
lean_inc_ref(v_binderType_2831_);
v_body_2832_ = lean_ctor_get(v_type_2793_, 2);
lean_inc_ref(v_body_2832_);
lean_dec_ref_known(v_type_2793_, 3);
v_t_2783_ = v_binderType_2831_;
v_b_2784_ = v_body_2832_;
v___y_2785_ = v_a_2777_;
v___y_2786_ = v_a_2778_;
v___y_2787_ = v_a_2779_;
v___y_2788_ = v_a_2780_;
goto v___jp_2782_;
}
case 7:
{
lean_object* v_binderType_2833_; lean_object* v_body_2834_; 
v_binderType_2833_ = lean_ctor_get(v_type_2793_, 1);
lean_inc_ref(v_binderType_2833_);
v_body_2834_ = lean_ctor_get(v_type_2793_, 2);
lean_inc_ref(v_body_2834_);
lean_dec_ref_known(v_type_2793_, 3);
v_t_2783_ = v_binderType_2833_;
v_b_2784_ = v_body_2834_;
v___y_2785_ = v_a_2777_;
v___y_2786_ = v_a_2778_;
v___y_2787_ = v_a_2779_;
v___y_2788_ = v_a_2780_;
goto v___jp_2782_;
}
case 10:
{
lean_object* v_expr_2835_; 
v_expr_2835_ = lean_ctor_get(v_type_2793_, 1);
lean_inc_ref(v_expr_2835_);
lean_dec_ref_known(v_type_2793_, 2);
v_type_2775_ = v_expr_2835_;
goto _start;
}
default: 
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
lean_dec_ref(v_type_2793_);
lean_dec_ref(v_predVars_2776_);
v___x_2837_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__1, &l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___closed__1);
v___x_2838_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go_spec__0(v___x_2837_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
return v___x_2838_;
}
}
v___jp_2782_:
{
uint8_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2789_ = l_Lean_Compiler_LCNF_isPredicateType(v_t_2783_);
v___x_2790_ = lean_box(v___x_2789_);
v___x_2791_ = lean_array_push(v_predVars_2776_, v___x_2790_);
v_type_2775_ = v_b_2784_;
v_predVars_2776_ = v___x_2791_;
v_a_2777_ = v___y_2785_;
v_a_2778_ = v___y_2786_;
v_a_2779_ = v___y_2787_;
v_a_2780_ = v___y_2788_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go___boxed(lean_object* v_type_2839_, lean_object* v_predVars_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go(v_type_2839_, v_predVars_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_);
lean_dec(v_a_2844_);
lean_dec_ref(v_a_2843_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isErasedCompatible(lean_object* v_type_2847_, lean_object* v_predVars_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_){
_start:
{
lean_object* v___x_2854_; 
v___x_2854_ = l___private_Lean_Compiler_LCNF_InferType_0__Lean_Compiler_LCNF_isErasedCompatible_go(v_type_2847_, v_predVars_2848_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isErasedCompatible___boxed(lean_object* v_type_2855_, lean_object* v_predVars_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lean_Compiler_LCNF_isErasedCompatible(v_type_2855_, v_predVars_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
lean_dec(v_a_2860_);
lean_dec_ref(v_a_2859_);
lean_dec(v_a_2858_);
lean_dec_ref(v_a_2857_);
return v_res_2862_;
}
}
LEAN_EXPORT uint8_t l_List_isEqv___at___00Lean_Compiler_LCNF_eqvTypes_spec__0(lean_object* v_x_2863_, lean_object* v_x_2864_){
_start:
{
if (lean_obj_tag(v_x_2863_) == 0)
{
if (lean_obj_tag(v_x_2864_) == 0)
{
uint8_t v___x_2865_; 
v___x_2865_ = 1;
return v___x_2865_;
}
else
{
uint8_t v___x_2866_; 
v___x_2866_ = 0;
return v___x_2866_;
}
}
else
{
if (lean_obj_tag(v_x_2864_) == 0)
{
uint8_t v___x_2867_; 
v___x_2867_ = 0;
return v___x_2867_;
}
else
{
lean_object* v_head_2868_; lean_object* v_tail_2869_; lean_object* v_head_2870_; lean_object* v_tail_2871_; uint8_t v___x_2872_; 
v_head_2868_ = lean_ctor_get(v_x_2863_, 0);
v_tail_2869_ = lean_ctor_get(v_x_2863_, 1);
v_head_2870_ = lean_ctor_get(v_x_2864_, 0);
v_tail_2871_ = lean_ctor_get(v_x_2864_, 1);
v___x_2872_ = l_Lean_Level_isEquiv(v_head_2868_, v_head_2870_);
if (v___x_2872_ == 0)
{
return v___x_2872_;
}
else
{
v_x_2863_ = v_tail_2869_;
v_x_2864_ = v_tail_2871_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isEqv___at___00Lean_Compiler_LCNF_eqvTypes_spec__0___boxed(lean_object* v_x_2874_, lean_object* v_x_2875_){
_start:
{
uint8_t v_res_2876_; lean_object* v_r_2877_; 
v_res_2876_ = l_List_isEqv___at___00Lean_Compiler_LCNF_eqvTypes_spec__0(v_x_2874_, v_x_2875_);
lean_dec(v_x_2875_);
lean_dec(v_x_2874_);
v_r_2877_ = lean_box(v_res_2876_);
return v_r_2877_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_eqvTypes(lean_object* v_a_2878_, lean_object* v_b_2879_){
_start:
{
uint8_t v___x_2880_; lean_object* v_d_u2081_2882_; lean_object* v_b_u2081_2883_; lean_object* v_d_u2082_2884_; lean_object* v_b_u2082_2885_; uint8_t v___x_2888_; uint8_t v___y_2890_; 
v___x_2880_ = lean_expr_eqv(v_a_2878_, v_b_2879_);
v___x_2888_ = 1;
if (v___x_2880_ == 0)
{
uint8_t v___x_2934_; 
v___x_2934_ = l_Lean_Expr_isErased(v_a_2878_);
if (v___x_2934_ == 0)
{
v___y_2890_ = v___x_2880_;
goto v___jp_2889_;
}
else
{
uint8_t v___x_2935_; 
v___x_2935_ = l_Lean_Expr_isErased(v_b_2879_);
v___y_2890_ = v___x_2935_;
goto v___jp_2889_;
}
}
else
{
lean_dec_ref(v_b_2879_);
lean_dec_ref(v_a_2878_);
return v___x_2888_;
}
v___jp_2881_:
{
uint8_t v___x_2886_; 
v___x_2886_ = l_Lean_Compiler_LCNF_eqvTypes(v_d_u2081_2882_, v_d_u2082_2884_);
if (v___x_2886_ == 0)
{
lean_dec_ref(v_b_u2082_2885_);
lean_dec_ref(v_b_u2081_2883_);
return v___x_2880_;
}
else
{
v_a_2878_ = v_b_u2081_2883_;
v_b_2879_ = v_b_u2082_2885_;
goto _start;
}
}
v___jp_2889_:
{
if (v___y_2890_ == 0)
{
lean_object* v_a_x27_2891_; lean_object* v_b_x27_2892_; uint8_t v___x_2893_; 
lean_inc_ref(v_a_2878_);
v_a_x27_2891_ = l_Lean_Expr_headBeta(v_a_2878_);
lean_inc_ref(v_b_2879_);
v_b_x27_2892_ = l_Lean_Expr_headBeta(v_b_2879_);
v___x_2893_ = lean_expr_eqv(v_a_2878_, v_a_x27_2891_);
if (v___x_2893_ == 0)
{
lean_dec_ref(v_b_2879_);
lean_dec_ref(v_a_2878_);
v_a_2878_ = v_a_x27_2891_;
v_b_2879_ = v_b_x27_2892_;
goto _start;
}
else
{
uint8_t v___x_2895_; 
v___x_2895_ = lean_expr_eqv(v_b_2879_, v_b_x27_2892_);
if (v___x_2895_ == 0)
{
lean_dec_ref(v_b_2879_);
lean_dec_ref(v_a_2878_);
v_a_2878_ = v_a_x27_2891_;
v_b_2879_ = v_b_x27_2892_;
goto _start;
}
else
{
lean_dec_ref(v_b_x27_2892_);
lean_dec_ref(v_a_x27_2891_);
switch(lean_obj_tag(v_a_2878_))
{
case 10:
{
lean_object* v_expr_2897_; 
v_expr_2897_ = lean_ctor_get(v_a_2878_, 1);
lean_inc_ref(v_expr_2897_);
lean_dec_ref_known(v_a_2878_, 2);
v_a_2878_ = v_expr_2897_;
goto _start;
}
case 5:
{
switch(lean_obj_tag(v_b_2879_))
{
case 10:
{
lean_object* v_expr_2899_; 
v_expr_2899_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_expr_2899_);
lean_dec_ref_known(v_b_2879_, 2);
v_b_2879_ = v_expr_2899_;
goto _start;
}
case 5:
{
lean_object* v_fn_2901_; lean_object* v_arg_2902_; lean_object* v_fn_2903_; lean_object* v_arg_2904_; uint8_t v___x_2905_; 
v_fn_2901_ = lean_ctor_get(v_a_2878_, 0);
lean_inc_ref(v_fn_2901_);
v_arg_2902_ = lean_ctor_get(v_a_2878_, 1);
lean_inc_ref(v_arg_2902_);
lean_dec_ref_known(v_a_2878_, 2);
v_fn_2903_ = lean_ctor_get(v_b_2879_, 0);
lean_inc_ref(v_fn_2903_);
v_arg_2904_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_arg_2904_);
lean_dec_ref_known(v_b_2879_, 2);
v___x_2905_ = l_Lean_Compiler_LCNF_eqvTypes(v_fn_2901_, v_fn_2903_);
if (v___x_2905_ == 0)
{
lean_dec_ref(v_arg_2904_);
lean_dec_ref(v_arg_2902_);
return v___x_2880_;
}
else
{
v_a_2878_ = v_arg_2902_;
v_b_2879_ = v_arg_2904_;
goto _start;
}
}
default: 
{
lean_dec_ref_known(v_a_2878_, 2);
lean_dec_ref(v_b_2879_);
return v___y_2890_;
}
}
}
case 7:
{
switch(lean_obj_tag(v_b_2879_))
{
case 10:
{
lean_object* v_expr_2907_; 
v_expr_2907_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_expr_2907_);
lean_dec_ref_known(v_b_2879_, 2);
v_b_2879_ = v_expr_2907_;
goto _start;
}
case 7:
{
lean_object* v_binderType_2909_; lean_object* v_body_2910_; lean_object* v_binderType_2911_; lean_object* v_body_2912_; 
v_binderType_2909_ = lean_ctor_get(v_a_2878_, 1);
lean_inc_ref(v_binderType_2909_);
v_body_2910_ = lean_ctor_get(v_a_2878_, 2);
lean_inc_ref(v_body_2910_);
lean_dec_ref_known(v_a_2878_, 3);
v_binderType_2911_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_binderType_2911_);
v_body_2912_ = lean_ctor_get(v_b_2879_, 2);
lean_inc_ref(v_body_2912_);
lean_dec_ref_known(v_b_2879_, 3);
v_d_u2081_2882_ = v_binderType_2909_;
v_b_u2081_2883_ = v_body_2910_;
v_d_u2082_2884_ = v_binderType_2911_;
v_b_u2082_2885_ = v_body_2912_;
goto v___jp_2881_;
}
default: 
{
lean_dec_ref_known(v_a_2878_, 3);
lean_dec_ref(v_b_2879_);
return v___y_2890_;
}
}
}
case 6:
{
switch(lean_obj_tag(v_b_2879_))
{
case 10:
{
lean_object* v_expr_2913_; 
v_expr_2913_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_expr_2913_);
lean_dec_ref_known(v_b_2879_, 2);
v_b_2879_ = v_expr_2913_;
goto _start;
}
case 6:
{
lean_object* v_binderType_2915_; lean_object* v_body_2916_; lean_object* v_binderType_2917_; lean_object* v_body_2918_; 
v_binderType_2915_ = lean_ctor_get(v_a_2878_, 1);
lean_inc_ref(v_binderType_2915_);
v_body_2916_ = lean_ctor_get(v_a_2878_, 2);
lean_inc_ref(v_body_2916_);
lean_dec_ref_known(v_a_2878_, 3);
v_binderType_2917_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_binderType_2917_);
v_body_2918_ = lean_ctor_get(v_b_2879_, 2);
lean_inc_ref(v_body_2918_);
lean_dec_ref_known(v_b_2879_, 3);
v_d_u2081_2882_ = v_binderType_2915_;
v_b_u2081_2883_ = v_body_2916_;
v_d_u2082_2884_ = v_binderType_2917_;
v_b_u2082_2885_ = v_body_2918_;
goto v___jp_2881_;
}
default: 
{
lean_dec_ref_known(v_a_2878_, 3);
lean_dec_ref(v_b_2879_);
return v___y_2890_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_b_2879_))
{
case 10:
{
lean_object* v_expr_2919_; 
v_expr_2919_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_expr_2919_);
lean_dec_ref_known(v_b_2879_, 2);
v_b_2879_ = v_expr_2919_;
goto _start;
}
case 3:
{
lean_object* v_u_2921_; lean_object* v_u_2922_; uint8_t v___x_2923_; 
v_u_2921_ = lean_ctor_get(v_a_2878_, 0);
lean_inc(v_u_2921_);
lean_dec_ref_known(v_a_2878_, 1);
v_u_2922_ = lean_ctor_get(v_b_2879_, 0);
lean_inc(v_u_2922_);
lean_dec_ref_known(v_b_2879_, 1);
v___x_2923_ = l_Lean_Level_isEquiv(v_u_2921_, v_u_2922_);
lean_dec(v_u_2922_);
lean_dec(v_u_2921_);
return v___x_2923_;
}
default: 
{
lean_dec_ref_known(v_a_2878_, 1);
lean_dec_ref(v_b_2879_);
return v___y_2890_;
}
}
}
case 4:
{
switch(lean_obj_tag(v_b_2879_))
{
case 10:
{
lean_object* v_expr_2924_; 
v_expr_2924_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_expr_2924_);
lean_dec_ref_known(v_b_2879_, 2);
v_b_2879_ = v_expr_2924_;
goto _start;
}
case 4:
{
lean_object* v_declName_2926_; lean_object* v_us_2927_; lean_object* v_declName_2928_; lean_object* v_us_2929_; uint8_t v___x_2930_; 
v_declName_2926_ = lean_ctor_get(v_a_2878_, 0);
lean_inc(v_declName_2926_);
v_us_2927_ = lean_ctor_get(v_a_2878_, 1);
lean_inc(v_us_2927_);
lean_dec_ref_known(v_a_2878_, 2);
v_declName_2928_ = lean_ctor_get(v_b_2879_, 0);
lean_inc(v_declName_2928_);
v_us_2929_ = lean_ctor_get(v_b_2879_, 1);
lean_inc(v_us_2929_);
lean_dec_ref_known(v_b_2879_, 2);
v___x_2930_ = lean_name_eq(v_declName_2926_, v_declName_2928_);
lean_dec(v_declName_2928_);
lean_dec(v_declName_2926_);
if (v___x_2930_ == 0)
{
lean_dec(v_us_2929_);
lean_dec(v_us_2927_);
return v___x_2880_;
}
else
{
uint8_t v___x_2931_; 
v___x_2931_ = l_List_isEqv___at___00Lean_Compiler_LCNF_eqvTypes_spec__0(v_us_2927_, v_us_2929_);
lean_dec(v_us_2929_);
lean_dec(v_us_2927_);
return v___x_2931_;
}
}
default: 
{
lean_dec_ref_known(v_a_2878_, 2);
lean_dec_ref(v_b_2879_);
return v___y_2890_;
}
}
}
default: 
{
if (lean_obj_tag(v_b_2879_) == 10)
{
lean_object* v_expr_2932_; 
v_expr_2932_ = lean_ctor_get(v_b_2879_, 1);
lean_inc_ref(v_expr_2932_);
lean_dec_ref_known(v_b_2879_, 2);
v_b_2879_ = v_expr_2932_;
goto _start;
}
else
{
lean_dec_ref(v_b_2879_);
lean_dec_ref(v_a_2878_);
return v___y_2890_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_b_2879_);
lean_dec_ref(v_a_2878_);
return v___x_2888_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eqvTypes___boxed(lean_object* v_a_2936_, lean_object* v_b_2937_){
_start:
{
uint8_t v_res_2938_; lean_object* v_r_2939_; 
v_res_2938_ = l_Lean_Compiler_LCNF_eqvTypes(v_a_2936_, v_b_2937_);
v_r_2939_ = lean_box(v_res_2938_);
return v_r_2939_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_OtherDecl(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_OtherDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_OtherDecl(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_OtherDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_InferType(builtin);
}
#ifdef __cplusplus
}
#endif
